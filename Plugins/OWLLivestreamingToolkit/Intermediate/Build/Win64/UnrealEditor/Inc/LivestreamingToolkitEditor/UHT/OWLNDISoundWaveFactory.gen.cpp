// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkitEditor/Public/Factories/OWLNDISoundWaveFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDISoundWaveFactory() {}

// Begin Cross Module References
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory();
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
// End Cross Module References

// Begin Class UOWLNDISoundWaveFactory
void UOWLNDISoundWaveFactory::StaticRegisterNativesUOWLNDISoundWaveFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLNDISoundWaveFactory);
UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory_NoRegister()
{
	return UOWLNDISoundWaveFactory::StaticClass();
}
struct Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/OWLNDISoundWaveFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/OWLNDISoundWaveFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDISoundWaveFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::ClassParams = {
	&UOWLNDISoundWaveFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory()
{
	if (!Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.OuterSingleton, Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKITEDITOR_API UClass* StaticClass<UOWLNDISoundWaveFactory>()
{
	return UOWLNDISoundWaveFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLNDISoundWaveFactory);
UOWLNDISoundWaveFactory::~UOWLNDISoundWaveFactory() {}
// End Class UOWLNDISoundWaveFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDISoundWaveFactory, UOWLNDISoundWaveFactory::StaticClass, TEXT("UOWLNDISoundWaveFactory"), &Z_Registration_Info_UClass_UOWLNDISoundWaveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDISoundWaveFactory), 892125443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h_511688874(TEXT("/Script/LivestreamingToolkitEditor"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
