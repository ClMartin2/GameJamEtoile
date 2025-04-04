using UnrealBuildTool;
using System.IO;

public class OWLBranding : ModuleRules
{
	public OWLBranding(ReadOnlyTargetRules Target) : base(Target)
	{

		Type = ModuleType.External;
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
	}
}
