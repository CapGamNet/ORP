_camera = _this select 0;

if ([true,"portableCam",1] call life_fnc_handleInv) then {
	life_portableCameras - [_camera];
    deleteVehicle _camera;
    {life_portableCameras = life_portableCameras - [objNull]} forEach life_portableCameras;
} else {
	hint "You require more inventory space to pick this item up";
};