using System.Diagnostics;

namespace UE4ExtractorCore.Services
{
    public interface IDLLInjector
    {
        Task<bool> InjectDLLAsync(string processName, string dllPath);
        Task<bool> InjectDLLAsync(int processId, string dllPath);
        bool IsProcessRunning(string processName);
        List<Process> GetProcessesByName(string processName);
    }
}