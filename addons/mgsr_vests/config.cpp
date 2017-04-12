#include "CfgPatches.hpp"

class CfgWeapons {
	class Vest_Camo_Base;
	class VestItem;

	class mgsr_carrier_belt: Vest_Camo_Base {
		author = "Rebel / Facel";
		_generalMacro = "mgsr_carrier_belt";
		scope = 2;
		displayName = "MGSR: Carrier Belt (SV)";
		picture = "\mgsr_vests\UI\gear_mgsr_carrier_belt_ca";
		model = "\mgsr_vests\mgsr_carrier_belt.p3d";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_vests\data\carrier_belt.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_vests\data\carrier_belt.rvmat"};

		class ItemInfo: VestItem
		{
			uniformModel = "\mgsr_vests\mgsr_carrier_belt.p3d";
			containerClass = "Supply60";
			mass = 10;

			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\mgsr_vests\data\carrier_belt.paa"};
			hiddenSelectionsMaterials[] = {"\mgsr_vests\data\carrier_belt.rvmat"};
		};
	};
};
