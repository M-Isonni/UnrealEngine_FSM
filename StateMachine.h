// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"

/**
 * 
 */

#pragma once

#include <iostream>
#include <vector>

enum E_State { IDLE, PATROL, CHASE };
class AStatesController;
class State;
class CPLUSPLUS_UNREAL_API StateMachine {
public:
	StateMachine();
	~StateMachine();
	StateMachine(StateMachine& InMachine) = delete;
	AStatesController *owner;
	//UObject* owner;
	State*current_state;
	std::vector<TKeyValuePair<E_State, State>*> states;

	void Update();
	void Init(AStatesController* InOwner);
	void ChangeState(E_State new_state);
	void RegisterState(TKeyValuePair<E_State, State>* InState);
};
