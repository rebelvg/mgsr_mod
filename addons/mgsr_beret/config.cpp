#include "CfgPatches.hpp"

class CfgWeapons {
	class H_Beret_02;
	
	class mgsr_beret: H_Beret_02 {
		author = "Rebel / Shlomo";
		scope = 2;
		displayName = "MGSR: Diamond Dogs Beret";
		picture = "\mgsr_beret\UI\gear_mgsr_beret_x_ca";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_beret\data\beret.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_beret\data\beret.rvmat"};
	};
};
