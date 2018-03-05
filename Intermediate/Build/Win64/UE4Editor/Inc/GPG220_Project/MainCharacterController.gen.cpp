// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MainCharacterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterController() {}
// Cross Module References
	GPG220_PROJECT_API UClass* Z_Construct_UClass_AMainCharacterController_NoRegister();
	GPG220_PROJECT_API UClass* Z_Construct_UClass_AMainCharacterController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GPG220_Project();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMainCharacterController::StaticRegisterNativesAMainCharacterController()
	{
	}
	UClass* Z_Construct_UClass_AMainCharacterController_NoRegister()
	{
		return AMainCharacterController::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainCharacterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_GPG220_Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MainCharacterController.h" },
				{ "ModuleRelativePath", "Public/MainCharacterController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
				{ "Category", "MainCharacterController" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainCharacterController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CubeMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AMainCharacterController, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_CubeMesh_MetaData, ARRAY_COUNT(NewProp_CubeMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CubeMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMainCharacterController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMainCharacterController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainCharacterController, 80338090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainCharacterController(Z_Construct_UClass_AMainCharacterController, &AMainCharacterController::StaticClass, TEXT("/Script/GPG220_Project"), TEXT("AMainCharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
