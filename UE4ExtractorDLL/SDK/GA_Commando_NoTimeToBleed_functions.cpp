﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_NoTimeToBleed

#include "Basic.hpp"

#include "GA_Commando_NoTimeToBleed_classes.hpp"
#include "GA_Commando_NoTimeToBleed_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.ExecuteUbergraph_GA_Commando_NoTimeToBleed
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Commando_NoTimeToBleed_C::ExecuteUbergraph_GA_Commando_NoTimeToBleed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_NoTimeToBleed_C", "ExecuteUbergraph_GA_Commando_NoTimeToBleed");

	Params::GA_Commando_NoTimeToBleed_C_ExecuteUbergraph_GA_Commando_NoTimeToBleed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Commando_NoTimeToBleed_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_NoTimeToBleed_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Commando_NoTimeToBleed_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.ApplyHeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Commando_C*           CommandoPawn_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const class AActor*                     Actor                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Commando_NoTimeToBleed_C::ApplyHeal(class APlayerPawn_Commando_C* CommandoPawn_0, const class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_NoTimeToBleed_C", "ApplyHeal");

	Params::GA_Commando_NoTimeToBleed_C_ApplyHeal Parms{};

	Parms.CommandoPawn_0 = CommandoPawn_0;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (Parm, ContainsInstancedReference)
// const struct FGameplayEventData&        Payload                                                (Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Commando_NoTimeToBleed_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_NoTimeToBleed_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Commando_NoTimeToBleed_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
