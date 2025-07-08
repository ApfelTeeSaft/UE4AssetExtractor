#pragma once
#include <windows.h>
#include <string>
#include <vector>
#include <atomic>
#include <memory>
#include <unordered_map>
#include <thread>
#include <fstream>
#include <sstream>

#include "SDK.hpp"

enum class MessageType : int
{
    Progress = 1,
    ObjectData = 2,
    Status = 3,
    Error = 4,
    Complete = 5
};

#pragma pack(push, 1)
struct MessageHeader
{
    MessageType Type;
    int DataLength;
    long long Timestamp;
};
#pragma pack(pop)

struct CompleteObjectData {
    std::string Name;
    std::string FullName;
    std::string ClassName;
    std::string PackageName;
    std::string OuterName;
    uintptr_t ObjectAddress;
    uint32_t ObjectFlags;
    uint32_t InternalIndex;

    std::vector<uint8_t> PropertyData;
    std::unordered_map<std::string, std::string> Properties;
    std::vector<std::string> Dependencies;

    struct MeshData {
        std::vector<float> Vertices;
        std::vector<float> Normals;
        std::vector<float> UVs;
        std::vector<uint32_t> Indices;
        std::vector<std::string> MaterialSlots;
        uint32_t VertexCount;
        uint32_t FaceCount;
    } MeshInfo;

    struct TextureData {
        uint32_t Width;
        uint32_t Height;
        uint32_t Format;
        uint32_t MipLevels;
        std::vector<uint8_t> RawData;
        std::string CompressionFormat;
    } TextureInfo;

    struct MaterialData {
        std::vector<std::string> TextureReferences;
        std::unordered_map<std::string, float> ScalarParameters;
        std::unordered_map<std::string, std::vector<float>> VectorParameters;
        std::string MaterialDomain;
        std::string BlendMode;
        bool bTwoSided;
    } MaterialInfo;

    struct AnimationData {
        float Duration;
        float FrameRate;
        uint32_t NumFrames;
        std::vector<std::string> BoneNames;
        std::vector<uint8_t> CompressedData;
        std::string CompressionScheme;
    } AnimInfo;
};

class SharedMemoryCommunicator {
private:
    HANDLE m_hMemoryMap;
    HANDLE m_hDataAvailableEvent;
    HANDLE m_hDataReadEvent;
    void* m_pMappedView;
    std::string m_MemoryName;
    std::string m_DataEventName;
    std::string m_ReadEventName;

    // Simple atomic flag instead of mutex to avoid game crashes
    volatile LONG m_WriteBusy;
    static const size_t BUFFER_SIZE = 64 * 1024; // 64KB

public:
    SharedMemoryCommunicator();
    ~SharedMemoryCommunicator();

    bool Initialize(const std::string& baseName);
    void Cleanup();
    bool SendMessage(MessageType type, const std::string& data);
    bool SendProgress(int percentage, const std::string& message, uint32_t processed = 0, uint32_t total = 0);
    bool SendStatus(const std::string& status);
    bool SendError(const std::string& error);
    bool SendComplete();
};

class UE4Extractor {
private:
    std::atomic<bool> m_bIsRunning{ false };
    std::atomic<bool> m_bShouldStop{ false };
    std::atomic<int> m_ProgressPercent{ 0 };
    std::atomic<uint32_t> m_ProcessedObjects{ 0 };
    std::atomic<uint32_t> m_TotalObjects{ 0 };

    std::unique_ptr<SharedMemoryCommunicator> m_pCommunicator;
    std::string m_OutputDirectory;

    HANDLE m_hExtractionThread;
    HANDLE m_hCommunicationThread;
    DWORD m_dwMainThreadId;

    std::unordered_map<uintptr_t, CompleteObjectData> m_ObjectCache;
    std::unordered_map<std::string, uintptr_t> m_NameToObjectMap;
    std::vector<CompleteObjectData> m_ExtractedObjects;

    bool InitializeSDK();
    void CleanupSDK();
    bool ValidateUEEnvironment();

