// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "SecondTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class READALTER_API ASecondTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	
	ASecondTriggerBox();
		
	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, AActor* OtherActor);


};
