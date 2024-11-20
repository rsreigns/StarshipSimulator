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
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "Abilities|TargetLock" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_LockTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Abilities|TargetLock" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_LockTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockDistance_MetaData[] = {
		{ "Category", "Abilities|TargetLock" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_LockTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldShowDebug_MetaData[] = {
		{ "Category", "Abilities|TargetLock" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_LockTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLockDistance;
	static void NewProp_bShouldShowDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldShowDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNative_GA_LockTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GA_LockTarget, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GA_LockTarget, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_TargetLockDistance = { "TargetLockDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GA_LockTarget, TargetLockDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockDistance_MetaData), NewProp_TargetLockDistance_MetaData) };
void Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_bShouldShowDebug_SetBit(void* Obj)
{
	((UNative_GA_LockTarget*)Obj)->bShouldShowDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_bShouldShowDebug = { "bShouldShowDebug", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNative_GA_LockTarget), &Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_bShouldShowDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldShowDebug_MetaData), NewProp_bShouldShowDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNative_GA_LockTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_TargetLockDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_LockTarget_Statics::NewProp_bShouldShowDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_LockTarget_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UNative_GA_LockTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_LockTarget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UNative_GA_LockTarget, UNative_GA_LockTarget::StaticClass, TEXT("UNative_GA_LockTarget"), &Z_Registration_Info_UClass_UNative_GA_LockTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNative_GA_LockTarget), 2158981166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_LockTarget_h_1377269552(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_LockTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_LockTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
