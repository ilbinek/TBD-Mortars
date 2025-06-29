class CfgWeapons {
	class CannonCore;

	class mortar_82mm: CannonCore {};

	class TBD_120mm_PM_43_WEAPON: mortar_82mm {
		displayName = "120-PM-43 mortar";
		magazines[] = {QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1), QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2), QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3), QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4), QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5), QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6), QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)};
		modes[] = {"Single1"};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		magazineReloadTime = 0.5;
		class Single1: Mode_SemiAuto {
			displayName="120-PM-43 mortar";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound {
				soundSetShot[] = {QUOTE(TBD_120mm_PM_43_SHOT_SOUNDSET)};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1.8;
			artilleryDispersion=1.9;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			artilleryCharge = 1;
		};
	};
};
