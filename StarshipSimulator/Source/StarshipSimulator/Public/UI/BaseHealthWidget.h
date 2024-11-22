// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseHealthWidget.generated.h"

/**
 * 
 */
UCLASS()
class STARSHIPSIMULATOR_API UBaseHealthWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;
};
