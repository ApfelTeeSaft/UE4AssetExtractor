﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonIconText

#include "Basic.hpp"

#include "ButtonIconText_classes.hpp"
#include "ButtonIconText_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function ButtonIconText.ButtonIconText_C.ExecuteUbergraph_ButtonIconText
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtonIconText_C::ExecuteUbergraph_ButtonIconText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "ExecuteUbergraph_ButtonIconText");

	Params::ButtonIconText_C_ExecuteUbergraph_ButtonIconText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButtonIconText.ButtonIconText_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UButtonIconText_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "OnMouseLeave");

	Params::ButtonIconText_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButtonIconText.ButtonIconText_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UButtonIconText_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "OnMouseEnter");

	Params::ButtonIconText_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButtonIconText.ButtonIconText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtonIconText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "PreConstruct");

	Params::ButtonIconText_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButtonIconText.ButtonIconText_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (Parm)
// bool                                    RefreshPadding                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtonIconText_C::Set_Text(const class FText& InText, bool RefreshPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "Set Text");

	Params::ButtonIconText_C_Set_Text Parms{};

	Parms.InText = std::move(InText);
	Parms.RefreshPadding = RefreshPadding;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButtonIconText.ButtonIconText_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSlateBrush&               InBrush                                                (Parm)
// bool                                    RefreshPadding                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtonIconText_C::Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "Set Icon");

	Params::ButtonIconText_C_Set_Icon Parms{};

	Parms.InBrush = std::move(InBrush);
	Parms.RefreshPadding = RefreshPadding;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ButtonIconText.ButtonIconText_C.Update Padding
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UButtonIconText_C::Update_Padding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "Update Padding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ButtonIconText.ButtonIconText_C.Get Secondary Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FLinearColor UButtonIconText_C::Get_Secondary_Color()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "Get Secondary Color");

	Params::ButtonIconText_C_Get_Secondary_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ButtonIconText.ButtonIconText_C.Get Primary Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UButtonIconText_C::Get_Primary_Color()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "Get Primary Color");

	Params::ButtonIconText_C_Get_Primary_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ButtonIconText.ButtonIconText_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UButtonIconText_C::Update_Size_Box()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "Update Size Box");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ButtonIconText.ButtonIconText_C.Set Alignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextJustify                            Align                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtonIconText_C::Set_Alignment(ETextJustify Align)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonIconText_C", "Set Alignment");

	Params::ButtonIconText_C_Set_Alignment Parms{};

	Parms.Align = Align;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
