﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MyTown_Building_Master

#include "Basic.hpp"

#include "MyTown_Building_Master_classes.hpp"
#include "MyTown_Building_Master_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function MyTown_Building_Master.MyTown_Building_Master_C.ExecuteUbergraph_MyTown_Building_Master
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::ExecuteUbergraph_MyTown_Building_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "ExecuteUbergraph_MyTown_Building_Master");

	Params::MyTown_Building_Master_C_ExecuteUbergraph_MyTown_Building_Master Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HandleClientEvent_OnboardingBuildingsStage3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          EventFocus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FFortClientEvent&          ClientEvent                                            (ConstParm, Parm, OutParm, ReferenceParm)

void AMyTown_Building_Master_C::HandleClientEvent_OnboardingBuildingsStage3(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HandleClientEvent_OnboardingBuildingsStage3");

	Params::MyTown_Building_Master_C_HandleClientEvent_OnboardingBuildingsStage3 Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HandleClientEvent_OnboardingBuildingsStage2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          EventFocus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FFortClientEvent&          ClientEvent                                            (ConstParm, Parm, OutParm, ReferenceParm)

void AMyTown_Building_Master_C::HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HandleClientEvent_OnboardingBuildingsStage2");

	Params::MyTown_Building_Master_C_HandleClientEvent_OnboardingBuildingsStage2 Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HandleClientEvent_OnboardingBuildingsStage1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          EventFocus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FFortClientEvent&          ClientEvent                                            (ConstParm, Parm, OutParm, ReferenceParm)

void AMyTown_Building_Master_C::HandleClientEvent_OnboardingBuildingsStage1(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HandleClientEvent_OnboardingBuildingsStage1");

	Params::MyTown_Building_Master_C_HandleClientEvent_OnboardingBuildingsStage1 Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnBuildingInfoUpdated
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::OnBuildingInfoUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnBuildingInfoUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.SetFlagIcon
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::SetFlagIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "SetFlagIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnMyTownBuildingUpgradeFinished_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    BuildingTemplateId_0                                   (Parm, ZeroConstructor)
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::OnMyTownBuildingUpgradeFinished_Event_0(const class FString& BuildingTemplateId_0, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnMyTownBuildingUpgradeFinished_Event_0");

	Params::MyTown_Building_Master_C_OnMyTownBuildingUpgradeFinished_Event_0 Parms{};

	Parms.BuildingTemplateId_0 = std::move(BuildingTemplateId_0);
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnMyTownBuildingWorkersChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    BuildingTemplateId_0                                   (Parm, ZeroConstructor)

void AMyTown_Building_Master_C::OnMyTownBuildingWorkersChanged_Event_0(const class FString& BuildingTemplateId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnMyTownBuildingWorkersChanged_Event_0");

	Params::MyTown_Building_Master_C_OnMyTownBuildingWorkersChanged_Event_0 Parms{};

	Parms.BuildingTemplateId_0 = std::move(BuildingTemplateId_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnMyTownBuildingPanelClosed_Event_0
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::OnMyTownBuildingPanelClosed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnMyTownBuildingPanelClosed_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnMyTownBuildingPanelOpened_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    BuildingTemplateId_0                                   (Parm, ZeroConstructor)

void AMyTown_Building_Master_C::OnMyTownBuildingPanelOpened_Event_0(const class FString& BuildingTemplateId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnMyTownBuildingPanelOpened_Event_0");

	Params::MyTown_Building_Master_C_OnMyTownBuildingPanelOpened_Event_0 Parms{};

	Parms.BuildingTemplateId_0 = std::move(BuildingTemplateId_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.UpdateRoads
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::UpdateRoads()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "UpdateRoads");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CheckCollision
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CheckCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CheckCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnEndCursorOver_Event_1
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::OnEndCursorOver_Event_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnEndCursorOver_Event_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnBeginCursorOver_Event_1
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::OnBeginCursorOver_Event_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnBeginCursorOver_Event_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.OnMyTownBuildingStateChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMyTownBuildingState                    NewState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EMyTownBuildingState                    OldState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::OnMyTownBuildingStateChanged_Event_0(EMyTownBuildingState NewState, EMyTownBuildingState OldState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "OnMyTownBuildingStateChanged_Event_0");

	Params::MyTown_Building_Master_C_OnMyTownBuildingStateChanged_Event_0 Parms{};

	Parms.NewState = NewState;
	Parms.OldState = OldState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.MyTown_BuildingStates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Building_Template_ID                                   (Parm, ZeroConstructor)

void AMyTown_Building_Master_C::MyTown_BuildingStates(const class FString& Building_Template_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "MyTown_BuildingStates");

	Params::MyTown_Building_Master_C_MyTown_BuildingStates Parms{};

	Parms.Building_Template_ID = std::move(Building_Template_ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.SetUnbuiltPlatformIcon
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::SetUnbuiltPlatformIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "SetUnbuiltPlatformIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMyTown_Building_Master_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.UpgradeBuilding
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::UpgradeBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "UpgradeBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildBuilding
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::BuildBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanUpgradeClosed
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanUpgradeClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanUpgradeClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanUpgradeOpen
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanUpgradeOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanUpgradeOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.LockedClosed
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::LockedClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "LockedClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.LockedOpen
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::LockedOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "LockedOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanBuildClosed
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanBuildClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanBuildClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanBuildOpen
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanBuildOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanBuildOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.IdleClosed
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::IdleClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "IdleClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.IdleOpen
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::IdleOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "IdleOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanUpgradeOut
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanUpgradeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanUpgradeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanUpgradeOver
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanUpgradeOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanUpgradeOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HoloBuildingAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::HoloBuildingAnim(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HoloBuildingAnim");

	Params::MyTown_Building_Master_C_HoloBuildingAnim Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HoloBuildingRotation
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::HoloBuildingRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HoloBuildingRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HoloBuildingMeshAssign
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::HoloBuildingMeshAssign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HoloBuildingMeshAssign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.LockedOut
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::LockedOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "LockedOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.LockedOver
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::LockedOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "LockedOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanBuildOut
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanBuildOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanBuildOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanBuildOver
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanBuildOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanBuildOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.Idle CursorOut
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::Idle_CursorOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "Idle CursorOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.Idle Cursor Over
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::Idle_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "Idle Cursor Over");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanBuild
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanBuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanBuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.Locked
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::Locked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "Locked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.CanUpgrade
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::CanUpgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "CanUpgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.idle
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::idle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "idle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.AddWorkerAnimation
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::AddWorkerAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "AddWorkerAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildingUpgradeAnimation
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::BuildingUpgradeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildingUpgradeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildSubbuildingAnimation
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::BuildSubbuildingAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildSubbuildingAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildingAnimation
// (BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::BuildingAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildingAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HoloHoverAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         MID_Array                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   SquashIntensity                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::HoloHoverAnim(class UMaterialInstanceDynamic* MID_Array, float SquashIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HoloHoverAnim");

	Params::MyTown_Building_Master_C_HoloHoverAnim Parms{};

	Parms.MID_Array = MID_Array;
	Parms.SquashIntensity = SquashIntensity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.GlobalFadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Mid                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             Parameter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Parameter_Collection                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::GlobalFadeIn(class UMaterialInstanceDynamic* Mid, class FName Parameter, bool Parameter_Collection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "GlobalFadeIn");

	Params::MyTown_Building_Master_C_GlobalFadeIn Parms{};

	Parms.Mid = Mid;
	Parms.Parameter = Parameter;
	Parms.Parameter_Collection = Parameter_Collection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.GlobalFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Mid                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             Parameter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Parameter_Collection                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::GlobalFadeOut(class UMaterialInstanceDynamic* Mid, class FName Parameter, bool Parameter_Collection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "GlobalFadeOut");

	Params::MyTown_Building_Master_C_GlobalFadeOut Parms{};

	Parms.Mid = Mid;
	Parms.Parameter = Parameter;
	Parms.Parameter_Collection = Parameter_Collection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.AddWorkerAnimation_TL__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::AddWorkerAnimation_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "AddWorkerAnimation_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.AddWorkerAnimation_TL__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::AddWorkerAnimation_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "AddWorkerAnimation_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildingUpgrade_TL__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BuildingUpgrade_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildingUpgrade_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildingUpgrade_TL__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BuildingUpgrade_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildingUpgrade_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BubblePop__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BubblePop__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BubblePop__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BubblePop__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BubblePop__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BubblePop__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildingFlashOut__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BuildingFlashOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildingFlashOut__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildingFlashOut__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BuildingFlashOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildingFlashOut__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.MorphPop__SpawnLightEmitter__EventFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::MorphPop__SpawnLightEmitter__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "MorphPop__SpawnLightEmitter__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.MorphPop__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::MorphPop__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "MorphPop__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.MorphPop__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::MorphPop__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "MorphPop__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildAnim_Walls_TL__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BuildAnim_Walls_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildAnim_Walls_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.BuildAnim_Walls_TL__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::BuildAnim_Walls_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "BuildAnim_Walls_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.SquashAndStretchIn_TL__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::SquashAndStretchIn_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "SquashAndStretchIn_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.SquashAndStretchIn_TL__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::SquashAndStretchIn_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "SquashAndStretchIn_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.GlobalFadeIn_TL__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::GlobalFadeIn_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "GlobalFadeIn_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.GlobalFadeIn_TL__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::GlobalFadeIn_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "GlobalFadeIn_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.GlobalFadeOut_TL__UpdateFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::GlobalFadeOut_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "GlobalFadeOut_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.GlobalFadeOut_TL__FinishedFunc
// (BlueprintEvent)

void AMyTown_Building_Master_C::GlobalFadeOut_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "GlobalFadeOut_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.HasBeenBuilt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Building_is_Built                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32*                                  Building_Level                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::HasBeenBuilt(bool* Building_is_Built, int32* Building_Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "HasBeenBuilt");

	Params::MyTown_Building_Master_C_HasBeenBuilt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Building_is_Built != nullptr)
		*Building_is_Built = Parms.Building_is_Built;

	if (Building_Level != nullptr)
		*Building_Level = Parms.Building_Level;
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.State Debug Locked
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::State_Debug_Locked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "State Debug Locked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.StateDebug_Idle
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::StateDebug_Idle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "StateDebug_Idle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.StateDebug Upgrade
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::StateDebug_Upgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "StateDebug Upgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.StateDebug Build
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::StateDebug_Build()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "StateDebug Build");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.MIDCreation
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::MIDCreation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "MIDCreation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.UpgradeIconFriendCheck
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::UpgradeIconFriendCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "UpgradeIconFriendCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.Setup Tooltip
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::Setup_Tooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "Setup Tooltip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.Set Tooltip Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibile                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyTown_Building_Master_C::Set_Tooltip_Visibility(bool Visibile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "Set Tooltip Visibility");

	Params::MyTown_Building_Master_C_Set_Tooltip_Visibility Parms{};

	Parms.Visibile = Visibile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.UpdateBangVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::UpdateBangVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "UpdateBangVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyTown_Building_Master.MyTown_Building_Master_C.StencilBufferSetup
// (Public, BlueprintCallable, BlueprintEvent)

void AMyTown_Building_Master_C::StencilBufferSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyTown_Building_Master_C", "StencilBufferSetup");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
