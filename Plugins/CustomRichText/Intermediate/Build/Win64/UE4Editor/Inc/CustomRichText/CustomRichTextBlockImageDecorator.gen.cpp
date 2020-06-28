// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomRichText/Public/CustomRichTextBlockImageDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomRichTextBlockImageDecorator() {}
// Cross Module References
	CUSTOMRICHTEXT_API UClass* Z_Construct_UClass_UCustomRichTextBlockImageDecorator_NoRegister();
	CUSTOMRICHTEXT_API UClass* Z_Construct_UClass_UCustomRichTextBlockImageDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator();
	UPackage* Z_Construct_UPackage__Script_CustomRichText();
// End Cross Module References
	void UCustomRichTextBlockImageDecorator::StaticRegisterNativesUCustomRichTextBlockImageDecorator()
	{
	}
	UClass* Z_Construct_UClass_UCustomRichTextBlockImageDecorator_NoRegister()
	{
		return UCustomRichTextBlockImageDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockImageDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomRichText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomRichTextBlockImageDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomRichTextBlockImageDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomRichTextBlockImageDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics::ClassParams = {
		&UCustomRichTextBlockImageDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomRichTextBlockImageDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomRichTextBlockImageDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomRichTextBlockImageDecorator, 3052991916);
	template<> CUSTOMRICHTEXT_API UClass* StaticClass<UCustomRichTextBlockImageDecorator>()
	{
		return UCustomRichTextBlockImageDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomRichTextBlockImageDecorator(Z_Construct_UClass_UCustomRichTextBlockImageDecorator, &UCustomRichTextBlockImageDecorator::StaticClass, TEXT("/Script/CustomRichText"), TEXT("UCustomRichTextBlockImageDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomRichTextBlockImageDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
