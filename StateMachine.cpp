// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine.h"
#include "StatesController.h"
#include "State.h"

StateMachine::StateMachine()
{	
	states = std::vector<TKeyValuePair<E_State, State>*>();
	current_state = NULL;
}

void StateMachine::Init(AStatesController* InOwner) {
	owner = InOwner;
}

StateMachine::~StateMachine()
{
}

void StateMachine::RegisterState(TKeyValuePair<E_State, State> *InState) {
	states.push_back(InState);
}

void StateMachine::ChangeState(E_State new_state) {
	if (current_state != NULL) {
		current_state->OnExitState();
	}
	for (auto s : states) {
		if (s->Key == new_state) {
			current_state = &s->Value;
		}
	}
}

void StateMachine::Update() {
	current_state->Update();
}
