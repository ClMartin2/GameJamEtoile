// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLScreenCapture/Public/OWLScreenCapturerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLScreenCapturerOptions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OWLSCREENCAPTURE_API UEnum* Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType();
OWLSCREENCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions();
UPackage* Z_Construct_UPackage__Script_OWLScreenCapture();
// End Cross Module References

// Begin Enum EOWLScreenCaptureType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLScreenCaptureType;
static UEnum* EOWLScreenCaptureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType, (UObject*)Z_Construct_UPackage__Script_OWLScreenCapture(), TEXT("EOWLScreenCaptureType"));
	}
	return Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton;
}
template<> OWLSCREENCAPTURE_API UEnum* StaticEnum<EOWLScreenCaptureType>()
{
	return EOWLScreenCaptureType_StaticEnum();
}
struct Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
		{ "SCT_Monitor.DisplayName", "Monitor Capture" },
		{ "SCT_Monitor.Name", "EOWLScreenCaptureType::SCT_Monitor" },
		{ "SCT_Window.DisplayName", "Window Capture" },
		{ "SCT_Window.Name", "EOWLScreenCaptureType::SCT_Window" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOWLScreenCaptureType::SCT_Monitor", (int64)EOWLScreenCaptureType::SCT_Monitor },
		{ "EOWLScreenCaptureType::SCT_Window", (int64)EOWLScreenCaptureType::SCT_Window },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWLScreenCapture,
	nullptr,
	"EOWLScreenCaptureType",
	"EOWLScreenCaptureType",
	Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType()
{
	if (!Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton, Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton;
}
// End Enum EOWLScreenCaptureType

// Begin ScriptStruct FOWLScreenCaptureOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions;
class UScriptStruct* FOWLScreenCaptureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions, (UObject*)Z_Construct_UPackage__Script_OWLScreenCapture(), TEXT("OWLScreenCaptureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.OuterSingleton;
}
template<> OWLSCREENCAPTURE_API UScriptStruct* StaticStruct<FOWLScreenCaptureOptions>()
{
	return FOWLScreenCaptureOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenCaptureType_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureCursor_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonitorName_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowName_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideRenderTarget_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenCaptureType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScreenCaptureType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static void NewProp_CaptureCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureCursor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MonitorName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WindowName;
	static void NewProp_bHideRenderTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLScreenCaptureOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType = { "ScreenCaptureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLScreenCaptureOptions, ScreenCaptureType), Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenCaptureType_MetaData), NewProp_ScreenCaptureType_MetaData) }; // 2544233488
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLScreenCaptureOptions, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
void Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active_SetBit(void* Obj)
{
	((FOWLScreenCaptureOptions*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLScreenCaptureOptions), &Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
void Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor_SetBit(void* Obj)
{
	((FOWLScreenCaptureOptions*)Obj)->CaptureCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor = { "CaptureCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLScreenCaptureOptions), &Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureCursor_MetaData), NewProp_CaptureCursor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_MonitorName = { "MonitorName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLScreenCaptureOptions, MonitorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonitorName_MetaData), NewProp_MonitorName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_WindowName = { "WindowName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLScreenCaptureOptions, WindowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowName_MetaData), NewProp_WindowName_MetaData) };
void Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget_SetBit(void* Obj)
{
	((FOWLScreenCaptureOptions*)Obj)->bHideRenderTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget = { "bHideRenderTarget", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLScreenCaptureOptions), &Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideRenderTarget_MetaData), NewProp_bHideRenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_MonitorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_WindowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLScreenCapture,
	nullptr,
	&NewStructOps,
	"OWLScreenCaptureOptions",
	Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::PropPointers),
	sizeof(FOWLScreenCaptureOptions),
	alignof(FOWLScreenCaptureOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.InnerSingleton, Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.InnerSingleton;
}
// End ScriptStruct FOWLScreenCaptureOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLScreenCaptureType_StaticEnum, TEXT("EOWLScreenCaptureType"), &Z_Registration_Info_UEnum_EOWLScreenCaptureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2544233488U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLScreenCaptureOptions::StaticStruct, Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewStructOps, TEXT("OWLScreenCaptureOptions"), &Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLScreenCaptureOptions), 382826323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_1114306852(TEXT("/Script/OWLScreenCapture"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
