// Fill out your copyright notice in the Description page of Project Settings.

#include "MainCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/BoxComponent.h"
#include "Lava.h"
#include "GameFramework/PlayerController.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FPSCamera->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));
	FPSCamera->SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight - 60.0f));
	FPSCamera->bUsePawnControlRotation = true;
	FPSMeshArms = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMeshArms"));
	check(FPSMeshArms != nullptr);
	FPSMeshArms->SetupAttachment(FPSCamera);
	JumpHeight = 110.0f;
	PlayerHealth = 1.0f;
	RespawnDelay = 0.01f;
	/*SpawnLocation = FVector(0.0f, 0.0f, 0.0f);*/
	isDead = false;
	bIsCrouching = false;

	// Set the mesh component for the gun
	if (!GunMeshComponent)
	{		GunMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>GunMesh(TEXT("'/Game/Models/Weapon/uploads_files_4092110_Sci-fi+Gun.uploads_files_4092110_Sci-fi+Gun'"));
		if (GunMesh.Succeeded())
		{
			GunMeshComponent->SetStaticMesh(GunMesh.Object);
		}
		GunMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		GunMeshComponent->SetupAttachment(FPSMeshArms);
	}
	//Set the variables used for the gun and charging (reloading)
	bCanShoot = true;
	bShootCounting = false;
	AmmoCount = 10;
	bAmmoCounting = false;
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	/*SpawnLocation = GetActorLocation();*/

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AMainCharacter::CountdownTimer, 1.0f, true, 1.0f);

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
	if (FPSMeshArms != nullptr)
	{
		FPSMeshArms->bCastDynamicShadow = false;

		FPSMeshArms->CastShadow = false;

		FPSMeshArms->SetOnlyOwnerSee(true);
	}
	GetMesh()->SetOwnerNoSee(true);
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
	if (PlayerHealth < 0.00f)
	{
		PlayerHealth = 0.00f;
		Die();
	}

	// If current ammo is less than 10, slowly refresh ammo at 3 seconds per shot
	if (AmmoCount < 10 && !bAmmoCounting)
	{
		bAmmoCounting = true;
		GetWorld()->GetTimerManager().SetTimer(AmmoTimer, this, &AMainCharacter::IncreaseAmmoCount, 3, false);
	}
	// Cap ammo count at 10
	else if (AmmoCount >= 10)
	{
		
		AmmoCount = 10;
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

		//Damage
		EnhancedInputComponent->BindAction(DamageAction, ETriggerEvent::Triggered, this, &AMainCharacter::StartDamage);

		//StartHeal
		EnhancedInputComponent->BindAction(HealAction, ETriggerEvent::Triggered, this, &AMainCharacter::StartHealing);

		//Start Crouch
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AMainCharacter::CrouchStart);

		//Stop Crouch
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &AMainCharacter::CrouchStop);

		//Shoot
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AMainCharacter::Shoot);
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
		AddControllerPitchInput(-LookAxisVector.Y);
	}
}

void AMainCharacter::Jumping()
{
	Jump();
	//Set bisJumpming to true
	bIsJumping = true;
}

void AMainCharacter::CrouchStart()
{
	//if the character is detecting crouch set it to true and crouch
	if (!bIsCrouching)
	{
		UE_LOG(LogTemp, Warning, TEXT("Crouching"));
		bIsCrouching = true;
		Crouch();
	}
}

//if the player no longer presses the button stop crouching
void AMainCharacter::CrouchStop()
{
	if (bIsCrouching)
	{
		bIsCrouching = false;
		UnCrouch();
	}
}

void AMainCharacter::CountdownTimer()
{
	UE_LOG(LogTemp, Warning, TEXT("Countdown Timer"));
	//Check for remaining seconds
	if (Seconds > 0)
	{
		// count down seconds
		--Seconds;
		UE_LOG(LogTemp, Warning, TEXT("Seconds %f"), Seconds);
	}
	else
	{
		//Count down minutes
		--Minutes;
		//Resent seconds
		Seconds = 59.0f;
		UE_LOG(LogTemp, Warning, TEXT("Seconds %f"), Minutes);
		//Check if there are no more minutes remainig
		if (Minutes <= 0)
		{
			//Stop the timer
			GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
			//Reset seconds
			Seconds = 0.0f;
		}
	}
}

