// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMRQPipeline/Public/OWL360Camera/OWL360CameraMoviePipelinePass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWL360CameraMoviePipelinePass() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase();
OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_E360ProjectionType();
OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_EStreamResolution_360();
OWLMRQPIPELINE_API UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass();
OWLMRQPIPELINE_API UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass_NoRegister();
OWLMRQPIPELINE_API UEnum* Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth();
UPackage* Z_Construct_UPackage__Script_OWLMRQPipeline();
// End Cross Module References

// Begin Enum EOWLBitDepth
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLBitDepth;
static UEnum* EOWLBitDepth_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLBitDepth.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLBitDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth, (UObject*)Z_Construct_UPackage__Script_OWLMRQPipeline(), TEXT("EOWLBitDepth"));
	}
	return Z_Registration_Info_UEnum_EOWLBitDepth.OuterSingleton;
}
template<> OWLMRQPIPELINE_API UEnum* StaticEnum<EOWLBitDepth>()
{
	return EOWLBitDepth_StaticEnum();
}
struct Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BT_16Bit.DisplayName", "16 Bit" },
		{ "BT_16Bit.Name", "EOWLBitDepth::BT_16Bit" },
		{ "BT_32Bit.DisplayName", "32 Bit" },
		{ "BT_32Bit.Name", "EOWLBitDepth::BT_32Bit" },
		{ "BT_8Bit.DisplayName", "8 Bit" },
		{ "BT_8Bit.Name", "EOWLBitDepth::BT_8Bit" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOWLBitDepth::BT_8Bit", (int64)EOWLBitDepth::BT_8Bit },
		{ "EOWLBitDepth::BT_16Bit", (int64)EOWLBitDepth::BT_16Bit },
		{ "EOWLBitDepth::BT_32Bit", (int64)EOWLBitDepth::BT_32Bit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWLMRQPipeline,
	nullptr,
	"EOWLBitDepth",
	"EOWLBitDepth",
	Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth()
{
	if (!Z_Registration_Info_UEnum_EOWLBitDepth.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLBitDepth.InnerSingleton, Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLBitDepth.InnerSingleton;
}
// End Enum EOWLBitDepth

// Begin Class UOWL360CameraMoviePipelinePass Function SetCustomOutputResolution
struct Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics
{
	struct OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms
	{
		FIntPoint InRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::NewProp_InRes = { "InRes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms, InRes), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::NewProp_InRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CameraMoviePipelinePass, nullptr, "SetCustomOutputResolution", nullptr, nullptr, Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWL360CameraMoviePipelinePass::execSetCustomOutputResolution)
{
	P_GET_STRUCT(FIntPoint,Z_Param_InRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomOutputResolution(Z_Param_InRes);
	P_NATIVE_END;
}
// End Class UOWL360CameraMoviePipelinePass Function SetCustomOutputResolution

// Begin Class UOWL360CameraMoviePipelinePass
void UOWL360CameraMoviePipelinePass::StaticRegisterNativesUOWL360CameraMoviePipelinePass()
{
	UClass* Class = UOWL360CameraMoviePipelinePass::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCustomOutputResolution", &UOWL360CameraMoviePipelinePass::execSetCustomOutputResolution },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWL360CameraMoviePipelinePass);
UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass_NoRegister()
{
	return UOWL360CameraMoviePipelinePass::StaticClass();
}
struct Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathTracing_MetaData[] = {
		{ "Category", "Path Tracer" },
		{ "Comment", "// Path Tracing\n" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Path Tracing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceMotionBlur_MetaData[] = {
		{ "Category", "Reference Motion Blur" },
		{ "Comment", "/** When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\n     *  In this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\n     *  When this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples.\n     */" },
		{ "EditCondition", "bPathTracing" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\nIn this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\nWhen this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[] = {
		{ "Category", "Output Options" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StereoEyeSeparation_MetaData[] = {
		{ "Category", "Output Options" },
		{ "Comment", "/* Set the gap between left eye and right eye in world units */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "EditCondition", "ProjectionType == E360ProjectionType::CT_StereoVR180" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Set the gap between left eye and right eye in world units" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomeAngle_MetaData[] = {
		{ "Category", "Output Options" },
		{ "EditCondition", "ProjectionType == E360ProjectionType::CT_DomeMaster" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomeRotatorOffset_MetaData[] = {
		{ "Category", "Output Options" },
		{ "EditCondition", "ProjectionType == E360ProjectionType::CT_DomeMaster" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputResolution_MetaData[] = {
		{ "Category", "Output Options" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOutputResolution_MetaData[] = {
		{ "BlueprintSetter", "SetCustomOutputResolution" },
		{ "Category", "Output Options" },
		{ "EditCondition", "OutputResolution == EStreamResolution_360::RS_360_Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateBitDepth_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "Comment", "/* To target specific outputs you may find you get a better result by forcing intermediate processing to a given bit rate */" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "To target specific outputs you may find you get a better result by forcing intermediate processing to a given bit rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableParallelRendering_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "Comment", "/* Ensures that each frame completes before rendering the next. Very important with large resolutions */" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Ensures that each frame completes before rendering the next. Very important with large resolutions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMultipleSceneViewStates_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "Comment", "/* Scene View States store large amount of temporal information to improve Nanite rendering, motion blur and other\n\x09 intra-frame post-process optimisations. Disabling multiple view states reduces GPU load at the cost\n\x09 of these effects. GPU Memory requirements are reduced at the cost of output quality. */" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Scene View States store large amount of temporal information to improve Nanite rendering, motion blur and other\n       intra-frame post-process optimisations. Disabling multiple view states reduces GPU load at the cost\n       of these effects. GPU Memory requirements are reduced at the cost of output quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderFrontFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderBackFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderLeftFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderRightFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTopFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderBottomFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPathTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathTracing;
	static void NewProp_bReferenceMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceMotionBlur;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoEyeSeparation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DomeAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DomeRotatorOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputResolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOutputResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntermediateBitDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IntermediateBitDepth;
	static void NewProp_bDisableParallelRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableParallelRendering;
	static void NewProp_bDisableMultipleSceneViewStates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMultipleSceneViewStates;
	static void NewProp_RenderFrontFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderFrontFace;
	static void NewProp_RenderBackFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderBackFace;
	static void NewProp_RenderLeftFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderLeftFace;
	static void NewProp_RenderRightFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderRightFace;
	static void NewProp_RenderTopFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderTopFace;
	static void NewProp_RenderBottomFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderBottomFace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution, "SetCustomOutputResolution" }, // 1429069274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWL360CameraMoviePipelinePass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->bPathTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing = { "bPathTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathTracing_MetaData), NewProp_bPathTracing_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->bReferenceMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur = { "bReferenceMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReferenceMotionBlur_MetaData), NewProp_bReferenceMotionBlur_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, ProjectionType), Z_Construct_UEnum_OWL360Camera_E360ProjectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionType_MetaData), NewProp_ProjectionType_MetaData) }; // 2607799294
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_StereoEyeSeparation = { "StereoEyeSeparation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, StereoEyeSeparation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StereoEyeSeparation_MetaData), NewProp_StereoEyeSeparation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeAngle = { "DomeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, DomeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomeAngle_MetaData), NewProp_DomeAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeRotatorOffset = { "DomeRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, DomeRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomeRotatorOffset_MetaData), NewProp_DomeRotatorOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution = { "OutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, OutputResolution), Z_Construct_UEnum_OWL360Camera_EStreamResolution_360, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputResolution_MetaData), NewProp_OutputResolution_MetaData) }; // 1604030551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_CustomOutputResolution = { "CustomOutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, CustomOutputResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOutputResolution_MetaData), NewProp_CustomOutputResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth = { "IntermediateBitDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, IntermediateBitDepth), Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateBitDepth_MetaData), NewProp_IntermediateBitDepth_MetaData) }; // 2118732109
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->bDisableParallelRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering = { "bDisableParallelRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableParallelRendering_MetaData), NewProp_bDisableParallelRendering_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->bDisableMultipleSceneViewStates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates = { "bDisableMultipleSceneViewStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableMultipleSceneViewStates_MetaData), NewProp_bDisableMultipleSceneViewStates_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->RenderFrontFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace = { "RenderFrontFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderFrontFace_MetaData), NewProp_RenderFrontFace_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->RenderBackFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace = { "RenderBackFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderBackFace_MetaData), NewProp_RenderBackFace_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->RenderLeftFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace = { "RenderLeftFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderLeftFace_MetaData), NewProp_RenderLeftFace_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->RenderRightFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace = { "RenderRightFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderRightFace_MetaData), NewProp_RenderRightFace_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->RenderTopFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace = { "RenderTopFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTopFace_MetaData), NewProp_RenderTopFace_MetaData) };
void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace_SetBit(void* Obj)
{
	((UOWL360CameraMoviePipelinePass*)Obj)->RenderBottomFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace = { "RenderBottomFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderBottomFace_MetaData), NewProp_RenderBottomFace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_StereoEyeSeparation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeRotatorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_CustomOutputResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMRQPipeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::ClassParams = {
	&UOWL360CameraMoviePipelinePass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass()
{
	if (!Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass.OuterSingleton, Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass.OuterSingleton;
}
template<> OWLMRQPIPELINE_API UClass* StaticClass<UOWL360CameraMoviePipelinePass>()
{
	return UOWL360CameraMoviePipelinePass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWL360CameraMoviePipelinePass);
// End Class UOWL360CameraMoviePipelinePass

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLBitDepth_StaticEnum, TEXT("EOWLBitDepth"), &Z_Registration_Info_UEnum_EOWLBitDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2118732109U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWL360CameraMoviePipelinePass, UOWL360CameraMoviePipelinePass::StaticClass, TEXT("UOWL360CameraMoviePipelinePass"), &Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWL360CameraMoviePipelinePass), 3246921691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_1512123875(TEXT("/Script/OWLMRQPipeline"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
