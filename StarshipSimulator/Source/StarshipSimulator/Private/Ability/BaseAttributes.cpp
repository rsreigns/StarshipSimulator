// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/BaseAttributes.h"
#include "GameplayEffectExtension.h"


UBaseAttributes::UBaseAttributes()
{
	InitCurrentHealth(50.f);
	InitMaxHealth(50.f);
	InitShield(40.f);
	InitMaxShield(40.f);
}

void UBaseAttributes::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if(Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
	{
		float NewCurrentHealth = FMath::Clamp(GetCurrentHealth(), 0.f,GetMaxHealth());
		SetCurrentHealth(NewCurrentHealth);
	}
	if(Data.EvaluatedData.Attribute == GetShieldAttribute())
	{
		float NewShield = FMath::Clamp(GetShield(), 0.f,GetMaxShield());
		SetCurrentHealth(NewShield);
	}
}
