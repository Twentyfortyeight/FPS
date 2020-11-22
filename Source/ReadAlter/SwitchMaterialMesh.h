// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwitchMaterialMesh.generated.h"

UCLASS()
class READALTER_API ASwitchMaterialMesh : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwitchMaterialMesh();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MyStaticMesh;

	UPROPERTY(EditAnywhere)
		class UMaterial* offMaterial;

	UPROPERTY(EditAnywhere)
		class UMaterial* onMaterial;

	UPROPERTY()
		class UBoxComponent* MyBoxx;
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
