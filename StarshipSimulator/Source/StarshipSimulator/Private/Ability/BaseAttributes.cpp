// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/BaseAttributes.h"
#include "GameplayEffectExtension.h"


UBaseAttributes::UBaseAttributes()
{
	InitCurrentHealth(400.f);
	InitMaxHealth(500.f);
	InitShield(300.f);
	InitMaxShield(400.f);
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
