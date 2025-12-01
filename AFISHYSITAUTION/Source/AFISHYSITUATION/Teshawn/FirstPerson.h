// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstPerson.generated.h"

UCLASS()
class AFISHYSITUATION_API AFirstPerson : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPerson();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	//components
	UPROPERTY(EditAnywhere) class UCameraComponent* camera;
	UPROPERTY(EditAnywhere) class UBoxComponent* boxComp;
	UPROPERTY(EditAnywhere) class UStaticMeshComponent* baseMesh;

	void MoveForward(float inputValue);
	void MoveRight(float inputValue);

	void LookUp(float mouseInput);
	void Turn(float mouseInput);
};