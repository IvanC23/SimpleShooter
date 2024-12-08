// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterAIController();
SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References

// Begin Class AShooterAIController
void AShooterAIController::StaticRegisterNativesAShooterAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterAIController);
UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
{
	return AShooterAIController::StaticClass();
}
struct Z_Construct_UClass_AShooterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterAIController.h" },
		{ "ModuleRelativePath", "ShooterAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
	&AShooterAIController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterAIController()
{
	if (!Z_Registration_Info_UClass_AShooterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAIController.OuterSingleton, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterAIController.OuterSingleton;
}
template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterAIController>()
{
	return AShooterAIController::StaticClass();
}
AShooterAIController::AShooterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
AShooterAIController::~AShooterAIController() {}
// End Class AShooterAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_SimpleShooter_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAIController, AShooterAIController::StaticClass, TEXT("AShooterAIController"), &Z_Registration_Info_UClass_AShooterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAIController), 3643590097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_SimpleShooter_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_1301279572(TEXT("/Script/SimpleShooter"),
	Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_SimpleShooter_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_SimpleShooter_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
