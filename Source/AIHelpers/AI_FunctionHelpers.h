#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <AIModule/Classes/AIController.h>
#include "AI_FunctionHelpers.generated.h"


UCLASS()
class AIHELPERS_API UAIFunctionHelpers :public UBlueprintFunctionLibrary {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardBoolKey(AAIController* AIController, const FName KeyName, const bool Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardEnumKey(AAIController* AIController, const FName KeyName, const uint8 Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardIntKey(AAIController* AIController, const FName KeyName, const int Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardFloatKey(AAIController* AIController, const FName KeyName, const float Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardStringKey(AAIController* AIController, const FName KeyName, const FString Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardNameKey(AAIController* AIController, const FName KeyName, const FName Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardObjectKey(AAIController* AIController, const FName KeyName, UObject* Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardClassKey(AAIController* AIController, const FName KeyName, UClass* Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardVectorKey(AAIController* AIController, const FName KeyName, const FVector Value);
	UFUNCTION(BlueprintCallable, Category = "AI Helpers")
		static void UpdateBlackboardRotatorKey(AAIController* AIController, const FName KeyName, const FRotator Value);
};