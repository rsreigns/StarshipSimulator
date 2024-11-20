// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/Player/Native_GA_LockTarget.h"
#include "PlayerShipBase.h"
#include "SoundSubmixDefaultColorPalette.h"
#include "Animation/AnimInstanceProxy.h"
#include "Camera/CameraComponent.h"
#include "EntitySystem/MovieSceneEntitySystemRunner.h"
#include "Kismet/KismetSystemLibrary.h"

#include "StarshipSimulator/DebugHelper.h"
#include "EnemyShips/EnemyShipBase.h"

void UNative_GA_LockTarget::InitiateAbility()
{
	Super::InitiateAbility();
	
	if(APlayerShipBase* PlayerPawn = GetPlayerPawn())
	{

		const FVector StartPoint = PlayerPawn->GetCamera()->GetComponentLocation();
		const FVector EndPoint = StartPoint + PlayerPawn->GetCamera()->GetForwardVector() * TargetLockDistance;
		FHitResult Hit = DoSphereTrace(StartPoint,EndPoint,true);

		AEnemyShipBase* Enemy = Cast<AEnemyShipBase>(Hit.GetActor());
		if(Enemy)  Debug::PrintString("Enemy is valid", 8.f);
		AActor* HitActor = Hit.GetActor();
		if (HitActor)  Debug::PrintString("HitActor is valid", 8.f);
		if(HitActor )
		{
			PlayerPawn->TargetLockedActor = HitActor;
		}
		else
		{
			Debug::PrintString("hit actor invalid or not enemy", 8.f);
		}
	}
	else
	{
		Debug::PrintString("Player pawn invalid", 8.f);
	}
}

FHitResult UNative_GA_LockTarget::DoSphereTrace(const FVector Start, const FVector End, bool bShowDebug)
{
	FHitResult OutHit;
	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(GetAvatarActorFromActorInfo());
	EDrawDebugTrace::Type DebugType;
	if (bShowDebug)
	{
		DebugType = EDrawDebugTrace::ForDuration;
	}
	else DebugType = EDrawDebugTrace::None;
	 
	UKismetSystemLibrary::SphereTraceSingleForObjects(this,Start,End,SphereRadius,
	ObjectTypes,false,IgnoredActors,DebugType,OutHit,true);
	return OutHit;
}
