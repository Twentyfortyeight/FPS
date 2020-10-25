// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DdebugHelpers.generated.h"

UCLASS()
class READALTER_API ADdebugHelpers : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADdebugHelpers();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, Category = "Location")
		FVector LocationOne;
	UPROPERTY(EditAnywhere,Category = "Location")
		FVector LocationTwo;
    UPROPERTY(EditAnywhere, Category = "Location")
		FVector LocationTree;
	UPROPERTY(EditAnywhere, Category = "Location")
		FVector LocationFoo;
	UPROPERTY(EditAnywhere, Category = "Location")
		FVector LocationFive;
	UPROPERTY(EditAnywhere, Category = "Location")
		FBox MyBox;
	
	UPROPERTY(EditAnywhere, Category = "Location")
		FTransform MyTRS;
};
