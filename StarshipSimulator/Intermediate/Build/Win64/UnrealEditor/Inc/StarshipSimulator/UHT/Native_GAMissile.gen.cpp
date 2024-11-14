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
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GAMissile();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GAMissile_NoRegister();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ability/GameplayAbilities/Native_GAMissile.h" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Native_GAMissile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNative_GAMissile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNative_GAMissile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GAMissile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNative_GAMissile_Statics::ClassParams = {
	&UNative_GAMissile::StaticClass,
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
		{ Z_Construct_UClass_UNative_GAMissile, UNative_GAMissile::StaticClass, TEXT("UNative_GAMissile"), &Z_Registration_Info_UClass_UNative_GAMissile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNative_GAMissile), 3765862314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Native_GAMissile_h_6930265(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Native_GAMissile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Native_GAMissile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
