// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClaasRoomGameMode.h"
#include "ClaasRoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClaasRoomGameMode::AClaasRoomGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
