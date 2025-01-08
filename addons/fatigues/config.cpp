#include "CfgPatches.hpp"

class CfgVehicles {
    class C_man_1;

    class mgsr_fatigues_short: C_man_1 {
        author = "Facel";
        scope = 1;
        displayName = "MGSR: Fatigues Olive Drab (Short Sleeve)";
        nakedUniform = "U_BasicBody";
        uniformClass = "mgsr_fatigues_short";
        model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
        modelSides[] = {0, 1, 2, 3};

        hiddenSelections[] = {"camo", "insignia", "clan"};
				hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_01_co.paa"};

        headgearList[] = {};

        identityTypes[] = {"LanguageENG_F", "Head_Euro"};

        class Wounds
        {
            tex[] = {};
            mat[] =
            {
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
    };

	class mgsr_fatigues_short_desert: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Desert Fox (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_desert";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_02_co.paa"};
    };
        class mgsr_fatigues_short_wood: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Woodland (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_wood";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_03_co.paa"};
    };
        class mgsr_fatigues_short_wet: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Wetworks (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_wet";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_04_co.paa"};
    };
        class mgsr_fatigues_short_black: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Black (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_black";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_05_co.paa"};
    };
        class mgsr_fatigues_short_khaki: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Steel Khaki (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_khaki";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_06_co.paa"};
    };
        class mgsr_fatigues_short_jtiger: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Jungle Tiger (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_jtiger";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_07_co.paa"};
	};
	class mgsr_fatigues_short_dtiger: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Desert Tiger (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_dtiger";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_08_co.paa"};
	};
	class mgsr_fatigues_short_utiger: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Urban Tiger (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_utiger";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_09_co.paa"};
	};
	class mgsr_fatigues_short_citru: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Citrullus (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_citru";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_10_co.paa"};
	};
	class mgsr_fatigues_short_type3: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Type 3 Jap. Flecktarn (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_type3";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_11_co.paa"};
	};
	class mgsr_fatigues_short_rhode: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Rhodesian Brushstroke (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_rhode";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_12_co.paa"};
	};
	class mgsr_fatigues_short_dpm: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues DPM (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_dpm";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_13_co.paa"};
	};
	class mgsr_fatigues_short_ddpm: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues DDPM (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_ddpm";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_14_co.paa"};
	};
	class mgsr_fatigues_short_letni: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Letni (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_letni";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_15_co.paa"};
	};
	class mgsr_fatigues_short_horsky: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Horsky (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_horsky";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_16_co.paa"};
	};
	class mgsr_fatigues_short_ger: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues German Flecktarn (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_ger";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_17_co.paa"};
	};
	class mgsr_fatigues_short_lizard: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Lizard (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_lizard";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_18_co.paa"};
	};
	class mgsr_fatigues_short_multi: mgsr_fatigues_short {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Multicam (Short Sleeve)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_short_multi";
		model = "\mgsr_fatigues\mgsr_fatigues_01.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_19_co.paa"};
	};

	class mgsr_fatigues: C_man_1 {
        author = "Facel";
        scope = 1;
        displayName = "MGSR: Fatigues Olive Drab";
        nakedUniform = "U_BasicBody";
        uniformClass = "mgsr_fatigues";
        model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
        modelSides[] = {0, 1, 2, 3};

        hiddenSelections[] = {"camo", "insignia", "clan"};
				hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_01_co.paa"};

        headgearList[] = {};

        identityTypes[] = {"LanguageENG_F", "Head_Euro"};

        class Wounds
        {
            tex[] = {};
            mat[] =
            {
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
    };
	class mgsr_fatigues_desert: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Desert Fox";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_desert";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_02_co.paa"};
    };
        class mgsr_fatigues_wood: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Woodland";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_wood";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_03_co.paa"};
    };
        class mgsr_fatigues_wet: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Wetworks";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_wet";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_04_co.paa"};
    };
        class mgsr_fatigues_black: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Black";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_black";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_05_co.paa"};
    };
        class mgsr_fatigues_khaki: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Steel Khaki";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_khaki";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_06_co.paa"};
	};
	class mgsr_fatigues_jtiger: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Jungle Tiger";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_jtiger";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_07_co.paa"};
	};
	class mgsr_fatigues_dtiger: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Desert Tiger";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_dtiger";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_08_co.paa"};
	};
	class mgsr_fatigues_utiger: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Urban Tiger";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_utiger";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_09_co.paa"};
	};
	class mgsr_fatigues_citru: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Citrullus";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_citru";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_10_co.paa"};
	};
	class mgsr_fatigues_type3: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Type 3 Jap. Flecktarn";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_type3";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_11_co.paa"};
	};
	class mgsr_fatigues_rhode: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Rhodesian Brushstroke";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_rhode";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_12_co.paa"};
	};
	class mgsr_fatigues_dpm: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues DPM";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_dpm";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_13_co.paa"};
	};
	class mgsr_fatigues_ddpm: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues DDPM";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_ddpm";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_14_co.paa"};
	};
	class mgsr_fatigues_letni: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Letni";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_letni";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_15_co.paa"};
	};
	class mgsr_fatigues_horsky: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Horsky";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_horsky";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_16_co.paa"};
	};
	class mgsr_fatigues_ger: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues German Flecktarn";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_ger";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_17_co.paa"};
	};
	class mgsr_fatigues_lizard: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Lizard";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_lizard";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_18_co.paa"};
	};
	class mgsr_fatigues_multi: mgsr_fatigues {
		author = "Facel";
		scope = 1;
		displayName = "MGSR: Fatigues Multicam";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_fatigues_multi";
		model = "\mgsr_fatigues\mgsr_fatigues_02.p3d";
		modelSides[] = {0, 1, 2, 3};

		hiddenSelections[] = {"camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"mgsr_fatigues\data\mgsr_fatigues_19_co.paa"};
	};
};

