// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLCGMatte.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLCOMPOSURE_OWLCGMatte_generated_h
#error "OWLCGMatte.generated.h already included, missing '#pragma once' in OWLCGMatte.h"
#endif
#define OWLCOMPOSURE_OWLCGMatte_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLCGMatte(); \
	friend struct Z_Construct_UClass_AOWLCGMatte_Statics; \
public: \
	DECLARE_CLASS(AOWLCGMatte, AOWLCGElement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLComposure"), NO_API) \
	DECLARE_SERIALIZER(AOWLCGMatte)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWLCGMatte(AOWLCGMatte&&); \
	AOWLCGMatte(const AOWLCGMatte&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLCGMatte); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLCGMatte); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLCGMatte) \
	NO_API virtual ~AOWLCGMatte();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_17_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_20_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLCOMPOSURE_API UClass* StaticClass<class AOWLCGMatte>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h


#define FOREACH_ENUM_EOWLCOMPOSUREMATTETYPE(op) \
	op(EOWLComposureMatteType::CMT_HOLDOUT) \
	op(EOWLComposureMatteType::CMT_GARBAGE_MATTE) 

enum class EOWLComposureMatteType : uint8;
template<> struct TIsUEnumClass<EOWLComposureMatteType> { enum { Value = true }; };
template<> OWLCOMPOSURE_API UEnum* StaticEnum<EOWLComposureMatteType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
