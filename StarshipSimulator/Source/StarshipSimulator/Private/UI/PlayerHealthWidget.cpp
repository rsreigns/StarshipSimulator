// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerHealthWidget.h"

#include "Ability/BaseAttributes.h"
#include "BaseShip.h"

void UPlayerHealthWidget::NativeConstruct()
{
	Super::NativeConstruct();

    ABaseShip* OwningShip = Cast<ABaseShip>(GetOwningPlayerPawn());
    if (OwningShip)
    {
        UBaseAttributes* AttributeSet = OwningShip->GetBaseAttributeSet();
        if (AttributeSet)
        {
            AttributeSet->OnHealthChanged.AddDynamic(this, &ThisClass::UpdateHealthUI);
        }
    }
}
