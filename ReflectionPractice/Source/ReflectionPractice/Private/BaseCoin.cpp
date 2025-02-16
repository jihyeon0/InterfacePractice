#include "BaseCoin.h"
#include "Engine/World.h"
#include "MyGameState.h"

ABaseCoin::ABaseCoin()
{
    PointValue = 0;
    ItemType = "DefaultCoin";
}

void ABaseCoin::ActivateItem(AActor* Activator)
{
    if (Activator && Activator->ActorHasTag("Player"))
    {
        if (UWorld* World = GetWorld())
        {
            if (AMyGameState* GameState = World->GetGameState<AMyGameState>())
            {
                GameState->AddScore(PointValue);
                GameState->OnCoinCollected();
            }
        }
        DestroyItem();
    }
}
