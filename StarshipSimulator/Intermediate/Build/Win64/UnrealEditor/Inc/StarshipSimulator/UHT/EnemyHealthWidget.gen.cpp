// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/EnemyHealthWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHealthWidget() {}

// Begin Cross Module References
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UEnemyHealthWidget();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UEnemyHealthWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UEnemyHealthWidget
void UEnemyHealthWidget::StaticRegisterNativesUEnemyHealthWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyHealthWidget);
UClass* Z_Construct_UClass_UEnemyHealthWidget_NoRegister()
{
	return UEnemyHealthWidget::StaticClass();
}
struct Z_Construct_UClass_UEnemyHealthWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyHealthWidget.h" },
		{ "ModuleRelativePath", "Public/EnemyHealthWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyHealthWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyHealthWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyHealthWidget_Statics::ClassParams = {
	&UEnemyHealthWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyHealthWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyHealthWidget()
{
	if (!Z_Registration_Info_UClass_UEnemyHealthWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyHealthWidget.OuterSingleton, Z_Construct_UClass_UEnemyHealthWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyHealthWidget.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UEnemyHealthWidget>()
{
	return UEnemyHealthWidget::StaticClass();
}
UEnemyHealthWidget::UEnemyHealthWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyHealthWidget);
UEnemyHealthWidget::~UEnemyHealthWidget() {}
// End Class UEnemyHealthWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyHealthWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyHealthWidget, UEnemyHealthWidget::StaticClass, TEXT("UEnemyHealthWidget"), &Z_Registration_Info_UClass_UEnemyHealthWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyHealthWidget), 3642442827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyHealthWidget_h_1674836790(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyHealthWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyHealthWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
