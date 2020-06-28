// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextBlockInlineDecorator.generated.h"

/**
 * 
 */
UCLASS()
class  CUSTOMRICHTEXT_API URichTextBlockInlineDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()
	
public:
	URichTextBlockInlineDecorator(const FObjectInitializer& ObjectInitializer);

	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override;
};
