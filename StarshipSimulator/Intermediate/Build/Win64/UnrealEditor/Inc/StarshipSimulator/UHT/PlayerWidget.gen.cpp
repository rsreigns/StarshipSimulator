// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/Components/PlayerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWidget() {}

// Begin Cross Module References
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerWidget();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UPlayerWidget
void UPlayerWidget::StaticRegisterNativesUPlayerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerWidget);
UClass* Z_Construct_UClass_UPlayerWidget_NoRegister()
{
	return UPlayerWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Components/PlayerWidget.h" },
		{ "ModuleRelativePath", "Public/Components/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWidget_Statics::ClassParams = {
	&UPlayerWidget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton, Z_Construct_UClass_UPlayerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UPlayerWidget>()
{
	return UPlayerWidget::StaticClass();
}
UPlayerWidget::UPlayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWidget);
UPlayerWidget::~UPlayerWidget() {}
// End Class UPlayerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Components_PlayerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWidget, UPlayerWidget::StaticClass, TEXT("UPlayerWidget"), &Z_Registration_Info_UClass_UPlayerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidget), 1948935323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Components_PlayerWidget_h_3523769503(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Components_PlayerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Components_PlayerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
