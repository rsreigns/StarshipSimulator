// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerShipBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARSHIPSIMULATOR_PlayerShipBase_generated_h
#error "PlayerShipBase.generated.h already included, missing '#pragma once' in PlayerShipBase.h"
#endif
#define STARSHIPSIMULATOR_PlayerShipBase_generated_h

#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShipBase(); \
	friend struct Z_Construct_UClass_APlayerShipBase_Statics; \
public: \
	DECLARE_CLASS(APlayerShipBase, ABaseShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarshipSimulator"), NO_API) \
	DECLARE_SERIALIZER(APlayerShipBase) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerShipBase*>(this); }


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerShipBase(APlayerShipBase&&); \
	APlayerShipBase(const APlayerShipBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShipBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShipBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShipBase) \
	NO_API virtual ~APlayerShipBase();


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_21_PROLOG
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARSHIPSIMULATOR_API UClass* StaticClass<class APlayerShipBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_PlayerShipBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
