// Copyright Epic Games, Inc. All Rights Reserved.

#include "JamGameMode.h"
#include "JamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJamGameMode::AJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
