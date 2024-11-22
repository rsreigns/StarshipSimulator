// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "BaseGameplayAbility.generated.h"

class UBaseASC;
class ABaseShip;

UCLASS()
class STARSHIPSIMULATOR_API UBaseGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Ability")
	virtual void InitiateAbility() ;

	UBaseASC* GetBaseASCfromAI();

	ABaseShip* GetBaseShip();

	FActiveGameplayEffectHandle ApplyEffectSpecHandleToTarget(FGameplayEffectSpecHandle& SpecHandle, AActor* Target);
	FGameplayEffectSpecHandle MakeGESH(TSubclassOf<UGameplayEffect> Effect, float Magnitude);
};
