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
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_ABaseShip();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_ABaseShip_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseASC_NoRegister();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class ABaseShip
void ABaseShip::StaticRegisterNativesABaseShip()
{
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShipMesh_MetaData), NewProp_ShipMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseASC = { "BaseASC", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, BaseASC), Z_Construct_UClass_UBaseASC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseASC_MetaData), NewProp_BaseASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseAttributes = { "BaseAttributes", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseShip, BaseAttributes), Z_Construct_UClass_UBaseAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAttributes_MetaData), NewProp_BaseAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseShip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_ShipMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseShip_Statics::NewProp_BaseAttributes,
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
	nullptr,
	Z_Construct_UClass_ABaseShip_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_ABaseShip, ABaseShip::StaticClass, TEXT("ABaseShip"), &Z_Registration_Info_UClass_ABaseShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseShip), 3417236582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_BaseShip_h_584361894(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_BaseShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_BaseShip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
