/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    UNLOCALIZED TEXT: true
    CONFIG PATH: bin\config.bin/CfgAmmo/Cluster_155mm_AMOS
    SOURCE ADD-ON(S): A3_Weapons_F, A3_Sounds_F, sounds_f_vietnam_c, ace_rearm
*/

class Cluster_155mm_AMOS
{
    triggerDistance = 200;
    triggerSpeedCoef[] = {0.5,1};
    submunitionConeAngle = 15;
    submunitionConeType[] = {"randomcenter",35};
    submunitionAmmo[] = {"Mo_cluster_AP",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
    cost = 200;
    airFriction = 0;
    muzzleEffect = "";
    hit = 300;
    soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01",1.77828,1,2000};
    soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02",1.77828,1,2000};
    soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03",1.77828,1,2000};
    soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04",1.77828,1,2000};
    soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05",1.77828,1,2000};
    soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06",1.77828,1,2000};
    soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07",1.77828,1,2000};
    soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08",1.77828,1,2000};
    multiSoundHit[] = {"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
    class CamShakeFire
    {
        power = 3.52844;
        duration = 2.4;
        frequency = 20;
        distance = 99.5992;
    };
    class CamShakePlayerFire
    {
        power = 0.02;
        duration = 0.1;
        frequency = 20;
        distance = 1;
    };
    SoundSetExplosion[] = {"vn_frag_epl_soundset","vn_epl_shock_soundset","vn_grenade_explosion_tails_soundset","vn_debris_small_soundset"};
    ace_rearm_caliber = 155;
    model = "\A3\Weapons_F\Ammo\shell.p3d";
    ACE_damageType = "explosive";
    simulation = "shotSubmunitions";
    simulationStep = 0.05;
    timeToLive = 180;
    soundHit[] = {"",316.228,1};
    soundFly[] = {"",0.0316228,4};
    hitOnWater = 1;
    artilleryLock = 1;
    indirectHitRange = 8;
    visibleFire = 16;
    audibleFire = 16;
    visibleFireTime = 10;
    deflecting = 5;
    access = 3;
    indirectHit = 0;
    underwaterHitRangeCoef = 1;
    typicalSpeed = 900;
    explosionForceCoef = 1;
    isCraterOriented = 0;
    proxyShape = "";
    craterShape = "";
    weaponType = "Default";
    animated = 0;
    shadow = 0;
    maxSpeed = 0;
    cartridge = "";
    tracerColor[] = {0.7,0.7,0.5,0.04};
    tracerColorR[] = {0.7,0.7,0.5,0.04};
    soundEngine[] = {"",1,1};
    supersonicCrackNear[] = {"",1,1};
    supersonicCrackFar[] = {"",1,1};
    soundFall[] = {"",1,1};
    soundFakeFall[] = {"soundFall",1};
    hitGroundSoft[] = {"soundHit",1};
    hitGroundHard[] = {"soundHit",1};
    hitMan[] = {"soundHit",1};
    hitArmor[] = {"soundHit",1};
    hitIron[] = {"soundHit",1};
    hitBuilding[] = {"soundHit",1};
    hitFoliage[] = {"soundHit",1};
    hitWood[] = {"soundHit",1};
    hitGlass[] = {"soundHit",1};
    hitGlassArmored[] = {"soundHit",1};
    hitConcrete[] = {"soundHit",1};
    hitRubber[] = {"soundHit",1};
    hitPlastic[] = {"soundHit",1};
    hitDefault[] = {"soundHit",1};
    hitMetal[] = {"soundHit",1};
    hitMetalplate[] = {"soundHit",1};
    hitTyre[] = {"soundHit",1};
    hitWater[] = {"soundHit",1};
    soundImpact[] = {"",1,1};
    impactGroundSoft[] = {"soundImpact",1};
    impactGroundHard[] = {"soundImpact",1};
    impactMan[] = {"soundImpact",1};
    impactIron[] = {"soundImpact",1};
    impactArmor[] = {"soundImpact",1};
    impactBuilding[] = {"soundImpact",1};
    impactFoliage[] = {"soundImpact",1};
    impactWood[] = {"soundImpact",1};
    impactGlass[] = {"soundImpact",1};
    impactGlassArmored[] = {"soundImpact",1};
    impactConcrete[] = {"soundImpact",1};
    impactRubber[] = {"soundImpact",1};
    impactPlastic[] = {"soundImpact",1};
    impactDefault[] = {"soundImpact",1};
    impactMetal[] = {"soundImpact",1};
    impactMetalplate[] = {"soundImpact",1};
    impactTyre[] = {"soundImpact",1};
    impactWater[] = {"soundImpact",1};
    grenadeFireSound[] = {};
    grenadeBurningSound[] = {};
    deflectionSlowDown = 0.8;
    explosive = 1;
    explosionEffects = "ExplosionEffects";
    craterEffects = "ImpactEffectsMedium";
    craterWaterEffects = "ImpactEffectsWater";
    effectsMissile = "ExplosionEffects";
    effectsMissileInit = "";
    effectsSmoke = "SmokeShellWhite";
    effectsFire = "CannonFire";
    effectFlare = "FlareShell";
    effectFly = "";
    mineJumpEffects = "";
    waterEffectOffset = 0.45;
    directionalExplosion = 0;
    explosionAngle = 60;
    explosionDir = "explosionDir";
    explosionPos = "explosionPos";
    explosionEffectsDir = "explosionDir";
    minimumSafeZone = 0.1;
    soundTrigger[] = {};
    soundActivation[] = {};
    soundDeactivation[] = {};
    explosionSoundEffect = "";
    minTimeToLive = 0;
    irLock = 0;
    airLock = 0;
    laserLock = 0;
    nvLock = 0;
    lockSeekRadius = 100;
    manualControl = 0;
    maxControlRange = 350;
    maneuvrability = 1;
    trackLead = 1;
    trackOversteer = 1;
    missileLockCone = 0;
    weaponLockSystem = 0;
    cmImmunity = 1;
    lockType = 0;
    maverickweaponIndexOffset = 0;
    sideAirFriction = 1;
    artilleryDispersion = 1;
    artilleryCharge = 1;
    autoSeekTarget = 0;
    shootDistraction = -1;
    explosionTime = 0;
    fuseDistance = 0;
    initTime = 0;
    thrustTime = 1.5;
    thrust = 210;
    icon = "";
    explosionType = "explosive";
    mineTrigger = "RangeTrigger";
    mineBoundingTime = 3;
    mineBoundingDist = 3;
    mineInconspicuousness = 10;
    mineFloating = -1;
    mineDiveSpeed = 1;
    minePlaceDist = 0.5;
    class HitEffects
    {
        vehicle = "ImpactMetal";
        object = "ImpactConcrete";
    };
    suppressionRadiusBulletClose = -1;
    suppressionRadiusHit = -1;
    dangerRadiusBulletClose = -1;
    dangerRadiusHit = -1;
    caliber = 1;
    whistleDist = 0;
    whistleOnFire = 0;
    class NVGMarkers
    {
    };
    minDamageForCamShakeHit = 0.55;
    class EventHandlers
    {
    };
};