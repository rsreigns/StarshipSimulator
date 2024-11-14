// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/Player/Native_GA_ScanHostiles.h"

#include "PlayerShipBase.h"
#include  "Kismet/KismetSystemLibrary.h"

#include "Interface/PlayerUIInterface.h"

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
		
		if(FoundActors.Num() > 0)
		{
			IPlayerUIInterface* Interface = Cast<IPlayerUIInterface>(PlayerPawn);
			Interface->UpdateScannedActors(FoundActors);
		}
	}

}
