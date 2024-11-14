// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Missile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef STARSHIPSIMULATOR_Missile_generated_h
#error "Missile.generated.h already included, missing '#pragma once' in Missile.h"
#endif
#define STARSHIPSIMULATOR_Missile_generated_h

#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarshipSimulator"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMissile(AMissile&&); \
	AMissile(const AMissile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMissile) \
	NO_API virtual ~AMissile();


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_17_PROLOG
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_20_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARSHIPSIMULATOR_API UClass* StaticClass<class AMissile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Actors_Missile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
