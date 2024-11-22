
#include "Actors/Missile.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Niagara/Classes/NiagaraSystem.h"
#include "GameplayTagContainer.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "TimerManager.h"

#include  "Ability/BaseASC.h"
//#include "EnemyShips/EnemyShipBase.h"
#include "BaseShip.h"


AMissile::AMissile()
{
	PrimaryActorTick.bCanEverTick = true;
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileComp");
	MissileMesh = CreateDefaultSubobject<UStaticMeshComponent>("MissileMesh");
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>("CapsuleCollision");
	
	CapsuleComp->SetupAttachment(MissileMesh);

	ProjectileMovement->InitialSpeed = 2000.f;
	ProjectileMovement->bIsHomingProjectile = true;

}


void AMissile::BeginPlay()
{
	Super::BeginPlay();
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::OnBeginOverlap);
	
	GetWorldTimerManager().SetTimer(SelfDestructTimer, this, &ThisClass::SelfDestruct, 7.f);
}

void AMissile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMissile::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABaseShip* OtherShip = Cast<ABaseShip>(OtherActor);
	if( OtherActor && OtherShip  && OtherActor != GetOwner() )
	{
		SelfDestruct();
		SelfDestructTimer.Invalidate();
		OverlappedActor = OtherActor;
	}
}

void AMissile::OnExploded()
{
	Destroy();// Handle putting into pool
}

void AMissile::SelfDestruct()
{
	if (ExplosionEffect)
	{
		FVector HitLocation = GetActorLocation();
		//UGameplayStatics::SpawnEmitterAttached(ExplosionEffect, RootComponent);
		UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionEffect, HitLocation);
	}
	FTimerHandle DestroyTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, this, &ThisClass::OnExploded, 2.f);
	FGameplayEventData EventData;
	EventData.Instigator = this;
	
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwner(),
		FGameplayTag::RequestGameplayTag(FName("Player.Event.Missile.Explode")), EventData);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

