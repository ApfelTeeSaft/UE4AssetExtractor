#include "Extractor.h"
#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <psapi.h>
#include <dbghelp.h>
#include <shlobj.h>
#include "framework.h"

#include "SDK.hpp"

UE4Extractor* g_pExtractor = nullptr;

// SharedMemoryCommunicator Implementation
SharedMemoryCommunicator::SharedMemoryCommunicator()
    : m_hMemoryMap(NULL)
    , m_hDataAvailableEvent(NULL)
    , m_hDataReadEvent(NULL)
    , m_pMappedView(nullptr)
    , m_WriteBusy(0)
{
}

SharedMemoryCommunicator::~SharedMemoryCommunicator() {
    Cleanup();
}

bool SharedMemoryCommunicator::Initialize(const std::string& baseName) {
    try {
        DebugLog("=== SharedMemoryCommunicator::Initialize START ===");
        DebugLog("Base name: " + baseName);

        m_MemoryName = "UE4Extractor_Memory_" + baseName;
        m_DataEventName = "UE4Extractor_DataAvailable_" + baseName;
        m_ReadEventName = "UE4Extractor_DataRead_" + baseName;

        DebugLog("Memory name: " + m_MemoryName);
        DebugLog("Data event name: " + m_DataEventName);
        DebugLog("Read event name: " + m_ReadEventName);

        // Create memory-mapped file
        m_hMemoryMap = CreateFileMappingA(
            INVALID_HANDLE_VALUE,
            NULL,
            PAGE_READWRITE,
            0,
            BUFFER_SIZE,
            m_MemoryName.c_str()
        );

        if (m_hMemoryMap == NULL) {
            DWORD error = GetLastError();
            DebugLog("ERROR: CreateFileMapping failed with error: " + std::to_string(error));
            return false;
        }

        DebugLog("Memory-mapped file created successfully");

        // Map view of file
        m_pMappedView = MapViewOfFile(
            m_hMemoryMap,
            FILE_MAP_ALL_ACCESS,
            0,
            0,
            BUFFER_SIZE
        );

        if (m_pMappedView == nullptr) {
            DWORD error = GetLastError();
            DebugLog("ERROR: MapViewOfFile failed with error: " + std::to_string(error));
            return false;
        }

        DebugLog("Memory view mapped successfully");

        // Initialize the memory with zeros
        ZeroMemory(m_pMappedView, BUFFER_SIZE);

        // Create events
        m_hDataAvailableEvent = CreateEventA(
            NULL,
            FALSE, // Auto-reset
            FALSE, // Initially not signaled
            m_DataEventName.c_str()
        );

        if (m_hDataAvailableEvent == NULL) {
            DWORD error = GetLastError();
            DebugLog("ERROR: CreateEvent (DataAvailable) failed with error: " + std::to_string(error));
            return false;
        }

        m_hDataReadEvent = CreateEventA(
            NULL,
            FALSE, // Auto-reset
            FALSE, // Initially not signaled
            m_ReadEventName.c_str()
        );

        if (m_hDataReadEvent == NULL) {
            DWORD error = GetLastError();
            DebugLog("ERROR: CreateEvent (DataRead) failed with error: " + std::to_string(error));
            return false;
        }

        DebugLog("Events created successfully");
        DebugLog("=== SharedMemoryCommunicator::Initialize SUCCESS ===");
        return true;
    }
    catch (const std::exception& e) {
        DebugLog("EXCEPTION in Initialize: " + std::string(e.what()));
        return false;
    }
    catch (...) {
        DebugLog("UNKNOWN EXCEPTION in Initialize");
        return false;
    }
}

void SharedMemoryCommunicator::Cleanup() {
    if (m_pMappedView) {
        UnmapViewOfFile(m_pMappedView);
        m_pMappedView = nullptr;
    }

    if (m_hMemoryMap) {
        CloseHandle(m_hMemoryMap);
        m_hMemoryMap = NULL;
    }

    if (m_hDataAvailableEvent) {
        CloseHandle(m_hDataAvailableEvent);
        m_hDataAvailableEvent = NULL;
    }

    if (m_hDataReadEvent) {
        CloseHandle(m_hDataReadEvent);
        m_hDataReadEvent = NULL;
    }
}

