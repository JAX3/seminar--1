// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "play.generated.h"


USTRUCT(BlueprintType)
struct FSomestruct {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
     FName Player;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isAlive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxMana; 


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int TotalGold;
		
			UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 int MaxHP;
	






};
 

/**
 * 
 */
UCLASS()
class SEMINAR_1_API Aplay : public AGameModeBase
{
	GENERATED_BODY()
	
};
