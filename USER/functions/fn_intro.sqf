["Mediterranean", 0, false] call BIS_fnc_setPPeffectTemplate;

playMusic ["LeadTrack02_F_Tank", 0];

cutText ["","BLACK FADED", 999];

ace_player switchMove "amovpercmstpslowwrfldnon";

[{
    private _filmgrain = ppEffectCreate ["FilmGrain", 2000];
    _filmgrain ppEffectEnable true;
    _filmgrain ppEffectAdjust [0.3, 0.3, 0.12, 0.12, 0.12, true];
    _filmgrain ppEffectCommit 0;

    private _camera = "camera" camCreate (getPos camPos_01);
    _camera camSetPos (getPos camPos_01);
    _camera camCommand "inertia on";
    _camera camSetTarget (getPos ace_player);
    _camera cameraEffect ["internal", "back"];
    _camera camSetFov 0.5;
    _camera camCommit 0;
    _camera camSetPos (getPos camPos_01);
    _camera camSetTarget (getPos ace_player);
    _camera camCommit 1;

    showCinemaBorder true;

    [{
		params ["_camera", "_filmgrain"];
		cutText ["", "BLACK IN", 1];

		_camera camSetFov 1;
    	_camera camCommit 5;
		[{
			params ["_camera", "_filmgrain"];
			
			_camera camSetPos (getPos camPos_02);
			_camera camSetTarget plane;
			_camera camCommit 8;


			[{
				params ["_camera", "_filmgrain"];
				
				_camera camSetPos (getPos camPos_03);
				_camera camCommit 5;
				[{
					[ 
                        parseText "<t font='PuristaBold' size='7' color='#8b0000'>O</t><t font='PuristaBold' size='7' color='#ffffff'>bjectiv </t><t font='PuristaBold' size='7' color='#8b0000'>G</t><t font='PuristaBold' size='7' color='#ffffff'>ecko </t>", 
                        [ 
                            safezoneX + 0.25 * safezoneW, 
                            safezoneY + 0.35 * safezoneH, 
                            2, 
                            1 
                        ], 
                        nil, 
                        5, 
                        [4,1], 
                        0 
                    ] spawn BIS_fnc_textTiles;

					[{
						params ["_camera", "_filmgrain"];

						_camera camSetPos (getPos camPos_01);
						_camera camSetTarget ace_player;
						_camera camCommit 8;
						
						[{
                            params ["_camera", "_filmgrain"];

                            private _pos = getPos ace_player;
                            _pos set [2, (_pos select 2) + 1.7];
                            _camera camSetPos _pos;
                            _camera camCommit 5;

                            [{
                                cutText ["", "BLACK OUT", 0.3];

                                [{
									cutText ["","BLACK FADED", 999];

                                    params ["_camera", "_filmgrain"];

                                    _filmgrain ppEffectEnable false;
                                    ppEffectDestroy _filmgrain;
                                    _camera cameraEffect ["terminate", "back"];
                                    camDestroy _camera;

									["Default", 0, false] call BIS_fnc_setPPeffectTemplate;

                                    [{
                                        cutText ["", "BLACK IN", 1];
                                        6 fadeMusic 0;

                                        STHud_UIMode = 1;
                                        diwako_dui_main_toggled_off = false;
                                        [ace_player, "amovpercmstpslowwrfldnon", 1] call ace_common_fnc_doAnimation;

                                        [{
                                            playMusic "";
                                            0 fadeMusic 1;
                                        }, [], 6.01] call CBA_fnc_waitAndExecute;
									}, [], 1] call CBA_fnc_waitAndExecute;
								}, _this, 0.5] call CBA_fnc_waitAndExecute;
							}, _this, 4.7] call CBA_fnc_waitAndExecute;
						}, _this, 10] call CBA_fnc_waitAndExecute;
					}, _this, 10] call CBA_fnc_waitAndExecute;
				}, _this, 5] call CBA_fnc_waitAndExecute;
			}, _this, 10] call CBA_fnc_waitAndExecute;
		}, _this, 9] call CBA_fnc_waitAndExecute;
    }, [_camera, _filmgrain], 2] call CBA_fnc_waitAndExecute;
}, [], 3] call CBA_fnc_waitAndExecute;