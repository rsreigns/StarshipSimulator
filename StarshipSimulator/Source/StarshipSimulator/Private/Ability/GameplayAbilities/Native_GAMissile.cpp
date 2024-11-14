// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/Native_GAMissile.h"

#include "PlayerShipBase.h"
#include "Actors/Missile.h"
#include "GameFramework/ProjectileMovementComponent.h"

void UNative_GAMissile::InitiateAbility()
{
	Super::InitiateAbility();
	if(Missile)
	{
		APlayerShipBase* PlayerPawn = GetPlayerPawn();
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = Cast<AActor>(PlayerPawn);
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		const FTransform Transform = PlayerPawn->GetMissileSocket()->GetComponentTransform();
		AMissile* SpawnedMissile = GetWorld()->SpawnActor<AMissile>(Missile, Transform, SpawnParams);// Handle taking from pool instead
		// Setup Homing target , gets set through UI
		//SpawnedMissile->ProjectileMovement->HomingTargetComponent = 
	}
}
