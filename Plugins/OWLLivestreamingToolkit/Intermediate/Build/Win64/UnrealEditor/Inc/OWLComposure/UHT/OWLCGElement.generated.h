// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLCGElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLCOMPOSURE_OWLCGElement_generated_h
#error "OWLCGElement.generated.h already included, missing '#pragma once' in OWLCGElement.h"
#endif
#define OWLCOMPOSURE_OWLCGElement_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLActorLayer_Statics; \
	OWLCOMPOSURE_API static class UScriptStruct* StaticStruct();


template<> OWLCOMPOSURE_API UScriptStruct* StaticStruct<struct FOWLActorLayer>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDistortion);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLCGElement(); \
	friend struct Z_Construct_UClass_AOWLCGElement_Statics; \
public: \
	DECLARE_CLASS(AOWLCGElement, AOWLBaseComp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLComposure"), NO_API) \
	DECLARE_SERIALIZER(AOWLCGElement) \
	virtual UObject* _getUObject() const override { return const_cast<AOWLCGElement*>(this); }


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWLCGElement(AOWLCGElement&&); \
	AOWLCGElement(const AOWLCGElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLCGElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLCGElement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLCGElement) \
	NO_API virtual ~AOWLCGElement();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_37_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLCOMPOSURE_API UClass* StaticClass<class AOWLCGElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h


#define FOREACH_ENUM_EOWLINCLUDEEXCLUDE(op) \
	op(EOWLIncludeExclude::EICE_Exclude) \
	op(EOWLIncludeExclude::EICE_Include) 

enum class EOWLIncludeExclude : uint8;
template<> struct TIsUEnumClass<EOWLIncludeExclude> { enum { Value = true }; };
template<> OWLCOMPOSURE_API UEnum* StaticEnum<EOWLIncludeExclude>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
