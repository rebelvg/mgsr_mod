#include "CfgPatches.hpp"

class CfgGlasses {
    class None;

    class mgsr_scarf: None {
        author = "Facel";
        scope = 2;
        displayName = "MGSR: Scarf (Green)";
        model = "\mgsr_scarf\mgsr_scarf.p3d";
        picture = "\mgsr_scarf\UI\gear_mgsr_scarf_01_x_ca.paa";
	mass = 4;
		identityTypes[]={};

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_scarf\data\mgsr_scarf_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_scarf\data\mgsr_scarf.rvmat"};

    };

    class mgsr_scarf_khaki: mgsr_scarf {
        author = "Facel";
        scope = 2;
        displayName = "MGSR: Scarf (Khaki)";
        picture = "\mgsr_scarf\UI\gear_mgsr_scarf_02_x_ca.paa";
		identityTypes[]={};

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_scarf\data\mgsr_scarf_02_co.paa"};
    };

    class mgsr_scarf_black: mgsr_scarf {
        author = "Facel";
        scope = 2;
        displayName = "MGSR: Scarf (Black)";
        picture = "\mgsr_scarf\UI\gear_mgsr_scarf_03_x_ca.paa";
		identityTypes[]={};

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_scarf\data\mgsr_scarf_03_co.paa"};
    };

    class mgsr_scarf_red: mgsr_scarf {
        author = "Facel";
        scope = 2;
        displayName = "MGSR: Scarf (Ocelot Red)";
        picture = "\mgsr_scarf\UI\gear_mgsr_scarf_04_x_ca.paa";
		identityTypes[]={};

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_scarf\data\mgsr_scarf_04_co.paa"};
    };
};
