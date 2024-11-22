// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyHealthWidget.generated.h"

class ABaseShip;

UCLASS()
class STARSHIPSIMULATOR_API UEnemyHealthWidget : public UUserWidget
{
	GENERATED_BODY()	
public:
	virtual void NativeConstruct() override;


};
