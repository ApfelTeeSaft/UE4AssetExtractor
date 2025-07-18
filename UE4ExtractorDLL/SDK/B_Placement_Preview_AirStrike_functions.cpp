﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Placement_Preview_AirStrike

#include "Basic.hpp"

#include "B_Placement_Preview_AirStrike_classes.hpp"
#include "B_Placement_Preview_AirStrike_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ExecuteUbergraph_B_Placement_Preview_AirStrike
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_AirStrike_C::ExecuteUbergraph_B_Placement_Preview_AirStrike(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "ExecuteUbergraph_B_Placement_Preview_AirStrike");

	Params::B_Placement_Preview_AirStrike_C_ExecuteUbergraph_B_Placement_Preview_AirStrike Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.RestartLineReticule
// (BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::RestartLineReticule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "RestartLineReticule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SwitchType
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FVector>&           Positions_With_Duplicates                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<struct FVector>&           Cleaned_Positions                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<int32>&                    Duplicated_Entries                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Placement_Preview_AirStrike_C::SwitchType(const TArray<struct FVector>& Positions_With_Duplicates, const TArray<struct FVector>& Cleaned_Positions, const TArray<int32>& Duplicated_Entries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "SwitchType");

	Params::B_Placement_Preview_AirStrike_C_SwitchType Parms{};

	Parms.Positions_With_Duplicates = std::move(Positions_With_Duplicates);
	Parms.Cleaned_Positions = std::move(Cleaned_Positions);
	Parms.Duplicated_Entries = std::move(Duplicated_Entries);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetVectorParameterValueOnAllPreviewMIDs
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ParamName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FLinearColor&              ParamValue                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_AirStrike_C::SetVectorParameterValueOnAllPreviewMIDs(class FName ParamName, const struct FLinearColor& ParamValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "SetVectorParameterValueOnAllPreviewMIDs");

	Params::B_Placement_Preview_AirStrike_C_SetVectorParameterValueOnAllPreviewMIDs Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = std::move(ParamValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetScalarParameterValueOnAllPreviewMIDs
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ParamName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ParamValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_AirStrike_C::SetScalarParameterValueOnAllPreviewMIDs(class FName ParamName, float ParamValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "SetScalarParameterValueOnAllPreviewMIDs");

	Params::B_Placement_Preview_AirStrike_C_SetScalarParameterValueOnAllPreviewMIDs Parms{};

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSafeToPlace                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_AirStrike_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "OnUpdateVisuals");

	Params::B_Placement_Preview_AirStrike_C_OnUpdateVisuals Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.bSafeToPlace = bSafeToPlace;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateScale
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   InWorldSpacePivot                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_AirStrike_C::OnUpdateScale(float Scale, const struct FVector& InWorldSpacePivot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "OnUpdateScale");

	Params::B_Placement_Preview_AirStrike_C_OnUpdateScale Parms{};

	Parms.Scale = Scale;
	Parms.InWorldSpacePivot = std::move(InWorldSpacePivot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnInitializeDecoPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// const class ABuildingActor*             NewBuildingActor                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const class UFortDecoItemDefinition*    NewDecoItemDefinition                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_AirStrike_C::OnInitializeDecoPreview(const class ABuildingActor* NewBuildingActor, const class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "OnInitializeDecoPreview");

	Params::B_Placement_Preview_AirStrike_C_OnInitializeDecoPreview Parms{};

	Parms.NewBuildingActor = NewBuildingActor;
	Parms.NewDecoItemDefinition = NewDecoItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnBounceMotionUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   VectorScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_AirStrike_C::OnBounceMotionUpdate(float VectorScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "OnBounceMotionUpdate");

	Params::B_Placement_Preview_AirStrike_C_OnBounceMotionUpdate Parms{};

	Parms.VectorScale = VectorScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__UpdateFunc
// (BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::Spawn_Arrow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "Spawn Arrow__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__FinishedFunc
// (BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::Spawn_Arrow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "Spawn Arrow__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Kill Emitters and Start Times
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::Kill_Emitters_and_Start_Times()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Preview_AirStrike_C", "Kill Emitters and Start Times");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
