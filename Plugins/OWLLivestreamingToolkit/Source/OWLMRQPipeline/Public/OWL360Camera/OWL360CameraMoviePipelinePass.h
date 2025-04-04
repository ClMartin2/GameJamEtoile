// Copyright Off World Live Limited 2020-2024. All rights reserved.

#pragma once

#include "MoviePipelineDeferredPasses.h"
#include "MoviePipelineImagePassBase.h"
#include "OWL360CaptureComponent.h"
#include "OWLIntermediateIndex.h"
#include "OWL360CameraMoviePipelinePass.generated.h"

class AOWL360CamCapture;
class FSceneViewStateInterface;

struct FOWL360CameraPassFacePayload : public UMoviePipelineImagePassBase::IViewCalcPayload
{
	// From UE::MoviePipeline::FDeferredPassRenderStatePayload
	int32 CameraIndex;
	FIntPoint TileIndex; // Will always be 1,1 if no history-per-tile is enabled
	int32 SceneViewIndex;


	// The camera location as defined by the actual sequence, consistent for all panes.
	FVector OriginalCameraLocation;
	// The camera location last frame, used to ensure camera motion vectors are right.
	FVector PrevOriginalCameraLocation;
	// The camera rotation as defined by the actual sequence
	FRotator OriginalCameraRotation;
	// The camera rotation last frame, used to ensure camera motion vectors are right.
	FRotator PrevOriginalCameraRotation;
	// The near clip plane distance from the camera.
	float NearClippingPlane;

	// The horizontal field of view this pane was rendered with
	float FieldOfView;

	// The actual rendering location for this pane, offset by the stereo eye if needed.
	FVector CameraLocation;
	FVector PrevCameraLocation;
	FRotator CameraRotation;
	FRotator PrevCameraRotation;

	// OWL360Camera
	int32 FaceIndex;
	FIntPoint Resolution;
	int32 EyeIndex;

	// When only partial faces are rendered
	// we need to know which is the last face to be rendered
	int32 LastFaceIndex;

	FOWLIntermediateIndex IntermediateIndex;
};

UENUM()
enum class EOWLBitDepth: uint8
{
	BT_8Bit UMETA(DisplayName="8 Bit"),
	BT_16Bit UMETA(DisplayName="16 Bit"),
	BT_32Bit UMETA(DisplayName="32 Bit"),
};

struct OWLMRQPIPELINE_API FOWL360CameraImagePixelDataPayload : public FImagePixelDataPayload
{
	virtual TSharedRef<FImagePixelDataPayload> Copy() const override
	{
		auto Output = MakeShared<FOWL360CameraImagePixelDataPayload>(*this);
		Output->IntermediateResolution = IntermediateResolution;
		return Output;
	}

	virtual FIntPoint GetAccumulatorSize() const override
	{
		return IntermediateResolution;
	}

	virtual FIntPoint GetOverlapPaddedSize() const override
	{
		return IntermediateResolution;
	}

	virtual bool GetOverlapPaddedSizeIsValid(const FIntPoint InRawSize) const override
	{
		return InRawSize == IntermediateResolution;
	}

	virtual void GetWeightFunctionParams(MoviePipeline::FTileWeight1D& WeightFunctionX, MoviePipeline::FTileWeight1D& WeightFunctionY) const override
	{
		WeightFunctionX.InitHelper(0, IntermediateResolution.X, 0);
		WeightFunctionY.InitHelper(0, IntermediateResolution.Y, 0);
	}

	FOWL360CameraPassFacePayload Face;

	FIntPoint FinalOutputResolution;
	FIntPoint IntermediateResolution;

	// Dome
	int32 DomeAngle;

	EOWLBitDepth BitDepth;
};

struct FOWLIntermediateStore;

UCLASS(BlueprintType)
class OWLMRQPIPELINE_API UOWL360CameraMoviePipelinePass : public UMoviePipelineDeferredPassBase
{
	GENERATED_BODY()

public:
	UOWL360CameraMoviePipelinePass();
	~UOWL360CameraMoviePipelinePass();

