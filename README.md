
# UE4 Asset Extractor

A comprehensive tool for extracting assets from Unreal Engine 4.12 games using advanced DLL injection and memory analysis techniques.

![UE4 Asset Extractor](https://img.shields.io/badge/UE4-Asset%20Extractor-blue) ![.NET 8](https://img.shields.io/badge/.NET-8.0-purple) ![C++20](https://img.shields.io/badge/C%2B%2B-20-blue) ![License](https://img.shields.io/badge/License-Educational-green)

## ⚠️ Legal Notice

**This software is provided for educational and research purposes only.**

-   Ensure compliance with game EULAs and terms of service when using this tool
-   Respect intellectual property rights and use responsibly
-   The developers are not responsible for any misuse of this software
-   Only use on games you own and have the right to modify

## 🎯 Overview

UE4 Asset Extractor is a sophisticated tool designed to extract game assets from running Unreal Engine 4.12 processes. It combines advanced techniques including:

-   **DLL Injection** - Injects extraction code directly into the target process
-   **SDK Integration** - Uses Dumper-7 generated SDKs for memory navigation
-   **Asset Processing** - Leverages CUE4Parse for asset conversion
-   **Cross-Architecture** - Supports both x86 and x64 target processes
-   **Real-time Extraction** - Extracts assets from live game processes

## 🏗️ Architecture

```
┌─────────────────┐    ┌──────────────────┐    ┌─────────────────┐
│   WPF GUI       │    │   .NET Core      │    │   C++ DLL       │
│ (UE4ExtractorGUI)│◄──►│(UE4ExtractorCore)│◄──►│(UE4ExtractorDLL)│
└─────────────────┘    └──────────────────┘    └─────────────────┘
         │                        │                       │
         │                        │                       │
    User Interface          DLL Injection           Memory Access
    Process Selection       Named Pipes             Asset Extraction
    Progress Monitoring     Architecture            SDK Integration
                           Detection

```

### Components

-   **UE4ExtractorGUI** - WPF application with dark theme providing user interface
-   **UE4ExtractorCore** - .NET 8 library handling injection logic and communication
-   **UE4ExtractorDLL** - C++20 DLL that performs in-process asset extraction
-   **SDK** - Dumper-7 generated headers for Fortnite 4.12.0-2870186

## ✨ Features

### Asset Types Supported

-   ✅ Static Meshes (.obj export, JSON metadata)
-   ✅ Skeletal Meshes (bone structure, JSON metadata)
-   ✅ Textures (metadata extraction, format detection)
-   ✅ Materials (parameter extraction, shader info)
-   ✅ Material Instances (parent references, overrides)
-   ✅ Animations (sequence data, compression info)
-   ✅ Level Actors (transforms, properties)

### Technical Features

-   **Cross-Architecture Support** - Automatically selects correct DLL (x86/x64)
-   **Real-time Progress** - Live progress updates via named pipes
-   **Memory Safety** - Comprehensive validation and error handling
-   **Anti-Cheat Awareness** - Detects common anti-cheat software
-   **Process Monitoring** - Automatic detection of UE4 processes
-   **Comprehensive Logging** - Detailed extraction logs and diagnostics

### Export Formats

-   **JSON Metadata** - Complete asset information and properties
-   **OBJ Files** - 3D mesh geometry (planned)
-   **Raw Data** - Binary asset data (optional)

## 🔧 Requirements

### System Requirements

-   **OS**: Windows 10/11 (x64)
-   **Runtime**: .NET 8.0 Runtime
-   **Privileges**: Administrator rights (recommended)
-   **Memory**: 4GB+ RAM
-   **Storage**: 1GB+ free space for extracted assets

### Development Requirements

-   **IDE**: Visual Studio 2022 (17.8+)
-   **SDK**: Windows 10/11 SDK
-   **.NET**: .NET 8.0 SDK
-   **C++**: MSVC v143 with C++20 support
-   **Platform**: x86 and x64 toolsets

## 🚀 Installation

### Pre-built Releases

1.  Download the latest release from [Releases](https://claude.ai/releases)
2.  Extract to desired directory
3.  Ensure .NET 8.0 Runtime is installed
4.  Run `UE4ExtractorGUI.exe` as Administrator

### Building from Source

```bash
# Clone repository
git clone https://github.com/yourusername/UE4AssetExtractor.git
cd UE4AssetExtractor

# Build solution
msbuild UE4AssetExtractor.sln /p:Configuration=Release /p:Platform="Any CPU"

# Or use Visual Studio
# Open UE4AssetExtractor.sln in Visual Studio
# Build Solution (Ctrl+Shift+B)

```

### Architecture Configuration

The solution automatically builds both x86 and x64 versions of the DLL:

-   **UE4ExtractorDLL.dll** - Main DLL (matches host process architecture)
-   **x86/UE4ExtractorDLL.dll** - 32-bit version for x86 targets
-   **x64/UE4ExtractorDLL.dll** - 64-bit version for x64 targets

## 📖 Usage

### Basic Extraction

1.  **Launch as Administrator**
    
    ```
    Right-click → "Run as Administrator"
    
    ```
    
2.  **Select Target Process**
    
    -   Launch your UE4.12 game
    -   Select process from dropdown in GUI
    -   Verify process architecture matches available DLL
3.  **Configure Output**
    
    -   Choose output directory (default: Desktop/UE4_Extracted_Assets)
    -   Select asset types to extract
    -   Configure export formats
4.  **Start Extraction**
    
    -   Click "🚀 Start Extraction"
    -   Monitor progress in real-time
    -   Check logs for detailed information

## 🔍 Troubleshooting

### Common Issues

#### DLL Injection Failed

```
Error: Failed to inject DLL into target process

```

**Solutions:**

-   Run as Administrator
-   Disable antivirus temporarily
-   Check target process architecture
-   Verify DLL file exists and is not corrupted

#### Architecture Mismatch

```
Error: ARCHITECTURE MISMATCH: DLL is 64-bit, target process is 32-bit

```

**Solutions:**

-   Ensure both x86 and x64 DLLs are present
-   Check build configuration includes both platforms
-   Verify automatic architecture detection

#### Anti-Cheat Detection

```
Warning: ANTI-CHEAT DETECTED: BattlEye (PID: 1234)

```

**Solutions:**

-   Research specific anti-cheat bypass methods

### Diagnostic Information

The application provides comprehensive diagnostics:

-   **System Architecture** - OS and process bitness
-   **DLL Verification** - File existence and architecture
-   **Process Detection** - Available UE4 processes
-   **Anti-Cheat Scanning** - Known anti-cheat software
-   **Permission Checking** - Administrator status

### Log Files

-   **Application Log**: Check console output in GUI
-   **DLL Debug Log**: `ue4_extractor_debug.log` in application directory
-   **Windows Event Log**: Check for DLL load failures

## 🎮 Supported Games

### Tested Games

-   ✅ **Fortnite** (4.12.0) - Primary target
-   ⚠️ **Other UE4.12 Games** - May work with SDK modifications

### SDK Compatibility

The included SDK is specifically generated for Fortnite 4.12.0-2870186. For other games:

1.  Generate new SDK using [Dumper-7](https://github.com/Encryqed/Dumper-7)
2.  Replace SDK headers in `UE4ExtractorDLL/SDK/`
3.  Update class references in extraction logic
4.  Rebuild solution

## 🛠️ Development

### Project Structure

```
UE4AssetExtractor/
├── UE4ExtractorDLL/          # C++ injection DLL
│   ├── SDK/                  # Dumper-7 generated headers
│   ├── Extractor.cpp         # Main extraction logic
│   ├── Extractor.h           # Header definitions
│   └── dllmain.cpp           # DLL entry point
├── UE4ExtractorCore/         # .NET core library
│   ├── Models/               # Data models
│   ├── Services/             # Business logic
│   └── UE4ExtractorCore.csproj
├── UE4ExtractorGUI/          # WPF application
│   ├── ViewModels/           # MVVM view models
│   ├── Themes/               # UI theming
│   └── MainWindow.xaml       # Main interface
└── UE4AssetExtractor.sln     # Solution file

```

### Adding New Asset Types

1.  **Extend SDK** (if needed)
    
    ```cpp
    // Add new UE4 class definitions
    class UEGAME_API UNewAssetType : public UObject { ... };
    
    ```
    
2.  **Update Extractor**
    
    ```cpp
    bool UE4Extractor::ExtractNewAssetData(UNewAssetType* asset, CompleteObjectData& data) {
        // Extraction logic here
        return true;
    }
    
    ```
    
3.  **Add to Models**
    
    ```csharp
    public enum AssetType {
        // ... existing types
        NewAssetType
    }
    
    ```
    

### Contributing

1.  **Fork** the repository
2.  **Create** a feature branch (`git checkout -b feature/new-asset-type`)
3.  **Commit** changes (`git commit -am 'Add new asset type support'`)
4.  **Push** to branch (`git push origin feature/new-asset-type`)
5.  **Create** a Pull Request

### Areas for Contribution

-   **New Game Support** - SDK generation and adaptation
-   **Asset Formats** - Additional export formats
-   **UI Improvements** - Enhanced user experience
-   **Performance** - Optimization and memory usage
-   **Documentation** - Tutorials and guides

## 🙏 Acknowledgments

-   **[Dumper-7](https://github.com/Encryqed/Dumper-7)** - SDK generation framework
-   **[CUE4Parse](https://github.com/FabianFG/CUE4Parse)** - Asset parsing library
-   **Epic Games** - Unreal Engine 4
-   **Community** - Reverse engineering research and documentation

----------

**Remember**: Always respect intellectual property rights and game terms of service. This tool is for educational and research purposes only.