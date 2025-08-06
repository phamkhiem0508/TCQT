// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/TCQTHUD.h"
#include "UI/TCQTUserWidget_MainMenu.h"

void ATCQTHUD::BeginPlay()
{
	Super::BeginPlay();

	if (nullptr != MainMenuWidgetClass)
	{
		MainMenuWidget = CreateWidget<UTCQTUserWidget_MainMenu>(GetWorld(), MainMenuWidgetClass);

		if (nullptr != MainMenuWidget)
		{
			MainMenuWidget->AddToViewport();
		}
	}
}
