// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWL360Camera/OWL360CameraMoviePipelinePass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLMRQPIPELINE_OWL360CameraMoviePipelinePass_generated_h
#error "OWL360CameraMoviePipelinePass.generated.h already included, missing '#pragma once' in OWL360CameraMoviePipelinePass.h"
#endif
#define OWLMRQPIPELINE_OWL360CameraMoviePipelinePass_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomOutputResolution);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWL360CameraMoviePipelinePass(); \
	friend struct Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics; \
public: \
	DECLARE_CLASS(UOWL360CameraMoviePipelinePass, UMoviePipelineDeferredPassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWLMRQPipeline"), NO_API) \
	DECLARE_SERIALIZER(UOWL360CameraMoviePipelinePass)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWL360CameraMoviePipelinePass(UOWL360CameraMoviePipelinePass&&); \
	UOWL360CameraMoviePipelinePass(const UOWL360CameraMoviePipelinePass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWL360CameraMoviePipelinePass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWL360CameraMoviePipelinePass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWL360CameraMoviePipelinePass)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_105_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_108_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLMRQPIPELINE_API UClass* StaticClass<class UOWL360CameraMoviePipelinePass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h


#define FOREACH_ENUM_EOWLBITDEPTH(op) \
	op(EOWLBitDepth::BT_8Bit) \
	op(EOWLBitDepth::BT_16Bit) \
	op(EOWLBitDepth::BT_32Bit) 

enum class EOWLBitDepth : uint8;
template<> struct TIsUEnumClass<EOWLBitDepth> { enum { Value = true }; };
template<> OWLMRQPIPELINE_API UEnum* StaticEnum<EOWLBitDepth>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
