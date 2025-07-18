﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroInfoWidget

#include "Basic.hpp"

#include "HeroInfoWidget_classes.hpp"
#include "HeroInfoWidget_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function HeroInfoWidget.HeroInfoWidget_C.ExecuteUbergraph_HeroInfoWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroInfoWidget_C::ExecuteUbergraph_HeroInfoWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "ExecuteUbergraph_HeroInfoWidget");

	Params::HeroInfoWidget_C_ExecuteUbergraph_HeroInfoWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroInfoWidget.HeroInfoWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroInfoWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "PreConstruct");

	Params::HeroInfoWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroInfoWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::Refresh_Hero_Stats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Refresh Hero Stats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero XP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::Refresh_Hero_XP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Refresh Hero XP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::Refresh_Hero_Info()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Refresh Hero Info");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Bind Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::Bind_Delegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Bind Delegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Format
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::Refresh_Format()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Refresh Format");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Get XP Progress Tooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UWidget* UHeroInfoWidget_C::Get_XP_Progress_Tooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Get XP Progress Tooltip");

	Params::HeroInfoWidget_C_Get_XP_Progress_Tooltip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeroInfoWidget.HeroInfoWidget_C.On Player Data Updated
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::On_Player_Data_Updated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "On Player Data Updated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Set As Current Hero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroInfoWidget_C::Set_As_Current_Hero(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Set As Current Hero");

	Params::HeroInfoWidget_C_Set_As_Current_Hero Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero ID
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::Refresh_Hero_ID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "Refresh Hero ID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroInfoWidget.HeroInfoWidget_C.OnHeroStatsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroInfoWidget_C::OnHeroStatsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroInfoWidget_C", "OnHeroStatsChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
