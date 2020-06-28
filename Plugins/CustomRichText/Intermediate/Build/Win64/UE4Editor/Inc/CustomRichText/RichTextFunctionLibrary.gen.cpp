// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomRichText/Public/RichTextFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextFunctionLibrary() {}
// Cross Module References
	CUSTOMRICHTEXT_API UClass* Z_Construct_UClass_URichTextFunctionLibrary_NoRegister();
	CUSTOMRICHTEXT_API UClass* Z_Construct_UClass_URichTextFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CustomRichText();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(URichTextFunctionLibrary::execLinearColorToHex)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URichTextFunctionLibrary::LinearColorToHex(Z_Param_Out_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextFunctionLibrary::execByteToHex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InByte);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URichTextFunctionLibrary::ByteToHex(Z_Param_InByte);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextFunctionLibrary::execGetBrushFromImageDecoratorClass)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URichTextBlockImageDecorator> ,Z_Param_Out_InClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_TableID);
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URichTextFunctionLibrary::GetBrushFromImageDecoratorClass(Z_Param_Out_InClass,Z_Param_TableID,Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	void URichTextFunctionLibrary::StaticRegisterNativesURichTextFunctionLibrary()
	{
		UClass* Class = URichTextFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ByteToHex", &URichTextFunctionLibrary::execByteToHex },
			{ "GetBrushFromImageDecoratorClass", &URichTextFunctionLibrary::execGetBrushFromImageDecoratorClass },
			{ "LinearColorToHex", &URichTextFunctionLibrary::execLinearColorToHex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics
	{
		struct RichTextFunctionLibrary_eventByteToHex_Parms
		{
			uint8 InByte;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InByte;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextFunctionLibrary_eventByteToHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::NewProp_InByte = { "InByte", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextFunctionLibrary_eventByteToHex_Parms, InByte), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::NewProp_InByte,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RichText" },
		{ "ModuleRelativePath", "Public/RichTextFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextFunctionLibrary, nullptr, "ByteToHex", nullptr, nullptr, sizeof(RichTextFunctionLibrary_eventByteToHex_Parms), Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics
	{
		struct RichTextFunctionLibrary_eventGetBrushFromImageDecoratorClass_Parms
		{
			const TSubclassOf<URichTextBlockImageDecorator>  InClass;
			FName TableID;
			FSlateBrush Brush;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RichTextFunctionLibrary_eventGetBrushFromImageDecoratorClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RichTextFunctionLibrary_eventGetBrushFromImageDecoratorClass_Parms), &Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextFunctionLibrary_eventGetBrushFromImageDecoratorClass_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_TableID = { "TableID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextFunctionLibrary_eventGetBrushFromImageDecoratorClass_Parms, TableID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_InClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextFunctionLibrary_eventGetBrushFromImageDecoratorClass_Parms, InClass), Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_InClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_InClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_Brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_TableID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "RichText" },
		{ "ModuleRelativePath", "Public/RichTextFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextFunctionLibrary, nullptr, "GetBrushFromImageDecoratorClass", nullptr, nullptr, sizeof(RichTextFunctionLibrary_eventGetBrushFromImageDecoratorClass_Parms), Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics
	{
		struct RichTextFunctionLibrary_eventLinearColorToHex_Parms
		{
			FLinearColor InColor;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextFunctionLibrary_eventLinearColorToHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextFunctionLibrary_eventLinearColorToHex_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::NewProp_InColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RichText" },
		{ "ModuleRelativePath", "Public/RichTextFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextFunctionLibrary, nullptr, "LinearColorToHex", nullptr, nullptr, sizeof(RichTextFunctionLibrary_eventLinearColorToHex_Parms), Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URichTextFunctionLibrary_NoRegister()
	{
		return URichTextFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URichTextFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomRichText,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URichTextFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URichTextFunctionLibrary_ByteToHex, "ByteToHex" }, // 2929645689
		{ &Z_Construct_UFunction_URichTextFunctionLibrary_GetBrushFromImageDecoratorClass, "GetBrushFromImageDecoratorClass" }, // 2001727403
		{ &Z_Construct_UFunction_URichTextFunctionLibrary_LinearColorToHex, "LinearColorToHex" }, // 3242616305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RichTextFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RichTextFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextFunctionLibrary_Statics::ClassParams = {
		&URichTextFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextFunctionLibrary, 2001454646);
	template<> CUSTOMRICHTEXT_API UClass* StaticClass<URichTextFunctionLibrary>()
	{
		return URichTextFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextFunctionLibrary(Z_Construct_UClass_URichTextFunctionLibrary, &URichTextFunctionLibrary::StaticClass, TEXT("/Script/CustomRichText"), TEXT("URichTextFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
