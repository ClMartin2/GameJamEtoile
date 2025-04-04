// Copyright Off World Live Limited 2020-2024. All rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Runtime/SlateCore/Public/Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

class SActiveLicenseWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SActiveLicenseWidget){}
		SLATE_ARGUMENT(FString, LicenceNamePretty)
		SLATE_ARGUMENT(FText, LicenceName);
		SLATE_ATTRIBUTE(bool, LicenceActive);
		SLATE_ATTRIBUTE(bool, IsDemo);
	SLATE_END_ARGS()
public:
	void Construct( const FArguments& InArgs );

private:
	static const FSlateBrush* GetCurrentIconBrush(const TAttribute<bool>& bIsActive);
	static const FSlateColor GetColorOpacity(const TAttribute<bool>& bIsDemo, const TAttribute<bool>& bIsActive);


};

