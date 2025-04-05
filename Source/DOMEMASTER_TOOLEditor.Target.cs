// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class DOMEMASTER_TOOLEditorTarget : TargetRules
{
	public DOMEMASTER_TOOLEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "DOMEMASTER_TOOL" } );
	}
}
