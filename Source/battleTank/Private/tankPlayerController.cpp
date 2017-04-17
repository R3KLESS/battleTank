// Fill out your copyright notice in the Description page of Project Settings.


#include "battleTank.h"
#include "tankPlayerController.h"

void AtankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto controlledTank = getControlledTank();

	if (!controlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("player controller not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("player controller is possesing: %s"), *(controlledTank->GetName()));
	}
}

Atank* AtankPlayerController::getControlledTank() const
{
	return	Cast<Atank>(GetPawn());
}

 