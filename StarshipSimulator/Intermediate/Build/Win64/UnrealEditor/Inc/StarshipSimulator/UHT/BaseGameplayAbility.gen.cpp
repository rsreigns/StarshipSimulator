// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Ability/GameplayAbilities/BaseGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UBaseGameplayAbility Function InitiateAbility
struct Z_Construct_UFunction_UBaseGameplayAbility_InitiateAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/BaseGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameplayAbility_InitiateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGameplayAbility, nullptr, "InitiateAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_InitiateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameplayAbility_InitiateAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseGameplayAbility_InitiateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameplayAbility_InitiateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameplayAbility::execInitiateAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitiateAbility();
	P_NATIVE_END;
}
// End Class UBaseGameplayAbility Function InitiateAbility

// Begin Class UBaseGameplayAbility
void UBaseGameplayAbility::StaticRegisterNativesUBaseGameplayAbility()
{
	UClass* Class = UBaseGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitiateAbility", &UBaseGameplayAbility::execInitiateAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseGameplayAbility);
UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister()
{
	return UBaseGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBaseGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/GameplayAbilities/BaseGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/BaseGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseGameplayAbility_InitiateAbility, "InitiateAbility" }, // 1389913418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams = {
	&UBaseGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton, Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UBaseGameplayAbility>()
{
	return UBaseGameplayAbility::StaticClass();
}
UBaseGameplayAbility::UBaseGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameplayAbility);
UBaseGameplayAbility::~UBaseGameplayAbility() {}
// End Class UBaseGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_BaseGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGameplayAbility, UBaseGameplayAbility::StaticClass, TEXT("UBaseGameplayAbility"), &Z_Registration_Info_UClass_UBaseGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGameplayAbility), 645088707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_BaseGameplayAbility_h_350119943(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_BaseGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_BaseGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
