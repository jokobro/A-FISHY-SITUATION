// Fill out your copyright notice in the Description page of Project Settings.


#include "Roy/lo.h"

// Sets default values
Alo::Alo()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Alo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Alo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Alo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

