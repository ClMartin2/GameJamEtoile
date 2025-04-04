// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLUIInputPass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UWorld;
#ifdef OWLCOMPOSURE_OWLUIInputPass_generated_h
#error "OWLUIInputPass.generated.h already included, missing '#pragma once' in OWLUIInputPass.h"
#endif
#define OWLCOMPOSURE_OWLUIInputPass_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnWorldDestroy); \
	DECLARE_FUNCTION(execGetWidget);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLUIInputPass(); \
	friend struct Z_Construct_UClass_UOWLUIInputPass_Statics; \
public: \
	DECLARE_CLASS(UOWLUIInputPass, UCompositingElementInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWLComposure"), NO_API) \
	DECLARE_SERIALIZER(UOWLUIInputPass)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWLUIInputPass(UOWLUIInputPass&&); \
	UOWLUIInputPass(const UOWLUIInputPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLUIInputPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLUIInputPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWLUIInputPass)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_13_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_16_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLCOMPOSURE_API UClass* StaticClass<class UOWLUIInputPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
