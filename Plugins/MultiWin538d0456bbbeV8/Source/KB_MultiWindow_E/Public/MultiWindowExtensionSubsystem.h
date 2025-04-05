// Copyright 2024-2025, Kibibyte, All rights reserved

#pragma once
#pragma warning (disable : 4668)

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "Blueprint/UserWidget.h"
#ifdef _WIN64
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows.h"
#include "Windows/HideWindowsPlatformTypes.h"
#endif
//#undef _WIN64
#include "Widgets/SWindow.h"
#include "Framework/Application/SlateApplication.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameViewportClient.h"
#include "commctrl.h"
#include <vector>
#include "Widgets/Images/SImage.h"
#include "Styling/CoreStyle.h"

#include "MultiWindowExtensionSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKB_MWE_OnWindowClosed, FString, WindowName, int64, WindowID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKB_MWE_OnWindowMoved, FString, WindowName, int64, WindowID, FVector2D, NewPosition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKB_MWE_OnWindowSizeChanged, FString, WindowName, int64, WindowID, FVector2D, NewSize);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKB_MWE_OnWindowMinimizeStateChanged, FString, WindowName, int64, WindowID, bool, IsNowMinimized);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKB_MWE_OnWindowMaximizeStateChanged, FString, WindowName, int64, WindowID, bool, IsNowMaximized);

UENUM(BlueprintType)
enum class EKB_MWE_WindowMode : uint8
{
	WindowedFullscreen,
	Windowed,
	Borderless,
};

UENUM(BlueprintType)
enum class EKB_MWE_WindowInitialState : uint8
{
	None,
	Maximized,
	Minimized,
};

UENUM(BlueprintType)
enum class EKB_MWE_WindowStartPosition : uint8
{
	CenteredOnScreen,
	OwnPositionNormal,
	OwnPositionCentered,
};

UENUM(BlueprintType)
enum class EKB_MWE_SizingRule : uint8
{
	UserSized	UMETA(ToolTip = "The user is able to resize the window"),
	AutoSized	UMETA(ToolTip = "The window gets resized automatically to contain it's content. (Work with things like size boxes as the top of the widget hierarchy)"),
	FixedSize		UMETA(ToolTip = "The size can't be changed"),
};

USTRUCT(BlueprintType)
struct FKB_MWE_WindowBoolValueSetting
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "If true, when dragging with the left mouse button anywhere on the window, it will move"), Category = "Multi Window Extension")
	bool DraggableAnywhere = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool AlwaysStayOnTop = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool CloseButtonEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool MaximizeButtonEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool MinimizeButtonEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool UseOSWindowBorder = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool InitiallyHidden = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "MaintainMainWindowFocus (Won't work in PIE, Use standalone mode, launch or package instead)"), Category = "Multi Window Extension")
	bool MaintainMainWindowFocus = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool QuitGameIfThisWindowCloses = false;
};

USTRUCT(BlueprintType)
struct FKB_MWE_WindowSizeRestrictionSettings
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool SetMaxWindowHeight = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	float MaxWindowHeight = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool SetMinWindowHeight = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	float MinWindowHeight = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool SetMaxWindowWidth = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	float MaxWindowWidth = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool SetMinWindowWidth = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	float MinWindowWidth = 0.0f;
};

USTRUCT(BlueprintType)
struct FKB_MWE_WindowAdvancedBorderSettings
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "UserResizeBorderMargin (\"UseOSWindowBorder\" must be false, Doesnt work in Borderless mode)"), Category = "Multi Window Extension")
	FMargin UserResizeBorderMargin = FMargin(3, 3, 3, 3);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "RoundedBorderWidth (If Using \"UseOSWindowBorder\", Usage Of \"Borderless\" Advised)"), Category = "Multi Window Extension")
	int RoundedBorderWidth = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "RoundedBorderHeight (If Using \"UseOSWindowBorder\", Usage Of \"Borderless\" Advised)"), Category = "Multi Window Extension")
	int RoundedBorderHeight = 0;
};

USTRUCT(BlueprintType)
struct FKB_MWE_WindowSettings
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FText Title = FText::FromString("My Newly Created Window");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FVector2D Size = FVector2D(500, 500);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	int SpawnOnMonitor = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	EKB_MWE_WindowStartPosition WindowStartPositionMode = EKB_MWE_WindowStartPosition::CenteredOnScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FVector2D Position = FVector2D(0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	EKB_MWE_WindowMode WindowMode = EKB_MWE_WindowMode::Windowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	EKB_MWE_WindowInitialState WindowInitialState = EKB_MWE_WindowInitialState::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "WindowOpacity (\"UseOSWindowBorder\" must be false)"), Category = "Multi Window Extension")
	float WindowOpacity = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	float ContentOpacity = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	EKB_MWE_SizingRule SizingRule = EKB_MWE_SizingRule::UserSized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FLinearColor BackgroundColor = FLinearColor(FLinearColor::Black);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FKB_MWE_WindowAdvancedBorderSettings AdvancedBorderSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FKB_MWE_WindowSizeRestrictionSettings SizeRestrictionsSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FKB_MWE_WindowBoolValueSetting BoolValues;
};

USTRUCT(BlueprintType)
struct FKB_MWE_MonitorInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	int Number = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FVector2D Size = FVector2D(0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FVector4 Placement = FVector4(0.0f, 0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool IsMainMonitor;
};

USTRUCT(BlueprintType)
struct FKB_MWE_MultiWindowInformation
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	int64 WindowID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FText Name = FText();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FVector2D Position = FVector2D();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	FVector2D Size = FVector2D();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool IsHidden = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool IsMinimized = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Multi Window Extension")
	bool IsMaximized = false;
};