	virtual void ValidateStateImpl() override;
	virtual void SetupImpl(const MoviePipeline::FMoviePipelineRenderPassInitSettings& InPassInitSettings) override;
	virtual void RenderSample_GameThreadImpl(const FMoviePipelineRenderPassMetrics& InSampleState) override;
	virtual void TeardownImpl() override;

#if WITH_EDITOR
	virtual FText GetDisplayText() const override { return NSLOCTEXT("MovieRenderPipeline", "DeferredBasePassSetting_DisplayName_OWL360Camera", "OWL 180 / 360 Rendering"); }
	virtual FText GetFooterText(UMoviePipelineExecutorJob* InJob) const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// FGCObject Interface
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
	// ~FGCObject Interface

	virtual void GetViewShowFlags(FEngineShowFlags& OutShowFlag, EViewModeIndex& OutViewModeIndex) const override;

	virtual int32 GetOutputFileSortingOrder() const override { return 1; }
	virtual bool IsAntiAliasingSupported() const { return bPathTracing ? false : !bDisableMultisampleEffects; }

	TMap<uint32, FSceneViewStateReference> ViewStates;
	TMap<uint32, uint32> FaceGroups;
	TMap<uint32, TArray<uint32>> ChildFaceGroups;

protected:
	TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> ResizeCubemapOutputBlender;
	TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> EquirectangularOutputBlender;
	TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> DomeOutputBlender;
	TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> StereoVR180OutputBlender;
	TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> Mono180OutputBlender;

	TMap<FIntPoint, TWeakObjectPtr<UTextureRenderTarget2D>> ViewRenderTargets;

	TFunction<void(TUniquePtr<FImagePixelData>&&)> MakeForwardingEndpoint(
		const FMoviePipelinePassIdentifier InPassIdentifier,
		const FMoviePipelineRenderPassMetrics& InSampleState,
		const FOWL360CameraPassFacePayload InFacePayload
	);

	FSceneViewStateInterface* GetViewState(const int32 CameraIndex, const int32 SceneViewIndex, const int32 FaceViewIndex, const int32 Eye, const ERHIFeatureLevel::Type FeatureLevel);
	void SetProjectionMatrix(FSceneViewInitOptions &ViewInitOptions, FMoviePipelineRenderPassMetrics& InOutSampleState, FOWL360CameraPassFacePayload* Payload) const;

	void SetOutputPassOutputResolution(FIntPoint Resolution);
	TWeakObjectPtr<UTextureRenderTarget2D> GetOrCreateLocalViewRenderTarget(const FIntPoint& InSize, EOWLBitDepth BitDepth);
	TArray<FString> GetLocalStencilLayerNames() const;
	virtual void WaitUntilTasksComplete() override;
private:
	TArray<FString> LocalUniqueStencilLayerNames;
	void Pause360Camera();
	void Revert360CameraState() const;
	UOWL360CaptureComponent* FindCameraComponent() const;
	void PostRendererSubmissionByFace(const FMoviePipelineRenderPassMetrics& InSampleState, const FMoviePipelinePassIdentifier InPassIdentifier, const FOWL360CameraPassFacePayload& InFacePayload, FCanvas& InCanvas);
	static int32 GetCompositeViewStateIndex(int32 CameraIndex, int32 EyeIndex, int32 SceneViewIndex, int32 FaceIndex);
	virtual void GatherOutputPassesImpl(TArray<FMoviePipelinePassIdentifier>& ExpectedRenderPasses) override;
	TSharedPtr<FSceneViewFamilyContext> SetupViewFamily(FMoviePipelineRenderPassMetrics& InOutSampleState, FOWL360CameraPassFacePayload* OptPayload, bool bStencilPass = false);
	FOWL360CameraPassFacePayload InitialisePayload(
		const bool bIsStereo,
		const int CameraIndex,
		const int LastFaceIndex,
		const int EyeIndex,
		const int FaceIndex,
		const FOWLIntermediateIndex IntermediateIndex,
		const FMoviePipelineRenderPassMetrics& InSampleState);


	FRotator CalculateCameraRotation(const FRotator& ForwardCameraRotation, int FaceIndex) const;
	FVector CalculateStereoEyeLocation(const FVector& CameraLocation, const FRotator& ForwardCameraRotation, int EyeIndex) const;

