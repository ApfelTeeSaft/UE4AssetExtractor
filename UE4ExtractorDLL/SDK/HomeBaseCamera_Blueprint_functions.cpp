﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HomeBaseCamera_Blueprint

#include "Basic.hpp"

#include "HomeBaseCamera_Blueprint_classes.hpp"
#include "HomeBaseCamera_Blueprint_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ExecuteUbergraph_HomeBaseCamera_Blueprint
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHomeBaseCamera_Blueprint_C::ExecuteUbergraph_HomeBaseCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ExecuteUbergraph_HomeBaseCamera_Blueprint");

	Params::HomeBaseCamera_Blueprint_C_ExecuteUbergraph_HomeBaseCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDragEnd
// (Event, Public, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::OnDragEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "OnDragEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDragBegin
// (Event, Public, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::OnDragBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "OnDragBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.BP Clear Focus
// (BlueprintCallable, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::BP_Clear_Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "BP Clear Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.SetBuildingFocus
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraComponent*                 BuildingCameraComponent                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHomeBaseCamera_Blueprint_C::SetBuildingFocus(class UCameraComponent* BuildingCameraComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "SetBuildingFocus");

	Params::HomeBaseCamera_Blueprint_C_SetBuildingFocus Parms{};

	Parms.BuildingCameraComponent = BuildingCameraComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ClearBuildingFocus
// (Event, Public, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::ClearBuildingFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ClearBuildingFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHomeBaseCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ReceiveTick");

	Params::HomeBaseCamera_Blueprint_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (Parm)

void AHomeBaseCamera_Blueprint_C::InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30");

	Params::HomeBaseCamera_Blueprint_C_InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (Parm)

void AHomeBaseCamera_Blueprint_C::InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31");

	Params::HomeBaseCamera_Blueprint_C_InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomOutTimeline__UpdateFunc
// (BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::ZoomOutTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ZoomOutTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomOutTimeline__FinishedFunc
// (BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::ZoomOutTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ZoomOutTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomInTimeline__UpdateFunc
// (BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::ZoomInTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ZoomInTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomInTimeline__FinishedFunc
// (BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::ZoomInTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "ZoomInTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.StoreLerpFrom
// (Public, BlueprintCallable, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::StoreLerpFrom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "StoreLerpFrom");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.StorePrevious
// (Public, BlueprintCallable, BlueprintEvent)

void AHomeBaseCamera_Blueprint_C::StorePrevious()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "StorePrevious");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.IsBusy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsBusy_0                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHomeBaseCamera_Blueprint_C::IsBusy(bool* IsBusy_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeBaseCamera_Blueprint_C", "IsBusy");

	Params::HomeBaseCamera_Blueprint_C_IsBusy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsBusy_0 != nullptr)
		*IsBusy_0 = Parms.IsBusy_0;
}

}

#pragma pack(pop)
