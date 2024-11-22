// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/BaseGameplayAbility.h"

#include "AbilitySystemBlueprintLibrary.h"

#include "Ability/BaseASC.h"
#include "BaseShip.h"

void UBaseGameplayAbility::InitiateAbility()
{
	
}

UBaseASC* UBaseGameplayAbility::GetBaseASCfromAI()
{
	if (UBaseASC* ASC = Cast<UBaseASC>(GetAbilitySystemComponentFromActorInfo())) return ASC;
	return nullptr;
}

ABaseShip* UBaseGameplayAbility::GetBaseShip()
{
	ABaseShip* Ship = Cast<ABaseShip>(GetAvatarActorFromActorInfo());
	if (Ship) return Ship;
	return nullptr;
}

FActiveGameplayEffectHandle UBaseGameplayAbility::ApplyEffectSpecHandleToTarget(FGameplayEffectSpecHandle& SpecHandle, AActor* Target)
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Target);
	if (TargetASC)
	{
		FActiveGameplayEffectHandle AGEH = GetBaseASCfromAI()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data, TargetASC);
		return AGEH;
	}
	return FActiveGameplayEffectHandle();
}

FGameplayEffectSpecHandle UBaseGameplayAbility::MakeGESH(TSubclassOf<UGameplayEffect> Effect, float Magnitude)
{
	if (UBaseASC* ASC = GetBaseShip()->GetBaseASC())
	{
		FGameplayEffectContextHandle Context = ASC->MakeEffectContext();
		Context.SetAbility(this);
		Context.AddSourceObject(GetBaseShip());
		FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(Effect, 1, Context);
		return SpecHandle;
	}
	return FGameplayEffectSpecHandle();
}
