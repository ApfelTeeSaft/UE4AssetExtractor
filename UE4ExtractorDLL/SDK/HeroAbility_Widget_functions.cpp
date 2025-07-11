﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroAbility_Widget

#include "Basic.hpp"

#include "HeroAbility_Widget_classes.hpp"
#include "HeroAbility_Widget_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function HeroAbility_Widget.HeroAbility_Widget_C.ExecuteUbergraph_HeroAbility_Widget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroAbility_Widget_C::ExecuteUbergraph_HeroAbility_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroAbility_Widget_C", "ExecuteUbergraph_HeroAbility_Widget");

	Params::HeroAbility_Widget_C_ExecuteUbergraph_HeroAbility_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroAbility_Widget.HeroAbility_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroAbility_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroAbility_Widget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroAbility_Widget.HeroAbility_Widget_C.Get Ability Kit Tooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UWidget* UHeroAbility_Widget_C::Get_Ability_Kit_Tooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroAbility_Widget_C", "Get Ability Kit Tooltip");

	Params::HeroAbility_Widget_C_Get_Ability_Kit_Tooltip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeroAbility_Widget.HeroAbility_Widget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*                  Ability_Kit                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Cost_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Is_Active_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroAbility_Widget_C::Update(class UFortAbilityKit* Ability_Kit, int32 Cost_0, bool Is_Active_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroAbility_Widget_C", "Update");

	Params::HeroAbility_Widget_C_Update Parms{};

	Parms.Ability_Kit = Ability_Kit;
	Parms.Cost_0 = Cost_0;
	Parms.Is_Active_0 = Is_Active_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroAbility_Widget.HeroAbility_Widget_C.On Ability Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*                  Ability_Button                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    SELECTED                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroAbility_Widget_C::On_Ability_Selected(class UFortBaseButton* Ability_Button, bool SELECTED)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroAbility_Widget_C", "On Ability Selected");

	Params::HeroAbility_Widget_C_On_Ability_Selected Parms{};

	Parms.Ability_Button = Ability_Button;
	Parms.SELECTED = SELECTED;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
