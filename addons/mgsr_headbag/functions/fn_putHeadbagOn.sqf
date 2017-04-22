params ["_unit", "_player"];

if (headgear _unit != "" || goggles _unit != "") exitWith {
	["Unit still has some headgear or goggles on him.", 2.5, _player] spawn ace_common_fnc_displayTextStructured;
};

_player playActionNow "PutDown";

if ("mgsr_headbag" in items _player) exitWith {
	_player removeItem "mgsr_headbag";
	_unit addGoggles "mgsr_headbag_goggles";
};

if ("mgsr_headbag_goggles" in items _player) exitWith {
	_player removeItem "mgsr_headbag_goggles";
	_unit addGoggles "mgsr_headbag_goggles";
};
