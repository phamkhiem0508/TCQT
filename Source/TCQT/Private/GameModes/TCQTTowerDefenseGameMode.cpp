// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/TCQTTowerDefenseGameMode.h"

#include "Controllers/TCQTPlayerController.h"
#include "UI/HUD/TCQTHUD.h"

ATCQTTowerDefenseGameMode::ATCQTTowerDefenseGameMode()
{
	PlayerControllerClass = ATCQTPlayerController::StaticClass();
	HUDClass = ATCQTHUD::StaticClass();
}
