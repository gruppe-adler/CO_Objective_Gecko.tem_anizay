if (didJIP) then {
    [player] remoteExec ["grad_common_fnc_addJipToZeus",2,false];
};

["InitializePlayer", [player,true]] call BIS_fnc_dynamicGroups;
grad_template_ratingEH = player addEventHandler ["HandleRating",{0}];


#include "\z\ace\addons\medical\functions\script_component.hpp"
//10% of the default Blood Volume as failsafe
#define MIN_BLOOD_VOL (BLOOD_VOLUME_FATAL + 0.1 * DEFAULT_BLOOD_VOLUME)

["unit", {
    params ["_newUnit", "_oldUnit"];

    // remove old perFrameHandler if there is one
    private _id = missionNamespace getVariable ["grad_bleedOutHandler", -1];
    if (_id > -1) then { [_id] call CBA_fnc_removePerFrameHandler; };

    private _isRemoteControlledUnit = false;
    {
        if (getAssignedCuratorUnit _x isEqualTo _newUnit) exitWith {
            _isRemoteControlledUnit = true;
            _isRemoteControlledUnit;
        };
    } forEach allCurators;

    // exit, if unit doesn't exist, or is remote-controlled
    if (isNull _newUnit || {_isRemoteControlledUnit}) exitWith {};
    
    private _handle = [{
        params ["_unit", "_handle"];
        //check if player is awake and bleeding
        if (!IS_UNCONSCIOUS(_unit) || {!IS_BLEEDING(_unit)}) exitWith {};
        //check if player falls below threshold and set threshold as new value
        if (GET_BLOOD_VOLUME(_unit) < MIN_BLOOD_VOL) then {
            //[format["%1 fell below %2 litres of blood. Current level: %3 litres", _unit, MIN_BLOOD_VOL, GET_BLOOD_VOLUME(_unit)]] remoteExec ["systemChat", virtualZeus1];
			_unit setVariable [VAR_BLOOD_VOL, MIN_BLOOD_VOL, true];
        };
    }, 2.5, _newUnit] call CBA_fnc_addPerFrameHandler;
    missionNamespace setVariable ["grad_bleedOutHandler", _handle];
}, true] call CBA_fnc_addPlayerEventHandler;

["CBA_loadingScreenDone", {
    if (!(didJIP) || {(didJIP && !(isNil "GRAD_USER_introOver"))}) then {
        [{time > (_this + 5)},{
            //if (isNull (getAssignedCuratorLogic player)) then {
                STHud_UIMode = 0;
                diwako_dui_main_toggled_off = true;
                [] call GRAD_USER_fnc_intro;
            //};
        },time] call CBA_fnc_waitUntilAndExecute;
    };
}] call CBA_fnc_addEventHandler;

if (typeOf player == "B_engineer_F") then {
    if(!isNil "ace_interact_menu_fnc_createAction") then {
        private _action = ["toggle_primary","Toggle primary weapon","",{
            [ace_player] spawn second_primary_fnc_toggle;
        },{[ace_player] call second_primary_fnc_toggleCondition},{},[], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
 
        ["CAManBase", 1, ["ACE_SelfActions", "ACE_Equipment"], _action, true] call ace_interact_menu_fnc_addActionToClass;
    } else {
        [["Toggle primary weapon", {
            [player] spawn second_primary_fnc_toggle;
        }, nil, 1.5, false, true, "", '[player] call second_primary_fnc_toggleCondition']] call CBA_fnc_addPlayerAction;
    };
    player setVariable ["second_primary_info", ["rhs_weap_M590_5RD",["","","",""],5,["rhsusf_5Rnd_00Buck"]], true];
};