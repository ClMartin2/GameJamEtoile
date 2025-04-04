// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

extern "C"
{
    #include "libavutil/time.h"
}

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Tools/OWLImageInput.h"
#include "Misc/Timecode.h"
#include "OWLFFmpegOutput.h"
#include "Containers/Ticker.h"
#include "OWLCaptureComponent.h"

#include "OWLMediaOutputComponent.generated.h"

// Forward declaration
class AOWLCineCamCapture;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMediaOutputStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMediaOutputStop, bool, bGraceful);

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLSaveToFileSettings
{
    GENERATED_BODY()

    /* The container format in which the media should be saved */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    EOWLDestinationFormat DestinationFormat = EOWLDestinationFormat::F_MP4;

    /* Destination directory for saving video */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FDirectoryPath VideoOutputDir;

    /* Output file name (without extension) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FString VideoOutputFile = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLRTMPSettings
{
    GENERATED_BODY()

    /* The Stream destination URL */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FString StreamURL = "";

    /* The Stream destination Key */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FString StreamKey = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLRTSPSettings
{
    GENERATED_BODY()

    /* The RTSP Server ie rtsp://<domain>:port */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FString StreamURL = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLSRTSettings
{
    GENERATED_BODY()
    /* The Stream destination URL */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FString StreamURL = "";

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FOWLSRTOptions Options;
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLHTTPSettings
{
    GENERATED_BODY()
    /* The http destination for the post request */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    FString StreamURL = "";

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
    EOWLHttpFormat Format = EOWLHttpFormat::OF_MP4;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class OWLMEDIA_API UOWLMediaOutputComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    UOWLMediaOutputComponent();
    virtual ~UOWLMediaOutputComponent();

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void BeginDestroy() override;

    UPROPERTY()
    UOWLCaptureComponent* CaptureComponent = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Settings")
    EOWLMediaOutputType OutputType = EOWLMediaOutputType::T_RTMP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Settings", meta = (EditCondition = "OutputType == EOWLMediaOutputType::T_FILEOUTPUT", EditConditionHides))
    FOWLSaveToFileSettings SaveToFileSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Settings", meta = (EditCondition = "OutputType == EOWLMediaOutputType::T_RTMP", EditConditionHides))
    FOWLRTMPSettings RTMPSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Settings", meta = (EditCondition = "OutputType == EOWLMediaOutputType::T_RTSP", EditConditionHides))
    FOWLRTSPSettings RTSPSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Settings", meta = (EditCondition = "OutputType == EOWLMediaOutputType::T_HTTP", EditConditionHides))
    FOWLHTTPSettings HTTPSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Settings", meta = (EditCondition = "OutputType == EOWLMediaOutputType::T_SRT", EditConditionHides))
    FOWLSRTSettings SRTSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Metered License Auth", meta = (EditCondition = "bOverrideAPIKey && !bHideAPIOptions"))
    FString APIKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Metered License Auth", meta = (EditCondition = "!bHideAPIOptions"))
    bool bOverrideAPIKey;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Metered License Auth")
    bool bHideAPIOptions = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Settings")
    UTextureRenderTarget2D* InputRenderTarget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Output Settings")
    FOWLFFmpegSettings EncoderSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Output Settings")
    bool bUseTimecodeProviderWhereAvailable = false;

    UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
    bool HasStarted = false;

    UPROPERTY(VisibleAnywhere, Transient, Category = "Output Settings")
    uint64 DurationMs = 0;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Output Settings")
    bool IsMeteredPricing = false;

    UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
    int MinutesRemaining = 0;

    UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
    bool LoadingMinutesRemaining = false;

    // Expose delegates
    UPROPERTY(BlueprintAssignable, Category = "OWL Media Output")
    FOnMediaOutputStop OnStop;

    UPROPERTY(BlueprintAssignable, Category = "OWL Media Output")
    FOnMediaOutputStart OnStart;

    bool Start();
    void Stop();
    bool IsReconnecting();

public:
#if WITH_EDITOR
    bool HasCaptureComponentInHierarchy() const;
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
    virtual void PostLoad() override;
    virtual void PostInitProperties() override;

protected:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void OnRegister() override;   // substitute for on post actor created, because this is a component
    virtual void OnUnregister() override;

private:
    OWLImageInput* Input = nullptr;
    TSharedPtr<FOWLFFmpegOutput> Output = nullptr;
    TAtomic<bool> ShutdownRequested;
    TAtomic<bool> ReconnectRequested;
    TAtomic<bool> ShuttingDown;
    bool bShutdownForced = false;
    bool bRenderWatermark = true;
    bool bStartWhenViewportReady = false;
    FDateTime WhenMinutesWentNegative;
    bool bMinutesHaveGoneNegative;
    int MinutesAtStart = 0;
    int FilenameIteration = 0;
    FTSTicker::FDelegateHandle ReconnectionTickerHandle;
    FTSTicker::FDelegateHandle RunnableQueueHandle;
    FTSTicker::FDelegateHandle AsyncMinsHandle;
    FDelegateHandle AuthChangedHandle;
    FDelegateHandle LoggedOutHandle;
    uint8 ReconnectionAttempts = 0;
    uint8 MaxReconnectionAttempts = 20;
    const float ReconnectionWaitTime = 10.0f;
    EOWLDestinationFormat FFMpegDestinationFormat = EOWLDestinationFormat::F_MP4;
    int64 SendStart = 0;
    FDateTime FirstFrameTime = 0;
    FTimecode FirstFrameTimecode;
    FTimecode LastFrameTimecode;
    int64 FrameCount = 0;
    bool bSentFirstFrame = false;
    FCriticalSection CleanupCS;
    TSharedPtr<class FMeteredUsageWorker> MeteredUsageRunnable = nullptr;
    TArray<FString> FeaturesToDisable;
    FString StreamIdentifier;
    TAtomic<bool> RequestingMeteredMins = false;
    TAtomic<bool> MinutesRemainingSet = false;
    TQueue<int, EQueueMode::Mpsc> MinutesRemainingQueue;
    bool IsStopping = false;
    UPROPERTY()
    UTextureRenderTarget2D* IntermediateTarget = nullptr;
    bool bHasNotifiedResolutionMismatch = false;

    void Cleanup();
    void TryReconnect();
    void RemoveFFmpegTicker();
    void SendFrame();
    bool SendVideoFrame_RT(FRHICommandListImmediate& RHICmdList, int MsElapsed);
    void SetDurationMs();
    bool CheckMinutesRemaining();
    void OnMeteredRunnableStopped();
    void BlockUntilMinutesRequested();
    void StartWhenAuthReady();
    void OnAuthChanged();
    void BindToAuthChanged();
    bool CheckRunnableQueue(float Delta);
    bool CheckAsyncMinsQueue(float Delta);
    bool ValidateAuth();
    void ReportFailedAuth();
    bool UpdateMeteredMins();
    void CheckHardwareStatus();
    bool IsUnmetered();
    void RecalculateStreamConfig();
    static FString ShortNameFromFormat(EOWLDestinationFormat InFormat);
    static FString ExtensionFromFormat(EOWLDestinationFormat InFormat);
    static bool ValidateExtension(EOWLDestinationFormat Format, FString FileName);
    bool ValidateVideoInput();
    bool FindFreeFileName();
    bool ViewportDimensionsSet();
    bool ViewportActorInScene() const;
};
