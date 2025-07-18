﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_GetSleepLocation

#include "Basic.hpp"

#include "BTTask_GetSleepLocation_classes.hpp"
#include "BTTask_GetSleepLocation_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function BTTask_GetSleepLocation.BTTask_GetSleepLocation_C.ExecuteUbergraph_BTTask_GetSleepLocation
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_GetSleepLocation_C::ExecuteUbergraph_BTTask_GetSleepLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_GetSleepLocation_C", "ExecuteUbergraph_BTTask_GetSleepLocation");

	Params::BTTask_GetSleepLocation_C_ExecuteUbergraph_BTTask_GetSleepLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_GetSleepLocation.BTTask_GetSleepLocation_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_GetSleepLocation_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_GetSleepLocation_C", "ReceiveExecute");

	Params::BTTask_GetSleepLocation_C_ReceiveExecute Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
