// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Projet_VsEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjet_VsEGameModeBase() {}
// Cross Module References
	PROJET_VSE_API UClass* Z_Construct_UClass_AProjet_VsEGameModeBase_NoRegister();
	PROJET_VSE_API UClass* Z_Construct_UClass_AProjet_VsEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Projet_VsE();
// End Cross Module References
	void AProjet_VsEGameModeBase::StaticRegisterNativesAProjet_VsEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProjet_VsEGameModeBase_NoRegister()
	{
		return AProjet_VsEGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjet_VsEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Projet_VsE,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Projet_VsEGameModeBase.h" },
				{ "ModuleRelativePath", "Projet_VsEGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProjet_VsEGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProjet_VsEGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AProjet_VsEGameModeBase, 47164488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjet_VsEGameModeBase(Z_Construct_UClass_AProjet_VsEGameModeBase, &AProjet_VsEGameModeBase::StaticClass, TEXT("/Script/Projet_VsE"), TEXT("AProjet_VsEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjet_VsEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
