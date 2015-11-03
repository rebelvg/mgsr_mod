mgsr_putHeadbagOn_fnc = {
_unit = _this select 0;
_player = _this select 1;

if (headgear _unit != "" || goggles _unit != "") exitWith {
["Unit still has some headgear or goggles on him.", 2.5, _player] spawn ace_common_fnc_displayTextStructured;
};

if ("mgsr_headbag" in items _player) exitWith {
_player removeItem "mgsr_headbag";
_unit addGoggles "mgsr_headbag_goggles";
};

if ("mgsr_headbag_goggles" in items _player) exitWith {
_player removeItem "mgsr_headbag_goggles";
_unit addGoggles "mgsr_headbag_goggles";
};
};
