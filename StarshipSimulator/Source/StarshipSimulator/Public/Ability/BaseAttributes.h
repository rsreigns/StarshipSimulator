// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Ability/BaseASC.h"
#include "BaseAttributes.generated.h"

class ABaseShip;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealthChanged, float, NewHealthPercent,float, NewCurrentHealth,float,MaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDamageReceived);


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class STARSHIPSIMULATOR_API UBaseAttributes : public UAttributeSet
{
	GENERATED_BODY()
public:
	UBaseAttributes();

#pragma region Variables

	UPROPERTY(BlueprintReadOnly, Category="Attributes|Health")
	FGameplayAttributeData CurrentHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,CurrentHealth);
	
	UPROPERTY(BlueprintReadOnly, Category="Attributes|Health")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,MaxHealth);

	UPROPERTY(BlueprintReadOnly, Category="Attributes|Shield")
	FGameplayAttributeData Shield;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,Shield);
	
	UPROPERTY(BlueprintReadOnly, Category="Attributes|Shield")
	FGameplayAttributeData MaxShield;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,MaxShield);

	UPROPERTY(BlueprintReadOnly,Category="Attributes|Delegate")
	FOnHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Delegate")
	FOnDamageReceived OnDamageReceived;
#pragma endregion

#pragma region Functions

	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
	
#pragma endregion
};
