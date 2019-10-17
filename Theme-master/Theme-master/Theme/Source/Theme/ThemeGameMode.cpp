// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ThemeGameMode.h"
#include "ThemeHUD.h"
#include "ThemeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThemeGameMode::AThemeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AThemeHUD::StaticClass();
}
