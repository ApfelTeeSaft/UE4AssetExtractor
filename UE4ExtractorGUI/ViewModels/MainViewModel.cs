using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Input;
using Microsoft.Extensions.Logging;
using UE4ExtractorCore.Services;

namespace UE4ExtractorGUI.ViewModels
{
    public class MainViewModel : INotifyPropertyChanged, IDisposable
    {
        private readonly ILogger<MainViewModel> _logger;
        private readonly ISharedMemoryInjector _injector;

        private SharedMemoryClient? _sharedMemoryClient;
        private CancellationTokenSource? _cancellationTokenSource;
        private Timer? _processRefreshTimer;

        private bool _isExtracting = false;
        private string _statusMessage = "Ready";
        private int _progressPercentage = 0;
        private string _progressText = "0%";
        private string _logOutput = string.Empty;
        private string _outputDirectory = string.Empty;
        private ProcessInfo? _selectedProcess = null;
        private bool _disposed = false;

        public ObservableCollection<ProcessInfo> Processes { get; } = new();

        public ICommand StartExtractionCommand { get; }
        public ICommand StopExtractionCommand { get; }
        public ICommand RefreshProcessesCommand { get; }
        public ICommand BrowseOutputDirectoryCommand { get; }
        public ICommand ClearLogCommand { get; }

        public MainViewModel(ILogger<MainViewModel> logger, ISharedMemoryInjector injector)
        {
            _logger = logger ?? throw new ArgumentNullException(nameof(logger));
            _injector = injector ?? throw new ArgumentNullException(nameof(injector));

            StartExtractionCommand = new RelayCommand(async () => await StartExtractionAsync(), () => CanStartExtraction());
            StopExtractionCommand = new RelayCommand(StopExtraction, () => _isExtracting);
            RefreshProcessesCommand = new RelayCommand(RefreshProcesses);
            BrowseOutputDirectoryCommand = new RelayCommand(BrowseOutputDirectory);
            ClearLogCommand = new RelayCommand(ClearLog);

            try
            {
                InitializeAsync();
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Failed to initialize MainViewModel");
                LogMessage($"Initialization error: {ex.Message}");
            }
        }

        public bool IsExtracting
        {
            get => _isExtracting;
            set => SetProperty(ref _isExtracting, value);
        }

        public string StatusMessage
        {
            get => _statusMessage;
            set => SetProperty(ref _statusMessage, value);
        }

        public int ProgressPercentage
        {
            get => _progressPercentage;
            set
            {
                if (SetProperty(ref _progressPercentage, value))
                {
                    ProgressText = $"{value}%";
                }
            }
        }

        public string ProgressText
        {
            get => _progressText;
            set => SetProperty(ref _progressText, value);
        }

        public string LogOutput
        {
            get => _logOutput;
            set => SetProperty(ref _logOutput, value);
        }

        public string OutputDirectory
        {
            get => _outputDirectory;
            set => SetProperty(ref _outputDirectory, value);
        }

        public ProcessInfo? SelectedProcess
        {
            get => _selectedProcess;
            set => SetProperty(ref _selectedProcess, value);
        }

        public bool CanStartExtraction() =>
            !_isExtracting &&
            _selectedProcess != null &&
            !string.IsNullOrWhiteSpace(_outputDirectory);

        private void LogDiagnosticInfo()
        {
            try
            {
                LogMessage("=== DIAGNOSTIC INFORMATION ===");
                LogMessage($"OS: {Environment.OSVersion}");
                LogMessage($"64-bit OS: {Environment.Is64BitOperatingSystem}");
                LogMessage($"64-bit Process: {Environment.Is64BitProcess}");
                LogMessage($"Administrator: {IsRunningAsAdmin()}");
                LogMessage($"Working Directory: {Environment.CurrentDirectory}");
                LogMessage($"App Domain: {AppDomain.CurrentDomain.BaseDirectory}");

                VerifyArchitecture();

                var antiCheatProcesses = DetectAntiCheatProcesses();
                if (antiCheatProcesses.Any())
                {
                    LogMessage("ANTI-CHEAT DETECTED:");
                    foreach (var process in antiCheatProcesses)
                    {
                        LogMessage($"   - {process}");
                    }
                    LogMessage("   These may interfere with DLL injection!");
                }

                LogMessage("================================");
            }
            catch (Exception ex)
            {
                LogMessage($"Failed to gather diagnostic info: {ex.Message}");
            }
        }

