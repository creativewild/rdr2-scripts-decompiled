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
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	BOOL bLocal_27 = 0;
	ePedType eptLocal_28 = PED_TYPE_PLAYER_0;
	Hash hLocal_29 = 0;
	Hash hLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 5;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	Vehicle veLocal_43 = 0;
	Object obLocal_44 = 0;
	var uLocal_45 = 8;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 5;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 5;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	ItemSet isLocal_126 = 0;
	int iLocal_127 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF3DE1423 ^0x697DDF79
{
	int randomIntInRange;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 1;
	iLocal_24 = joaat("world_human_pee");
	hLocal_29 = joaat("policewagon01x");
	hLocal_30 = joaat("s_campfire02_amb");
	uScriptParam_0 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2(PLAYER::PLAYER_ID(), false, false, true) && func_3() && iLocal_14 < 7 && !func_4() && !func_5())
	{
		func_6();
		BUILTIN::WAIT(0);
	}

	func_1();

	if (func_7() == 5)
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(25000, 35000);
	else if (func_7() >= 3)
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(35000, 55000);
	else
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(45000, 55000);

	Global_1934266.f_2 = randomIntInRange;
	Global_1934266.f_1 = MISC::GET_GAME_TIMER();
	return;
}

void func_1() // Position - 0xD2 Hash - 0xB5323626 ^0x62736E51
{
	int taskSequenceId;
	int i;
	int seat;

	ITEMSET::DESTROY_ITEMSET(isLocal_126);

	if (MISC::IS_INCIDENT_VALID(iLocal_127))
		MISC::DELETE_INCIDENT(iLocal_127);

	func_8(&uLocal_35, 1);
	func_8(&uLocal_36, 1);

	for (i = 0; i < iLocal_37; i = i + 1)
	{
		if (func_9(iLocal_37[i], 0))
		{
			if (i == 0)
				seat = -1;
			else
				seat = -2;
		
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_43, false, false))
				TASK::TASK_ENTER_VEHICLE(0, veLocal_43, 20000, seat, 1073741824, 1, 0);
		
			if (i == 0)
				TASK::TASK_MOVE_IN_TRAFFIC(0, -1082130432, 0, 0);
			else
				TASK::TASK_STAND_STILL(0, 5000);
		
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_37[i], taskSequenceId);
			func_10(&iLocal_37[i], true, true, true);
		}
	}

	func_11(fLocal_31, 10f, 5);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_43);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_44);
	return;
}

