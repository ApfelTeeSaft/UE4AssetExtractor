using System;
using System.Collections.Generic;
using System.Numerics;

namespace UE4ExtractorCore.Models
{
    public enum AssetType
    {
        StaticMesh,
        SkeletalMesh,
        Texture2D,
        Material,
        MaterialInstance,
        Animation,
        Sound,
        Blueprint,
        Level,
        Actor,
        Component,
        Other
    }

    public class ExtractedAsset
    {
        public string Name { get; set; } = string.Empty;
        public string FullName { get; set; } = string.Empty;
        public string ClassName { get; set; } = string.Empty;
        public string PackageName { get; set; } = string.Empty;
        public string OuterName { get; set; } = string.Empty;
        public AssetType Type { get; set; }
        public ulong ObjectAddress { get; set; }
        public uint ObjectFlags { get; set; }
        public uint InternalIndex { get; set; }

        public byte[] SerializedData { get; set; } = Array.Empty<byte>();
        public Dictionary<string, object> Properties { get; set; } = new();
        public List<string> Dependencies { get; set; } = new();
        public DateTime ExtractedAt { get; set; } = DateTime.UtcNow;

        public long FileSize { get; set; }
        public string SourcePath { get; set; } = string.Empty;
        public Dictionary<string, string> CustomProperties { get; set; } = new();
    }

    public class ExtractionProgress
    {
        public int Percentage { get; set; }
        public string Message { get; set; } = string.Empty;
        public int ProcessedAssets { get; set; }
        public int TotalAssets { get; set; }
        public TimeSpan ElapsedTime { get; set; }
        public string CurrentAsset { get; set; } = string.Empty;
        public AssetType CurrentAssetType { get; set; }
        public double AssetsPerSecond { get; set; }
        public TimeSpan EstimatedTimeRemaining { get; set; }
        public long MemoryUsage { get; set; }
    }

    public class ExtractionResult
    {
        public bool Success { get; set; }
        public List<ExtractedAsset> Assets { get; set; } = new();
        public string ErrorMessage { get; set; } = string.Empty;
        public TimeSpan TotalTime { get; set; }
        public int TotalAssetsExtracted { get; set; }
        public Dictionary<AssetType, int> AssetTypeCount { get; set; } = new();
        public List<string> Warnings { get; set; } = new();
        public ExtractionStatistics Statistics { get; set; } = new();
    }

    public class ExtractionStatistics
    {
        public long TotalBytesProcessed { get; set; }
        public double AverageProcessingTimePerAsset { get; set; }
        public int FailedAssets { get; set; }
        public int SkippedAssets { get; set; }
        public Dictionary<string, int> ErrorsByType { get; set; } = new();
        public long PeakMemoryUsage { get; set; }
        public double CompressionRatio { get; set; }
    }
}