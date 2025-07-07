using Microsoft.Extensions.Logging;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.IO.Pipes;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace UE4ExtractorCore.Services
{
    public class DLLInjector : IDLLInjector
    {
        private readonly ILogger<DLLInjector> _logger;

        [DllImport("kernel32.dll")]
        private static extern IntPtr OpenProcess(int dwDesiredAccess, bool bInheritHandle, int dwProcessId);

        [DllImport("kernel32.dll", CharSet = CharSet.Auto)]
        private static extern IntPtr GetModuleHandle(string lpModuleName);

        [DllImport("kernel32", CharSet = CharSet.Ansi, ExactSpelling = true, SetLastError = true)]
        private static extern IntPtr GetProcAddress(IntPtr hModule, string procName);

        [DllImport("kernel32.dll", SetLastError = true, ExactSpelling = true)]
        private static extern IntPtr VirtualAllocEx(IntPtr hProcess, IntPtr lpAddress, uint dwSize, uint flAllocationType, uint flProtect);

        [DllImport("kernel32.dll", SetLastError = true)]
        private static extern bool WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, byte[] lpBuffer, uint nSize, out UIntPtr lpNumberOfBytesWritten);

        [DllImport("kernel32.dll")]
        private static extern IntPtr CreateRemoteThread(IntPtr hProcess, IntPtr lpThreadAttributes, uint dwStackSize, IntPtr lpStartAddress, IntPtr lpParameter, uint dwCreationFlags, IntPtr lpThreadId);

        [DllImport("kernel32.dll", SetLastError = true)]
        private static extern bool CloseHandle(IntPtr hObject);

        [DllImport("kernel32.dll", SetLastError = true)]
        private static extern uint WaitForSingleObject(IntPtr hHandle, uint dwMilliseconds);

        [DllImport("kernel32.dll", SetLastError = true)]
        private static extern bool IsWow64Process(IntPtr hProcess, out bool wow64Process);

        [DllImport("kernel32.dll", SetLastError = true)]
        private static extern bool GetSystemInfo(out SYSTEM_INFO lpSystemInfo);

        [DllImport("kernel32.dll", SetLastError = true)]
        private static extern bool GetExitCodeThread(IntPtr hThread, out uint lpExitCode);

        [StructLayout(LayoutKind.Sequential)]
        private struct SYSTEM_INFO
        {
            public ushort processorArchitecture;
            public ushort reserved;
            public uint pageSize;
            public IntPtr minimumApplicationAddress;
            public IntPtr maximumApplicationAddress;
            public IntPtr activeProcessorMask;
            public uint numberOfProcessors;
            public uint processorType;
            public uint allocationGranularity;
            public ushort processorLevel;
            public ushort processorRevision;
        }

        private const int PROCESS_CREATE_THREAD = 0x0002;
        private const int PROCESS_QUERY_INFORMATION = 0x0400;
        private const int PROCESS_VM_OPERATION = 0x0008;
        private const int PROCESS_VM_WRITE = 0x0020;
        private const int PROCESS_VM_READ = 0x0010;

        private const uint MEM_COMMIT = 0x00001000;
        private const uint MEM_RESERVE = 0x00002000;
        private const uint PAGE_READWRITE = 4;

        public DLLInjector(ILogger<DLLInjector> logger)
        {
            _logger = logger;
        }

        public async Task<bool> InjectDLLAsync(string processName, string dllPath)
        {
            var processes = GetProcessesByName(processName);
            if (!processes.Any())
            {
                _logger.LogError($"No processes found with name: {processName}");
                return false;
            }

            return await InjectDLLAsync(processes.First().Id, dllPath);
        }

        public async Task<bool> InjectDLLAsync(int processId, string dllPath)
        {
            return await InjectDLL(processId, dllPath);
        }

        private async Task<bool> InjectDLL(int processId, string dllPath)
        {
            try
            {
                _logger.LogInformation("=== INJECTION DEBUG START ===");
                _logger.LogInformation($"Injector Process: {(Environment.Is64BitProcess ? "64-bit" : "32-bit")}");
                _logger.LogInformation($"Operating System: {(Environment.Is64BitOperatingSystem ? "64-bit" : "32-bit")}");
                _logger.LogInformation($"Target Process ID: {processId}");
                _logger.LogInformation($"Original DLL Path: {dllPath}");

                string finalDllPath = GetCorrectDllPath(processId, dllPath);
                _logger.LogInformation($"Final DLL Path: {finalDllPath}");

                if (!File.Exists(finalDllPath))
                {
                    _logger.LogError($"DLL FILE NOT FOUND: {finalDllPath}");

                    var directory = Path.GetDirectoryName(finalDllPath);
                    if (Directory.Exists(directory))
                    {
                        _logger.LogError($"Files in {directory}:");
                        foreach (var file in Directory.GetFiles(directory))
                        {
                            _logger.LogError($"  - {file}");
                        }
                    }

                    return false;
                }

                var fileInfo = new FileInfo(finalDllPath);
                _logger.LogInformation($"DLL Size: {fileInfo.Length} bytes");
                _logger.LogInformation($"DLL Modified: {fileInfo.LastWriteTime}");

                var dllArch = GetDllArchitecture(finalDllPath);
                _logger.LogInformation($"DLL Architecture: {dllArch}");

                var targetArch = IsProcess32Bit(processId) ? "32-bit" : "64-bit";
                _logger.LogInformation($"Target Process Architecture: {targetArch}");

                if ((dllArch == "32-bit" && !IsProcess32Bit(processId)) ||
                    (dllArch == "64-bit" && IsProcess32Bit(processId)))
                {
                    _logger.LogError($"ARCHITECTURE MISMATCH: DLL is {dllArch}, target process is {targetArch}");
                    return false;
                }

                _logger.LogInformation("Architecture compatibility verified");

                _logger.LogInformation($"Opening process {processId}...");
                IntPtr processHandle = OpenProcess(
                    PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_VM_READ,
                    false,
                    processId);

                if (processHandle == IntPtr.Zero)
                {
                    var error = Marshal.GetLastWin32Error();
                    _logger.LogError($"Failed to open process {processId}. Error: {error} (0x{error:X})");

                    switch (error)
                    {
                        case 5:
                            _logger.LogError("   -> ACCESS_DENIED: Run as Administrator or target process is protected");
                            break;
                        case 87:
                            _logger.LogError("   -> INVALID_PARAMETER: Process ID might be invalid");
                            break;
                        default:
                            _logger.LogError($"   -> See: https://docs.microsoft.com/en-us/windows/win32/debug/system-error-codes");
                            break;
                    }
                    return false;
                }

                _logger.LogInformation("✅ Process opened successfully");

                try
                {
                    _logger.LogInformation("Getting LoadLibraryA address...");
                    IntPtr kernel32Handle = GetModuleHandle("kernel32.dll");
                    IntPtr loadLibraryAddr = GetProcAddress(kernel32Handle, "LoadLibraryA");

                    if (loadLibraryAddr == IntPtr.Zero)
                    {
                        _logger.LogError("❌ Failed to get LoadLibraryA address");
                        return false;
                    }

                    _logger.LogInformation($"LoadLibraryA address: 0x{loadLibraryAddr.ToInt64():X}");

                    byte[] dllPathBytes = Encoding.ASCII.GetBytes(finalDllPath);
                    _logger.LogInformation($"Allocating {dllPathBytes.Length + 1} bytes in target process...");

                    IntPtr allocMemAddress = VirtualAllocEx(
                        processHandle,
                        IntPtr.Zero,
                        (uint)dllPathBytes.Length + 1,
                        MEM_COMMIT | MEM_RESERVE,
                        PAGE_READWRITE);

                    if (allocMemAddress == IntPtr.Zero)
                    {
                        var error = Marshal.GetLastWin32Error();
                        _logger.LogError($"Failed to allocate memory in target process. Error: {error} (0x{error:X})");
                        return false;
                    }

                    _logger.LogInformation($"Memory allocated at: 0x{allocMemAddress.ToInt64():X}");

                    _logger.LogInformation("Writing DLL path to target process...");
                    if (!WriteProcessMemory(processHandle, allocMemAddress, dllPathBytes, (uint)dllPathBytes.Length, out _))
                    {
                        var error = Marshal.GetLastWin32Error();
                        _logger.LogError($"Failed to write DLL path to target process. Error: {error} (0x{error:X})");
                        return false;
                    }

                    _logger.LogInformation("DLL path written successfully");

                    _logger.LogInformation("Creating remote thread...");
                    IntPtr threadHandle = CreateRemoteThread(
                        processHandle,
                        IntPtr.Zero,
                        0,
                        loadLibraryAddr,
                        allocMemAddress,
                        0,
                        IntPtr.Zero);

                    if (threadHandle == IntPtr.Zero)
                    {
                        var error = Marshal.GetLastWin32Error();
                        _logger.LogError($"Failed to create remote thread. Error: {error} (0x{error:X})");
                        return false;
                    }

                    _logger.LogInformation("Remote thread created successfully");

                    _logger.LogInformation("Waiting for thread completion...");
                    uint waitResult = WaitForSingleObject(threadHandle, 10000);

                    _logger.LogInformation($"Thread wait result: {waitResult}");

                    if (GetExitCodeThread(threadHandle, out uint exitCode))
                    {
                        _logger.LogInformation($"Thread exit code: 0x{exitCode:X}");
                        if (exitCode == 0)
                        {
                            _logger.LogError("LoadLibrary returned NULL - DLL failed to load");
                            _logger.LogError("   Possible causes:");
                            _logger.LogError("   - DLL dependencies missing");
                            _logger.LogError("   - DLL initialization (DllMain) returned FALSE");
                            _logger.LogError("   - Architecture mismatch");
                            _logger.LogError("   - Anti-virus/Windows Defender blocked the DLL");
                            return false;
                        }
                        else
                        {
                            _logger.LogInformation($"LoadLibrary returned handle: 0x{exitCode:X}");
                        }
                    }

                    CloseHandle(threadHandle);

                    if (waitResult == 0)
                    {
                        _logger.LogInformation("DLL injection completed successfully");

                        _logger.LogInformation("Waiting for DLL initialization...");
                        await Task.Delay(3000);

                        string pipeName = $"UE4Extractor_{processId}";
                        bool pipeExists = await CheckIfPipeExists(pipeName, 5000);

                        if (pipeExists)
                        {
                            _logger.LogInformation($"Pipe {pipeName} detected - DLL initialized successfully");
                            return true;
                        }
                        else
                        {
                            _logger.LogError($"Pipe {pipeName} not found after 5 seconds");
                            _logger.LogError("   DLL was loaded but failed to initialize properly");
                            _logger.LogError("   Check Windows Event Viewer for detailed error information");
                            return false;
                        }
                    }
                    else
                    {
                        _logger.LogWarning($"Thread wait result: {waitResult}, but continuing...");
                        return true;
                    }
                }
                finally
                {
                    CloseHandle(processHandle);
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, $"Exception during DLL injection: {ex.Message}");
                return false;
            }
        }

        private string GetDllArchitecture(string dllPath)
        {
            try
            {
                using var fs = new FileStream(dllPath, FileMode.Open, FileAccess.Read);
                var buffer = new byte[4096];
                fs.Read(buffer, 0, buffer.Length);

                if (buffer[0] != 0x4D || buffer[1] != 0x5A)
                    return "Unknown";

                int peOffset = BitConverter.ToInt32(buffer, 0x3C);
                if (peOffset >= buffer.Length - 4)
                    return "Unknown";

                if (buffer[peOffset] != 0x50 || buffer[peOffset + 1] != 0x45)
                    return "Unknown";

                int machineType = BitConverter.ToUInt16(buffer, peOffset + 4);

                return machineType switch
                {
                    0x014c => "32-bit", // IMAGE_FILE_MACHINE_I386
                    0x8664 => "64-bit", // IMAGE_FILE_MACHINE_AMD64
                    _ => $"Unknown (0x{machineType:X})"
                };
            }
            catch
            {
                return "Unknown";
            }
        }

        private string GetCorrectDllPath(int processId, string baseDllPath)
        {
            try
            {
                bool isTargetProcess32Bit = IsProcess32Bit(processId);
                bool isCurrentProcess32Bit = !Environment.Is64BitProcess;

                _logger.LogInformation($"=== DLL PATH SELECTION DEBUG ===");
                _logger.LogInformation($"Target process {processId} is 32-bit: {isTargetProcess32Bit}");
                _logger.LogInformation($"Current process is 32-bit: {isCurrentProcess32Bit}");
                _logger.LogInformation($"Base DLL path: {baseDllPath}");

                string directory = Path.GetDirectoryName(baseDllPath) ?? "";
                string fileName = Path.GetFileNameWithoutExtension(baseDllPath);
                string extension = Path.GetExtension(baseDllPath);

                _logger.LogInformation($"Directory: {directory}");
                _logger.LogInformation($"FileName: {fileName}");
                _logger.LogInformation($"Extension: {extension}");

                if (isTargetProcess32Bit)
                {
                    _logger.LogInformation("Target is 32-bit, looking for x86 DLL...");

                    string x86Path = Path.Combine(directory, "x86", fileName + extension);
                    _logger.LogInformation($"Checking: {x86Path}");
                    _logger.LogInformation($"Exists: {File.Exists(x86Path)}");

                    if (File.Exists(x86Path))
                    {
                        _logger.LogInformation($"Found x86 DLL: {x86Path}");
                        return x86Path;
                    }

                    string x86SuffixPath = Path.Combine(directory, fileName + "_x86" + extension);
                    _logger.LogInformation($"Checking: {x86SuffixPath}");
                    _logger.LogInformation($"Exists: {File.Exists(x86SuffixPath)}");

                    if (File.Exists(x86SuffixPath))
                    {
                        _logger.LogInformation($"Found x86 suffixed DLL: {x86SuffixPath}");
                        return x86SuffixPath;
                    }

                    if (!isCurrentProcess32Bit)
                    {
                        _logger.LogError("ARCHITECTURE MISMATCH: Trying to inject 64-bit DLL into 32-bit process!");
                        _logger.LogError($"Required: 32-bit DLL at {x86Path} or {x86SuffixPath}");
                        _logger.LogError("Solution: Build UE4ExtractorDLL for x86 architecture");
                    }
                }
                else
                {
                    _logger.LogInformation("Target is 64-bit, looking for x64 DLL...");

                    string x64Path = Path.Combine(directory, "x64", fileName + extension);
                    _logger.LogInformation($"Checking: {x64Path}");
                    _logger.LogInformation($"Exists: {File.Exists(x64Path)}");

                    if (File.Exists(x64Path))
                    {
                        _logger.LogInformation($"Found x64 DLL: {x64Path}");
                        return x64Path;
                    }

                    string x64SuffixPath = Path.Combine(directory, fileName + "_x64" + extension);
                    _logger.LogInformation($"Checking: {x64SuffixPath}");
                    _logger.LogInformation($"Exists: {File.Exists(x64SuffixPath)}");

                    if (File.Exists(x64SuffixPath))
                    {
                        _logger.LogInformation($"Found x64 suffixed DLL: {x64SuffixPath}");
                        return x64SuffixPath;
                    }
                }

                _logger.LogWarning($"No architecture-specific DLL found, using original: {baseDllPath}");

                if (isTargetProcess32Bit && !isCurrentProcess32Bit)
                {
                    _logger.LogWarning("WARNING: This may fail due to architecture mismatch (64-bit DLL → 32-bit process)");
                }

                _logger.LogInformation($"=== END DLL PATH SELECTION ===");
                return baseDllPath;
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Failed to determine correct DLL path, using original");
                return baseDllPath;
            }
        }

        private bool IsProcess32Bit(int processId)
        {
            try
            {
                _logger.LogInformation($"=== PROCESS ARCHITECTURE DETECTION ===");
                _logger.LogInformation($"Checking process {processId}...");

                IntPtr processHandle = OpenProcess(PROCESS_QUERY_INFORMATION, false, processId);
                if (processHandle == IntPtr.Zero)
                {
                    _logger.LogWarning($"Failed to open process {processId} for architecture check");
                    return false;
                }

                try
                {
                    if (!Environment.Is64BitOperatingSystem)
                    {
                        _logger.LogInformation("32-bit OS detected - all processes are 32-bit");
                        return true;
                    }

                    bool isWow64;
                    if (IsWow64Process(processHandle, out isWow64))
                    {
                        _logger.LogInformation($"IsWow64Process returned: {isWow64}");
                        _logger.LogInformation($"Process {processId} is 32-bit: {isWow64}");
                        return isWow64;
                    }
                    else
                    {
                        _logger.LogWarning($"IsWow64Process failed for process {processId}");
                        return false;
                    }
                }
                finally
                {
                    CloseHandle(processHandle);
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, $"Exception while determining process architecture for PID {processId}");
                return false;
            }
        }

        private async Task<bool> CheckIfPipeExists(string pipeName, int timeoutMs)
        {
            try
            {
                using var cts = new CancellationTokenSource(timeoutMs);

                while (!cts.Token.IsCancellationRequested)
                {
                    try
                    {
                        using var testClient = new NamedPipeClientStream(".", pipeName, PipeDirection.In);
                        await testClient.ConnectAsync(100, cts.Token);
                        return true;
                    }
                    catch (TimeoutException)
                    {
                    }
                    catch (IOException)
                    {
                        return true;
                    }
                    catch (OperationCanceledException)
                    {
                        break;
                    }

                    await Task.Delay(100, cts.Token);
                }

                return false;
            }
            catch
            {
                return false;
            }
        }

        public bool IsProcessRunning(string processName)
        {
            return GetProcessesByName(processName).Any();
        }

        public List<Process> GetProcessesByName(string processName)
        {
            try
            {
                return Process.GetProcessesByName(processName).ToList();
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, $"Failed to get processes by name: {processName}");
                return new List<Process>();
            }
        }
    }
}