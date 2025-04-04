// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;
using EpicGames.Core;

public class LivestreamingToolkitEditor : ModuleRules
{
	public LivestreamingToolkitEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

//CDV:improbable:excludestart
		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);
//CDV:improbable:excludeend

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
		);

		PrivateIncludePaths.AddRange(
			new string[] {
				"LivestreamingToolkit/Private",
				// ... add other private include paths required here ...
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"AssetRegistry",
				"CoreUObject",
				"InputCore",
				"Projects",
				"UnrealEd",
				"ToolMenus",
				"Engine",
				"SlateCore",
				"LivestreamingToolkit",
				"OWLCamera",
				"OWLSpout",
				"EditorStyle",
				"RHI",
				"RHICore",
				"CinematicCamera",
				"PlacementMode",
				"OWLBranding",
//CDV:improbable:excludestart
				"OWLNDI",
				"OWL360Camera",
				"OWLComposure",
				"OWLMedia",
//CDV:improbable:excludeend
				"BlueprintGraph",
//CDV:improbable:excludestart
				"OWLVirtualWebcam",
				"OWLScreenCapture",
//CDV:improbable:excludeend
				"GameProjectGeneration",
				// ... add private dependencies that you statically link with here ...
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}
//CDV:improbable:excludestart
	public JsonObject GetOffWorldSettings()
	{
		string RootDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../"));
		string UPluginPath = Path.Combine(RootDir, "OWLLivestreamingToolkit.uplugin");
		string RawString = File.ReadAllText(UPluginPath);
		JsonObject UPluginJson = JsonObject.Parse(RawString);
		return UPluginJson.GetObjectField("OffWorldLive");
	}
	public bool GetOffWorldBoolean(string Key, bool defaultValue = false)
	{
		try
		{
			return GetOffWorldSettings().GetBoolField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}
//CDV:improbable:excludeend
}
