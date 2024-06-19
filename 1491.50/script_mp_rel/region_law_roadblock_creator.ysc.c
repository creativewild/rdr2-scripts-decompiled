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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	BOOL bLocal_29 = 0;
	ePedType eptLocal_30 = PED_TYPE_PLAYER_0;
	Hash hLocal_31 = 0;
	Hash hLocal_32 = 0;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 5;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	Vehicle veLocal_45 = 0;
	Object obLocal_46 = 0;
	var uLocal_47 = 8;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
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
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 5;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 5;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	ItemSet isLocal_128 = 0;
	int iLocal_129 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF3DE1423 ^0x697DDF79
{
	int randomIntInRange;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_16 = 1;
	iLocal_26 = joaat("world_human_pee");
	hLocal_31 = joaat("policewagon01x");
	hLocal_32 = joaat("s_campfire02_amb");
	uScriptParam_0 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2(PLAYER::PLAYER_ID(), false, false, true) && func_3() && iLocal_16 < 7 && !func_4() && !func_5())
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

	Global_1939102.f_2 = randomIntInRange;
	Global_1939102.f_1 = MISC::GET_GAME_TIMER();
	return;
}

void func_1() // Position - 0xD2 Hash - 0xB5323626 ^0x62736E51
{
	int taskSequenceId;
	int i;
	int seat;

	ITEMSET::DESTROY_ITEMSET(isLocal_128);

	if (MISC::IS_INCIDENT_VALID(iLocal_129))
		MISC::DELETE_INCIDENT(iLocal_129);

	func_8(&uLocal_37, 1);
	func_8(&uLocal_38, 1);

	for (i = 0; i < iLocal_39; i = i + 1)
	{
		if (func_9(iLocal_39[i], 0))
		{
			if (i == 0)
				seat = -1;
			else
				seat = -2;
		
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_45, false, false))
				TASK::TASK_ENTER_VEHICLE(0, veLocal_45, 20000, seat, 1073741824, 1, 0);
		
			if (i == 0)
				TASK::TASK_MOVE_IN_TRAFFIC(0, -1082130432, 0, 0);
			else
				TASK::TASK_STAND_STILL(0, 5000);
		
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_39[i], taskSequenceId);
			func_10(&iLocal_39[i], true, true, true);
		}
	}

	func_11(fLocal_33, 10f, 5);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_45);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_46);
	return;
}

