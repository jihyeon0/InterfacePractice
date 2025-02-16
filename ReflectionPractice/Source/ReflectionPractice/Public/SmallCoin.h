#pragma once

#include "CoreMinimal.h"
#include "BaseCoin.h"
#include "SmallCoin.generated.h"

UCLASS()
class REFLECTIONPRACTICE_API ASmallCoin : public ABaseCoin
{
	GENERATED_BODY()

public:
	ASmallCoin();

protected:
	virtual void ActivateItem(AActor* Activator) override;
};
