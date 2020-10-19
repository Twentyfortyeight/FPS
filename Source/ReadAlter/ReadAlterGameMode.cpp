// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ReadAlterGameMode.h"
#include "ReadAlterHUD.h"
#include "ReadAlterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReadAlterGameMode::AReadAlterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AReadAlterHUD::StaticClass();
}
