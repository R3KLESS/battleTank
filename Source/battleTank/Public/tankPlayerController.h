// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "tank.h"
#include "GameFramework/PlayerController.h"
#include "tankPlayerController.generated.h" // must be the last include


/**
 * 
 */
UCLASS()
class BATTLETANK_API AtankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	Atank* getControlledTank() const;

	virtual void BeginPlay() override;

};
