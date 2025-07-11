﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_HuskFrustration

#include "Basic.hpp"

#include "GAB_HuskFrustration_classes.hpp"
#include "GAB_HuskFrustration_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GAB_HuskFrustration.GAB_HuskFrustration_C.ExecuteUbergraph_GAB_HuskFrustration
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_HuskFrustration_C::ExecuteUbergraph_GAB_HuskFrustration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskFrustration_C", "ExecuteUbergraph_GAB_HuskFrustration");

	Params::GAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskFrustration_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskFrustration_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.Triggered_4426349D48BB9D962857A490453AEC50
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGAB_HuskFrustration_C::Triggered_4426349D48BB9D962857A490453AEC50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskFrustration_C", "Triggered_4426349D48BB9D962857A490453AEC50");

	Params::GAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.Cancelled_4426349D48BB9D962857A490453AEC50
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGAB_HuskFrustration_C::Cancelled_4426349D48BB9D962857A490453AEC50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskFrustration_C", "Cancelled_4426349D48BB9D962857A490453AEC50");

	Params::GAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.Completed_4426349D48BB9D962857A490453AEC50
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGAB_HuskFrustration_C::Completed_4426349D48BB9D962857A490453AEC50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskFrustration_C", "Completed_4426349D48BB9D962857A490453AEC50");

	Params::GAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
