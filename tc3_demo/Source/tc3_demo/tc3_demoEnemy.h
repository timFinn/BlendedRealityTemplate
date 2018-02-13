// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "tc3_demoEnemy.generated.h"

UCLASS()
class TC3_DEMO_API Atc3_demoEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Atc3_demoEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
