// Fill out your copyright notice in the Description page of Project Settings.


#include "Lava.h"
#include "Components/BoxComponent.h"
#include "MainCharacter.h"

// Sets default values
ALava::ALava()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = BoxComponent;
}

// Called when the game starts or when spawned
void ALava::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALava::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
  
}