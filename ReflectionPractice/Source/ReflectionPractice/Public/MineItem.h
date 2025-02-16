#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "MineItem.generated.h"

class USphereComponent;

UCLASS()
class REFLECTIONPRACTICE_API AMineItem : public ABaseItem
{
	GENERATED_BODY()

public:
	AMineItem();

protected:
	virtual void ActivateItem(AActor* Activator) override;

	void Explode();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Component")
	USphereComponent* ExplosionCollision;

	FTimerHandle ExplosionTimerHandle;

	int32 ExplosionDamage = 30.0f;
	float ExplosionRadius = 300.0f;
	float ExplosionDelay = 5.0f;
};
