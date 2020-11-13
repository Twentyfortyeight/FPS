// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Particles/ParticleSystemComponent.h"
#include "MyMovingPawn.generated.h"

UCLASS()
class READALTER_API AMyMovingPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyMovingPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UParticleSystemComponent* OurParticleComp;
	
	class UPawnMovement* OurPawnMovement;
	
	virtual UPawnMovementComponent* GetMovementComponent()const override;
	
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void Turn(float AxisValue);
	void ParticleToggle();


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

};
