{life_portableCameras = life_portableCameras - [objNull]} forEach life_portableCameras;

_camera = param [0, 0, [0]];
_projector = life_portableCameras select _camera;
if (_projector == objNull) exitWith {};

life_portable_cam = "CAMERA" camCreate getPos _projector;
showCinemaBorder false;
life_portable_cam cameraEffect ["Internal", "Back"];
life_portable_cam SetDir (getDir _projector - 180);
life_portable_cam camSetPos ([(getPos _projector select 0), (getPos _projector select 1), (getPos _projector select 2)+1]);
life_portable_cam camSetFocus [50, 0];
life_portable_cam camCommit 0;

_viewingCameraText = getText(missionConfigFile >> "camera_system_config" >> "general" >> "viewingCameraText");

systemChat format [_viewingCameraText, _camera];