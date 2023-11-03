// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	JumpHeight = 1000.0f;
	bIsJumping = false;
	PlayerHealth = 1.00f;
	RespawnDelay = 0.01f;
	SpawnLocation = FVector(0.0f, 0.0f, 0.0f);
	isDead = false;
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnLocation = GetActorLocation();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>
			(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}



// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsJumping && CanJump())
	{
		// Apply a higher jump while the space bar is held down
		GetCharacterMovement()->Velocity.Z = JumpHeight;
	}

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMainCharacter::Jumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);

		EnhancedInputComponent->BindAction(DamageAction, ETriggerEvent::Triggered, this, &AMainCharacter::StartDamage);

		EnhancedInputComponent->BindAction(HealAction, ETriggerEvent::Triggered, this, &AMainCharacter::StartHealing);
	}
}

void AMainCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMainCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMainCharacter::Jumping()
{
	Jump();
	bIsJumping = true;
}

void AMainCharacter::TakeDamage(float DamageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage taken.!"), DamageAmount);
	PlayerHealth -= DamageAmount;
	if (PlayerHealth < 0.00f)
	{
		PlayerHealth = 0.00f;
		Die();
	}
}

void AMainCharacter::StartDamage()
{
	TakeDamage(0.2f);

}

void AMainCharacter::Heal(float HealAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Player Healing..."), HealAmount);
	PlayerHealth += HealAmount;
	if (PlayerHealth >= 1.00f)
	{
		PlayerHealth = 1.00f;
	}
}

void AMainCharacter::StartHealing()
{
	Heal(0.2f);
}

void AMainCharacter::Respawn()
{
	UE_LOG(LogTemp, Warning, TEXT("Spawning..."));
	SetActorLocation(SpawnLocation);
	isDead = false;
	PlayerHealth = 1.0f;

}

void AMainCharacter::Die()
{
	isDead = true;
	UE_LOG(LogTemp, Warning, TEXT(" Died!"));
	GetWorld()->GetTimerManager().SetTimer(RespawnTimeHandle, this, &AMainCharacter::Respawn, RespawnDelay, false);
}
