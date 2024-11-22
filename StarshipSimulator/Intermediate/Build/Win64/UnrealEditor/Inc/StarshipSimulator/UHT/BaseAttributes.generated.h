// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability/BaseAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARSHIPSIMULATOR_BaseAttributes_generated_h
#error "BaseAttributes.generated.h already included, missing '#pragma once' in BaseAttributes.h"
#endif
#define STARSHIPSIMULATOR_BaseAttributes_generated_h

#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_12_DELEGATE \
STARSHIPSIMULATOR_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealthPercent, float NewCurrentHealth, float MaxHealth);


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_13_DELEGATE \
STARSHIPSIMULATOR_API void FOnDamageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnDamageReceived);


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttributes(); \
	friend struct Z_Construct_UClass_UBaseAttributes_Statics; \
public: \
	DECLARE_CLASS(UBaseAttributes, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StarshipSimulator"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttributes)


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseAttributes(UBaseAttributes&&); \
	UBaseAttributes(const UBaseAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttributes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttributes) \
	NO_API virtual ~UBaseAttributes();


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_22_PROLOG
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_25_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARSHIPSIMULATOR_API UClass* StaticClass<class UBaseAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
