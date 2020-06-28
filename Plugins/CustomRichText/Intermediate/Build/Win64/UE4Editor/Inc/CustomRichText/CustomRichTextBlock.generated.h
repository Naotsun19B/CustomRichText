// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTextBlockStyle;
#ifdef CUSTOMRICHTEXT_CustomRichTextBlock_generated_h
#error "CustomRichTextBlock.generated.h already included, missing '#pragma once' in CustomRichTextBlock.h"
#endif
#define CUSTOMRICHTEXT_CustomRichTextBlock_generated_h

#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_SPARSE_DATA
#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInlineImageSize); \
	DECLARE_FUNCTION(execGetInlineImageSize); \
	DECLARE_FUNCTION(execSetDefaultStyleSetID); \
	DECLARE_FUNCTION(execGetDefaultTextStyleBP);


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInlineImageSize); \
	DECLARE_FUNCTION(execGetInlineImageSize); \
	DECLARE_FUNCTION(execSetDefaultStyleSetID); \
	DECLARE_FUNCTION(execGetDefaultTextStyleBP);


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomRichTextBlock(); \
	friend struct Z_Construct_UClass_UCustomRichTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCustomRichTextBlock, URichTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomRichText"), NO_API) \
	DECLARE_SERIALIZER(UCustomRichTextBlock)


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCustomRichTextBlock(); \
	friend struct Z_Construct_UClass_UCustomRichTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCustomRichTextBlock, URichTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomRichText"), NO_API) \
	DECLARE_SERIALIZER(UCustomRichTextBlock)


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomRichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomRichTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomRichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomRichTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomRichTextBlock(UCustomRichTextBlock&&); \
	NO_API UCustomRichTextBlock(const UCustomRichTextBlock&); \
public:


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomRichTextBlock(UCustomRichTextBlock&&); \
	NO_API UCustomRichTextBlock(const UCustomRichTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomRichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomRichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomRichTextBlock)


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultStyleSetID() { return STRUCT_OFFSET(UCustomRichTextBlock, DefaultStyleSetID); } \
	FORCEINLINE static uint32 __PPO__InlineImageSize() { return STRUCT_OFFSET(UCustomRichTextBlock, InlineImageSize); }


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_12_PROLOG
#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_SPARSE_DATA \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_RPC_WRAPPERS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_INCLASS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_SPARSE_DATA \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_INCLASS_NO_PURE_DECLS \
	CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMRICHTEXT_API UClass* StaticClass<class UCustomRichTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CustomRichTextPlugin_Plugins_CustomRichText_Source_CustomRichText_Public_CustomRichTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
