// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVESTREAMINGTOOLKIT_OWLSettings_generated_h
#error "OWLSettings.generated.h already included, missing '#pragma once' in OWLSettings.h"
#endif
#define LIVESTREAMINGTOOLKIT_OWLSettings_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLSettings(); \
	friend struct Z_Construct_UClass_UOWLSettings_Statics; \
public: \
	DECLARE_CLASS(UOWLSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), NO_API) \
	DECLARE_SERIALIZER(UOWLSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWLSettings(UOWLSettings&&); \
	UOWLSettings(const UOWLSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWLSettings) \
	NO_API virtual ~UOWLSettings();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_13_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<class UOWLSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
