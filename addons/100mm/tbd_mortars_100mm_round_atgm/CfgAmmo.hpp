class SensorTemplateVisual;
class CfgAmmo {
	class Sh_120mm_HEAT_MP;

	class TBD_MORTARS_100MM_ROUND_AMMO_ATGM: Sh_120mm_HEAT_MP {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\TBD_MORTARS_100MM_ROUND_ATGM);
		hit = 90;
		indirectHit = 25;
		indirectHitRange = 3.5;

		class Components {
			class SensorsManagerComponent {
				class Components {
					class VisualSensorComponent: SensorTemplateVisual {};
				};
			};
		};
	};
};
