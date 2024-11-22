// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MyAIController.h"

AMyAIController::AMyAIController()
{
	SetGenericTeamId(FGenericTeamId(1));
}

ETeamAttitude::Type AMyAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	const APawn* OtherPawn = Cast<APawn>(&Other);
	if (OtherPawn)
	{
		const IGenericTeamAgentInterface* OtherInterface = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController());
		if (OtherInterface)
		{
			if (OtherInterface->GetGenericTeamId() < GetGenericTeamId())
			{
				return ETeamAttitude::Hostile;
			}
			else return ETeamAttitude::Friendly;
		}
	}
	return ETeamAttitude::Type();
}
