#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 3;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	ePedType eptLocal_43 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_44 = PED_TYPE_PLAYER_0;
	int iLocal_45 = 0;
	int iLocal_46 = 9;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	Volume volLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	Volume volLocal_66 = 0;
	BOOL bLocal_67 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x27478606 ^0xA0EE8729
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_67 = true;
	iLocal_41 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	func_2();

	while (func_3(iLocal_41) && iLocal_42 != 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x4D Hash - 0x373AB92F ^0x8B036BC8
{
	BOOL flag;
	int i;

	LAW::_0x29CD4896ECB66C12();
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRoadBlock, false);
	VOLUME::DELETE_VOLUME(volLocal_56);
	flag = func_5(PLAYER::PLAYER_ID(), true, false, true);

	for (i = 0; i < iLocal_46; i = i + 1)
	{
		if (func_6(iLocal_46[i], 0))
		{
			if (!flag)
			{
				if (i == 0)
					PED::SET_PED_CONFIG_FLAG(iLocal_46[i], 155, false);
				else
					PED::SET_PED_CONFIG_FLAG(iLocal_46[i], 156, false);
			
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_46[i], joaat("rel_civmale"));
			}
		
			func_7(&iLocal_46[i], true, false, true);
		}
	}

	if (PED::DOES_GROUP_EXIST(iLocal_45))
		PED::REMOVE_GROUP(iLocal_45);

	return;
}

void func_2() // Position - 0xED Hash - 0xCAE86CEC ^0xAE421E86
{
	Volume aggregate;
	Volume aggregate2;
	int num;

	iLocal_42 = 1;
	PED::_RESERVE_AMBIENT_PEDS(9);

	switch (iLocal_41)
	{
		case 26:
			uLocal_60 = { -1791.5217f, -395.2781f, 159.2376f };
			volLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1789.5818f, -395.47693f, 153.04466f, 0f, 0f, -30.951954f, 70.53338f, 56.728386f, 31.996239f, "m_volTownMob Strawberry");
			break;
	
		case 76:
			uLocal_60 = { -297.8979f, 783.4763f, 117.3506f };
			aggregate = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-266.45978f, 686.25696f, 121.6327f, 0f, 0f, 29.927555f, 64.32985f, 90.860146f, 10f, "Main Town");
			aggregate2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-301.86874f, 775.7222f, 117.879974f, 0f, 0f, 111.019264f, 113.048996f, 150.22615f, 41.617626f, "Stockyard");
			volLocal_56 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTownMob Valentine Agg");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_56, aggregate);
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_56, aggregate2);
			break;
	
		case 105:
			uLocal_60 = { 1323.98f, -1305.5f, 75.625f };
			volLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1334.6862f, -1305.6152f, 86f, 0f, 0f, 65.0729f, 82.529305f, 147.40804f, 20f, "m_volTownMob Rhodes Agg");
			break;
	
		default:
			volLocal_56 = func_8(iLocal_41);
			uLocal_60 = { func_9(iLocal_41, true) };
			break;
	}

	num = 0;
	func_10(&num, 0);
	func_10(&num, 29);
	COMPANION::_0x3CAAD93FA5B9579A(volLocal_56, 2, num);
	return;
}

BOOL func_3(int iParam0) // Position - 0x25B Hash - 0x77FD5BE6 ^0xA9DC4264
{
	if (func_11() != -1)
		return false;

	if (!func_12(iParam0, 8))
		return false;

	if (!func_13(Global_35, func_8(iParam0), true, 0))
		return false;

	if (!func_5(PLAYER::PLAYER_ID(), false, false, true))
		return false;

	return true;
}

void func_4() // Position - 0x2AA Hash - 0x920ED08D ^0xA80A624D
{
	float num;
	float num2;
	int num3;
	int i;
	int j;

	switch (iLocal_42)
	{
		case 1:
			if (func_14(Global_35, uLocal_60, true) < 100f)
			{
				eptLocal_44 = func_15(0, 2, -156825994, true, false, 0f, 0f, 0f);
			
				switch (iLocal_41)
				{
					case 26:
						eptLocal_43 = joaat("a_m_m_strdeputyresident_01");
						break;
				
					case 76:
						eptLocal_43 = joaat("a_m_m_valdeputyresident_01");
						break;
				
					case 105:
						eptLocal_43 = joaat("a_m_m_rhddeputyresident_01");
						break;
				
					default:
						eptLocal_43 = joaat("a_m_m_valdeputyresident_01");
						break;
				}
			
				iLocal_42 = 2;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
	
		case 2:
			STREAMING::REQUEST_MODEL(eptLocal_44, false);
			STREAMING::REQUEST_MODEL(eptLocal_43, false);
		
			if (STREAMING::HAS_MODEL_LOADED(eptLocal_44) && STREAMING::HAS_MODEL_LOADED(eptLocal_43) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				iLocal_42 = 4;
			break;
	
		case 4:
			if (func_16())
			{
				func_17();
				func_18(&uLocal_57);
				iLocal_42 = 5;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
	
		case 5:
			if (bLocal_67)
				LAW::_0x7EF2A2FE38D74456(func_19(1), true);
		
			num = 150f;
		
			for (i = 0; i < iLocal_46; i = i + 1)
			{
				if (func_6(iLocal_46[i], 0))
				{
					num3 = num3 + 1;
					num2 = func_14(iLocal_46[i], Global_36, true);
				
					if (num2 < num)
						num = num2;
				}
			}
		
			if (num3 <= 2)
			{
				bLocal_67 = false;
				LAW::_0x7EF2A2FE38D74456(func_19(1), false);
			}
		
			if (num3 <= 0 || num >= 150f)
			{
				i = 0;
			
				for (i = 0; i < iLocal_46; i = i + 1)
				{
					if (func_6(iLocal_46[i], 0))
						func_20(iLocal_46[i]);
				}
			
				iLocal_42 = 6;
			}
			break;
	
		case 6:
			for (j = 0; j < iLocal_46; j = j + 1)
			{
				if (func_6(iLocal_46[j], 0))
					func_7(&iLocal_46[j], true, true, true);
			}
		
			LAW::_0x7EF2A2FE38D74456(func_19(1), false);
			iLocal_42 = 7;
			break;
	}

	return;
}

BOOL func_5(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x490 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_21(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return 0;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return 0;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return 0;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return 1;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return 0;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return 1;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return 1;

	return 0;
}

BOOL func_6(Ped pedParam0, int iParam1) // Position - 0x5C5 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_22(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_22(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_22(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_22(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_22(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_22(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_22(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_22(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_7(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6C4 Hash - 0xEB76F1D1 ^0xF1B7E213
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

Volume func_8(int iParam0) // Position - 0x732 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_23(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

Vector3 func_9(int iParam0, BOOL bParam1) // Position - 0x752 Hash - 0x5496E9AE ^0xF55F17AE
{
	Vector3 volumeCoords;
	var groundZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_23(iParam0))
		return volumeCoords;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
	
		if (bParam1)
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(volumeCoords, &groundZ, false))
				volumeCoords.f_2 = groundZ;
	}

	return volumeCoords;
}

void func_10(var uParam0, int iParam1) // Position - 0x7B2 Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

BOOL func_11() // Position - 0x7CC Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_12(int iParam0, BOOL bParam1) // Position - 0x7DA Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_13(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x80D Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

float func_14(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x843 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

ePedType func_15(int iParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4, float fParam5, float fParam6, float fParam7) // Position - 0x86B Hash - 0x5FAF754B ^0x127DAE42
{
	if (!func_24(iParam0))
		return 0;

	if (func_25(iParam0) == -1)
		return 0;

	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_25(iParam0), iParam1, hParam2, bParam3, bParam4, fParam5);
}

BOOL func_16() // Position - 0x8A5 Hash - 0x3F56C6E0 ^0x7D1A987D
{
	float num;

	if (!func_26(iLocal_41, &uLocal_63, eptLocal_43))
		return false;

	num = BUILTIN::VDIST2(Global_36, uLocal_63);

	if (num > 10000f)
		return false;

	if (num < 1225f)
		return false;

	if (CAM::IS_SPHERE_VISIBLE(uLocal_63, 2f) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(eptLocal_43, uLocal_63, true))
		return false;

	volLocal_66 = VOLUME::CREATE_VOLUME_CYLINDER(uLocal_63, 0f, 0f, 0f, 3f, 3f, 3f);
	func_27(volLocal_66, false, false, false, false, false);
	func_28(volLocal_66, 0);
	return true;
}

void func_17() // Position - 0x931 Hash - 0x7B0D40A0 ^0x4F6F46A2
{
	int i;
	var unk;
	Blip blip;
	int num;

	if (!PED::DOES_GROUP_EXIST(iLocal_45))
	{
		iLocal_45 = PED::CREATE_GROUP(1);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_45, 5f, 1f, 2f);
		PED::SET_GROUP_FORMATION(iLocal_45, 8);
		PED::_0x89E59DBD15E21177(iLocal_45, 0);
	}

	for (i = 0; i < iLocal_46; i = i + 1)
	{
		unk = { func_29(uLocal_63, 3f, 1f) };
	
		if (i == 0)
		{
			iLocal_46[i] = func_30(eptLocal_43, unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), true, true, 0, true, true, true, false, false, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[i], BF_CanUseVehicles, false);
			PED::SET_COMBAT_FLOAT(iLocal_46[i], 48, 8f);
		
			if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("weapon_shotgun_doublebarrel")))
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[i], joaat("weapon_shotgun_doublebarrel"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
			else
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[i], joaat("weapon_repeater_carbine"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		}
		else
		{
			iLocal_46[i] = func_30(eptLocal_44, unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), true, true, 0, true, true, true, false, false, false, false);
		
			if (func_6(iLocal_46[i], 0))
			{
				if (i % 4 == 0 && func_32(func_31()) >= 22 || func_32(func_31()) <= 4)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[i], joaat("weapon_revolver_cattleman"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[i], joaat("weapon_melee_torch"), 999, true, false, 1, false, 1056964608, 1065353216, 752097756, false, 0, false);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[i], joaat("weapon_repeater_carbine"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
				}
			}
		}
	
		if (func_6(iLocal_46[i], 0))
		{
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(iLocal_46[i], volLocal_56, false, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[i], BF_CanUseCover, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[i], BF_DisableFleeFromCombat, true);
			PED::_0x815C0074A1BC0D93(iLocal_46[i], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_46[i], joaat("rel_town_mob"));
			PED::REGISTER_TARGET(iLocal_46[i], Global_35, true);
			PED::SET_PED_ACCURACY(iLocal_46[i], 60);
			PED::SET_PED_CONFIG_FLAG(iLocal_46[i], 279, true);
		
			if (i == 0)
			{
				PED::SET_PED_AS_GROUP_LEADER(iLocal_46[i], iLocal_45, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[i], 155, true);
				COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_45);
				COMPANION::_SET_COMPANION_ACTIVITY(iLocal_45, joaat("CA_SEARCH"));
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_46[i], iLocal_45);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[i], 156, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[i], 152, true);
			}
		
			blip = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_46[i]);
			MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_TOWN_POSSE_MEMBER"));
			PED::_0x1E017404784AA6A3(iLocal_46[i], joaat("town_mob"));
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_46[i], CM_WillAdvance);
			PED::SET_PED_COMBAT_RANGE(iLocal_46[i], 1);
			PED::_SET_PED_COMBAT_BEHAVIOUR(iLocal_46[i], 2018638702);
			num = 0;
			func_33(&num, 15);
			func_33(&num, 16);
			COMPANION::_ADD_COMPANION_FLAG(iLocal_46[i], num);
		}
	}

	return;
}

void func_18(var uParam0) // Position - 0xC56 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_34(uParam0, 0f);
	return;
}

int func_19(int iParam0) // Position - 0xC65 Hash - 0x562558FC ^0x562558FC
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

void func_20(Ped pedParam0) // Position - 0xCB7 Hash - 0x1ED83FB6 ^0xA53723D3
{
	if (!func_6(Global_35, 0))
		return;

	if (!func_6(pedParam0, 0))
		return;

	TASK::TASK_SMART_FLEE_PED(pedParam0, Global_35, 500f, -1, 0, 1077936128, 0);
	func_35(pedParam0);
	func_7(&pedParam0, true, true, true);
	return;
}

int func_21(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD01 Hash - 0xC9655EC3 ^0x88C9AFE1
{
	if (Global_1935630.f_18)
		if (bParam2 || Global_1935630.f_19 > 0 || Global_1935630.f_17 > 0)
			return 1;
	else if (bParam1 && !(Global_1935630.f_15 == 1370593166))
		return 0;

	if (Global_1935630.f_20 > 0 || bParam2 && Global_1935630.f_20 > -1)
		return 1;

	if (bParam0)
		if (Global_1935630.f_13)
			if (bParam2 || Global_1935630.f_21 > 0)
				return 1;

	return 0;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0xD9F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_23(eStackSize essParam0) // Position - 0xDAE Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_24(int iParam0) // Position - 0xDC4 Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

Hash func_25(int iParam0) // Position - 0xDDA Hash - 0x8D65EDFB ^0x8D65EDFB
{
	int num;

	if (!func_24(iParam0))
		return -1;

	num = func_37(func_36());

	if (num != 1 && num != 2)
		return Global_1898147[iParam0];

	return Global_1898130[iParam0];
}

BOOL func_26(int iParam0, var uParam1, ePedType eptParam2) // Position - 0xE1D Hash - 0x4B837A5D ^0x4B837A5D
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
	
		case 76:
			unk[0 /*3*/] = { -344.5539f, 730.0873f, 116.3921f };
			unk[1 /*3*/] = { -281.1094f, 847.3516f, 118.6537f };
			unk[2 /*3*/] = { -361.3619f, 809.3384f, 114.9999f };
			unk[3 /*3*/] = { -236.5398f, 702.7105f, 112.5291f };
			break;
	
		case 105:
			unk[0 /*3*/] = { 1308.7097f, -1258.8469f, 76.3559f };
			unk[1 /*3*/] = { 1317.5148f, -1303.4414f, 75.2424f };
			unk[2 /*3*/] = { 1346.5398f, -1354.9464f, 77.4856f };
			unk[3 /*3*/] = { 1398.2721f, -1314.5696f, 76.6552f };
			break;
	
		default:
			*uParam1 = { func_9(iParam0, true) };
			return false;
	}

	*uParam1 = { unk[0 /*3*/] };
	num = 999999f;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!CAM::IS_SPHERE_VISIBLE(unk[i /*3*/], 2f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(eptParam2, unk[i /*3*/], true))
		{
			num2 = BUILTIN::VDIST2(Global_36, unk[i /*3*/]);
		
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

void func_27(Volume volParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1014 Hash - 0xFDD92D0 ^0xFC369A71
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

void func_28(Volume volParam0, int iParam1) // Position - 0x1068 Hash - 0xB2D6EBF3 ^0xC170DE6A
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

Vector3 func_29(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4) // Position - 0x10D0 Hash - 0xC59B327E ^0x28F503C3
{
	var unk;
	float endRange;

	unk = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	endRange = fParam4 / 2f;
	unk = { func_38(unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	unk.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-endRange, endRange);
	return uParam0 + unk;
}

Ped func_30(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1118 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_39(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

Hash func_31() // Position - 0x115A Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_32(Hash hParam0) // Position - 0x1166 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

void func_33(var uParam0, int iParam1) // Position - 0x1179 Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

void func_34(var uParam0, float fParam1) // Position - 0x1193 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_40() - fParam1;
	func_41(uParam0, 1);
	func_42(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_35(Ped pedParam0) // Position - 0x11B9 Hash - 0x467611EC ^0x3EE822E5
{
	Blip blipFromEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	blipFromEntity = MAP::GET_BLIP_FROM_ENTITY(pedParam0);
	func_43(&blipFromEntity);
	return;
}

eStackSize func_36() // Position - 0x11DC Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_37(eStackSize essParam0) // Position - 0x11EA Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_23(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

Vector3 func_38(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x120A Hash - 0x88200B15 ^0xE07B704A
{
	float num;

	if (fParam3 == 0f)
		return 0f, 0f, 0f;

	num = BUILTIN::VMAG(vParam0);

	if (num != 0f)
		return vParam0 * { fParam3 / num, fParam3 / num, fParam3 / num };

	return 0f, 0f, 0f;
}

void func_39(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1241 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_44(eptParam1))
		{
			func_45(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
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
			func_46(pedParam0, 0, true);
	
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
			func_47(pedParam0, false);
			flag = true;
		}
	
		func_48(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

float func_40() // Position - 0x1322 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_41(var uParam0, int iParam1) // Position - 0x1354 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_42(var uParam0, int iParam1) // Position - 0x1365 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_43(Blip* pblParam0) // Position - 0x137A Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*pblParam0))
		MAP::REMOVE_BLIP(pblParam0);

	return;
}

BOOL func_44(ePedType eptParam0) // Position - 0x1392 Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_45(Ped pedParam0, Hash hParam1) // Position - 0x17E5 Hash - 0x77FF982B ^0xF2F17B00
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_49(pedParam0, hParam1))
		{
			if (func_50(pedParam0, hParam1))
			{
				if (func_51(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_52(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

void func_46(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x188C Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_47(Ped pedParam0, BOOL bParam1) // Position - 0x18BC Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_48(Ped pedParam0, int iParam1) // Position - 0x1901 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_49(Ped pedParam0, Hash hParam1) // Position - 0x1928 Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_50(Ped pedParam0, Hash hParam1) // Position - 0x1956 Hash - 0xFC2B984E ^0xDDDE30B6
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_51(Ped pedParam0, Hash hParam1) // Position - 0x19A4 Hash - 0xFC2B984E ^0xDDDE30B6
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_49(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_52(Ped pedParam0) // Position - 0x1A12 Hash - 0xA26B2112 ^0x32D7FD2E
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

