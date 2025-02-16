#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "BaseCoin.generated.h"

UCLASS()
class REFLECTIONPRACTICE_API ABaseCoin : public ABaseItem
{
    GENERATED_BODY()

public:
    ABaseCoin();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 PointValue;

    virtual void ActivateItem(AActor* Activator) override;
};