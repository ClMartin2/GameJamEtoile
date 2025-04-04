// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkitShaders/Public/OWLTextureFormats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLTextureFormats() {}

// Begin Cross Module References
LIVESTREAMINGTOOLKITSHADERS_API UEnum* Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat();
LIVESTREAMINGTOOLKITSHADERS_API UEnum* Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitShaders();
// End Cross Module References

// Begin Enum EOWLOutputTextureFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLOutputTextureFormat;
static UEnum* EOWLOutputTextureFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLOutputTextureFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLOutputTextureFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkitShaders(), TEXT("EOWLOutputTextureFormat"));
	}
	return Z_Registration_Info_UEnum_EOWLOutputTextureFormat.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKITSHADERS_API UEnum* StaticEnum<EOWLOutputTextureFormat>()
{
	return EOWLOutputTextureFormat_StaticEnum();
}
struct Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLTextureFormats.h" },
		{ "OPX_BGRA.DisplayName", "BGRA 8Bit" },
		{ "OPX_BGRA.Name", "OPX_BGRA" },
		{ "OPX_BGRX.DisplayName", "BGRX (NDI)" },
		{ "OPX_BGRX.Name", "OPX_BGRX" },
		{ "OPX_I420.Comment", "//CDV:improbable:excludestart\n// NDI formats -- unimplemented so far\n" },
		{ "OPX_I420.DisplayName", "I420 (NDI)" },
		{ "OPX_I420.Name", "OPX_I420" },
		{ "OPX_I420.ToolTip", "CDV:improbable:excludestart\n NDI formats -- unimplemented so far" },
		{ "OPX_None.Comment", "// End NDI\n//CDV:improbable:excludeend\n" },
		{ "OPX_None.DisplayName", "Unknown Format" },
		{ "OPX_None.Name", "OPX_None" },
		{ "OPX_None.ToolTip", "End NDI\nCDV:improbable:excludeend" },
		{ "OPX_NV12.DisplayName", "NV12 (NDI)" },
		{ "OPX_NV12.Name", "OPX_NV12" },
		{ "OPX_P216.DisplayName", "P216 (NDI)" },
		{ "OPX_P216.Name", "OPX_P216" },
		{ "OPX_PA16.DisplayName", "PA16 (NDI)" },
		{ "OPX_PA16.Name", "OPX_PA16" },
		{ "OPX_RGBA.DisplayName", "RGBA 8Bit" },
		{ "OPX_RGBA.Name", "OPX_RGBA" },
		{ "OPX_RGBX.DisplayName", "RGBX (NDI)" },
		{ "OPX_RGBX.Name", "OPX_RGBX" },
		{ "OPX_UYVA.DisplayName", "UYVA (NDI)" },
		{ "OPX_UYVA.Name", "OPX_UYVA" },
		{ "OPX_UYVY.DisplayName", "UYVY 8bit" },
		{ "OPX_UYVY.Name", "OPX_UYVY" },
		{ "OPX_YV12.DisplayName", "YV12 (NDI)" },
		{ "OPX_YV12.Name", "OPX_YV12" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "OPX_BGRA", (int64)OPX_BGRA },
		{ "OPX_RGBA", (int64)OPX_RGBA },
		{ "OPX_UYVY", (int64)OPX_UYVY },
		{ "OPX_I420", (int64)OPX_I420 },
		{ "OPX_P216", (int64)OPX_P216 },
		{ "OPX_UYVA", (int64)OPX_UYVA },
		{ "OPX_PA16", (int64)OPX_PA16 },
		{ "OPX_YV12", (int64)OPX_YV12 },
		{ "OPX_NV12", (int64)OPX_NV12 },
		{ "OPX_BGRX", (int64)OPX_BGRX },
		{ "OPX_RGBX", (int64)OPX_RGBX },
		{ "OPX_None", (int64)OPX_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LivestreamingToolkitShaders,
	nullptr,
	"EOWLOutputTextureFormat",
	"EOWLOutputTextureFormat",
	Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat()
{
	if (!Z_Registration_Info_UEnum_EOWLOutputTextureFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLOutputTextureFormat.InnerSingleton, Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLOutputTextureFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLOutputTextureFormat.InnerSingleton;
}
// End Enum EOWLOutputTextureFormat

// Begin Enum EOWLPixelLayoutFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLPixelLayoutFormat;
static UEnum* EOWLPixelLayoutFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLPixelLayoutFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLPixelLayoutFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkitShaders(), TEXT("EOWLPixelLayoutFormat"));
	}
	return Z_Registration_Info_UEnum_EOWLPixelLayoutFormat.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKITSHADERS_API UEnum* StaticEnum<EOWLPixelLayoutFormat>()
{
	return EOWLPixelLayoutFormat_StaticEnum();
}
struct Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLTextureFormats.h" },
		{ "OPL_BGRA.DisplayName", "BGRA" },
		{ "OPL_BGRA.Name", "OPL_BGRA" },
		{ "OPL_RGBA.DisplayName", "RGBA" },
		{ "OPL_RGBA.Name", "OPL_RGBA" },
		{ "OPL_Unknown.DisplayName", "Unknown Format" },
		{ "OPL_Unknown.Name", "OPL_Unknown" },
		{ "OPL_UYVY.DisplayName", "UYVY" },
		{ "OPL_UYVY.Name", "OPL_UYVY" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "OPL_BGRA", (int64)OPL_BGRA },
		{ "OPL_RGBA", (int64)OPL_RGBA },
		{ "OPL_UYVY", (int64)OPL_UYVY },
		{ "OPL_Unknown", (int64)OPL_Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LivestreamingToolkitShaders,
	nullptr,
	"EOWLPixelLayoutFormat",
	"EOWLPixelLayoutFormat",
	Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat()
{
	if (!Z_Registration_Info_UEnum_EOWLPixelLayoutFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLPixelLayoutFormat.InnerSingleton, Z_Construct_UEnum_LivestreamingToolkitShaders_EOWLPixelLayoutFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLPixelLayoutFormat.InnerSingleton;
}
// End Enum EOWLPixelLayoutFormat

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitShaders_Public_OWLTextureFormats_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLOutputTextureFormat_StaticEnum, TEXT("EOWLOutputTextureFormat"), &Z_Registration_Info_UEnum_EOWLOutputTextureFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 537350426U) },
		{ EOWLPixelLayoutFormat_StaticEnum, TEXT("EOWLPixelLayoutFormat"), &Z_Registration_Info_UEnum_EOWLPixelLayoutFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1436081762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitShaders_Public_OWLTextureFormats_h_1013441574(TEXT("/Script/LivestreamingToolkitShaders"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitShaders_Public_OWLTextureFormats_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitShaders_Public_OWLTextureFormats_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
