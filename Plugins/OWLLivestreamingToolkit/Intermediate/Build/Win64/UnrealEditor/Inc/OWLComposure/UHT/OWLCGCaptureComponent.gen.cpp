// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLCGCaptureComponent.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCGCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLCGCaptureComponent();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLCGCaptureComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References

// Begin Class UOWLCGCaptureComponent
void UOWLCGCaptureComponent::StaticRegisterNativesUOWLCGCaptureComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLCGCaptureComponent);
UClass* Z_Construct_UClass_UOWLCGCaptureComponent_NoRegister()
{
	return UOWLCGCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UOWLCGCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Object Physics SceneComponent Mobility Tags Activation Cooking Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "OWLCGCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/OWLCGCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTFormat_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCGCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Set this to a value greater than 0 to merge the override post process settings\n\x09 * below into your output */" },
		{ "EditCondition", "!bHidePostProcess" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCGCaptureComponent.h" },
		{ "ToolTip", "Set this to a value greater than 0 to merge the override post process settings\n       * below into your output" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Post process settings to use for this camera. Don't forget to check the properties you want to override */" },
		{ "EditCondition", "PostProcessBlendWeight>0" },
		{ "ModuleRelativePath", "Public/OWLCGCaptureComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post process settings to use for this camera. Don't forget to check the properties you want to override" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidePostProcess_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/OWLCGCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RTFormat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static void NewProp_bHidePostProcess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePostProcess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLCGCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_RTFormat = { "RTFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCGCaptureComponent, RTFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTFormat_MetaData), NewProp_RTFormat_MetaData) }; // 338846453
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCGCaptureComponent, PostProcessBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData), NewProp_PostProcessBlendWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCGCaptureComponent, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 2541518506
void Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_bHidePostProcess_SetBit(void* Obj)
{
	((UOWLCGCaptureComponent*)Obj)->bHidePostProcess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_bHidePostProcess = { "bHidePostProcess", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCGCaptureComponent), &Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_bHidePostProcess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidePostProcess_MetaData), NewProp_bHidePostProcess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLCGCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_RTFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_PostProcessSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCGCaptureComponent_Statics::NewProp_bHidePostProcess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCGCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLCGCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOWLCaptureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCGCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLCGCaptureComponent_Statics::ClassParams = {
	&UOWLCGCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLCGCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCGCaptureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCGCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLCGCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLCGCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UOWLCGCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLCGCaptureComponent.OuterSingleton, Z_Construct_UClass_UOWLCGCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLCGCaptureComponent.OuterSingleton;
}
template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLCGCaptureComponent>()
{
	return UOWLCGCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLCGCaptureComponent);
UOWLCGCaptureComponent::~UOWLCGCaptureComponent() {}
// End Class UOWLCGCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLCGCaptureComponent, UOWLCGCaptureComponent::StaticClass, TEXT("UOWLCGCaptureComponent"), &Z_Registration_Info_UClass_UOWLCGCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLCGCaptureComponent), 2381991274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGCaptureComponent_h_3070980576(TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
