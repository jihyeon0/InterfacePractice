#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "HealingItem.generated.h"

UCLASS()
class REFLECTIONPRACTICE_API AHealingItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	AHealingItem();

protected:
	virtual void ActivateItem(AActor* Activator) override;

	int32 Healamount = 20;
};
