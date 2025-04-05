// Copyright 2024-2025, Kibibyte, All rights reserved

#include "MultiWindowExtensionSubsystem.h"

UUserWidget* UMultiWindowExtensionSubsystem::KB_MWE_Create(TSubclassOf<UUserWidget> WidgetClass, FKB_MWE_WindowSettings WindowSettings, int64& WindowID)
{
	UUserWidget* LocalUserWidget = nullptr;
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) { // No Usage In Editor
		ESizingRule localESizingRule = ESizingRule::UserSized;
		switch (WindowSettings.SizingRule) {
		case EKB_MWE_SizingRule::FixedSize:
			localESizingRule = ESizingRule::FixedSize;
			break;
		case EKB_MWE_SizingRule::AutoSized:
			localESizingRule = ESizingRule::Autosized;
			break;
		case EKB_MWE_SizingRule::UserSized:
			localESizingRule = ESizingRule::UserSized;
			break;
		}
		TOptional<float> LocalMaxWindowWith;
		TOptional<float> LocalMinWindowWith;
		TOptional<float> LocalMaxWindowHeight;
		TOptional<float> LocalMinWindowHeight;
		if (WindowSettings.SizeRestrictionsSettings.SetMaxWindowWidth)
			LocalMaxWindowWith = WindowSettings.SizeRestrictionsSettings.MaxWindowWidth;
		if (WindowSettings.SizeRestrictionsSettings.SetMinWindowWidth)
			LocalMinWindowWith = WindowSettings.SizeRestrictionsSettings.MinWindowWidth;
		if (WindowSettings.SizeRestrictionsSettings.SetMaxWindowHeight)
			LocalMaxWindowHeight = WindowSettings.SizeRestrictionsSettings.MaxWindowHeight;
		if (WindowSettings.SizeRestrictionsSettings.SetMinWindowHeight)
			LocalMinWindowHeight = WindowSettings.SizeRestrictionsSettings.MinWindowHeight;
		TSharedRef<SWindow> LocalSWindowRef = SNew(SWindow)
			.Title(WindowSettings.Title)
			.ClientSize(WindowSettings.Size)
			.UserResizeBorder(WindowSettings.AdvancedBorderSettings.UserResizeBorderMargin)
			.bDragAnywhere(WindowSettings.BoolValues.DraggableAnywhere)
			//.IsTopmostWindow(WindowSettings.BoolValues.AlwaysStayOnTop && !WindowSettings.BoolValues.UseOSWindowBorder) Removed due to interaction bug after window got destroyed
			.HasCloseButton(WindowSettings.BoolValues.CloseButtonEnabled)
			.SupportsMaximize(WindowSettings.BoolValues.MaximizeButtonEnabled)
			.SupportsMinimize(WindowSettings.BoolValues.MinimizeButtonEnabled)
			.UseOSWindowBorder(WindowSettings.BoolValues.UseOSWindowBorder)
			.SizingRule(localESizingRule)
			.MaxWidth(LocalMaxWindowWith)
			.MinWidth(LocalMinWindowWith)
			.MaxHeight(LocalMaxWindowHeight)
			.MinHeight(LocalMinWindowHeight)
			.RenderOpacity(WindowSettings.ContentOpacity)
			.SupportsTransparency(WindowSettings.WindowOpacity == 1.0f ? EWindowTransparency::None : EWindowTransparency::PerWindow)
			.CreateTitleBar(!((WindowSettings.WindowMode == EKB_MWE_WindowMode::Borderless || WindowSettings.WindowMode == EKB_MWE_WindowMode::WindowedFullscreen) && !WindowSettings.BoolValues.UseOSWindowBorder) ? true : false);

		WindowReferences.Add(LocalSWindowRef);
		WindowBackgroundColors.Add(WindowSettings.BackgroundColor);
		ShouldQuitOnClose.Add(WindowSettings.BoolValues.QuitGameIfThisWindowCloses);

		TSharedRef<SOverlay> RootOverlay = SNew(SOverlay);
		RootOverlay->AddSlot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SImage)
					.ColorAndOpacity(WindowSettings.BackgroundColor)
					.Image(FCoreStyle::Get().GetBrush("WhiteBrush"))
					.Visibility(EVisibility::HitTestInvisible)
			];

		if (WidgetClass) {
			LocalUserWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
			if (LocalUserWidget) {
				RootOverlay->AddSlot()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						LocalUserWidget->TakeWidget()
					];
			}
		}
		else {
			LocalUserWidget = nullptr;
		}
		LocalSWindowRef->SetContent(RootOverlay);

		FSlateApplication::Get().AddWindow(LocalSWindowRef);

		LocalSWindowRef->SetOpacity(WindowSettings.WindowOpacity);

		const char* LocalLPCSTR = TCHAR_TO_ANSI(*WindowSettings.Title.ToString());
		HWND LocalHANDLE = FindWindowA(NULL, LocalLPCSTR);
		WindowID = (int64)LocalHANDLE;
		WindowIDs.Add((int64)LocalHANDLE);

		/*TEnumAsByte<EWindowMode::Type> localEWindowMode;
		if (WindowSettings.WindowMode == EKB_MWE_WindowMode::Windowed) {
			localEWindowMode = EWindowMode::Windowed;
		}
		else {
			localEWindowMode = EWindowMode::WindowedFullscreen;
		}
		LocalSWindowRef.Get().SetWindowMode(localEWindowMode);*/
		TArray<FKB_MWE_MonitorInfo> LocalMonitorInformations;
		int LocalMonitorCount = 1;
		KB_MWE_MonitorInformations(LocalMonitorInformations, LocalMonitorCount);
		int LocalSpawnOnMonitor = FMath::Clamp(WindowSettings.SpawnOnMonitor, 1, LocalMonitorCount);

		if (WindowSettings.WindowMode == EKB_MWE_WindowMode::Borderless) {
			LONG lStyle = GetWindowLong(LocalHANDLE, GWL_STYLE);
			lStyle &= ~(WS_CAPTION | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_SYSMENU);
			SetWindowLong(LocalHANDLE, GWL_STYLE, lStyle);

			LONG lExStyle = GetWindowLong(LocalHANDLE, GWL_EXSTYLE);
			lExStyle &= ~(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE | WS_EX_STATICEDGE);
			SetWindowLong(LocalHANDLE, GWL_EXSTYLE, lExStyle);
			//LocalSWindowRef.Get().Resize(WindowSettings.Size);
		}

		if (WindowSettings.WindowMode == EKB_MWE_WindowMode::WindowedFullscreen) {
			FVector2D WhereToPutWindow0 = FVector2D(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.X, LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.Y);
			LocalSWindowRef.Get().MoveWindowTo(WhereToPutWindow0);
			LocalSWindowRef.Get().SetWindowMode(EWindowMode::WindowedFullscreen);
			//LocalSWindowRef.Get().Resize(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Size);
		} else {
			switch (WindowSettings.WindowStartPositionMode) {
			case EKB_MWE_WindowStartPosition::CenteredOnScreen:
			/*	if (LocalSpawnOnMonitor == 1) {
					if (WindowSettings.WindowMode == EKB_MWE_WindowMode::Borderless) {
						LocalSWindowRef.Get().MoveWindowTo(FVector2D(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Size.X / 2 - WindowSettings.Size.X / 2, LocalMonitorInformations[LocalSpawnOnMonitor - 1].Size.Y / 2 - WindowSettings.Size.Y / 2));
					}
				}
				else {*/
					LocalSWindowRef.Get().MoveWindowTo(FVector2D(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.X + LocalMonitorInformations[LocalSpawnOnMonitor - 1].Size.X / 2 - WindowSettings.Size.X / 2, LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.Y + LocalMonitorInformations[LocalSpawnOnMonitor - 1].Size.Y / 2 - WindowSettings.Size.Y / 2));
				//}
				break;
			case EKB_MWE_WindowStartPosition::OwnPositionNormal:
				/*if (LocalSpawnOnMonitor == 1) {
					LocalSWindowRef.Get().MoveWindowTo(WindowSettings.Position);
				}
				else {*/
					//FVector2D WhereToPutWindow1 = FVector2D(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.X + WindowSettings.Position.X, LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.Y + WindowSettings.Position.Y);
					LocalSWindowRef.Get().MoveWindowTo(FVector2D(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.X + WindowSettings.Position.X, LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.Y + WindowSettings.Position.Y));
				//}
				break;
			case EKB_MWE_WindowStartPosition::OwnPositionCentered:
				/*if (LocalSpawnOnMonitor == 1) {
					LocalSWindowRef.Get().MoveWindowTo(WindowSettings.Position - WindowSettings.Size / 2);
				}
				else {*/
					//FVector2D WhereToPutWindow3 = FVector2D(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.X + WindowSettings.Position.X - WindowSettings.Size.X / 2, LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.Y + WindowSettings.Position.Y - WindowSettings.Size.Y / 2);
					LocalSWindowRef.Get().MoveWindowTo(FVector2D(LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.X + WindowSettings.Position.X - WindowSettings.Size.X / 2, LocalMonitorInformations[LocalSpawnOnMonitor - 1].Placement.Y + WindowSettings.Position.Y - WindowSettings.Size.Y / 2));
				//}
				break;
			}
		}


		if (WindowSettings.AdvancedBorderSettings.RoundedBorderWidth != 0 || WindowSettings.AdvancedBorderSettings.RoundedBorderHeight != 0) {
			HRGN LocalHRGN = CreateRoundRectRgn(0, 0, WindowSettings.Size.X, WindowSettings.Size.Y, WindowSettings.AdvancedBorderSettings.RoundedBorderWidth, WindowSettings.AdvancedBorderSettings.RoundedBorderHeight);
			SetWindowRgn(LocalHANDLE, LocalHRGN, true);
		}

		RECT LocalRECT;
		if (GetWindowRect(LocalHANDLE, &LocalRECT)) {
			FVector2D CurrentSize = FIntPoint(LocalRECT.right - LocalRECT.left, LocalRECT.bottom - LocalRECT.top);
			FVector2D CurrentPosition = FIntPoint(LocalRECT.left, LocalRECT.top);
			if (WindowSettings.BoolValues.InitiallyHidden) {
				HiddenWindowIDs.Add(WindowID);
				HiddenWindowsLastPositions.Add(CurrentPosition);
				HiddenWindowsLastSizes.Add(CurrentSize);
				SetWindowPos((HWND)WindowID, HWND_BOTTOM, 0, 0, 0, 0, SWP_HIDEWINDOW);
			}
			if (WindowSettings.BoolValues.AlwaysStayOnTop)// && WindowSettings.BoolValues.UseOSWindowBorder)
				SetWindowPos(LocalHANDLE, HWND_TOPMOST, CurrentPosition.X, CurrentPosition.Y, CurrentSize.X, CurrentSize.Y, SW_NORMAL);
			BeforeSizes.Add(CurrentSize);
			BeforeMinimizeStates.Add(IsIconic(LocalHANDLE));
			BeforeMaximizeStates.Add(IsZoomed(LocalHANDLE));
		}

		if (WindowSettings.WindowInitialState != EKB_MWE_WindowInitialState::None) {
			if (WindowSettings.WindowInitialState == EKB_MWE_WindowInitialState::Maximized) {
				LocalSWindowRef->Maximize();
			}
			else {
				LocalSWindowRef->Minimize();
			}
		}

		LocalSWindowRef->SetOnWindowClosed(LocalFOnWindowClosed);
		LocalSWindowRef->SetOnWindowMoved(LocalFOnWindowMoved);
		
		if (WindowSettings.BoolValues.MaintainMainWindowFocus) {
			if (!(GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
				if (MainWindowID != 0) {
					SetForegroundWindow((HWND)MainWindowID);
					APlayerController* Bannana = UGameplayStatics::GetPlayerController(GetWorld(), 0);;
					switch (KB_MWE_GetCurrentInputMode(Bannana)) {
					case 1:
						Bannana->SetInputMode(FInputModeUIOnly());
						break;
					case 2:
						Bannana->SetInputMode(FInputModeGameAndUI());
						break;
					case 3:
						Bannana->SetInputMode(FInputModeGameOnly());
						break;
					case 0:
						break;
					}
				}
			}
		}
	}
	return LocalUserWidget;
}

