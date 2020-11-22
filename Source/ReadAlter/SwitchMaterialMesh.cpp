// Fill out your copyright notice in the Description page of Project Settings.


#include "SwitchMaterialMesh.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Materials/Material.h"
#include "Components/BoxComponent.h"
#include "Math/Box.h"

// Sets default values
ASwitchMaterialMesh::ASwitchMaterialMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyStaticMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyStaticMesh->SetupAttachment(RootComponent);
	RootComponent = MyStaticMesh;


	MyBoxx = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	MyBoxx->InitBoxExtent(FVector(500, 500, 500));
	MyBoxx->SetCollisionProfileName("Trigger");
	MyBoxx->SetupAttachment(RootComponent);

	onMaterial=CreateDefaultSubobject<UMaterial>(TEXT("SwitchOnMaterial"));
	offMaterial=CreateDefaultSubobject<UMaterial>(TEXT("SwitchOfMaterial"));

	MyBoxx->OnComponentBeginOverlap.AddDynamic(this, &ASwitchMaterialMesh::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ASwitchMaterialMesh::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), FVector(500, 500, 500), FColor::Emerald, true, -1, 0, 10);

	MyStaticMesh->SetMaterial(0, offMaterial);
}

// Called every frame
void ASwitchMaterialMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ASwitchMaterialMesh::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && (OtherActor != this) && OtherComp != nullptr)
	{
		MyStaticMesh->SetMaterial(0, onMaterial);
	}
}



