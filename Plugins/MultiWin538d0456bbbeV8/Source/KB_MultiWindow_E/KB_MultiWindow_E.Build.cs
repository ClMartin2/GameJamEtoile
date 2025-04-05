// Copyright 2024-2025, Kibibyte, All rights reserved

using UnrealBuildTool;

public class KB_MultiWindow_E : ModuleRules
{
	public KB_MultiWindow_E(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] {});

		PrivateIncludePaths.AddRange(new string[] {});

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "UMG",
			}
			);
		
		DynamicallyLoadedModuleNames.AddRange(new string[] {});
	}
}