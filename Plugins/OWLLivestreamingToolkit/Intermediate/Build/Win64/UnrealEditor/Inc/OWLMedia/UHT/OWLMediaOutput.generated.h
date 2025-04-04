// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLMediaOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLMEDIA_OWLMediaOutput_generated_h
#error "OWLMediaOutput.generated.h already included, missing '#pragma once' in OWLMediaOutput.h"
#endif
#define OWLMEDIA_OWLMediaOutput_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsReconnecting); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLMediaOutput(); \
	friend struct Z_Construct_UClass_AOWLMediaOutput_Statics; \
public: \
	DECLARE_CLASS(AOWLMediaOutput, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLMedia"), NO_API) \
	DECLARE_SERIALIZER(AOWLMediaOutput)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWLMediaOutput(AOWLMediaOutput&&); \
	AOWLMediaOutput(const AOWLMediaOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLMediaOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLMediaOutput) \
	NO_API virtual ~AOWLMediaOutput();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_12_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLMEDIA_API UClass* StaticClass<class AOWLMediaOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
