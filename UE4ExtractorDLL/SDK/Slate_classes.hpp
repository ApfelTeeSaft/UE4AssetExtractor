﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slate

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SlateCore_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Class Slate.ButtonWidgetStyle
// 0x022C (0x024C - 0x0020)
class UButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                           ButtonStyle;                                       // 0x0020(0x022C)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ButtonWidgetStyle">();
	}
	static class UButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonWidgetStyle>();
	}
};
static_assert(alignof(UButtonWidgetStyle) == 0x000004, "Wrong alignment on UButtonWidgetStyle");
static_assert(sizeof(UButtonWidgetStyle) == 0x00024C, "Wrong size on UButtonWidgetStyle");
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x000020, "Member 'UButtonWidgetStyle::ButtonStyle' has a wrong offset!");

// Class Slate.CheckBoxWidgetStyle
// 0x04B8 (0x04D8 - 0x0020)
class UCheckBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                         CheckBoxStyle;                                     // 0x0020(0x04B8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CheckBoxWidgetStyle">();
	}
	static class UCheckBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCheckBoxWidgetStyle>();
	}
};
static_assert(alignof(UCheckBoxWidgetStyle) == 0x000004, "Wrong alignment on UCheckBoxWidgetStyle");
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x0004D8, "Wrong size on UCheckBoxWidgetStyle");
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x000020, "Member 'UCheckBoxWidgetStyle::CheckBoxStyle' has a wrong offset!");

// Class Slate.ComboBoxWidgetStyle
// 0x0364 (0x0384 - 0x0020)
class UComboBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                         ComboBoxStyle;                                     // 0x0020(0x0364)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboBoxWidgetStyle">();
	}
	static class UComboBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboBoxWidgetStyle>();
	}
};
static_assert(alignof(UComboBoxWidgetStyle) == 0x000004, "Wrong alignment on UComboBoxWidgetStyle");
static_assert(sizeof(UComboBoxWidgetStyle) == 0x000384, "Wrong size on UComboBoxWidgetStyle");
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x000020, "Member 'UComboBoxWidgetStyle::ComboBoxStyle' has a wrong offset!");

// Class Slate.ComboButtonWidgetStyle
// 0x0328 (0x0348 - 0x0020)
class UComboButtonWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                      ComboButtonStyle;                                  // 0x0020(0x0328)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComboButtonWidgetStyle">();
	}
	static class UComboButtonWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboButtonWidgetStyle>();
	}
};
static_assert(alignof(UComboButtonWidgetStyle) == 0x000004, "Wrong alignment on UComboButtonWidgetStyle");
static_assert(sizeof(UComboButtonWidgetStyle) == 0x000348, "Wrong size on UComboButtonWidgetStyle");
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x000020, "Member 'UComboButtonWidgetStyle::ComboButtonStyle' has a wrong offset!");

// Class Slate.EditableTextBoxWidgetStyle
// 0x0698 (0x06B8 - 0x0020)
class UEditableTextBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                  EditableTextBoxStyle;                              // 0x0020(0x0698)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextBoxWidgetStyle">();
	}
	static class UEditableTextBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextBoxWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextBoxWidgetStyle) == 0x000004, "Wrong alignment on UEditableTextBoxWidgetStyle");
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x0006B8, "Wrong size on UEditableTextBoxWidgetStyle");
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x000020, "Member 'UEditableTextBoxWidgetStyle::EditableTextBoxStyle' has a wrong offset!");

// Class Slate.EditableTextWidgetStyle
// 0x01A4 (0x01C4 - 0x0020)
class UEditableTextWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                     EditableTextStyle;                                 // 0x0020(0x01A4)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableTextWidgetStyle">();
	}
	static class UEditableTextWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextWidgetStyle>();
	}
};
static_assert(alignof(UEditableTextWidgetStyle) == 0x000004, "Wrong alignment on UEditableTextWidgetStyle");
static_assert(sizeof(UEditableTextWidgetStyle) == 0x0001C4, "Wrong size on UEditableTextWidgetStyle");
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x000020, "Member 'UEditableTextWidgetStyle::EditableTextStyle' has a wrong offset!");

// Class Slate.ProgressWidgetStyle
// 0x0160 (0x0180 - 0x0020)
class UProgressWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                      ProgressBarStyle;                                  // 0x0020(0x0160)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProgressWidgetStyle">();
	}
	static class UProgressWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressWidgetStyle>();
	}
};
static_assert(alignof(UProgressWidgetStyle) == 0x000004, "Wrong alignment on UProgressWidgetStyle");
static_assert(sizeof(UProgressWidgetStyle) == 0x000180, "Wrong size on UProgressWidgetStyle");
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x000020, "Member 'UProgressWidgetStyle::ProgressBarStyle' has a wrong offset!");

// Class Slate.ScrollBarWidgetStyle
// 0x0418 (0x0438 - 0x0020)
class UScrollBarWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                        ScrollBarStyle;                                    // 0x0020(0x0418)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBarWidgetStyle">();
	}
	static class UScrollBarWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBarWidgetStyle>();
	}
};
static_assert(alignof(UScrollBarWidgetStyle) == 0x000004, "Wrong alignment on UScrollBarWidgetStyle");
static_assert(sizeof(UScrollBarWidgetStyle) == 0x000438, "Wrong size on UScrollBarWidgetStyle");
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x000020, "Member 'UScrollBarWidgetStyle::ScrollBarStyle' has a wrong offset!");

// Class Slate.ScrollBoxWidgetStyle
// 0x01D4 (0x01F4 - 0x0020)
class UScrollBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                        ScrollBoxStyle;                                    // 0x0020(0x01D4)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScrollBoxWidgetStyle">();
	}
	static class UScrollBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBoxWidgetStyle>();
	}
};
static_assert(alignof(UScrollBoxWidgetStyle) == 0x000004, "Wrong alignment on UScrollBoxWidgetStyle");
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x0001F4, "Wrong size on UScrollBoxWidgetStyle");
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x000020, "Member 'UScrollBoxWidgetStyle::ScrollBoxStyle' has a wrong offset!");

// Class Slate.SpinBoxWidgetStyle
// 0x0274 (0x0294 - 0x0020)
class USpinBoxWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                          SpinBoxStyle;                                      // 0x0020(0x0274)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpinBoxWidgetStyle">();
	}
	static class USpinBoxWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpinBoxWidgetStyle>();
	}
};
static_assert(alignof(USpinBoxWidgetStyle) == 0x000004, "Wrong alignment on USpinBoxWidgetStyle");
static_assert(sizeof(USpinBoxWidgetStyle) == 0x000294, "Wrong size on USpinBoxWidgetStyle");
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x000020, "Member 'USpinBoxWidgetStyle::SpinBoxStyle' has a wrong offset!");

// Class Slate.TextBlockWidgetStyle
// 0x0100 (0x0120 - 0x0020)
class UTextBlockWidgetStyle final : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                        TextBlockStyle;                                    // 0x0020(0x0100)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextBlockWidgetStyle">();
	}
	static class UTextBlockWidgetStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextBlockWidgetStyle>();
	}
};
static_assert(alignof(UTextBlockWidgetStyle) == 0x000004, "Wrong alignment on UTextBlockWidgetStyle");
static_assert(sizeof(UTextBlockWidgetStyle) == 0x000120, "Wrong size on UTextBlockWidgetStyle");
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x000020, "Member 'UTextBlockWidgetStyle::TextBlockStyle' has a wrong offset!");

}

#pragma pack(pop)
