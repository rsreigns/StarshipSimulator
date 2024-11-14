// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability/BaseASC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARSHIPSIMULATOR_BaseASC_generated_h
#error "BaseASC.generated.h already included, missing '#pragma once' in BaseASC.h"
#endif
#define STARSHIPSIMULATOR_BaseASC_generated_h

#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseASC_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseASC(); \
	friend struct Z_Construct_UClass_UBaseASC_Statics; \
public: \
	DECLARE_CLASS(UBaseASC, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarshipSimulator"), NO_API) \
	DECLARE_SERIALIZER(UBaseASC)


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseASC_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseASC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseASC(UBaseASC&&); \
	UBaseASC(const UBaseASC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseASC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseASC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseASC) \
	NO_API virtual ~UBaseASC();


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseASC_h_12_PROLOG
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseASC_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseASC_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseASC_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARSHIPSIMULATOR_API UClass* StaticClass<class UBaseASC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Ability_BaseASC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
