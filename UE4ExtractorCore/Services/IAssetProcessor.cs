using CUE4Parse.UE4.Assets.Exports;
using UE4ExtractorCore.Models;

namespace UE4ExtractorCore.Services
{
    public interface IAssetProcessor
    {
        Task<ExtractionResult> ProcessAssetsAsync(
            string inputPath,
            string outputPath,
            IProgress<ExtractionProgress>? progress = null,
            CancellationToken cancellationToken = default);

        Task<bool> ProcessSingleAssetAsync(
            UObject asset,
            string outputPath,
            CancellationToken cancellationToken = default);

        Task<List<string>> GetAssetDependenciesAsync(UObject asset);

        bool CanProcessAsset(UObject asset);
    }
}