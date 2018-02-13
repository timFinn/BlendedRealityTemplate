// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "tc3_demoGameMode.h"
#include "tc3_demoHUD.h"
#include "tc3_demoCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atc3_demoGameMode::Atc3_demoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atc3_demoHUD::StaticClass();
}
