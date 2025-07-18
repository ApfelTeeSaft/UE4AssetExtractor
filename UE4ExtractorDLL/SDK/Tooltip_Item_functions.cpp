﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tooltip_Item

#include "Basic.hpp"

#include "Tooltip_Item_classes.hpp"
#include "Tooltip_Item_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltip_Item_C::ExecuteUbergraph_Tooltip_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "ExecuteUbergraph_Tooltip-Item");

	Params::Tooltip_Item_C_ExecuteUbergraph_Tooltip_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tooltip-Item.Tooltip-Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltip_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UTooltip_Item_C::Get_Icon_Brush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Get Icon Brush");

	Params::Tooltip_Item_C_Get_Icon_Brush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FLinearColor UTooltip_Item_C::Get_Theme_Color__Normal_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Get Theme Color [Normal]");

	Params::Tooltip_Item_C_Get_Theme_Color__Normal_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Update
// (Protected, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Get Tooltip Header Visibility");

	Params::Tooltip_Item_C_Get_Tooltip_Header_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Icon_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Get Tooltip Header Icon Visibility");

	Params::Tooltip_Item_C_Get_Tooltip_Header_Icon_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Text_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Get Tooltip Header Text Visibility");

	Params::Tooltip_Item_C_Get_Tooltip_Header_Text_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Set Item Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltip_Item_C::Set_Item_Data(class UFortItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Set Item Data");

	Params::Tooltip_Item_C_Set_Item_Data Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Weapon_Stats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Weapon Stats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Basic Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Basic_Info()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Basic Info");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Ranged Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortRangedWeaponStats&    Data                                                   (Parm)

void UTooltip_Item_C::Build_Ranged_Weapon_Stats(const struct FFortRangedWeaponStats& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Ranged Weapon Stats");

	Params::Tooltip_Item_C_Build_Ranged_Weapon_Stats Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Melee Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortMeleeWeaponStats&     Data                                                   (Parm)

void UTooltip_Item_C::Build_Melee_Weapon_Stats(const struct FFortMeleeWeaponStats& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Melee Weapon Stats");

	Params::Tooltip_Item_C_Build_Melee_Weapon_Stats Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Base Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortBaseWeaponStats&      Data                                                   (Parm)

void UTooltip_Item_C::Build_Base_Weapon_Stats(const struct FFortBaseWeaponStats& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Base Weapon Stats");

	Params::Tooltip_Item_C_Build_Base_Weapon_Stats Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tooltip-Item.Tooltip-Item_C.Get Scaled Stat (float)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Base_Stat                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Scaling                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Level                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                                  Scaled_Stat                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltip_Item_C::Get_Scaled_Stat__float_(float Base_Stat, float Scaling, int32 Level, float* Scaled_Stat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Get Scaled Stat (float)");

	Params::Tooltip_Item_C_Get_Scaled_Stat__float_ Parms{};

	Parms.Base_Stat = Base_Stat;
	Parms.Scaling = Scaling;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

	if (Scaled_Stat != nullptr)
		*Scaled_Stat = Parms.Scaled_Stat;
}


// Function Tooltip-Item.Tooltip-Item_C.Build Weapon DPS Stat
// (Public, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Weapon_DPS_Stat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Weapon DPS Stat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Worker Stats
// (Public, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Worker_Stats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Worker Stats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Alteration Info
// (Public, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Alteration_Info()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Alteration Info");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Trap Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Trap_Stats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Trap Stats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Consumable Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Consumable_Stats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Consumable Stats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tooltip-Item.Tooltip-Item_C.Build Durability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltip_Item_C::Build_Durability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Item_C", "Build Durability");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
