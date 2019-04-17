// Fill out your copyright notice in the Description page of Project Settings.


#include "StatesController.h"

AStatesController::AStatesController() {
	//machine.Init(this);
	TKeyValuePair<E_State, State>* IdleState = new TKeyValuePair<E_State, State>(IDLE, idle);
	machine.RegisterState(IdleState);
}

AStatesController::~AStatesController() {
	
}

void AStatesController::BeginPlay() {
	machine.Init(this);
}
void AStatesController::Tick(float deltaSeconds){
	machine.Update();
}