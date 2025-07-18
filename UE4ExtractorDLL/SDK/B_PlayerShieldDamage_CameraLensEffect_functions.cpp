﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerShieldDamage_CameraLensEffect

#include "Basic.hpp"

#include "B_PlayerShieldDamage_CameraLensEffect_classes.hpp"
#include "B_PlayerShieldDamage_CameraLensEffect_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_PlayerShieldDamage_CameraLensEffect_C::ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PlayerShieldDamage_CameraLensEffect_C", "ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect");

	Params::B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.PassParticle_Parameter_Shield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewParam                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_PlayerShieldDamage_CameraLensEffect_C::PassParticle_Parameter_Shield(float NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PlayerShieldDamage_CameraLensEffect_C", "PassParticle_Parameter_Shield");

	Params::B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_PlayerShieldDamage_CameraLensEffect_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PlayerShieldDamage_CameraLensEffect_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
