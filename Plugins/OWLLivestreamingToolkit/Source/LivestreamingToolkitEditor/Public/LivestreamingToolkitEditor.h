// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "CoreMinimal.h"

//CDV:improbable:excludestart
#include "SLivestreamWizard.h"
//CDV:improbable:excludeend
#include "Widgets/SWidget.h"
#include "Framework/Commands/UICommandList.h"
#include "Editor/LevelEditor/Private/SLevelEditor.h"
#include "Modules/ModuleManager.h"
#include "Toolkits/AssetEditorToolkit.h"

class FToolBarBuilder;
class FMenuBuilder;

class FLivestreamingToolkitEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

//CDV:improbable:excludestart
	/** This function will be bound to Command. */
	void UseLivestreamWizardButtonClicked();
	void LogInButtonClicked();
	void LogOutButtonClicked();
	void MyAccountButtonClicked();
	void LicenseUtiltyClicked();
//CDV:improbable:excludeend
	void OnEditorViewportRendering();
	bool IsEditorViewportRenderingEnabled();
	void OnRuntimeViewportRendering();
	bool IsRuntimeViewportRenderingEnabled();
//CDV:improbable:excludestart
	bool IsAlwaysDisabled();
//CDV:improbable:excludeend
	void PluginVersionButtonClicked();
	void KnowledgeCentreButtonClicked();
	void VisitWebsiteButtonClicked();
	void VisitDiscordButtonClicked();
	void VideoTutorialsButtonClicked();

private:

	void RegisterMenus();
//CDV:improbable:excludestart
	bool IsLogInButtonVisible();
	bool IsLogOutButtonVisible();

	TSharedRef<SDockTab> MakeLivestreamWizardTab( const FSpawnTabArgs& );
	TSharedRef<SWidget> GetLivestreamWizard(const TSharedRef<SDockTab>& InParentTab);

	void Load();
	void Save();
//CDV:improbable:excludeend

private:
	const FName PlacementModeCategoryHandle = TEXT("OffWorldLive");
//CDV:improbable:excludestart
	void RegisterWizardTabSpawner();
//CDV:improbable:excludeend
	void RegisterAndMapPluginCommands();
	void RegisterDetailsCustomisation();
	void RegisterPlacementModeExtensions();
	void RegisterPlacementModeItems(const struct FPlacementCategoryInfo* Info);
	void UnregisterPlacementModeExtensions();

	TSharedPtr<class FUICommandList> PluginCommands;
	TSharedRef<SWidget> FillComboButton(TSharedPtr<class FUICommandList> Commands);
//CDV:improbable:excludestart
	FDelegateHandle OnUpgradeAvailableHandle;
	void OnUpgradeAvailable(FString NewVersion, FString DownloadURL);
	void OnNewUpdateDownloadNowClicked(FString DownloadURL);
	void OnNewUpdateRemindMeLaterClicked();
	void OnNewUpdateSkipVersionClicked();
	void OnOpenSourceLicensesClicked();
	void AddLicenceWidget(FMenuBuilder& MenuBuilder, const uint8 Feature);

	FDelegateHandle OnEditorInitialised;
	void PopupDemoLicenceRequest(double Duration);

	/** Notification popup that new plugins are available */
	TWeakPtr<SNotificationItem> NewPluginsNotification;

	FString AvailableVersionHash = "";
	bool SkipVersion = false;
//CDV:improbable:excludeend

	FDelegateHandle OnFEngineLoopInitCompleteHandle;
//CDV:improbable:excludestart
	/** Holds the cine stream wizard singleton. */
	TWeakPtr<SLivestreamWizard> LivestreamWizardPtr;
//CDV:improbable:excludeend
};