BOOL func_2(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A9 Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_12(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
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

BOOL func_3() // Position - 0x2DE Hash - 0x20AA6B5F ^0x27733C53
{
	if (func_14(func_13(), true))
		return true;

	if (func_16(func_15(), true))
		return true;

	if (func_18(func_17()))
		return true;

	if (MAP::DOES_BLIP_EXIST(Global_1939102.f_148))
		if (func_19())
			return true;

	return false;
}

BOOL func_4() // Position - 0x32E Hash - 0x512CD18B ^0x512CD18B
{
	return func_20(1, 255);
}

BOOL func_5() // Position - 0x33D Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1893611 & 2 != 0;
}

void func_6() // Position - 0x34D Hash - 0x4D292EF2 ^0x4DD585B1
{
	int num;
	BOOL flag;
	int i;
	int scenario;
	int j;

	if (func_21(&uLocal_125) > 35f && iLocal_16 <= 4)
		iLocal_16 = 6;

	switch (iLocal_16)
	{
		case 1:
			func_22(&uLocal_125);
			PED::_RESERVE_AMBIENT_PEDS(5);
			isLocal_128 = ITEMSET::CREATE_ITEMSET(true);
		
			if (func_7() == 5)
				iLocal_27 = 5;
			else
				iLocal_27 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
		
			func_23();
			num = func_13();
		
			switch (num)
			{
				case 0:
					eptLocal_30 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 1:
					eptLocal_30 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 2:
					eptLocal_30 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 3:
					eptLocal_30 = joaat("s_m_m_ambientlawrural_01");
					break;
			
				case 5:
					eptLocal_30 = joaat("s_m_m_fussarhenchman_01");
					break;
			
				default:
					eptLocal_30 = joaat("s_m_m_ambientlawrural_01");
					break;
			}
		
			iLocal_16 = 2;
			break;
	
		case 2:
			STREAMING::REQUEST_MODEL(eptLocal_30, false);
			STREAMING::REQUEST_MODEL(hLocal_31, false);
			STREAMING::REQUEST_MODEL(hLocal_32, false);
		
			if (STREAMING::HAS_MODEL_LOADED(eptLocal_30) && STREAMING::HAS_MODEL_LOADED(hLocal_31) && STREAMING::HAS_MODEL_LOADED(hLocal_32) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				iLocal_16 = 3;
			break;
	
		case 3:
			if (func_24(Global_34, &uLocal_17, &flag, 16, true, 45f, 25f, 100f, 180f, 0))
			{
				fLocal_33 = { uLocal_17.f_3 };
				func_25(&uLocal_38, fLocal_33, 5f, 2, 2, 0);
				func_25(&uLocal_37, fLocal_33, 7f, 1, 61, 0);
				iLocal_16 = 4;
			}
			else if (flag)
			{
				func_26(&uLocal_17, 1, false);
			}
			break;
	
		case 4:
			if (!bLocal_29)
			{
				func_27();
			}
			else
			{
				func_28();
				func_29(fLocal_33, 10f, 0, 0, 5, 1);
				MISC::_CREATE_INCIDENT_WITH_ENTITIES(8, fLocal_33, isLocal_128, -1f, &iLocal_129);
			
				for (i = 0; i < iLocal_39; i = i + 1)
				{
					if (func_9(iLocal_39[i], 0))
					{
						if (i <= 1)
							scenario = uLocal_119[i];
						else if (func_30())
							scenario = uLocal_113[i];
						else
							scenario = uLocal_119[i];
					
						TASK::TASK_USE_SCENARIO_POINT(iLocal_39[i], scenario, 0, 0, false, true, 0, false, -1082130432, false);
					}
				}
			
				iLocal_16 = 5;
			}
			break;
	
		case 5:
			for (j = 0; j < iLocal_39; j = j + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_39[j]))
				{
					PED::SET_PED_RESET_FLAG(iLocal_39[j], 116, true);
				
					if (func_31(Global_33, iLocal_39[j], true, true) > 200f)
					{
						iLocal_16 = 6;
						return;
					}
				}
			}
			break;
	
		case 6:
			func_1();
			iLocal_16 = 7;
			break;
	}

	return;
}

int func_7() // Position - 0x5D2 Hash - 0x98FE2AD1 ^0x98FE2AD1
{
	return func_33(func_32(func_15()));
}