	float GetFOV() const;
	FIntPoint GetFaceResolution() const;
	void SetupMergers();
	void UpdateResolutions();
	TWeakPtr<MoviePipeline::IMoviePipelineOutputMerger, ESPMode::ThreadSafe> GetOutputMerger() const;
	bool IsStereoProjection() const;
	TArray<bool> GetFacesForRendering() const;

	bool CheckIfPathTracerIsSupported() const;
	void PathTracerValidationImpl();
	void ProjectionTypeValidationImpl();
	bool ShouldRenderOverlay();
	bool HasPostProcess();
	bool ResolutionImposesWatermark() const;
	static bool ResolutionImposesWatermark(FIntPoint InRes);

	const FVector ZAxis = FVector(0, 0, 1);
	const FVector YAxis = FVector(0, 1, 0);
	const FQuat FaceOrientations[6] = {
		{ZAxis, PI / 2}, // right
		{ZAxis, -PI / 2}, // left
		{YAxis, -PI / 2}, // up,
		{YAxis, PI / 2}, // down
		{ZAxis, 0}, // front
		{ZAxis, -PI} // back
	};

	TSharedPtr<FOWLIntermediateStore> IntermediateStore = nullptr;

	FIntPoint FinalOutputResolution;
	FIntPoint IntermediateResolution;
	bool bPassUpdated = false;

	bool bPrevious360PauseState = false;

	// used to block when parallel rendering disabled
	TAtomic<int32> LastFaceComplete = -1;
	/* Only Accessed on game thread. A counter incremented */
	int32 LastFaceSubmitted = -1;
	/* If bDisableParallelRendering this blocks until render result */
	void BlockForFace();


public:
	// Path Tracing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Tracer")
	bool bPathTracing;

	/** When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.
     *  In this mode it is possible to use higher temporal sample counts to improve the motion blur quality.
     *  When this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reference Motion Blur", meta=(EditCondition = "bPathTracing", EditConditionHides))
    bool bReferenceMotionBlur;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options")
	E360ProjectionType ProjectionType = E360ProjectionType::CT_CubeMap;

	/* Set the gap between left eye and right eye in world units */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options", Experimental, meta = (UIMin = "0.1", EditCondition="ProjectionType == E360ProjectionType::CT_StereoVR180", EditConditionHides))
	float StereoEyeSeparation = 3.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options", meta=(UIMin=0, EditCondition = "ProjectionType == E360ProjectionType::CT_DomeMaster", EditConditionHides))
	int DomeAngle = 180;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options", meta=(UIMin=0, EditCondition = "ProjectionType == E360ProjectionType::CT_DomeMaster", EditConditionHides))
	FRotator DomeRotatorOffset = FRotator(0,0,0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options")
	EStreamResolution_360 OutputResolution = EStreamResolution_360::RS_360_1080p;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter="SetCustomOutputResolution", Category = "Output Options", meta=(EditCondition = "OutputResolution == EStreamResolution_360::RS_360_Custom", EditConditionHides))
	FIntPoint CustomOutputResolution = FIntPoint(1920, 1080);

	/* To target specific outputs you may find you get a better result by forcing intermediate processing to a given bit rate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	EOWLBitDepth IntermediateBitDepth = EOWLBitDepth::BT_16Bit;

	/* Ensures that each frame completes before rendering the next. Very important with large resolutions */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool bDisableParallelRendering = false;

	/* Scene View States store large amount of temporal information to improve Nanite rendering, motion blur and other
	 intra-frame post-process optimisations. Disabling multiple view states reduces GPU load at the cost
	 of these effects. GPU Memory requirements are reduced at the cost of output quality. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool bDisableMultipleSceneViewStates = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool RenderFrontFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool RenderBackFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool RenderLeftFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool RenderRightFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool RenderTopFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Options|Advanced")
	bool RenderBottomFace = true;

public:
	UFUNCTION(BlueprintSetter)
	void SetCustomOutputResolution(FIntPoint InRes);
};

