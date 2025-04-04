// Copyright Off World Live Limited 2020-2024. All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "HAL/Platform.h"

struct FOWLIntermediateIndex
{
	int FrameNumber;
	int CameraIndex;
	int TemporalPassIndex;
	int SpatialPassIndex;
	int SceneViewIndex;
	uint32 Hash() const ;
	FString ToString() const;
	bool operator==(FOWLIntermediateIndex A) const;
	friend uint32 GetTypeHash(FOWLIntermediateIndex Index)
	{
		return Index.Hash();
	}
};
