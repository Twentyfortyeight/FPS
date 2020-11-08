// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwichButton.generated.h"

UCLASS()
class READALTER_API ALightSwichButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwichButton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		class UPointLightComponent *pointLight;

	UPROPERTY(VisibleAnywhere)
		class USphereComponent* lightsphere;


	UPROPERTY(VisibleAnywhere)
		float LightIntensity;

	UFUNCTION(BlueprintCallable)
		void ToggleLight();
};

