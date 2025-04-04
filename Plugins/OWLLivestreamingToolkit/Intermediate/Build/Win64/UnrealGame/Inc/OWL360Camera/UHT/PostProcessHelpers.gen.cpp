// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWL360Camera/Public/PostProcessing/PostProcessHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OWL360CAMERA_API UClass* Z_Construct_UClass_UPostProcessHelpers();
OWL360CAMERA_API UClass* Z_Construct_UClass_UPostProcessHelpers_NoRegister();
OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline();
UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// End Cross Module References

// Begin Enum E360PostProcessPipeline
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E360PostProcessPipeline;
static UEnum* E360PostProcessPipeline_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E360PostProcessPipeline.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E360PostProcessPipeline.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("E360PostProcessPipeline"));
	}
	return Z_Registration_Info_UEnum_E360PostProcessPipeline.OuterSingleton;
}
template<> OWL360CAMERA_API UEnum* StaticEnum<E360PostProcessPipeline>()
{
	return E360PostProcessPipeline_StaticEnum();
}
struct Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Post Process type applied to the 360 cam output texture */" },
		{ "ModuleRelativePath", "Public/PostProcessing/PostProcessHelpers.h" },
		{ "PPM_Bloom.DisplayName", "Seamless 360 Bloom" },
		{ "PPM_Bloom.Name", "E360PostProcessPipeline::PPM_Bloom" },
		{ "PPM_Tonemapper.DisplayName", "Tonemapping" },
		{ "PPM_Tonemapper.Name", "E360PostProcessPipeline::PPM_Tonemapper" },
		{ "ToolTip", "Post Process type applied to the 360 cam output texture" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E360PostProcessPipeline::PPM_Bloom", (int64)E360PostProcessPipeline::PPM_Bloom },
		{ "E360PostProcessPipeline::PPM_Tonemapper", (int64)E360PostProcessPipeline::PPM_Tonemapper },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	"E360PostProcessPipeline",
	"E360PostProcessPipeline",
	Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline()
{
	if (!Z_Registration_Info_UEnum_E360PostProcessPipeline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E360PostProcessPipeline.InnerSingleton, Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E360PostProcessPipeline.InnerSingleton;
}
// End Enum E360PostProcessPipeline

// Begin Class UPostProcessHelpers
void UPostProcessHelpers::StaticRegisterNativesUPostProcessHelpers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostProcessHelpers);
UClass* Z_Construct_UClass_UPostProcessHelpers_NoRegister()
{
	return UPostProcessHelpers::StaticClass();
}
struct Z_Construct_UClass_UPostProcessHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PostProcessing/PostProcessHelpers.h" },
		{ "ModuleRelativePath", "Public/PostProcessing/PostProcessHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostProcessHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPostProcessHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostProcessHelpers_Statics::ClassParams = {
	&UPostProcessHelpers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostProcessHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPostProcessHelpers()
{
	if (!Z_Registration_Info_UClass_UPostProcessHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostProcessHelpers.OuterSingleton, Z_Construct_UClass_UPostProcessHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostProcessHelpers.OuterSingleton;
}
template<> OWL360CAMERA_API UClass* StaticClass<UPostProcessHelpers>()
{
	return UPostProcessHelpers::StaticClass();
}
UPostProcessHelpers::UPostProcessHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessHelpers);
UPostProcessHelpers::~UPostProcessHelpers() {}
// End Class UPostProcessHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E360PostProcessPipeline_StaticEnum, TEXT("E360PostProcessPipeline"), &Z_Registration_Info_UEnum_E360PostProcessPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2728008759U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostProcessHelpers, UPostProcessHelpers::StaticClass, TEXT("UPostProcessHelpers"), &Z_Registration_Info_UClass_UPostProcessHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostProcessHelpers), 1288729835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_2102684092(TEXT("/Script/OWL360Camera"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
