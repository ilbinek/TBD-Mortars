#define PREFIX TBD_MORTARS
#define COMPONENT 105mm
#include "\x\tbd_mortars\addons\main\script_mod.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORTARS_105mm_BOX tbd_mortars_105mm_box
#define TBD_MORTARS_105mm_BOX_SMOKE tbd_mortars_105mm_box_smoke
#define TBD_MORTARS_105mm_BOX_LASER tbd_mortars_105mm_box_laser
#define TBD_MORTARS_105mm_BOX_DPICM tbd_mortars_105mm_box_dpicm

#define TBD_MORTARS_105mm_SHELL_HE tbd_mortars_105mm_shell_he
#define TBD_MORTARS_105mm_SHELL_AMMO_HE tbd_mortars_105mm_shell_ammo_he

#define TBD_MORTARS_105mm_SHELL_SMOKE tbd_mortars_105mm_shell_smoke
#define TBD_MORTARS_105mm_SHELL_AMMO_SMOKE tbd_mortars_105mm_shell_ammo_smoke

#define TBD_MORTARS_105mm_SHELL_DPICM tbd_mortars_105mm_shell_dpicm
#define TBD_MORTARS_105mm_SHELL_AMMO_DPICM tbd_mortars_105mm_shell_ammo_dpicm

#define TBD_MORTARS_105mm_SHELL_LASER tbd_mortars_105mm_shell_laser
#define TBD_MORTARS_105mm_SHELL_AMMO_LASER tbd_mortars_105mm_shell_ammo_laser

#define TBD_MORTARS_105mm_CASING_CHARGE tbd_mortars_105mm_casing_charge
#define TBD_MORTARS_105mm_CASING_CHARGE_1 tbd_mortars_105mm_casing_charge_1
#define TBD_MORTARS_105mm_CASING_CHARGE_2 tbd_mortars_105mm_casing_charge_2
#define TBD_MORTARS_105mm_CASING_CHARGE_3 tbd_mortars_105mm_casing_charge_3
#define TBD_MORTARS_105mm_CASING_CHARGE_4 tbd_mortars_105mm_casing_charge_4
#define TBD_MORTARS_105mm_CASING_CHARGE_5 tbd_mortars_105mm_casing_charge_5
#define TBD_MORTARS_105mm_CASING_CHARGE_6 tbd_mortars_105mm_casing_charge_6
#define TBD_MORTARS_105mm_CASING_CHARGE_7 tbd_mortars_105mm_casing_charge_7
#define TBD_MORTARS_105mm_CASING_SPENT tbd_mortars_105mm_casing_spent

#define TBD_MORTARS_105mm_ROUND_HE tbd_mortars_105mm_round_he
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE tbd_mortars_105mm_round_he_charge
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 tbd_mortars_105mm_round_he_charge_1
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_2 tbd_mortars_105mm_round_he_charge_2
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_3 tbd_mortars_105mm_round_he_charge_3
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_4 tbd_mortars_105mm_round_he_charge_4
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_5 tbd_mortars_105mm_round_he_charge_5
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_6 tbd_mortars_105mm_round_he_charge_6
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_7 tbd_mortars_105mm_round_he_charge_7
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1 tbd_mortars_105mm_round_he_charge_mag_1
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_2 tbd_mortars_105mm_round_he_charge_mag_2
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_3 tbd_mortars_105mm_round_he_charge_mag_3
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_4 tbd_mortars_105mm_round_he_charge_mag_4
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_5 tbd_mortars_105mm_round_he_charge_mag_5
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_6 tbd_mortars_105mm_round_he_charge_mag_6
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_7 tbd_mortars_105mm_round_he_charge_mag_7

