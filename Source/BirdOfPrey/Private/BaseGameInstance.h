#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SAgentInfo.h"
#include "BaseGameInstance.generated.h"

class APlayerController;

UCLASS()
class BIRDOFPREY_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TMap<APlayerController*, FSAgentInfo> PlayerAgentInfo;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetPlayerAgentInfoFor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfoFor();
};