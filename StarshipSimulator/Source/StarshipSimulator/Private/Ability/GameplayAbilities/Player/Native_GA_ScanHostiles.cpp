// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h"

#include "PlayerShipBase.h"
#include  "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "Interface/PlayerUIInterface.h"

#include "StarshipSimulator/DebugHelper.h"

// This ability will get called frequently to update UI, probably every 2 seconds or so

void UNative_GA_ScanHostiles::InitiateAbility()
{
	
	if(APlayerShipBase* PlayerPawn = Cast<APlayerShipBase>(GetPlayerPawn()))
	{
		Super::InitiateAbility();
		
		TArray<AActor*> FoundActors;
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(GetAvatarActorFromActorInfo());
		
		UKismetSystemLibrary::SphereOverlapActors(this,PlayerPawn->GetActorLocation(),SphereRadius,
			ObjectTypes,EnemyShipClass,ActorsToIgnore,FoundActors);
		Debug::PrintString("finding", 8.f);
		if(FoundActors.Num() > 0)
		{
			Debug::PrintString("found ship", 8.f);
			if(ScanSound)
			{
				UGameplayStatics::PlaySound2D(this,ScanSound);
				Debug::PrintString("scan sound played", 8.f);
			}
			else
			{
				Debug::PrintString("scan sound invalid", 8.f);
			}
			IPlayerUIInterface* Interface = Cast<IPlayerUIInterface>(PlayerPawn);
			Interface->UpdateScannedActors(FoundActors);
		}
		else Debug::PrintString("found ship", 8.f);
	}
	else
	{
		Debug::PrintString("player pawn invalid", 8.f);
	}
}
