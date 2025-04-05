// Copyright 2024-2025, Kibibyte, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FKB_MultiWindow_EModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};