#pragma once
#include "PCH.h"
#include "DKUtil/Config.hpp"

#define CONFIG_PATH "NativeMods/BG3NativeCameraTweaks.toml"sv

namespace Settings
{
	using namespace DKUtil::Alias;

	class Main : public DKUtil::model::Singleton<Main>
	{
	public:
		Double UnlockedPitchInitialValue{ "UnlockedPitchInitialValue", "General" };
		Double UnlockedPitchClampSpeed{ "UnlockedPitchClampSpeed", "General" };
		Boolean UnlockedPitchLimitClipping{ "UnlockedPitchLimitClipping", "General" };
		Double UnlockedPitchFloorOffset{ "UnlockedPitchFloorOffset", "General" };
		Boolean ResetZoomOnZoneChange { "ResetZoomOnZoneChange", "General" };

		Boolean WatchForConfigChanges{ "WatchForConfigChanges", "General" };


		Boolean ExplorationUnlockPitch{ "ExplorationUnlockPitch", "ExplorationPitch" };
		Boolean ExplorationKeepTacticalPitchLocked{ "ExplorationKeepTacticalPitchLocked", "ExplorationPitch" };
		Double ExplorationUnlockedPitchMin{ "ExplorationUnlockedPitchMin", "ExplorationPitch" };
		Double ExplorationUnlockedPitchMax{ "ExplorationUnlockedPitchMax", "ExplorationPitch" };
		Boolean ExplorationOverrideLockedPitch{ "ExplorationOverrideLockedPitch", "ExplorationPitch" };
		Double ExplorationLockedPitchClose{ "ExplorationLockedPitchClose", "ExplorationPitch" };
		Double ExplorationLockedPitchFar{ "ExplorationLockedPitchFar", "ExplorationPitch" };
		Double ExplorationLockedTacticalPitchClose{ "ExplorationLockedTacticalPitchClose", "ExplorationPitch" };
		Double ExplorationLockedTacticalPitchFar{ "ExplorationLockedTacticalPitchFar", "ExplorationPitch" };
		Double ExplorationLockedAltPitchClose{ "ExplorationLockedAltPitchClose", "ExplorationPitch" };
		Double ExplorationLockedAltPitchFar{ "ExplorationLockedAltPitchFar", "ExplorationPitch" };

		Boolean ExplorationOverrideZoom{ "ExplorationOverrideZoom", "ExplorationZoom" };
		Double ExplorationZoomMin{ "ExplorationZoomMin", "ExplorationZoom" };
		Double ExplorationZoomMax{ "ExplorationZoomMax", "ExplorationZoom" };
		Double ExplorationTacticalZoomMin{ "ExplorationTacticalZoomMin", "ExplorationZoom" };
		Double ExplorationTacticalZoomMax{ "ExplorationTacticalZoomMax", "ExplorationZoom" };
		Double ExplorationAltZoomMin{ "ExplorationAltZoomMin", "ExplorationZoom" };
		Double ExplorationAltZoomMax{ "ExplorationAltZoomMax", "ExplorationZoom" };

		Boolean ExplorationOverrideFOV{ "ExplorationOverrideFOV", "ExplorationFOV" };
		Double ExplorationFOVClose{ "ExplorationFOVClose", "ExplorationFOV" };
		Double ExplorationFOVFar{ "ExplorationFOVFar", "ExplorationFOV" };
		Double ExplorationTacticalFOV{ "ExplorationTacticalFOV", "ExplorationFOV" };
		Double ExplorationAltFOVClose{ "ExplorationAltFOVClose", "ExplorationFOV" };
		Double ExplorationAltFOVFar{ "ExplorationAltFOVFar", "ExplorationFOV" };

		Boolean ExplorationOverrideOffset{ "ExplorationOverrideOffset", "ExplorationOffset" };
		Double ExplorationHorizontalOffsetMult{ "ExplorationHorizontalOffsetMult", "ExplorationOffset" };
		Double ExplorationVerticalOffsetMult{ "ExplorationVerticalOffsetMult", "ExplorationOffset" };


