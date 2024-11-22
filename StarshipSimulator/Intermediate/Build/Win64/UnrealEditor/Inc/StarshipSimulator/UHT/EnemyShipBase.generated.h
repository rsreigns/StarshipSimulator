// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyShips/EnemyShipBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARSHIPSIMULATOR_EnemyShipBase_generated_h
#error "EnemyShipBase.generated.h already included, missing '#pragma once' in EnemyShipBase.h"
#endif
#define STARSHIPSIMULATOR_EnemyShipBase_generated_h

#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_15_CALLBACK_WRAPPERS
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyShipBase(); \
	friend struct Z_Construct_UClass_AEnemyShipBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyShipBase, ABaseShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarshipSimulator"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShipBase)


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyShipBase(AEnemyShipBase&&); \
	AEnemyShipBase(const AEnemyShipBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShipBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShipBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyShipBase) \
	NO_API virtual ~AEnemyShipBase();


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_12_PROLOG
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_15_CALLBACK_WRAPPERS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARSHIPSIMULATOR_API UClass* StaticClass<class AEnemyShipBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_EnemyShips_EnemyShipBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
