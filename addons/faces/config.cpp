#include "CfgPatches.hpp"

class CfgHeads
{
    class NATOHead_A3;

    class mgsr_naked_head : NATOHead_A3
    {
        model = "\mgsr_faces\mgsr_naked_head.p3d";
        selectionHeadWound = "injury_head";
        selectionPersonality = "personality";
    };

    class mgsr_venom_head : NATOHead_A3
    {
        model = "\mgsr_faces\mgsr_venom_head.p3d";
        selectionHeadWound = "injury_head";
        selectionPersonality = "personality";
    };

    class mgsr_venom_head_demon : NATOHead_A3
    {
        model = "\mgsr_faces\mgsr_venom_head_demon.p3d";
        selectionHeadWound = "injury_head";
        selectionPersonality = "personality";
    };
};

class CfgFaces
{
    class Default
    {
        class Custom;
    };

    class Man_A3 : Default
    {
        class WhiteHead_01;

        class mgsr_nakedsnake : WhiteHead_01
        {
            author = "Rebel / Facel";
            displayName = "MGSR: Naked Snake";
            texture = "\mgsr_faces\data\mgsr_bb.paa";
            materialWounded1 = "";
            materialWounded2 = "";
            head = "mgsr_naked_head";
            material = "\mgsr_faces\data\mgsr_bb.rvmat";
            identityTypes[] = {"Head_Naked_Snake"};
        };

        class mgsr_venomsnake : WhiteHead_01
        {
            author = "Rebel / Facel";
            displayName = "MGSR: Venom Snake";
            texture = "\mgsr_faces\data\mgsr_v.paa";
            materialWounded1 = "";
            materialWounded2 = "";
            head = "mgsr_venom_head";
            material = "\mgsr_faces\data\mgsr_v.rvmat";
            identityTypes[] = {"Head_Venom_Snake"};
        };

        class mgsr_venomsnake_demon : WhiteHead_01
        {
            author = "Rebel / Facel";
            displayName = "MGSR: Venom Snake (Demon)";
            texture = "\mgsr_faces\data\mgsr_v_demon.paa";
            materialWounded1 = "";
            materialWounded2 = "";
            head = "mgsr_venom_head_demon";
            material = "\mgsr_faces\data\mgsr_v_demon.rvmat";
            identityTypes[] = {"Head_Venom_Snake_Demon"};
        };

        class mgsr_skullface : WhiteHead_01
        {
            author = "Rebel / Shlomo";
            displayName = "MGSR: Skull Face";
            texture = "\mgsr_faces\data\mgsr_skullface.paa";
            textureHL = "\mgsr_faces\data\mgsr_skullface_body.paa";
            textureHL2 = "\mgsr_faces\data\mgsr_skullface_body.paa";
            identityTypes[] = {};
        };
    };
};
