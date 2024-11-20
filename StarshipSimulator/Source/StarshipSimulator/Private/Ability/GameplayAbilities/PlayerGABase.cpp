// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/PlayerGABase.h"

#include "PlayerShipBase.h"
#include "Ability/BaseASC.h"

APlayerShipBase* UPlayerGABase::GetPlayerPawn() const
{
	APlayerShipBase* PlayerPawn = Cast<APlayerShipBase>(GetAvatarActorFromActorInfo());
	if(PlayerPawn) return PlayerPawn;
	return nullptr;
}

void UPlayerGABase::InitiateAbility()
{
	Super::InitiateAbility();
	
}

FGameplayEffectSpecHandle UPlayerGABase::MakeGESH(TSubclassOf<UGameplayEffect> Effect, float Magnitude)
{
	if (UBaseASC* ASC = GetPlayerPawn()->GetBaseASC())
	{
		FGameplayEffectContextHandle Context = ASC->MakeEffectContext();
		Context.SetAbility(this);
		Context.AddSourceObject(GetPlayerPawn());
		FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(Effect, 1, Context);
		return SpecHandle;
	}
	return FGameplayEffectSpecHandle();
}
