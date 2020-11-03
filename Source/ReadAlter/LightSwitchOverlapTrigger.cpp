// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitchOverlapTrigger.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "DrawDebugHelpers.h"


// Sets default values
ALightSwitchOverlapTrigger::ALightSwitchOverlapTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	LightIntensity = 3000.f;
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point light"));
	PointLight->Intensity = LightIntensity;
	PointLight->bVisible = true;
	RootComponent = PointLight;

	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	LightSphere->InitSphereRadius(300.f);
	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetupAttachment(RootComponent);

	LightSphere->OnComponentBeginOverlap.AddDynamic(this, &ALightSwitchOverlapTrigger::OnOverlapBegin);
	LightSphere->OnComponentEndOverlap.AddDynamic(this, &ALightSwitchOverlapTrigger::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ALightSwitchOverlapTrigger::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugSphere(GetWorld(), GetActorLocation(), 300.f, 50 ,FColor::Cyan,true,-1,0,5.f);
}

// Called every frame
void ALightSwitchOverlapTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightSwitchOverlapTrigger::ToggleLight()
{
	PointLight->ToggleVisibility();
}

void ALightSwitchOverlapTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor &&(OtherActor != this) && OtherComp)
	{
		ToggleLight();
	}
}

void ALightSwitchOverlapTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ToggleLight();
	}
}

