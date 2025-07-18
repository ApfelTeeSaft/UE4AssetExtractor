﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildingLevelWidget

#include "Basic.hpp"

#include "BuildingLevelWidget_classes.hpp"
#include "BuildingLevelWidget_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function BuildingLevelWidget.BuildingLevelWidget_C.ExecuteUbergraph_BuildingLevelWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingLevelWidget_C::ExecuteUbergraph_BuildingLevelWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingLevelWidget_C", "ExecuteUbergraph_BuildingLevelWidget");

	Params::BuildingLevelWidget_C_ExecuteUbergraph_BuildingLevelWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildingLevelWidget.BuildingLevelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildingLevelWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingLevelWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildingLevelWidget.BuildingLevelWidget_C.Set Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   New_Level                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingLevelWidget_C::Set_Level(int32 New_Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingLevelWidget_C", "Set Level");

	Params::BuildingLevelWidget_C_Set_Level Parms{};

	Parms.New_Level = New_Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildingLevelWidget.BuildingLevelWidget_C.Set Brush Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBrushSize                          New_Size                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingLevelWidget_C::Set_Brush_Size(EFortBrushSize New_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingLevelWidget_C", "Set Brush Size");

	Params::BuildingLevelWidget_C_Set_Brush_Size Parms{};

	Parms.New_Size = New_Size;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildingLevelWidget.BuildingLevelWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildingLevelWidget_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingLevelWidget_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
