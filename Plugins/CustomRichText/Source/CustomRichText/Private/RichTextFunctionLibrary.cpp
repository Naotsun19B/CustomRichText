// Fill out your copyright notice in the Description page of Project Settings.

#include "RichTextFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "Components/RichTextBlockImageDecorator.h"

bool URichTextFunctionLibrary::GetBrushFromImageDecoratorClass(const TSubclassOf<URichTextBlockImageDecorator>& InClass, FName TableID, FSlateBrush& Brush)
{
	UClass* Class = InClass.Get();
	if (Class)
	{
		URichTextBlockImageDecorator* DefaultObject = Cast<URichTextBlockImageDecorator>(Class->GetDefaultObject());
		if (DefaultObject)
		{
			const FSlateBrush* BrushPtr = DefaultObject->FindImageBrush(TableID, false);
			if (BrushPtr)
			{
				Brush = *BrushPtr;

				return true;
			}
		}
	}

	return false;
}

FString URichTextFunctionLibrary::ByteToHex(uint8 InByte)
{
	return FString::Printf(TEXT("%02X"), InByte);
}

FString URichTextFunctionLibrary::LinearColorToHex(const FLinearColor& InColor)
{
	uint8 R = (uint8)(255 * InColor.R);
	uint8 G = (uint8)(255 * InColor.G);
	uint8 B = (uint8)(255 * InColor.B);
	uint8 A = (uint8)(255 * InColor.A);

	return FString::Printf(TEXT("#%s%s%s%s"), *ByteToHex(R), *ByteToHex(G), *ByteToHex(B), *ByteToHex(A));
}
