// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AFISHYSITUATION : ModuleRules
{
	public AFISHYSITUATION(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"AFISHYSITUATION",
			"AFISHYSITUATION/Variant_Horror",
			"AFISHYSITUATION/Variant_Horror/UI",
			"AFISHYSITUATION/Variant_Shooter",
			"AFISHYSITUATION/Variant_Shooter/AI",
			"AFISHYSITUATION/Variant_Shooter/UI",
			"AFISHYSITUATION/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
