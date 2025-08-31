// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_EgyptGameMode.h"
#include "Project_EgyptCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_EgyptGameMode::AProject_EgyptGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
