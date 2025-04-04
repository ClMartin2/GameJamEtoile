// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;
using EpicGames.Core;

public class OWLSpout : ModuleRules
{
	public OWLSpout(ReadOnlyTargetRules Target) : base(Target)
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
				"OWLSpout/Private",
				"LivestreamingToolkit/Private/Tools",
				"LivestreamingToolkit/Public/Tools",
//CDV:improbable:excludestart
				"LivestreamingToolkit/Private/Telemetry",
				"LivestreamingToolkit/Private/ServerAuth",
				"LivestreamingToolkitShaders/Private",
				// ... add other private include paths required here ...
//CDV:improbable:excludeend
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Spout",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"RenderCore",
				"Renderer",
				"Projects",
				"Spout",
				"LivestreamingToolkit",
				"LivestreamingToolkitShaders",
				"OWLBranding",
//CDV:improbable:excludestart
				"Json",
				"JsonUtilities",
//CDV:improbable:excludeend
			}
		);


		string SpoutDLLPath = "/Source/ThirdParty/Spout/Spout2/BUILD/Binaries/x64/Spout.dll";
		PublicDefinitions.Add("OWL_SPOUT_DLL_PATH=\"" + SpoutDLLPath + "\"");
		PublicDefinitions.Add("DBG=0");
		PublicDefinitions.Add("BETA=0");
		PublicDefinitions.Add("OFFICIAL_BUILD=1");

		DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
		);

		if ((Target.Platform == UnrealTargetPlatform.Win64))
		{

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"D3D12RHI",
					"D3D11RHI",
				}
			);

			string EnginePath = Path.GetFullPath(Target.RelativeEnginePath);

			PrivateIncludePaths.AddRange(
				new string[]
				{
					Path.Combine(EnginePath, "Source/Runtime/Renderer/Private"),
				}
			);

			// For D3D11on12
			AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12", "DX11", "NVAftermath");
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
//CDV:improbable:excludeend
}
