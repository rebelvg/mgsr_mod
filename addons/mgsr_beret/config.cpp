class CfgPatches {
	class mgsr_beret {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
	};
};

class CfgWeapons {
	class ItemCore;
	class HeadgearItem;
	
	class mgsr_beret: ItemCore {
		author="Rebel / Shlomo";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MGSR: Diamond Dogs Beret";
		picture = "\mgsr_beret\UI\gear_mgsr_beret_x_ca";
		model = "\A3\Characters_F_epb\BLUFOR\headgear_beret02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_beret\data\beret.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_beret\data\beret.rvmat"};
		
		class ItemInfo: HeadgearItem {
			mass = 7;
			uniformModel = "\A3\Characters_F_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 3 * 0.5;
			passThrough = 0.8;
		};
	};
};