int UMultiWindowExtensionSubsystem::KB_MWE_GetCurrentInputMode(APlayerController* PlayerController)
{
	if (IsValid(PlayerController))
	{
		UGameViewportClient* GameViewportClient = PlayerController->GetWorld()->GetGameViewport();
		ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();

		bool ignore = GameViewportClient->IgnoreInput();
		EMouseCaptureMode capt = GameViewportClient->GetMouseCaptureMode();

		if (ignore == false && capt == EMouseCaptureMode::CaptureDuringMouseDown)
		{
			return 2;  // Game And UI
		}
		else if (ignore == true && capt == EMouseCaptureMode::NoCapture)
		{
			return 1;  // UI Only
		}
		else
		{
			return 3;  // Game Only
		}
	}
	return 0;
}

struct KB_LocalMonitorInfoStruct2 {
	int MonitorCount;
	FVector2D MonitorSize;
	FVector4 MonitorPlacement;
	bool IsMainMonitor;
};

bool UMultiWindowExtensionSubsystem::KB_MWE_MonitorInformations(TArray<FKB_MWE_MonitorInfo>& MonitorInformations, int& MonitorCount)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		TArray<FKB_MWE_MonitorInfo> LocalMonitorInformations;
		FKB_MWE_MonitorInfo LocalSingleMonitorInformation;
		std::vector<KB_LocalMonitorInfoStruct2> monitorInformations;
		if (EnumDisplayMonitors(NULL, NULL, KB_MWE_MonitorEnumProc, reinterpret_cast<LPARAM>(&monitorInformations))) {
			//for (const KB_LocalMonitorInfoStruct2& oneMonitor : monitorInformations) {
			for (int i = 0; i < monitorInformations.size(); ++i) {
				LocalSingleMonitorInformation.Number = i + 1;// /*monitorInformations.size(); -*/oneMonitor.MonitorCount;
				LocalSingleMonitorInformation.Size = monitorInformations[i].MonitorSize;
				LocalSingleMonitorInformation.Placement = monitorInformations[i].MonitorPlacement;
				LocalSingleMonitorInformation.IsMainMonitor = monitorInformations[i].IsMainMonitor;
				LocalMonitorInformations.Add(LocalSingleMonitorInformation);
			}
			//Algo::Reverse(LocalMonitorInformations);
			MonitorInformations = LocalMonitorInformations;
			MonitorCount = LocalMonitorInformations.Num();
			return true;
		}
	}
	return false;
}

