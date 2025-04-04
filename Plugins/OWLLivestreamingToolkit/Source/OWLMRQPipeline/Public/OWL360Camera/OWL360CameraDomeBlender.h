// Copyright Off World Live Limited 2020-2024. All rights reserved.

#pragma once

#include "MovieRenderPipelineDataTypes.h"
#include "OWL360CameraBlenderBase.h"

struct FImagePixelData;
class UMoviePipeline;

class OWLMRQPIPELINE_API FOWL360CameraDomeBlender : public FOWL360CameraBlenderBase
{
public:
	FOWL360CameraDomeBlender(TSharedPtr<MoviePipeline::IMoviePipelineOutputMerger> InOutputMerger, const FIntPoint InOutputResolution, const bool bEnableAlpha);

	virtual void ProcessImagePixelData(TUniquePtr<FImagePixelData>&& InData, FOWL360CameraImagePixelDataPayload* InPayload, TSharedPtr<FOWL360CameraOutputFrame> InOutputFrame) override;

private:
	FMatrix44f GetDomeRotator(int InAngle);
};

