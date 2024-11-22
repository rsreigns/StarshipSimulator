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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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

// Begin Class APlayerShipBase Function BP_OnShipDestroyed
static FName NAME_APlayerShipBase_BP_OnShipDestroyed = FName(TEXT("BP_OnShipDestroyed"));
void APlayerShipBase::BP_OnShipDestroyed()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerShipBase_BP_OnShipDestroyed),NULL);
}
struct Z_Construct_UFunction_APlayerShipBase_BP_OnShipDestroyed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShipBase_BP_OnShipDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShipBase, nullptr, "BP_OnShipDestroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_BP_OnShipDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerShipBase_BP_OnShipDestroyed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerShipBase_BP_OnShipDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShipBase_BP_OnShipDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APlayerShipBase Function BP_OnShipDestroyed

// Begin Class APlayerShipBase Function GetCamera
struct Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics
{
	struct PlayerShipBase_eventGetCamera_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Defaults" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerShipBase_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShipBase, nullptr, "GetCamera", nullptr, nullptr, Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::PlayerShipBase_eventGetCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::PlayerShipBase_eventGetCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerShipBase_GetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShipBase_GetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerShipBase::execGetCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetCamera();
	P_NATIVE_END;
}
// End Class APlayerShipBase Function GetCamera

// Begin Class APlayerShipBase Function GetInteriorMesh
struct Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics
{
	struct PlayerShipBase_eventGetInteriorMesh_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Defaults" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerShipBase_eventGetInteriorMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShipBase, nullptr, "GetInteriorMesh", nullptr, nullptr, Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::PlayerShipBase_eventGetInteriorMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::PlayerShipBase_eventGetInteriorMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerShipBase::execGetInteriorMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetInteriorMesh();
	P_NATIVE_END;
}
// End Class APlayerShipBase Function GetInteriorMesh

// Begin Class APlayerShipBase Function GetPlayerWidget
struct Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics
{
	struct PlayerShipBase_eventGetPlayerWidget_Parms
	{
		UPlayerWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Defaults" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerShipBase_eventGetPlayerWidget_Parms, ReturnValue), Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShipBase, nullptr, "GetPlayerWidget", nullptr, nullptr, Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::PlayerShipBase_eventGetPlayerWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::PlayerShipBase_eventGetPlayerWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerShipBase::execGetPlayerWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerWidget**)Z_Param__Result=P_THIS->GetPlayerWidget();
	P_NATIVE_END;
}
// End Class APlayerShipBase Function GetPlayerWidget

// Begin Class APlayerShipBase Function GetSpringArm
struct Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics
{
	struct PlayerShipBase_eventGetSpringArm_Parms
	{
		USpringArmComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Defaults" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerShipBase_eventGetSpringArm_Parms, ReturnValue), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShipBase, nullptr, "GetSpringArm", nullptr, nullptr, Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::PlayerShipBase_eventGetSpringArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::PlayerShipBase_eventGetSpringArm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerShipBase_GetSpringArm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShipBase_GetSpringArm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerShipBase::execGetSpringArm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpringArmComponent**)Z_Param__Result=P_THIS->GetSpringArm();
	P_NATIVE_END;
}
// End Class APlayerShipBase Function GetSpringArm

// Begin Class APlayerShipBase
void APlayerShipBase::StaticRegisterNativesAPlayerShipBase()
{
	UClass* Class = APlayerShipBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCamera", &APlayerShipBase::execGetCamera },
		{ "GetInteriorMesh", &APlayerShipBase::execGetInteriorMesh },
		{ "GetPlayerWidget", &APlayerShipBase::execGetPlayerWidget },
		{ "GetSpringArm", &APlayerShipBase::execGetSpringArm },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamDistance_MetaData[] = {
		{ "Category", "Ship|Camera" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenCamLocation_MetaData[] = {
		{ "Category", "Ship|Camera" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCamLocation_MetaData[] = {
		{ "Category", "Ship|Camera" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamZOffset_MetaData[] = {
		{ "Category", "Ship|Camera" },
		{ "ModuleRelativePath", "Public/PlayerShipBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCamIndex_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteriorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchCamAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissileAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackCamDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenCamLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCamLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackCamZOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCamIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerShipBase_BP_OnShipDestroyed, "BP_OnShipDestroyed" }, // 3361340738
		{ &Z_Construct_UFunction_APlayerShipBase_GetCamera, "GetCamera" }, // 2315081887
		{ &Z_Construct_UFunction_APlayerShipBase_GetInteriorMesh, "GetInteriorMesh" }, // 598672400
		{ &Z_Construct_UFunction_APlayerShipBase_GetPlayerWidget, "GetPlayerWidget" }, // 1403639746
		{ &Z_Construct_UFunction_APlayerShipBase_GetSpringArm, "GetSpringArm" }, // 2348761998
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShipBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InteriorMesh = { "InteriorMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, InteriorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorMesh_MetaData), NewProp_InteriorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, Widget), Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputContext_MetaData), NewProp_InputContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SwitchCamAction = { "SwitchCamAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, SwitchCamAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchCamAction_MetaData), NewProp_SwitchCamAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_MissileAbility = { "MissileAbility", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, MissileAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissileAbility_MetaData), NewProp_MissileAbility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_BackCamDistance = { "BackCamDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, BackCamDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamDistance_MetaData), NewProp_BackCamDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_ScreenCamLocation = { "ScreenCamLocation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, ScreenCamLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenCamLocation_MetaData), NewProp_ScreenCamLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_DefaultCamLocation = { "DefaultCamLocation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, DefaultCamLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCamLocation_MetaData), NewProp_DefaultCamLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_BackCamZOffset = { "BackCamZOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, BackCamZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamZOffset_MetaData), NewProp_BackCamZOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerShipBase_Statics::NewProp_CurrentCamIndex = { "CurrentCamIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerShipBase, CurrentCamIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCamIndex_MetaData), NewProp_CurrentCamIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerShipBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InteriorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SwitchCamAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_MissileAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_BackCamDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_ScreenCamLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_DefaultCamLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_BackCamZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShipBase_Statics::NewProp_CurrentCamIndex,
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
	FuncInfo,
	Z_Construct_UClass_APlayerShipBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_APlayerShipBase, APlayerShipBase::StaticClass, TEXT("APlayerShipBase"), &Z_Registration_Info_UClass_APlayerShipBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerShipBase), 3229100698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_1907073786(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
