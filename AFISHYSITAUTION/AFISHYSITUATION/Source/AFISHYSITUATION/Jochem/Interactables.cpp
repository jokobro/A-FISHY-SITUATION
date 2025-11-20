// Fill out your copyright notice in the Description page of Project Settings.

#include "Jochem/Interactables.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"

// Sets default values
AInteractables::AInteractables()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractables::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractables::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInteractables::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	// Example: bind an "Interact" action (create mapping in Project Settings)
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AInteractables::CHeckInteraction);
}

void AInteractables::CHeckInteraction()
{
	// Writes to the Output Log (and editor logs)
	UE_LOG(LogTemp, Warning, TEXT("CHeckInteraction called on %s; bCanInteract=%s"),
		*GetName(), bCanInteract ? TEXT("true") : TEXT("false"));

	// Shows a short on-screen message in-game (visible in PIE)
	if (GEngine)
	{
		const FString Msg = FString::Printf(TEXT("Interaction: %s (bCanInteract=%s)"),
			*GetName(), bCanInteract ? TEXT("true") : TEXT("false"));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, Msg);
	}
}