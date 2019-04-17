// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class StateMachine;
class CPLUSPLUS_UNREAL_API State
{	
public:
	State();
	virtual ~State();
	virtual void Update();
	virtual void OnExitState();
protected:
	StateMachine* ownerMachine;
};
