// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "StateMachine.h"
#include "IdleState.h"
#include "StatesController.generated.h"

/**
 * 
 */
UCLASS()
class CPLUSPLUS_UNREAL_API AStatesController : public AAIController
{
	GENERATED_BODY()
public:
	AStatesController();
	~AStatesController();
	StateMachine machine;
	IdleState idle;
	virtual void BeginPlay() override;
	virtual void Tick(float deltaSeconds) override;	
};
