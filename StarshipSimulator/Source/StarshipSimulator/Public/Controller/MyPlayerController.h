// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "MyPlayerController.generated.h"

class AMyHUD;

UCLASS()
class STARSHIPSIMULATOR_API AMyPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
protected:

	virtual FGenericTeamId GetGenericTeamId() const override;
	virtual void BeginPlay() override;

public:
	//UPROPERTY(BlueprintReadOnly, Category = "Controller|HUD")
	//AMyHUD* MyHUD:

	//void UpdateNewHealthPercent(float NewHealth);

};
