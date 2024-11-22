// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability/GameplayAbilities/BaseGameplayAbility.h"
#include "Native_GAMissile.generated.h"

class AMissile;
class UGameplayEffect;

UCLASS()
class STARSHIPSIMULATOR_API UNative_GAMissile : public UBaseGameplayAbility
{
	GENERATED_BODY()
public:
	virtual void InitiateAbility() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Abilities|Projectile")
	TSubclassOf<AMissile> Missile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Projectile")
	TSubclassOf<UGameplayEffect> DamageGE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Projectile")
	float BaseDamage = 50.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Projectile")
	float DistanceThreshold = 1000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Projectile")
	float OverlapRadius = 3000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Projectile")
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	UPROPERTY()
	AActor* LockedTarget;
	UPROPERTY()
	AMissile* SpawnedMissile;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION()
	void OnGameplayEventReceived(FGameplayEventData Payload);
};
