using Microsoft.Extensions.Logging;
using System;
using System.IO;
using System.IO.MemoryMappedFiles;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace UE4ExtractorCore.Services
{
    public enum MessageType : int
    {
        Progress = 1,
        ObjectData = 2,
        Status = 3,
        Error = 4,
        Complete = 5
    }

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct MessageHeader
    {
        public MessageType Type;
        public int DataLength;
        public long Timestamp;
    }

    public class ProgressData
    {
        public int Percentage { get; set; }
        public string Message { get; set; } = string.Empty;
        public uint ProcessedObjects { get; set; }
        public uint TotalObjects { get; set; }
    }

    public class SharedMemoryClient : IDisposable
    {
        private readonly ILogger<SharedMemoryClient> _logger;
        private MemoryMappedFile? _mmf;
        private MemoryMappedViewAccessor? _accessor;
        private EventWaitHandle? _dataAvailableEvent;
        private EventWaitHandle? _dataReadEvent;
        private readonly string _memoryName;
        private readonly string _dataEventName;
        private readonly string _readEventName;
        private bool _disposed;
        private const int BUFFER_SIZE = 64 * 1024; // 64KB buffer

        public event Action<ProgressData>? ProgressReceived;
        public event Action<string>? StatusReceived;
        public event Action<string>? ErrorReceived;
        public event Action? ExtractionComplete;

        public SharedMemoryClient(ILogger<SharedMemoryClient> logger, int processId)
        {
            _logger = logger;
            _memoryName = $"UE4Extractor_Memory_{processId}";
            _dataEventName = $"UE4Extractor_DataAvailable_{processId}";
            _readEventName = $"UE4Extractor_DataRead_{processId}";
        }

        public async Task<bool> ConnectAsync(int timeoutMs = 30000)
        {
            try
            {
                _logger.LogInformation("Attempting to connect to shared memory: {MemoryName}", _memoryName);

                var startTime = DateTime.UtcNow;
                var timeout = TimeSpan.FromMilliseconds(timeoutMs);

                // Wait for the DLL to create the shared memory
                while (DateTime.UtcNow - startTime < timeout)
                {
                    try
                    {
                        // Try to open existing memory-mapped file
                        _mmf = MemoryMappedFile.OpenExisting(_memoryName);
                        _accessor = _mmf.CreateViewAccessor(0, BUFFER_SIZE);

                        // Open the events
                        _dataAvailableEvent = EventWaitHandle.OpenExisting(_dataEventName);
                        _dataReadEvent = EventWaitHandle.OpenExisting(_readEventName);

                        _logger.LogInformation("Successfully connected to shared memory");
                        return true;
                    }
                    catch (FileNotFoundException)
                    {
                        // DLL hasn't created the shared memory yet, wait a bit
                        await Task.Delay(500);
                    }
                    catch (Exception ex)
                    {
                        _logger.LogWarning("Error connecting to shared memory: {Error}", ex.Message);
                        await Task.Delay(1000);
                    }
                }

                _logger.LogError("Timeout waiting for shared memory to become available");
                return false;
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Failed to connect to shared memory");
                return false;
            }
        }

        public async Task StartMonitoringAsync(CancellationToken cancellationToken = default)
        {
            if (_accessor == null || _dataAvailableEvent == null || _dataReadEvent == null)
            {
                throw new InvalidOperationException("Not connected to shared memory");
            }

            _logger.LogInformation("Starting shared memory monitoring");

            await Task.Run(() =>
            {
                var waitHandles = new WaitHandle[] { _dataAvailableEvent, cancellationToken.WaitHandle };

                try
                {
                    while (!cancellationToken.IsCancellationRequested)
                    {
                        // Wait for data to be available or cancellation
                        int result = WaitHandle.WaitAny(waitHandles, 5000); // 5 second timeout

                        if (result == 0) // Data available
                        {
                            try
                            {
                                ProcessMessage();
                                _dataReadEvent.Set(); // Signal that we've read the data
                            }
                            catch (Exception ex)
                            {
                                _logger.LogError(ex, "Error processing message from shared memory");
                            }
                        }
                        else if (result == 1) // Cancellation requested
                        {
                            break;
                        }
                        // Timeout (result == WaitHandle.WaitTimeout) - continue loop
                    }
                }
                catch (Exception ex)
                {
                    _logger.LogError(ex, "Error in shared memory monitoring loop");
                }
            }, cancellationToken);

            _logger.LogInformation("Shared memory monitoring stopped");
        }

        private void ProcessMessage()
        {
            try
            {
                if (_accessor == null) return;

                // Read the message header
                var headerSize = Marshal.SizeOf<MessageHeader>();
                var headerBytes = new byte[headerSize];

                for (int i = 0; i < headerSize; i++)
                {
                    headerBytes[i] = _accessor.ReadByte(i);
                }

                var handle = GCHandle.Alloc(headerBytes, GCHandleType.Pinned);
                try
                {
                    var header = Marshal.PtrToStructure<MessageHeader>(handle.AddrOfPinnedObject());

                    if (header.DataLength < 0 || header.DataLength > BUFFER_SIZE - headerSize)
                    {
                        _logger.LogWarning("Invalid message data length: {Length}", header.DataLength);
                        return;
                    }

                    // Read the message data
                    var dataBytes = new byte[header.DataLength];
                    for (int i = 0; i < header.DataLength; i++)
                    {
                        dataBytes[i] = _accessor.ReadByte(headerSize + i);
                    }

                    ProcessMessageData(header.Type, dataBytes);
                }
                finally
                {
                    handle.Free();
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error processing message from shared memory");
            }
        }

        private void ProcessMessageData(MessageType type, byte[] data)
        {
            try
            {
                var message = Encoding.UTF8.GetString(data);

                switch (type)
                {
                    case MessageType.Progress:
                        ProcessProgressMessage(message);
                        break;

                    case MessageType.Status:
                        StatusReceived?.Invoke(message);
                        break;

                    case MessageType.Error:
                        ErrorReceived?.Invoke(message);
                        break;

                    case MessageType.Complete:
                        ExtractionComplete?.Invoke();
                        break;

                    case MessageType.ObjectData:
                        // Handle object data if needed
                        _logger.LogDebug("Received object data: {Message}", message);
                        break;

                    default:
                        _logger.LogWarning("Unknown message type: {Type}", type);
                        break;
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error processing message data for type {Type}", type);
            }
        }

        private void ProcessProgressMessage(string message)
        {
            try
            {
                var parts = message.Split('|');
                if (parts.Length >= 2)
                {
                    if (int.TryParse(parts[0], out int percentage))
                    {
                        var progressData = new ProgressData
                        {
                            Percentage = percentage,
                            Message = parts[1]
                        };

                        if (parts.Length >= 4)
                        {
                            if (uint.TryParse(parts[2], out uint processed))
                                progressData.ProcessedObjects = processed;
                            if (uint.TryParse(parts[3], out uint total))
                                progressData.TotalObjects = total;
                        }

                        ProgressReceived?.Invoke(progressData);
                    }
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error parsing progress message: {Message}", message);
            }
        }

        public void Dispose()
        {
            if (_disposed) return;

            try
            {
                _dataAvailableEvent?.Dispose();
                _dataReadEvent?.Dispose();
                _accessor?.Dispose();
                _mmf?.Dispose();
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error disposing shared memory client");
            }

            _disposed = true;
        }
    }

    // Interface to replace IDLLInjector with shared memory support
    public interface ISharedMemoryInjector : IDLLInjector
    {
        Task<SharedMemoryClient> InjectAndCreateClientAsync(int processId, string dllPath);
    }
}