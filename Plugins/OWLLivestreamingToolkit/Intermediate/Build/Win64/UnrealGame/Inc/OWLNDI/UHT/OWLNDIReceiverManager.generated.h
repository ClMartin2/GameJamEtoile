// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLNDIReceiverManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNDISource;
#ifdef OWLNDI_OWLNDIReceiverManager_generated_h
#error "OWLNDIReceiverManager.generated.h already included, missing '#pragma once' in OWLNDIReceiverManager.h"
#endif
#define OWLNDI_OWLNDIReceiverManager_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLNDI_API UScriptStruct* StaticStruct<struct FOWLNDIReceiverInterface>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableNDISources);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLNDIReceiverManager(); \
	friend struct Z_Construct_UClass_AOWLNDIReceiverManager_Statics; \
public: \
	DECLARE_CLASS(AOWLNDIReceiverManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLNDI"), NO_API) \
	DECLARE_SERIALIZER(AOWLNDIReceiverManager)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWLNDIReceiverManager(AOWLNDIReceiverManager&&); \
	AOWLNDIReceiverManager(const AOWLNDIReceiverManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLNDIReceiverManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLNDIReceiverManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLNDIReceiverManager) \
	NO_API virtual ~AOWLNDIReceiverManager();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_57_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_60_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLNDI_API UClass* StaticClass<class AOWLNDIReceiverManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
