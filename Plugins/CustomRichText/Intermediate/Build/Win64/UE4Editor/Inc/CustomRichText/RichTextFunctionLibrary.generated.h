// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class URichTextBlockImageDecorator;
struct FSlateBrush;
#ifdef CUSTOMRICHTEXT_RichTextFunctionLibrary_generated_h
#error "RichTextFunctionLibrary.generated.h already included, missing '#pragma once' in RichTextFunctionLibrary.h"
#endif
#define CUSTOMRICHTEXT_RichTextFunctionLibrary_generated_h

#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_SPARSE_DATA
#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLinearColorToHex); \
	DECLARE_FUNCTION(execByteToHex); \
	DECLARE_FUNCTION(execGetBrushFromImageDecoratorClass);


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLinearColorToHex); \
	DECLARE_FUNCTION(execByteToHex); \
	DECLARE_FUNCTION(execGetBrushFromImageDecoratorClass);


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextFunctionLibrary(); \
	friend struct Z_Construct_UClass_URichTextFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URichTextFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomRichText"), NO_API) \
	DECLARE_SERIALIZER(URichTextFunctionLibrary)


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURichTextFunctionLibrary(); \
	friend struct Z_Construct_UClass_URichTextFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URichTextFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomRichText"), NO_API) \
	DECLARE_SERIALIZER(URichTextFunctionLibrary)


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichTextFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextFunctionLibrary(URichTextFunctionLibrary&&); \
	NO_API URichTextFunctionLibrary(const URichTextFunctionLibrary&); \
public:


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichTextFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextFunctionLibrary(URichTextFunctionLibrary&&); \
	NO_API URichTextFunctionLibrary(const URichTextFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextFunctionLibrary)


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_12_PROLOG
#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_SPARSE_DATA \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_RPC_WRAPPERS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_INCLASS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_SPARSE_DATA \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMRICHTEXT_API UClass* StaticClass<class URichTextFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_RichTextFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
