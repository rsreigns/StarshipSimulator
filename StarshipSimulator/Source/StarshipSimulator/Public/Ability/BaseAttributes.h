// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Ability/BaseASC.h"
#include "BaseAttributes.generated.h"

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

	UPROPERTY(BlueprintReadOnly, Category="Health")
	FGameplayAttributeData CurrentHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,CurrentHealth);
	
	UPROPERTY(BlueprintReadOnly, Category="Health")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,MaxHealth);

	UPROPERTY(BlueprintReadOnly, Category="Shield")
	FGameplayAttributeData Shield;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,Shield);
	
	UPROPERTY(BlueprintReadOnly, Category="Shield")
	FGameplayAttributeData MaxShield;
	ATTRIBUTE_ACCESSORS(UBaseAttributes,MaxShield);

	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
	
};
