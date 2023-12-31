// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Year3PhysicsICA1/Year3PhysicsICA1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYear3PhysicsICA1GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Year3PhysicsICA1();
	YEAR3PHYSICSICA1_API UClass* Z_Construct_UClass_AYear3PhysicsICA1GameModeBase();
	YEAR3PHYSICSICA1_API UClass* Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_NoRegister();
// End Cross Module References
	void AYear3PhysicsICA1GameModeBase::StaticRegisterNativesAYear3PhysicsICA1GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYear3PhysicsICA1GameModeBase);
	UClass* Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_NoRegister()
	{
		return AYear3PhysicsICA1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Year3PhysicsICA1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Year3PhysicsICA1GameModeBase.h" },
		{ "ModuleRelativePath", "Year3PhysicsICA1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYear3PhysicsICA1GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics::ClassParams = {
		&AYear3PhysicsICA1GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYear3PhysicsICA1GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AYear3PhysicsICA1GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYear3PhysicsICA1GameModeBase.OuterSingleton, Z_Construct_UClass_AYear3PhysicsICA1GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AYear3PhysicsICA1GameModeBase.OuterSingleton;
	}
	template<> YEAR3PHYSICSICA1_API UClass* StaticClass<AYear3PhysicsICA1GameModeBase>()
	{
		return AYear3PhysicsICA1GameModeBase::StaticClass();
	}
	AYear3PhysicsICA1GameModeBase::AYear3PhysicsICA1GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYear3PhysicsICA1GameModeBase);
	AYear3PhysicsICA1GameModeBase::~AYear3PhysicsICA1GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Year3PhysicsICA1GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Year3PhysicsICA1GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AYear3PhysicsICA1GameModeBase, AYear3PhysicsICA1GameModeBase::StaticClass, TEXT("AYear3PhysicsICA1GameModeBase"), &Z_Registration_Info_UClass_AYear3PhysicsICA1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYear3PhysicsICA1GameModeBase), 2222193888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Year3PhysicsICA1GameModeBase_h_3201192817(TEXT("/Script/Year3PhysicsICA1"),
		Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Year3PhysicsICA1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Year3PhysicsICA1GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
