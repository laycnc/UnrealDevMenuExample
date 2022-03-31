// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExampleFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UExampleFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Sample")
	void ExampleSetter(int32 NewValue, const UObject* InWorldContext);

	UFUNCTION(BlueprintCallable, Category = "Sample")
	int32 ExampleGetter(const UObject* InWorldContext);

	UFUNCTION(BlueprintCallable, Category = "Sample")
	void ExampleGetter2(const UObject* InWorldContext, int32& OutValue);
};