class CfgWeapons {
    class U_C_Poloshirt_blue;
    class UniformItem;

	class mgsr_fatigues_short: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Olive Drab (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_01s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short";
		containerClass = "Supply20";
		mass = 40;
        };
    };
	class mgsr_fatigues_short_desert: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Desert Fox (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_02s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_desert";
		containerClass = "Supply20";
		mass = 40;
        };
    };
	class mgsr_fatigues_short_wood: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Woodland (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_03s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_wood";
		containerClass = "Supply20";
		mass = 40;
        };
    };
	class mgsr_fatigues_short_wet: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Wetworks (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_04s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_wet";
		containerClass = "Supply20";
		mass = 40;
        };
    	};
	class mgsr_fatigues_short_black: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Black (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_05s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_black";
		containerClass = "Supply20";
		mass = 40;
        };
    };
	class mgsr_fatigues_short_khaki: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Steel Khaki (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_06s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_khaki";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_short_jtiger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Jungle Tiger (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_07s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_jtiger";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_dtiger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Desert Tiger (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_08s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_dtiger";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_utiger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Urban Tiger (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_09s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_utiger";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_citru: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Citrullus (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_10s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_citru";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_type3: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Type 3 Jap. Flecktarn (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_11s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_type3";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_rhode: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Rhodeasian Brushstroke (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_12s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_rhode";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_dpm: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues DPM (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_13s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_dpm";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_ddpm: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues DDPM (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_14s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_ddpm";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_letni: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Letni (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_15s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_letni";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_horsky: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Horsky (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_16s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_horsky";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_ger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues German Flecktarn (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_17s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_ger";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_lizard: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Lizard (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_18s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_lizard";
		containerClass = "Supply20";
		mass = 40;
	};
};
	class mgsr_fatigues_short_multi: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Multicam (Short Sleeve)";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_19s_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_short_multi";
		containerClass = "Supply20";
		mass = 40;
	};
};

  class mgsr_fatigues: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Olive Drab";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_01_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues";
		containerClass = "Supply20";
		mass = 40;
        };
    };
    	class mgsr_fatigues_desert: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Desert Fox";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_02_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_desert";
		containerClass = "Supply20";
		mass = 40;
        };
    };
	class mgsr_fatigues_wood: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Woodland";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_03_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_wood";
		containerClass = "Supply20";
		mass = 40;
        };
    };
	class mgsr_fatigues_wet: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Wetworks";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_04_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_wet";
		containerClass = "Supply20";
		mass = 40;
        };
    };
    	class mgsr_fatigues_black: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Black";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_05_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_black";
		containerClass = "Supply20";
		mass = 40;
        };
    };
    	class mgsr_fatigues_khaki: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Steel Khaki";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_06_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_khaki";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_jtiger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Jungle Tiger";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_07_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_jtiger";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_dtiger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Desert Tiger";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_08_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_dtiger";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_utiger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Urban Tiger";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_09_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_utiger";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_citru: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Citrullus";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_10_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_citru";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_type3: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Type 3 Jap. Flecktarn";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_11_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_type3";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_rhode: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Rhodeasian Brushstroke";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_12_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_rhode";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_dpm: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues DPM";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_13_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_dpm";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_ddpm: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues DDPM";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_14_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_ddpm";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_letni: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Letni";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_15_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_letni";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_horsky: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Horsky";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_16_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_horsky";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_ger: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues German Flecktarn";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_17_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_ger";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_lizard: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Lizard";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_18_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_lizard";
		containerClass = "Supply20";
		mass = 40;
		};
	};
	class mgsr_fatigues_multi: U_C_Poloshirt_blue {
		author = "Facel";
		scope = 2;
		displayName = "MGSR: Fatigues Multicam";
		picture = "\mgsr_fatigues\UI\gear_mgsr_fatigues_19_x_ca";

        class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "mgsr_fatigues_multi";
		containerClass = "Supply20";
		mass = 40;
		};
	};
};
