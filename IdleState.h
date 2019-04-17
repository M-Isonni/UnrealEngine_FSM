// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State.h"

/**
 * 
 */
class CPLUSPLUS_UNREAL_API IdleState : public State
{
public:
	IdleState();

	virtual void Update() override;
	virtual void OnExitState() override;
};