BOOL CALLBACK UMultiWindowExtensionSubsystem::KB_MWE_MonitorEnumProc(HMONITOR hMonitor, HDC hdcMonitor, LPRECT lprcMonitor, LPARAM dwData)
{
	std::vector<KB_LocalMonitorInfoStruct2>* monitorInfoList = reinterpret_cast<std::vector<KB_LocalMonitorInfoStruct2>*>(dwData);
	KB_LocalMonitorInfoStruct2 LocalMonitorInfos;
	LocalMonitorInfos.MonitorCount = static_cast<int>(monitorInfoList->size());
	LocalMonitorInfos.MonitorSize = FVector2D(lprcMonitor->right - lprcMonitor->left, lprcMonitor->bottom - lprcMonitor->top);
	LocalMonitorInfos.MonitorPlacement = FVector4(lprcMonitor->left, lprcMonitor->top, lprcMonitor->right, lprcMonitor->bottom);
	// Check if this is the main monitor
	MONITORINFO mi = { sizeof(mi) };
	if (GetMonitorInfo(hMonitor, &mi))
	{
		LocalMonitorInfos.IsMainMonitor = (mi.dwFlags & MONITORINFOF_PRIMARY) != 0;
	}
	else
	{
		LocalMonitorInfos.IsMainMonitor = false;
	}
	monitorInfoList->push_back(LocalMonitorInfos);
	return 1;
}