BOOL func_2(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A9 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_12(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

BOOL func_3() // Position - 0x2DE Hash - 0x20AA6B5F ^0x6CE9A761
{
	if (func_14(func_13(), true))
		return true;

	if (func_16(func_15(), true))
		return true;

	if (func_18(func_17()))
		return true;

	if (MAP::DOES_BLIP_EXIST(Global_1934266.f_151))
		if (func_19())
			return true;

	return false;
}

BOOL func_4() // Position - 0x32E Hash - 0x9122CBF4 ^0x9122CBF4
{
	if (func_20() == -1)
		if (func_21() || func_22())
			return true;
	else if (func_23(1, 255))
		return true;

	return false;
}

BOOL func_5() // Position - 0x365 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

void func_6() // Position - 0x375 Hash - 0x4D292EF2 ^0x4DD585B1
{
	int num;
	BOOL flag;
	int i;
	int scenario;
	int j;

	if (func_24(&uLocal_123) > 35f && iLocal_14 <= 4)
		iLocal_14 = 6;

	switch (iLocal_14)
	{
		case 1:
			func_25(&uLocal_123);
			PED::_RESERVE_AMBIENT_PEDS(5);
			isLocal_126 = ITEMSET::CREATE_ITEMSET(true);
		
			if (func_7() == 5)
				iLocal_25 = 5;
			else
				iLocal_25 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
		
			func_26();
			num = func_13();
		
			switch (num)
			{
				case 0:
					eptLocal_28 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 1:
					eptLocal_28 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 2:
					eptLocal_28 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 3:
					eptLocal_28 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 5:
					eptLocal_28 = joaat("s_m_m_fussarhenchman_01");
					break;
			
				default:
					eptLocal_28 = joaat("s_m_m_ambientlawrural_01");
					break;
			}
		
			iLocal_14 = 2;
			break;
	
		case 2:
			STREAMING::REQUEST_MODEL(eptLocal_28, false);
			STREAMING::REQUEST_MODEL(hLocal_29, false);
			STREAMING::REQUEST_MODEL(hLocal_30, false);
		
			if (STREAMING::HAS_MODEL_LOADED(eptLocal_28) && STREAMING::HAS_MODEL_LOADED(hLocal_29) && STREAMING::HAS_MODEL_LOADED(hLocal_30) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				iLocal_14 = 3;
			break;
	
		case 3:
			if (func_27(Global_36, &uLocal_15, &flag, 16, true, 45f, 25f, 100f, 180f, 0))
			{
				fLocal_31 = { uLocal_15.f_3 };
				func_28(&uLocal_36, fLocal_31, 5f, 2, 2, 0);
				func_28(&uLocal_35, fLocal_31, 7f, 1, 61, 0);
				iLocal_14 = 4;
			}
			else if (flag)
			{
				func_29(&uLocal_15, 1, false);
			}
			break;
	
		case 4:
			if (!bLocal_27)
			{
				func_30();
			}
			else
			{
				func_31();
				func_32(fLocal_31, 10f, 0, 0, 5);
				MISC::_CREATE_INCIDENT_WITH_ENTITIES(8, fLocal_31, isLocal_126, -1f, &iLocal_127);
			
				for (i = 0; i < iLocal_37; i = i + 1)
				{
					if (func_9(iLocal_37[i], 0))
					{
						if (i <= 1)
							scenario = uLocal_117[i];
						else if (func_33())
							scenario = uLocal_111[i];
						else
							scenario = uLocal_117[i];
					
						TASK::TASK_USE_SCENARIO_POINT(iLocal_37[i], scenario, 0, 0, false, true, 0, false, -1082130432, false);
					}
				}
			
				iLocal_14 = 5;
			}
			break;
	
		case 5:
			for (j = 0; j < iLocal_37; j = j + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_37[j]))
				{
					PED::SET_PED_RESET_FLAG(iLocal_37[j], 116, true);
				
					if (func_34(Global_35, iLocal_37[j], true, true) > 200f)
					{
						iLocal_14 = 6;
						return;
					}
				}
			}
			break;
	
		case 6:
			func_1();
			iLocal_14 = 7;
			break;
	}

	return;
}

int func_7() // Position - 0x5F9 Hash - 0x98FE2AD1 ^0x98FE2AD1
{
	return func_36(func_35(func_15()));
}

void func_8(int iParam0, int iParam1) // Position - 0x60D Hash - 0x3ABC36EE ^0x53B64BE1
{
	if (func_37(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

BOOL func_9(Ped pedParam0, int iParam1) // Position - 0x626 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_38(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_38(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_38(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_38(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_38(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_38(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_38(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_38(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_10(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x725 Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_11(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x793 Hash - 0xDFC8C37A ^0xB9ECCA2C
{
	var offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vector = { func_39(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };
	vector2 = { func_40(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };

	if (iParam4 == 5)
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vector, vector2, 0, 1);
	else
		PATHFIND::_0x6C3F12ECEB6D2E2A(vector, vector2, iParam4, 1);

	return;
}

BOOL func_12(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x80C Hash - 0xC9655EC3 ^0x88C9AFE1
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

int func_13() // Position - 0x8AA Hash - 0x4228A1C2 ^0xDB228237
{
	return Global_1934266.f_4;
}

BOOL func_14(int iParam0, BOOL bParam1) // Position - 0x8B8 Hash - 0x8DCD18D0 ^0x8DCD18D0
{
	if (!func_41(iParam0))
		return false;

	if (func_42(iParam0, 1) || bParam1 && func_42(iParam0, 2))
		return true;

	return false;
}

int func_15() // Position - 0x8F4 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_16(int iParam0, BOOL bParam1) // Position - 0x902 Hash - 0xA92798E ^0xA92798E
{
	if (!func_43(iParam0))
		return false;

	if (bParam1)
		if (func_44(iParam0, 8))
			return false;

	if (func_44(iParam0, true))
		return true;

	return false;
}

eStackSize func_17() // Position - 0x93E Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_18(eStackSize essParam0) // Position - 0x94C Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_45(essParam0))
		return false;

	return func_46(essParam0, 33554432);
}

BOOL func_19() // Position - 0x96D Hash - 0x10A492C3 ^0x4AFD43DC
{
	int num;

	num = func_13();

	if (!func_41(num))
		return false;

	if (_IS_NULL_VECTOR(Global_40.f_358[num /*12*/].f_1) || Global_40.f_358[num /*12*/].f_4 < 1f)
		return false;

	if (func_48(Global_35, Global_40.f_358[num /*12*/].f_1, Global_40.f_358[num /*12*/].f_4 + 10f, true, true))
		return true;

	return false;
}

BOOL func_20() // Position - 0x9E7 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_21() // Position - 0x9F5 Hash - 0x463DA432 ^0x3948CA04
{
	return func_49(Global_1935630, 4096);
}

BOOL func_22() // Position - 0xA08 Hash - 0xECD4591 ^0xDB03EFC0
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true) || UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
		return 1;

	return 0;
}

BOOL func_23(int iParam0, int iParam1) // Position - 0xA3A Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_50(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_51())
		return func_50(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_50(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

float func_24(var uParam0) // Position - 0xAAE Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_52(uParam0))
		return 0f;

	if (func_53(uParam0))
		return uParam0->f_2;

	return func_54() - uParam0->f_1;
}

void func_25(var uParam0) // Position - 0xAE0 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_55(uParam0, 0f);
	return;
}

void func_26() // Position - 0xAEF Hash - 0xD089AF39 ^0xAC1AC104
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		uLocal_78[i /*4*/] = iLocal_24;
		uLocal_45[i /*4*/] = iLocal_24;
	}

	uLocal_78[0 /*4*/] = joaat("world_human_smoke");
	uLocal_78[0 /*4*/].f_1 = { 1.5f, 0f, 0f };
	uLocal_78[1 /*4*/] = joaat("world_human_lean_back_wall");
	uLocal_78[1 /*4*/].f_1 = { -1.35f, 0f, 0f };
	uLocal_78[2 /*4*/] = joaat("world_human_stand_waiting");
	uLocal_78[2 /*4*/].f_1 = { 1f, -2.5f, 0f };
	uLocal_78[3 /*4*/] = joaat("world_human_stand_waiting");
	uLocal_78[3 /*4*/].f_1 = { 1f, 6f, 0f };
	uLocal_78[4 /*4*/] = joaat("world_human_write_notebook");
	uLocal_78[4 /*4*/].f_1 = { 2f, -2.5f, 0f };
	uLocal_78[5 /*4*/] = joaat("world_human_badass");
	uLocal_78[5 /*4*/].f_1 = { 2f, 2.5f, 0f };
	uLocal_78[6 /*4*/] = joaat("world_human_guard_scout");
	uLocal_78[6 /*4*/].f_1 = { -2f, 2.5f, 0f };
	uLocal_78[7 /*4*/] = joaat("world_human_smoke");
	uLocal_78[7 /*4*/].f_1 = { -2f, -2.5f, 0f };
	uLocal_45[0 /*4*/] = joaat("world_human_smoke");
	uLocal_45[1 /*4*/] = joaat("WORLD_CAMP_FIRE_COOKING");
	uLocal_45[2 /*4*/] = joaat("world_human_fire_tend_kneel");
	uLocal_45[3 /*4*/] = joaat("world_human_stand_waiting");
	uLocal_45[4 /*4*/] = joaat("world_human_smoke_nervous_stressed");
	uLocal_45[5 /*4*/] = joaat("world_camp_fire_sit_ground");
	uLocal_45[6 /*4*/] = joaat("world_human_guard_scout");
	uLocal_45[7 /*4*/] = joaat("world_human_badass");
	return;
}

BOOL func_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, float fParam7, float fParam8, float fParam9, float fParam10, int iParam11) // Position - 0xC3E Hash - 0xC31BF175 ^0x915D2C1C
{
	int num;

	switch (*uParam3)
	{
		case 0:
			if (uParam3->f_2 > 4)
			{
				*uParam4 = 1;
				return false;
			}
		
			uParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_56(&(uParam3->f_1), uParam3->f_2, uParam0, iParam5, fParam7, fParam8, fParam9, fParam10, iParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_57(&(uParam3->f_1), iParam5);
			
				if (!_IS_NULL_VECTOR(uParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_58(uParam3->f_6));
			
				TASK::_0x2B8AF29A78024BD3(uParam3->f_1);
			}
		
			*uParam3 = 3;
			break;
	
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
				num = 4;
			else
				num = TASK::_0x0365000D8BF86531(&(uParam3->f_1));
		
			switch (num)
			{
				case 3:
					uParam3->f_3 = { TASK::_0x865732725536EE39(&(uParam3->f_1)) };
					*uParam3 = 4;
				
					if (!bParam6)
						return true;
					break;
			
				case 4:
					if (bParam6 && uParam3->f_2 < 4)
					{
						uParam3->f_2 = uParam3->f_2 + 1;
						*uParam3 = 0;
					}
					else
					{
						*uParam4 = 1;
					}
					break;
			}
			break;
	
		case 4:
			return true;
	}

	return false;
}

void func_28(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0xD5F Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_37(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_37(iParam0))
		{
		}
	}

	return;
}

