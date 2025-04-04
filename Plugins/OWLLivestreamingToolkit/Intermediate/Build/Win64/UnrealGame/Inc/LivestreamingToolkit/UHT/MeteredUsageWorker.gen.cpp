// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/ServerAuth/MeteredUsageWorker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteredUsageWorker() {}

// Begin Cross Module References
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References

// Begin ScriptStruct FDummyStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DummyStruct;
class UScriptStruct* FDummyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DummyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DummyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummyStruct, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("DummyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DummyStruct.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FDummyStruct>()
{
	return FDummyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDummyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This struct is a hack to allow declaring dynamic delegates in the raw class\n *(we need generated.h file to declare the dynamic delegate and we can only have a dynamic delegate if we have a ustruct of uclass)*/" },
		{ "ModuleRelativePath", "Private/ServerAuth/MeteredUsageWorker.h" },
		{ "ToolTip", "This struct is a hack to allow declaring dynamic delegates in the raw class\n(we need generated.h file to declare the dynamic delegate and we can only have a dynamic delegate if we have a ustruct of uclass)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDummyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDummyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	nullptr,
	&NewStructOps,
	"DummyStruct",
	nullptr,
	0,
	sizeof(FDummyStruct),
	alignof(FDummyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DummyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DummyStruct.InnerSingleton, Z_Construct_UScriptStruct_FDummyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DummyStruct.InnerSingleton;
}
// End ScriptStruct FDummyStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDummyStruct::StaticStruct, Z_Construct_UScriptStruct_FDummyStruct_Statics::NewStructOps, TEXT("DummyStruct"), &Z_Registration_Info_UScriptStruct_DummyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDummyStruct), 907546327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_3863765968(TEXT("/Script/LivestreamingToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
