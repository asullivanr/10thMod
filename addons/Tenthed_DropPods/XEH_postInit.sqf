// Light drop pod (Covenant)
if (!isnil "ScifiSupportPlus_InsertionPod" && {ScifiSupportPlus_InsertionPod}) then {
    ["Covenant", "Light Insertion pod",
        {
            params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];
            
           _options = ["Minor", "Major", "Spec Ops", "Field Marshal", "Ultra", "Zealot", "Honor Guard", "WBK: HALO", "Sword Elite (IMS)"];
            
            ["spawn Insertion pod", [
                ["sideS", ["Side select (ONLY ONE!)", "The side the dropped unit will be on."], [east]],
                ["toOLBOX", ["Type select", "What type of Elite unit to spawn."], [7, 3, 3, _options, nil]]
                ], {
                    params["_values", "_arguments"];
                    _dropside=_values select 0;
                    _selection=_values select 1;
                    
                    _pos=_arguments select 0;
                    
                    _pos= (ASLtoATL _pos);
                    
                    _spawnpos = _pos vectorAdd [random [-500, 0, 500], random [-500, 0, 500], 2000];
                    
                    _mainprojectile=createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"];
					_mainprojectile setShotParents [player, player];
                    
                    _angle = [(_pos vectorFromTo _spawnpos)#0, (_pos vectorFromTo _spawnpos)#1, ((_pos vectorFromTo _spawnpos)#2)];

                    _projectile = createvehicle ["ELITE_POD", [0, 0, 0], [], 0, "NONE"];
                    _projectile setPosATL (getPosATL _mainprojectile);
                    [_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
                    _projectile allowdamage false;
                    
                     [_mainprojectile, _pos,_projectile] spawn {
                        params ["_mainprojectile", "_pos","_projectile"];
                        while {alive _mainprojectile} do {
                            _mainprojectile setvelocity ((_pos vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -150);
                        };
                    };
                    
					_mainprojectile say3D ["Cov_DropPod_Thruster", 2000, random [20, 30, 40]];

					[[_projectile], {
                        params ["_projectile"];
                        _FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0];
                        _FloodLight attachto [_projectile, [0, 0, 0]];
                        _FloodLight setLightColor [0,0.2,1];
                        _FloodLight setLightAmbient [0,0.2,1];
                        _FloodLight setLightBrightness 1;
                        _FloodLight setLightDayLight true;
                        
                        waitUntil {
                            !alive _projectile
                        };
                        deletevehicle _floodLight;

                    }] remoteExec ["spawn"];

					[[_projectile],{
					params ["_projectile"];
					_ray = "#particlesource" createVehicleLocal (getPosATL _projectile);
					_ray setParticleCircle [0, [0, 0, -3]];
					_ray setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 1], 0, 0];
					_ray setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, [0, 0, 0], [0, 0, 0], 13, 10, 7.6, 0, [1,1,1,1], [[0,0.2,1, 1],[0,0.2,1, 1]], [0.08], 1, 0, "", "", _ray];
					_ray setDropInterval 0.0002;
					_ray attachTo [_projectile, [0,0,1.27]];
					[_ray,_projectile] spawn {params ['_ray','_projectile']; waitUntil {(!alive _projectile)}; deleteVehicle _ray;};
					}] remoteExec ["spawn"];
                    
                    
                    [_mainprojectile, _pos, _dropside, _projectile, _selection] spawn {
                        params ["_mainprojectile", "_pos", "_dropside", "_projectile", "_selection"];
                        
                        _posATL=_pos;
                        waitUntil {
                            if (alive _mainprojectile) then {
                                _posATL=getPosATL _mainprojectile;
                            };
                            !alive _mainprojectile;
                        };
                        
                        [[_posATL], {
                            params ['_pos'];
                            _posATL = _pos;
                            _posATL set [2, 2];
                            
                            private _ps1 = "#particlesource" createvehiclelocal _posATL;
                            _ps1 setParticleParams [
                                "\A3\Data_F\ParticleEffects\Pstone\Pstone", "", "SpaceObject",
                                1, 10, [0, 0, 0], [0, 0, 10], 1, 20, 1, 0.2, [0.1, 1],
                                [[1, 1, 1, 1]],
                            [0, 1], 1, 0, "", "", _ps1];
                            _ps1 setParticleRandom [0, [5, 5, 0], [5, 5, 5], 0, 1.5, [0, 0, 0, 0], 0, 0];
                            _ps1 setParticleCircle [5, [0, 5, 5]];
                            _ps1 setDropInterval 0.01;
                            
                            _ps1 spawn {
                                sleep 1;
                                deletevehicle _this;
                            };
                        }] remoteExec ["spawn"];
                        
                        _craterpos = _posATL;
                        _craterpos set [2, 0];

						deleteVehicle _projectile;
						_projectile = createvehicle ["ELITE_POD_OPEN", _craterpos, [], 0, "CAN_COLLIDE"];
                        createvehicle ["Land_ShellCrater_01_F", _craterpos, [], 0, "CAN_COLLIDE"];

						_projectile say3D ["Cov_DropPod_Door", 1000, random [1, 2, 3]];

						//door
						_DistanceNumber = (10 + (random 20));
						_DropPodDoorSpawn = _projectile modelToWorld [_DistanceNumber,0,-1.5];
						_DropPodDoorCraterSpawn = _projectile modelToWorld [_DistanceNumber,0,-1.5];
                        _DropPodDoor = createvehicle ["ELITE_POD_Door", _DropPodDoorSpawn, [], 0, "CAN_COLLIDE"];
						_DropPodDoorCrater = createvehicle ["CraterLong_02_small_F", _DropPodDoorCraterSpawn, [], 0, "CAN_COLLIDE"];

						_RotationNumber = (random 5);
						[_DropPodDoor, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
						[_DropPodDoorCrater, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
						_DropPodDoorCrater setVectorDirAndUp [[1,0,0], [0,0,1]];

						_DropPodDoorCrater setVectorUp surfaceNormal position _DropPodDoorCrater;
						_DropPodDoor setVectorUp surfaceNormal position _DropPodDoor;

						_DropPodDoorCrater setPosATL [(getPosATL _DropPodDoorCrater select 0), (getPosATL _DropPodDoorCrater select 1),0];
						_DropPodDoor setPosATL [0.5 + (getPosATL _DropPodDoorCrater select 0), 0.5 + (getPosATL _DropPodDoorCrater select 1), (getPosATL _DropPodDoorCrater select 2) - 0.1];



						[[_projectile], {
							params ["_projectile"];
							_FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0];
							_FloodLight attachto [_projectile, [0, 0, 0]];
							_FloodLight setLightColor [0, 0.2, 1];
							_FloodLight setLightAmbient [0, 0.2, 1];
							_FloodLight setLightBrightness 0.25;
							_FloodLight setLightDayLight true;
							
							waitUntil {
								!alive _projectile
							};
							deletevehicle _floodLight;
						}] remoteExec ["spawn"];
						
                        _pos = _CraterPos;
                        
						_SpawnForward = _projectile modelToWorld [2,0,0];
                        _spawn = _SpawnForward;

                        _side = (_dropside select 0);
                        _list = [
                            ["WBK_EliteMainWeap_2", "OPTRE_FC_Elite_Minor2", "OPTRE_FC_Elite_Minor", "OPTRE_FC_Elite_MinorAT", "OPTRE_FC_Elite_MinorAA"],
                            ["WBK_EliteMainWeap_3", "OPTRE_FC_Elite_Major"],
                            ["WBK_EliteMainWeap_1", "WBK_EliteMainWeap_4", "OPTRE_FC_Elite_SpecOps2", "OPTRE_FC_Elite_SpecOps3", "OPTRE_FC_Elite_SpecOps"],
                            ["OPTRE_FC_Elite_FieldMarshal", "OPTRE_FC_Elite_FieldMarshal2", "WBK_EliteMainWeap_5"],
                            ["OPTRE_FC_Elite_Ultra","OPTRE_FC_Elite_Ultra2", "WBK_EliteMainWeap_9"],
							["OPTRE_FC_Elite_Zealot", "OPTRE_FC_Elite_Zealot2", "WBK_EliteMainWeap_8"],
							["OPTRE_FC_Elite_HonorGuard", "WBK_EliteMainWeap_7"],
							["IMS_Elite_Melee_2", "IMS_Elite_Melee_1", "WBK_EliteMainWeap_3", "WBK_EliteMainWeap_2", "WBK_EliteMainWeap_1", "WBK_EliteMainWeap_4", "WBK_EliteMainWeap_5", "WBK_EliteMainWeap_6", "WBK_EliteMainWeap_8", "WBK_EliteMainWeap_9"],
							["IMS_Elite_Melee_1","IMS_Elite_Melee_2"]

                        ] # _selection;
                        
                        _class = selectRandom _list;

						_listout=[];
                        for "_i" from 1 to 1 do{
                            _listout pushBack (selectRandom _list);
                        };

						[_spawn, _side, _listout,_projectile] spawn {
                            params ["_spawn", "_side", "_listout","_projectile"];

                            sleep 0.1;

                            _EliteUnit = [_spawn, _side, _listout] call BIS_fnc_spawngroup;
							
							_randomPosAroundPlayer = [[[(getPosATL _projectile), 50]], []] call BIS_fnc_randomPos;
							(leader _EliteUnit) domove (_randomPosAroundPlayer);
                        };

                    };
                }, {}, [_pos]] call zen_dialog_fnc_create;
            }, "\PHAN_ScifiSupportPlus\data\EliteDroppod.paa"] call zen_custom_modules_fnc_register;
        };
