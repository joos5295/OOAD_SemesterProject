// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "OOAD_SemesterProjectGameMode.h"
#include "OOAD_SemesterProjectHUD.h"
#include "OOAD_SemesterProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOOAD_SemesterProjectGameMode::AOOAD_SemesterProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOOAD_SemesterProjectHUD::StaticClass();
}
