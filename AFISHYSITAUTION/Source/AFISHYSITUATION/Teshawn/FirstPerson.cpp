// Fill out your copyright notice in the Description page of Project Settings.


#include "Teshawn/FirstPerson.h"
#include"Camera/CameraComponent.h"

// Sets default values
AFirstPerson::AFirstPerson()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("player Camera"));
	camera->SetupAttachment(RootComponent);
	camera->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AFirstPerson::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstPerson::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPerson::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forwards", this, &AFirstPerson::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &AFirstPerson::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &AFirstPerson::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &AFirstPerson::Turn);
}

void AFirstPerson::MoveForward(float inputValue)
{
	FVector forwardsDir = GetActorForwardVector();
	AddMovementInput(forwardsDir, inputValue);
}
void AFirstPerson::MoveRight(float inputValue)
{
	FVector rightDir = GetActorRightVector();
	AddMovementInput(rightDir, inputValue);
}

void AFirstPerson::LookUp(float mouseInput)
{
	AddControllerYawInput(mouseInput);
}
void AFirstPerson::Turn(float mouseInput)
{
	AddControllerPitchInput(mouseInput);
}