// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLViewportCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLCAMERA_OWLViewportCapture_generated_h
#error "OWLViewportCapture.generated.h already included, missing '#pragma once' in OWLViewportCapture.h"
#endif
#define OWLCAMERA_OWLViewportCapture_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_14_DELEGATE \
OWLCAMERA_API void FOnViewportCaptureResized_DelegateWrapper(const FMulticastScriptDelegate& OnViewportCaptureResized);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLViewportCapture(); \
	friend struct Z_Construct_UClass_AOWLViewportCapture_Statics; \
public: \
	DECLARE_CLASS(AOWLViewportCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLCamera"), NO_API) \
	DECLARE_SERIALIZER(AOWLViewportCapture)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWLViewportCapture(AOWLViewportCapture&&); \
	AOWLViewportCapture(const AOWLViewportCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLViewportCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLViewportCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLViewportCapture) \
	NO_API virtual ~AOWLViewportCapture();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_16_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_19_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLCAMERA_API UClass* StaticClass<class AOWLViewportCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
