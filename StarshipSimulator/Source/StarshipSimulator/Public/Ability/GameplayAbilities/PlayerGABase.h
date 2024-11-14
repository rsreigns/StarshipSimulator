// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability/GameplayAbilities/BaseGameplayAbility.h"
#include "PlayerGABase.generated.h"
class APlayerShipBase;

UCLASS()
class STARSHIPSIMULATOR_API UPlayerGABase : public UBaseGameplayAbility
{
	GENERATED_BODY()
public:
	APlayerShipBase* GetPlayerPawn() const;

	virtual void InitiateAbility() override;
	
};
