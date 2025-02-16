#include "SmallCoin.h"

ASmallCoin::ASmallCoin()
{
	PrimaryActorTick.bCanEverTick = false;
	PointValue = 10;
}

void ASmallCoin::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
}
