// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/BaseAttributes.h"
#include "GameplayEffectExtension.h"

#include "BaseShip.h"
#include "StarshipSimulator/DebugHelper.h"

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

		float HealthPercent = NewCurrentHealth / GetMaxHealth();

		OnHealthChanged.Broadcast(HealthPercent,GetCurrentHealth(),GetMaxHealth());

		AActor* OwningActor = GetActorInfo()->AvatarActor.Get();

		if (OwningActor)
		{
			ABaseShip* Ship = Cast<ABaseShip>(OwningActor);
			if (Ship )
			{
				if (NewCurrentHealth == 0.f)
				{
					Ship->DestroyShip();
					Debug::PrintString("Destroyed this ship ", 5.f);
				}

				if (!Ship->IsPlayerControlled()) // AI Specific Logic
				{
					// draw Health UI for n seconds
					OnDamageReceived.Broadcast();
				}

			}
		}
	}
	if(Data.EvaluatedData.Attribute == GetShieldAttribute())
	{
		float NewShield = FMath::Clamp(GetShield(), 0.f,GetMaxShield());
		SetCurrentHealth(NewShield);
	}
}
