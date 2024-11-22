// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "EnemyShipBase.generated.h"

/**
 * 
 */
UCLASS()
class STARSHIPSIMULATOR_API AEnemyShipBase : public ABaseShip
{
	GENERATED_BODY()
public:
	AEnemyShipBase();
	

	virtual void DestroyShip()override;
	UFUNCTION(BlueprintImplementableEvent)
	void ShowWidget();

	UFUNCTION(BlueprintImplementableEvent, Category = "DelegateFunction|Health")
	void UpdateHealthUI(float NewHealthPercent, float CurrentHealth, float MaxHealth);
};
