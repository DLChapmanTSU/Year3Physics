// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Year3PhysicsICA1/Public/Ball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Year3PhysicsICA1();
	YEAR3PHYSICSICA1_API UClass* Z_Construct_UClass_ABall();
	YEAR3PHYSICSICA1_API UClass* Z_Construct_UClass_ABall_NoRegister();
// End Cross Module References
	void ABall::StaticRegisterNativesABall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABall);
	UClass* Z_Construct_UClass_ABall_NoRegister()
	{
		return ABall::StaticClass();
	}
	struct Z_Construct_UClass_ABall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Year3PhysicsICA1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
		&ABall::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABall()
	{
		if (!Z_Registration_Info_UClass_ABall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABall.OuterSingleton, Z_Construct_UClass_ABall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABall.OuterSingleton;
	}
	template<> YEAR3PHYSICSICA1_API UClass* StaticClass<ABall>()
	{
		return ABall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
	ABall::~ABall() {}
	struct Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_Ball_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_Ball_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABall, ABall::StaticClass, TEXT("ABall"), &Z_Registration_Info_UClass_ABall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABall), 3714640560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_Ball_h_1420942425(TEXT("/Script/Year3PhysicsICA1"),
		Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_Ball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_A0028242_Documents_GitHub_Year3Physics_Year3PhysicsICA1_Source_Year3PhysicsICA1_Public_Ball_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
