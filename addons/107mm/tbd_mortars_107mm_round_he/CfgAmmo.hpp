class CfgAmmo {
	class Sh_155mm_AMOS;

	class TBD_MORTARS_107MM_ROUND_AMMO_HE: Sh_155mm_AMOS {
		hit = 180;
		indirectHit = 65;
		indirectHitRange = 25;
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_medium_hd","ace_frag_medium"};
        ace_frag_force = 1;
		ace_frag_enabled = 1;
		ace_frag_guerney_c = 2440;
		ace_frag_guerney_k = 1/2;
		ace_frag_metal = 2680;
		timeToLive = 180;
		soundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","RocketsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
		typicalSpeed = 290;
		soundfly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02",2.51189,1,2500};
		whistleOnFire = 1;
		whistleDist = 300;
		effectFly = "Missile0";
		model = "\A3\Weapons_F\Ammo\Rocket_230mm_F";
	};
};
