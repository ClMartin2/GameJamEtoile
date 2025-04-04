// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/Tools/OWLImageInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLImageInput() {}

// Begin Cross Module References
LIVESTREAMINGTOOLKIT_API UEnum* Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References

// Begin Enum EOWLOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLOutputType;
static UEnum* EOWLOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("EOWLOutputType"));
	}
	return Z_Registration_Info_UEnum_EOWLOutputType.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UEnum* StaticEnum<EOWLOutputType>()
{
	return EOWLOutputType_StaticEnum();
}
struct Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/OWLImageInput.h" },
		{ "OT_Media.Name", "EOWLOutputType::OT_Media" },
		{ "OT_VirtualWebcam.Name", "EOWLOutputType::OT_VirtualWebcam" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOWLOutputType::OT_Media", (int64)EOWLOutputType::OT_Media },
		{ "EOWLOutputType::OT_VirtualWebcam", (int64)EOWLOutputType::OT_VirtualWebcam },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	nullptr,
	"EOWLOutputType",
	"EOWLOutputType",
	Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType()
{
	if (!Z_Registration_Info_UEnum_EOWLOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLOutputType.InnerSingleton, Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLOutputType.InnerSingleton;
}
// End Enum EOWLOutputType

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLOutputType_StaticEnum, TEXT("EOWLOutputType"), &Z_Registration_Info_UEnum_EOWLOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4162851709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_3148164779(TEXT("/Script/LivestreamingToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
