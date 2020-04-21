class CfgPatches {
    class mgsr_vest {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        #include "a3_addons.hpp"
    };
    class mgsr_carrier_belt: mgsr_vest {};
};

class CfgWeapons {
    class Vest_Camo_Base;
    class VestItem;

	class mgsr_vest: Vest_Camo_Base {
        author = "Facel";
        scope = 2;
	allowedSlots[] = {901};
	weaponPoolAvailable = 1; 
        displayName = "MGSR: Vest (Green)";
	descriptionShort = "Medium Armor";
        model = "\mgsr_vests\mgsr_vest.p3d";
        picture = "\mgsr_vests\UI\gear_mgsr_vest_01_x_ca";

        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\mgsr_vests\data\mgsr_belt_co.paa","\mgsr_vests\data\mgsr_vest_01_co.paa"};
        hiddenSelectionsMaterials[] = {"\mgsr_vests\data\mgsr_belt.rvmat","\mgsr_vests\data\mgsr_vest.rvmat"};

		class ItemInfo: VestItem {
		uniformModel = "\mgsr_vests\mgsr_vest.p3d";
		containerClass = "Supply90";
		maximumLoad = 120;
		mass = 25;
		
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mgsr_vests\data\mgsr_belt_co.paa","\mgsr_vests\data\mgsr_vest_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_vests\data\mgsr_belt.rvmat","\mgsr_vests\data\mgsr_vest.rvmat"};
		
			class HitpointsProtectionInfo {         
				class Chest {
				hitpointName    = "HitChest"; 
				armor       = 12; 
				passThrough = 0.2; 
				};
				class Diaphragm {
				hitpointName    = "HitDiaphragm";
				armor       = 12;
				passThrough = 0.2;
				};
				class Abdomen {
				hitpointName    = "HitAbdomen"; 
				armor       = 12;
				passThrough = 0.2;
				};
				class Body {
				hitpointName    = "HitBody";
				passThrough = 0.2;
				};
			};
		};
	};	

	class mgsr_vest_black: mgsr_vest {
	author = "Facel";
	scope = 2;
	allowedSlots[] = {901};
	weaponPoolAvailable = 1; 
	displayName = "MGSR: Vest (Black)";
	descriptionShort = "Medium Armor";
	picture = "\mgsr_vests\UI\gear_mgsr_vest_02_x_ca";
	
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\mgsr_vests\data\mgsr_belt_co.paa","\mgsr_vests\data\mgsr_vest_02_co.paa"};
	hiddenSelectionsMaterials[] = {"\mgsr_vests\data\mgsr_belt.rvmat","\mgsr_vests\data\mgsr_vest.rvmat"};
	
		class ItemInfo: VestItem {
		uniformModel = "\mgsr_vests\mgsr_vest.p3d";
		containerClass = "Supply90";
		maximumLoad = 120;
		mass = 25;
		
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mgsr_vests\data\mgsr_belt_co.paa","\mgsr_vests\data\mgsr_vest_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_vests\data\mgsr_belt.rvmat","\mgsr_vests\data\mgsr_vest.rvmat"};
		
			class HitpointsProtectionInfo {         
				class Chest {
				hitpointName    = "HitChest"; 
				armor       = 12; 
				passThrough = 0.2; 
				};
				class Diaphragm {
				hitpointName    = "HitDiaphragm";
				armor       = 12;
				passThrough = 0.2;
				};
				class Abdomen {
				hitpointName    = "HitAbdomen"; 
				armor       = 12;
				passThrough = 0.2;
				};
				class Body {
				hitpointName    = "HitBody";
				passThrough = 0.2;
				};
			};
		};
	}; 
	
	class mgsr_vest_khaki: mgsr_vest {
	author = "Facel";
	scope = 2;
	allowedSlots[] = {901};
	weaponPoolAvailable = 1; 
	displayName = "MGSR: Vest (Khaki)";
	descriptionShort = "Medium Armor";
	picture = "\mgsr_vests\UI\gear_mgsr_vest_03_x_ca";
	
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\mgsr_vests\data\mgsr_belt_co.paa","\mgsr_vests\data\mgsr_vest_03_co.paa"};
	hiddenSelectionsMaterials[] = {"\mgsr_vests\data\mgsr_belt.rvmat","\mgsr_vests\data\mgsr_vest.rvmat"};
	
		class ItemInfo: VestItem {
		uniformModel = "\mgsr_vests\mgsr_vest.p3d";
		containerClass = "Supply90";
		maximumLoad = 120;
		mass = 25;
		
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mgsr_vests\data\mgsr_belt_co.paa","\mgsr_vests\data\mgsr_vest_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_vests\data\mgsr_belt.rvmat","\mgsr_vests\data\mgsr_vest.rvmat"};
		
			class HitpointsProtectionInfo {         
				class Chest {
				hitpointName    = "HitChest"; 
				armor       = 12; 
				passThrough = 0.2; 
				};
				class Diaphragm {
				hitpointName    = "HitDiaphragm";
				armor       = 12;
				passThrough = 0.2;
				};
				class Abdomen {
				hitpointName    = "HitAbdomen"; 
				armor       = 12;
				passThrough = 0.2;
				};
				class Body {
				hitpointName    = "HitBody";
				passThrough = 0.2;
				};
			};
		};
	}; 


	class mgsr_carrier_belt: Vest_Camo_Base {
        author = "Facel";
        scope = 2;
	allowedSlots[] = {901};
	weaponPoolAvailable = 1; 
        displayName = "MGSR: Carrier Belt (SV)";
        model = "\mgsr_vests\mgsr_carrier_belt.p3d";
        picture = "\mgsr_vests\UI\gear_mgsr_carrier_belt_ca";

        class ItemInfo: VestItem {
		uniformModel = "\mgsr_vests\mgsr_carrier_belt.p3d";
		containerClass = "Supply60";
		maximumLoad = 80;
		mass = 10;

	class HitpointsProtectionInfo {        
                class Chest {
                        hitpointName    = "HitChest"; 
                        armor       = 8; 
                        passThrough = 0.1; 
                };
                    class Diaphragm {
                        hitpointName    = "HitDiaphragm";
                        armor       = 8;
                        passThrough = 0.1;
                };
                    class Abdomen {
                        hitpointName    = "HitAbdomen"; 
                        armor       = 8;
                        passThrough = 0.1;
                };
                    class Body {
                        hitpointName    = "HitBody";
                        passThrough = 0.1;
                };
            };
        };
    };
};
