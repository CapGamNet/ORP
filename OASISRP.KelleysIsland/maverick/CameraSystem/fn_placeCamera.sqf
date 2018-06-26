_cameraObject = getText(missionConfigFile >> "camera_system_config" >> "general" >> "cameraObject");

_portableCamera = _cameraObject createVehicle [0,0,0];
_portableCamera attachTo[player,[0,2.5,1]];
_portableCamera setDir 180;

_placeCameraText = getText(missionConfigFile >> "camera_system_config" >> "general" >> "placeCameraText");

life_action_cameraDeploy = player addAction[_placeCameraText,{if (!isNull life_portableCamera) then {detach life_portableCamera; life_portableCamera = objNull;}; player removeAction life_action_cameraDeploy; life_action_cameraDeploy = nil;},"",999,false,false,"",'!isNull life_portableCamera'];

life_portableCamera = _portableCamera;
waitUntil {isNull life_portableCamera};

if (!isNil "life_action_cameraDeploy") then {player removeAction life_action_cameraDeploy;};
if (isNull _portableCamera) exitWith {life_portableCamera = objNull;};

_portableCamera setPos [(getPos _portableCamera select 0),(getPos _portableCamera select 1),(getPos _portableCamera select 2)];
life_portableCameras pushBack _portableCamera;

_pickupCameraText = getText(missionConfigFile >> "camera_system_config" >> "general" >> "pickupCameraText");

_portableCamera addAction[_pickupCameraText, mav_camera_fnc_pickupCamera];