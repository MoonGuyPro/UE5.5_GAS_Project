// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BasicAttributeSet.generated.h"


	// Helper macro to define the accessors for an attribute
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class VATESTPROJECT_API UBasicAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	public:
	 
		// Zmienna przechowuj¹ca wartoœæ DamageMultiplier
		UPROPERTY(BlueprintReadOnly, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
		FGameplayAttributeData DamageMultiplier;

		// Zmienna przechowuj¹ca wartoœæ zdrowia (opcjonalnie)
		UPROPERTY(BlueprintReadOnly, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
		FGameplayAttributeData Health;

		// Deklaracja atrybutu DamageMultiplier
		UPROPERTY(BlueprintReadOnly, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
		FGameplayAttribute DamageMultiplierAttribute;

	
};
