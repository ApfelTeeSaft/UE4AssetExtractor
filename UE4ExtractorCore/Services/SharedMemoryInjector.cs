using Microsoft.Extensions.Logging;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace UE4ExtractorCore.Services
{
    public class SharedMemoryInjector : ISharedMemoryInjector
    {
        private readonly ILogger<SharedMemoryInjector> _logger;
        private readonly ILoggerFactory _loggerFactory;

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
        private static extern bool GetExitCodeThread(IntPtr hThread, out uint lpExitCode);

        private const int PROCESS_CREATE_THREAD = 0x0002;
        private const int PROCESS_QUERY_INFORMATION = 0x0400;
        private const int PROCESS_VM_OPERATION = 0x0008;
        private const int PROCESS_VM_WRITE = 0x0020;
        private const int PROCESS_VM_READ = 0x0010;

        private const uint MEM_COMMIT = 0x00001000;
        private const uint MEM_RESERVE = 0x00002000;
        private const uint PAGE_READWRITE = 4;

        public SharedMemoryInjector(ILogger<SharedMemoryInjector> logger, ILoggerFactory loggerFactory)
        {
            _logger = logger;
            _loggerFactory = loggerFactory;
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

        public async Task<SharedMemoryClient> InjectAndCreateClientAsync(int processId, string dllPath)
        {
            _logger.LogInformation("Starting injection and shared memory client creation for process {ProcessId}", processId);

            // First inject the DLL
            bool injectionSuccess = await InjectDLL(processId, dllPath);
            if (!injectionSuccess)
            {
                throw new Exception("Failed to inject DLL into target process");
            }

            _logger.LogInformation("DLL injection successful, creating shared memory client");

            // Create and return the shared memory client using the logger factory
            var clientLogger = _loggerFactory.CreateLogger<SharedMemoryClient>();
            var client = new SharedMemoryClient(clientLogger, processId);

            _logger.LogInformation("Shared memory client created for process {ProcessId}", processId);
            return client;
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

                        // Give the DLL time to initialize
                        _logger.LogInformation("Waiting for DLL initialization...");
                        await Task.Delay(3000);

                        return true;
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
                    0x014c => "32-bit",
                    0x8664 => "64-bit",
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
                string directory = Path.GetDirectoryName(baseDllPath) ?? "";
                string fileName = Path.GetFileNameWithoutExtension(baseDllPath);
                string extension = Path.GetExtension(baseDllPath);

                if (isTargetProcess32Bit)
                {
                    string x86Path = Path.Combine(directory, "x86", fileName + extension);
                    if (File.Exists(x86Path))
                    {
                        return x86Path;
                    }

                    string x86SuffixPath = Path.Combine(directory, fileName + "_x86" + extension);
                    if (File.Exists(x86SuffixPath))
                    {
                        return x86SuffixPath;
                    }
                }
                else
                {
                    string x64Path = Path.Combine(directory, "x64", fileName + extension);
                    if (File.Exists(x64Path))
                    {
                        return x64Path;
                    }

                    string x64SuffixPath = Path.Combine(directory, fileName + "_x64" + extension);
                    if (File.Exists(x64SuffixPath))
                    {
                        return x64SuffixPath;
                    }
                }

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
                IntPtr processHandle = OpenProcess(PROCESS_QUERY_INFORMATION, false, processId);
                if (processHandle == IntPtr.Zero)
                {
                    return false;
                }

                try
                {
                    if (!Environment.Is64BitOperatingSystem)
                    {
                        return true;
                    }

                    if (IsWow64Process(processHandle, out bool isWow64))
                    {
                        return isWow64;
                    }
                    else
                    {
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