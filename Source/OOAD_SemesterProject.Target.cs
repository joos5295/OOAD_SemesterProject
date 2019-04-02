// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class OOAD_SemesterProjectTarget : TargetRules
{
	public OOAD_SemesterProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("OOAD_SemesterProject");
	}
}
