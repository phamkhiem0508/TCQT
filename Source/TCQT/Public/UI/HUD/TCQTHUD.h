// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TCQTHUD.generated.h"

class UTCQTUserWidget_MainMenu;
/**
 * 
 */
UCLASS()
class TCQT_API ATCQTHUD : public AHUD
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category="TCQT")
	TSubclassOf<UTCQTUserWidget_MainMenu> MainMenuWidgetClass = nullptr;
	UPROPERTY()
	TObjectPtr<UTCQTUserWidget_MainMenu> MainMenuWidget = nullptr;

protected:
	virtual void BeginPlay() override;
};
