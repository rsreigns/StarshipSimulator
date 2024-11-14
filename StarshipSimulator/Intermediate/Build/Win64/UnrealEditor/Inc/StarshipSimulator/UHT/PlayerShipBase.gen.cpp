// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/PlayerShipBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShipBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_ABaseShip();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_APlayerShipBase();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_APlayerShipBase_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerUIInterface_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class APlayerShipBase
void APlayerShipBase::StaticRegisterNativesAPlayerShipBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerShipBase);
UClass* Z_Construct_UClass_APlayerShipBase_NoRegister()
{
	return APlayerShipBase::StaticClass();
}
struct Z_Construct_UClass_APlayerShipBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerShipBase.h" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[] = {
		{ "Category", "Ship|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Mapping\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Ship|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Inut Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inut Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Ship|Input" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchCamAction_MetaData[] = {
		{ "Category", "Ship|Input" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissileAbility_MetaData[] = {
		{ "Category", "Ship|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Abilities\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Ship|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ship Defaults\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ship Defaults" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyController_MetaData[] = {
		{ "Category", "PlayerShipBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchCamAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissileAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShipBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, Widget), Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputContext_MetaData), NewProp_InputContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SwitchCamAction = { "SwitchCamAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, SwitchCamAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchCamAction_MetaData), NewProp_SwitchCamAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_MissileAbility = { "MissileAbility", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, MissileAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissileAbility_MetaData), NewProp_MissileAbility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_MyController = { "MyController", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, MyController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyController_MetaData), NewProp_MyController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerShipBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SwitchCamAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_MissileAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_MyController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShipBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerShipBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseShip,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShipBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerShipBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerUIInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerShipBase, IPlayerUIInterface), false },  // 2097177539
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerShipBase_Statics::ClassParams = {
	&APlayerShipBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerShipBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShipBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShipBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerShipBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerShipBase()
{
	if (!Z_Registration_Info_UClass_APlayerShipBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerShipBase.OuterSingleton, Z_Construct_UClass_APlayerShipBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerShipBase.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<APlayerShipBase>()
{
	return APlayerShipBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShipBase);
APlayerShipBase::~APlayerShipBase() {}
// End Class APlayerShipBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerShipBase, APlayerShipBase::StaticClass, TEXT("APlayerShipBase"), &Z_Registration_Info_UClass_APlayerShipBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerShipBase), 1507126417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_4051362725(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS