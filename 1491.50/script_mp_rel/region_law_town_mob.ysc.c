#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 3;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	ePedType eptLocal_46 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_47 = PED_TYPE_PLAYER_0;
	int iLocal_48 = 0;
	int iLocal_49 = 9;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	Volume volLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	Volume volLocal_69 = 0;
	BOOL bLocal_70 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x27478606 ^0xA0EE8729
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	bLocal_70 = true;
	iLocal_44 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	func_2();

	while (func_3(iLocal_44) && iLocal_45 != 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x4D Hash - 0x65997309 ^0x76A7C841
{
	int i;

	LAW::_0x29CD4896ECB66C12();
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRoadBlock, false);
	VOLUME::DELETE_VOLUME(volLocal_59);

	for (i = 0; i < iLocal_49; i = i + 1)
	{
		if (func_5(iLocal_49[i], 0))
			func_6(&iLocal_49[i], true, false, true);
	}

	if (PED::DOES_GROUP_EXIST(iLocal_48))
		PED::REMOVE_GROUP(iLocal_48);

	return;
}

void func_2() // Position - 0xA8 Hash - 0xCAE86CEC ^0xAE421E86
{
	Volume aggregate;
	Volume aggregate2;
	int num;

	iLocal_45 = 1;
	PED::_RESERVE_AMBIENT_PEDS(9);

	switch (iLocal_44)
	{
		case 26:
			uLocal_63 = { -1791.5217f, -395.2781f, 159.2376f };
			volLocal_59 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1789.5818f, -395.47693f, 153.04466f, 0f, 0f, -30.951954f, 70.53338f, 56.728386f, 31.996239f, "m_volTownMob Strawberry");
			break;
	
		case 81:
			uLocal_63 = { -297.8979f, 783.4763f, 117.3506f };
			aggregate = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-266.45978f, 686.25696f, 121.6327f, 0f, 0f, 29.927555f, 64.32985f, 90.860146f, 10f, "Main Town");
			aggregate2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-301.86874f, 775.7222f, 117.879974f, 0f, 0f, 111.019264f, 113.048996f, 150.22615f, 41.617626f, "Stockyard");
			volLocal_59 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTownMob Valentine Agg");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_59, aggregate);
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_59, aggregate2);
			break;
	
		case 111:
			uLocal_63 = { 1323.98f, -1305.5f, 75.625f };
			volLocal_59 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1334.6862f, -1305.6152f, 86f, 0f, 0f, 65.0729f, 82.529305f, 147.40804f, 20f, "m_volTownMob Rhodes Agg");
			break;
	
		default:
			volLocal_59 = func_7(iLocal_44);
			uLocal_63 = { func_8(iLocal_44, true) };
			break;
	}

	num = 0;
	func_9(&num, 0);
	func_9(&num, 29);
	COMPANION::_0x3CAAD93FA5B9579A(volLocal_59, 2, num);
	return;
}

BOOL func_3(int iParam0) // Position - 0x216 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

void func_4() // Position - 0x21F Hash - 0x920ED08D ^0xA80A624D
{
	float num;
	float num2;
	int num3;
	int i;
	int j;

	switch (iLocal_45)
	{
		case 1:
			if (func_10(Global_33, uLocal_63, true) < 100f)
			{
				eptLocal_47 = func_11(0, 2, -156825994, true, false, 0f, 0f, 0f);
			
				switch (iLocal_44)
				{
					case 26:
						eptLocal_46 = joaat("a_m_m_strdeputyresident_01");
						break;
				
					case 81:
						eptLocal_46 = joaat("a_m_m_valdeputyresident_01");
						break;
				
					case 111:
						eptLocal_46 = joaat("a_m_m_rhddeputyresident_01");
						break;
				
					default:
						eptLocal_46 = joaat("a_m_m_valdeputyresident_01");
						break;
				}
			
				iLocal_45 = 2;
			}
			else
			{
				iLocal_45 = 6;
			}
			break;
	
		case 2:
			STREAMING::REQUEST_MODEL(eptLocal_47, false);
			STREAMING::REQUEST_MODEL(eptLocal_46, false);
		
			if (STREAMING::HAS_MODEL_LOADED(eptLocal_47) && STREAMING::HAS_MODEL_LOADED(eptLocal_46) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				iLocal_45 = 4;
			break;
	
		case 4:
			if (func_12())
			{
				func_13();
				func_14(&uLocal_60);
				iLocal_45 = 5;
			}
			else
			{
				iLocal_45 = 6;
			}
			break;
	
		case 5:
			if (bLocal_70)
				LAW::_0x7EF2A2FE38D74456(func_15(1), true);
		
			num = 150f;
		
			for (i = 0; i < iLocal_49; i = i + 1)
			{
				if (func_5(iLocal_49[i], 0))
				{
					num3 = num3 + 1;
					num2 = func_10(iLocal_49[i], Global_34, true);
				
					if (num2 < num)
						num = num2;
				}
			}
		
			if (num3 <= 2)
			{
				bLocal_70 = false;
				LAW::_0x7EF2A2FE38D74456(func_15(1), false);
			}
		
			if (num3 <= 0 || num >= 150f)
			{
				i = 0;
			
				for (i = 0; i < iLocal_49; i = i + 1)
				{
					if (func_5(iLocal_49[i], 0))
						func_16(iLocal_49[i]);
				}
			
				iLocal_45 = 6;
			}
			break;
	
		case 6:
			for (j = 0; j < iLocal_49; j = j + 1)
			{
				if (func_5(iLocal_49[j], 0))
					func_6(&iLocal_49[j], true, true, true);
			}
		
			LAW::_0x7EF2A2FE38D74456(func_15(1), false);
			iLocal_45 = 7;
			break;
	}

	return;
}

BOOL func_5(Ped pedParam0, int iParam1) // Position - 0x405 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_17(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_17(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_17(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_17(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_17(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_17(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_17(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_17(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_6(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x504 Hash - 0xEB76F1D1 ^0xF1B7E213
{
	if (!ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		return;

	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
		return;

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
		return;

	if (!PED::IS_PED_INJURED(*ppedParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false);
	
		if (!bParam3)
			TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
	
		PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
	
		if (bParam2)
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
	}

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	return;
}

Volume func_7(int iParam0) // Position - 0x572 Hash - 0xE4DA9E55 ^0x19A1F3C2
{
	if (!func_18(iParam0))
		return 0;

	return Global_1887363[iParam0 /*36*/].f_4;
}

Vector3 func_8(int iParam0, BOOL bParam1) // Position - 0x592 Hash - 0x5496E9AE ^0x5143DC2
{
	Vector3 volumeCoords;
	var groundZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_18(iParam0))
		return volumeCoords;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
	{
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };
	
		if (bParam1)
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(volumeCoords, &groundZ, false))
				volumeCoords.f_2 = groundZ;
	}

	return volumeCoords;
}

void func_9(var uParam0, int iParam1) // Position - 0x5F2 Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

float func_10(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x60C Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

ePedType func_11(int iParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4, float fParam5, float fParam6, float fParam7) // Position - 0x634 Hash - 0x5FAF754B ^0x127DAE42
{
	if (!func_19(iParam0))
		return 0;

	if (func_20(iParam0) == -1)
		return 0;

	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_20(iParam0), iParam1, hParam2, bParam3, bParam4, fParam5);
}

BOOL func_12() // Position - 0x66E Hash - 0x3F56C6E0 ^0x7D1A987D
{
	float num;

	if (!func_21(iLocal_44, &uLocal_66, eptLocal_46))
		return false;

	num = BUILTIN::VDIST2(Global_34, uLocal_66);

	if (num > 10000f)
		return false;

	if (num < 1225f)
		return false;

	if (CAM::IS_SPHERE_VISIBLE(uLocal_66, 2f) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(eptLocal_46, uLocal_66, true))
		return false;

	volLocal_69 = VOLUME::CREATE_VOLUME_CYLINDER(uLocal_66, 0f, 0f, 0f, 3f, 3f, 3f);
	func_22(volLocal_69, false, false, false, false, false);
	func_23(volLocal_69, 0);
	return true;
}

void func_13() // Position - 0x6FA Hash - 0x7B0D40A0 ^0x4F6F46A2
{
	int i;
	var unk;
	Blip blip;
	int num;

	if (!PED::DOES_GROUP_EXIST(iLocal_48))
	{
		iLocal_48 = PED::CREATE_GROUP(1);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_48, 5f, 1f, 2f);
		PED::SET_GROUP_FORMATION(iLocal_48, 8);
		PED::_0x89E59DBD15E21177(iLocal_48, 0);
	}

	for (i = 0; i < iLocal_49; i = i + 1)
	{
		unk = { func_24(uLocal_66, 3f, 1f) };
	
		if (i == 0)
		{
			iLocal_49[i] = func_25(eptLocal_46, unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), true, true, 0, true, true, true, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_CanUseVehicles, false);
			PED::SET_COMBAT_FLOAT(iLocal_49[i], 48, 8f);
		
			if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("weapon_shotgun_doublebarrel")))
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[i], joaat("weapon_shotgun_doublebarrel"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
			else
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[i], joaat("weapon_repeater_carbine"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		}
		else
		{
			iLocal_49[i] = func_25(eptLocal_47, unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), true, true, 0, true, true, true, false, false);
		
			if (func_5(iLocal_49[i], 0))
			{
				if (i % 4 == 0 && func_27(func_26()) >= 22 || func_27(func_26()) <= 4)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[i], joaat("weapon_revolver_cattleman"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[i], joaat("weapon_melee_torch"), 999, true, false, 1, false, 1056964608, 1065353216, 752097756, false, 0, false);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[i], joaat("weapon_repeater_carbine"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
				}
			}
		}
	
		if (func_5(iLocal_49[i], 0))
		{
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(iLocal_49[i], volLocal_59, false, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_CanUseCover, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_DisableFleeFromCombat, true);
			PED::_0x815C0074A1BC0D93(iLocal_49[i], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49[i], joaat("rel_town_mob"));
			PED::REGISTER_TARGET(iLocal_49[i], Global_33, true);
			PED::SET_PED_ACCURACY(iLocal_49[i], 60);
			PED::SET_PED_CONFIG_FLAG(iLocal_49[i], 279, true);
		
			if (i == 0)
			{
				PED::SET_PED_AS_GROUP_LEADER(iLocal_49[i], iLocal_48, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_49[i], 155, true);
				COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_48);
				COMPANION::_SET_COMPANION_ACTIVITY(iLocal_48, joaat("CA_SEARCH"));
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_49[i], iLocal_48);
				PED::SET_PED_CONFIG_FLAG(iLocal_49[i], 156, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_49[i], 152, true);
			}
		
			blip = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_49[i]);
			MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_TOWN_POSSE_MEMBER"));
			PED::_0x1E017404784AA6A3(iLocal_49[i], joaat("town_mob"));
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_49[i], CM_WillAdvance);
			PED::SET_PED_COMBAT_RANGE(iLocal_49[i], 1);
			PED::_SET_PED_COMBAT_BEHAVIOUR(iLocal_49[i], 2018638702);
			num = 0;
			func_28(&num, 15);
			func_28(&num, 16);
			COMPANION::_ADD_COMPANION_FLAG(iLocal_49[i], num);
		}
	}

	return;
}

void func_14(var uParam0) // Position - 0xA1B Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_29(uParam0, 0f);
	return;
}

int func_15(int iParam0) // Position - 0xA2A Hash - 0x562558FC ^0x562558FC
{
	int num;

	switch (iParam0)
	{
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 32;
			break;
	
		case 6:
			num = 64;
			break;
	
		case 7:
			num = 16;
			break;
	
		case 8:
			num = 8;
			break;
	}

	return num;
}

void func_16(Ped pedParam0) // Position - 0xA7C Hash - 0x1ED83FB6 ^0xA53723D3
{
	if (!func_5(Global_33, 0))
		return;

	if (!func_5(pedParam0, 0))
		return;

	TASK::TASK_SMART_FLEE_PED(pedParam0, Global_33, 500f, -1, 0, 1077936128, 0);
	func_30(pedParam0);
	func_6(&pedParam0, true, true, true);
	return;
}

BOOL func_17(int iParam0, int iParam1) // Position - 0xAC6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_18(int iParam0) // Position - 0xAD5 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_19(int iParam0) // Position - 0xAEB Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

Hash func_20(int iParam0) // Position - 0xB01 Hash - 0x8D65EDFB ^0x8D65EDFB
{
	int num;

	if (!func_19(iParam0))
		return -1;

	num = func_32(func_31());

	if (num != 1 && num != 2)
		return Global_1900443[iParam0];

	return Global_1900426[iParam0];
}

BOOL func_21(int iParam0, var uParam1, ePedType eptParam2) // Position - 0xB44 Hash - 0x4B837A5D ^0x4B837A5D
{
	var unk;
	BOOL flag;
	float num;
	int i;
	float num2;

	unk = 4;
	flag = false;

	switch (iParam0)
	{
		case 26:
			unk[0 /*3*/] = { -1761.0815f, -398.9954f, 154.8396f };
			unk[1 /*3*/] = { -1795.0155f, -366.7957f, 160.3465f };
			unk[2 /*3*/] = { -1834.6613f, -433.5942f, 158.4428f };
			unk[3 /*3*/] = { -1796.6188f, -448.2619f, 156.146f };
			break;
	
		case 81:
			unk[0 /*3*/] = { -344.5539f, 730.0873f, 116.3921f };
			unk[1 /*3*/] = { -281.1094f, 847.3516f, 118.6537f };
			unk[2 /*3*/] = { -361.3619f, 809.3384f, 114.9999f };
			unk[3 /*3*/] = { -236.5398f, 702.7105f, 112.5291f };
			break;
	
		case 111:
			unk[0 /*3*/] = { 1308.7097f, -1258.8469f, 76.3559f };
			unk[1 /*3*/] = { 1317.5148f, -1303.4414f, 75.2424f };
			unk[2 /*3*/] = { 1346.5398f, -1354.9464f, 77.4856f };
			unk[3 /*3*/] = { 1398.2721f, -1314.5696f, 76.6552f };
			break;
	
		default:
			*uParam1 = { func_8(iParam0, true) };
			return false;
	}

	*uParam1 = { unk[0 /*3*/] };
	num = 999999f;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!CAM::IS_SPHERE_VISIBLE(unk[i /*3*/], 2f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(eptParam2, unk[i /*3*/], true))
		{
			num2 = BUILTIN::VDIST2(Global_34, unk[i /*3*/]);
		
			if (flag)
			{
				flag = false;
				*uParam1 = { unk[i /*3*/] };
				num2 = num;
			}
			else if (num2 < num && !(num2 < 1225f))
			{
				*uParam1 = { unk[i /*3*/] };
				num2 = num;
			}
		}
		else if (i == 0)
		{
			flag = true;
		}
	}

	return true;
}

void func_22(Volume volParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xD3B Hash - 0xFDD92D0 ^0xFC369A71
{
	int num;

	num = 8;

	if (bParam1)
		num = num | 72;

	if (bParam2)
		num = num | 131072;

	if (bParam3)
		num = num | 24;

	if (bParam4)
		num = num | 40;

	if (bParam5)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_23(Volume volParam0, int iParam1) // Position - 0xD8F Hash - 0xB2D6EBF3 ^0xC170DE6A
{
	int num;

	num = 512;

	if (iParam1 & 1 != 0)
		num = num | 524288;

	if (iParam1 & 2 != 0)
		num = num | 1536;

	if (iParam1 & 4 != 0)
		num = num | 2560;

	if (iParam1 & 8 != 0)
		num = num | 4608;

	if (iParam1 & 16 != 0)
		num = num | 8704;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

Vector3 func_24(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4) // Position - 0xDF7 Hash - 0xC59B327E ^0x28F503C3
{
	var unk;
	float endRange;

	unk = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	endRange = fParam4 / 2f;
	unk = { func_33(unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	unk.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-endRange, endRange);
	return uParam0 + unk;
}

Ped func_25(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0xE3F Hash - 0xA67C0C52 ^0xA10AD291
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_34(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

int func_26() // Position - 0xE7F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

int func_27(int iParam0) // Position - 0xE8B Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_28(var uParam0, int iParam1) // Position - 0xE9E Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

void func_29(var uParam0, float fParam1) // Position - 0xEB8 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_35() - fParam1;
	func_36(uParam0, 1);
	func_37(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_30(Ped pedParam0) // Position - 0xEDE Hash - 0x467611EC ^0x3EE822E5
{
	Blip blipFromEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	blipFromEntity = MAP::GET_BLIP_FROM_ENTITY(pedParam0);
	func_38(&blipFromEntity);
	return;
}

int func_31() // Position - 0xF01 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

int func_32(int iParam0) // Position - 0xF0F Hash - 0xE4DA9E55 ^0xA64AA720
{
	if (!func_18(iParam0))
		return 0;

	return Global_1887363[iParam0 /*36*/].f_21;
}

Vector3 func_33(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0xF2F Hash - 0x88200B15 ^0xE07B704A
{
	float num;

	if (fParam3 == 0f)
		return 0f, 0f, 0f;

	num = BUILTIN::VMAG(vParam0);

	if (num != 0f)
		return vParam0 * { fParam3 / num, fParam3 / num, fParam3 / num };

	return 0f, 0f, 0f;
}

void func_34(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xF66 Hash - 0x81861438 ^0x93C66BE8
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_39(pedParam0, false, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_40(pedParam0, false);
			flag = true;
		}
	
		func_41(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

float func_35() // Position - 0x1030 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_36(var uParam0, int iParam1) // Position - 0x1062 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_37(var uParam0, int iParam1) // Position - 0x1073 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_38(Blip* pblParam0) // Position - 0x1088 Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*pblParam0))
		MAP::REMOVE_BLIP(pblParam0);

	return;
}

void func_39(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10A0 Hash - 0x4FE4E8A8 ^0x44655508
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (bParam1)
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HATS"), 0, true);
	else
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_40(Ped pedParam0, BOOL bParam1) // Position - 0x10E5 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_41(Ped pedParam0, int iParam1) // Position - 0x112A Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

