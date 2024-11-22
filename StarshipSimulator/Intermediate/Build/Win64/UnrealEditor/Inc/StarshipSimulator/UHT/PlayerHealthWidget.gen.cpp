// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/UI/PlayerHealthWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHealthWidget() {}

// Begin Cross Module References
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerHealthWidget();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerHealthWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UPlayerHealthWidget Function UpdateHealthUI
struct PlayerHealthWidget_eventUpdateHealthUI_Parms
{
	float NewHealthPercent;
	float CurrentHealth;
	float MaxHealth;
};
static FName NAME_UPlayerHealthWidget_UpdateHealthUI = FName(TEXT("UpdateHealthUI"));
void UPlayerHealthWidget::UpdateHealthUI(float NewHealthPercent, float CurrentHealth, float MaxHealth)
{
	PlayerHealthWidget_eventUpdateHealthUI_Parms Parms;
	Parms.NewHealthPercent=NewHealthPercent;
	Parms.CurrentHealth=CurrentHealth;
	Parms.MaxHealth=MaxHealth;
	ProcessEvent(FindFunctionChecked(NAME_UPlayerHealthWidget_UpdateHealthUI),&Parms);
}
struct Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DelegateFunction|Health" },
		{ "ModuleRelativePath", "Public/UI/PlayerHealthWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::NewProp_NewHealthPercent = { "NewHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHealthWidget_eventUpdateHealthUI_Parms, NewHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHealthWidget_eventUpdateHealthUI_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHealthWidget_eventUpdateHealthUI_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::NewProp_NewHealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHealthWidget, nullptr, "UpdateHealthUI", nullptr, nullptr, Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::PropPointers), sizeof(PlayerHealthWidget_eventUpdateHealthUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerHealthWidget_eventUpdateHealthUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPlayerHealthWidget Function UpdateHealthUI

// Begin Class UPlayerHealthWidget
void UPlayerHealthWidget::StaticRegisterNativesUPlayerHealthWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHealthWidget);
UClass* Z_Construct_UClass_UPlayerHealthWidget_NoRegister()
{
	return UPlayerHealthWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerHealthWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PlayerHealthWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerHealthWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHealthWidget_UpdateHealthUI, "UpdateHealthUI" }, // 2091626853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHealthWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerHealthWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHealthWidget_Statics::ClassParams = {
	&UPlayerHealthWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHealthWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerHealthWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerHealthWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHealthWidget.OuterSingleton, Z_Construct_UClass_UPlayerHealthWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerHealthWidget.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UPlayerHealthWidget>()
{
	return UPlayerHealthWidget::StaticClass();
}
UPlayerHealthWidget::UPlayerHealthWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHealthWidget);
UPlayerHealthWidget::~UPlayerHealthWidget() {}
// End Class UPlayerHealthWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_PlayerHealthWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHealthWidget, UPlayerHealthWidget::StaticClass, TEXT("UPlayerHealthWidget"), &Z_Registration_Info_UClass_UPlayerHealthWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHealthWidget), 4283910422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_PlayerHealthWidget_h_194336555(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_PlayerHealthWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_PlayerHealthWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
