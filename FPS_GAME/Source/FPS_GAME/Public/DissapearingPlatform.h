#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DissapearingPlatform.generated.h"

UCLASS()
class FPS_GAME_API ADissapearingPlatform : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ADissapearingPlatform();

    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // handle collision
    UFUNCTION()
    void BeginOverlap(  UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult
    );

    // Function to respawn the platform
    void RespawnPlatformBack();

    // Function for enabling collision
    void SetCollisionEnabled(bool bEnableCollision);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    //Box collision
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform")
    class UBoxComponent* BoxCollisionComponent;

    //Time handle
    FTimerHandle TimerHandle_Respawn;
   
};
