// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MyPlayerController.h"


#include "UI/MyHUD.h"

FGenericTeamId AMyPlayerController::GetGenericTeamId() const
{
	return FGenericTeamId(0);
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	//if (GetHUD())
	//{
	//	MyHud = Cast<AMyHUD>(GetHUD());
	//}

}

//void AMyPlayerController::UpdateNewHealthPercent(float NewHealth)
//{
//	if (MyHUD)
//	{
//		MyHUD->UpdateHealthUI(NewHealth);
//	}
//	return;
//}

