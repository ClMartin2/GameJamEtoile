// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "softcam.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tools/OWLImageInput.h"
#include "OWLVirtualWebcamOutput.generated.h"


UCLASS(meta=(DisplayName="OWL Virtual Webcam Output"))
class OWLVIRTUALWEBCAM_API AOWLVirtualWebcamOutput : public AActor
{
	GENERATED_BODY()

public:
	AOWLVirtualWebcamOutput(const FObjectInitializer& ObjectInitializer);
	~AOWLVirtualWebcamOutput();

public:
	/* Aspect Ratio must be 4:3 (works for all webcam software) or 16:9 (works for some webcam software) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Virtual Webcam Settings")
	UTextureRenderTarget2D* InputRenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Virtual Webcam Settings")
	bool Active = false;

	/* Launches the OWL Virtual Webcam installer automatically if it has not
	 * Been installed on this machine */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Virtual Webcam Settings")
	bool LaunchInstallerWhenRequired = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Virtual Webcam Settings")
	bool bEnable60Fps = false;

public:
	/* Stop the camera (if running) and attempt to restart the camera */
	UFUNCTION(BlueprintCallable, Category="Virtual Webcam")
	void Restart();

protected:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual bool ShouldTickIfViewportsOnly() const override;

private:
	OWLImageInput* Input = nullptr;
	scCamera Softcam;
	bool Initialised = false;
	static bool ClosedEditorWebcam;

	int ResolutionX = 0;
	int ResolutionY = 0;

	const float AR_16_9 = 16.0/9.0;
	const float AR_4_3 = 4.0/3.0;

private:
	void Start();
	void Stop(bool KeepActive = false);
	bool LaunchInstaller();
};

