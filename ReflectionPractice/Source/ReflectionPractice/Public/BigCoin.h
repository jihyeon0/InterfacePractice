#pragma once

#include "CoreMinimal.h"
#include "BaseCoin.h"
#include "BigCoin.generated.h"

UCLASS()
class REFLECTIONPRACTICE_API ABigCoin : public ABaseCoin
{
	GENERATED_BODY()

public:
	ABigCoin();

protected:
	virtual void ActivateItem(AActor* Activator) override;
};
