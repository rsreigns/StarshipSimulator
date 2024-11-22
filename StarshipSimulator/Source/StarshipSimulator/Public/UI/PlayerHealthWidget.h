// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHealthWidget.generated.h"

/**
 * 
 */
UCLASS()
class STARSHIPSIMULATOR_API UPlayerHealthWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "DelegateFunction|Health")
	void UpdateHealthUI(float NewHealthPercent,float CurrentHealth,float MaxHealth);
};
