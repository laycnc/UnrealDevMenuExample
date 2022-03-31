// Fill out your copyright notice in the Description page of Project Settings.

#include "ExampleFunctionLibrary.h"

void UExampleFunctionLibrary::ExampleSetter(int32          NewValue,
                                            const UObject* InWorldContext)
{
}

int32 UExampleFunctionLibrary::ExampleGetter(const UObject* InWorldContext)
{
	return 0;
}

void UExampleFunctionLibrary::ExampleGetter2(const UObject* InWorldContext,
                                             int32&         OutValue)
{
}