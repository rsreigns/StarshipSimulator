// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShips/EnemyShipBase.h"

#include "Ability/BaseAttributes.h"

AEnemyShipBase::AEnemyShipBase()
{

	GetBaseAttributeSet()->OnDamageReceived.AddDynamic(this, &ThisClass::ShowWidget);
	GetBaseAttributeSet()->OnHealthChanged.AddDynamic(this, &ThisClass::UpdateHealthUI);
}

void AEnemyShipBase::DestroyShip()
{
	Super::DestroyShip();
	Destroy();
}