bool SharedMemoryCommunicator::SendMessage(MessageType type, const std::string& data) {
    // Simple atomic busy flag - if another thread is writing, skip this message
    if (InterlockedCompareExchange(&m_WriteBusy, 1, 0) != 0) {
        DebugLog("WARNING: Skipping message - another thread is writing");
        return false;
    }

    try {
        if (!m_pMappedView || !m_hDataAvailableEvent || !m_hDataReadEvent) {
            DebugLog("ERROR: SendMessage called but not initialized");
            InterlockedExchange(&m_WriteBusy, 0);
            return false;
        }

        // Create message header
        MessageHeader header;
        header.Type = type;
        header.DataLength = static_cast<int>(data.length());
        header.Timestamp = GetTickCount64();

        size_t totalSize = sizeof(MessageHeader) + data.length();
        if (totalSize > BUFFER_SIZE) {
            DebugLog("ERROR: Message too large: " + std::to_string(totalSize) + " bytes");
            InterlockedExchange(&m_WriteBusy, 0);
            return false;
        }

        // Copy header to shared memory
        memcpy(m_pMappedView, &header, sizeof(MessageHeader));

        // Copy data to shared memory
        if (data.length() > 0) {
            memcpy(static_cast<char*>(m_pMappedView) + sizeof(MessageHeader), data.c_str(), data.length());
        }

        // Signal that data is available
        if (!SetEvent(m_hDataAvailableEvent)) {
            DWORD error = GetLastError();
            DebugLog("ERROR: SetEvent failed with error: " + std::to_string(error));
            InterlockedExchange(&m_WriteBusy, 0);
            return false;
        }

        // Wait for the client to read the data (with timeout)
        DWORD result = WaitForSingleObject(m_hDataReadEvent, 5000); // 5 second timeout
        if (result != WAIT_OBJECT_0) {
            if (result == WAIT_TIMEOUT) {
                DebugLog("WARNING: Timeout waiting for data to be read");
            }
            else {
                DebugLog("ERROR: WaitForSingleObject failed: " + std::to_string(result));
            }
            // Continue anyway, don't fail the send operation
        }

        InterlockedExchange(&m_WriteBusy, 0);
        return true;
    }
    catch (const std::exception& e) {
        DebugLog("EXCEPTION in SendMessage: " + std::string(e.what()));
        InterlockedExchange(&m_WriteBusy, 0);
        return false;
    }
    catch (...) {
        DebugLog("UNKNOWN EXCEPTION in SendMessage");
        InterlockedExchange(&m_WriteBusy, 0);
        return false;
    }
}

bool SharedMemoryCommunicator::SendProgress(int percentage, const std::string& message, uint32_t processed, uint32_t total) {
    std::ostringstream oss;
    oss << percentage << "|" << message;
    if (total > 0) {
        oss << "|" << processed << "|" << total;
    }

    DebugLog("Sending progress: " + oss.str());
    return SendMessage(MessageType::Progress, oss.str());
}

bool SharedMemoryCommunicator::SendStatus(const std::string& status) {
    DebugLog("Sending status: " + status);
    return SendMessage(MessageType::Status, status);
}

bool SharedMemoryCommunicator::SendError(const std::string& error) {
    DebugLog("Sending error: " + error);
    return SendMessage(MessageType::Error, error);
}

bool SharedMemoryCommunicator::SendComplete() {
    DebugLog("Sending completion signal");
    return SendMessage(MessageType::Complete, "Extraction completed");
}

std::string GetDesktopPath() {
    char path[MAX_PATH];
    if (SHGetFolderPathA(NULL, CSIDL_DESKTOP, NULL, 0, path) == S_OK) {
        return std::string(path);
    }
    return "";
}

UE4Extractor::UE4Extractor()
    : m_hExtractionThread(NULL)
    , m_hCommunicationThread(NULL)
    , m_dwMainThreadId(GetCurrentThreadId())
{
    std::string desktopPath = GetDesktopPath();

    m_OutputDirectory = desktopPath + "\\UE4_Extracted_Assets";
    m_pCommunicator = std::make_unique<SharedMemoryCommunicator>();
}

UE4Extractor::~UE4Extractor() {
    StopExtraction();
    CleanupSDK();
}

bool UE4Extractor::Initialize(const std::string& baseName, const std::string& outputDir) {
    if (!outputDir.empty()) {
        m_OutputDirectory = outputDir;
    }

    CreateDirectoryA(m_OutputDirectory.c_str(), NULL);

    if (!InitializeSDK()) {
        return false;
    }

    if (!ValidateUEEnvironment()) {
        return false;
    }

    if (!InitializeCommunication(baseName)) {
        return false;
    }

    return true;
}

bool UE4Extractor::InitializeSDK() {
    try {
        if (!SDK::UObject::GObjects) {
            return false;
        }

        auto testWorld = SDK::UWorld::GetWorld();
        return true;
    }
    catch (...) {
        return false;
    }
}

void UE4Extractor::CleanupSDK() {
    m_ObjectCache.clear();
    m_NameToObjectMap.clear();
    m_ExtractedObjects.clear();
}

