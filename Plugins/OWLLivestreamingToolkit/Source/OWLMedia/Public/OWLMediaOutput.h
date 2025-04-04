// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OWLMediaOutputComponent.h"

#include "OWLMediaOutput.generated.h"

UCLASS(meta=(DisplayName="OWL Media Output"))
class OWLMEDIA_API AOWLMediaOutput : public AActor
{
    GENERATED_BODY()

public:
    AOWLMediaOutput();
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void BeginDestroy() override;

    // Blueprint compatibility functions
    UFUNCTION(BlueprintCallable, Category="Output Controls")
    bool Start();

    UFUNCTION(BlueprintCallable, Category="Output Controls")
    void Stop();

    UFUNCTION(BlueprintCallable, Category="Connection State")
    bool IsReconnecting();

    // Expose component properties to blueprints
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Media Output")
    UOWLMediaOutputComponent* MediaOutputComponent;
};