void UMultiWindowExtensionSubsystem::KB_MWE_CloseSpecific(int64 WindowID)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		for (int i = 0; i < WindowIDs.Num(); i++) {
			if (WindowIDs[i] == WindowID) {
				NumberOfCloseDelegatesToIgnore++; // Needs to be in front of the DestoryWindow line below!
				FSlateApplication::Get().DestroyWindowImmediately(WindowReferences[i]);
				WindowReferences.RemoveAt(i);
				WindowBackgroundColors.RemoveAt(i);
				ShouldQuitOnClose.RemoveAt(i);
				WindowIDs.RemoveAt(i);
				BeforeSizes.RemoveAt(i);
				BeforeMinimizeStates.RemoveAt(i);
				BeforeMaximizeStates.RemoveAt(i);
				break;
			}
		}
	}
}

void UMultiWindowExtensionSubsystem::KB_MWE_CloseAll()
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		for (int i = 0; i < WindowReferences.Num(); i++) {
			NumberOfCloseDelegatesToIgnore++;
			FSlateApplication::Get().DestroyWindowImmediately(WindowReferences[i]);
		}
		WindowReferences.Empty();
		WindowBackgroundColors.Empty();
		ShouldQuitOnClose.Empty();
		WindowIDs.Empty();
		BeforeSizes.Empty();
		BeforeMinimizeStates.Empty();
		BeforeMaximizeStates.Empty();
	}
}

