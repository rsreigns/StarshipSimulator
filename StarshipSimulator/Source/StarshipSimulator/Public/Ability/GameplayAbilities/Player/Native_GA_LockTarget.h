// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability/GameplayAbilities/PlayerGABase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Native_GA_LockTarget.generated.h"

/**
 * 
 */
UCLASS()
class STARSHIPSIMULATOR_API UNative_GA_LockTarget : public UPlayerGABase
{
	GENERATED_BODY()
public:
	virtual void InitiateAbility() override;
	FHitResult DoSphereTrace(const FVector Start, const FVector End, bool bShowDebug);
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Abilities|TargetLock")
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Abilities|TargetLock")
	float SphereRadius = 10.f;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Abilities|TargetLock")
	float TargetLockDistance = 2000.f;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Abilities|TargetLock")
	bool bShouldShowDebug = false;

};
