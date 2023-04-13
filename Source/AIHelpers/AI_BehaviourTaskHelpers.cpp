#include "AI_BehaviourTaskHelpers.h"
#include <AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h>
#include <AIModule/Classes/BrainComponent.h>
#include <AIModule/Classes/BehaviorTree/BlackboardComponent.h>
#include <GameFramework/Actor.h>
#include <AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h>
#include <AIModule/Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h>
#include <Templates/SubclassOf.h>
#include <Engine/UserDefinedEnum.h>

UBTTask_UpdateBool::UBTTask_UpdateBool() {
	NodeName = "Update Blackboard Bool";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddBoolFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateBool, BlackboardKey));
}

EBTNodeResult::Type UBTTask_UpdateBool::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsBool(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateEnum::UBTTask_UpdateEnum() {
	NodeName = "Update Blackboard Enum";
	INIT_TASK_NODE_NOTIFY_FLAGS();
}

EBTNodeResult::Type UBTTask_UpdateEnum::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsEnum(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateInt::UBTTask_UpdateInt() {
	NodeName = "Update Blackboard Int";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddIntFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateInt, BlackboardKey));
}

EBTNodeResult::Type UBTTask_UpdateInt::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsInt(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateFloat::UBTTask_UpdateFloat() {
	NodeName = "Update Blackboard Float";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddFloatFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateFloat, BlackboardKey));
}

EBTNodeResult::Type UBTTask_UpdateFloat::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateVector::UBTTask_UpdateVector() {
	NodeName = "Update Blackboard Vector";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateVector, BlackboardKey));
}

EBTNodeResult::Type UBTTask_UpdateVector::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsVector(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateRotator::UBTTask_UpdateRotator() {
	NodeName = "Update Blackboard Rotator";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddRotatorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateRotator, BlackboardKey));
}

EBTNodeResult::Type UBTTask_UpdateRotator::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsRotator(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateObject::UBTTask_UpdateObject() {
	NodeName = "Update Blackboard Object";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateObject, BlackboardKey), UObject::StaticClass());
}

EBTNodeResult::Type UBTTask_UpdateObject::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsObject(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateClass::UBTTask_UpdateClass() {
	NodeName = "Update Blackboard Class	";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateClass, BlackboardKey), UObject::StaticClass());
}

EBTNodeResult::Type UBTTask_UpdateClass::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsClass(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateString::UBTTask_UpdateString() {
	NodeName = "Update Blackboard String";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddStringFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateString, BlackboardKey));
}

EBTNodeResult::Type UBTTask_UpdateString::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsString(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}

UBTTask_UpdateName::UBTTask_UpdateName() {
	NodeName = "Update Blackboard Name";
	INIT_TASK_NODE_NOTIFY_FLAGS();

	// Setup 
	BlackboardKey.AddNameFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_UpdateName, BlackboardKey));
}

EBTNodeResult::Type UBTTask_UpdateName::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner())
		return EBTNodeResult::Failed;

	OwnerComp.GetBlackboardComponent()->SetValueAsName(BlackboardKey.SelectedKeyName, Value);
	return EBTNodeResult::Succeeded;
}