        private void VerifyArchitecture()
        {
            LogMessage("=== ARCHITECTURE VERIFICATION ===");
            LogMessage($"Current Process (WPF): {(Environment.Is64BitProcess ? "64-bit" : "32-bit")}");
            LogMessage($"Operating System: {(Environment.Is64BitOperatingSystem ? "64-bit" : "32-bit")}");

            var mainDllPath = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "UE4ExtractorDLL.dll");
            LogMessage($"Main DLL Path: {mainDllPath}");
            LogMessage($"Main DLL Exists: {File.Exists(mainDllPath)}");

            if (File.Exists(mainDllPath))
            {
                var mainDllArch = GetDllArchitecture(mainDllPath);
                LogMessage($"Main DLL Architecture: {mainDllArch}");
            }

            var x86DllPath = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "x86", "UE4ExtractorDLL.dll");
            LogMessage($"x86 DLL Path: {x86DllPath}");
            LogMessage($"x86 DLL Exists: {File.Exists(x86DllPath)}");

            if (File.Exists(x86DllPath))
            {
                var x86DllArch = GetDllArchitecture(x86DllPath);
                LogMessage($"x86 DLL Architecture: {x86DllArch}");
            }

            LogMessage("=== END VERIFICATION ===");
        }

        private string GetDllArchitecture(string dllPath)
        {
            try
            {
                using var fs = new FileStream(dllPath, FileMode.Open, FileAccess.Read);
                var buffer = new byte[4096];
                fs.Read(buffer, 0, buffer.Length);

                if (buffer[0] != 0x4D || buffer[1] != 0x5A)
                    return "Not a PE file";

                int peOffset = BitConverter.ToInt32(buffer, 0x3C);
                if (peOffset >= buffer.Length - 4)
                    return "Invalid PE header";

                if (buffer[peOffset] != 0x50 || buffer[peOffset + 1] != 0x45)
                    return "Invalid PE signature";

                int machineType = BitConverter.ToUInt16(buffer, peOffset + 4);

                return machineType switch
                {
                    0x014c => "32-bit (x86)",
                    0x8664 => "64-bit (x64)",
                    0x0200 => "Itanium",
                    0x01c0 => "ARM",
                    0xaa64 => "ARM64",
                    _ => $"Unknown (0x{machineType:X})"
                };
            }
            catch (Exception ex)
            {
                return $"Error: {ex.Message}";
            }
        }

        private List<string> DetectAntiCheatProcesses()
        {
            var antiCheatNames = new[]
            {
                "BEService", "BattlEye", "BEDaisy",
                "EasyAntiCheat", "EACService",
                "vgc", "vgtray",
                "FACEITService",
                "ESEA",
                "VAC", "Steam",
                "PnkBstrA", "PnkBstrB"
            };

            var detectedProcesses = new List<string>();

            try
            {
                var runningProcesses = Process.GetProcesses();

                foreach (var process in runningProcesses)
                {
                    try
                    {
                        var processName = process.ProcessName?.ToLowerInvariant() ?? "";

                        foreach (var antiCheatName in antiCheatNames)
                        {
                            if (processName.Contains(antiCheatName.ToLowerInvariant()))
                            {
                                detectedProcesses.Add($"{process.ProcessName} (PID: {process.Id})");
                                break;
                            }
                        }
                    }
                    catch
                    {
                    }
                    finally
                    {
                        process.Dispose();
                    }
                }
            }
            catch (Exception ex)
            {
                LogMessage($"Failed to check for anti-cheat processes: {ex.Message}");
            }

            return detectedProcesses;
        }

        private bool IsRunningAsAdmin()
        {
            try
            {
                var identity = System.Security.Principal.WindowsIdentity.GetCurrent();
                var principal = new System.Security.Principal.WindowsPrincipal(identity);
                return principal.IsInRole(System.Security.Principal.WindowsBuiltInRole.Administrator);
            }
            catch
            {
                return false;
            }
        }

        private void InitializeAsync()
        {
            try
            {
                LogMessage("UE4.12 Asset Extractor with Shared Memory Communication initialized successfully.");
                LogDiagnosticInfo();

                OutputDirectory = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.Desktop), "UE4_Extracted_Assets");

                if (!Directory.Exists(OutputDirectory))
                {
                    Directory.CreateDirectory(OutputDirectory);
                }

                RefreshProcesses();

                _processRefreshTimer = new Timer(RefreshProcessesTimer, null, TimeSpan.FromSeconds(2), TimeSpan.FromSeconds(5));

                LogMessage("Initialization completed. Ready for extraction.");
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Failed to initialize application");
                LogMessage($"Initialization failed: {ex.Message}");
            }
        }

        private async Task StartExtractionAsync()
        {
            if (!CanStartExtraction()) return;

            try
            {
                IsExtracting = true;
                _cancellationTokenSource = new CancellationTokenSource();

                LogMessage($"Starting extraction for process: {_selectedProcess!.ProcessName} (PID: {_selectedProcess.ProcessId})");

                StatusMessage = "Injecting DLL and setting up shared memory...";

                var dllPath = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "UE4ExtractorDLL.dll");

                if (!File.Exists(dllPath))
                {
                    throw new FileNotFoundException($"DLL not found: {dllPath}");
                }

                await ValidateDllFile(dllPath);

                LogMessage($"Using DLL: {dllPath}");
                LogMessage("Attempting DLL injection with shared memory setup...");

                // Inject DLL and create shared memory client
                _sharedMemoryClient = await _injector.InjectAndCreateClientAsync(_selectedProcess.ProcessId, dllPath);

                LogMessage("DLL injection successful, connecting to shared memory...");
                StatusMessage = "Connecting to shared memory...";

                // Connect to shared memory
                bool connected = await _sharedMemoryClient.ConnectAsync(30000); // 30 second timeout

                if (!connected)
                {
                    throw new TimeoutException("Failed to connect to shared memory within 30 seconds");
                }

                LogMessage("Successfully connected to shared memory");
                StatusMessage = "Setting up event handlers...";

                // Set up event handlers
                _sharedMemoryClient.ProgressReceived += OnProgressReceived;
                _sharedMemoryClient.StatusReceived += OnStatusReceived;
                _sharedMemoryClient.ErrorReceived += OnErrorReceived;
                _sharedMemoryClient.ExtractionComplete += OnExtractionComplete;

                LogMessage("Event handlers configured, starting monitoring...");

                // Start monitoring in background
                _ = Task.Run(async () =>
                {
                    try
                    {
                        await _sharedMemoryClient.StartMonitoringAsync(_cancellationTokenSource.Token);
                    }
                    catch (Exception ex)
                    {
                        if (!_cancellationTokenSource.Token.IsCancellationRequested)
                        {
                            await System.Windows.Application.Current.Dispatcher.InvokeAsync(() =>
                            {
                                LogMessage($"Error in shared memory monitoring: {ex.Message}");
                                StatusMessage = "Communication error occurred";
                                IsExtracting = false;
                            });
                        }
                    }
                }, _cancellationTokenSource.Token);

                LogMessage("Extraction started successfully with shared memory communication");
                StatusMessage = "Extracting assets...";
            }
            catch (TimeoutException ex)
            {
                LogMessage($"Connection timeout: {ex.Message}");
                LogMessage("");
                LogMessage("🔍 Troubleshooting suggestions:");
                LogMessage("1. Try running as Administrator");
                LogMessage("2. Disable anti-virus temporarily");
                LogMessage("3. For Fortnite: Use Creative Mode (less anti-cheat protection)");
                LogMessage("4. Try a different UE4 game without anti-cheat");
                LogMessage("5. Check Windows Event Viewer for blocked DLL loads");
                LogMessage("6. Check \\ue4_extractor_debug.log for detailed DLL logs");

                StatusMessage = "Connection timeout - see log for help";
                IsExtracting = false;
            }
            catch (Exception ex)
            {
                LogMessage($"Failed to start extraction: {ex.Message}");
                if (ex.InnerException != null)
                {
                    LogMessage($"   Inner exception: {ex.InnerException.Message}");
                }
                StatusMessage = "Extraction failed";
                IsExtracting = false;
                _logger.LogError(ex, "Extraction failed");
            }
        }

        private void StopExtraction()
        {
            if (!_isExtracting) return;

            try
            {
                _cancellationTokenSource?.Cancel();

                // Dispose of shared memory client
                _sharedMemoryClient?.Dispose();
                _sharedMemoryClient = null;

                IsExtracting = false;
                StatusMessage = "Extraction stopped";
                ProgressPercentage = 0;

                LogMessage("Extraction stopped by user");
            }
            catch (Exception ex)
            {
                LogMessage($"Error stopping extraction: {ex.Message}");
                _logger.LogError(ex, "Error stopping extraction");
            }
        }

        private async Task ValidateDllFile(string dllPath)
        {
            await Task.Run(() =>
            {
                try
                {
                    var fileInfo = new FileInfo(dllPath);
                    LogMessage($"DLL file size: {fileInfo.Length:N0} bytes");
                    LogMessage($"DLL modified: {fileInfo.LastWriteTime}");

                    using var fs = new FileStream(dllPath, FileMode.Open, FileAccess.Read);
                    var buffer = new byte[2];
                    fs.Read(buffer, 0, 2);

                    if (buffer[0] != 0x4D || buffer[1] != 0x5A)
                    {
                        throw new InvalidDataException("DLL file is not a valid PE executable");
                    }

                    LogMessage("DLL file validation passed");
                }
                catch (Exception ex)
                {
                    throw new InvalidOperationException($"DLL validation failed: {ex.Message}", ex);
                }
            });
        }

        // Shared Memory Event Handlers
        private void OnProgressReceived(ProgressData progressData)
        {
            try
            {
                System.Windows.Application.Current.Dispatcher.Invoke(() =>
                {
                    ProgressPercentage = progressData.Percentage;
                    StatusMessage = progressData.Message;

                    var logMessage = $"Progress: {progressData.Percentage}% - {progressData.Message}";
                    if (progressData.TotalObjects > 0)
                    {
                        logMessage += $" ({progressData.ProcessedObjects}/{progressData.TotalObjects})";
                    }

                    LogMessage(logMessage);
                });
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error processing progress update");
            }
        }

        private void OnStatusReceived(string status)
        {
            try
            {
                System.Windows.Application.Current.Dispatcher.Invoke(() =>
                {
                    StatusMessage = status;
                    LogMessage($"Status: {status}");
                });
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error processing status update");
            }
        }

        private void OnErrorReceived(string error)
        {
            try
            {
                System.Windows.Application.Current.Dispatcher.Invoke(() =>
                {
                    StatusMessage = "Error occurred";
                    LogMessage($"❌ Error: {error}");
                    IsExtracting = false;
                });
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error processing error message");
            }
        }

        private void OnExtractionComplete()
        {
            try
            {
                System.Windows.Application.Current.Dispatcher.Invoke(() =>
                {
                    IsExtracting = false;
                    StatusMessage = "Extraction completed successfully";
                    ProgressPercentage = 100;
                    LogMessage("🎉 Extraction completed successfully!");
                });
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error processing extraction completion");
            }
        }

        private void RefreshProcesses()
        {
            try
            {
                var processes = new List<ProcessInfo>();
                var allProcesses = Process.GetProcesses();

                foreach (var process in allProcesses)
                {
                    try
                    {
                        if (process.HasExited) continue;

                        var processName = process.ProcessName?.ToLowerInvariant() ?? "";

                        if (processName.Contains("unreal") ||
                            processName.Contains("ue4") ||
                            processName.Contains("ue5") ||
                            processName.Contains("game") ||
                            processName.Contains("fortnite") ||
                            processName.Contains("rocket") ||
                            processName.Contains("ark"))
                        {
                            var processInfo = new ProcessInfo
                            {
                                ProcessId = process.Id,
                                ProcessName = process.ProcessName ?? "Unknown",
                                MainWindowTitle = GetSafeWindowTitle(process)
                            };
                            processes.Add(processInfo);
                        }
                    }
                    catch (Exception ex)
                    {
                        _logger.LogDebug(ex, "Couldn't access process {ProcessName}", process.ProcessName);
                    }
                    finally
                    {
                        process.Dispose();
                    }
                }

                System.Windows.Application.Current?.Dispatcher.BeginInvoke(() =>
                {
                    try
                    {
                        Processes.Clear();
                        foreach (var process in processes.OrderBy(p => p.ProcessName))
                        {
                            Processes.Add(process);
                        }

                        LogMessage($"Found {processes.Count} potential UE4/game processes");
                    }
                    catch (Exception ex)
                    {
                        _logger.LogError(ex, "Error updating process list in UI");
                    }
                });
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error refreshing process list");
                LogMessage($"Error refreshing process list: {ex.Message}");
            }
        }

        private static string GetSafeWindowTitle(Process process)
        {
            try
            {
                return process.MainWindowTitle ?? "";
            }
            catch
            {
                return "";
            }
        }

        private void BrowseOutputDirectory()
        {
            try
            {
                string? selectedPath = null;

                try
                {
                    var dialog = new Microsoft.Win32.OpenFolderDialog
                    {
                        Title = "Select Output Directory",
                        InitialDirectory = Directory.Exists(OutputDirectory) ? OutputDirectory : Environment.GetFolderPath(Environment.SpecialFolder.Desktop)
                    };

                    if (dialog.ShowDialog() == true)
                    {
                        selectedPath = dialog.FolderName;
                    }
                }
                catch (Exception)
                {
                }

                if (!string.IsNullOrEmpty(selectedPath))
                {
                    OutputDirectory = selectedPath;
                    LogMessage($"Output directory changed to: {OutputDirectory}");
                }
            }
            catch (Exception ex)
            {
                LogMessage($"Error browsing for directory: {ex.Message}");
                _logger.LogError(ex, "Error browsing for output directory");
            }
        }

        private void ClearLog()
        {
            LogOutput = string.Empty;
            LogMessage("Log cleared");
        }

        private void RefreshProcessesTimer(object? state)
        {
            if (!_disposed && !_isExtracting)
            {
                RefreshProcesses();
            }
        }

        private void LogMessage(string message)
        {
            var timestamp = DateTime.Now.ToString("HH:mm:ss");
            var logEntry = $"[{timestamp}] {message}";

            try
            {
                System.Windows.Application.Current?.Dispatcher.BeginInvoke(() =>
                {
                    LogOutput += logEntry + Environment.NewLine;
                });
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Failed to log message to UI");
            }

            _logger.LogInformation(message);
        }

        public event PropertyChangedEventHandler? PropertyChanged;

        protected virtual void OnPropertyChanged([CallerMemberName] string? propertyName = null)
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
        }

        protected bool SetProperty<T>(ref T storage, T value, [CallerMemberName] string? propertyName = null)
        {
            if (EqualityComparer<T>.Default.Equals(storage, value))
                return false;

            storage = value;
            OnPropertyChanged(propertyName);
            return true;
        }

        public void Dispose()
        {
            if (_disposed) return;

            _disposed = true;
            _processRefreshTimer?.Dispose();
            _cancellationTokenSource?.Dispose();
            _sharedMemoryClient?.Dispose();
        }
    }

    public class ProcessInfo
    {
        public int ProcessId { get; set; }
        public string ProcessName { get; set; } = string.Empty;
        public string MainWindowTitle { get; set; } = string.Empty;

        public override string ToString()
        {
            var title = !string.IsNullOrWhiteSpace(MainWindowTitle) ? $" - {MainWindowTitle}" : "";
            return $"{ProcessName} (ID: {ProcessId}){title}";
        }
    }

    public class RelayCommand : ICommand
    {
        private readonly Func<Task>? _executeAsync;
        private readonly Action? _execute;
        private readonly Func<bool>? _canExecute;

        public RelayCommand(Action execute, Func<bool>? canExecute = null)
        {
            _execute = execute ?? throw new ArgumentNullException(nameof(execute));
            _canExecute = canExecute;
        }

        public RelayCommand(Func<Task> executeAsync, Func<bool>? canExecute = null)
        {
            _executeAsync = executeAsync ?? throw new ArgumentNullException(nameof(executeAsync));
            _canExecute = canExecute;
        }

        public event EventHandler? CanExecuteChanged
        {
            add { System.Windows.Input.CommandManager.RequerySuggested += value; }
            remove { System.Windows.Input.CommandManager.RequerySuggested -= value; }
        }

        public bool CanExecute(object? parameter) => _canExecute?.Invoke() ?? true;

        public async void Execute(object? parameter)
        {
            try
            {
                if (_executeAsync != null)
                {
                    await _executeAsync();
                }
                else
                {
                    _execute?.Invoke();
                }
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.WriteLine($"Command execution failed: {ex.Message}");
            }
        }
    }
}