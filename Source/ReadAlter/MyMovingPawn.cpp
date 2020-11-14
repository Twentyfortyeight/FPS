// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMovingPawn.h"
#include "PawnMovement.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"



// Sets default values

AMyMovingPawn::AMyMovingPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Our root component will be a sphere that reacts to physics
	USphereComponent* SPHEREComp = CreateDefaultSubobject<USphereComponent>(TEXT("RootComp"));
	RootComponent = SPHEREComp;
	SPHEREComp->InitSphereRadius(40.f);
	SPHEREComp->SetCollisionProfileName(TEXT("Pawn"));
	
	// Create and position a mesh component so we can see where our sphere is
	UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual Resperation"));
	SphereVisual->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereVisualAsset.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
		SphereVisual->SetRelativeLocation(FVector(0,0,-40.0f));
		SphereVisual->SetWorldScale3D(FVector(0.8f));
	}
	
	// Create a particle system that we can activate or deactivate
	OurParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MOVMENT PARTICLE"));
	OurParticleComp->SetupAttachment(SphereVisual);
	OurParticleComp->bAutoActivate = false;
	OurParticleComp->SetRelativeLocation(FVector(-20.f, 0.0f, 20.0f));
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleAsset.Succeeded())
	{
		OurParticleComp->SetTemplate(ParticleAsset.Object);
	}

	// Use a spring arm to give the camera smooth, natural-feeling motion
	USpringArmComponent* Springarm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Attachment"));
	Springarm->SetupAttachment(RootComponent);
	Springarm->RelativeRotation = FRotator(-45.0, 0.f, 0.f);
	Springarm->TargetArmLength = 400.0f;
	Springarm->bEnableCameraLag = true;
	Springarm->CameraLagSpeed = 3.0f;

	// Create a camera and attach to our spring arm
	UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(Springarm, USpringArmComponent::SocketName);
	
	// Take control of the default player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Create an instance of our movement component, and tell it to update our root component.
	OurPawnMovement = CreateDefaultSubobject<UPawnMovement>(TEXT("Custom movement"));
	OurPawnMovement->UpdatedComponent = RootComponent;

}

// Called when the game starts or when spawned
void AMyMovingPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyMovingPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}





void AMyMovingPawn::MoveForward(float AxisValue)
{
	if (OurPawnMovement &&(OurPawnMovement->UpdatedComponent== RootComponent))
	{
		OurPawnMovement->AddInputVector(GetActorForwardVector() * AxisValue);
	}

}

void AMyMovingPawn::MoveRight(float AxisValue)
{
	if (OurPawnMovement && (OurPawnMovement->UpdatedComponent == RootComponent))
	{
		OurPawnMovement->AddInputVector(GetActorRightVector() * AxisValue);
	}
}

void AMyMovingPawn::Turn(float AxisValue)
{
	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += AxisValue;
	SetActorRotation(NewRotation);

}

void AMyMovingPawn::ParticleToggle()
{
	if (OurParticleComp&&(OurParticleComp->Template))
	{
		OurParticleComp->ToggleActive();
	}
}

// Called to bind functionality to input
void AMyMovingPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAction("Toggle", IE_Pressed, this,&AMyMovingPawn::ParticleToggle);
	
	InputComponent->BindAxis("Turn", this, &AMyMovingPawn::Turn);
	InputComponent->BindAxis("MoveForward",  this, &AMyMovingPawn::MoveForward);
	InputComponent->BindAxis("MoveRight",  this, &AMyMovingPawn::MoveRight);
	
}



UPawnMovementComponent* AMyMovingPawn::GetMovementComponent() const
{
	return OurPawnMovement;
}
