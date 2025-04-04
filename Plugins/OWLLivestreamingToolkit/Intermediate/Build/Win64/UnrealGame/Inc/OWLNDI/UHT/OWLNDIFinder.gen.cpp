// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/OWLNDIFinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDIFinder() {}

// Begin Cross Module References
OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FNDISource();
UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References

// Begin ScriptStruct FNDISource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDISource;
class UScriptStruct* FNDISource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDISource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDISource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDISource, (UObject*)Z_Construct_UPackage__Script_OWLNDI(), TEXT("NDISource"));
	}
	return Z_Registration_Info_UScriptStruct_NDISource.OuterSingleton;
}
template<> OWLNDI_API UScriptStruct* StaticStruct<FNDISource>()
{
	return FNDISource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDISource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLNDIFinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "NDISource" },
		{ "ModuleRelativePath", "Public/OWLNDIFinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "NDISource" },
		{ "ModuleRelativePath", "Public/OWLNDIFinder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDISource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDISource, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDISource, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDISource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDISource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
	nullptr,
	&NewStructOps,
	"NDISource",
	Z_Construct_UScriptStruct_FNDISource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISource_Statics::PropPointers),
	sizeof(FNDISource),
	alignof(FNDISource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDISource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDISource()
{
	if (!Z_Registration_Info_UScriptStruct_NDISource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDISource.InnerSingleton, Z_Construct_UScriptStruct_FNDISource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDISource.InnerSingleton;
}
// End ScriptStruct FNDISource

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDISource::StaticStruct, Z_Construct_UScriptStruct_FNDISource_Statics::NewStructOps, TEXT("NDISource"), &Z_Registration_Info_UScriptStruct_NDISource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDISource), 1673757425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_2461102614(TEXT("/Script/OWLNDI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
