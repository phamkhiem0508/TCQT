// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/TCQTUserWidget_MainMenu.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "GameInstance/TCQTGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

UTCQTUserWidget_MainMenu::UTCQTUserWidget_MainMenu()
{
}

void UTCQTUserWidget_MainMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	UE_LOG(LogTemp, Display, TEXT("UTCQTUserWidget_MainMenu constructor"));
	if (nullptr != ExitButton)
	{
		UE_LOG(LogTemp, Display, TEXT("Exit Button Clicked"));
		ExitButton->OnClicked.AddDynamic(this, &UTCQTUserWidget_MainMenu::OnExitButtonClicked);
		StartButton->OnClicked.AddDynamic(this, &UTCQTUserWidget_MainMenu::OnStartButtonClicked);
	}
}

void UTCQTUserWidget_MainMenu::OnExitButtonClicked()
{
	UE_LOG(LogTemp, Display, TEXT("Exit Button Clicked"));

	if (UTCQTGameInstance* GI = GetGameInstance<UTCQTGameInstance>())
	{
		GI->QuitGame();
	}
}

void UTCQTUserWidget_MainMenu::OnStartButtonClicked()
{
	UE_LOG(LogTemp, Display, TEXT("Start Button Clicked"));

	if (nullptr != MainMenuSwitcher)
	{
		MainMenuSwitcher->SetActiveWidgetIndex(1); 
	}

}