void UMultiWindowExtensionSubsystem::KB_MWE_HideSpecific(int64 WindowID)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		RECT LocalRECT;
		FVector2D CurrentSize;
		FVector2D CurrentPosition;
		if (WindowID == MainWindowID) {
			if (GetWindowRect((HWND)MainWindowID, &LocalRECT)) {
				CurrentSize = FIntPoint(LocalRECT.right - LocalRECT.left, LocalRECT.bottom - LocalRECT.top);
				CurrentPosition = FIntPoint(LocalRECT.left, LocalRECT.top);
				HiddenWindowIDs.Add(WindowID);;
				HiddenWindowsLastPositions.Add(CurrentPosition);
				HiddenWindowsLastSizes.Add(CurrentSize);
				SetWindowPos((HWND)MainWindowID, HWND_BOTTOM, 0, 0, 0, 0, SWP_HIDEWINDOW);
			}
		}
		else {
			for (int i = 0; i < WindowIDs.Num(); i++) {
				if (WindowIDs[i] == WindowID) {
					if (GetWindowRect((HWND)WindowIDs[i], &LocalRECT)) {
						CurrentSize = FIntPoint(LocalRECT.right - LocalRECT.left, LocalRECT.bottom - LocalRECT.top);
						CurrentPosition = FIntPoint(LocalRECT.left, LocalRECT.top);
						HiddenWindowIDs.Add(WindowID);;
						HiddenWindowsLastPositions.Add(CurrentPosition);
						HiddenWindowsLastSizes.Add(CurrentSize);
						SetWindowPos((HWND)WindowIDs[i], HWND_BOTTOM, 0, 0, 0, 0, SWP_HIDEWINDOW);
					}
					break;
				}
			}
		}
		if (!(GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
			if (MainWindowID != 0) {
				SetForegroundWindow((HWND)MainWindowID);
				APlayerController* Bannana = UGameplayStatics::GetPlayerController(GetWorld(), 0);;
				switch (KB_MWE_GetCurrentInputMode(Bannana)) {
				case 1:
					Bannana->SetInputMode(FInputModeUIOnly());
					break;
				case 2:
					Bannana->SetInputMode(FInputModeGameAndUI());
					break;
				case 3:
					Bannana->SetInputMode(FInputModeGameOnly());
					break;
				case 0:
					break;
				}
			}
		}
	}
}

void UMultiWindowExtensionSubsystem::KB_MWE_ShowSpecific(int64 WindowID)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		if (WindowID == MainWindowID) {
			if (HiddenWindowIDs.Contains(WindowID)) {
				SetWindowPos((HWND)MainWindowID, HWND_TOP, HiddenWindowsLastPositions[HiddenWindowIDs.Find(WindowID)].X, HiddenWindowsLastPositions[HiddenWindowIDs.Find(WindowID)].Y, HiddenWindowsLastSizes[HiddenWindowIDs.Find(WindowID)].X, HiddenWindowsLastSizes[HiddenWindowIDs.Find(WindowID)].Y, SWP_SHOWWINDOW);
				HiddenWindowsLastPositions.RemoveAt(HiddenWindowIDs.Find(WindowID));
				HiddenWindowsLastSizes.RemoveAt(HiddenWindowIDs.Find(WindowID));
				HiddenWindowIDs.Remove(WindowID);
			}
			else {
				SetWindowPos((HWND)MainWindowID, HWND_TOP, 0, 0, 0, 0, SWP_SHOWWINDOW);
			}
		}
		else {
			for (int i = 0; i < WindowIDs.Num(); i++) {
				if (WindowIDs[i] == WindowID) {
					if (HiddenWindowIDs.Contains(WindowIDs[i])) {
						SetWindowPos((HWND)WindowIDs[i], HWND_TOP, HiddenWindowsLastPositions[HiddenWindowIDs.Find(WindowIDs[i])].X, HiddenWindowsLastPositions[HiddenWindowIDs.Find(WindowIDs[i])].Y, HiddenWindowsLastSizes[HiddenWindowIDs.Find(WindowIDs[i])].X, HiddenWindowsLastSizes[HiddenWindowIDs.Find(WindowIDs[i])].Y, SWP_SHOWWINDOW);
						HiddenWindowsLastPositions.RemoveAt(HiddenWindowIDs.Find(WindowIDs[i]));
						HiddenWindowsLastSizes.RemoveAt(HiddenWindowIDs.Find(WindowIDs[i]));
						HiddenWindowIDs.Remove(WindowIDs[i]);
					}
					else {
						SetWindowPos((HWND)WindowIDs[i], HWND_TOP, 0, 0, 0, 0, SWP_SHOWWINDOW);
					}
					break;
				}
			}
		}
		if (!(GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
			if (MainWindowID != 0) {
				SetForegroundWindow((HWND)MainWindowID);
				APlayerController* Bannana = UGameplayStatics::GetPlayerController(GetWorld(), 0);;
				switch (KB_MWE_GetCurrentInputMode(Bannana)) {
				case 1:
					Bannana->SetInputMode(FInputModeUIOnly());
					break;
				case 2:
					Bannana->SetInputMode(FInputModeGameAndUI());
					break;
				case 3:
					Bannana->SetInputMode(FInputModeGameOnly());
					break;
				case 0:
					break;
				}
			}
		}
	}
}

