// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "CustomRichTextBlock.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMRICHTEXT_API UCustomRichTextBlock : public URichTextBlock
{
	GENERATED_BODY()
	
protected:
	// デフォルトで使用するスタイルセットのデータテーブルID.
	UPROPERTY(EditAnywhere, Category = "Appearance")
	FName DefaultStyleSetID;

	// 挿入される画像サイズ.
	UPROPERTY(EditAnywhere, Category = "Appearance")
	int32 InlineImageSize;

public:
	UCustomRichTextBlock(const FObjectInitializer& ObjectInitializer);

	// デフォルトのTextStyleを取得.
	UFUNCTION(BlueprintPure, Category = "Widget", meta = (DisplayName = "Get Default Text Style"))
	FTextBlockStyle GetDefaultTextStyleBP() const;

	// デフォルトで使用するスタイルセットのデータテーブルIDを設定.
	UFUNCTION(BlueprintCallable, Category = "Widget")
	void SetDefaultStyleSetID(const FName& StyleSetID);

	// 挿入される画像サイズを取得.
	UFUNCTION(BlueprintPure, Category = "Widget")
	int32 GetInlineImageSize() const { return InlineImageSize; }

	// 挿入される画像サイズを設定.
	UFUNCTION(BlueprintCallable, Category = "Widget")
	void SetInlineImageSize(int32 Size);

protected:
	// UObject Interface.
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual bool CanEditChange(const FProperty* InProperty) const override;
#endif
	// End of UObject Interface.

	// UWidget interface.
#if WITH_EDITOR
	virtual void ValidateCompiledDefaults(IWidgetCompilerLog& CompileLog) const override;
#endif
	// End of UWidget interface.

	// プロパティの変更イベント.
	virtual void OnChageDecoratorClasses();
	virtual void OnChageDefaultStyleSetID();
	virtual void OnChageInlineImageSize();
};
