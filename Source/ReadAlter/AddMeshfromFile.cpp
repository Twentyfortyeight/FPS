// Fill out your copyright notice in the Description page of Project Settings.


#include "AddMeshfromFile.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"



// Sets default values
AAddMeshfromFile::AAddMeshfromFile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UStaticMeshComponent* Cylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylender"));
	Cylinder->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh>CylinderAsset(TEXT("/ReadAlter/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder"));
	if (CylinderAsset.Succeeded())
	{
		Cylinder->SetStaticMesh(CylinderAsset.Object);
		Cylinder->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		Cylinder->SetWorldScale3D(FVector(0.0f));
	}
}

// Called when the game starts or when spawned
void AAddMeshfromFile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAddMeshfromFile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

