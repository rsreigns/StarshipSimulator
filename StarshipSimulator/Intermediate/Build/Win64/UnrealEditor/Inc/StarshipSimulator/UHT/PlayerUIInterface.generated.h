// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PlayerUIInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARSHIPSIMULATOR_PlayerUIInterface_generated_h
#error "PlayerUIInterface.generated.h already included, missing '#pragma once' in PlayerUIInterface.h"
#endif
#define STARSHIPSIMULATOR_PlayerUIInterface_generated_h

#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARSHIPSIMULATOR_API UPlayerUIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerUIInterface(UPlayerUIInterface&&); \
	UPlayerUIInterface(const UPlayerUIInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARSHIPSIMULATOR_API, UPlayerUIInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerUIInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerUIInterface) \
	STARSHIPSIMULATOR_API virtual ~UPlayerUIInterface();


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerUIInterface(); \
	friend struct Z_Construct_UClass_UPlayerUIInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerUIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StarshipSimulator"), STARSHIPSIMULATOR_API) \
	DECLARE_SERIALIZER(UPlayerUIInterface)


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerUIInterface() {} \
public: \
	typedef UPlayerUIInterface UClassType; \
	typedef IPlayerUIInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_10_PROLOG
#define FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARSHIPSIMULATOR_API UClass* StaticClass<class UPlayerUIInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_StarshipSimulator_StarshipSimulator_Source_StarshipSimulator_Public_Interface_PlayerUIInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
