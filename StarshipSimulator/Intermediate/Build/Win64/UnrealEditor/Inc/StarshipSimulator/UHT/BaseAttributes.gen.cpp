// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Ability/BaseAttributes.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttributes() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseAttributes();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UBaseAttributes
void UBaseAttributes::StaticRegisterNativesUBaseAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAttributes);
UClass* Z_Construct_UClass_UBaseAttributes_NoRegister()
{
	return UBaseAttributes::StaticClass();
}
struct Z_Construct_UClass_UBaseAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ability/BaseAttributes.h" },
		{ "ModuleRelativePath", "Public/Ability/BaseAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Ability/BaseAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Ability/BaseAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/Ability/BaseAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/Ability/BaseAttributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributes_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributes, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributes_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributes, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributes_Statics::NewProp_Shield = { "Shield", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributes, Shield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shield_MetaData), NewProp_Shield_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributes_Statics::NewProp_MaxShield = { "MaxShield", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributes, MaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShield_MetaData), NewProp_MaxShield_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributes_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributes_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributes_Statics::NewProp_Shield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributes_Statics::NewProp_MaxShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributes_Statics::ClassParams = {
	&UBaseAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributes_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAttributes()
{
	if (!Z_Registration_Info_UClass_UBaseAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributes.OuterSingleton, Z_Construct_UClass_UBaseAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributes.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UBaseAttributes>()
{
	return UBaseAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttributes);
UBaseAttributes::~UBaseAttributes() {}
// End Class UBaseAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributes, UBaseAttributes::StaticClass, TEXT("UBaseAttributes"), &Z_Registration_Info_UClass_UBaseAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributes), 3569966281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_2942631144(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