void func_29(var uParam0, int iParam1, BOOL bParam2) // Position - 0xD93 Hash - 0xDC7EB85A ^0x8E2A3227
{
	uParam0->f_2 = 0;

	if (!bParam2)
		uParam0->f_6 = { 0f, 0f, 0f };

	if (iParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));

	*uParam0 = 0;
	return;
}

void func_30() // Position - 0xDCE Hash - 0xFD15C832 ^0x5FE2E71D
{
	float num;

	if (iLocal_26 < iLocal_25 / 2)
		num = (fLocal_31 - 4f) + (float)iLocal_26;
	else
		num = (fLocal_31 + 4f) - (float)iLocal_26;

	num.f_1 = fLocal_31.f_1 + (float)MISC::GET_RANDOM_INT_IN_RANGE(-3, 3);
	func_59(&num, 50, 10, false);
	iLocal_37[iLocal_26] = func_60(eptLocal_28, num, fLocal_34 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 60f), true, true, 0, true, true, true, false, false, false, false);
	LAW::_SET_PED_LAW_BEHAVIOUR(iLocal_37[iLocal_26], 2);
	LAW::_SET_PED_LAW_BEHAVIOUR(iLocal_37[iLocal_26], 16384);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_37[iLocal_26], BF_CanBust, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_37[iLocal_26], 188, true);
	func_61(iLocal_37[iLocal_26], isLocal_126);
	iLocal_26 = iLocal_26 + 1;

	if (iLocal_26 >= iLocal_25)
	{
		iLocal_26 = 0;
		bLocal_27 = true;
	}

	return;
}

