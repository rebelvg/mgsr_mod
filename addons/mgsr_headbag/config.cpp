#include "CfgPatches.hpp"

class CfgWeapons {
	class ItemCore;
	class HeadgearItem;

	class mgsr_headbag: ItemCore {
		author="Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Headbag";
		model = "\mgsr_headbag\mgsr_headbag.p3d";
		picture = "\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";

		class ItemInfo: HeadgearItem {
			mass = 5;
			uniformModel = "\mgsr_headbag\mgsr_headbag.p3d";
			modelSides[] = {3, 1};
			armor = 1.5;
			passThrough = 0.8;
		};
	};
};

class CfgGlasses {
	class None;
	
	class mgsr_headbag_goggles: None
	{
		author="Rebel / Facel";
		mass = 5;
		displayname = "MGSR: Headbag";
		model = "\mgsr_headbag\mgsr_headbag.p3d";
		picture = "\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";
		identityTypes[]={};
		
		ACE_Overlay = "\mgsr_headbag\headbag_overlay.paa";
		ACE_OverlayCracked = "\mgsr_headbag\headbag_overlayCracked.paa";
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
					statement = "[_target, _player] spawn mgsr_headbag_fnc_putHeadbagOn";
					showDisabled = 0;
					icon = "mgsr_headbag\headbag_icon.paa";
				};
			};
		};
	};
};

class CfgFunctions {
	class mgsr_headbag
	{
		class mgsr_headbag
		{
			file = "mgsr_headbag\functions";
			class putHeadbagOn {};
		};
	};
};
