// Copyright Epic Games, Inc. All Rights Reserved.


#include "Proyecto1GameModeBase.h"
#include "PlayerCharacter.h"
#include "ShooterHUD.h"

AProyecto1GameModeBase::AProyecto1GameModeBase()
{
	//Pasamos la ruta del Blueprint para obtener su clase y ponerlo como el Pawn por defecto en el GameMode
	static ConstructorHelpers::FClassFinder<APlayerCharacter> PlayerCharacterBP(TEXT("/Game/PlayerCharacterBP"));
	if (PlayerCharacterBP.Class != NULL)
	{
		DefaultPawnClass = PlayerCharacterBP.Class;
	}
	HUDClass = AShooterHUD::StaticClass();
}
