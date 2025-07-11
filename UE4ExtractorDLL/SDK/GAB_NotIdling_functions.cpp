﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_NotIdling

#include "Basic.hpp"

#include "GAB_NotIdling_classes.hpp"
#include "GAB_NotIdling_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GAB_NotIdling.GAB_NotIdling_C.ExecuteUbergraph_GAB_NotIdling
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_NotIdling_C::ExecuteUbergraph_GAB_NotIdling(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_NotIdling_C", "ExecuteUbergraph_GAB_NotIdling");

	Params::GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_NotIdling.GAB_NotIdling_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_NotIdling_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_NotIdling_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_NotIdling_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
