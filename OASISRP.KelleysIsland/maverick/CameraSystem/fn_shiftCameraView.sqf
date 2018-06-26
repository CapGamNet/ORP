_camera = _this select 0;
_direction = _this select 1;
_angle = _this select 2;
_pitch = _this select 3;

//systemChat format["dir: %1 angle: %2 pitch: %3",_direction,_angle,_pitch];

_vecdx = sin(_direction) * cos(_angle);
_vecdy = cos(_direction) * cos(_angle);
_vecdz = sin(_angle);

_vecux = cos(_direction) * cos(_angle) * sin(_pitch);
_vecuy = sin(_direction) * cos(_angle) * sin(_pitch);
_vecuz = cos(_angle) * cos(_pitch);

_camera setVectorDirAndUp [[_vecdx,_vecdy,_vecdz],[_vecux,_vecuy,_vecuz]];