void AMainCharacter::SetRespawnLocation(const FVector& NewRespawnLocation)
{
	//Assign new respawn locaion
	SpawnLocation = NewRespawnLocation;
}

void AMainCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
	//UE_LOG(LogTemp, Warning, TEXT("OtherActor %i"), OtherActor.ActorGuid.A);
}

float AMainCharacter::GetSeconds()
{
	return Seconds;
}

void AMainCharacter::TakeDamage(float DamageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage taken"), DamageAmount);
	//Decrease players health 
	PlayerHealth -= DamageAmount;
	
}

void AMainCharacter::StartDamage()
{
	//Take damage by 0.2
	TakeDamage(0.2f);
}

void AMainCharacter::Heal(float HealAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Player Healing..."), HealAmount);
	//Increase health
	PlayerHealth += HealAmount;
	// check to make sure players health doesnt excees the max value
	if (PlayerHealth >= 1.00f)
	{
		PlayerHealth = 1.00f;
	}
}

void AMainCharacter::StartHealing()
{
	//Heal by 0.2
	Heal(0.2f);
}

void AMainCharacter::Respawn()
{
	UE_LOG(LogTemp, Warning, TEXT("Spawning..."));
	// Respawn at the spawn location
	SetActorLocation(SpawnLocation);
	// Set is Dead to false
	isDead = false;
	//Resent the health
	PlayerHealth = 1.0f;	
}

void AMainCharacter::Die()
{
	// is dead true
	isDead = true;
	UE_LOG(LogTemp, Warning, TEXT(" Died!"));
	// Set a timer to call rspawn function after the delay
	GetWorld()->GetTimerManager().SetTimer(RespawnTimeHandle, this, &AMainCharacter::Respawn, RespawnDelay, false);
}

// Shoot function which will spawn the projectile as the specified position and launch it in the given direction.
void AMainCharacter::Shoot()
{
	// If the player has the ammo, proceed
	if (bCanShoot && AmmoCount >= 1)
	{
		// If a reference to the projectile class exists, proceed
		if (ProjectileClass)
		{
			// References for the position where the shot will exit the gun, set to be the barrel of the gun
			FVector CameraLocation;
			FRotator CameraRotation;
			GetActorEyesViewPoint(CameraLocation, CameraRotation);
			MuzzleOffset.Set(174.865484, 5.751367, -19.211193);
			FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
			FRotator MuzzleRotation = CameraRotation;

			// Get a reference to the world, and if found spawn the projectile and launch it and reduce the ammo count
			UWorld* World = GetWorld();
			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = GetInstigator();

				AProjectile* ProjectileObj = World->SpawnActor<AProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (ProjectileObj)
				{
					FVector LaunchDirection = MuzzleRotation.Vector();
					ProjectileObj->FireInDirection(LaunchDirection);
					bCanShoot = false;
					bShootCounting = true;
					AmmoCount--;
					//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, FString::FromInt(AmmoCount));
				}
			}
		}
	}

	// Used to reload the gun / charge up
	if (bShootCounting)
	{
		bShootCounting = false;
		GetWorld()->GetTimerManager().SetTimer(RespawnTimeHandle, this, &AMainCharacter::ChangeCanShoot, 0.5f, true);
	}
}

// Function used in a timer to allow the player to shoot again, working as a delay between shots to simulate rate of fire
void AMainCharacter::ChangeCanShoot()
{	
	bCanShoot = true;
}

// Function used in a timer to increase the player's ammo over time (recharging the gun's ammo)
void AMainCharacter::IncreaseAmmoCount()
{
	AmmoCount++;
	//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, "AMMO: " + FString::FromInt(AmmoCount));
	bAmmoCounting = false;
}
