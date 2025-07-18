﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Survive_Notification_Health

#include "Basic.hpp"

#include "Survive_Notification_Health_classes.hpp"
#include "Survive_Notification_Health_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function Survive_Notification_Health.Survive_Notification_Health_C.ExecuteUbergraph_Survive_Notification_Health
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvive_Notification_Health_C::ExecuteUbergraph_Survive_Notification_Health(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survive_Notification_Health_C", "ExecuteUbergraph_Survive_Notification_Health");

	Params::Survive_Notification_Health_C_ExecuteUbergraph_Survive_Notification_Health Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survive_Notification_Health.Survive_Notification_Health_C.OnNotificationStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ASurvive_Notification_Health_C::OnNotificationStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survive_Notification_Health_C", "OnNotificationStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survive_Notification_Health.Survive_Notification_Health_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASurvive_Notification_Health_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survive_Notification_Health_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
