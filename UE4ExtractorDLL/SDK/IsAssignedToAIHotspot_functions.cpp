﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IsAssignedToAIHotspot

#include "Basic.hpp"

#include "IsAssignedToAIHotspot_classes.hpp"
#include "IsAssignedToAIHotspot_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function IsAssignedToAIHotspot.IsAssignedToAIHotSpot_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UIsAssignedToAIHotSpot_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IsAssignedToAIHotSpot_C", "PerformConditionCheckAI");

	Params::IsAssignedToAIHotSpot_C_PerformConditionCheckAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
