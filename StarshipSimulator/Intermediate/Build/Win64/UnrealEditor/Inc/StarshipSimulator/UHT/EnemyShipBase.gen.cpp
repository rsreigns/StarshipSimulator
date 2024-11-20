// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/EnemyShips/EnemyShipBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShipBase() {}

// Begin Cross Module References
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_ABaseShip();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_AEnemyShipBase();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_AEnemyShipBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class AEnemyShipBase
void AEnemyShipBase::StaticRegisterNativesAEnemyShipBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyShipBase);
UClass* Z_Construct_UClass_AEnemyShipBase_NoRegister()
{
	return AEnemyShipBase::StaticClass();
}
struct Z_Construct_UClass_AEnemyShipBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyShips/EnemyShipBase.h" },
		{ "ModuleRelativePath", "Public/EnemyShips/EnemyShipBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShipBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyShipBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseShip,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShipBase_Statics::ClassParams = {
	&AEnemyShipBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyShipBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyShipBase()
{
	if (!Z_Registration_Info_UClass_AEnemyShipBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyShipBase.OuterSingleton, Z_Construct_UClass_AEnemyShipBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyShipBase.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<AEnemyShipBase>()
{
	return AEnemyShipBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShipBase);
AEnemyShipBase::~AEnemyShipBase() {}
// End Class AEnemyShipBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyShipBase, AEnemyShipBase::StaticClass, TEXT("AEnemyShipBase"), &Z_Registration_Info_UClass_AEnemyShipBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyShipBase), 2281063802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_4167841831(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
