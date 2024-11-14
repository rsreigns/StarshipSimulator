// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability/GameplayAbilities/PlayerGABase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARSHIPSIMULATOR_PlayerGABase_generated_h
#error "PlayerGABase.generated.h already included, missing '#pragma once' in PlayerGABase.h"
#endif
#define STARSHIPSIMULATOR_PlayerGABase_generated_h

#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerGABase(); \
	friend struct Z_Construct_UClass_UPlayerGABase_Statics; \
public: \
	DECLARE_CLASS(UPlayerGABase, UBaseGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StarshipSimulator"), NO_API) \
	DECLARE_SERIALIZER(UPlayerGABase)


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerGABase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerGABase(UPlayerGABase&&); \
	UPlayerGABase(const UPlayerGABase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerGABase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerGABase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerGABase) \
	NO_API virtual ~UPlayerGABase();


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_10_PROLOG
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_13_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARSHIPSIMULATOR_API UClass* StaticClass<class UPlayerGABase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_GameplayAbilities_PlayerGABase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
