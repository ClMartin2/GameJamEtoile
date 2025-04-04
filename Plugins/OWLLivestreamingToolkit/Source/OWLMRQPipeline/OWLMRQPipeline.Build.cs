// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.Net;
using System.IO;
using System;
using EpicGames.Core;

public class OWLMRQPipeline : ModuleRules
{
	public OWLMRQPipeline(ReadOnlyTargetRules Target) : base(Target)
	{

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		if (GetOffWorldBoolean("Debug", false))
		{
			PublicDefinitions.Add("OFFWORLDLIVE_DEBUG=1");
		}

		PublicIncludePaths.AddRange(
			new string[] {
			});

		PrivateIncludePaths.AddRange(
				new string[] {
					"OWLMRQPipeline/Private",
					"LivestreamingToolkit/Private/ServerAuth",
					"LivestreamingToolkit/Private/Tools",
					"LivestreamingToolkitShaders/Private",
				}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RenderCore",
				"RHI",
				"ImageCore",
				"ImageWriteQueue",
				"OWL360Camera",
				"OpenColorIO",
				"MovieRenderPipelineCore",
				"MovieRenderPipelineRenderPasses",
				// ... add other public dependencies that you statically link with here ...
			});


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"ActorLayerUtilities", // For Layering
				"MovieRenderPipelineRenderPasses",
				"LivestreamingToolkit",
				"LivestreamingToolkitShaders",
				// ... add private dependencies that you statically link with here ...
			});
	}
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
	public string GetOffWorldString(string Key, string defaultValue = "")
	{
		try
		{
			return GetOffWorldSettings().GetStringField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}
}
