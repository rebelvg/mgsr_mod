class CfgPatches {
	class mgsr_headbag {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
	};
};

class CfgWeapons {
	class ItemCore;
	class HeadgearItem;

	class mgsr_headbag : ItemCore {
		author="Rebel / Facel";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MGSR: Headbag";
		model = "\mgsr_headbag\mgsr_headbag.p3d";
		picture = "\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";

		class ItemInfo : HeadgearItem {
			mass = 5;
			uniformModel = "\mgsr_headbag\mgsr_headbag.p3d";
			modelSides[] = {3, 1};
			armor = 3 * 0.5;
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
	};	
};
