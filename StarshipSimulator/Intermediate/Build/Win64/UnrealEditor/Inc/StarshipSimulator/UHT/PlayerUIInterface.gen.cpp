// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Interface/PlayerUIInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUIInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerUIInterface();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerUIInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Interface UPlayerUIInterface
void UPlayerUIInterface::StaticRegisterNativesUPlayerUIInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerUIInterface);
UClass* Z_Construct_UClass_UPlayerUIInterface_NoRegister()
{
	return UPlayerUIInterface::StaticClass();
}
struct Z_Construct_UClass_UPlayerUIInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PlayerUIInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerUIInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerUIInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUIInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerUIInterface_Statics::ClassParams = {
	&UPlayerUIInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUIInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerUIInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerUIInterface()
{
	if (!Z_Registration_Info_UClass_UPlayerUIInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerUIInterface.OuterSingleton, Z_Construct_UClass_UPlayerUIInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerUIInterface.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UPlayerUIInterface>()
{
	return UPlayerUIInterface::StaticClass();
}
UPlayerUIInterface::UPlayerUIInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerUIInterface);
UPlayerUIInterface::~UPlayerUIInterface() {}
// End Interface UPlayerUIInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerUIInterface, UPlayerUIInterface::StaticClass, TEXT("UPlayerUIInterface"), &Z_Registration_Info_UClass_UPlayerUIInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerUIInterface), 2097177539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_3320190785(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
