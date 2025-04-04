// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "OWLSpoutReceiver.h"
#include "RHIResources.h"
#include "OWLSpoutReceiverManager.generated.h"


USTRUCT(BlueprintType)
struct OWLSPOUT_API FOWLSpoutReceiverInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver, meta=(EditCondition="!bUnderExternalControl", EditConditionHides))
	bool Active = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	bool UseFirstAvailableSender = true;

	/* Name of the sender we are receiving from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	FString Name = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver, meta=(EditCondition="!bUnderExternalControl", EditConditionHides))
	UTextureRenderTarget2D* RenderTarget = nullptr;

	/* Unreal Engine internally manages files in linear color space, but then applies
	a linear to sRGB conversion to all editor and game instances. To make your input
	texture look the same, tick this box and we convert sRGB input to Linear, so that
	Unreal can convert it back */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	bool bFixGamma = true;

	/* When the sending Spout texture is 8Bit, applying the gamma fix results in a lossy color
	conversion that can lose color detail. Tick this box to force the receiver to copy to a 16bit texture */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver, meta=(EditCondition="bFixGamma", EditConditionHides))
	bool bUpgrade8bitTo16 = true;

	UPROPERTY(VisibleAnywhere, Category = OWLSpoutReceiver, AdvancedDisplay)
	bool bUnderExternalControl = false;

private:
	FOWLSpoutReceiver* SpoutReceiver = nullptr;

public:
	void Receive()
	{
		if(SpoutReceiver == nullptr)
		{
			SpoutReceiver = new FOWLSpoutReceiver;
		}
		SpoutReceiver->ReceiveRenderTarget(Name, RenderTarget, UseFirstAvailableSender,bFixGamma);
	}

	void TryClose(bool KeepActive)
	{
		if (SpoutReceiver != nullptr)
		{
			delete SpoutReceiver;
			SpoutReceiver = nullptr;
		}
		if (!KeepActive)
		{
			Active = false;
		}
	}
};

UCLASS(meta=(DisplayName="OWL Spout Receiver Manager"))
class OWLSPOUT_API AOWLSpoutReceiverManager : public AActor
{
	GENERATED_BODY()

public:

	/** Returns a list of spout sender names that are available at this moment in time. */
	UFUNCTION(BlueprintCallable, Category = "Off World Live Spout Receiver")
	TArray<FString> GetAvailableSenderNames();

	// Sets default values for this actor's properties
	AOWLSpoutReceiverManager(const FObjectInitializer& ObjectInitializer);
	~AOWLSpoutReceiverManager();

	virtual bool ShouldTickIfViewportsOnly() const override;

private:
	void OnEndFrame();
	void CloseAllReceivers(bool keepActive);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Spout Receiver Settings")
	TArray<FOWLSpoutReceiverInterface> SpoutReceivers;

private:
	static bool ClosedEditorReceivers;
};

