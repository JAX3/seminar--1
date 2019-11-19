// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "lootPool.generated.h"


USTRUCT(BlueprintType)
struct FSomestruct {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Rarity;
		


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int  NumItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isFake;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)

int  GoldValue;
	







};

UCLASS()
class SEMINAR_1_API AlootPool : public AGameModeBase
{
	GENERATED_BODY()
	
};
