// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitchOverlapTrigger.generated.h"

UCLASS()
class READALTER_API ALightSwitchOverlapTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitchOverlapTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		class UPointLightComponent* PointLight;
	UPROPERTY(VisibleAnywhere)
		class USphereComponent* LightSphere;
	UPROPERTY(VisibleAnywhere)
		float LightIntensyti;
	UFUNCTION()
		void ToogleLight();
	
	UFUNCTION()
		void OnOverlapBegin(
			UPrimitiveComponent*OverlapComponent,
			class AActor* OverlappedActor, 
			AActor* OtherActor, 
			UPrimitiveComponent* OtherComponent,
			int32 OtherBodyIndex, 
			bool bFromSweep, 
			const FHitResult& SweepResult
	    );
	UFUNCTION()
		void OnOverlapEnd(
			UPrimitiveComponent* OverlapComponent,
			class AActor* OverlappedActor,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComponent,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult
		);


};
