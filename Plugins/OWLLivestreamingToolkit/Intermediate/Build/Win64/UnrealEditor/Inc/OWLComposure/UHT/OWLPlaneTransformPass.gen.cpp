// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLPlaneTransformPass.h"
#include "Composure/Public/CompositingElements/CompositingMaterialPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLPlaneTransformPass() {}

// Begin Cross Module References
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform();
COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositingMaterial();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLPlaneTransformPass();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLPlaneTransformPass_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References

// Begin Class UOWLPlaneTransformPass
void UOWLPlaneTransformPass::StaticRegisterNativesUOWLPlaneTransformPass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLPlaneTransformPass);
UClass* Z_Construct_UClass_UOWLPlaneTransformPass_NoRegister()
{
	return UOWLPlaneTransformPass::StaticClass();
}
struct Z_Construct_UClass_UOWLPlaneTransformPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OWLPlaneTransformPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderScale_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/* Set a plane to attach the media plate to in the scene - will take aspect ratio from scale */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ToolTip", "Set a plane to attach the media plate to in the scene - will take aspect ratio from scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraOverride_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/* Set a reference to a camera actor in the scene instead of using the camera inherited from the Composure pass */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ToolTip", "Set a reference to a camera actor in the scene instead of using the camera inherited from the Composure pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Number of frames to run behind. By default, with deferred rendering this is 1 */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ToolTip", "Number of frames to run behind. By default, with deferred rendering this is 1" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMaterial_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMat_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLPlaneTransformPass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Plane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLPlaneTransformPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_RenderScale = { "RenderScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLPlaneTransformPass, RenderScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderScale_MetaData), NewProp_RenderScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLPlaneTransformPass, Plane), Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plane_MetaData), NewProp_Plane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_CameraOverride = { "CameraOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLPlaneTransformPass, CameraOverride), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraOverride_MetaData), NewProp_CameraOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLPlaneTransformPass, FrameDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDelay_MetaData), NewProp_FrameDelay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_TransformMaterial = { "TransformMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLPlaneTransformPass, TransformMaterial), Z_Construct_UScriptStruct_FCompositingMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMaterial_MetaData), NewProp_TransformMaterial_MetaData) }; // 2784049101
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLPlaneTransformPass, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MID_MetaData), NewProp_MID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_BaseMat = { "BaseMat", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLPlaneTransformPass, BaseMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMat_MetaData), NewProp_BaseMat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLPlaneTransformPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_RenderScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_Plane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_CameraOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_FrameDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_TransformMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLPlaneTransformPass_Statics::NewProp_BaseMat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLPlaneTransformPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLPlaneTransformPass_Statics::ClassParams = {
	&UOWLPlaneTransformPass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLPlaneTransformPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPlaneTransformPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLPlaneTransformPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLPlaneTransformPass()
{
	if (!Z_Registration_Info_UClass_UOWLPlaneTransformPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLPlaneTransformPass.OuterSingleton, Z_Construct_UClass_UOWLPlaneTransformPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLPlaneTransformPass.OuterSingleton;
}
template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLPlaneTransformPass>()
{
	return UOWLPlaneTransformPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLPlaneTransformPass);
// End Class UOWLPlaneTransformPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLPlaneTransformPass, UOWLPlaneTransformPass::StaticClass, TEXT("UOWLPlaneTransformPass"), &Z_Registration_Info_UClass_UOWLPlaneTransformPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLPlaneTransformPass), 3214718476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_3813032980(TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLPlaneTransformPass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
