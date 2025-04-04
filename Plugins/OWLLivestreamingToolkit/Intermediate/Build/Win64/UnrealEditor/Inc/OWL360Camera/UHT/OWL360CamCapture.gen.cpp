// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWL360Camera/Public/OWL360CamCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWL360CamCapture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
OWL360CAMERA_API UClass* Z_Construct_UClass_AOWL360CamCapture();
OWL360CAMERA_API UClass* Z_Construct_UClass_AOWL360CamCapture_NoRegister();
OWL360CAMERA_API UClass* Z_Construct_UClass_UOWL360CaptureComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// End Cross Module References

// Begin Class AOWL360CamCapture
void AOWL360CamCapture::StaticRegisterNativesAOWL360CamCapture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWL360CamCapture);
UClass* Z_Construct_UClass_AOWL360CamCapture_NoRegister()
{
	return AOWL360CamCapture::StaticClass();
}
struct Z_Construct_UClass_AOWL360CamCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL 360 Camera" },
		{ "HideCategories", "Collision Attachment Actor CameraActor Input Rendering" },
		{ "IncludePath", "OWL360CamCapture.h" },
		{ "ModuleRelativePath", "Public/OWL360CamCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Off World Live 360 Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWL360CamCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWL360CamCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWL360CamCapture_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWL360CamCapture, CaptureComponent), Z_Construct_UClass_UOWL360CaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWL360CamCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWL360CamCapture_Statics::NewProp_CaptureComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWL360CamCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWL360CamCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWL360CamCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWL360CamCapture_Statics::ClassParams = {
	&AOWL360CamCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWL360CamCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWL360CamCapture_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWL360CamCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWL360CamCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWL360CamCapture()
{
	if (!Z_Registration_Info_UClass_AOWL360CamCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWL360CamCapture.OuterSingleton, Z_Construct_UClass_AOWL360CamCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWL360CamCapture.OuterSingleton;
}
template<> OWL360CAMERA_API UClass* StaticClass<AOWL360CamCapture>()
{
	return AOWL360CamCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWL360CamCapture);
AOWL360CamCapture::~AOWL360CamCapture() {}
// End Class AOWL360CamCapture

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CamCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWL360CamCapture, AOWL360CamCapture::StaticClass, TEXT("AOWL360CamCapture"), &Z_Registration_Info_UClass_AOWL360CamCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWL360CamCapture), 2365335731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CamCapture_h_2537441474(TEXT("/Script/OWL360Camera"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CamCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CamCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
