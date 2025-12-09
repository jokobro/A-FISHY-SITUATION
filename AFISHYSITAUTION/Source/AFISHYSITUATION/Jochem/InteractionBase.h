// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jochem/InteractionInterface.h"
#include "InteractionBase.generated.h"


class Uspherecomponent;

UCLASS()
class AFISHYSITUATION_API AInteractionBase : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractionBase();

	virtual void OnInteractionRangeEntered(FirstPerson* Character) override;
	virtual void OnInteractionRangeExited(FirstPerson* Character) override;
	virtual void OnInteract() override;
	virtual void HandleInteraction(FirstPerson* Character) override;
	virtual bool CanbeInteracted() const override { return true; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
    UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* InteractionRange = nullptr;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* InteractableMesh = nullptr;

private:
	UFUNCTION()
	void OnBeginOverlap(AActor* overlappedActor, AActor* otherActor);

	void OnEndOverlap(AActor* overlappedActor, AActor* otherActor);
};