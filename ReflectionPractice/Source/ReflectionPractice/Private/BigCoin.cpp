#include "BigCoin.h"

ABigCoin::ABigCoin()
{
	PrimaryActorTick.bCanEverTick = false;
	PointValue = 50;
}

void ABigCoin::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
}