void UMultiWindowExtensionSubsystem::KB_MWE_GetWindowList(TArray<FKB_MWE_MultiWindowInformation>& WindowInformations)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		TArray<FKB_MWE_MultiWindowInformation> LocalWindowInformations = {};
		TArray<FText> LocalTextArray = {};
		TArray<bool> LocalBoolArray = {};
		for (int i = 0; i < WindowReferences.Num(); i++) {
			FKB_MWE_MultiWindowInformation LocalSingleWindowInformation;
			LocalSingleWindowInformation.WindowID = WindowIDs[i];
			LocalSingleWindowInformation.Name = WindowReferences[i].Get().GetTitle();
			LocalSingleWindowInformation.Position = WindowReferences[i].Get().GetPositionInScreen();
			LocalSingleWindowInformation.Size = BeforeSizes[i];
			LocalSingleWindowInformation.IsHidden = HiddenWindowIDs.Contains(WindowIDs[i]);
			LocalSingleWindowInformation.IsMinimized = BeforeMinimizeStates[i];
			LocalSingleWindowInformation.IsMaximized = BeforeMaximizeStates[i];
			LocalWindowInformations.Add(LocalSingleWindowInformation);
		}
		WindowInformations = LocalWindowInformations;
	}
}

void UMultiWindowExtensionSubsystem::KB_MWE_GetMainWindowID(int64& WindowID)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		WindowID = MainWindowID;
	}
}

UUserWidget* UMultiWindowExtensionSubsystem::KB_MWE_ChangeWidget(int64 WindowID, TSubclassOf<UUserWidget> NewWidgetClass)
{
	UUserWidget* LocalUserWidget = nullptr;
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		TSharedPtr<SWindow> LocalSWindowRef;
		FLinearColor LocalLinearColor = FLinearColor();
		for (int i = 0; i < WindowIDs.Num(); i++) {
			if (WindowIDs[i] == WindowID) {
				LocalSWindowRef = WindowReferences[i];
				LocalLinearColor = WindowBackgroundColors[i];
				break;
			}
		}

		TSharedRef<SOverlay> RootOverlay = SNew(SOverlay);
		RootOverlay->AddSlot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SImage)
					.ColorAndOpacity(LocalLinearColor)
					.Image(FCoreStyle::Get().GetBrush("WhiteBrush"))
					.Visibility(EVisibility::HitTestInvisible)
			];

		if (NewWidgetClass) {
			LocalUserWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
			if (LocalUserWidget) {
				RootOverlay->AddSlot()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						LocalUserWidget->TakeWidget()
					];
			}
		}
		else {
			LocalUserWidget = nullptr;
		}
		LocalSWindowRef->SetContent(RootOverlay);
	}
	return LocalUserWidget;
}

// Bindings
void UMultiWindowExtensionSubsystem::KB_MWE_OnClosedBindingCall(const TSharedRef<SWindow>& EventWindow)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		if (NumberOfCloseDelegatesToIgnore > 0) {
			NumberOfCloseDelegatesToIgnore--;
			return;
		}
		const char* LocalLPCSTR1 = TCHAR_TO_ANSI(*EventWindow.Get().GetTitle().ToString());
		HWND LocalHANDLE1 = FindWindowA(NULL, LocalLPCSTR1);
		if (MainWindowID == (int64)LocalHANDLE1) {
			for (int i = 0; i < WindowIDs.Num(); i++) {
				DestroyWindow((HWND)WindowIDs[i]);
			}
			if (GetWorld()->WorldType == EWorldType::PIE) {
				if (GetWorld()->WorldType == EWorldType::Game)
					FGenericPlatformMisc::RequestExit(false); // This fixes a bug where you weren't able to save changes in the engine after playing in standalone as it still ran in the background for some reason
			}
			return;
		}

		const char* LocalLPCSTR = TCHAR_TO_ANSI(*EventWindow.Get().GetTitle().ToString());
		HWND LocalHANDLE = FindWindowA(NULL, LocalLPCSTR);
		OnClosed.Broadcast(EventWindow.Get().GetTitle().ToString(), (int64)LocalHANDLE);
		int MyWindowIndex = 0;
		WindowReferences.Find(EventWindow, MyWindowIndex);
		if (ShouldQuitOnClose[MyWindowIndex]) {
			UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, false);
		}
		WindowReferences.RemoveAt(MyWindowIndex);
		WindowBackgroundColors.RemoveAt(MyWindowIndex);
		ShouldQuitOnClose.RemoveAt(MyWindowIndex);
		WindowIDs.RemoveAt(MyWindowIndex);
		BeforeSizes.RemoveAt(MyWindowIndex);
		BeforeMinimizeStates.RemoveAt(MyWindowIndex);
		BeforeMaximizeStates.RemoveAt(MyWindowIndex);
	}
}

