#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include <AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h>
#include "AI_BehaviourTaskHelpers.generated.h"

UCLASS()
class AIHELPERS_API UBTTask_UpdateBool : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateBool();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		bool Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateEnum : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateEnum();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		uint8 Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateInt : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateInt();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		int Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateFloat : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateFloat();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		float Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateVector : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateVector();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FVector Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateRotator : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateRotator();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FRotator Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateObject : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateObject();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		UObject* Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateClass : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateClass();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		TSubclassOf<UClass> Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateString : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateString();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FString Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

UCLASS()
class AIHELPERS_API UBTTask_UpdateName : public UBTTask_BlackboardBase {
	GENERATED_BODY()
public:
	UBTTask_UpdateName();
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FName Value;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};