
#include "Actors/Missile.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

#include  "Ability/BaseASC.h"
#include "BaseShip.h"


AMissile::AMissile()
{
	PrimaryActorTick.bCanEverTick = true;
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileComp");
	MissileMesh = CreateDefaultSubobject<UStaticMeshComponent>("MissileMesh");
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>("ParticleSystem");
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>("CapsuleCollision");
	
	CapsuleComp->SetupAttachment(MissileMesh);
	ParticleSystem->SetupAttachment(MissileMesh);

	ProjectileMovement->InitialSpeed = 2000.f;
}


void AMissile::BeginPlay()
{
	Super::BeginPlay();
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::OnBeginOverlap);
}

void AMissile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMissile::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(ABaseShip* OtherShip = Cast<ABaseShip>(OtherActor))
	{
		FGameplayEffectContextHandle ContextHandle;
		
		ContextHandle.AddSourceObject(GetOwner());
		
		OtherShip->GetBaseASC()->ApplyGameplayEffectToSelf(DamageEffect,1.f,ContextHandle);
		if(ExplosionEffect)
		{
			FVector HitLocation = SweepResult.Location;
			UGameplayStatics::SpawnEmitterAtLocation(this,ExplosionEffect,HitLocation);
		}
		FTimerHandle DestroyTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle,this,&ThisClass::OnExploded,5.f);
	}
}

void AMissile::OnExploded()
{
	Destroy();// Handle putting into pool
}

