// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Year3PhysicsICA1/Public/PhysicsBallManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsBallManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Year3PhysicsICA1();
	YEAR3PHYSICSICA1_API UClass* Z_Construct_UClass_APhysicsBallManager();
	YEAR3PHYSICSICA1_API UClass* Z_Construct_UClass_APhysicsBallManager_NoRegister();
// End Cross Module References
	void APhysicsBallManager::StaticRegisterNativesAPhysicsBallManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsBallManager);
	UClass* Z_Construct_UClass_APhysicsBallManager_NoRegister()
	{
		return APhysicsBallManager::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsBallManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsBallManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Year3PhysicsICA1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsBallManager.h" },
		{ "ModuleRelativePath", "Public/PhysicsBallManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsBallManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsBallManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsBallManager_Statics::ClassParams = {
		&APhysicsBallManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsBallManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsBallManager()
	{
		if (!Z_Registration_Info_UClass_APhysicsBallManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsBallManager.OuterSingleton, Z_Construct_UClass_APhysicsBallManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhysicsBallManager.OuterSingleton;
	}
	template<> YEAR3PHYSICSICA1_API UClass* StaticClass<APhysicsBallManager>()
	{
		return APhysicsBallManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsBallManager);
	APhysicsBallManager::~APhysicsBallManager() {}
	struct Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_PhysicsBallManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_PhysicsBallManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsBallManager, APhysicsBallManager::StaticClass, TEXT("APhysicsBallManager"), &Z_Registration_Info_UClass_APhysicsBallManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsBallManager), 1560949794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_PhysicsBallManager_h_3567098314(TEXT("/Script/Year3PhysicsICA1"),
		Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_PhysicsBallManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_PhysicsBallManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
