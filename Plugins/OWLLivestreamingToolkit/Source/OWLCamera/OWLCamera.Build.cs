// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;
using System.Net;
using System;
using EpicGames.Core;

public class OWLCamera : ModuleRules
{
	public OWLCamera(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

//CDV:improbable:excludestart
		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);
//CDV:improbable:excludeend

		string EngineDir = Path.GetFullPath(Target.RelativeEnginePath);

		PrivateIncludePaths.AddRange(new string[]
		{
			Path.Combine(EngineDir, "Source/Runtime/Renderer/Private"),
//CDV:improbable:excludestart
			"LivestreamingToolkit/Private/Telemetry",
			"LivestreamingToolkit/Private/ServerAuth",
			"LivestreamingToolkit/Private/Tools",
//CDV:improbable:excludeend
		});

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"RHICore",
				"RenderCore",
				"Renderer",
				"Projects",
//CDV:improbable:excludestart
				"Json",
				"JsonUtilities",
				"HTTP",
//CDV:improbable:excludeend
				"Landscape",

				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"RenderCore",
				"CinematicCamera",
				"Slate",
				"UMG",
				"SlateCore",
				"Renderer",
				"RenderCore",
//CDV:improbable:excludestart
				"RSA",
				"OpenSSL",
//CDV:improbable:excludeend
				"MediaIOCore",
				"LivestreamingToolkit",
				"LivestreamingToolkitShaders",
				"OWLBranding",
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.Add("UnrealEd");
		}
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
//CDV:improbable:excludeend
}
