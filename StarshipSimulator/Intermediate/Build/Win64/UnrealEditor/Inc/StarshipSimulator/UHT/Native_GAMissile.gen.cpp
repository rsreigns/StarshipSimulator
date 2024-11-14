// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Ability/GameplayAbilities/Native_GAMissile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNative_GAMissile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_AMissile_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GAMissile();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GAMissile_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerGABase();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UNative_GAMissile
void UNative_GAMissile::StaticRegisterNativesUNative_GAMissile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNative_GAMissile);
UClass* Z_Construct_UClass_UNative_GAMissile_NoRegister()
{
	return UNative_GAMissile::StaticClass();
}
struct Z_Construct_UClass_UNative_GAMissile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/GameplayAbilities/Native_GAMissile.h" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Native_GAMissile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Missile_MetaData[] = {
		{ "Category", "Abilities|Projectile" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Native_GAMissile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Missile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNative_GAMissile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_Missile = { "Missile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GAMissile, Missile), Z_Construct_UClass_UClass, Z_Construct_UClass_AMissile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Missile_MetaData), NewProp_Missile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNative_GAMissile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_Missile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GAMissile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNative_GAMissile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayerGABase,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GAMissile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNative_GAMissile_Statics::ClassParams = {
	&UNative_GAMissile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNative_GAMissile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GAMissile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GAMissile_Statics::Class_MetaDataParams), Z_Construct_UClass_UNative_GAMissile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNative_GAMissile()
{
	if (!Z_Registration_Info_UClass_UNative_GAMissile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNative_GAMissile.OuterSingleton, Z_Construct_UClass_UNative_GAMissile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNative_GAMissile.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UNative_GAMissile>()
{
	return UNative_GAMissile::StaticClass();
}
UNative_GAMissile::UNative_GAMissile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNative_GAMissile);
UNative_GAMissile::~UNative_GAMissile() {}
// End Class UNative_GAMissile

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Native_GAMissile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNative_GAMissile, UNative_GAMissile::StaticClass, TEXT("UNative_GAMissile"), &Z_Registration_Info_UClass_UNative_GAMissile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNative_GAMissile), 572674537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Native_GAMissile_h_2071601211(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Native_GAMissile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Native_GAMissile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
