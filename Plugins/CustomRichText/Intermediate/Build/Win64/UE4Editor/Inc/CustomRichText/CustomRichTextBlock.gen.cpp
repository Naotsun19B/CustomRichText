// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomRichText/Public/CustomRichTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomRichTextBlock() {}
// Cross Module References
	CUSTOMRICHTEXT_API UClass* Z_Construct_UClass_UCustomRichTextBlock_NoRegister();
	CUSTOMRICHTEXT_API UClass* Z_Construct_UClass_UCustomRichTextBlock();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UPackage* Z_Construct_UPackage__Script_CustomRichText();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
// End Cross Module References
	DEFINE_FUNCTION(UCustomRichTextBlock::execSetInlineImageSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInlineImageSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomRichTextBlock::execGetInlineImageSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInlineImageSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomRichTextBlock::execSetDefaultStyleSetID)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleSetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultStyleSetID(Z_Param_Out_StyleSetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomRichTextBlock::execGetDefaultTextStyleBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTextBlockStyle*)Z_Param__Result=P_THIS->GetDefaultTextStyleBP();
		P_NATIVE_END;
	}
	void UCustomRichTextBlock::StaticRegisterNativesUCustomRichTextBlock()
	{
		UClass* Class = UCustomRichTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultTextStyleBP", &UCustomRichTextBlock::execGetDefaultTextStyleBP },
			{ "GetInlineImageSize", &UCustomRichTextBlock::execGetInlineImageSize },
			{ "SetDefaultStyleSetID", &UCustomRichTextBlock::execSetDefaultStyleSetID },
			{ "SetInlineImageSize", &UCustomRichTextBlock::execSetInlineImageSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics
	{
		struct CustomRichTextBlock_eventGetDefaultTextStyleBP_Parms
		{
			FTextBlockStyle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomRichTextBlock_eventGetDefaultTextStyleBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "// \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaeTextStyle\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97.\n" },
		{ "DisplayName", "Get Default Text Style" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlock.h" },
		{ "ToolTip", "\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaeTextStyle\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomRichTextBlock, nullptr, "GetDefaultTextStyleBP", nullptr, nullptr, sizeof(CustomRichTextBlock_eventGetDefaultTextStyleBP_Parms), Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics
	{
		struct CustomRichTextBlock_eventGetInlineImageSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomRichTextBlock_eventGetInlineImageSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "// \xe6\x8c\xbf\xe5\x85\xa5\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\x94\xbb\xe5\x83\x8f\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97.\n" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlock.h" },
		{ "ToolTip", "\xe6\x8c\xbf\xe5\x85\xa5\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\x94\xbb\xe5\x83\x8f\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomRichTextBlock, nullptr, "GetInlineImageSize", nullptr, nullptr, sizeof(CustomRichTextBlock_eventGetInlineImageSize_Parms), Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics
	{
		struct CustomRichTextBlock_eventSetDefaultStyleSetID_Parms
		{
			FName StyleSetID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StyleSetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::NewProp_StyleSetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::NewProp_StyleSetID = { "StyleSetID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomRichTextBlock_eventSetDefaultStyleSetID_Parms, StyleSetID), METADATA_PARAMS(Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::NewProp_StyleSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::NewProp_StyleSetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::NewProp_StyleSetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "// \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\xab\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x96\xe3\x83\xabID\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a.\n" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlock.h" },
		{ "ToolTip", "\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\xab\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x96\xe3\x83\xabID\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomRichTextBlock, nullptr, "SetDefaultStyleSetID", nullptr, nullptr, sizeof(CustomRichTextBlock_eventSetDefaultStyleSetID_Parms), Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics
	{
		struct CustomRichTextBlock_eventSetInlineImageSize_Parms
		{
			int32 Size;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomRichTextBlock_eventSetInlineImageSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "// \xe6\x8c\xbf\xe5\x85\xa5\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\x94\xbb\xe5\x83\x8f\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a.\n" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlock.h" },
		{ "ToolTip", "\xe6\x8c\xbf\xe5\x85\xa5\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\x94\xbb\xe5\x83\x8f\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomRichTextBlock, nullptr, "SetInlineImageSize", nullptr, nullptr, sizeof(CustomRichTextBlock_eventSetInlineImageSize_Parms), Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomRichTextBlock_NoRegister()
	{
		return UCustomRichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCustomRichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InlineImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InlineImageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStyleSetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultStyleSetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomRichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomRichText,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomRichTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomRichTextBlock_GetDefaultTextStyleBP, "GetDefaultTextStyleBP" }, // 2977334999
		{ &Z_Construct_UFunction_UCustomRichTextBlock_GetInlineImageSize, "GetInlineImageSize" }, // 60646080
		{ &Z_Construct_UFunction_UCustomRichTextBlock_SetDefaultStyleSetID, "SetDefaultStyleSetID" }, // 1441473516
		{ &Z_Construct_UFunction_UCustomRichTextBlock_SetInlineImageSize, "SetInlineImageSize" }, // 1952839776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomRichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomRichTextBlock.h" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_InlineImageSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// \xe6\x8c\xbf\xe5\x85\xa5\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\x94\xbb\xe5\x83\x8f\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba.\n" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlock.h" },
		{ "ToolTip", "\xe6\x8c\xbf\xe5\x85\xa5\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe7\x94\xbb\xe5\x83\x8f\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_InlineImageSize = { "InlineImageSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomRichTextBlock, InlineImageSize), METADATA_PARAMS(Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_InlineImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_InlineImageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_DefaultStyleSetID_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\xab\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x96\xe3\x83\xabID.\n" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlock.h" },
		{ "ToolTip", "\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\xab\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x96\xe3\x83\xabID." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_DefaultStyleSetID = { "DefaultStyleSetID", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomRichTextBlock, DefaultStyleSetID), METADATA_PARAMS(Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_DefaultStyleSetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_DefaultStyleSetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomRichTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_InlineImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomRichTextBlock_Statics::NewProp_DefaultStyleSetID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomRichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomRichTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomRichTextBlock_Statics::ClassParams = {
		&UCustomRichTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomRichTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomRichTextBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomRichTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomRichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomRichTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomRichTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomRichTextBlock, 3293922477);
	template<> CUSTOMRICHTEXT_API UClass* StaticClass<UCustomRichTextBlock>()
	{
		return UCustomRichTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomRichTextBlock(Z_Construct_UClass_UCustomRichTextBlock, &UCustomRichTextBlock::StaticClass, TEXT("/Script/CustomRichText"), TEXT("UCustomRichTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomRichTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
