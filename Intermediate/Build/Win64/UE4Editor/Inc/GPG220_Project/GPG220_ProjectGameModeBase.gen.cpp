// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GPG220_ProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPG220_ProjectGameModeBase() {}
// Cross Module References
	GPG220_PROJECT_API UClass* Z_Construct_UClass_AGPG220_ProjectGameModeBase_NoRegister();
	GPG220_PROJECT_API UClass* Z_Construct_UClass_AGPG220_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GPG220_Project();
// End Cross Module References
	void AGPG220_ProjectGameModeBase::StaticRegisterNativesAGPG220_ProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGPG220_ProjectGameModeBase_NoRegister()
	{
		return AGPG220_ProjectGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AGPG220_ProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_GPG220_Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GPG220_ProjectGameModeBase.h" },
				{ "ModuleRelativePath", "GPG220_ProjectGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGPG220_ProjectGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGPG220_ProjectGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGPG220_ProjectGameModeBase, 1042243250);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGPG220_ProjectGameModeBase(Z_Construct_UClass_AGPG220_ProjectGameModeBase, &AGPG220_ProjectGameModeBase::StaticClass, TEXT("/Script/GPG220_Project"), TEXT("AGPG220_ProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGPG220_ProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
