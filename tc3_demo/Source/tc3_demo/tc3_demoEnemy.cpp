// Fill out your copyright notice in the Description page of Project Settings.

#include "tc3_demoEnemy.h"


// Sets default values
Atc3_demoEnemy::Atc3_demoEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atc3_demoEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Atc3_demoEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Atc3_demoEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