void func_8(int iParam0, int iParam1) // Position - 0x5E6 Hash - 0x3ABC36EE ^0x53B64BE1
{
	if (func_34(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

BOOL func_9(Ped pedParam0, int iParam1) // Position - 0x5FF Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_35(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_35(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_35(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_35(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_35(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_35(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_35(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_35(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_10(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6FE Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_11(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x76C Hash - 0xDFC8C37A ^0xB9ECCA2C
{
	var offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vector = { func_36(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };
	vector2 = { func_37(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };

	if (iParam4 == 5)
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vector, vector2, 0, 1);
	else
		PATHFIND::_0x6C3F12ECEB6D2E2A(vector, vector2, iParam4, 1);

	return;
}

BOOL func_12(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7E5 Hash - 0xC9655EC3 ^0xE7BDB885
{
	if (Global_1940199.f_12)
		if (bParam2 || Global_1940199.f_13 > 0 || Global_1940199.f_11 > 0)
			return 1;
	else if (bParam1 && !(Global_1940199.f_9 == 1370593166))
		return 0;

	if (Global_1940199.f_14 > 0 || bParam2 && Global_1940199.f_14 > -1)
		return 1;

	if (bParam0)
		if (Global_1940199.f_7)
			if (bParam2 || Global_1940199.f_15 > 0)
				return 1;

	return 0;
}

int func_13() // Position - 0x883 Hash - 0x4228A1C2 ^0xDB228237
{
	return Global_1939102.f_4;
}

BOOL func_14(int iParam0, BOOL bParam1) // Position - 0x891 Hash - 0x8DCD18D0 ^0x8DCD18D0
{
	if (!func_38(iParam0))
		return false;

	if (func_39(iParam0, 1) || bParam1 && func_39(iParam0, 2))
		return true;

	return false;
}

int func_15() // Position - 0x8CD Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

BOOL func_16(int iParam0, BOOL bParam1) // Position - 0x8DB Hash - 0xA92798E ^0xA92798E
{
	if (!func_40(iParam0))
		return false;

	if (bParam1)
		if (func_41(iParam0, 8))
			return false;

	if (func_41(iParam0, true))
		return true;

	return false;
}

int func_17() // Position - 0x917 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_18(int iParam0) // Position - 0x925 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_42(iParam0))
		return false;

	return func_43(iParam0, 33554432);
}

BOOL func_19() // Position - 0x946 Hash - 0xEFA9E5FD ^0x13C1CC5F
{
	int num;

	num = func_13();

	if (!func_38(num))
		return false;

	if (_IS_NULL_VECTOR(Global_38.f_198[num /*12*/].f_1) || Global_38.f_198[num /*12*/].f_4 < 1f)
		return false;

	if (func_45(Global_33, Global_38.f_198[num /*12*/].f_1, Global_38.f_198[num /*12*/].f_4 + 10f, true, true))
		return true;

	return false;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x9BC Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_46(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_47())
		return func_46(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_46(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

float func_21(var uParam0) // Position - 0xA30 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_48(uParam0))
		return 0f;

	if (func_49(uParam0))
		return uParam0->f_2;

	return func_50() - uParam0->f_1;
}

void func_22(var uParam0) // Position - 0xA62 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_51(uParam0, 0f);
	return;
}

void func_23() // Position - 0xA71 Hash - 0xD089AF39 ^0xAC1AC104
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		uLocal_80[i /*4*/] = iLocal_26;
		uLocal_47[i /*4*/] = iLocal_26;
	}

	uLocal_80[0 /*4*/] = joaat("world_human_smoke");
	uLocal_80[0 /*4*/].f_1 = { 1.5f, 0f, 0f };
	uLocal_80[1 /*4*/] = joaat("world_human_lean_back_wall");
	uLocal_80[1 /*4*/].f_1 = { -1.35f, 0f, 0f };
	uLocal_80[2 /*4*/] = joaat("world_human_stand_waiting");
	uLocal_80[2 /*4*/].f_1 = { 1f, -2.5f, 0f };
	uLocal_80[3 /*4*/] = joaat("world_human_stand_waiting");
	uLocal_80[3 /*4*/].f_1 = { 1f, 6f, 0f };
	uLocal_80[4 /*4*/] = joaat("world_human_write_notebook");
	uLocal_80[4 /*4*/].f_1 = { 2f, -2.5f, 0f };
	uLocal_80[5 /*4*/] = joaat("world_human_badass");
	uLocal_80[5 /*4*/].f_1 = { 2f, 2.5f, 0f };
	uLocal_80[6 /*4*/] = joaat("world_human_guard_scout");
	uLocal_80[6 /*4*/].f_1 = { -2f, 2.5f, 0f };
	uLocal_80[7 /*4*/] = joaat("world_human_smoke");
	uLocal_80[7 /*4*/].f_1 = { -2f, -2.5f, 0f };
	uLocal_47[0 /*4*/] = joaat("world_human_smoke");
	uLocal_47[1 /*4*/] = joaat("WORLD_CAMP_FIRE_COOKING");
	uLocal_47[2 /*4*/] = joaat("world_human_fire_tend_kneel");
	uLocal_47[3 /*4*/] = joaat("world_human_stand_waiting");
	uLocal_47[4 /*4*/] = joaat("world_human_smoke_nervous_stressed");
	uLocal_47[5 /*4*/] = joaat("world_camp_fire_sit_ground");
	uLocal_47[6 /*4*/] = joaat("world_human_guard_scout");
	uLocal_47[7 /*4*/] = joaat("world_human_badass");
	return;
}

BOOL func_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, float fParam7, float fParam8, float fParam9, float fParam10, int iParam11) // Position - 0xBC0 Hash - 0xC31BF175 ^0x915D2C1C
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
			func_52(&(uParam3->f_1), uParam3->f_2, uParam0, iParam5, fParam7, fParam8, fParam9, fParam10, iParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_53(&(uParam3->f_1), iParam5, uParam0);
			
				if (!_IS_NULL_VECTOR(uParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_54(uParam3->f_6));
			
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

void func_25(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0xCE5 Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_34(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_34(iParam0))
		{
		}
	}

	return;
}

void func_26(var uParam0, int iParam1, BOOL bParam2) // Position - 0xD19 Hash - 0xDC7EB85A ^0x8E2A3227
{
	uParam0->f_2 = 0;

	if (!bParam2)
		uParam0->f_6 = { 0f, 0f, 0f };

	if (iParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));

	*uParam0 = 0;
	return;
}

void func_27() // Position - 0xD54 Hash - 0xFD15C832 ^0x5FE2E71D
{
	float num;

	if (iLocal_28 < iLocal_27 / 2)
		num = (fLocal_33 - 4f) + (float)iLocal_28;
	else
		num = (fLocal_33 + 4f) - (float)iLocal_28;

	num.f_1 = fLocal_33.f_1 + (float)MISC::GET_RANDOM_INT_IN_RANGE(-3, 3);
	func_55(&num, 50, 10, false, false);
	iLocal_39[iLocal_28] = func_56(eptLocal_30, num, fLocal_36 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 60f), true, true, 0, true, true, true, false, false);
	LAW::_SET_PED_LAW_BEHAVIOUR(iLocal_39[iLocal_28], 2);
	LAW::_SET_PED_LAW_BEHAVIOUR(iLocal_39[iLocal_28], 16384);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_39[iLocal_28], BF_CanBust, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_39[iLocal_28], 188, true);
	func_57(iLocal_39[iLocal_28], isLocal_128);
	iLocal_28 = iLocal_28 + 1;

	if (iLocal_28 >= iLocal_27)
	{
		iLocal_28 = 0;
		bLocal_29 = true;
	}

	return;
}