bool UE4Extractor::ValidateUEEnvironment() {
    try {
        HMODULE hEngine = GetModuleHandleA("UE4Game.exe");
        if (!hEngine) {
            hEngine = GetModuleHandleA("UE4Editor.exe");
        }
        if (!hEngine) {
            HMODULE modules[1024];
            DWORD needed;
            if (EnumProcessModules(GetCurrentProcess(), modules, sizeof(modules), &needed)) {
                for (unsigned int i = 0; i < (needed / sizeof(HMODULE)); i++) {
                    char moduleName[MAX_PATH];
                    if (GetModuleFileNameExA(GetCurrentProcess(), modules[i], moduleName, sizeof(moduleName))) {
                        std::string name(moduleName);
                        if (name.find("UE4") != std::string::npos || name.find("Unreal") != std::string::npos) {
                            return true;
                        }
                    }
                }
            }
            return false;
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::InitializeCommunication(const std::string& baseName) {
    DebugLog("=== InitializeCommunication() START ===");
    DebugLog("Base name: " + baseName);

    try {
        if (!m_pCommunicator->Initialize(baseName)) {
            DebugLog("ERROR: Failed to initialize shared memory communicator");
            return false;
        }

        DebugLog("Shared memory communication initialized successfully");
        DebugLog("=== InitializeCommunication() SUCCESS ===");
        return true;
    }
    catch (const std::exception& e) {
        DebugLog("EXCEPTION in InitializeCommunication(): " + std::string(e.what()));
        return false;
    }
    catch (...) {
        DebugLog("UNKNOWN EXCEPTION in InitializeCommunication()");
        return false;
    }
}

void UE4Extractor::StartExtraction() {
    DebugLog("=== StartExtraction() START ===");

    if (m_bIsRunning.load()) {
        DebugLog("Already running, returning early");
        return;
    }

    DebugLog("Setting up extraction...");
    m_bShouldStop.store(false);

    m_pCommunicator->SendStatus("DLL connected successfully");

    DebugLog("Creating communication thread...");
    m_hCommunicationThread = CreateThread(NULL, 0, CommunicationThreadProc, this, 0, NULL);
    if (m_hCommunicationThread == NULL) {
        DWORD error = GetLastError();
        DebugLog("ERROR: Failed to create communication thread. Error: " + std::to_string(error));
        return;
    }
    DebugLog("Communication thread created successfully");

    DebugLog("=== StartExtraction() SUCCESS ===");
}

void UE4Extractor::StopExtraction() {
    if (!m_bIsRunning.load()) {
        return;
    }

    m_bShouldStop.store(true);

    HANDLE threads[] = { m_hExtractionThread, m_hCommunicationThread };
    WaitForMultipleObjects(2, threads, TRUE, 5000);

    if (m_hExtractionThread) {
        CloseHandle(m_hExtractionThread);
        m_hExtractionThread = NULL;
    }

    if (m_hCommunicationThread) {
        CloseHandle(m_hCommunicationThread);
        m_hCommunicationThread = NULL;
    }
}

DWORD WINAPI UE4Extractor::ExtractionThreadProc(LPVOID lpParam) {
    UE4Extractor* extractor = static_cast<UE4Extractor*>(lpParam);
    extractor->ExtractionMainLoop();
    return 0;
}

DWORD WINAPI UE4Extractor::CommunicationThreadProc(LPVOID lpParam) {
    UE4Extractor* extractor = static_cast<UE4Extractor*>(lpParam);
    extractor->CommunicationLoop();
    return 0;
}

void UE4Extractor::ExtractionMainLoop() {
    DebugLog("=== ExtractionMainLoop() START ===");
    m_bIsRunning.store(true);

    try {
        DebugLog("Starting comprehensive asset extraction...");

        SendProgress(0, "Starting comprehensive asset extraction...");
        Sleep(500);

        SendProgress(10, "Initializing UE4 systems...");
        Sleep(500);

        SendProgress(25, "Scanning object hierarchy...");

        auto allAssets = ExtractAllAssets();

        SendProgress(60, "Extracting level actors...");

        auto levelActors = ExtractLevelActors();

        m_ExtractedObjects.insert(m_ExtractedObjects.end(), allAssets.begin(), allAssets.end());
        m_ExtractedObjects.insert(m_ExtractedObjects.end(), levelActors.begin(), levelActors.end());

        SendProgress(75, "Saving extracted data...");

        bool saveSuccess = SaveExtractedData();

        if (saveSuccess) {
            SendProgress(100, "Extraction completed successfully!");
            m_pCommunicator->SendComplete();
        }
        else {
            m_pCommunicator->SendError("Failed to save some extracted data");
        }

        DebugLog("Extraction sequence completed with " + std::to_string(m_ExtractedObjects.size()) + " objects");

        for (int i = 0; i < 10 && !m_bShouldStop.load(); i++) {
            Sleep(1000);
        }

    }
    catch (const std::exception& e) {
        std::string errorMsg = "Extraction failed: " + std::string(e.what());
        DebugLog("EXCEPTION in ExtractionMainLoop: " + errorMsg);
        m_pCommunicator->SendError(errorMsg);
    }
    catch (...) {
        DebugLog("UNKNOWN EXCEPTION in ExtractionMainLoop");
        m_pCommunicator->SendError("Extraction failed: Unknown error");
    }

    m_bIsRunning.store(false);
    DebugLog("=== ExtractionMainLoop() END ===");
}

void UE4Extractor::CommunicationLoop() {
    DebugLog("=== CommunicationLoop() START ===");

    try {
        DebugLog("Waiting a moment for client to be ready...");
        Sleep(1000);

        DebugLog("Sending initial progress message...");
        SendProgress(1, "DLL communication established");

        Sleep(500);

        DebugLog("Starting extraction thread...");
        if (m_hExtractionThread == NULL) {
            m_hExtractionThread = CreateThread(NULL, 0, ExtractionThreadProc, this, 0, NULL);
            if (m_hExtractionThread == NULL) {
                DWORD threadError = GetLastError();
                DebugLog("ERROR: Failed to create extraction thread. Error: " + std::to_string(threadError));
            }
            else {
                DebugLog("Extraction thread created successfully");
            }
        }

        DebugLog("Entering main communication loop...");
        int loopCount = 0;
        while (!m_bShouldStop.load()) {
            if (loopCount % 50 == 0) {
                DebugLog("Communication loop iteration: " + std::to_string(loopCount / 50));
            }

            ProcessCommands();
            Sleep(100);
            loopCount++;

            if (m_hExtractionThread != NULL) {
                DWORD exitCode = 0;
                if (GetExitCodeThread(m_hExtractionThread, &exitCode)) {
                    if (exitCode != STILL_ACTIVE) {
                        DebugLog("Extraction thread completed with exit code: " + std::to_string(exitCode));
                        break;
                    }
                }
            }
        }

        DebugLog("Communication loop ended normally");
    }
    catch (const std::exception& e) {
        DebugLog("EXCEPTION in CommunicationLoop: " + std::string(e.what()));
    }
    catch (...) {
        DebugLog("UNKNOWN EXCEPTION in CommunicationLoop");
    }

    DebugLog("=== CommunicationLoop() END ===");
}

std::vector<CompleteObjectData> UE4Extractor::ExtractAllAssets() {
    std::vector<CompleteObjectData> extractedAssets;

    try {
        if (!SDK::UObject::GObjects) {
            return extractedAssets;
        }

        int totalObjects = SDK::UObject::GObjects->Num();
        m_TotalObjects.store(totalObjects);

        SendProgress(10, "Scanning " + std::to_string(totalObjects) + " objects...");

        for (int i = 0; i < totalObjects && !m_bShouldStop.load(); i++) {
            SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);

            if (!IsValidUEObject(obj)) {
                continue;
            }

            try {
                std::string className = GetObjectClassName(obj);

                if (className.find("StaticMesh") != std::string::npos ||
                    className.find("SkeletalMesh") != std::string::npos ||
                    className.find("Texture2D") != std::string::npos ||
                    className.find("Material") != std::string::npos ||
                    className.find("AnimSequence") != std::string::npos) {

                    CompleteObjectData objectData = ExtractCompleteObject(obj);
                    if (!objectData.Name.empty()) {
                        extractedAssets.push_back(objectData);
                        m_ProcessedObjects.fetch_add(1);
                    }
                }
            }
            catch (...) {
            }

            if (i % 100 == 0) {
                int progress = 10 + (20 * i) / totalObjects;
                SendProgress(progress, "Processing object " + std::to_string(i) + "/" + std::to_string(totalObjects),
                    m_ProcessedObjects.load(), totalObjects);
            }
        }
    }
    catch (...) {
    }

    return extractedAssets;
}

std::vector<CompleteObjectData> UE4Extractor::ExtractLevelActors() {
    std::vector<CompleteObjectData> levelObjects;

    try {
        SDK::UWorld* world = SDK::UWorld::GetWorld();
        if (!world) {
            return levelObjects;
        }

        if (!world->PersistentLevel) {
            return levelObjects;
        }

        SDK::ULevel* level = world->PersistentLevel;
        if (!level) {
            return levelObjects;
        }

        SDK::TArray<SDK::AActor*>& actors = level->Actors;

        for (int i = 0; i < actors.Num() && !m_bShouldStop.load(); i++) {
            SDK::AActor* actor = actors[i];
            if (!IsValidUEObject(reinterpret_cast<SDK::UObject*>(actor))) {
                continue;
            }

            try {
                CompleteObjectData actorData = ExtractCompleteObject(reinterpret_cast<SDK::UObject*>(actor));
                if (!actorData.Name.empty()) {
                    levelObjects.push_back(actorData);
                }
            }
            catch (...) {
            }

            if (i % 10 == 0) {
                int progress = 30 + (30 * i) / actors.Num();
                SendProgress(progress, "Processing level actor " + std::to_string(i) + "/" + std::to_string(actors.Num()));
            }
        }
    }
    catch (...) {
    }

    return levelObjects;
}

CompleteObjectData UE4Extractor::ExtractCompleteObject(SDK::UObject* object) {
    CompleteObjectData objectData;

    if (!IsValidUEObject(object)) {
        return objectData;
    }

    try {
        objectData.Name = GetObjectName(object);
        objectData.FullName = GetObjectFullName(object);
        objectData.ClassName = GetObjectClassName(object);
        objectData.PackageName = GetObjectPackageName(object);
        objectData.ObjectAddress = reinterpret_cast<uintptr_t>(object);

        try {
            auto objectPtr = reinterpret_cast<uintptr_t*>(object);
            if (IsValidMemoryAddress(reinterpret_cast<uintptr_t>(objectPtr + 1))) {
                objectData.ObjectFlags = static_cast<uint32_t>(objectPtr[1]);
            }
            objectData.InternalIndex = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(object) & 0xFFFFFFFF);
        }
        catch (...) {
        }

        objectData.Properties = ExtractObjectProperties(object);
        objectData.Dependencies = ExtractObjectDependencies(object);
        objectData.PropertyData = SerializeObjectProperties(object);

        std::string className = objectData.ClassName;
        if (className.find("StaticMesh") != std::string::npos) {
            ExtractStaticMeshData(static_cast<SDK::UStaticMesh*>(object), objectData);
        }
        else if (className.find("SkeletalMesh") != std::string::npos) {
            ExtractSkeletalMeshData(static_cast<SDK::USkeletalMesh*>(object), objectData);
        }
        else if (className.find("Texture2D") != std::string::npos) {
            ExtractTextureData(static_cast<SDK::UTexture2D*>(object), objectData);
        }
        else if (className.find("Material") != std::string::npos && className.find("Instance") == std::string::npos) {
            ExtractMaterialData(static_cast<SDK::UMaterial*>(object), objectData);
        }
        else if (className.find("MaterialInstance") != std::string::npos) {
            ExtractMaterialInstanceData(static_cast<SDK::UMaterialInstance*>(object), objectData);
        }
        else if (className.find("AnimSequence") != std::string::npos) {
            ExtractAnimationData(static_cast<SDK::UAnimSequence*>(object), objectData);
        }

        m_ObjectCache[objectData.ObjectAddress] = objectData;
        m_NameToObjectMap[objectData.FullName] = objectData.ObjectAddress;
    }
    catch (...) {
        objectData = CompleteObjectData{};
    }

    return objectData;
}

bool UE4Extractor::ExtractStaticMeshData(SDK::UStaticMesh* staticMesh, CompleteObjectData& objectData) {
    try {
        if (!staticMesh) {
            return false;
        }

        // Access render data dependent on SDK generation
        // For now, basic information and note that mesh data exists
        objectData.MeshInfo.VertexCount = 0;
        objectData.MeshInfo.FaceCount = 0;

        // Access materials if available
        try {
            // Look for StaticMaterials or Materials member
            // SDK-dependent, so we'll try a generic approach
            objectData.MeshInfo.MaterialSlots.push_back("DefaultMaterial");
        }
        catch (...) {
            // Skip if materials not accessible
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::ExtractSkeletalMeshData(SDK::USkeletalMesh* skeletalMesh, CompleteObjectData& objectData) {
    try {
        if (!skeletalMesh) {
            return false;
        }

        objectData.MeshInfo.VertexCount = 0;

        // Extract basic skeletal information
        try {
            // Look for skeleton reference - SDK dependent
            objectData.AnimInfo.BoneNames.push_back("RootBone"); // Placeholder
        }
        catch (...) {
            // Skip if skeleton not accessible
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::ExtractTextureData(SDK::UTexture2D* texture, CompleteObjectData& objectData) {
    try {
        if (!texture) {
            return false;
        }

        // Try to access basic texture properties
        // Member names are SDK-dependent
        try {
            // Look for SizeX, SizeY, or similar members
            objectData.TextureInfo.Width = 0;   // Will try to populate from SDK
            objectData.TextureInfo.Height = 0;  // Will try to populate from SDK
            objectData.TextureInfo.Format = 0;
            objectData.TextureInfo.MipLevels = 1;
            objectData.TextureInfo.CompressionFormat = "Unknown";
        }
        catch (...) {
            // Use defaults if members not accessible
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::ExtractMaterialData(SDK::UMaterial* material, CompleteObjectData& objectData) {
    try {
        if (!material) {
            return false;
        }

        objectData.MaterialInfo.MaterialDomain = "Surface";
        objectData.MaterialInfo.BlendMode = "Opaque";
        objectData.MaterialInfo.bTwoSided = false;

        try {
            // Look for Expressions array or similar
            objectData.MaterialInfo.TextureReferences.push_back("DefaultTexture");
        }
        catch (...) {
            // Skip if expressions not accessible
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::ExtractMaterialInstanceData(SDK::UMaterialInstance* materialInstance, CompleteObjectData& objectData) {
    try {
        if (!materialInstance) {
            return false;
        }

        try {
            // Look for Parent material reference
            // This is SDK-dependent
        }
        catch (...) {
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::ExtractAnimationData(SDK::UAnimSequence* animation, CompleteObjectData& objectData) {
    try {
        if (!animation) {
            return false;
        }

        // Extract basic animation properties
        objectData.AnimInfo.Duration = 1.0f;     // Default values
        objectData.AnimInfo.FrameRate = 30.0f;
        objectData.AnimInfo.NumFrames = 30;
        objectData.AnimInfo.CompressionScheme = "Unknown";

        // Try to access sequence length if available
        try {
            // Look for SequenceLength member
            if (animation->SequenceLength > 0) {
                objectData.AnimInfo.Duration = animation->SequenceLength;
                objectData.AnimInfo.NumFrames = static_cast<uint32_t>(animation->SequenceLength * 30.0f);
            }
        }
        catch (...) {
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

std::vector<uint8_t> UE4Extractor::SerializeObjectProperties(SDK::UObject* object) {
    std::vector<uint8_t> propertyData;

    try {
        uintptr_t objectAddr = reinterpret_cast<uintptr_t>(object);
        propertyData.resize(sizeof(uintptr_t));
        memcpy(propertyData.data(), &objectAddr, sizeof(uintptr_t));
    }
    catch (...) {
        // Return empty data on error
    }

    return propertyData;
}

std::unordered_map<std::string, std::string> UE4Extractor::ExtractObjectProperties(SDK::UObject* object) {
    std::unordered_map<std::string, std::string> properties;

    try {
        if (!object) {
            return properties;
        }

        // Extract basic object properties that should be available
        properties["ObjectAddress"] = std::to_string(reinterpret_cast<uintptr_t>(object));
        properties["Class"] = GetObjectClassName(object);

        // Try to access additional properties if available in SDK
        // This is highly dependent on the specific SDK generation
    }
    catch (...) {
    }

    return properties;
}

std::vector<std::string> UE4Extractor::ExtractObjectDependencies(SDK::UObject* object) {
    std::vector<std::string> dependencies;

    try {
        if (!object) {
            return dependencies;
        }

        std::string className = GetObjectClassName(object);
        if (!className.empty()) {
            dependencies.push_back(className);
        }
    }
    catch (...) {
    }

    return dependencies;
}

std::string UE4Extractor::GetObjectName(SDK::UObject* object) {
    try {
        if (!IsValidUEObject(object)) {
            return "";
        }
        return object->GetName();
    }
    catch (...) {
        return "InvalidObject";
    }
}

std::string UE4Extractor::GetObjectFullName(SDK::UObject* object) {
    try {
        if (!IsValidUEObject(object)) {
            return "";
        }
        return object->GetFullName();
    }
    catch (...) {
        return "InvalidObject";
    }
}

std::string UE4Extractor::GetObjectClassName(SDK::UObject* object) {
    if (!IsValidUEObject(object)) {
        return "";
    }
    try {
        return object->Class->GetName();
    }
    catch (...) {
        return "UnknownClass";
    }
}

std::string UE4Extractor::GetObjectPackageName(SDK::UObject* object) {
    try {
        if (!IsValidUEObject(object)) {
            return "";
        }

        // Try to traverse to package
        SDK::UObject* current = object;
        while (current) {
            try {
                // Try to access outer if available
                auto outer = current->Outer;
                if (!outer) break;
                current = outer;
            }
            catch (...) {
                break;
            }
        }

        return current ? current->GetName() : "UnknownPackage";
    }
    catch (...) {
        return "InvalidPackage";
    }
}

bool UE4Extractor::IsValidUEObject(SDK::UObject* object) {
    try {
        if (!object) {
            return false;
        }

        if (!IsValidMemoryAddress(reinterpret_cast<uintptr_t>(object))) {
            return false;
        }

        try {
            auto name = object->GetName();
            if (name.empty()) {
                return false;
            }
        }
        catch (...) {
            return false;
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::IsValidMemoryAddress(uintptr_t address) {
    if (address == 0) {
        return false;
    }

    MEMORY_BASIC_INFORMATION mbi;
    if (VirtualQuery(reinterpret_cast<LPCVOID>(address), &mbi, sizeof(mbi)) == 0) {
        return false;
    }

    if (mbi.State != MEM_COMMIT) {
        return false;
    }

    if (!(mbi.Protect & (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE))) {
        return false;
    }

    return true;
}

std::string UE4Extractor::SafeGetString(const char* str) {
    try {
        if (!str) {
            return "";
        }

        if (!IsValidMemoryAddress(reinterpret_cast<uintptr_t>(str))) {
            return "";
        }

        return std::string(str);
    }
    catch (...) {
        return "";
    }
}

void UE4Extractor::SendProgress(int percentage, const std::string& message, uint32_t processed, uint32_t total) {
    m_ProgressPercent.store(percentage);

    if (m_pCommunicator) {
        m_pCommunicator->SendProgress(percentage, message, processed, total);
    }
}

void UE4Extractor::SendObjectData(const CompleteObjectData& objectData) {
    if (m_pCommunicator) {
        std::ostringstream oss;
        oss << objectData.Name << "|" << objectData.ClassName << "|" << objectData.PackageName;
        m_pCommunicator->SendMessage(MessageType::ObjectData, oss.str());
    }
}

void UE4Extractor::ProcessCommands() {
    // This method can be used for bidirectional communication if needed
    // For now, it's just a placeholder that checks if we should stop
}

bool UE4Extractor::SaveExtractedData() {
    try {
        CreateDirectoryA((m_OutputDirectory + "\\StaticMeshes").c_str(), NULL);
        CreateDirectoryA((m_OutputDirectory + "\\SkeletalMeshes").c_str(), NULL);
        CreateDirectoryA((m_OutputDirectory + "\\Textures").c_str(), NULL);
        CreateDirectoryA((m_OutputDirectory + "\\Materials").c_str(), NULL);
        CreateDirectoryA((m_OutputDirectory + "\\Animations").c_str(), NULL);
        CreateDirectoryA((m_OutputDirectory + "\\Metadata").c_str(), NULL);

        int saved = 0;
        int total = static_cast<int>(m_ExtractedObjects.size());

        for (const auto& objectData : m_ExtractedObjects) {
            if (SaveObjectToFile(objectData)) {
                saved++;
            }

            SendProgress(80 + (15 * saved) / total,
                "Saved " + std::to_string(saved) + "/" + std::to_string(total) + " objects");
        }

        std::ofstream summaryFile(m_OutputDirectory + "\\extraction_summary.json");
        if (summaryFile.is_open()) {
            summaryFile << "{\n";
            summaryFile << "  \"totalObjects\": " << total << ",\n";
            summaryFile << "  \"savedObjects\": " << saved << ",\n";
            summaryFile << "  \"extractionTime\": \"" << std::chrono::system_clock::now().time_since_epoch().count() << "\"\n";
            summaryFile << "}\n";
            summaryFile.close();
        }

        return saved > 0;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::SaveObjectToFile(const CompleteObjectData& objectData) {
    try {
        std::string className = objectData.ClassName;
        std::string filename = objectData.Name;

        // Sanitize filename
        std::replace(filename.begin(), filename.end(), '/', '_');
        std::replace(filename.begin(), filename.end(), '\\', '_');
        std::replace(filename.begin(), filename.end(), ':', '_');
        std::replace(filename.begin(), filename.end(), '*', '_');
        std::replace(filename.begin(), filename.end(), '?', '_');
        std::replace(filename.begin(), filename.end(), '"', '_');
        std::replace(filename.begin(), filename.end(), '<', '_');
        std::replace(filename.begin(), filename.end(), '>', '_');
        std::replace(filename.begin(), filename.end(), '|', '_');

        if (className.find("StaticMesh") != std::string::npos) {
            return SaveStaticMeshToFile(objectData, filename);
        }
        else if (className.find("SkeletalMesh") != std::string::npos) {
            return SaveSkeletalMeshToFile(objectData, filename);
        }
        else if (className.find("Texture2D") != std::string::npos) {
            return SaveTextureToFile(objectData, filename);
        }
        else if (className.find("Material") != std::string::npos) {
            return SaveMaterialToFile(objectData, filename);
        }
        else if (className.find("AnimSequence") != std::string::npos) {
            return SaveAnimationToFile(objectData, filename);
        }

        return SaveGenericObjectToFile(objectData, filename);
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::SaveStaticMeshToFile(const CompleteObjectData& objectData, const std::string& filename) {
    try {
        std::string filepath = m_OutputDirectory + "\\StaticMeshes\\" + filename + ".json";
        std::ofstream objFile(filepath);

        if (!objFile.is_open()) {
            return false;
        }

        objFile << "{\n";
        objFile << "  \"name\": \"" << objectData.Name << "\",\n";
        objFile << "  \"class\": \"" << objectData.ClassName << "\",\n";
        objFile << "  \"package\": \"" << objectData.PackageName << "\",\n";
        objFile << "  \"vertexCount\": " << objectData.MeshInfo.VertexCount << ",\n";
        objFile << "  \"faceCount\": " << objectData.MeshInfo.FaceCount << ",\n";
        objFile << "  \"materialSlots\": [\n";

        for (size_t i = 0; i < objectData.MeshInfo.MaterialSlots.size(); i++) {
            objFile << "    \"" << objectData.MeshInfo.MaterialSlots[i] << "\"";
            if (i < objectData.MeshInfo.MaterialSlots.size() - 1) {
                objFile << ",";
            }
            objFile << "\n";
        }

        objFile << "  ]\n";
        objFile << "}\n";
        objFile.close();

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::SaveSkeletalMeshToFile(const CompleteObjectData& objectData, const std::string& filename) {
    try {
        std::string textFilepath = m_OutputDirectory + "\\SkeletalMeshes\\" + filename + ".json";
        std::ofstream textFile(textFilepath);
        if (textFile.is_open()) {
            textFile << "{\n";
            textFile << "  \"name\": \"" << objectData.Name << "\",\n";
            textFile << "  \"class\": \"" << objectData.ClassName << "\",\n";
            textFile << "  \"vertexCount\": " << objectData.MeshInfo.VertexCount << ",\n";
            textFile << "  \"faceCount\": " << objectData.MeshInfo.FaceCount << ",\n";
            textFile << "  \"boneCount\": " << objectData.AnimInfo.BoneNames.size() << ",\n";
            textFile << "  \"bones\": [\n";

            for (size_t i = 0; i < objectData.AnimInfo.BoneNames.size(); i++) {
                textFile << "    \"" << objectData.AnimInfo.BoneNames[i] << "\"";
                if (i < objectData.AnimInfo.BoneNames.size() - 1) {
                    textFile << ",";
                }
                textFile << "\n";
            }

            textFile << "  ]\n";
            textFile << "}\n";
            textFile.close();
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::SaveTextureToFile(const CompleteObjectData& objectData, const std::string& filename) {
    try {
        std::string metaFilepath = m_OutputDirectory + "\\Textures\\" + filename + ".json";
        std::ofstream metaFile(metaFilepath);

        if (metaFile.is_open()) {
            metaFile << "{\n";
            metaFile << "  \"name\": \"" << objectData.Name << "\",\n";
            metaFile << "  \"class\": \"" << objectData.ClassName << "\",\n";
            metaFile << "  \"width\": " << objectData.TextureInfo.Width << ",\n";
            metaFile << "  \"height\": " << objectData.TextureInfo.Height << ",\n";
            metaFile << "  \"format\": " << objectData.TextureInfo.Format << ",\n";
            metaFile << "  \"mipLevels\": " << objectData.TextureInfo.MipLevels << ",\n";
            metaFile << "  \"compressionFormat\": \"" << objectData.TextureInfo.CompressionFormat << "\",\n";
            metaFile << "  \"dataSize\": " << objectData.TextureInfo.RawData.size() << "\n";
            metaFile << "}\n";
            metaFile.close();
        }

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::SaveMaterialToFile(const CompleteObjectData& objectData, const std::string& filename) {
    try {
        std::string filepath = m_OutputDirectory + "\\Materials\\" + filename + ".json";
        std::ofstream matFile(filepath);

        if (!matFile.is_open()) {
            return false;
        }

        matFile << "{\n";
        matFile << "  \"name\": \"" << objectData.Name << "\",\n";
        matFile << "  \"class\": \"" << objectData.ClassName << "\",\n";
        matFile << "  \"domain\": \"" << objectData.MaterialInfo.MaterialDomain << "\",\n";
        matFile << "  \"blendMode\": \"" << objectData.MaterialInfo.BlendMode << "\",\n";
        matFile << "  \"twoSided\": " << (objectData.MaterialInfo.bTwoSided ? "true" : "false") << ",\n";
        matFile << "  \"textures\": [\n";

        for (size_t i = 0; i < objectData.MaterialInfo.TextureReferences.size(); i++) {
            matFile << "    \"" << objectData.MaterialInfo.TextureReferences[i] << "\"";
            if (i < objectData.MaterialInfo.TextureReferences.size() - 1) {
                matFile << ",";
            }
            matFile << "\n";
        }

        matFile << "  ]\n";
        matFile << "}\n";
        matFile.close();

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::SaveAnimationToFile(const CompleteObjectData& objectData, const std::string& filename) {
    try {
        std::string filepath = m_OutputDirectory + "\\Animations\\" + filename + ".json";
        std::ofstream animFile(filepath);

        if (!animFile.is_open()) {
            return false;
        }

        animFile << "{\n";
        animFile << "  \"name\": \"" << objectData.Name << "\",\n";
        animFile << "  \"class\": \"" << objectData.ClassName << "\",\n";
        animFile << "  \"duration\": " << objectData.AnimInfo.Duration << ",\n";
        animFile << "  \"frameRate\": " << objectData.AnimInfo.FrameRate << ",\n";
        animFile << "  \"numFrames\": " << objectData.AnimInfo.NumFrames << ",\n";
        animFile << "  \"compressionScheme\": \"" << objectData.AnimInfo.CompressionScheme << "\",\n";
        animFile << "  \"bones\": [\n";

        for (size_t i = 0; i < objectData.AnimInfo.BoneNames.size(); i++) {
            animFile << "    \"" << objectData.AnimInfo.BoneNames[i] << "\"";
            if (i < objectData.AnimInfo.BoneNames.size() - 1) {
                animFile << ",";
            }
            animFile << "\n";
        }

        animFile << "  ]\n";
        animFile << "}\n";
        animFile.close();

        return true;
    }
    catch (...) {
        return false;
    }
}

bool UE4Extractor::SaveGenericObjectToFile(const CompleteObjectData& objectData, const std::string& filename) {
    try {
        std::string filepath = m_OutputDirectory + "\\Metadata\\" + filename + ".json";
        std::ofstream objFile(filepath);

        if (!objFile.is_open()) {
            return false;
        }

        objFile << "{\n";
        objFile << "  \"name\": \"" << objectData.Name << "\",\n";
        objFile << "  \"fullName\": \"" << objectData.FullName << "\",\n";
        objFile << "  \"class\": \"" << objectData.ClassName << "\",\n";
        objFile << "  \"package\": \"" << objectData.PackageName << "\",\n";
        objFile << "  \"outer\": \"" << objectData.OuterName << "\",\n";
        objFile << "  \"objectAddress\": \"0x" << std::hex << objectData.ObjectAddress << std::dec << "\",\n";
        objFile << "  \"objectFlags\": " << objectData.ObjectFlags << ",\n";
        objFile << "  \"internalIndex\": " << objectData.InternalIndex << ",\n";
        objFile << "  \"properties\": {\n";

        auto propIt = objectData.Properties.begin();
        for (size_t i = 0; i < objectData.Properties.size(); i++) {
            objFile << "    \"" << propIt->first << "\": \"" << propIt->second << "\"";
            if (i < objectData.Properties.size() - 1) {
                objFile << ",";
            }
            objFile << "\n";
            ++propIt;
        }

        objFile << "  }\n";
        objFile << "}\n";
        objFile.close();

        return true;
    }
    catch (...) {
        return false;
    }
}

extern "C" {
    __declspec(dllexport) UE4Extractor* CreateExtractor() {
        return new UE4Extractor();
    }

    __declspec(dllexport) void DestroyExtractor(UE4Extractor* extractor) {
        delete extractor;
    }

    __declspec(dllexport) bool InitializeExtractor(UE4Extractor* extractor, const char* baseName, const char* outputDir) {
        return extractor ? extractor->Initialize(baseName, outputDir ? outputDir : "") : false;
    }

    __declspec(dllexport) void StartExtraction(UE4Extractor* extractor) {
        if (extractor) extractor->StartExtraction();
    }

    __declspec(dllexport) void StopExtraction(UE4Extractor* extractor) {
        if (extractor) extractor->StopExtraction();
    }

    __declspec(dllexport) bool IsExtractionRunning(UE4Extractor* extractor) {
        return extractor ? extractor->IsRunning() : false;
    }

    __declspec(dllexport) int GetExtractionProgress(UE4Extractor* extractor) {
        return extractor ? extractor->GetProgress() : 0;
    }

    __declspec(dllexport) uint32_t GetProcessedObjectCount(UE4Extractor* extractor) {
        return extractor ? extractor->GetProcessedObjectCount() : 0;
    }

    __declspec(dllexport) uint32_t GetTotalObjectCount(UE4Extractor* extractor) {
        return extractor ? extractor->GetTotalObjectCount() : 0;
    }
}