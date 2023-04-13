#include "AI_FunctionHelpers.h"
#include <BehaviorTree/BlackboardComponent.h>

void UAIFunctionHelpers::UpdateBlackboardBoolKey(AAIController* AIController, const FName KeyName, const bool Value) {
	AIController->GetBlackboardComponent()->SetValueAsBool(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardEnumKey(AAIController* AIController, const FName KeyName, const uint8 Value) {
	AIController->GetBlackboardComponent()->SetValueAsEnum(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardIntKey(AAIController* AIController, const FName KeyName, const int Value) {
	AIController->GetBlackboardComponent()->SetValueAsInt(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardFloatKey(AAIController* AIController, const FName KeyName, const float Value) {
	AIController->GetBlackboardComponent()->SetValueAsFloat(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardStringKey(AAIController* AIController, const FName KeyName, const FString Value) {
	AIController->GetBlackboardComponent()->SetValueAsString(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardNameKey(AAIController* AIController, const FName KeyName, const FName Value) {
	AIController->GetBlackboardComponent()->SetValueAsName(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardObjectKey(AAIController* AIController, const FName KeyName, UObject* Value) {
	AIController->GetBlackboardComponent()->SetValueAsObject(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardClassKey(AAIController* AIController, const FName KeyName, UClass* Value) {
	AIController->GetBlackboardComponent()->SetValueAsClass(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardVectorKey(AAIController* AIController, const FName KeyName, const FVector Value) {
	AIController->GetBlackboardComponent()->SetValueAsVector(KeyName, Value);
}

void UAIFunctionHelpers::UpdateBlackboardRotatorKey(AAIController* AIController, const FName KeyName, const FRotator Value) {
	AIController->GetBlackboardComponent()->SetValueAsRotator(KeyName, Value);
}