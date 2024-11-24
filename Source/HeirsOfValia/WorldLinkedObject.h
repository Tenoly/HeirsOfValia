// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WorldLinkedObject.generated.h"

/**
 * 
 */
UCLASS()
class HEIRSOFVALIA_API UWorldLinkedObject : public UObject {
	GENERATED_BODY()

public:
	virtual UWorld* GetWorld() const override;
};
