

#include "BaseShip.h"
//Components
#include "Components/StaticMeshComponent.h"


// Dependencies
#include "Kismet/GameplayStatics.h"

//Custom classes
#include "Ability/BaseASC.h"
#include "Ability/BaseAttributes.h"



ABaseShip::ABaseShip()
{
	PrimaryActorTick.bCanEverTick = true;
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>("ShipMesh");
	BaseASC = CreateDefaultSubobject<UBaseASC>("BaseASC");
	BaseAttributes = CreateDefaultSubobject<UBaseAttributes>("BaseAttributes");

	//OnTakeAnyDamage.AddDynamic(this,&ThisClass::OnTakeDamage);
}

void ABaseShip::BeginPlay()
{
	Super::BeginPlay();
}


void ABaseShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ABaseShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	
}

UAbilitySystemComponent* ABaseShip::GetAbilitySystemComponent() const
{
	return BaseASC;
}

void ABaseShip::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	BaseASC->InitAbilityActorInfo(this,this);
}

/*
void ABaseShip::OnTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	
}
*/