void func_28() // Position - 0xE14 Hash - 0xE0389DA ^0x7FBECB1E
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords;
	float heading;
	Hash scenarioHash;
	int i;
	var unk8;
	int j;
	float num;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(fLocal_33, fLocal_36, 2f, 0f, 0f) };
	func_55(&offsetFromCoordAndHeadingInWorldCoords, 50, 10, false, false);
	veLocal_45 = VEHICLE::CREATE_VEHICLE(hLocal_31, offsetFromCoordAndHeadingInWorldCoords, fLocal_36 + MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f), true, true, false, false);

	for (i = 0; i < iLocal_27; i = i + 1)
	{
		scenarioHash = { func_58(&uLocal_80) };
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_45, scenarioHash.f_1) };
		func_55(&offsetFromEntityInWorldCoords, 50, 10, false, false);
		heading = func_59(offsetFromCoordAndHeadingInWorldCoords, offsetFromEntityInWorldCoords);
		uLocal_119[i] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, offsetFromEntityInWorldCoords, heading, 0, 0, false);
	}

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(fLocal_33, fLocal_36, -3f, -3f, 0f) };
	func_55(&offsetFromCoordAndHeadingInWorldCoords, 50, 10, false, false);
	obLocal_46 = OBJECT::CREATE_OBJECT(hLocal_32, offsetFromCoordAndHeadingInWorldCoords, true, true, false, false, true);

	for (j = 0; j < iLocal_27; j = j + 1)
	{
		scenarioHash = { func_58(&uLocal_47) };
		num = 1.5f;
		unk8 = { func_60((360f / (float)iLocal_27) * (float)j) };
		offsetFromEntityInWorldCoords = { offsetFromCoordAndHeadingInWorldCoords + (unk8 * { num, num, num }) };
		heading = func_59(offsetFromEntityInWorldCoords, offsetFromCoordAndHeadingInWorldCoords);
		func_55(&offsetFromEntityInWorldCoords, 50, 10, false, false);
		uLocal_113[j] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, offsetFromEntityInWorldCoords, heading, 0, 0, false);
	}

	return;
}

