// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarshipSimulator_init() {}
	STARSHIPSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_StarshipSimulator_OnDamageReceived__DelegateSignature();
	STARSHIPSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_StarshipSimulator_OnHealthChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StarshipSimulator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StarshipSimulator()
	{
		if (!Z_Registration_Info_UPackage__Script_StarshipSimulator.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_StarshipSimulator_OnDamageReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StarshipSimulator_OnHealthChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StarshipSimulator",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCAB118AD,
				0xED182698,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StarshipSimulator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StarshipSimulator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StarshipSimulator(Z_Construct_UPackage__Script_StarshipSimulator, TEXT("/Script/StarshipSimulator"), Z_Registration_Info_UPackage__Script_StarshipSimulator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCAB118AD, 0xED182698));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
