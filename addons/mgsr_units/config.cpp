#include "CfgPatches.hpp"

class CfgVehicles {
	class C_man_1;

	class mgsr_prisoner: C_man_1 {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner";
		scope = 2;
		displayName = "MGSR: Prisoner (Orange)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_robe";
		model = "\mgsr_units\mgsr_robe.p3d";
		modelSides[] = {0, 1, 2, 3};
		
		hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class EventHandlers {
			class mgsr_units
			{
				init = "_this execVM '\mgsr_units\scripts\init.sqf'";
			};
		};
		
		headgearList[] = {};
		
		identityTypes[] = {"LanguageENG_F", "Head_Euro", "NoGlasses"};

		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"mgsr_units\data\mgsr_robe.rvmat",
				"mgsr_units\data\w1_mgsr_robe.rvmat",
				"mgsr_units\data\w2_mgsr_robe.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};

		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner.jpg";
	};
	
	class mgsr_prisoner_dirty: mgsr_prisoner {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_dirty";
		displayName = "MGSR: Prisoner (Orange Dirty)";
		uniformClass = "mgsr_robe_dirty";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe_dirty.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_dirty.jpg";
	};
	
	class mgsr_prisoner_muddy: mgsr_prisoner {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_muddy";
		displayName = "MGSR: Prisoner (Orange Muddy)";
		uniformClass = "mgsr_robe_muddy";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe_muddy.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_muddy.jpg";
	};
	
	class mgsr_prisoner_blue: mgsr_prisoner {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_blue";
		displayName = "MGSR: Prisoner (Blue)";
		uniformClass = "mgsr_robe_blue";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\blue\mgsr_robe.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_units\data\blue\mgsr_robe.rvmat"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_blue.jpg";
	};
	
	class mgsr_prisoner_blue_dirty: mgsr_prisoner_blue {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_blue_dirty";
		displayName = "MGSR: Prisoner (Blue Dirty)";
		uniformClass = "mgsr_robe_blue_dirty";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\blue\mgsr_robe_dirty.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_blue_dirty.jpg";
	};
	
	class mgsr_prisoner_blue_muddy: mgsr_prisoner_blue {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_blue_muddy";
		displayName = "MGSR: Prisoner (Blue Muddy)";
		uniformClass = "mgsr_robe_blue_muddy";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\blue\mgsr_robe_muddy.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_blue_muddy.jpg";
	};
	
	class mgsr_prisoner_olive: mgsr_prisoner {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_olive";
		displayName = "MGSR: Prisoner (Olive)";
		uniformClass = "mgsr_robe_olive";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\olive\mgsr_robe.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_units\data\olive\mgsr_robe.rvmat"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_olive.jpg";
	};
	
	class mgsr_prisoner_olive_dirty: mgsr_prisoner_olive {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_olive_dirty";
		displayName = "MGSR: Prisoner (Olive Dirty)";
		uniformClass = "mgsr_robe_olive_dirty";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\olive\mgsr_robe_dirty.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_olive_dirty.jpg";
	};
	
	class mgsr_prisoner_olive_muddy: mgsr_prisoner_olive {
		author="Rebel / Facel";
		_generalMacro = "mgsr_prisoner_olive_muddy";
		displayName = "MGSR: Prisoner (Olive Muddy)";
		uniformClass = "mgsr_robe_olive_muddy";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\olive\mgsr_robe_muddy.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		editorPreview = "\mgsr_units\eden\mgsr_prisoner_olive_muddy.jpg";
	};
};

class CfgWeapons {
	class U_C_Poloshirt_blue;
	class UniformItem;
	
	class mgsr_robe: U_C_Poloshirt_blue {
		author="Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Orange Robe";
		picture = "\mgsr_units\UI\gear_mgsr_robe_x_ca";
		
		hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_dirty: mgsr_robe {
		author="Rebel / Facel";
		displayName = "MGSR: Orange Robe Dirty";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe_dirty.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_dirty";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_muddy: mgsr_robe {
		author="Rebel / Facel";
		displayName = "MGSR: Orange Robe Muddy";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe_muddy.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_muddy";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_blue: mgsr_robe {
		author="Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Blue Robe";
		picture = "\mgsr_units\UI\blue\gear_mgsr_robe_x_ca";
		
		hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\blue\mgsr_robe.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_units\data\blue\mgsr_robe.rvmat"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_blue";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_blue_dirty: mgsr_robe_blue {
		author="Rebel / Facel";
		displayName = "MGSR: Blue Robe Dirty";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\blue\mgsr_robe_dirty.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_blue_dirty";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_blue_muddy: mgsr_robe_blue {
		author="Rebel / Facel";
		displayName = "MGSR: Blue Robe Muddy";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\blue\mgsr_robe_muddy.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_blue_muddy";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_olive: mgsr_robe {
		author="Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Olive Robe";
		picture = "\mgsr_units\UI\olive\gear_mgsr_robe_x_ca";
		
		hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\olive\mgsr_robe.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_units\data\olive\mgsr_robe.rvmat"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_olive";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_olive_dirty: mgsr_robe_olive {
		author="Rebel / Facel";
		displayName = "MGSR: Olive Robe Dirty";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\olive\mgsr_robe_dirty.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_olive_dirty";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_olive_muddy: mgsr_robe_olive {
		author="Rebel / Facel";
		displayName = "MGSR: Olive Robe Muddy";
		
		hiddenSelectionsTextures[] = {"\mgsr_units\data\olive\mgsr_robe_muddy.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_prisoner_olive_muddy";
			containerClass = "Supply20";
			mass = 40;
		};
	};
};
