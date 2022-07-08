/*
 * Author: AACO
 * Handles the pain after treating a patient.
 *
 * Arguments:
 * 0: The patient <OBJECT>
 * 1: The treatment classname <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 * edited by mark
 */

#define IBUPROFEN_PAIN_REDUCTION 0.4

params ["_target", "_className"];

private _painReduction = if (_className == "MEU_compat_Ibuprofen") then {
    IBUPROFEN_PAIN_REDUCTION
};

private _pain = ((_target getVariable ["ace_medical_pain", 0]) - _painReduction) max 0;
_target setVariable ["ace_medical_pain", _pain, true];