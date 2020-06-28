// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RichTextFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMRICHTEXT_API URichTextFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "RichText")
	static bool GetBrushFromImageDecoratorClass(const TSubclassOf<class URichTextBlockImageDecorator>& InClass, FName TableID, FSlateBrush& Brush);

	UFUNCTION(BlueprintCallable, Category = "RichText")
	static FString ByteToHex(uint8 InByte);

	UFUNCTION(BlueprintCallable, Category = "RichText")
	static FString LinearColorToHex(const FLinearColor& InColor);
};
