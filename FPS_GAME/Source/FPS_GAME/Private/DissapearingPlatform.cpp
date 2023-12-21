#include "DissapearingPlatform.h"
#include "Components/BoxComponent.h"
#include "TimerManager.h"

// Sets default values
ADissapearingPlatform::ADissapearingPlatform()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Set this actor to be ticked every frame
    PrimaryActorTick.bCanEverTick = true;

    // Default values for box ccollision
    BoxCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    BoxCollisionComponent->SetupAttachment(RootComponent);
    BoxCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ADissapearingPlatform::BeginOverlap);
}

// Called when the game starts or when spawned
void ADissapearingPlatform::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ADissapearingPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADissapearingPlatform::BeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
   //Check if the actor is overlaping with the character
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
      

        // disable collision
        BoxCollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

       // hide the platform
        SetActorHiddenInGame(true);

       // respawn the platfrom
        GetWorldTimerManager().SetTimer(TimerHandle_Respawn, this, &ADissapearingPlatform::RespawnPlatformBack, 5.0f, false);
    }
}

void ADissapearingPlatform::RespawnPlatformBack()
{
   // enable the platform
    SetActorHiddenInGame(false);

    // enable platform collision
    BoxCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void ADissapearingPlatform::SetCollisionEnabled(bool bEnableCollision)
{
    //Set collicion for the platform
    if (BoxCollisionComponent)
    {
        BoxCollisionComponent->SetCollisionEnabled(bEnableCollision ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
    }
}
