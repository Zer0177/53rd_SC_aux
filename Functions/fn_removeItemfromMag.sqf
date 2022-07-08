params ["_mag", "_player", "_target", "_selectionName", "_className"];

private _matchesMags = magazinesAmmo _player select {_x select 0 == _mag};
_player removeMagazineGlobal _mag;
private _oldMag = _matchesMags select 0;

if ((_oldMag select 1) > 1) then {
    _player addMagazine [_mag, (_oldMag select 1) - 1];
} else {
    [format [localize LSTRING(Pain_empty), getText (configFile >> "CfgMagazines" >> _mag >> "displayName")], 2.5, _player] call ace_common_fnc_displayTextStructured;
};

playsound3D [QPATHTOF_SOUND(sounds\take_painkillers.wav), _player, false, getPosASL _player, 8, 1, 15];

if (isText (configFile >> "ACE_Medical_Advanced" >> "Treatment" >> "Medication" >> _className >> "itemClassName")) then {
    _mag = getText (configFile >> "ACE_Medical_Advanced" >> "Treatment" >> "Medication" >> _className >> "itemClassName");
};

[_player, _target, _selectionName, _className, [_mag]] call ace_medical_fnc_treatmentAdvanced_medication;
