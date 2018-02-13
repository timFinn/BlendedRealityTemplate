// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "tc3_demoTool.generated.h"

UCLASS()
class TC3_DEMO_API Atc3_demoTool : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Atc3_demoTool();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
