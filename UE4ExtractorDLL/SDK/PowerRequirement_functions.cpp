﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerRequirement

#include "Basic.hpp"

#include "PowerRequirement_classes.hpp"
#include "PowerRequirement_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRequirement_C::ExecuteUbergraph_PowerRequirement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "ExecuteUbergraph_PowerRequirement");

	Params::PowerRequirement_C_ExecuteUbergraph_PowerRequirement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.HandleTeamPowerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamPower                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PersonalPower                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRequirement_C::HandleTeamPowerChanged(int32 TeamPower, int32 PersonalPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "HandleTeamPowerChanged");

	Params::PowerRequirement_C_HandleTeamPowerChanged Parms{};

	Parms.TeamPower = TeamPower;
	Parms.PersonalPower = PersonalPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerRequirement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerRequirement.PowerRequirement_C.SetRequirements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RequiredPower_0                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RecommendedPower_0                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRequirement_C::SetRequirements(int32 RequiredPower_0, int32 RecommendedPower_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "SetRequirements");

	Params::PowerRequirement_C_SetRequirements Parms{};

	Parms.RequiredPower_0 = RequiredPower_0;
	Parms.RecommendedPower_0 = RecommendedPower_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.Update
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamPower                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRequirement_C::Update(int32 TeamPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "Update");

	Params::PowerRequirement_C_Update Parms{};

	Parms.TeamPower = TeamPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartyPower                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRequirement_C::SetUIForRecommended(int32 PartyPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "SetUIForRecommended");

	Params::PowerRequirement_C_SetUIForRecommended Parms{};

	Parms.PartyPower = PartyPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartyPower                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRequirement_C::SetUIForRequired(int32 PartyPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "SetUIForRequired");

	Params::PowerRequirement_C_SetUIForRequired Parms{};

	Parms.PartyPower = PartyPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UWidget* UPowerRequirement_C::GenerateToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "GenerateToolTipWidget");

	Params::PowerRequirement_C_GenerateToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
