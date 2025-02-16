#include "MineItem.h"
#include "Components/SphereComponent.h"
#include "kismet/GameplayStatics.h"

AMineItem::AMineItem()
{
	PrimaryActorTick.bCanEverTick = false;

	ExplosionCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionCollision"));
	ExplosionCollision->InitSphereRadius(ExplosionRadius);
	ExplosionCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	ExplosionCollision->SetupAttachment(Scene);
}

void AMineItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
	
	//?? 충돌하고 5초 지나기 전에 다시 충돌하면 타이머 리셋되면서 절대 안터짐, 사실 밟고있으면 안터지는게 맞긴 해
	GetWorld()->GetTimerManager().SetTimer(
		ExplosionTimerHandle,
		this,
		&AMineItem::Explode,
		ExplosionDelay,
		false
	);
}

void AMineItem::Explode()
{
	TArray<AActor*> OverlappingActors;
	ExplosionCollision->GetOverlappingActors(OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		if (Actor && Actor->ActorHasTag("Player"))
		{
			UGameplayStatics::ApplyDamage(Actor, ExplosionDamage, nullptr, this, UDamageType::StaticClass());

			UE_LOG(LogTemp, Warning, TEXT("ApplyDamage : %d"), ExplosionDamage);
		}
	}

	DestroyItem();
}
