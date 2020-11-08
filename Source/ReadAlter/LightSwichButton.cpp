// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwichButton.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"


// Sets default values
ALightSwichButton::ALightSwichButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LightIntensity = 3000.f;
	pointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	pointLight->Intensity = LightIntensity;
	pointLight->bVisible = true;
	RootComponent = pointLight;

	lightsphere = CreateDefaultSubobject<USphereComponent>(TEXT("Light Sphere component"));
	lightsphere->InitSphereRadius(300.0f);
	lightsphere->SetCollisionProfileName(TEXT("Triger"));
	lightsphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	lightsphere->SetupAttachment(RootComponent);



}

// Called when the game starts or when spawned
void ALightSwichButton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightSwichButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightSwichButton::ToggleLight()
{
	pointLight->ToggleVisibility();
}

