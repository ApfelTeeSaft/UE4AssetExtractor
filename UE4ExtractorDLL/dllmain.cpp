#include <windows.h>
#include <fstream>
#include <sstream>
#include "Extractor.h"
#include "framework.h"

extern UE4Extractor* g_pExtractor;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
    {
        DebugLog("=== DLL_PROCESS_ATTACH START ===");

        DWORD processId = GetCurrentProcessId();
        DebugLog("Process ID: " + std::to_string(processId));

        DisableThreadLibraryCalls(hModule);

        try {
            DebugLog("Creating UE4Extractor instance...");
            g_pExtractor = new UE4Extractor();

            // Use process ID as the base name for shared memory objects
            std::string baseName = std::to_string(processId);
            DebugLog("Base name for shared memory: " + baseName);

            DebugLog("Calling Initialize with shared memory...");
            if (!g_pExtractor->Initialize(baseName)) {
                DebugLog("ERROR: Initialize() returned false");
                delete g_pExtractor;
                g_pExtractor = nullptr;
                DebugLog("DLL_PROCESS_ATTACH returning FALSE");
                return FALSE;
            }

            DebugLog("Initialize() succeeded");

            DebugLog("Starting extraction (communication threads)...");
            g_pExtractor->StartExtraction();
            DebugLog("StartExtraction() called");

            DebugLog("=== DLL_PROCESS_ATTACH SUCCESS ===");
        }
        catch (const std::exception& e) {
            DebugLog("EXCEPTION in DLL_PROCESS_ATTACH: " + std::string(e.what()));
            if (g_pExtractor) {
                delete g_pExtractor;
                g_pExtractor = nullptr;
            }
            return FALSE;
        }
        catch (...) {
            DebugLog("UNKNOWN EXCEPTION in DLL_PROCESS_ATTACH");
            if (g_pExtractor) {
                delete g_pExtractor;
                g_pExtractor = nullptr;
            }
            return FALSE;
        }
    }
    break;

    case DLL_THREAD_ATTACH:
        break;

    case DLL_THREAD_DETACH:
        break;

    case DLL_PROCESS_DETACH:
        DebugLog("=== DLL_PROCESS_DETACH ===");
        if (g_pExtractor) {
            DebugLog("Stopping extraction...");
            g_pExtractor->StopExtraction();
            DebugLog("Deleting extractor...");
            delete g_pExtractor;
            g_pExtractor = nullptr;
        }
        DebugLog("=== DLL_PROCESS_DETACH COMPLETE ===");
        break;
    }
    return TRUE;
}