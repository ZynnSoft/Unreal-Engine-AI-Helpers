// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AIHelpers : ModuleRules {
    public AIHelpers(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] { });

        PrivateIncludePaths.AddRange(new string[] { });

        PublicDependencyModuleNames.AddRange(new[] { "Core", "AIModule", "GameplayTasks", });

        PrivateDependencyModuleNames.AddRange(new[] { "CoreUObject", "Engine", "Slate", "SlateCore" });

        DynamicallyLoadedModuleNames.AddRange(new string[] { });
    }
}