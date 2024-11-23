// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "EnemyShipBase.generated.h"

class UWidgetComponent;

UCLASS()
class STARSHIPSIMULATOR_API AEnemyShipBase : public ABaseShip
{
	GENERATED_BODY()
public:
	AEnemyShipBase();
#pragma region Components
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UWidgetComponent* WidgetComp;

#pragma endregion
	

	virtual void DestroyShip()override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnDestroyedShip();

	UFUNCTION(BlueprintImplementableEvent)
	void ShowWidget();

	UFUNCTION(BlueprintImplementableEvent, Category = "DelegateFunction|Health")
	void UpdateHealthUI(float NewHealthPercent, float CurrentHealth, float MaxHealthValue);
	UFUNCTION(BlueprintImplementableEvent)
	void BP_ToggleOffTargetWidget();

#pragma region Getters

	UFUNCTION(BlueprintPure,BlueprintCallable)
	UWidgetComponent* GetWidgetComp() const { return WidgetComp; }

#pragma endregion
};
