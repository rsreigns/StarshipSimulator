// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Ability/GameplayAbilities/Player/Native_GA_LockTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNative_GA_LockTarget() {}

// Begin Cross Module References
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GA_LockTarget();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GA_LockTarget_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerGABase();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UNative_GA_LockTarget
void UNative_GA_LockTarget::StaticRegisterNativesUNative_GA_LockTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNative_GA_LockTarget);
UClass* Z_Construct_UClass_UNative_GA_LockTarget_NoRegister()
{
	return UNative_GA_LockTarget::StaticClass();
}
struct Z_Construct_UClass_UNative_GA_LockTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ability/GameplayAbilities/Player/Native_GA_LockTarget.h" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_LockTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNative_GA_LockTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNative_GA_LockTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayerGABase,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_LockTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNative_GA_LockTarget_Statics::ClassParams = {
	&UNative_GA_LockTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_LockTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNative_GA_LockTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNative_GA_LockTarget()
{
	if (!Z_Registration_Info_UClass_UNative_GA_LockTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNative_GA_LockTarget.OuterSingleton, Z_Construct_UClass_UNative_GA_LockTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNative_GA_LockTarget.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UNative_GA_LockTarget>()
{
	return UNative_GA_LockTarget::StaticClass();
}
UNative_GA_LockTarget::UNative_GA_LockTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNative_GA_LockTarget);
UNative_GA_LockTarget::~UNative_GA_LockTarget() {}
// End Class UNative_GA_LockTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_LockTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNative_GA_LockTarget, UNative_GA_LockTarget::StaticClass, TEXT("UNative_GA_LockTarget"), &Z_Registration_Info_UClass_UNative_GA_LockTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNative_GA_LockTarget), 2060174294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_LockTarget_h_1230401318(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_LockTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_LockTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
