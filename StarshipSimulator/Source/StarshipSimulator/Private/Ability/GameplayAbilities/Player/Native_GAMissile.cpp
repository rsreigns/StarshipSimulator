// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/Player/Native_GAMissile.h"

#include "PlayerShipBase.h"
#include "Actors/Missile.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"

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
		APlayerShipBase* PlayerPawn = GetPlayerPawn();
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = Cast<AActor>(PlayerPawn);
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		const FTransform Transform = PlayerPawn->GetMissileSocket()->GetComponentTransform();
		LockedTarget = PlayerPawn->TargetLockedActor;
		if (LockedTarget)
		{
			if (USceneComponent* SceneComp = LockedTarget->GetComponentByClass<USceneComponent>())
			{
				AMissile* SpawnedMissile = GetWorld()->SpawnActor<AMissile>(Missile, Transform, SpawnParams);
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
	Debug::PrintString("EventRecieved for explosion");
	FGameplayEffectSpecHandle SpecHandle = MakeGESH(DamageGE, 50.f);
	ApplyEffectSpecHandleToTarget(SpecHandle, LockedTarget);
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, false, false);
}
