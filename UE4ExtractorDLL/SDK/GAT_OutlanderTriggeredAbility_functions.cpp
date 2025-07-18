﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_OutlanderTriggeredAbility

#include "Basic.hpp"

#include "GAT_OutlanderTriggeredAbility_classes.hpp"
#include "GAT_OutlanderTriggeredAbility_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.ExecuteUbergraph_GAT_OutlanderTriggeredAbility
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_OutlanderTriggeredAbility_C::ExecuteUbergraph_GAT_OutlanderTriggeredAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_OutlanderTriggeredAbility_C", "ExecuteUbergraph_GAT_OutlanderTriggeredAbility");

	Params::GAT_OutlanderTriggeredAbility_C_ExecuteUbergraph_GAT_OutlanderTriggeredAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UGAT_OutlanderTriggeredAbility_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_OutlanderTriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::GAT_OutlanderTriggeredAbility_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
