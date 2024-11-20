// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Ability/GameplayAbilities/Player/Native_GAMissile.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNative_GAMissile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_AMissile_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GAMissile();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GAMissile_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerGABase();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UNative_GAMissile Function OnGameplayEventReceived
struct Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics
{
	struct Native_GAMissile_eventOnGameplayEventReceived_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GAMissile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Native_GAMissile_eventOnGameplayEventReceived_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNative_GAMissile, nullptr, "OnGameplayEventReceived", nullptr, nullptr, Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::Native_GAMissile_eventOnGameplayEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::Native_GAMissile_eventOnGameplayEventReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNative_GAMissile::execOnGameplayEventReceived)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameplayEventReceived(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UNative_GAMissile Function OnGameplayEventReceived

// Begin Class UNative_GAMissile
void UNative_GAMissile::StaticRegisterNativesUNative_GAMissile()
{
	UClass* Class = UNative_GAMissile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnGameplayEventReceived", &UNative_GAMissile::execOnGameplayEventReceived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "Ability/GameplayAbilities/Player/Native_GAMissile.h" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GAMissile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Missile_MetaData[] = {
		{ "Category", "Abilities|Projectile" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GAMissile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGE_MetaData[] = {
		{ "Category", "Abilities|Projectile" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GAMissile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GAMissile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Missile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGE;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNative_GAMissile_OnGameplayEventReceived, "OnGameplayEventReceived" }, // 3580061110
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNative_GAMissile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_Missile = { "Missile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GAMissile, Missile), Z_Construct_UClass_UClass, Z_Construct_UClass_AMissile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Missile_MetaData), NewProp_Missile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_DamageGE = { "DamageGE", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GAMissile, DamageGE), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGE_MetaData), NewProp_DamageGE_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_LockedTarget = { "LockedTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GAMissile, LockedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedTarget_MetaData), NewProp_LockedTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNative_GAMissile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_Missile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_DamageGE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GAMissile_Statics::NewProp_LockedTarget,
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
	FuncInfo,
	Z_Construct_UClass_UNative_GAMissile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GAMissile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNative_GAMissile, UNative_GAMissile::StaticClass, TEXT("UNative_GAMissile"), &Z_Registration_Info_UClass_UNative_GAMissile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNative_GAMissile), 1933842049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GAMissile_h_1568341585(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GAMissile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GAMissile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
