// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/OWLSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSettings();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References

// Begin Class UOWLSettings
void UOWLSettings::StaticRegisterNativesUOWLSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLSettings);
UClass* Z_Construct_UClass_UOWLSettings_NoRegister()
{
	return UOWLSettings::StaticClass();
}
struct Z_Construct_UClass_UOWLSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Off World Live" },
		{ "IncludePath", "OWLSettings.h" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLaunchNDIInstaller_MetaData[] = {
		{ "Category", "NDI" },
		{ "ConsoleVariable", "bAutoLaunchNDIInstaller" },
		{ "DisplayName", "Launch NDI Installer Automatically" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
		{ "ToolTip", "If the NDI SDK is not installed, launch a prompt to download and run the SDK installer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableHardwareEncoding_MetaData[] = {
		{ "Category", "Media Output" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "bDisableHardwareEncoding" },
		{ "DisplayName", "Disable Unreal NVEnc implementation" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
		{ "ToolTip", "By default, OWL Media Output uses Unreal's implementation of the NVidia NVEnc hardware h264 encoder. By disabling it there is a slight frame-rate loss, but can enable you to run than one h264 media outputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressLoginPopup_MetaData[] = {
		{ "Category", "Authentication" },
		{ "ConsoleVariable", "bSuppressLoginPopup" },
		{ "DisplayName", "Suppress login pop-up" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
		{ "ToolTip", "Without a machine (node-locked) license, users of the plugin are requested to sign in on our website by default. When ticked, this suppresses the launch of that website." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseApplicationLicense_MetaData[] = {
		{ "Category", "Licensing" },
		{ "ConsoleVariable", "bUseApplicationLicense" },
		{ "DisplayName", "Enable application licenses" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
		{ "ToolTip", "Enable in order to disable default authentication for Off World Live and check for application licences instead in packaged games" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOWLDemoLicences_MetaData[] = {
		{ "Category", "Licensing" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "bEnableOWLDemoLicences" },
		{ "DisplayName", "Check for demo licenses" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
		{ "ToolTip", "When enabled, a request will be made to the Off World Live servers to check whether there are any products with demo licenses available for you.r\nIf available, they will be automatically enabled after authentication." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOWLMovieRenderQueue_MetaData[] = {
		{ "Category", "Movie Render Queue Pipeline" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "bEnableOWLMovieRenderQueue" },
		{ "DisplayName", "Enable OffWorldLive Movie Render Queue Pipeline" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
		{ "ToolTip", "Enable in order to access custom movie render queue passes and settings for OffWorld Live features, e.g. OWL360Camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDemoLicencePopupDismissed_MetaData[] = {
		{ "Category", "Login Popups" },
		{ "ConsoleVariable", "bDemoLicencePopupDismissed" },
		{ "ModuleRelativePath", "Public/OWLSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoLaunchNDIInstaller_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLaunchNDIInstaller;
	static void NewProp_bDisableHardwareEncoding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableHardwareEncoding;
	static void NewProp_bSuppressLoginPopup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressLoginPopup;
	static void NewProp_bUseApplicationLicense_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseApplicationLicense;
	static void NewProp_bEnableOWLDemoLicences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOWLDemoLicences;
	static void NewProp_bEnableOWLMovieRenderQueue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOWLMovieRenderQueue;
	static void NewProp_bDemoLicencePopupDismissed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDemoLicencePopupDismissed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOWLSettings_Statics::NewProp_bAutoLaunchNDIInstaller_SetBit(void* Obj)
{
	((UOWLSettings*)Obj)->bAutoLaunchNDIInstaller = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSettings_Statics::NewProp_bAutoLaunchNDIInstaller = { "bAutoLaunchNDIInstaller", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSettings), &Z_Construct_UClass_UOWLSettings_Statics::NewProp_bAutoLaunchNDIInstaller_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLaunchNDIInstaller_MetaData), NewProp_bAutoLaunchNDIInstaller_MetaData) };
void Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDisableHardwareEncoding_SetBit(void* Obj)
{
	((UOWLSettings*)Obj)->bDisableHardwareEncoding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDisableHardwareEncoding = { "bDisableHardwareEncoding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSettings), &Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDisableHardwareEncoding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableHardwareEncoding_MetaData), NewProp_bDisableHardwareEncoding_MetaData) };
void Z_Construct_UClass_UOWLSettings_Statics::NewProp_bSuppressLoginPopup_SetBit(void* Obj)
{
	((UOWLSettings*)Obj)->bSuppressLoginPopup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSettings_Statics::NewProp_bSuppressLoginPopup = { "bSuppressLoginPopup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSettings), &Z_Construct_UClass_UOWLSettings_Statics::NewProp_bSuppressLoginPopup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressLoginPopup_MetaData), NewProp_bSuppressLoginPopup_MetaData) };
void Z_Construct_UClass_UOWLSettings_Statics::NewProp_bUseApplicationLicense_SetBit(void* Obj)
{
	((UOWLSettings*)Obj)->bUseApplicationLicense = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSettings_Statics::NewProp_bUseApplicationLicense = { "bUseApplicationLicense", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSettings), &Z_Construct_UClass_UOWLSettings_Statics::NewProp_bUseApplicationLicense_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseApplicationLicense_MetaData), NewProp_bUseApplicationLicense_MetaData) };
void Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLDemoLicences_SetBit(void* Obj)
{
	((UOWLSettings*)Obj)->bEnableOWLDemoLicences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLDemoLicences = { "bEnableOWLDemoLicences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSettings), &Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLDemoLicences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOWLDemoLicences_MetaData), NewProp_bEnableOWLDemoLicences_MetaData) };
void Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLMovieRenderQueue_SetBit(void* Obj)
{
	((UOWLSettings*)Obj)->bEnableOWLMovieRenderQueue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLMovieRenderQueue = { "bEnableOWLMovieRenderQueue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSettings), &Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLMovieRenderQueue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOWLMovieRenderQueue_MetaData), NewProp_bEnableOWLMovieRenderQueue_MetaData) };
void Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDemoLicencePopupDismissed_SetBit(void* Obj)
{
	((UOWLSettings*)Obj)->bDemoLicencePopupDismissed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDemoLicencePopupDismissed = { "bDemoLicencePopupDismissed", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSettings), &Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDemoLicencePopupDismissed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDemoLicencePopupDismissed_MetaData), NewProp_bDemoLicencePopupDismissed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSettings_Statics::NewProp_bAutoLaunchNDIInstaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDisableHardwareEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSettings_Statics::NewProp_bSuppressLoginPopup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSettings_Statics::NewProp_bUseApplicationLicense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLDemoLicences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSettings_Statics::NewProp_bEnableOWLMovieRenderQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSettings_Statics::NewProp_bDemoLicencePopupDismissed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSettings_Statics::ClassParams = {
	&UOWLSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLSettings()
{
	if (!Z_Registration_Info_UClass_UOWLSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSettings.OuterSingleton, Z_Construct_UClass_UOWLSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLSettings.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLSettings>()
{
	return UOWLSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLSettings);
UOWLSettings::~UOWLSettings() {}
// End Class UOWLSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSettings, UOWLSettings::StaticClass, TEXT("UOWLSettings"), &Z_Registration_Info_UClass_UOWLSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSettings), 274863056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_400776949(TEXT("/Script/LivestreamingToolkit"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
