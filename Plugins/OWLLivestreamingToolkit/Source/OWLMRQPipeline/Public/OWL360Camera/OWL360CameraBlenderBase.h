// Copyright Off World Live Limited 2020-2024. All rights reserved.

#pragma once

#include "MovieRenderPipelineDataTypes.h"
#include "OWL360Camera/OWLIntermediateIndex.h"

struct FOWL360CameraImagePixelDataPayload;

struct OWLMRQPIPELINE_API FCubemapFaceBounds
{
	int Top = 0;
	int Left = 0;
	int Bottom = 0;
	int Right = 0;
};

class OWLMRQPIPELINE_API FOWL360CameraBlenderBase : public MoviePipeline::IMoviePipelineOutputMerger
{
protected:
	struct FOWL360CameraOutputFrame
	{
		TArray<FLinearColor> OutputMap;
	};

public:
	FOWL360CameraBlenderBase(TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> InOutputMerger, const FIntPoint InOutputResolution, bool bEnableAlpha = true);
	virtual ~FOWL360CameraBlenderBase() override;

	virtual FMoviePipelineMergerOutputFrame& QueueOutputFrame_GameThread(const FMoviePipelineFrameOutputState& CachedOutputState) override;
	virtual void OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData>&& InData) override;
	virtual void OnSingleSampleDataAvailable_AnyThread(TUniquePtr<FImagePixelData>&& InData) override;
	virtual void AbandonOutstandingWork() override;
	virtual int32 GetNumOutstandingFrames() const override { return PendingData.Num(); }

	// Fill in InOutputFrame's pixel data
	virtual void ProcessImagePixelData(TUniquePtr<FImagePixelData>&& InData, FOWL360CameraImagePixelDataPayload* InPayload, TSharedPtr<FOWL360CameraOutputFrame> InOutputFrame) = 0;

	// Helper functions
	static FLinearColor GetColorBilinearFiltered(const FImagePixelData* InSampleData, const FVector2d& InSamplePixelCoords, const FCubemapFaceBounds, const bool
	                                             bEnableAlpha);
	static FVector2d GetCubeFaceUV(FVector2d Input, FIntPoint CubeLayout);
	/* Gets the bounds for all the faces on a cubemap in the order Right, Left, Up, Down, Front, Back */
	static TArray<FCubemapFaceBounds> GetFaceBounds(const FIntPoint& CubemapPixelDimensions);
	static const TArray<FIntPoint> FaceIndexPositions;

protected:
	/** Data that is expected but not fully available yet. */
	TMap<FOWLIntermediateIndex, TSharedPtr<FOWL360CameraOutputFrame>> PendingData;

	/** Mutex that protects adding/updating/removing from PendingData */
	FCriticalSection GlobalQueueDataMutex;
	FCriticalSection OutputDataMutex;

	FIntPoint OutputMapSize;

	TWeakPtr<MoviePipeline::IMoviePipelineOutputMerger> OutputMerger;
	FString Identifier = "Base";
	bool bEnableAlpha = true;
};