void UMultiWindowExtensionSubsystem::KB_MWE_OnMovedBindingCall(const TSharedRef<SWindow>& EventWindow)
{
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		// Basically Stores All The Important Informations To Then Be Called From Timer Loop -> Fixes OnMove Delegate Spam
		CurrentNewestPosition = EventWindow.Get().GetPositionInScreen();
		CurrentNewestPositionCurrentlySet = true;
		if (FirstTimeCurrentMovedRef) {
			CurrentMovedReference.Add(EventWindow);
			FirstTimeCurrentMovedRef = false;
		}
		else {
			CurrentMovedReference[0] = EventWindow;
		}
	}
}

void UMultiWindowExtensionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		// Get Main WindowID
		TSharedPtr<SWindow> Bana2n = FSlateApplication::Get().GetActiveTopLevelWindow();
		if (Bana2n == nullptr)
			return;
		const char* LocalLPCSTR = TCHAR_TO_ANSI(*Bana2n->GetTitle().ToString());
		HWND LocalHANDLE = FindWindowA(NULL, LocalLPCSTR);
		if (!IsWindow(LocalHANDLE))
			return;
		MainWindowID = (int64)LocalHANDLE;

		RECT LocalRECT;
		if (GetWindowRect(LocalHANDLE, &LocalRECT)) {
			MainWindowIDBeforeSize = FIntPoint(LocalRECT.right - LocalRECT.left, LocalRECT.bottom - LocalRECT.top);
			MainWindowIDBeforePosition = FVector2D(LocalRECT.left, LocalRECT.top);
		}
		MainWindowIDBeforeMinimizeState = IsIconic((HWND)MainWindowID);
		MainWindowIDBeforeMaximizeState = IsZoomed((HWND)MainWindowID);
		Bana2n->SetOnWindowClosed(LocalFOnWindowClosed); // Insanely smart way of simulating PIE End without using UnrealEd
		Bana2n->SetOnWindowMoved(LocalFOnWindowMoved);
		TimerDelegate.BindUObject(this, &UMultiWindowExtensionSubsystem::KB_MWE_Timer);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.01f, true, 0.1f);

		LocalFOnWindowClosed.BindUObject(this, &UMultiWindowExtensionSubsystem::KB_MWE_OnClosedBindingCall);
		LocalFOnWindowMoved.BindUObject(this, &UMultiWindowExtensionSubsystem::KB_MWE_OnMovedBindingCall);
	}
}

void UMultiWindowExtensionSubsystem::KB_MWE_Timer() {
	if (!GIsEditor || (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE))) {
		TArray<int64> LocalWindowIDs = WindowIDs;
		LocalWindowIDs.Add(MainWindowID);
		for (int i = 0; i < LocalWindowIDs.Num(); i++) {
			// Size Stuff
			RECT LocalRECT;
			if (GetWindowRect((HWND)LocalWindowIDs[i], &LocalRECT)) {
				FVector2D CurrentSize = FIntPoint(LocalRECT.right - LocalRECT.left, LocalRECT.bottom - LocalRECT.top);
				if (LocalWindowIDs[i] == MainWindowID) {
					if (MainWindowIDBeforeSize != CurrentSize) {
						int LocalInt = GetWindowTextLength((HWND)LocalWindowIDs[i]);
						if (LocalInt > 0) {
							TCHAR* buffer = new TCHAR[LocalInt + 1];
							GetWindowText((HWND)LocalWindowIDs[i], buffer, LocalInt + 1);
							FString WindowName(buffer);
							delete[] buffer;
							MainWindowIDBeforeSize = CurrentSize;
							OnSizeChanged.Broadcast(WindowName, LocalWindowIDs[i], CurrentSize);
						}
					}
				}
				else {
					if (BeforeSizes[i] != CurrentSize) {
						int LocalInt = GetWindowTextLength((HWND)LocalWindowIDs[i]);
						if (LocalInt > 0) {
							TCHAR* buffer = new TCHAR[LocalInt + 1];
							GetWindowText((HWND)LocalWindowIDs[i], buffer, LocalInt + 1);
							FString WindowName(buffer);
							delete[] buffer;
							BeforeSizes[i] = CurrentSize;
							OnSizeChanged.Broadcast(WindowName, LocalWindowIDs[i], CurrentSize);
						}
					}
				}
			}
			// Minimize Stuff
			bool CurrentMinimizeState = false;
			if (LocalWindowIDs[i] == MainWindowID) {
				CurrentMinimizeState = IsIconic((HWND)MainWindowID);
				if (MainWindowIDBeforeMinimizeState != CurrentMinimizeState) {
					int LocalInt = GetWindowTextLength((HWND)MainWindowID);
					if (LocalInt > 0) {
						TCHAR* buffer = new TCHAR[LocalInt + 1];
						GetWindowText((HWND)MainWindowID, buffer, LocalInt + 1);
						FString WindowName(buffer);
						delete[] buffer;
						MainWindowIDBeforeMinimizeState = CurrentMinimizeState;
						OnMinimizeStateChanged.Broadcast(WindowName, MainWindowID, CurrentMinimizeState);
					}
				}
			}
			else {
				CurrentMinimizeState = IsIconic((HWND)LocalWindowIDs[i]);
				if (BeforeMinimizeStates[i] != CurrentMinimizeState) {
					int LocalInt = GetWindowTextLength((HWND)LocalWindowIDs[i]);
					if (LocalInt > 0) {
						TCHAR* buffer = new TCHAR[LocalInt + 1];
						GetWindowText((HWND)LocalWindowIDs[i], buffer, LocalInt + 1);
						FString WindowName(buffer);
						delete[] buffer;
						BeforeMinimizeStates[i] = CurrentMinimizeState;
						OnMinimizeStateChanged.Broadcast(WindowName, LocalWindowIDs[i], CurrentMinimizeState);
					}
				}
			}
			// Maximize Stuff
			bool CurrentMaximizeState = false;
			if (LocalWindowIDs[i] == MainWindowID) {
				CurrentMaximizeState = IsZoomed((HWND)MainWindowID);
				if (MainWindowIDBeforeMaximizeState != CurrentMaximizeState) {
					int LocalInt = GetWindowTextLength((HWND)MainWindowID);
					if (LocalInt > 0) {
						TCHAR* buffer = new TCHAR[LocalInt + 1];
						GetWindowText((HWND)MainWindowID, buffer, LocalInt + 1);
						FString WindowName(buffer);
						delete[] buffer;
						MainWindowIDBeforeMaximizeState = CurrentMaximizeState;
						OnMaximizeStateChanged.Broadcast(WindowName, MainWindowID, CurrentMaximizeState);
					}
				}
			}
			else {
				CurrentMaximizeState = IsZoomed((HWND)LocalWindowIDs[i]);
				if (BeforeMaximizeStates[i] != CurrentMaximizeState) {
					int LocalInt = GetWindowTextLength((HWND)LocalWindowIDs[i]);
					if (LocalInt > 0) {
						TCHAR* buffer = new TCHAR[LocalInt + 1];
						GetWindowText((HWND)LocalWindowIDs[i], buffer, LocalInt + 1);
						FString WindowName(buffer);
						delete[] buffer;
						BeforeMaximizeStates[i] = CurrentMaximizeState;
						OnMaximizeStateChanged.Broadcast(WindowName, LocalWindowIDs[i], CurrentMaximizeState);
					}
				}
			}
		}
		// Move Stuff
		if (CurrentNewestPositionCurrentlySet) {
			CurrentNewestPositionCurrentlySet = false;
			const char* LocalLPCSTR = TCHAR_TO_ANSI(*CurrentMovedReference[0].Get().GetTitle().ToString());
			HWND LocalHANDLE = FindWindowA(NULL, LocalLPCSTR);
			OnMoved.Broadcast(CurrentMovedReference[0].Get().GetTitle().ToString(), (int64)LocalHANDLE, CurrentMovedReference[0].Get().GetPositionInScreen());
		}
		// Move Stuff Main Window
		FVector2D MainWindowIDCurrentPosition;
		FString LocalStringName;
		RECT LocalRECT;
		if (GetWindowRect((HWND)MainWindowID, &LocalRECT)) {
			MainWindowIDCurrentPosition = FVector2D(LocalRECT.left, LocalRECT.top);
		}
		if(MainWindowIDCurrentPosition != MainWindowIDBeforePosition) {
			int LocalInt = GetWindowTextLength((HWND)MainWindowID);
			if (LocalInt > 0) {
				TCHAR* buffer = new TCHAR[LocalInt + 1];
				GetWindowText((HWND)MainWindowID, buffer, LocalInt + 1);
				FString WindowName(buffer);
				delete[] buffer;
				LocalStringName = WindowName;
			}
			OnMoved.Broadcast(LocalStringName, MainWindowID, MainWindowIDCurrentPosition);
			MainWindowIDBeforePosition = MainWindowIDCurrentPosition;
		}
	}
}

void UMultiWindowExtensionSubsystem::Deinitialize()
{
	Super::Deinitialize();
	if (GIsEditor && (GetWorld()->WorldType == EWorldType::PIE)) {
		for (int i = 0; i < WindowIDs.Num(); i++) {
			DestroyWindow((HWND)WindowIDs[i]);
		}
	}
}