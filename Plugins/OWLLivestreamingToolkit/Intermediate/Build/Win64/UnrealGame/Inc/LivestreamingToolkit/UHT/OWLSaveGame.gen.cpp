// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/SaveGameData/OWLSaveGame.h"
#include "LivestreamingToolkit/Private/SaveGameData/ServerConfigSaveGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSaveGame();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSaveGame_NoRegister();
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData();
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References

// Begin Class UOWLSaveGame
void UOWLSaveGame::StaticRegisterNativesUOWLSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLSaveGame);
UClass* Z_Construct_UClass_UOWLSaveGame_NoRegister()
{
	return UOWLSaveGame::StaticClass();
}
struct Z_Construct_UClass_UOWLSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGameData/OWLSaveGame.h" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "Category", "UserData" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginUpdateSaveFileName_MetaData[] = {
		{ "Category", "ServerConfigSave" },
		{ "Comment", "//CDV:improbable:excludestart\n" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
		{ "ToolTip", "CDV:improbable:excludestart" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginUpdateSaveGameData_MetaData[] = {
		{ "Category", "ServerConfigSave" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginSettingsSaveFileName_MetaData[] = {
		{ "Comment", "//CDV:improbable:excludeend\n" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
		{ "ToolTip", "CDV:improbable:excludeend" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginSettingsSaveGameData_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginUpdateSaveFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PluginUpdateSaveGameData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginSettingsSaveFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PluginSettingsSaveGameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSaveGame, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName = { "PluginUpdateSaveFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSaveGame, PluginUpdateSaveFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginUpdateSaveFileName_MetaData), NewProp_PluginUpdateSaveFileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData = { "PluginUpdateSaveGameData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSaveGame, PluginUpdateSaveGameData), Z_Construct_UScriptStruct_FPluginUpdateSaveGameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginUpdateSaveGameData_MetaData), NewProp_PluginUpdateSaveGameData_MetaData) }; // 2003979070
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName = { "PluginSettingsSaveFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSaveGame, PluginSettingsSaveFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginSettingsSaveFileName_MetaData), NewProp_PluginSettingsSaveFileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData = { "PluginSettingsSaveGameData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSaveGame, PluginSettingsSaveGameData), Z_Construct_UScriptStruct_FPluginSettingsSaveGameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginSettingsSaveGameData_MetaData), NewProp_PluginSettingsSaveGameData_MetaData) }; // 2967720063
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSaveGame_Statics::ClassParams = {
	&UOWLSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLSaveGame()
{
	if (!Z_Registration_Info_UClass_UOWLSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSaveGame.OuterSingleton, Z_Construct_UClass_UOWLSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLSaveGame.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLSaveGame>()
{
	return UOWLSaveGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLSaveGame);
UOWLSaveGame::~UOWLSaveGame() {}
// End Class UOWLSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSaveGame, UOWLSaveGame::StaticClass, TEXT("UOWLSaveGame"), &Z_Registration_Info_UClass_UOWLSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSaveGame), 3561170959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_2457968399(TEXT("/Script/LivestreamingToolkit"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
