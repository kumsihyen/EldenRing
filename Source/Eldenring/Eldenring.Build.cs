// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Eldenring : ModuleRules
{
	public Eldenring(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
