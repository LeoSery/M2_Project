// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameSystem() {}

// Begin Cross Module References
BCR_API UClass* Z_Construct_UClass_AMiniGameSystem();
BCR_API UClass* Z_Construct_UClass_AMiniGameSystem_NoRegister();
BCR_API UClass* Z_Construct_UClass_APickableItem_NoRegister();
BCR_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
BCR_API UClass* Z_Construct_UClass_UQTEConfigurationAsset_NoRegister();
BCR_API UFunction* Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BCR();
// End Cross Module References

// Begin Delegate FOnEndQTESignature
struct Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics
{
	struct _Script_BCR_eventOnEndQTESignature_Parms
	{
		bool _resultStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp__resultStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__resultStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus_SetBit(void* Obj)
{
	((_Script_BCR_eventOnEndQTESignature_Parms*)Obj)->_resultStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus = { "_resultStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BCR_eventOnEndQTESignature_Parms), &Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::NewProp__resultStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BCR, nullptr, "OnEndQTESignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::_Script_BCR_eventOnEndQTESignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::_Script_BCR_eventOnEndQTESignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BCR_OnEndQTESignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndQTESignature_DelegateWrapper(const FMulticastScriptDelegate& OnEndQTESignature, bool _resultStatus)
{
	struct _Script_BCR_eventOnEndQTESignature_Parms
	{
		bool _resultStatus;
	};
	_Script_BCR_eventOnEndQTESignature_Parms Parms;
	Parms._resultStatus=_resultStatus ? true : false;
	OnEndQTESignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEndQTESignature

// Begin Class AMiniGameSystem Function CallQTEReader
struct Z_Construct_UFunction_AMiniGameSystem_CallQTEReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_CallQTEReader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "CallQTEReader", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_CallQTEReader_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_CallQTEReader_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMiniGameSystem_CallQTEReader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_CallQTEReader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execCallQTEReader)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallQTEReader();
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function CallQTEReader

// Begin Class AMiniGameSystem Function FinishExecute
struct Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics
{
	struct MiniGameSystem_eventFinishExecute_Parms
	{
		bool _success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp__success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::NewProp__success_SetBit(void* Obj)
{
	((MiniGameSystem_eventFinishExecute_Parms*)Obj)->_success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::NewProp__success = { "_success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiniGameSystem_eventFinishExecute_Parms), &Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::NewProp__success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::NewProp__success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "FinishExecute", nullptr, nullptr, Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::MiniGameSystem_eventFinishExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::MiniGameSystem_eventFinishExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMiniGameSystem_FinishExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_FinishExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execFinishExecute)
{
	P_GET_UBOOL(Z_Param__success);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishExecute(Z_Param__success);
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function FinishExecute

// Begin Class AMiniGameSystem Function OnFirstSnapPointResult
struct Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics
{
	struct MiniGameSystem_eventOnFirstSnapPointResult_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((MiniGameSystem_eventOnFirstSnapPointResult_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiniGameSystem_eventOnFirstSnapPointResult_Parms), &Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "OnFirstSnapPointResult", nullptr, nullptr, Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::MiniGameSystem_eventOnFirstSnapPointResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::MiniGameSystem_eventOnFirstSnapPointResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execOnFirstSnapPointResult)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFirstSnapPointResult(Z_Param_bSuccess);
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function OnFirstSnapPointResult

// Begin Class AMiniGameSystem Function OnSecondSnapPointResult
struct Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics
{
	struct MiniGameSystem_eventOnSecondSnapPointResult_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((MiniGameSystem_eventOnSecondSnapPointResult_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiniGameSystem_eventOnSecondSnapPointResult_Parms), &Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "OnSecondSnapPointResult", nullptr, nullptr, Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::MiniGameSystem_eventOnSecondSnapPointResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::MiniGameSystem_eventOnSecondSnapPointResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execOnSecondSnapPointResult)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSecondSnapPointResult(Z_Param_bSuccess);
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function OnSecondSnapPointResult

// Begin Class AMiniGameSystem Function Reset
struct Z_Construct_UFunction_AMiniGameSystem_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMiniGameSystem_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function Reset

// Begin Class AMiniGameSystem Function SetInputItem
struct Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics
{
	struct MiniGameSystem_eventSetInputItem_Parms
	{
		TArray<TSubclassOf<APickableItem> > _items;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// Game\n// Setters\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Game\n Setters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniGameSystem_eventSetInputItem_Parms, _items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::NewProp__items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "SetInputItem", nullptr, nullptr, Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::MiniGameSystem_eventSetInputItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::MiniGameSystem_eventSetInputItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMiniGameSystem_SetInputItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_SetInputItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execSetInputItem)
{
	P_GET_TARRAY(TSubclassOf<APickableItem>,Z_Param__items);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputItem(Z_Param__items);
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function SetInputItem

// Begin Class AMiniGameSystem Function SetOutputItem
struct Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics
{
	struct MiniGameSystem_eventSetOutputItem_Parms
	{
		TArray<TSubclassOf<APickableItem> > _items;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniGameSystem_eventSetOutputItem_Parms, _items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::NewProp__items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "SetOutputItem", nullptr, nullptr, Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::MiniGameSystem_eventSetOutputItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::MiniGameSystem_eventSetOutputItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMiniGameSystem_SetOutputItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_SetOutputItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execSetOutputItem)
{
	P_GET_TARRAY(TSubclassOf<APickableItem>,Z_Param__items);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutputItem(Z_Param__items);
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function SetOutputItem

// Begin Class AMiniGameSystem Function SetQTE
struct Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics
{
	struct MiniGameSystem_eventSetQTE_Parms
	{
		UQTEConfigurationAsset* _datas;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__datas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::NewProp__datas = { "_datas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniGameSystem_eventSetQTE_Parms, _datas), Z_Construct_UClass_UQTEConfigurationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::NewProp__datas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "SetQTE", nullptr, nullptr, Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::MiniGameSystem_eventSetQTE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::MiniGameSystem_eventSetQTE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMiniGameSystem_SetQTE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_SetQTE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execSetQTE)
{
	P_GET_OBJECT(UQTEConfigurationAsset,Z_Param__datas);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQTE(Z_Param__datas);
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function SetQTE

// Begin Class AMiniGameSystem Function SpawnItem
struct Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics
{
	struct MiniGameSystem_eventSpawnItem_Parms
	{
		int32 i;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_i;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniGameSystem_eventSpawnItem_Parms, i), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::NewProp_i,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "SpawnItem", nullptr, nullptr, Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::MiniGameSystem_eventSpawnItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::MiniGameSystem_eventSpawnItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMiniGameSystem_SpawnItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_SpawnItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execSpawnItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_i);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnItem(Z_Param_i);
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function SpawnItem

// Begin Class AMiniGameSystem Function StartExecute
struct Z_Construct_UFunction_AMiniGameSystem_StartExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Methods\n" },
#endif
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Methods" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniGameSystem_StartExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniGameSystem, nullptr, "StartExecute", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniGameSystem_StartExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniGameSystem_StartExecute_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMiniGameSystem_StartExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniGameSystem_StartExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMiniGameSystem::execStartExecute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartExecute();
	P_NATIVE_END;
}
// End Class AMiniGameSystem Function StartExecute

// Begin Class AMiniGameSystem
void AMiniGameSystem::StaticRegisterNativesAMiniGameSystem()
{
	UClass* Class = AMiniGameSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallQTEReader", &AMiniGameSystem::execCallQTEReader },
		{ "FinishExecute", &AMiniGameSystem::execFinishExecute },
		{ "OnFirstSnapPointResult", &AMiniGameSystem::execOnFirstSnapPointResult },
		{ "OnSecondSnapPointResult", &AMiniGameSystem::execOnSecondSnapPointResult },
		{ "Reset", &AMiniGameSystem::execReset },
		{ "SetInputItem", &AMiniGameSystem::execSetInputItem },
		{ "SetOutputItem", &AMiniGameSystem::execSetOutputItem },
		{ "SetQTE", &AMiniGameSystem::execSetQTE },
		{ "SpawnItem", &AMiniGameSystem::execSpawnItem },
		{ "StartExecute", &AMiniGameSystem::execStartExecute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMiniGameSystem);
UClass* Z_Construct_UClass_AMiniGameSystem_NoRegister()
{
	return AMiniGameSystem::StaticClass();
}
struct Z_Construct_UClass_AMiniGameSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Headers/System/MiniGame/MiniGameSystem.h" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inputItems_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_outputItems_MetaData[] = {
		{ "Category", "MiniGameSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Copy of inputItems*/" },
#endif
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copy of inputItems" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QTEConfig_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_snapPlayerPoint1_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_snapPlayerPoint2_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_outputSpawnPoint_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inputBox_MetaData[] = {
		{ "Category", "MiniGameSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Headers/System/MiniGame/MiniGameSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_inputItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_inputItems;
	static const UECodeGen_Private::FClassPropertyParams NewProp_outputItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outputItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QTEConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_snapPlayerPoint1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_snapPlayerPoint2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_outputSpawnPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inputBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMiniGameSystem_CallQTEReader, "CallQTEReader" }, // 2531769137
		{ &Z_Construct_UFunction_AMiniGameSystem_FinishExecute, "FinishExecute" }, // 3264773684
		{ &Z_Construct_UFunction_AMiniGameSystem_OnFirstSnapPointResult, "OnFirstSnapPointResult" }, // 2467671475
		{ &Z_Construct_UFunction_AMiniGameSystem_OnSecondSnapPointResult, "OnSecondSnapPointResult" }, // 1327089782
		{ &Z_Construct_UFunction_AMiniGameSystem_Reset, "Reset" }, // 2147501930
		{ &Z_Construct_UFunction_AMiniGameSystem_SetInputItem, "SetInputItem" }, // 2361576206
		{ &Z_Construct_UFunction_AMiniGameSystem_SetOutputItem, "SetOutputItem" }, // 2554580274
		{ &Z_Construct_UFunction_AMiniGameSystem_SetQTE, "SetQTE" }, // 1789283216
		{ &Z_Construct_UFunction_AMiniGameSystem_SpawnItem, "SpawnItem" }, // 3567001052
		{ &Z_Construct_UFunction_AMiniGameSystem_StartExecute, "StartExecute" }, // 1776983624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniGameSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems_Inner = { "inputItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems = { "inputItems", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, inputItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inputItems_MetaData), NewProp_inputItems_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems_Inner = { "outputItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems = { "outputItems", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, outputItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_outputItems_MetaData), NewProp_outputItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_QTEConfig = { "QTEConfig", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, QTEConfig), Z_Construct_UClass_UQTEConfigurationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QTEConfig_MetaData), NewProp_QTEConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_DefaultRootComponent = { "DefaultRootComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, DefaultRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRootComponent_MetaData), NewProp_DefaultRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint1 = { "snapPlayerPoint1", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, snapPlayerPoint1), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_snapPlayerPoint1_MetaData), NewProp_snapPlayerPoint1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint2 = { "snapPlayerPoint2", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, snapPlayerPoint2), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_snapPlayerPoint2_MetaData), NewProp_snapPlayerPoint2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputSpawnPoint = { "outputSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, outputSpawnPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_outputSpawnPoint_MetaData), NewProp_outputSpawnPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputBox = { "inputBox", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniGameSystem, inputBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inputBox_MetaData), NewProp_inputBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_QTEConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_DefaultRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_snapPlayerPoint2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_outputSpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGameSystem_Statics::NewProp_inputBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMiniGameSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BCR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMiniGameSystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AMiniGameSystem, IInteractable), false },  // 188668673
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMiniGameSystem_Statics::ClassParams = {
	&AMiniGameSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGameSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMiniGameSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMiniGameSystem()
{
	if (!Z_Registration_Info_UClass_AMiniGameSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMiniGameSystem.OuterSingleton, Z_Construct_UClass_AMiniGameSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMiniGameSystem.OuterSingleton;
}
template<> BCR_API UClass* StaticClass<AMiniGameSystem>()
{
	return AMiniGameSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniGameSystem);
AMiniGameSystem::~AMiniGameSystem() {}
// End Class AMiniGameSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMiniGameSystem, AMiniGameSystem::StaticClass, TEXT("AMiniGameSystem"), &Z_Registration_Info_UClass_AMiniGameSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMiniGameSystem), 3297263198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_1364771566(TEXT("/Script/BCR"),
	Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seryl_Desktop_Fichiers_Ynov_cours_M2_ProjetM2_M2_Project_Source_BCR_Headers_System_MiniGame_MiniGameSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