void func_31() // Position - 0xE8F Hash - 0x2D336998 ^0x48D4BC1B
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords;
	float heading;
	Hash scenarioHash;
	int i;
	var unk8;
	int j;
	float num;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(fLocal_31, fLocal_34, 2f, 0f, 0f) };
	func_59(&offsetFromCoordAndHeadingInWorldCoords, 50, 10, false);
	veLocal_43 = VEHICLE::CREATE_VEHICLE(hLocal_29, offsetFromCoordAndHeadingInWorldCoords, fLocal_34 + MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f), true, true, false, false);

	for (i = 0; i < iLocal_25; i = i + 1)
	{
		scenarioHash = { func_62(&uLocal_78) };
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_43, scenarioHash.f_1) };
		func_59(&offsetFromEntityInWorldCoords, 50, 10, false);
		heading = func_63(offsetFromCoordAndHeadingInWorldCoords, offsetFromEntityInWorldCoords);
		uLocal_117[i] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, offsetFromEntityInWorldCoords, heading, 0, 0, false);
	}

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(fLocal_31, fLocal_34, -3f, -3f, 0f) };
	func_59(&offsetFromCoordAndHeadingInWorldCoords, 50, 10, false);
	obLocal_44 = OBJECT::CREATE_OBJECT(hLocal_30, offsetFromCoordAndHeadingInWorldCoords, true, true, false, false, true);

	for (j = 0; j < iLocal_25; j = j + 1)
	{
		scenarioHash = { func_62(&uLocal_45) };
		num = 1.5f;
		unk8 = { func_64((360f / (float)iLocal_25) * (float)j) };
		offsetFromEntityInWorldCoords = { offsetFromCoordAndHeadingInWorldCoords + (unk8 * { num, num, num }) };
		heading = func_63(offsetFromEntityInWorldCoords, offsetFromCoordAndHeadingInWorldCoords);
		func_59(&offsetFromEntityInWorldCoords, 50, 10, false);
		uLocal_111[j] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, offsetFromEntityInWorldCoords, heading, 0, 0, false);
	}

	return;
}

