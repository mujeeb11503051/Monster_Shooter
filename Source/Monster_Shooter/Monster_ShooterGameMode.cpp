// Copyright Epic Games, Inc. All Rights Reserved.

#include "Monster_ShooterGameMode.h"
#include "Monster_ShooterHUD.h"
#include "Monster_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMonster_ShooterGameMode::AMonster_ShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMonster_ShooterHUD::StaticClass();
}
