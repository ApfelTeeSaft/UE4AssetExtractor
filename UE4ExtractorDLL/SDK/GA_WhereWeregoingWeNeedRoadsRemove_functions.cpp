﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WhereWeregoingWeNeedRoadsRemove

#include "Basic.hpp"

#include "GA_WhereWeregoingWeNeedRoadsRemove_classes.hpp"
#include "GA_WhereWeregoingWeNeedRoadsRemove_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GA_WhereWeregoingWeNeedRoadsRemove.GA_WhereWeregoingWeNeedRoadsRemove_C.ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_WhereWeregoingWeNeedRoadsRemove_C::ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WhereWeregoingWeNeedRoadsRemove_C", "ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove");

	Params::GA_WhereWeregoingWeNeedRoadsRemove_C_ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WhereWeregoingWeNeedRoadsRemove.GA_WhereWeregoingWeNeedRoadsRemove_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_WhereWeregoingWeNeedRoadsRemove_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WhereWeregoingWeNeedRoadsRemove_C", "K2_ActivateAbilityFromEvent");

	Params::GA_WhereWeregoingWeNeedRoadsRemove_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
