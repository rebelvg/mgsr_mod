class CfgPatches {
	class mgsr_eyepatch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
	};
};

class CfgWeapons {
	class ItemCore;
	class HeadgearItem;
	
	class mgsr_eyepatch : ItemCore {
		author="Rebel / Facel";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MGSR: Eyepatch";
		model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		
		class ItemInfo : HeadgearItem {
			mass = 2;
			uniformModel = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
			modelSides[] = {3, 1};
			armor = 3 * 0.5;
			passThrough = 0.8;
		};
	};
};

class CfgGlasses {
	class None;
	
	class mgsr_eyepatch_goggles: None
	{
		author="Rebel / Facel";
		mass = 2;
		displayname = "MGSR: Eyepatch";
		model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		identityTypes[]={};
	};
};
