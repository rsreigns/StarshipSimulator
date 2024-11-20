// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/GameplayAbilities/BaseGameplayAbility.h"

#include "AbilitySystemBlueprintLibrary.h"

#include "Ability/BaseASC.h"

void UBaseGameplayAbility::InitiateAbility()
{
	
}

UBaseASC* UBaseGameplayAbility::GetBaseASCfromAI()
{
	if (UBaseASC* ASC = Cast<UBaseASC>(GetAbilitySystemComponentFromActorInfo())) return ASC;
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