UCLASS()
class KB_MULTIWINDOW_E_API UMultiWindowExtensionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintAssignable, Category = "Multi Window Extension | Delegates")
	FKB_MWE_OnWindowClosed OnClosed;

	UPROPERTY(BlueprintAssignable, Category = "Multi Window Extension | Delegates")
	FKB_MWE_OnWindowMoved OnMoved;

	UPROPERTY(BlueprintAssignable, Category = "Multi Window Extension | Delegates")
	FKB_MWE_OnWindowSizeChanged OnSizeChanged;

	UPROPERTY(BlueprintAssignable, Category = "Multi Window Extension | Delegates")
	FKB_MWE_OnWindowMinimizeStateChanged OnMinimizeStateChanged;

	UPROPERTY(BlueprintAssignable, Category = "Multi Window Extension | Delegates")
	FKB_MWE_OnWindowMaximizeStateChanged OnMaximizeStateChanged;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create New Window", ToolTip = "Creates/Spawns a new window. If you run this on Begin Play the window doesn't appear on top. You can add a little delay to prevent this. Make sure you add a little delay before this node if you use it on Event Begin Play! @return CreatedWidget", DeterminesOutputType = "WidgetClass"), Category = "Multi Window Extension |")
	UUserWidget* KB_MWE_Create(TSubclassOf<UUserWidget> WidgetClass, FKB_MWE_WindowSettings WindowSettings, int64& WindowID);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Monitor Informations", ToolTip = "Retrieves information about the monitors"), Category = "Multi Window Extension |")
	bool KB_MWE_MonitorInformations(TArray<FKB_MWE_MonitorInfo>& MonitorInformations, int& MonitorCount);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close Window", ToolTip = "Closes a specific window that was created by the \"Create New Window\" node. (You aren't able to close the main window. You can hide it if you want)"), Category = "Multi Window Extension |")
	void KB_MWE_CloseSpecific(int64 WindowID);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close All Created Windows", ToolTip = "Closes every opened window that got created by the \"Create New Window\" node. (Not the main window. You can hide it if you want)"), Category = "Multi Window Extension |")
	void KB_MWE_CloseAll();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Hide Window (Set To Background)", ToolTip = "Hides a specific window that was created by the \"Create New Window\" node. Or makes the main window invisible. When using the \"Selected Viewport\" mode the whole editor will hide. To prevent this you can use \"New Editor Window (PIE)\", \"Standalone\" or other \"modes\" like in a packaged game."), Category = "Multi Window Extension |")
	void KB_MWE_HideSpecific(int64 WindowID);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Show Window", ToolTip = "Makes a specific window visible that was created by the \"Create New Window\" node. Or makes the main window visible."), Category = "Multi Window Extension |")
	void KB_MWE_ShowSpecific(int64 WindowID);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Created Window List", ToolTip = "Retrieves a list of each window that got created by the \"Create New Window\" node with many information about those windows"), Category = "Multi Window Extension |")
	void KB_MWE_GetWindowList(TArray<FKB_MWE_MultiWindowInformation>& WindowInformations);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Main WindowID", ToolTip = "Retrieves the WindowID for the main window/original window (The window which exists at the very beginning, before you create any additional ones). Usable in order to hide or show the main window."), Category = "Multi Window Extension |")
	void KB_MWE_GetMainWindowID(int64& WindowID);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Change Widget of Window", ToolTip = "This node allows you to change the widget of a window after it got already created", DeterminesOutputType = "NewWidgetClass"), Category = "Multi Window Extension |")
	UUserWidget* KB_MWE_ChangeWidget(int64 WindowID, TSubclassOf<UUserWidget> NewWidgetClass);

private:
	TArray<int64> WindowIDs = {};
	TArray<TSharedRef<SWindow>> WindowReferences = {};
	TArray<FLinearColor> WindowBackgroundColors = {};
	TArray<bool> ShouldQuitOnClose = {};

	bool AlreadyStartedResizeChecker = false;
	FTimerHandle TimerHandle;
	bool CurrentNewestPositionCurrentlySet = false;
	FVector2D CurrentNewestPosition = FVector2D();
	TArray <TSharedRef<SWindow>> CurrentMovedReference = {}; // Smart solution to stupid initialize anti compile problem. Only Zeroth array element gets used
	bool FirstTimeCurrentMovedRef = true;

	TArray<FVector2D> BeforeSizes = {};
	TArray<bool> BeforeMinimizeStates = {};
	TArray<bool> BeforeMaximizeStates = {};

	TArray<int64> HiddenWindowIDs = {};
	TArray<FVector2D> HiddenWindowsLastPositions = {};
	TArray<FVector2D> HiddenWindowsLastSizes = {};

	int64 MainWindowID = 0;
	FVector2D MainWindowIDBeforeSize;
	bool MainWindowIDBeforeMinimizeState;
	bool MainWindowIDBeforeMaximizeState;
	FVector2D MainWindowIDBeforePosition;

	FTimerDelegate TimerDelegate;

	int NumberOfCloseDelegatesToIgnore = 0;

	static int KB_MWE_GetCurrentInputMode(APlayerController* PlayerController);
	static BOOL CALLBACK KB_MWE_MonitorEnumProc(HMONITOR hMonitor, HDC hdcMonitor, LPRECT lprcMonitor, LPARAM dwData);

	void KB_MWE_OnClosedBindingCall(const TSharedRef<SWindow>& EventWindow);
	void KB_MWE_OnMovedBindingCall(const TSharedRef<SWindow>& EventWindow);

	FOnWindowClosed LocalFOnWindowClosed;
	FOnWindowMoved LocalFOnWindowMoved;

protected:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	void KB_MWE_Timer();
	virtual void Deinitialize() override;
};