    std::vector<CompleteObjectData> ExtractAllAssets();
    std::vector<CompleteObjectData> ExtractLevelActors();
    CompleteObjectData ExtractCompleteObject(SDK::UObject* Object);

    bool ExtractStaticMeshData(SDK::UStaticMesh* StaticMesh, CompleteObjectData& ObjectData);
    bool ExtractSkeletalMeshData(SDK::USkeletalMesh* SkeletalMesh, CompleteObjectData& ObjectData);
    bool ExtractTextureData(SDK::UTexture2D* Texture, CompleteObjectData& ObjectData);
    bool ExtractMaterialData(SDK::UMaterial* Material, CompleteObjectData& ObjectData);
    bool ExtractMaterialInstanceData(SDK::UMaterialInstance* MaterialInstance, CompleteObjectData& ObjectData);
    bool ExtractAnimationData(SDK::UAnimSequence* Animation, CompleteObjectData& ObjectData);

    std::vector<uint8_t> SerializeObjectProperties(SDK::UObject* Object);
    std::unordered_map<std::string, std::string> ExtractObjectProperties(SDK::UObject* Object);
    std::vector<std::string> ExtractObjectDependencies(SDK::UObject* Object);

    std::string GetObjectName(SDK::UObject* Object);
    std::string GetObjectFullName(SDK::UObject* Object);
    std::string GetObjectClassName(SDK::UObject* Object);
    std::string GetObjectPackageName(SDK::UObject* Object);

    bool IsValidUEObject(SDK::UObject* Object);
    bool IsValidMemoryAddress(uintptr_t Address);
    std::string SafeGetString(const char* str);

    bool InitializeCommunication(const std::string& baseName);
    void SendProgress(int percentage, const std::string& message, uint32_t processed = 0, uint32_t total = 0);
    void SendObjectData(const CompleteObjectData& objectData);
    void ProcessCommands();

    bool SaveExtractedData();
    bool SaveObjectToFile(const CompleteObjectData& objectData);
    bool SaveStaticMeshToFile(const CompleteObjectData& objectData, const std::string& filename);
    bool SaveSkeletalMeshToFile(const CompleteObjectData& objectData, const std::string& filename);
    bool SaveTextureToFile(const CompleteObjectData& objectData, const std::string& filename);
    bool SaveMaterialToFile(const CompleteObjectData& objectData, const std::string& filename);
    bool SaveAnimationToFile(const CompleteObjectData& objectData, const std::string& filename);
    bool SaveGenericObjectToFile(const CompleteObjectData& objectData, const std::string& filename);

    static DWORD WINAPI ExtractionThreadProc(LPVOID lpParam);
    static DWORD WINAPI CommunicationThreadProc(LPVOID lpParam);
    void ExtractionMainLoop();
    void CommunicationLoop();

public:
    UE4Extractor();
    ~UE4Extractor();

    bool Initialize(const std::string& baseName, const std::string& outputDir = "");
    void StartExtraction();
    void StopExtraction();
    bool IsRunning() const { return m_bIsRunning.load(); }
    int GetProgress() const { return m_ProgressPercent.load(); }
    uint32_t GetProcessedObjectCount() const { return m_ProcessedObjects.load(); }
    uint32_t GetTotalObjectCount() const { return m_TotalObjects.load(); }
};

extern UE4Extractor* g_pExtractor;

extern "C" {
    __declspec(dllexport) UE4Extractor* CreateExtractor();
    __declspec(dllexport) void DestroyExtractor(UE4Extractor* extractor);
    __declspec(dllexport) bool InitializeExtractor(UE4Extractor* extractor, const char* baseName, const char* outputDir);
    __declspec(dllexport) void StartExtraction(UE4Extractor* extractor);
    __declspec(dllexport) void StopExtraction(UE4Extractor* extractor);
    __declspec(dllexport) bool IsExtractionRunning(UE4Extractor* extractor);
    __declspec(dllexport) int GetExtractionProgress(UE4Extractor* extractor);
    __declspec(dllexport) uint32_t GetProcessedObjectCount(UE4Extractor* extractor);
    __declspec(dllexport) uint32_t GetTotalObjectCount(UE4Extractor* extractor);
}