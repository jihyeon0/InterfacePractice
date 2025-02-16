#include "HealingItem.h"
#include "MyCharacter.h"

AHealingItem::AHealingItem()
{
	PrimaryActorTick.bCanEverTick = false;

	Healamount = 20;
}

void AHealingItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	if (AMyCharacter* Player = Cast<AMyCharacter>(Activator))
	{
		Player->AddHealth(Healamount);
	}

	DestroyItem();
}
