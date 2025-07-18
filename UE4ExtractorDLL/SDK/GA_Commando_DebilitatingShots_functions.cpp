﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_DebilitatingShots

#include "Basic.hpp"

#include "GA_Commando_DebilitatingShots_classes.hpp"
#include "GA_Commando_DebilitatingShots_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Commando_DebilitatingShots_C::ExecuteUbergraph_GA_Commando_DebilitatingShots(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "ExecuteUbergraph_GA_Commando_DebilitatingShots");

	Params::GA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Commando_DebilitatingShots_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayTag&              EventTag                                               (Parm)
// class UObject*                          OptionalObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle*Target_Data                                            (Parm, OutParm)
// class UClass**                          DebilitatingShots                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32*                                  Effect_Level                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32*                                  Stack_Count                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Commando_DebilitatingShots_C::SetupGameplayEffect(class AActor* HitActor, const struct FGameplayTag& EventTag, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int32* Effect_Level, int32* Stack_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "SetupGameplayEffect");

	Params::GA_Commando_DebilitatingShots_C_SetupGameplayEffect Parms{};

	Parms.HitActor = HitActor;
	Parms.EventTag = std::move(EventTag);
	Parms.OptionalObject = OptionalObject;

	UObject::ProcessEvent(Func, &Parms);

	if (Target_Data != nullptr)
		*Target_Data = std::move(Parms.Target_Data);

	if (DebilitatingShots != nullptr)
		*DebilitatingShots = Parms.DebilitatingShots;

	if (Effect_Level != nullptr)
		*Effect_Level = Parms.Effect_Level;

	if (Stack_Count != nullptr)
		*Stack_Count = Parms.Stack_Count;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Magnitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Stack_Count                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayEffectSpecHandle& EffectSpecHandle                                       (Parm)
// struct FGameplayEffectSpecHandle*       EffectspecHandleOut                                    (Parm, OutParm)

void UGA_Commando_DebilitatingShots_C::SetupAppliedEffect(float Duration, float Magnitude, int32 Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "SetupAppliedEffect");

	Params::GA_Commando_DebilitatingShots_C_SetupAppliedEffect Parms{};

	Parms.Duration = Duration;
	Parms.Magnitude = Magnitude;
	Parms.Stack_Count = Stack_Count;
	Parms.EffectSpecHandle = std::move(EffectSpecHandle);

	UObject::ProcessEvent(Func, &Parms);

	if (EffectspecHandleOut != nullptr)
		*EffectspecHandleOut = std::move(Parms.EffectspecHandleOut);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupFatigue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle*       EffectspecOutInstant                                   (Parm, OutParm)
// struct FGameplayEffectSpecHandle*       EffectspecOutDuration                                  (Parm, OutParm)

void UGA_Commando_DebilitatingShots_C::SetupFatigue(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "SetupFatigue");

	Params::GA_Commando_DebilitatingShots_C_SetupFatigue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EffectspecOutInstant != nullptr)
		*EffectspecOutInstant = std::move(Parms.EffectspecOutInstant);

	if (EffectspecOutDuration != nullptr)
		*EffectspecOutDuration = std::move(Parms.EffectspecOutDuration);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (Parm, ContainsInstancedReference)
// const struct FGameplayEventData&        Payload                                                (Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Commando_DebilitatingShots_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