void func_32(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0xFDC Hash - 0xFCEF2B9E ^0xD2D1B768
{
	var offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vector = { func_39(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };
	vector2 = { func_40(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };

	if (iParam4 == 1)
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vector, vector2, iParam5, 1);
	else if (iParam6 == 5)
		PATHFIND::SET_ROADS_IN_AREA(vector, vector2, iParam4, 1, iParam5);
	else
		PATHFIND::_0xAFE2AE66F6251C66(vector, vector2, iParam6, 1);

	return;
}

BOOL func_33() // Position - 0x1070 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

float func_34(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1091 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false), bParam2);
}

int func_35(int iParam0) // Position - 0x10D9 Hash - 0xA08D7C4E ^0xA08D7C4E
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

int func_36(int iParam0) // Position - 0x1194 Hash - 0x5FACFC02 ^0xC65488A8
{
	if (!func_41(iParam0))
		return 0;

	if (func_42(iParam0, 2))
		return 5;

	if (func_65(iParam0) > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
		return func_66(func_65(iParam0));

	return 0;
}

BOOL func_37(int iParam0) // Position - 0x11E0 Hash - 0x5499D461 ^0x5499D461
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0x11F8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Vector3 func_39(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6) // Position - 0x1207 Hash - 0x4E0C144A ^0xA773B6E0
{
	float num;

	if (fParam0 < fParam3)
		num = fParam0 - fParam6;
	else
		num = fParam3 - fParam6;

	if (fParam0.f_1 < fParam3.f_1)
		num.f_1 = fParam0.f_1 - fParam6;
	else
		num.f_1 = fParam3.f_1 - fParam6;

	if (fParam0.f_2 < fParam3.f_2)
		num.f_2 = fParam0.f_2 - fParam6;
	else
		num.f_2 = fParam3.f_2 - fParam6;

	return num;
}

Vector3 func_40(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6) // Position - 0x1276 Hash - 0xE12250AF ^0x6EB97E6A
{
	float num;

	if (fParam0 > fParam3)
		num = fParam0 + fParam6;
	else
		num = fParam3 + fParam6;

	if (fParam0.f_1 > fParam3.f_1)
		num.f_1 = fParam0.f_1 + fParam6;
	else
		num.f_1 = fParam3.f_1 + fParam6;

	if (fParam0.f_2 > fParam3.f_2)
		num.f_2 = fParam0.f_2 + fParam6;
	else
		num.f_2 = fParam3.f_2 + fParam6;

	return num;
}

BOOL func_41(int iParam0) // Position - 0x12E5 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x12FA Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_41(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_43(int iParam0) // Position - 0x1342 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_44(int iParam0, BOOL bParam1) // Position - 0x1358 Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_43(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

BOOL func_45(eStackSize essParam0) // Position - 0x139C Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_46(eStackSize essParam0, BOOL bParam1) // Position - 0x13B2 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x13E5 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_48(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x140F Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_67(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x146A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_50(var uParam0, int iParam1, int iParam2) // Position - 0x1479 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_51() // Position - 0x14B0 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

BOOL func_52(var uParam0) // Position - 0x14BE Hash - 0x5001E582 ^0x5001E582
{
	return func_68(*uParam0, 1);
}

BOOL func_53(var uParam0) // Position - 0x14CE Hash - 0x39705408 ^0x39705408
{
	return func_68(*uParam0, 2);
}

float func_54() // Position - 0x14DE Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_55(var uParam0, float fParam1) // Position - 0x1510 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_54() - fParam1;
	func_69(uParam0, 1);
	func_70(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_56(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10) // Position - 0x1536 Hash - 0xF3743088 ^0xD7A675F3
{
	if (!_IS_NULL_VECTOR(uParam2))
		TASK::_0x2064B33F6E6B92D4(*uParam0, uParam2);

	TASK::_0x9B6A58FDB0024F12(*uParam0, fParam7);

	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
	
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
		
			if (iParam10 != 0f)
				TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	}

	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}

	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 16384);
			break;
	}

	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}

	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}

	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
		
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
		
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
		
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
		
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, (80f - 40f) / 2f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
		
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
		
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
		
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
		
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
		
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
		
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
		
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(50f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(75f, 95f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_71(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_71(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_71(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
				
					if (iParam5 != 19)
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					else
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}

	return;
}

void func_57(var uParam0, int iParam1) // Position - 0x1EF2 Hash - 0x8FE085B4 ^0xC2CC5B51
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
	
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
	
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
	
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
	
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
	
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
			[[fallthrough]];
	
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
	
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}

	return;
}

Vector3 func_58(float fParam0, var uParam1, var uParam2) // Position - 0x2627 Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

int func_59(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2666 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_72(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

Ped func_60(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x275D Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_73(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_61(Entity eParam0, ItemSet isParam1) // Position - 0x279F Hash - 0x955A01D6 ^0x57994D09
{
	if (!ITEMSET::IS_ITEMSET_VALID(isParam1))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
		if (!ITEMSET::IS_IN_ITEMSET(eParam0, isParam1))
			ITEMSET::ADD_TO_ITEMSET(eParam0, isParam1);

	return;
}

struct<4> func_62(var uParam0) // Position - 0x27D2 Hash - 0xA6197F4B ^0x7D9B5651
{
	var unk;
	int randomIntInRange;
	int i;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0->[randomIntInRange /*4*/] != iLocal_24)
		{
			unk = { uParam0->[randomIntInRange /*4*/] };
			uParam0->[randomIntInRange /*4*/] = iLocal_24;
			break;
		}
	
		randomIntInRange = randomIntInRange + 1;
	
		if (randomIntInRange >= 8)
			randomIntInRange = 0;
	}

	return unk;
}

float func_63(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x282C Hash - 0x34651BCB ^0x51745601
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

Vector3 func_64(float fParam0) // Position - 0x2846 Hash - 0x22303A60 ^0x2A964B45
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Hash func_65(int iParam0) // Position - 0x285C Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_41(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_66(Hash hParam0) // Position - 0x2896 Hash - 0xD38CDAEA ^0x766CC7B5
{
	int i;

	for (i = 5; i >= 1; i = i + -1)
	{
		if (hParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(i))
			return i;
	}

	return 0;
}

float func_67(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x28C1 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x28DF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_69(var uParam0, int iParam1) // Position - 0x28EE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_70(var uParam0, int iParam1) // Position - 0x28FF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_71(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x2914 Hash - 0x3A11F625 ^0x3A11F625
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

BOOL func_72(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x2939 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_73(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2962 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_74(eptParam1))
		{
			func_75(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_76(pedParam0, 0, true);
	
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
			func_77(pedParam0, false);
			flag = true;
		}
	
		func_78(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_74(ePedType eptParam0) // Position - 0x2A43 Hash - 0x5000025C ^0x5000025C
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

void func_75(Ped pedParam0, Hash hParam1) // Position - 0x2E96 Hash - 0x6550EB7D ^0xA447AF75
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_79(pedParam0, hParam1))
		{
			if (func_80(pedParam0, hParam1))
			{
				if (func_81(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_82(pedParam0);
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

void func_76(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x2F3C Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_77(Ped pedParam0, BOOL bParam1) // Position - 0x2F6C Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_78(Ped pedParam0, int iParam1) // Position - 0x2FB1 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_79(Ped pedParam0, Hash hParam1) // Position - 0x2FD8 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_80(Ped pedParam0, Hash hParam1) // Position - 0x3006 Hash - 0x6BF0A137 ^0x1EC73650
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

BOOL func_81(Ped pedParam0, Hash hParam1) // Position - 0x3053 Hash - 0x6BF0A137 ^0x1EC73650
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_79(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_82(Ped pedParam0) // Position - 0x30BF Hash - 0xA371E61 ^0x916A75BC
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

