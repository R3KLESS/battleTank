// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "tankAIController.h"

void AtankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto aiControlledTank = getControlledTank();

	if (!aiControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ai controller not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ai controller is possesing: %s"), *(aiControlledTank->GetName()));
	}
}

Atank* AtankAIController::getControlledTank() const
{
	return	Cast<Atank>(GetPawn()); 
}
