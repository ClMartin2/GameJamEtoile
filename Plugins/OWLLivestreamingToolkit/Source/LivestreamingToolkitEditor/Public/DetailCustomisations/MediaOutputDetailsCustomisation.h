// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "IDetailCustomization.h"

class IDetailGroup;

class UOWLMediaOutputComponent;

class FMediaOutputDetailsCustomisation : public IDetailCustomization
{
public:
    static TSharedRef<IDetailCustomization> MakeInstance();

private:
    /** IDetailCustomization interface */
    virtual void CustomizeDetails( IDetailLayoutBuilder& DetailLayout ) override;

private:
    TSharedPtr<IPropertyHandle> HasStartedProperty;
    TSharedPtr<IPropertyHandle> DurationMsProperty;
    TSharedPtr<IPropertyHandle> MinutesRemainingProperty;
    TSharedPtr<IPropertyHandle> IsMeteredPricingProperty;
    TSharedPtr<IPropertyHandle> LoadingMinutesRemainingProperty;
    TSharedPtr<IPropertyHandle> HideApiOptionsProperty;
    // The list of selected objects, used when invoking a CallInEditor method
    TArray<TWeakObjectPtr<UObject>> SelectedObjectsList;

    FReply OnClickStart(TWeakObjectPtr<UOWLMediaOutputComponent> ComponentPtr) const;
    FReply OnClickStop(TWeakObjectPtr<UOWLMediaOutputComponent> ComponentPtr) const;
    bool IsStartEnabled(TWeakObjectPtr<UOWLMediaOutputComponent> ComponentPtr) const;
    bool IsStopEnabled(TWeakObjectPtr<UOWLMediaOutputComponent> ComponentPtr) const;

    bool IsHardwareEncodingEnabled() const;

    EVisibility GetMeteredTextVisibility() const;
    EVisibility GetUnmeteredTextVisibility() const;
    EVisibility GetNoLicenceFoundVisibility() const;
    EVisibility GetTrialButtonVisibility() const;
    bool HasValidLicence() const;

    FText GetDurationMsText(TWeakObjectPtr<UOWLMediaOutputComponent> ComponentPtr) const;
    FSlateColor GetDurationMsTextColor(TWeakObjectPtr<UOWLMediaOutputComponent> ComponentPtr) const;
    FText GetMinutesRemainingText() const;
    FSlateColor GetMinutesRemainingColor() const;
    FReply OnAddMoreMinutesClicked();
    FReply OnGetTrialMinutesClicked();

    FReply OnEnableHardwareEncodersClick();
    FText HardwareEncodersButtonText() const;
    bool HardwareEncodersButtonEnabled() const;
    EVisibility HardwareEncodersTextVisibility() const;
};
