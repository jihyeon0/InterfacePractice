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
	
	//?? �浹�ϰ� 5�� ������ ���� �ٽ� �浹�ϸ� Ÿ�̸� ���µǸ鼭 ���� ������, ��� ��������� �������°� �±� ��
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
