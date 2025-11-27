// Fill out your copyright notice in the Description page of Project Settings.


#include "Jochem/InteractionBase.h"
#include "Components/SphereComponent.h"

// Sets default values
AInteractionBase::AInteractionBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	InteractableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractableMesh"));
	RootComponent = InteractableMesh;

	InteractionRange = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionRange"));
	InteractionRange->InitSphereRadius(200.f);
	InteractionRange->setupAttachment(InteractableMesh);
}

void AInteractionBase::OnInteractionRangeEntered(FirstPerson* character)
{
}

void AInteractionBase::OnInteractionRangeExited(FirstPerson* character)
{
}

void AInteractionBase::OnInteract()
{
}

void AInteractionBase::HandleInteraction(FirstPerson* character)
{
}




// Called when the game starts or when spawned
void AInteractionBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractionBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractionBase::OnBeginOverlap(AActor* overlappedActor, AActor* otherActor)
{
	OnInteractionRangeEntered();
}

void AInteractionBase::OnEndOverlap(AActor* overlappedActor, AActor* otherActor)
{
	OnInteractionRangeExited();
}

