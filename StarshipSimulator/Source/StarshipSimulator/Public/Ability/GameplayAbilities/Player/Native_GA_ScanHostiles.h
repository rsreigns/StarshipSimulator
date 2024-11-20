// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability/GameplayAbilities/PlayerGABase.h"
#include "Native_GA_ScanHostiles.generated.h"

class ABaseShip;
class USoundBase;

UCLASS()
class STARSHIPSIMULATOR_API UNative_GA_ScanHostiles : public UPlayerGABase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Ability|Scan")
	float SphereRadius = 500.f;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Ability|Scan")
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Ability|Scan")
	TSubclassOf<ABaseShip> EnemyShipClass;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Ability|Scan")
	USoundBase* ScanSound;
	
	virtual void InitiateAbility() override;
	
};
