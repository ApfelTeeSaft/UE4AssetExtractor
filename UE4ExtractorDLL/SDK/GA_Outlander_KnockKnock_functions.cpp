﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_KnockKnock

#include "Basic.hpp"

#include "GA_Outlander_KnockKnock_classes.hpp"
#include "GA_Outlander_KnockKnock_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.ExecuteUbergraph_GA_Outlander_KnockKnock
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Outlander_KnockKnock_C::ExecuteUbergraph_GA_Outlander_KnockKnock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Outlander_KnockKnock_C", "ExecuteUbergraph_GA_Outlander_KnockKnock");

	Params::GA_Outlander_KnockKnock_C_ExecuteUbergraph_GA_Outlander_KnockKnock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Outlander_KnockKnock_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Outlander_KnockKnock_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Outlander_KnockKnock_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Targeted_8217F61642070692A0A818BB146A36B8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Outlander_KnockKnock_C::Targeted_8217F61642070692A0A818BB146A36B8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Outlander_KnockKnock_C", "Targeted_8217F61642070692A0A818BB146A36B8");

	Params::GA_Outlander_KnockKnock_C_Targeted_8217F61642070692A0A818BB146A36B8 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Cancelled_8217F61642070692A0A818BB146A36B8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Outlander_KnockKnock_C::Cancelled_8217F61642070692A0A818BB146A36B8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Outlander_KnockKnock_C", "Cancelled_8217F61642070692A0A818BB146A36B8");

	Params::GA_Outlander_KnockKnock_C_Cancelled_8217F61642070692A0A818BB146A36B8 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.OtherTargetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Outlander_KnockKnock_C::OtherTargetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Outlander_KnockKnock_C", "OtherTargetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (Parm, ContainsInstancedReference)
// const struct FGameplayEventData&        Payload                                                (Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Outlander_KnockKnock_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Outlander_KnockKnock_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Outlander_KnockKnock_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform UGA_Outlander_KnockKnock_C::GetCustomAbilitySourceTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Outlander_KnockKnock_C", "GetCustomAbilitySourceTransform");

	Params::GA_Outlander_KnockKnock_C_GetCustomAbilitySourceTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
