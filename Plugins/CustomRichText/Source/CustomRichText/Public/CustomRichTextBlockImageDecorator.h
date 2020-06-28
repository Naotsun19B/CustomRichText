// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "CustomRichTextBlockImageDecorator.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class CUSTOMRICHTEXT_API UCustomRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
	GENERATED_BODY()
	
public:
	UCustomRichTextBlockImageDecorator(const FObjectInitializer& ObjectInitializer);

	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override;
};
