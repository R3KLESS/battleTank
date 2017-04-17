// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "tank.h"
#include "AIController.h"
#include "tankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API AtankAIController : public AAIController
{
	GENERATED_BODY()

public:
	Atank* getControlledTank() const;

	virtual void BeginPlay() override;
	
	
};