#define TBD_MORTARS_105mm_ROUND_SMOKE tbd_mortars_105mm_round_smoke
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE tbd_mortars_105mm_round_smoke_charge
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_1 tbd_mortars_105mm_round_smoke_charge_1
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_2 tbd_mortars_105mm_round_smoke_charge_2
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_3 tbd_mortars_105mm_round_smoke_charge_3
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_4 tbd_mortars_105mm_round_smoke_charge_4
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_5 tbd_mortars_105mm_round_smoke_charge_5
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_6 tbd_mortars_105mm_round_smoke_charge_6
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_7 tbd_mortars_105mm_round_smoke_charge_7
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_MAG_1 tbd_mortars_105mm_round_smoke_charge_mag_1
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_MAG_2 tbd_mortars_105mm_round_smoke_charge_mag_2
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_MAG_3 tbd_mortars_105mm_round_smoke_charge_mag_3
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_MAG_4 tbd_mortars_105mm_round_smoke_charge_mag_4
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_MAG_5 tbd_mortars_105mm_round_smoke_charge_mag_5
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_MAG_6 tbd_mortars_105mm_round_smoke_charge_mag_6
#define TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE_MAG_7 tbd_mortars_105mm_round_smoke_charge_mag_7

#define TBD_MORTARS_105mm_ROUND_DPICM tbd_mortars_105mm_round_dpicm
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE tbd_mortars_105mm_round_dpicm_charge
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_1 tbd_mortars_105mm_round_dpicm_charge_1
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_2 tbd_mortars_105mm_round_dpicm_charge_2
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_3 tbd_mortars_105mm_round_dpicm_charge_3
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_4 tbd_mortars_105mm_round_dpicm_charge_4
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_5 tbd_mortars_105mm_round_dpicm_charge_5
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_6 tbd_mortars_105mm_round_dpicm_charge_6
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_7 tbd_mortars_105mm_round_dpicm_charge_7
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_MAG_1 tbd_mortars_105mm_round_dpicm_charge_mag_1
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_MAG_2 tbd_mortars_105mm_round_dpicm_charge_mag_2
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_MAG_3 tbd_mortars_105mm_round_dpicm_charge_mag_3
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_MAG_4 tbd_mortars_105mm_round_dpicm_charge_mag_4
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_MAG_5 tbd_mortars_105mm_round_dpicm_charge_mag_5
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_MAG_6 tbd_mortars_105mm_round_dpicm_charge_mag_6
#define TBD_MORTARS_105mm_ROUND_DPICM_CHARGE_MAG_7 tbd_mortars_105mm_round_dpicm_charge_mag_7

#define TBD_MORTARS_105mm_ROUND_LASER tbd_mortars_105mm_round_laser
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE tbd_mortars_105mm_round_laser_charge
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 tbd_mortars_105mm_round_laser_charge_1
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_2 tbd_mortars_105mm_round_laser_charge_2
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_3 tbd_mortars_105mm_round_laser_charge_3
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_4 tbd_mortars_105mm_round_laser_charge_4
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_5 tbd_mortars_105mm_round_laser_charge_5
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_6 tbd_mortars_105mm_round_laser_charge_6
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_7 tbd_mortars_105mm_round_laser_charge_7
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_MAG_1 tbd_mortars_105mm_round_laser_charge_mag_1
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_MAG_2 tbd_mortars_105mm_round_laser_charge_mag_2
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_MAG_3 tbd_mortars_105mm_round_laser_charge_mag_3
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_MAG_4 tbd_mortars_105mm_round_laser_charge_mag_4
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_MAG_5 tbd_mortars_105mm_round_laser_charge_mag_5
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_MAG_6 tbd_mortars_105mm_round_laser_charge_mag_6
#define TBD_MORTARS_105mm_ROUND_LASER_CHARGE_MAG_7 tbd_mortars_105mm_round_laser_charge_mag_7

#define TBD_MORTARS_105mm_TUBE tbd_mortars_105mm_tube
#define TBD_MORTARS_105mm_TUBE_SMOKE tbd_mortars_105mm_tube_smoke
#define TBD_MORTARS_105mm_TUBE_DPICM tbd_mortars_105mm_tube_dpicm
#define TBD_MORTARS_105mm_TUBE_LASER tbd_mortars_105mm_tube_laser

#define TBD_MORTARS_105mm_SHELL_AMMO_DPICM_SUB tbd_mortars_105mm_shell_ammo_dpicm_sub
#define TBD_MORTARS_105mm_SHELL_AMMO_LASER_SUB tbd_mortars_105mm_shell_ammo_laser_sub