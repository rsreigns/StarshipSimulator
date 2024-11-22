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

// Begin Class AEnemyShipBase Function ShowWidget
static FName NAME_AEnemyShipBase_ShowWidget = FName(TEXT("ShowWidget"));
void AEnemyShipBase::ShowWidget()
{
	ProcessEvent(FindFunctionChecked(NAME_AEnemyShipBase_ShowWidget),NULL);
}
struct Z_Construct_UFunction_AEnemyShipBase_ShowWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyShips/EnemyShipBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyShipBase_ShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyShipBase, nullptr, "ShowWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyShipBase_ShowWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyShipBase_ShowWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyShipBase_ShowWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyShipBase_ShowWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AEnemyShipBase Function ShowWidget

// Begin Class AEnemyShipBase Function UpdateHealthUI
struct EnemyShipBase_eventUpdateHealthUI_Parms
{
	float NewHealthPercent;
	float CurrentHealth;
	float MaxHealth;
};
static FName NAME_AEnemyShipBase_UpdateHealthUI = FName(TEXT("UpdateHealthUI"));
void AEnemyShipBase::UpdateHealthUI(float NewHealthPercent, float CurrentHealth, float MaxHealth)
{
	EnemyShipBase_eventUpdateHealthUI_Parms Parms;
	Parms.NewHealthPercent=NewHealthPercent;
	Parms.CurrentHealth=CurrentHealth;
	Parms.MaxHealth=MaxHealth;
	ProcessEvent(FindFunctionChecked(NAME_AEnemyShipBase_UpdateHealthUI),&Parms);
}
struct Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DelegateFunction|Health" },
		{ "ModuleRelativePath", "Public/EnemyShips/EnemyShipBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::NewProp_NewHealthPercent = { "NewHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyShipBase_eventUpdateHealthUI_Parms, NewHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyShipBase_eventUpdateHealthUI_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyShipBase_eventUpdateHealthUI_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::NewProp_NewHealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyShipBase, nullptr, "UpdateHealthUI", nullptr, nullptr, Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::PropPointers), sizeof(EnemyShipBase_eventUpdateHealthUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnemyShipBase_eventUpdateHealthUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AEnemyShipBase Function UpdateHealthUI

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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyShipBase_ShowWidget, "ShowWidget" }, // 1046358338
		{ &Z_Construct_UFunction_AEnemyShipBase_UpdateHealthUI, "UpdateHealthUI" }, // 2627881136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEnemyShipBase, AEnemyShipBase::StaticClass, TEXT("AEnemyShipBase"), &Z_Registration_Info_UClass_AEnemyShipBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyShipBase), 4036223616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_4186229703(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
