// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/TCQTPlayerController.h"

#include "UI/HUD/TCQTHUD.h"

void ATCQTPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the HUD
	if (ATCQTHUD* HUD = Cast<ATCQTHUD>(GetHUD()))
	{
	}
}
