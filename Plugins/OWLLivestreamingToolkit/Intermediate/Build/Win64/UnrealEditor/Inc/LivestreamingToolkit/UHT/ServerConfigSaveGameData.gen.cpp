// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/SaveGameData/ServerConfigSaveGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerConfigSaveGameData() {}

// Begin Cross Module References
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData();
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References

// Begin ScriptStruct FPluginUpdateSaveGameData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData;
class UScriptStruct* FPluginUpdateSaveGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginUpdateSaveGameData"));
	}
	return Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FPluginUpdateSaveGameData>()
{
	return FPluginUpdateSaveGameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//CDV:improbable:excludestart\n" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
		{ "ToolTip", "CDV:improbable:excludestart" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipPluginVersion_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkippedPluginVersionHash_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SkipPluginVersion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipPluginVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkippedPluginVersionHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginUpdateSaveGameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit(void* Obj)
{
	((FPluginUpdateSaveGameData*)Obj)->SkipPluginVersion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion = { "SkipPluginVersion", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPluginUpdateSaveGameData), &Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipPluginVersion_MetaData), NewProp_SkipPluginVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash = { "SkippedPluginVersionHash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPluginUpdateSaveGameData, SkippedPluginVersionHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkippedPluginVersionHash_MetaData), NewProp_SkippedPluginVersionHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	nullptr,
	&NewStructOps,
	"PluginUpdateSaveGameData",
	Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers),
	sizeof(FPluginUpdateSaveGameData),
	alignof(FPluginUpdateSaveGameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData()
{
	if (!Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.InnerSingleton, Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.InnerSingleton;
}
// End ScriptStruct FPluginUpdateSaveGameData

// Begin ScriptStruct FPluginSettingsSaveGameData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData;
class UScriptStruct* FPluginSettingsSaveGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginSettingsSaveGameData"));
	}
	return Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FPluginSettingsSaveGameData>()
{
	return FPluginSettingsSaveGameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//CDV:improbable:excludeend\n" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
		{ "ToolTip", "CDV:improbable:excludeend" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableEditorViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableRuntimeViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableEditorViewportRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEditorViewportRendering;
	static void NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRuntimeViewportRendering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginSettingsSaveGameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit(void* Obj)
{
	((FPluginSettingsSaveGameData*)Obj)->EnableEditorViewportRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering = { "EnableEditorViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableEditorViewportRendering_MetaData), NewProp_EnableEditorViewportRendering_MetaData) };
void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj)
{
	((FPluginSettingsSaveGameData*)Obj)->EnableRuntimeViewportRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering = { "EnableRuntimeViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableRuntimeViewportRendering_MetaData), NewProp_EnableRuntimeViewportRendering_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	nullptr,
	&NewStructOps,
	"PluginSettingsSaveGameData",
	Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers),
	sizeof(FPluginSettingsSaveGameData),
	alignof(FPluginSettingsSaveGameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData()
{
	if (!Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.InnerSingleton, Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.InnerSingleton;
}
// End ScriptStruct FPluginSettingsSaveGameData

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPluginUpdateSaveGameData::StaticStruct, Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewStructOps, TEXT("PluginUpdateSaveGameData"), &Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginUpdateSaveGameData), 2003979070U) },
		{ FPluginSettingsSaveGameData::StaticStruct, Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewStructOps, TEXT("PluginSettingsSaveGameData"), &Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginSettingsSaveGameData), 2967720063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_1326123973(TEXT("/Script/LivestreamingToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
