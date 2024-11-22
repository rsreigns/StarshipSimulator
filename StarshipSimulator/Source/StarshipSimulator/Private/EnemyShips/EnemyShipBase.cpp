// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShips/EnemyShipBase.h"

//Components
#include "Components/WidgetComponent.h"


//Custom classes
#include "Ability/BaseAttributes.h"

AEnemyShipBase::AEnemyShipBase()
{

	WidgetComp = CreateDefaultSubobject<UWidgetComponent>("WidgetComponent");
	WidgetComp->SetupAttachment(ShipMesh);
	GetBaseAttributeSet()->OnDamageReceived.AddDynamic(this, &ThisClass::ShowWidget);
	GetBaseAttributeSet()->OnHealthChanged.AddDynamic(this, &ThisClass::UpdateHealthUI);
}

void AEnemyShipBase::DestroyShip()
{
	Super::DestroyShip();
	OnDestroyedShip();
	Destroy();
}