void func_29(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xF65 Hash - 0x8511AC15 ^0xF0BD55F5
{
	var offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vector = { func_36(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };
	vector2 = { func_37(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };

	if (iParam4 == 1)
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vector, vector2, iParam5, 1);
	else if (iParam6 == 5)
		PATHFIND::SET_ROADS_IN_AREA(vector, vector2, iParam4, iParam7, iParam5);
	else
		PATHFIND::_0xAFE2AE66F6251C66(vector, vector2, iParam6, iParam7);

	return;
}

BOOL func_30() // Position - 0xFFB Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

float func_31(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3) // Position - 0x101C Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false), bParam2);
}

int func_32(int iParam0) // Position - 0x1064 Hash - 0xA08D7C4E ^0xA08D7C4E
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

int func_33(int iParam0) // Position - 0x111F Hash - 0x5FACFC02 ^0xC65488A8
{
	if (!func_38(iParam0))
		return 0;

	if (func_39(iParam0, 2))
		return 5;

	if (func_61(iParam0) > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
		return func_62(func_61(iParam0));

	return 0;
}

BOOL func_34(int iParam0) // Position - 0x116B Hash - 0x5499D461 ^0x5499D461
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

BOOL func_35(int iParam0, int iParam1) // Position - 0x1183 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Vector3 func_36(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6) // Position - 0x1192 Hash - 0x4E0C144A ^0xA773B6E0
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

Vector3 func_37(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6) // Position - 0x1201 Hash - 0xE12250AF ^0x6EB97E6A
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

BOOL func_38(int iParam0) // Position - 0x1270 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x1285 Hash - 0x9AD134EA ^0x3BFBD1FE
{
	if (!func_38(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_40(int iParam0) // Position - 0x12CA Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_41(int iParam0, BOOL bParam1) // Position - 0x12E0 Hash - 0x420CBA68 ^0x9F9619A9
{
	if (!func_40(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_42(int iParam0) // Position - 0x1322 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_43(int iParam0, BOOL bParam1) // Position - 0x1338 Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1369 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_45(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1393 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_63(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_46(Any* panParam0, int iParam1, int iParam2) // Position - 0x13EE Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_47() // Position - 0x1425 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_48(var uParam0) // Position - 0x1434 Hash - 0x5001E582 ^0x5001E582
{
	return func_64(*uParam0, 1);
}

BOOL func_49(var uParam0) // Position - 0x1444 Hash - 0x39705408 ^0x39705408
{
	return func_64(*uParam0, 2);
}

float func_50() // Position - 0x1454 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_51(var uParam0, float fParam1) // Position - 0x1486 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_50() - fParam1;
	func_65(uParam0, 1);
	func_66(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_52(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10) // Position - 0x14AC Hash - 0xF3743088 ^0xD7A675F3
{
	int num;
	int num2;

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
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
	
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
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
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}

	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_67(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 46:
				num = func_68(uParam2, true);
				num2 = func_69(uParam2);
			
				if (num2 == 15 || num2 == 14 || num2 == 13 || num2 == 9 && num == -1 || num2 == 4 && num == -1)
				{
					TASK::_0x2EB977293923C723(*uParam0, func_67(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_67(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_67(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(80f, 150f, 17.5f, iParam1));
				}
			
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
		
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_67(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_67(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_67(40f, 100f, 10f, iParam1));
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

void func_53(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x22BA Hash - 0xF7709AA0 ^0xA0B87357
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
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	
		case 46:
		case 47:
		case 48:
			if (func_68(uParam2, true) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
		
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
	
		case 52:
			break;
	
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
	}

	return;
}

Vector3 func_54(float fParam0, var uParam1, var uParam2) // Position - 0x2A7A Hash - 0xFB6A39D2 ^0x80C9C759
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

int func_55(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2AB9 Hash - 0x19DF3458 ^0x19DF3458
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_70(*uParam0, 0f, 0f, 0f))
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

	if (bParam4)
		vector = { *uParam0 };

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

Ped func_56(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x2BBD Hash - 0xA67C0C52 ^0xA10AD291
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_71(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_57(Entity eParam0, ItemSet isParam1) // Position - 0x2BFD Hash - 0x955A01D6 ^0x57994D09
{
	if (!ITEMSET::IS_ITEMSET_VALID(isParam1))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
		if (!ITEMSET::IS_IN_ITEMSET(eParam0, isParam1))
			ITEMSET::ADD_TO_ITEMSET(eParam0, isParam1);

	return;
}

struct<4> func_58(var uParam0) // Position - 0x2C30 Hash - 0xA6197F4B ^0x7D9B5651
{
	var unk;
	int randomIntInRange;
	int i;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0->[randomIntInRange /*4*/] != iLocal_26)
		{
			unk = { uParam0->[randomIntInRange /*4*/] };
			uParam0->[randomIntInRange /*4*/] = iLocal_26;
			break;
		}
	
		randomIntInRange = randomIntInRange + 1;
	
		if (randomIntInRange >= 8)
			randomIntInRange = 0;
	}

	return unk;
}

float func_59(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x2C8A Hash - 0x34651BCB ^0x51745601
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

Vector3 func_60(float fParam0) // Position - 0x2CA4 Hash - 0x22303A60 ^0x2A964B45
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

int func_61(int iParam0) // Position - 0x2CBA Hash - 0xDE3AB7BF ^0xBF88E2D7
{
	int i;
	var gamerHandle;
	int bountyData;

	if (!func_38(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_72(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_62(int iParam0) // Position - 0x2D28 Hash - 0xD38CDAEA ^0x766CC7B5
{
	int i;

	for (i = 5; i >= 1; i = i + -1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(i))
			return i;
	}

	return 0;
}

float func_63(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2D53 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_64(int iParam0, int iParam1) // Position - 0x2D71 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_65(var uParam0, int iParam1) // Position - 0x2D80 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_66(var uParam0, int iParam1) // Position - 0x2D91 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_67(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x2DA6 Hash - 0x3A11F625 ^0x3A11F625
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

int func_68(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2DCB Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_17();

	if (func_42(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_73(vParam0, bParam3);
}

int func_69(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2E19 Hash - 0x56F0811C ^0x278FB5A
{
	return func_74(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

BOOL func_70(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x2E2F Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_71(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2E58 Hash - 0x81861438 ^0x93C66BE8
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
			func_75(pedParam0, false, true);
	
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
			func_76(pedParam0, false);
			flag = true;
		}
	
		func_77(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

struct<2> func_72(Player plParam0) // Position - 0x2F22 Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

int func_73(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2F36 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_78(vParam0);
	num2 = -1;

	if (Global_1893594[num] > 0)
	{
		num3 = Global_1893594[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1892777[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[num4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

int func_74(Hash hParam0) // Position - 0x2FED Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

void func_75(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x30A7 Hash - 0x4FE4E8A8 ^0x44655508
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

void func_76(Ped pedParam0, BOOL bParam1) // Position - 0x30EC Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_77(Ped pedParam0, int iParam1) // Position - 0x3131 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_78(var uParam0, var uParam1, var uParam2) // Position - 0x3158 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_79(uParam0, 0f, 0f, 0, 2);
	return func_79(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

int func_79(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x3193 Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

