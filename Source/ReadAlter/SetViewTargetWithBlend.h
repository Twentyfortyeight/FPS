// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SetViewTargetWithBlend.generated.h"

UCLASS()
class READALTER_API ASetViewTargetWithBlend : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASetViewTargetWithBlend();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/*UPROPERTY(EditAnywhere)
	 AActor *Myactor;
	*/
};
