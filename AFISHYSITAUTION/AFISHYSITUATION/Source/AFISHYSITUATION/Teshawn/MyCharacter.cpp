// Fill out your copyright notice in the Description page of Project Settings.


#include "Teshawn/MyCharacter.h"
#include"Camera/CameraComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player cam"));
	camera->SetupAttachment(RootComponent);
	camera->bUsePawnControlRotation = true;	

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("forward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("right", this, &AMyCharacter::MoveRight);

	PlayerInputComponent->BindAxis("lookUp", this, &AMyCharacter::lookUp);
	PlayerInputComponent->BindAxis("lookRight", this, &AMyCharacter::turn);

}

void AMyCharacter::MoveForward(float inputVector) 
{
	FVector forwardInput = GetActorForwardVector();
	AddMovementInput(forwardInput, inputVector);
}
void AMyCharacter::MoveRight(float inputVector) 
{
	FVector rightInput = GetActorRightVector();
	AddMovementInput(rightInput, inputVector);
}

void AMyCharacter::turn(float turnInput)
{
	AddControllerYawInput(turnInput);
}

void AMyCharacter::lookUp(float lookSpeed)
{
	AddControllerPitchInput(lookSpeed);
}

