// Fill out your copyright notice in the Description page of Project Settings.


#include "DdebugHelpers.h"
#include "Math/Box.h"
#include "Math/TransformNonVectorized.h" 
#include "DrawDebugHelpers.h"

// Sets default values
ADdebugHelpers::ADdebugHelpers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	/*PrimaryActorTick.bCanEverTick = true;
	LocationOne = FVector(0, 0, 600);
	LocationTwo = FVector(0, -600, 600);
	LocationTree = FVector(0, 600, 600);
	LocationFoo = FVector(-300, 0, 600);
	LocationFive = FVector(400, 0, 600);

	MyBox = FBox(FVector(0, 0, 0), FVector(200 , 200 , 200));// Класс FBox выключает в себя минимальный и максимальный размер описаного обьекта
	MyTRS.SetLocation(FVector(0, 0, 0)); //изменение локации 
	*/

}

// Called when the game starts or when spawned
void ADdebugHelpers::BeginPlay()
{
	Super::BeginPlay();
	
	/*DrawDebugPoint(GetWorld(), LocationOne, 200, FColor(52, 220, 239),true);
	DrawDebugSphere(GetWorld(), LocationTwo, 200, 100, FColor(181, 0, 0), true,-1, 0 , 20);/*после переменной LTwo идет сайз сферы 
	после true идет тикнес плотность сферы
	
	DrawDebugCircle(GetWorld(), LocationTree, 200, 50, FColor(181, 0, 0), true,-1 , 0 ,10);
	DrawDebugSolidBox(GetWorld(),MyBox,FColor(50, 30, 40),MyTRS,true);
	DrawDebugBox(GetWorld(), LocationFive, FVector(100, 100, 100), FColor::Purple, true, -1, 0, 1);
	DrawDebugLine(GetWorld(), LocationFoo, FVector(500, 500, 500), FColor::Emerald, true, -1, 0, 1);
    */
}

// Called every frame
void ADdebugHelpers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

