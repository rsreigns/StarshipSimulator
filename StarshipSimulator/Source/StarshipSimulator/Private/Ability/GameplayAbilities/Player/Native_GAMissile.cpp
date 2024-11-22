// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/Player/Native_GAMissile.h"

#include "PlayerShipBase.h"
#include "Actors/Missile.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Kismet/KismetSystemLibrary.h"

#include "StarshipSimulator/DebugHelper.h"

void UNative_GAMissile::InitiateAbility()
{
	Super::InitiateAbility();

}

void UNative_GAMissile::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, 
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (Missile)
	{
		ABaseShip* OwningPawn = GetBaseShip();
		if (!OwningPawn) return;
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetAvatarActorFromActorInfo();
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		const FTransform Transform = OwningPawn->GetMissileSocket()->GetComponentTransform();
		LockedTarget = OwningPawn->TargetLockedActor;
		if (LockedTarget)
		{
			if (USceneComponent* SceneComp = LockedTarget->GetComponentByClass<USceneComponent>())
			{
				SpawnedMissile = GetWorld()->SpawnActor<AMissile>(Missile, Transform, SpawnParams);
				// Handle taking from pool instead
				SpawnedMissile->ProjectileMovement->HomingTargetComponent = SceneComp;
			}
			else
			{
				Debug::PrintString("locked scene component invalid", 8.f);
			}
			UAbilityTask_WaitGameplayEvent* WaitEvent =
				UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this,
					FGameplayTag::RequestGameplayTag(FName("Player.Event.Missile.Explode")), nullptr, true);
			if (WaitEvent)
			{
				WaitEvent->EventReceived.AddDynamic(this, &ThisClass::OnGameplayEventReceived);
				WaitEvent->ReadyForActivation();
			}
			else
			{
				Debug::PrintString("wait event invalid", 8.f);
			}
		}
		else
		{
			Debug::PrintString("Target invalid", 8.f);
		}
	}
	else Debug::PrintString("Invalid ship", 8.f);

}

void UNative_GAMissile::OnGameplayEventReceived(FGameplayEventData Payload)
{
	if (!IsValid(SpawnedMissile)) return;
	Debug::PrintString("EventRecieved for explosion");


	TArray<AActor*> OverlappingShips;
	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(GetAvatarActorFromActorInfo());
	UKismetSystemLibrary::SphereOverlapActors(SpawnedMissile,SpawnedMissile->GetActorLocation(),OverlapRadius,ObjectTypes,
		ABaseShip::StaticClass(), IgnoredActors, OverlappingShips);

	for (AActor* Ship : OverlappingShips)
	{
		if (!IsValid(Ship)) continue;
		if (!IsValid(SpawnedMissile)) return;
		float DistanceValue = FVector::Distance(SpawnedMissile->GetActorLocation(), Ship->GetActorLocation());
		float Distance = FMath::Clamp(DistanceValue,0,DistanceThreshold);
		float DamageMultiplier = 1 - Distance/ DistanceThreshold;
		float AppliedDamage = BaseDamage* DamageMultiplier;
		FGameplayEffectSpecHandle SpecHandle = MakeGESH(DamageGE, AppliedDamage);
		if (!SpecHandle.IsValid()) continue;
		ApplyEffectSpecHandleToTarget(SpecHandle, Ship);
	}
	
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, false, false);
}
