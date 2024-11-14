// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability/GameplayAbilities/PlayerGABase.h"
#include "Native_GAMissile.generated.h"

class AMissile;

UCLASS()
class STARSHIPSIMULATOR_API UNative_GAMissile : public UPlayerGABase
{
	GENERATED_BODY()
public:
	virtual void InitiateAbility() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Abilities|Projectile")
	TSubclassOf<AMissile> Missile;
};
