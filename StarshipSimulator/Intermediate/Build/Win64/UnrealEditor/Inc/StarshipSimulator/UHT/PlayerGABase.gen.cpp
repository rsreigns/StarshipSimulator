// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Ability/GameplayAbilities/PlayerGABase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerGABase() {}

// Begin Cross Module References
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerGABase();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerGABase_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UPlayerGABase
void UPlayerGABase::StaticRegisterNativesUPlayerGABase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerGABase);
UClass* Z_Construct_UClass_UPlayerGABase_NoRegister()
{
	return UPlayerGABase::StaticClass();
}
struct Z_Construct_UClass_UPlayerGABase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/GameplayAbilities/PlayerGABase.h" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/PlayerGABase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerGABase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerGABase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGABase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerGABase_Statics::ClassParams = {
	&UPlayerGABase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGABase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerGABase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerGABase()
{
	if (!Z_Registration_Info_UClass_UPlayerGABase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerGABase.OuterSingleton, Z_Construct_UClass_UPlayerGABase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerGABase.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UPlayerGABase>()
{
	return UPlayerGABase::StaticClass();
}
UPlayerGABase::UPlayerGABase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerGABase);
UPlayerGABase::~UPlayerGABase() {}
// End Class UPlayerGABase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerGABase, UPlayerGABase::StaticClass, TEXT("UPlayerGABase"), &Z_Registration_Info_UClass_UPlayerGABase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerGABase), 1616366099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_1718739680(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
