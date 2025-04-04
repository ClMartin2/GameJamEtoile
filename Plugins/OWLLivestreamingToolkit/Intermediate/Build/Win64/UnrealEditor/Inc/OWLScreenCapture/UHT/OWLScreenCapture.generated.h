// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLScreenCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLSCREENCAPTURE_OWLScreenCapture_generated_h
#error "OWLScreenCapture.generated.h already included, missing '#pragma once' in OWLScreenCapture.h"
#endif
#define OWLSCREENCAPTURE_OWLScreenCapture_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWindow); \
	DECLARE_FUNCTION(execSetMonitor); \
	DECLARE_FUNCTION(execGetAvailableWindowNames); \
	DECLARE_FUNCTION(execGetAvailableMonitorNames);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLScreenCapture(); \
	friend struct Z_Construct_UClass_AOWLScreenCapture_Statics; \
public: \
	DECLARE_CLASS(AOWLScreenCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLScreenCapture"), NO_API) \
	DECLARE_SERIALIZER(AOWLScreenCapture)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWLScreenCapture(AOWLScreenCapture&&); \
	AOWLScreenCapture(const AOWLScreenCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLScreenCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLScreenCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLScreenCapture)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_17_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_20_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLSCREENCAPTURE_API UClass* StaticClass<class AOWLScreenCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
