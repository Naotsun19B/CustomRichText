// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomRichTextBlockImageDecorator.h"
#include "CustomRichTextBlock.h"
#include "UObject/SoftObjectPtr.h"
#include "Rendering/DrawElements.h"
#include "Framework/Text/SlateTextRun.h"
#include "Framework/Text/SlateTextLayout.h"
#include "Slate/SlateGameResources.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Framework/Application/SlateApplication.h"
#include "Fonts/FontMeasure.h"
#include "Math/UnrealMathUtility.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Layout/SBox.h"
#include "Misc/DefaultValueHelper.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/Package.h"

namespace CustomRichTextBlockImageDecorator
{
	static const FString TriggerWord = TEXT("img");
	static const FString ImageMetaWord = TEXT("id");
	static const FString WidthMetaWord = TEXT("width");
	static const FString HeightMetaWord = TEXT("height");
	static const FString StretchMetaWord = TEXT("stretch");
}

#define LOCTEXT_NAMESPACE "UMG"

class SCustomRichInlineImage : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SCustomRichInlineImage)
	{}
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, const FSlateBrush* Brush, const FTextBlockStyle& TextStyle, TOptional<int32> Width, TOptional<int32> Height, EStretch::Type Stretch)
	{
		if (ensure(Brush))
		{
			const TSharedRef<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
			float IconHeight = FMath::Min((float)FontMeasure->GetMaxCharacterHeight(TextStyle.Font, 1.0f), Brush->ImageSize.Y);
			float IconWidth = IconHeight;

			if (Width.IsSet())
			{
				IconWidth = Width.GetValue();
			}

			if (Height.IsSet())
			{
				IconHeight = Height.GetValue();
			}

			ChildSlot
			[
				SNew(SBox)
				.HeightOverride(IconHeight)
				.WidthOverride(IconWidth)
				[
					SNew(SScaleBox)
					.Stretch(Stretch)
					.StretchDirection(EStretchDirection::DownOnly)
					.VAlign(VAlign_Center)
					[
						SNew(SImage)
						.Image(Brush)
					]
				]
			];
		}
	}
};

class FCustomRichInlineImage : public FRichTextDecorator
{
private:
	UCustomRichTextBlockImageDecorator* Decorator;
	UCustomRichTextBlock* CastedOwner;

public:
	FCustomRichInlineImage(URichTextBlock* InOwner, UCustomRichTextBlockImageDecorator* InDecorator)
		: FRichTextDecorator(InOwner)
		, Decorator(InDecorator)
	{
		CastedOwner = Cast<UCustomRichTextBlock>(InOwner);
	}

	virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override
	{
		// 拡張版RichTextBlockと使うことが前提.
		if (IsValid(CastedOwner) &&
			RunParseResult.Name == CustomRichTextBlockImageDecorator::TriggerWord &&
			RunParseResult.MetaData.Contains(CustomRichTextBlockImageDecorator::ImageMetaWord))
		{
			const FTextRange& IdRange = RunParseResult.MetaData[CustomRichTextBlockImageDecorator::ImageMetaWord];
			const FString TagId = Text.Mid(IdRange.BeginIndex, IdRange.EndIndex - IdRange.BeginIndex);

			const bool bWarnIfMissing = false;
			return Decorator->FindImageBrush(*TagId, bWarnIfMissing) != nullptr;
		}

		return false;
	}

protected:
	virtual TSharedPtr<SWidget> CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const override
	{
		const bool bWarnIfMissing = true;
		const FSlateBrush* Brush = Decorator->FindImageBrush(*RunInfo.MetaData[CustomRichTextBlockImageDecorator::ImageMetaWord], bWarnIfMissing);

		// 特に横幅の指定がなければ拡張版RichTextBlockのInlineImageSizeを適用.
		TOptional<int32> Width = CastedOwner->GetInlineImageSize();
		if (const FString* WidthString = RunInfo.MetaData.Find(CustomRichTextBlockImageDecorator::WidthMetaWord))
		{
			int32 WidthTemp;
			Width = FDefaultValueHelper::ParseInt(*WidthString, WidthTemp) ? WidthTemp : TOptional<int32>();
		}

		// 特に縦幅の指定がなければ拡張版RichTextBlockのInlineImageSizeを適用.
		TOptional<int32> Height = CastedOwner->GetInlineImageSize();
		if (const FString* HeightString = RunInfo.MetaData.Find(CustomRichTextBlockImageDecorator::HeightMetaWord))
		{
			int32 HeightTemp;
			Height = FDefaultValueHelper::ParseInt(*HeightString, HeightTemp) ? HeightTemp : TOptional<int32>();
		}

		EStretch::Type Stretch = EStretch::ScaleToFit;
		if (const FString* SstretchString = RunInfo.MetaData.Find(CustomRichTextBlockImageDecorator::StretchMetaWord))
		{
			static const UEnum* StretchEnum = StaticEnum<EStretch::Type>();
			int64 StretchValue = StretchEnum->GetValueByNameString(*SstretchString);
			if (StretchValue != INDEX_NONE)
			{
				Stretch = static_cast<EStretch::Type>(StretchValue);
			}
		}

		return SNew(SCustomRichInlineImage, Brush, TextStyle, Width, Height, Stretch);
	}
};

/////////////////////////////////////////////////////
// UCustomRichTextBlockImageDecorator

UCustomRichTextBlockImageDecorator::UCustomRichTextBlockImageDecorator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

TSharedPtr<ITextDecorator> UCustomRichTextBlockImageDecorator::CreateDecorator(URichTextBlock* InOwner)
{
	return MakeShareable(new FCustomRichInlineImage(InOwner, this));
}

#undef LOCTEXT_NAMESPACE
