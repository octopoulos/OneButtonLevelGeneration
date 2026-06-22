// Copyright (c) 2025 Code1133. All rights reserved.

#include "Editor/MapPresetApplicationMode.h"
#include "Editor/MapPresetEditorToolkit.h"

FMapPresetApplicationMode::FMapPresetApplicationMode(const TSharedPtr<FMapPresetEditorToolkit>& InEditorToolkit)
	: FApplicationMode(TEXT("DefaultMode"))
	, MyToolkit(InEditorToolkit)
{
	// clang-format off
	TabLayout = FTabManager::NewLayout("Standalone_MapPresetEditor_Layout_v2")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Horizontal)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.7f)
				->AddTab(FMapPresetEditorConstants::ViewportTabId, ETabState::OpenedTab)
				->SetHideTabWell(true)
			)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.3f)
				->AddTab(FMapPresetEditorConstants::DetailsTabId, ETabState::OpenedTab)
			)
		);
	// clang-format on
}

void FMapPresetApplicationMode::RegisterTabFactories(TSharedPtr<FTabManager> InTabManager)
{
	// Validate the toolkit pointer before proceeding
	if (const TSharedPtr<FMapPresetEditorToolkit> Toolkit = MyToolkit.Pin())
	{
		// Register the tab spawners with the toolkit
		Toolkit->RegisterTabSpawners(InTabManager.ToSharedRef());
	}
	// UE5.8 made the base RegisterTabFactories private; derived overrides call this protected helper instead.
	// - Pre-5.8 still uses the old base call.
#if ENGINE_MAJOR_VERSION > 5 || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 8)
	if (InTabManager.IsValid())
	{
		RegisterTabFactoriesWithAppAndManager(GetHost().Get(), InTabManager.ToSharedRef());
	}
#else
	FApplicationMode::RegisterTabFactories(InTabManager);
#endif
}
