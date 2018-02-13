// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "tc3_demoHUD.generated.h"

UCLASS()
class Atc3_demoHUD : public AHUD
{
	GENERATED_BODY()

public:
	Atc3_demoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

