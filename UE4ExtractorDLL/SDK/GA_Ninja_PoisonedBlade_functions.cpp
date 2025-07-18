﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_PoisonedBlade

#include "Basic.hpp"

#include "GA_Ninja_PoisonedBlade_classes.hpp"
#include "GA_Ninja_PoisonedBlade_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C.ExecuteUbergraph_GA_Ninja_PoisonedBlade
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Ninja_PoisonedBlade_C::ExecuteUbergraph_GA_Ninja_PoisonedBlade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_PoisonedBlade_C", "ExecuteUbergraph_GA_Ninja_PoisonedBlade");

	Params::GA_Ninja_PoisonedBlade_C_ExecuteUbergraph_GA_Ninja_PoisonedBlade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Ninja_PoisonedBlade_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_PoisonedBlade_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Ninja_PoisonedBlade_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (Parm, ContainsInstancedReference)
// const struct FGameplayEventData&        Payload                                                (Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Ninja_PoisonedBlade_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_PoisonedBlade_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Ninja_PoisonedBlade_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
