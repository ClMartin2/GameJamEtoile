// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLCGElement.h"
#include "ActorLayerUtilities/Public/ActorLayerUtilities.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCGElement() {}

// Begin Cross Module References
ACTORLAYERUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActorLayer();
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingInputInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLBaseComp();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGElement();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGElement_NoRegister();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLCGCaptureComponent_NoRegister();
OWLCOMPOSURE_API UEnum* Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude();
OWLCOMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FOWLActorLayer();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References

// Begin Enum EOWLIncludeExclude
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLIncludeExclude;
static UEnum* EOWLIncludeExclude_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLIncludeExclude.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLIncludeExclude.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude, (UObject*)Z_Construct_UPackage__Script_OWLComposure(), TEXT("EOWLIncludeExclude"));
	}
	return Z_Registration_Info_UEnum_EOWLIncludeExclude.OuterSingleton;
}
template<> OWLCOMPOSURE_API UEnum* StaticEnum<EOWLIncludeExclude>()
{
	return EOWLIncludeExclude_StaticEnum();
}
struct Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EICE_Exclude.DisplayName", "Exclude" },
		{ "EICE_Exclude.Name", "EOWLIncludeExclude::EICE_Exclude" },
		{ "EICE_Include.DisplayName", "Include" },
		{ "EICE_Include.Name", "EOWLIncludeExclude::EICE_Include" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOWLIncludeExclude::EICE_Exclude", (int64)EOWLIncludeExclude::EICE_Exclude },
		{ "EOWLIncludeExclude::EICE_Include", (int64)EOWLIncludeExclude::EICE_Include },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWLComposure,
	nullptr,
	"EOWLIncludeExclude",
	"EOWLIncludeExclude",
	Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude()
{
	if (!Z_Registration_Info_UEnum_EOWLIncludeExclude.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLIncludeExclude.InnerSingleton, Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLIncludeExclude.InnerSingleton;
}
// End Enum EOWLIncludeExclude

// Begin ScriptStruct FOWLActorLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLActorLayer;
class UScriptStruct* FOWLActorLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLActorLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLActorLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLActorLayer, (UObject*)Z_Construct_UPackage__Script_OWLComposure(), TEXT("OWLActorLayer"));
	}
	return Z_Registration_Info_UScriptStruct_OWLActorLayer.OuterSingleton;
}
template<> OWLCOMPOSURE_API UScriptStruct* StaticStruct<FOWLActorLayer>()
{
	return FOWLActorLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLActorLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSet_MetaData[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupType_MetaData[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLActorLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_ActorSet = { "ActorSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLActorLayer, ActorSet), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSet_MetaData), NewProp_ActorSet_MetaData) }; // 2865297347
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType = { "GroupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLActorLayer, GroupType), Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupType_MetaData), NewProp_GroupType_MetaData) }; // 740277573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLActorLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_ActorSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	nullptr,
	&NewStructOps,
	"OWLActorLayer",
	Z_Construct_UScriptStruct_FOWLActorLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::PropPointers),
	sizeof(FOWLActorLayer),
	alignof(FOWLActorLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLActorLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLActorLayer()
{
	if (!Z_Registration_Info_UScriptStruct_OWLActorLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLActorLayer.InnerSingleton, Z_Construct_UScriptStruct_FOWLActorLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLActorLayer.InnerSingleton;
}
// End ScriptStruct FOWLActorLayer

// Begin Class AOWLCGElement Function UpdateDistortion
struct Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Update the state of the Lens Distortion Data Handler, and updates or removes the Distortion MID from the SceneCaptureComponent's post process materials, depending on whether distortion should be applied*/" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Update the state of the Lens Distortion Data Handler, and updates or removes the Distortion MID from the SceneCaptureComponent's post process materials, depending on whether distortion should be applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLCGElement, nullptr, "UpdateDistortion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWLCGElement_UpdateDistortion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLCGElement::execUpdateDistortion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDistortion();
	P_NATIVE_END;
}
// End Class AOWLCGElement Function UpdateDistortion

// Begin Class AOWLCGElement
void AOWLCGElement::StaticRegisterNativesAOWLCGElement()
{
	UClass* Class = AOWLCGElement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateDistortion", &AOWLCGElement::execUpdateDistortion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLCGElement);
UClass* Z_Construct_UClass_AOWLCGElement_NoRegister()
{
	return AOWLCGElement::StaticClass();
}
struct Z_Construct_UClass_AOWLCGElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OWL Composure" },
		{ "IncludePath", "OWLCGElement.h" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "OffWorldLive" },
		{ "Comment", "/** Component used to generate image data for this CG Layer */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Component used to generate image data for this CG Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturePassName_MetaData[] = {
		{ "Category", "Composure|Input" },
		{ "DisplayName", "Capture Pass Name" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureActors_MetaData[] = {
		{ "Category", "Composure|Input" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDistortion_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Whether to apply distortion as a post-process effect on this CG Layer */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Whether to apply distortion as a post-process effect on this CG Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensComponentPicker_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "/Script/CameraCalibrationCore.LensComponent" },
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Structure used to query the camera calibration subsystem for a lens distortion model handler */" },
		{ "DisplayName", "Lens Component" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Structure used to query the camera calibration subsystem for a lens distortion model handler" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverscanFactor_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Value used to augment the FOV of the scene capture to produce a CG image with enough data to distort */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Value used to augment the FOV of the scene capture to produce a CG image with enough data to distort" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalFocalLength_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Focal length of the target camera before any overscan has been applied */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Focal length of the target camera before any overscan has been applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDistortionMID_MetaData[] = {
		{ "Comment", "/** Cached distortion MID produced by the Lens Distortion Handler, used to clean up the post-process materials in the case that the the MID changes */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Cached distortion MID produced by the Lens Distortion Handler, used to clean up the post-process materials in the case that the the MID changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoCameraTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCheckedParents_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CapturePassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CaptureActors;
	static void NewProp_bApplyDistortion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDistortion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LensComponentPicker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalFocalLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastDistortionMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoCameraTexture;
	static void NewProp_bHasCheckedParents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCheckedParents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLCGElement_UpdateDistortion, "UpdateDistortion" }, // 475476549
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLCGElement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, CaptureComponent), Z_Construct_UClass_UOWLCGCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CapturePassName = { "CapturePassName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, CapturePassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturePassName_MetaData), NewProp_CapturePassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors_Inner = { "CaptureActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOWLActorLayer, METADATA_PARAMS(0, nullptr) }; // 249261093
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors = { "CaptureActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, CaptureActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureActors_MetaData), NewProp_CaptureActors_MetaData) }; // 249261093
void Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion_SetBit(void* Obj)
{
	((AOWLCGElement*)Obj)->bApplyDistortion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion = { "bApplyDistortion", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLCGElement), &Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyDistortion_MetaData), NewProp_bApplyDistortion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LensComponentPicker = { "LensComponentPicker", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, LensComponentPicker), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensComponentPicker_MetaData), NewProp_LensComponentPicker_MetaData) }; // 3869904073
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OverscanFactor = { "OverscanFactor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, OverscanFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverscanFactor_MetaData), NewProp_OverscanFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OriginalFocalLength = { "OriginalFocalLength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, OriginalFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalFocalLength_MetaData), NewProp_OriginalFocalLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LastDistortionMID = { "LastDistortionMID", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, LastDistortionMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDistortionMID_MetaData), NewProp_LastDistortionMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_NoCameraTexture = { "NoCameraTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGElement, NoCameraTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoCameraTexture_MetaData), NewProp_NoCameraTexture_MetaData) };
void Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents_SetBit(void* Obj)
{
	((AOWLCGElement*)Obj)->bHasCheckedParents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents = { "bHasCheckedParents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLCGElement), &Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCheckedParents_MetaData), NewProp_bHasCheckedParents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLCGElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CapturePassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LensComponentPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OverscanFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OriginalFocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LastDistortionMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_NoCameraTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLCGElement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOWLBaseComp,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWLCGElement_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCompositingInputInterface_NoRegister, (int32)VTABLE_OFFSET(AOWLCGElement, ICompositingInputInterface), false },  // 3684982593
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLCGElement_Statics::ClassParams = {
	&AOWLCGElement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLCGElement_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLCGElement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLCGElement()
{
	if (!Z_Registration_Info_UClass_AOWLCGElement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLCGElement.OuterSingleton, Z_Construct_UClass_AOWLCGElement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLCGElement.OuterSingleton;
}
template<> OWLCOMPOSURE_API UClass* StaticClass<AOWLCGElement>()
{
	return AOWLCGElement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLCGElement);
AOWLCGElement::~AOWLCGElement() {}
// End Class AOWLCGElement

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLIncludeExclude_StaticEnum, TEXT("EOWLIncludeExclude"), &Z_Registration_Info_UEnum_EOWLIncludeExclude, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 740277573U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLActorLayer::StaticStruct, Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewStructOps, TEXT("OWLActorLayer"), &Z_Registration_Info_UScriptStruct_OWLActorLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLActorLayer), 249261093U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLCGElement, AOWLCGElement::StaticClass, TEXT("AOWLCGElement"), &Z_Registration_Info_UClass_AOWLCGElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLCGElement), 59709201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_4221705024(TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
