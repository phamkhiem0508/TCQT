// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TCQTUserWidget.h"
#include "TCQTUserWidget_MainMenu.generated.h"

class UWidgetSwitcher;
class UButton;
/**
 * 
 */
UCLASS()
class TCQT_API UTCQTUserWidget_MainMenu : public UTCQTUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	UWidgetSwitcher* MainMenuSwitcher;
	
	UPROPERTY(meta = (BindWidget))
	UButton* ExitButton;

	UPROPERTY(meta = (BindWidget))
	UButton* StartButton;

protected:

protected:
	UTCQTUserWidget_MainMenu();
	virtual void NativeOnInitialized() override;

private:
	UFUNCTION()
	virtual void OnExitButtonClicked();

	UFUNCTION()
	virtual void OnStartButtonClicked();
};
