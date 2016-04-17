class CfgPatches {
	class mgsr_ace_patch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"ace_common", "ace_goggles", "mgsr_headbag", "mgsr_eyepatch"};
	};
};

class CfgGlasses {
	class None;
	
	class mgsr_eyepatch_goggles: None
	{
		ACE_Overlay = "\mgsr_ace_patch\eyepatch_overlay.paa";
		ACE_OverlayCracked = "\mgsr_ace_patch\eyepatch_overlayCracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};
	
	class mgsr_headbag_goggles: None
	{
		ACE_Overlay = "\mgsr_ace_patch\headbag_overlay.paa";
		ACE_OverlayCracked = "\mgsr_ace_patch\headbag_overlayCracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};	
};

class CfgVehicles {
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_Head {
				class mgsr_putHeadBagOnAction
				{
					displayName = "Put Headbag On";
					condition = "('mgsr_headbag' in items _player || 'mgsr_headbag_goggles' in items _player) && _target getVariable ['ace_captives_isSurrendering', false] || ('mgsr_headbag' in items _player || 'mgsr_headbag_goggles' in items _player) && _target getVariable ['ace_captives_isHandcuffed', false] and (alive _target)";
					statement = "[_target, _player] spawn mgsr_putHeadbagOn_fnc";
					showDisabled = 0;
					icon = "mgsr_ace_patch\headbag_icon.paa";
				};
			};
		};
	};
};

class CfgFunctions {
	class mgsr_ace_patch
	{
		class mgsr_ace_patch
		{
			file = "mgsr_ace_patch\functions";
			class mgsrInit
			{
				postInit = 1;
			};
		};
	};
};
