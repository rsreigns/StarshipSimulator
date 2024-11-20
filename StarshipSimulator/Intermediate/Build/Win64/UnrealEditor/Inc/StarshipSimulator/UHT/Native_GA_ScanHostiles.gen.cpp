// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNative_GA_ScanHostiles() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_ABaseShip_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GA_ScanHostiles();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UNative_GA_ScanHostiles_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerGABase();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UNative_GA_ScanHostiles
void UNative_GA_ScanHostiles::StaticRegisterNativesUNative_GA_ScanHostiles()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNative_GA_ScanHostiles);
UClass* Z_Construct_UClass_UNative_GA_ScanHostiles_NoRegister()
{
	return UNative_GA_ScanHostiles::StaticClass();
}
struct Z_Construct_UClass_UNative_GA_ScanHostiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Ability|Scan" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "Ability|Scan" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyShipClass_MetaData[] = {
		{ "Category", "Ability|Scan" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanSound_MetaData[] = {
		{ "Category", "Ability|Scan" },
		{ "ModuleRelativePath", "Public/Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyShipClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNative_GA_ScanHostiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GA_ScanHostiles, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GA_ScanHostiles, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_EnemyShipClass = { "EnemyShipClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GA_ScanHostiles, EnemyShipClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseShip_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyShipClass_MetaData), NewProp_EnemyShipClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_ScanSound = { "ScanSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNative_GA_ScanHostiles, ScanSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanSound_MetaData), NewProp_ScanSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_EnemyShipClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::NewProp_ScanSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayerGABase,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::ClassParams = {
	&UNative_GA_ScanHostiles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::Class_MetaDataParams), Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNative_GA_ScanHostiles()
{
	if (!Z_Registration_Info_UClass_UNative_GA_ScanHostiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNative_GA_ScanHostiles.OuterSingleton, Z_Construct_UClass_UNative_GA_ScanHostiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNative_GA_ScanHostiles.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UNative_GA_ScanHostiles>()
{
	return UNative_GA_ScanHostiles::StaticClass();
}
UNative_GA_ScanHostiles::UNative_GA_ScanHostiles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNative_GA_ScanHostiles);
UNative_GA_ScanHostiles::~UNative_GA_ScanHostiles() {}
// End Class UNative_GA_ScanHostiles

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_ScanHostiles_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNative_GA_ScanHostiles, UNative_GA_ScanHostiles::StaticClass, TEXT("UNative_GA_ScanHostiles"), &Z_Registration_Info_UClass_UNative_GA_ScanHostiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNative_GA_ScanHostiles), 3244381935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_ScanHostiles_h_2695790791(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_ScanHostiles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_Player_Native_GA_ScanHostiles_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
