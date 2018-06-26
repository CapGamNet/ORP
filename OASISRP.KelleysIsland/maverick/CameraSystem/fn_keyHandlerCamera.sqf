_code = param [0, 0, [0]];

_exitKey = getnumber(missionConfigFile >> "camera_system_config" >> "keybindings" >> "exitKey");
_turnLeftKey = getnumber(missionConfigFile >> "camera_system_config" >> "keybindings" >> "turnLeftKey");
_turnRightKey = getnumber(missionConfigFile >> "camera_system_config" >> "keybindings" >> "turnRightKey");
_lookUpKey = getnumber(missionConfigFile >> "camera_system_config" >> "keybindings" >> "lookUpKey");
_lookDownKey = getnumber(missionConfigFile >> "camera_system_config" >> "keybindings" >> "lookDownKey");
_previousCameraKey = getnumber(missionConfigFile >> "camera_system_config" >> "keybindings" >> "previousCameraKey");
_nextCameraKey = getnumber(missionConfigFile >> "camera_system_config" >> "keybindings" >> "nextCameraKey");

_cameraObject = getText(missionConfigFile >> "camera_system_config" >> "general" >> "cameraObject");

_angleClampNegative = getNumber(missionConfigFile >> "camera_system_config" >> "general" >> "angleClampNegative");
_angleClampPositive = getNumber(missionConfigFile >> "camera_system_config" >> "general" >> "angleClampPositive");

_dirClampLeft = getNumber(missionConfigFile >> "camera_system_config" >> "general" >> "dirClampLeft");
_dirClampRight = getNumber(missionConfigFile >> "camera_system_config" >> "general" >> "dirClampRight");


if (!isNull life_portable_cam) then {
    _dir = 0;
    _angle = 0;
    _pitch = 0;

    _dir = getDir life_portable_cam;
    _projectorDir = getDir (nearestObject [getPos life_portable_cam, _cameraObject]);
    _projectorDir = _projectorDir - 180;
    if (_projectorDir < 0) then {
        _projectorDir = _projectorDir + 360;
    };
    _angle = acos((vectorUp life_portable_cam) select 2);
    _pitch = (life_portable_cam call BIS_fnc_getPitchBank) select 0;

    if (_pitch < 0) then {
            _angle = _angle * -1;
    };

    _angle = _angle max _angleClampNegative min _angleClampPositive;

    switch (_code) do {
        case _exitKey:
        {
            life_portable_cam cameraEffect["TERMINATE", "BACK"];
            camDestroy life_portable_cam;
        };
        case _turnLeftKey:
        {
            _clamp = _projectorDir - _dirClampLeft;
            if (floor _dir <= floor(_projectorDir - 360 + _dirClampLeft)) then {
                _clamp = _clamp - 360;
            } else {
                if (floor _clamp < 0 && floor _dir > floor (_clamp + 360 - _dirClampLeft)) then {
                    _clamp = _clamp + 360;
                };
            };
            if(_dir >= _clamp + 1) then {
                [life_portable_cam, _dir - 1, _angle, 0] call mav_camera_fnc_shiftCameraView;
            };
        };
        case _turnRightKey:
        {
            _clamp = _projectorDir + _dirClampRight;
            if (floor _clamp > 360 && floor _dir < floor (_clamp - 360 + _dirClampRight)) then {
                _clamp = _clamp - 360;
            } else {
                if (floor _dir >= floor(_projectorDir + 360 - _dirClampRight)) then {
                    _clamp = _clamp + 360;
                }
            };
             format ["DIR:%1 | CLAMP:%2 | PROJECTORDIR:%3", _dir, _clamp, _projectorDir];
            if(_dir < _clamp - 1) then {
                [life_portable_cam, _dir + 1, _angle, 0] call mav_camera_fnc_shiftCameraView;
            };
        };
        case _lookUpKey:
        {
            [life_portable_cam, _dir, _angle + 1, 0] call mav_camera_fnc_shiftCameraView;
        };
        case _lookDownKey:
        {
            [life_portable_cam, _dir, _angle - 1, 0] call mav_camera_fnc_shiftCameraView;
        };
        case _previousCameraKey:
        {
            {life_portableCameras = life_portableCameras - [objNull]} forEach life_portableCameras;
            _index = life_portableCameras find nearestObject[getPos life_portable_cam, _cameraObject];
            if (_index > 0 && {!isNil {life_portableCameras select(_index - 1)}}) then {
                life_portable_cam cameraEffect["TERMINATE", "BACK"];
                camDestroy life_portable_cam;
                [_index - 1] call mav_camera_fnc_activateCamera;
            };
        };
        case _nextCameraKey:
        {
            {life_portableCameras = life_portableCameras - [objNull]} forEach life_portableCameras;
            _index = life_portableCameras find nearestObject[getPos life_portable_cam, _cameraObject];
            if (!isNil {life_portableCameras select(_index + 1)}) then {
                life_portable_cam cameraEffect["TERMINATE", "BACK"];
                camDestroy life_portable_cam;
                [_index + 1] call mav_camera_fnc_activateCamera;
            };
        };
    };
};