// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarshipSimulator/Public/UI/BaseHealthWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseHealthWidget() {}

// Begin Cross Module References
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseHealthWidget();
STARSHIPSIMULATOR_API UClass* Z_Construct_UClass_UBaseHealthWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_StarshipSimulator();
// End Cross Module References

// Begin Class UBaseHealthWidget
void UBaseHealthWidget::StaticRegisterNativesUBaseHealthWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseHealthWidget);
UClass* Z_Construct_UClass_UBaseHealthWidget_NoRegister()
{
	return UBaseHealthWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseHealthWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/BaseHealthWidget.h" },
		{ "ModuleRelativePath", "Public/UI/BaseHealthWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseHealthWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseHealthWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StarshipSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHealthWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseHealthWidget_Statics::ClassParams = {
	&UBaseHealthWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHealthWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseHealthWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseHealthWidget()
{
	if (!Z_Registration_Info_UClass_UBaseHealthWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseHealthWidget.OuterSingleton, Z_Construct_UClass_UBaseHealthWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseHealthWidget.OuterSingleton;
}
template<> STARSHIPSIMULATOR_API UClass* StaticClass<UBaseHealthWidget>()
{
	return UBaseHealthWidget::StaticClass();
}
UBaseHealthWidget::UBaseHealthWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseHealthWidget);
UBaseHealthWidget::~UBaseHealthWidget() {}
// End Class UBaseHealthWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_BaseHealthWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseHealthWidget, UBaseHealthWidget::StaticClass, TEXT("UBaseHealthWidget"), &Z_Registration_Info_UClass_UBaseHealthWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseHealthWidget), 1644035558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_BaseHealthWidget_h_4246765556(TEXT("/Script/StarshipSimulator"),
	Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_BaseHealthWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_UI_BaseHealthWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
