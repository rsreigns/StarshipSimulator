// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/BaseShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseShip() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_ABaseShip();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_ABaseShip_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseASC_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class ABaseShip Function GetBaseASC
struct Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics
{
	struct BaseShip_eventGetBaseASC_Parms
	{
		UBaseASC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ship|Defaults" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseShip_eventGetBaseASC_Parms, ReturnValue), Z_Construct_UClass_UBaseASC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShip, nullptr, "GetBaseASC", nullptr, nullptr, Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::BaseShip_eventGetBaseASC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::BaseShip_eventGetBaseASC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseShip_GetBaseASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShip_GetBaseASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseShip::execGetBaseASC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseASC**)Z_Param__Result=P_THIS->GetBaseASC();
	P_NATIVE_END;
}
// End Class ABaseShip Function GetBaseASC

// Begin Class ABaseShip Function GetBaseAttributeSet
struct Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics
{
	struct BaseShip_eventGetBaseAttributeSet_Parms
	{
		UBaseAttributes* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ship|Defaults" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseShip_eventGetBaseAttributeSet_Parms, ReturnValue), Z_Construct_UClass_UBaseAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShip, nullptr, "GetBaseAttributeSet", nullptr, nullptr, Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::BaseShip_eventGetBaseAttributeSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::BaseShip_eventGetBaseAttributeSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseShip::execGetBaseAttributeSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseAttributes**)Z_Param__Result=P_THIS->GetBaseAttributeSet();
	P_NATIVE_END;
}
// End Class ABaseShip Function GetBaseAttributeSet

// Begin Class ABaseShip Function GetMissileSocket
struct Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics
{
	struct BaseShip_eventGetMissileSocket_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ship|Defaults" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseShip_eventGetMissileSocket_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShip, nullptr, "GetMissileSocket", nullptr, nullptr, Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::BaseShip_eventGetMissileSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::BaseShip_eventGetMissileSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseShip_GetMissileSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShip_GetMissileSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseShip::execGetMissileSocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetMissileSocket();
	P_NATIVE_END;
}
// End Class ABaseShip Function GetMissileSocket

// Begin Class ABaseShip Function GetShipMesh
struct Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics
{
	struct BaseShip_eventGetShipMesh_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ship|Defaults" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseShip_eventGetShipMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseShip, nullptr, "GetShipMesh", nullptr, nullptr, Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::BaseShip_eventGetShipMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::BaseShip_eventGetShipMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseShip_GetShipMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseShip_GetShipMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseShip::execGetShipMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetShipMesh();
	P_NATIVE_END;
}
// End Class ABaseShip Function GetShipMesh

// Begin Class ABaseShip
void ABaseShip::StaticRegisterNativesABaseShip()
{
	UClass* Class = ABaseShip::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBaseASC", &ABaseShip::execGetBaseASC },
		{ "GetBaseAttributeSet", &ABaseShip::execGetBaseAttributeSet },
		{ "GetMissileSocket", &ABaseShip::execGetMissileSocket },
		{ "GetShipMesh", &ABaseShip::execGetShipMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseShip);
UClass* Z_Construct_UClass_ABaseShip_NoRegister()
{
	return ABaseShip::StaticClass();
}
struct Z_Construct_UClass_ABaseShip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseShip.h" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseASC_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttributes_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissileSocket_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockedActor_MetaData[] = {
		{ "Category", "AI|Target" },
		{ "ModuleRelativePath", "Public/BaseShip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAttributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissileSocket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseShip_GetBaseASC, "GetBaseASC" }, // 606101703
		{ &Z_Construct_UFunction_ABaseShip_GetBaseAttributeSet, "GetBaseAttributeSet" }, // 2894021511
		{ &Z_Construct_UFunction_ABaseShip_GetMissileSocket, "GetMissileSocket" }, // 1133996612
		{ &Z_Construct_UFunction_ABaseShip_GetShipMesh, "GetShipMesh" }, // 2613389024
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShipMesh_MetaData), NewProp_ShipMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseASC = { "BaseASC", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, BaseASC), Z_Construct_UClass_UBaseASC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseASC_MetaData), NewProp_BaseASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseAttributes = { "BaseAttributes", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, BaseAttributes), Z_Construct_UClass_UBaseAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAttributes_MetaData), NewProp_BaseAttributes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_MissileSocket = { "MissileSocket", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, MissileSocket), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissileSocket_MetaData), NewProp_MissileSocket_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_TargetLockedActor = { "TargetLockedActor", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, TargetLockedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockedActor_MetaData), NewProp_TargetLockedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseShip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_ShipMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_MissileSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_TargetLockedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseShip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseShip_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseShip, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseShip_Statics::ClassParams = {
	&ABaseShip::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseShip_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseShip_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseShip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseShip()
{
	if (!Z_Registration_Info_UClass_ABaseShip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseShip.OuterSingleton, Z_Construct_UClass_ABaseShip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseShip.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<ABaseShip>()
{
	return ABaseShip::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseShip);
ABaseShip::~ABaseShip() {}
// End Class ABaseShip

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_BaseShip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseShip, ABaseShip::StaticClass, TEXT("ABaseShip"), &Z_Registration_Info_UClass_ABaseShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseShip), 409891374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_BaseShip_h_4202764387(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_BaseShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_BaseShip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