		Boolean CombatUnlockPitch{ "CombatUnlockPitch", "CombatPitch" };
		Boolean CombatKeepTacticalPitchLocked{ "CombatKeepTacticalPitchLocked", "CombatPitch" };
		Double CombatUnlockedPitchMin{ "CombatUnlockedPitchMin", "CombatPitch" };
		Double CombatUnlockedPitchMax{ "CombatUnlockedPitchMax", "CombatPitch" };
		Boolean CombatOverrideLockedPitch{ "CombatOverrideLockedPitch", "CombatPitch" };
		Double CombatLockedPitchClose{ "CombatLockedPitchClose", "CombatPitch" };
		Double CombatLockedPitchFar{ "CombatLockedPitchFar", "CombatPitch" };
		Double CombatLockedTacticalPitchClose{ "CombatLockedTacticalPitchClose", "CombatPitch" };
		Double CombatLockedTacticalPitchFar{ "CombatLockedTacticalPitchFar", "CombatPitch" };
		Double CombatLockedAltPitchClose{ "CombatLockedAltPitchClose", "CombatPitch" };
		Double CombatLockedAltPitchFar{ "CombatLockedAltPitchFar", "CombatPitch" };

		Boolean CombatOverrideZoom{ "CombatOverrideZoom", "CombatZoom" };
		Double CombatZoomMin{ "CombatZoomMin", "CombatZoom" };
		Double CombatZoomMax{ "CombatZoomMax", "CombatZoom" };
		Double CombatTacticalZoomMin{ "CombatTacticalZoomMin", "CombatZoom" };
		Double CombatTacticalZoomMax{ "CombatTacticalZoomMax", "CombatZoom" };
		Double CombatAltZoomMin{ "CombatAltZoomMin", "CombatZoom" };
		Double CombatAltZoomMax{ "CombatAltZoomMax", "CombatZoom" };

		Boolean CombatOverrideFOV{ "CombatOverrideFOV", "CombatFOV" };
		Double CombatFOVClose{ "CombatFOVClose", "CombatFOV" };
		Double CombatFOVFar{ "CombatFOVFar", "CombatFOV" };
		Double CombatTacticalFOV{ "CombatTacticalFOV", "CombatFOV" };
		Double CombatAltFOVClose{ "CombatAltFOVClose", "CombatFOV" };
		Double CombatAltFOVFar{ "CombatAltFOVFar", "CombatFOV" };

		Boolean CombatOverrideOffset{ "CombatOverrideOffset", "CombatOffset" };
		Double CombatHorizontalOffsetMult{ "CombatHorizontalOffsetMult", "CombatOffset" };
		Double CombatVerticalOffsetMult{ "CombatVerticalOffsetMult", "CombatOffset" };


		Double MouseCameraRotationMult{ "MouseCameraRotationMult", "Mouse" };
		Double MousePitchMult{ "MousePitchMult", "Mouse" };
		Double MouseZoomMult{ "MouseZoomMult", "Mouse" };
		Boolean InvertMousePitch{ "InvertMousePitch", "Mouse" };

		Double KeyboardCameraRotationMult{ "KeyboardCameraRotationMult", "Keyboard" };
		
		Double ControllerCameraRotationMult{ "ControllerCameraRotationMult", "Controller" };
		Double ControllerPitchMult{ "ControllerPitchMult", "Controller" };
		Double ControllerZoomMult{ "ControllerZoomMult", "Controller" };
		Boolean InvertControllerPitch{ "InvertControllerPitch", "Controller" };
		Boolean SwapZoomAndPitch{ "SwapZoomAndPitch", "Controller" };
		Boolean UseRightStickPressForZoom{ "UseRightStickPressForZoom", "Controller" };

		Boolean OverrideRightStickDeadzone{ "OverrideRightStickDeadzone", "ControllerDeadzone" };
		Double NewDeadzone{ "NewDeadzone", "ControllerDeadzone" };

		SharedLock Lock;

		void Load() noexcept;
		bool bChanged = false;

		void WatchForChanges();

	private:
		TomlConfig config = COMPILE_PROXY(CONFIG_PATH);
	};


}

