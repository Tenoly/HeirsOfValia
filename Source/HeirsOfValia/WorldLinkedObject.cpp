// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldLinkedObject.h"

UWorld* UWorldLinkedObject::GetWorld() const {
	if (!HasAnyFlags(RF_ClassDefaultObject) && ensureMsgf(GetOuter(), TEXT("Actor: %s has a null OuterPrivate in AActor::GetWorld()"), *GetFullName())
		&& !GetOuter()->HasAnyFlags(RF_BeginDestroyed) && !GetOuter()->IsUnreachable())
	{
		if (ULevel* level = GetTypedOuter<ULevel>())
		{
			return level->OwningWorld;
		}
	}
	return nullptr;
}