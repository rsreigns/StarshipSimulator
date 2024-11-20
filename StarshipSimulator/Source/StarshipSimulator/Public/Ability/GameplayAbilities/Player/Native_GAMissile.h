// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability/GameplayAbilities/PlayerGABase.h"
#include "Native_GAMissile.generated.h"

class AMissile;
class UGameplayEffect;

UCLASS()
class STARSHIPSIMULATOR_API UNative_GAMissile : public UPlayerGABase
{
	GENERATED_BODY()
public:
	virtual void InitiateAbility() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Abilities|Projectile")
	TSubclassOf<AMissile> Missile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Projectile")
	TSubclassOf<UGameplayEffect> DamageGE;

	UPROPERTY()
	AActor* LockedTarget;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION()
	void OnGameplayEventReceived(FGameplayEventData Payload);
};
