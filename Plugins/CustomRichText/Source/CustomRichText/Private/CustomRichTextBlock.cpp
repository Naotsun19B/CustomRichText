// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomRichTextBlock.h"
#include "Editor/WidgetCompilerLog.h"
#include "Styling/SlateStyle.h"
#include "RichTextBlockInlineDecorator.h"
#include "CustomRichTextBlockImageDecorator.h"

static const FName DefaultRowName = TEXT("Default");

#define LOCTEXT_NAMESPACE "UMG"

UCustomRichTextBlock::UCustomRichTextBlock(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, DefaultStyleSetID(DefaultRowName)
{
	
}

FTextBlockStyle UCustomRichTextBlock::GetDefaultTextStyleBP() const
{
	return (bOverrideDefaultStyle ? DefaultTextStyleOverride : DefaultTextStyle);
}

void UCustomRichTextBlock::SetDefaultStyleSetID(const FName& StyleSetID)
{
	DefaultStyleSetID = StyleSetID;
	OnChageDefaultStyleSetID();
}

void UCustomRichTextBlock::SetInlineImageSize(int32 Size)
{
	InlineImageSize = Size;
	OnChageInlineImageSize();
}

void UCustomRichTextBlock::PostLoad()
{
	Super::PostLoad();

	OnChageDecoratorClasses();
	
	// データテーブル更新時に変更を反映させる.
	if (IsValid(TextStyleSet))
	{
		TextStyleSet->OnDataTableChanged().AddUObject(this, &UCustomRichTextBlock::OnChageDefaultStyleSetID);
	}

	OnChageInlineImageSize();
}

#if WITH_EDITOR
void UCustomRichTextBlock::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// DecoratorClassesが変更されたらInlineDecoratorがあるかチェック.
	if (PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UCustomRichTextBlock, DecoratorClasses))
	{
		OnChageDecoratorClasses();
	}

	// DefaultStyleSetIDの変更を適用.
	if (PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UCustomRichTextBlock, DefaultStyleSetID) ||
		PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UCustomRichTextBlock, DefaultTextStyleOverride))
	{
		OnChageDefaultStyleSetID();
	}

	// InlineImageSizeの変更を適用.
	if (PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UCustomRichTextBlock, InlineImageSize))
	{
		OnChageInlineImageSize();
	}
}

bool UCustomRichTextBlock::CanEditChange(const FProperty* InProperty) const
{
	// bOverrideDefaultStyleとDefaultTextStyleOverrideの使用は禁止.
	bool bCanEdit = true;
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UCustomRichTextBlock, bOverrideDefaultStyle) ||
		InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UCustomRichTextBlock, DefaultTextStyleOverride))
	{
		bCanEdit = false;
	}

	return (Super::CanEditChange(InProperty) && bCanEdit);
}

void UCustomRichTextBlock::ValidateCompiledDefaults(IWidgetCompilerLog& CompileLog) const
{
	Super::ValidateCompiledDefaults(CompileLog);
	if (TextStyleSet)
	{
		// データテーブルにDefaultのRowがない.
		auto DefaultStyleRow = TextStyleSet->FindRow<FRichTextStyleRow>(DefaultRowName, StaticClass()->GetName());
		if (!DefaultStyleRow)
		{
			CompileLog.Error(
				FText::Format(LOCTEXT("RichTextBlock_NotFountDefaultRow", "{0} has no Row in it named {1}."),
					FText::FromString(TextStyleSet->GetName()), FText::FromName(DefaultRowName)
				));
		}
	}
	else
	{
		// データテーブルがセットされていない.
		CompileLog.Error(
			FText::Format(LOCTEXT("RichTextBlock_NotFountStyleSetDataTable", "The data table of Style Set is not set for {0}."),
				FText::FromString(GetName())
			));
	}

	// 通常のRichTextBlockImageDecoratorはサポートしない.
	for (auto DecoratorClass : DecoratorClasses)
	{
		if (DecoratorClass->IsChildOf(URichTextBlockImageDecorator::StaticClass()) &&
			!DecoratorClass->IsChildOf(UCustomRichTextBlockImageDecorator::StaticClass()))
		{
			CompileLog.Error(
				FText::Format(LOCTEXT("RichTextBlock_NotSupportURichTextBlockImageDecorator", "{0} does not support decorators that inherit {1}. Use a class that inherits from {2}."),
					FText::FromString(StaticClass()->GetName()), FText::FromString(URichTextBlockImageDecorator::StaticClass()->GetName()), FText::FromString(UCustomRichTextBlockImageDecorator::StaticClass()->GetName())
				));
		}
	}
}
#endif

void UCustomRichTextBlock::OnChageDecoratorClasses()
{
	// InlineDecoratorは必ず入れる.
	if (!DecoratorClasses.Contains(URichTextBlockInlineDecorator::StaticClass()))
	{
		DecoratorClasses.Insert(URichTextBlockInlineDecorator::StaticClass(), 0);
	}
}

void UCustomRichTextBlock::OnChageDefaultStyleSetID()
{
	// データテーブルにあるIDなら変更を適用し、値をDefaultにする.
	if (auto StyleRow = TextStyleSet->FindRow<FRichTextStyleRow>(DefaultStyleSetID, StaticClass()->GetName()))
	{
		SetDefaultTextStyle(StyleRow->TextStyle);
	}
	else
	{
		DefaultStyleSetID = DefaultRowName;
	}
}

void UCustomRichTextBlock::OnChageInlineImageSize()
{
	// 現状コンパイルしないとサイズが反映されない...
}

#undef LOCTEXT_NAMESPACE
