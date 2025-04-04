// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOWLToolkit, Log, All);

class LIVESTREAMINGTOOLKIT_API FLivestreamingToolkitModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


public:
//CDV:improbable:excludestart
	static bool IgnoreUnrealHardwareEncoding();
	static bool SuggestLoadingHardwareEncodersPlugin();
	static void SetHardwareEncodersPendingRestart();
	static bool IsHardwareEncodersPluginPendingRestart();
//CDV:improbable:excludeend
private:
//CDV:improbable:excludestart
	static bool bHardwareEncodingModuleLoaded;
	static bool bIsNvidia;
	static bool bForceFfmpegOnlyPipeline;
	static bool bHardwareEncodersPendingRestart;
	bool bComposureLoaded = false;
	bool bUniversalCameraLoaded = false;
	bool bHasLoadedMovieRenderQueue = false;

	void LoadMediaOutput();

	void LoadNDI();

	void LoadWebcam();

	void LoadComposureOrBindForLoad();
	void LoadComposure();
	void OnModulesChanged(FName InModuleName, EModuleChangeReason Reason);

	void LoadMovieRenderQueueOrBindForLoad();
	void LoadOWLMovieRenderQueue();

	FDelegateHandle OnFEngineLoopInitCompleteHandle;
	FDelegateHandle OnModulesChangedHandle;
	FDelegateHandle OnWorldAddedHandle;
	FDelegateHandle OnWorldDestroyedHandle;
	void OnFEngineLoopInitComplete();
//CDV:improbable:excludeend
};

