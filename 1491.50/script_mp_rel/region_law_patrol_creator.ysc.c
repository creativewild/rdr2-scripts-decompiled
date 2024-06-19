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
	BOOL bLocal_28 = 0;
	BOOL bLocal_29 = 0;
	ePedType eptLocal_30 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_31 = PED_TYPE_PLAYER_0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 5;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 5;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	Volume volLocal_48 = 0;
	int iLocal_49 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3558FB96 ^0x4AD0259F
{
	int randomIntInRange;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_16 = 1;
	uScriptParam_0 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2(PLAYER::PLAYER_ID(), false, false, true) && func_3() && iLocal_16 < 7 && !func_4() && !func_5() && !(func_6() == 8 && func_7(0, false, true) || func_8() == 64))
	{
		func_9();
		BUILTIN::WAIT(0);
	}

	func_1();

	if (func_10() == 5)
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(25000, 35000);
	else if (func_10() >= 3)
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(35000, 55000);
	else
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(45000, 55000);

	Global_1939102.f_2 = randomIntInRange;
	Global_1939102.f_1 = MISC::GET_GAME_TIMER();
	return;
}

void func_1() // Position - 0xE3 Hash - 0xBFA39455 ^0xBFA39455
{
	int i;

	for (i = 0; i < iLocal_35; i = i + 1)
	{
		if (func_11(iLocal_35[i], 0))
		{
			func_12(&iLocal_35[i], true, true, true);
			func_12(&uLocal_41[i], true, true, true);
		}
	}

	func_13(volLocal_48);
	return;
}

BOOL func_2(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12C Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_14(bParam1, bParam2, bParam3);

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

BOOL func_3() // Position - 0x261 Hash - 0x20AA6B5F ^0x27733C53
{
	if (func_16(func_15(), true))
		return true;

	if (func_17(func_6(), true))
		return true;

	if (func_18(func_8()))
		return true;

	if (MAP::DOES_BLIP_EXIST(Global_1939102.f_148))
		if (func_19())
			return true;

	return false;
}

BOOL func_4() // Position - 0x2B1 Hash - 0x512CD18B ^0x512CD18B
{
	return func_20(1, 255);
}

BOOL func_5() // Position - 0x2C0 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1893611 & 2 != 0;
}

int func_6() // Position - 0x2D0 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

BOOL func_7(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2DE Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_21())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_23(func_22(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_24(func_22(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

int func_8() // Position - 0x454 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

void func_9() // Position - 0x462 Hash - 0xA39748A5 ^0xF027C500
{
	int num;
	BOOL flag;
	int num2;
	int taskSequenceId;
	int i;
	BOOL flag2;
	Vector3 vector;
	int j;

	if (func_25(&uLocal_32) > 15f && iLocal_16 <= 4)
		iLocal_16 = 6;

	func_26();

	switch (iLocal_16)
	{
		case 1:
			func_27(&uLocal_32);
			PED::_RESERVE_AMBIENT_PEDS(10);
			iLocal_26 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(func_10()) / 2f) + MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
			if (iLocal_26 > 5)
				iLocal_26 = 5;
			else if (iLocal_26 <= 0)
				iLocal_26 = 1;
		
			num = func_15();
		
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
		
			eptLocal_31 = joaat("a_c_horse_morgan_flaxenchestnut");
			iLocal_16 = 2;
			break;
	
		case 2:
			STREAMING::REQUEST_MODEL(eptLocal_30, false);
			STREAMING::REQUEST_MODEL(eptLocal_31, false);
		
			if (STREAMING::HAS_MODEL_LOADED(eptLocal_30) && STREAMING::HAS_MODEL_LOADED(eptLocal_31) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				iLocal_16 = 3;
			break;
	
		case 3:
			if (func_19())
				num2 = 1;
			else
				num2 = 14;
		
			if (func_28(Global_34, &uLocal_17, &flag, num2, true, 1127481344, 1101004800, 80f, 120f, 0))
				if (!func_29(uLocal_17.f_3, 0, 0, 0) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(uLocal_17.f_3, 0, &(uLocal_17.f_3.f_2)) != 1)
					iLocal_16 = 4;
			else if (flag)
				func_30(&uLocal_17, 1, false);
			break;
	
		case 4:
			if (!bLocal_28 && !bLocal_29)
			{
				func_31();
			}
			else if (bLocal_28 && !bLocal_29 && func_6() != 8)
			{
				func_32();
			}
			else
			{
				for (i = 0; i < iLocal_35; i = i + 1)
				{
					func_33(iLocal_35[i], uLocal_41[i], false, -1, true);
					flag2 = false;
				
					if (i == 0)
					{
						if (!PED::DOES_GROUP_EXIST(iLocal_47))
						{
							iLocal_47 = PED::CREATE_GROUP(0);
							PED::SET_GROUP_FORMATION(iLocal_47, 9);
						}
					
						flag2 = true;
					}
				
					if (func_11(iLocal_35[i], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					
						if (func_19())
						{
							num = func_15();
						
							if (func_34(num))
							{
								vector = { func_35(Global_38.f_198[num /*12*/].f_1, Global_38.f_198[num /*12*/].f_4 - 3f, 10f) };
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vector, 1.75f, -1, 1048576000, 7602180, 1193033728);
							}
						
							TASK::TASK_STAND_STILL(0, 3000);
						}
					
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_POLICE(iLocal_35[i], true);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_35[i], taskSequenceId);
						func_36(&iLocal_35[i], &iLocal_47, flag2, true, true, true, false);
					}
				}
			
				iLocal_16 = 5;
			}
			break;
	
		case 5:
			for (j = 0; j < iLocal_35; j = j + 1)
			{
				if (func_11(iLocal_35[j], 0) && func_11(Global_33, 0))
				{
					if (func_37(Global_33, iLocal_35[j], true, true) > 220f)
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

int func_10() // Position - 0x791 Hash - 0x98FE2AD1 ^0x98FE2AD1
{
	return func_39(func_38(func_6()));
}

BOOL func_11(Ped pedParam0, int iParam1) // Position - 0x7A5 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_40(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_40(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_40(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_40(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_40(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_40(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_40(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_40(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_12(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8A4 Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_13(Volume volParam0) // Position - 0x912 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_14(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x929 Hash - 0xC9655EC3 ^0xE7BDB885
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

int func_15() // Position - 0x9C7 Hash - 0x4228A1C2 ^0xDB228237
{
	return Global_1939102.f_4;
}

BOOL func_16(int iParam0, BOOL bParam1) // Position - 0x9D5 Hash - 0x8DCD18D0 ^0x8DCD18D0
{
	if (!func_34(iParam0))
		return false;

	if (func_41(iParam0, 1) || bParam1 && func_41(iParam0, 2))
		return true;

	return false;
}

BOOL func_17(int iParam0, BOOL bParam1) // Position - 0xA11 Hash - 0xA92798E ^0xA92798E
{
	if (!func_42(iParam0))
		return false;

	if (bParam1)
		if (func_43(iParam0, 8))
			return false;

	if (func_43(iParam0, true))
		return true;

	return false;
}

BOOL func_18(int iParam0) // Position - 0xA4D Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_44(iParam0))
		return false;

	return func_45(iParam0, 33554432);
}

BOOL func_19() // Position - 0xA6E Hash - 0xEFA9E5FD ^0x13C1CC5F
{
	int num;

	num = func_15();

	if (!func_34(num))
		return false;

	if (_IS_NULL_VECTOR(Global_38.f_198[num /*12*/].f_1) || Global_38.f_198[num /*12*/].f_4 < 1f)
		return false;

	if (func_47(Global_33, Global_38.f_198[num /*12*/].f_1, Global_38.f_198[num /*12*/].f_4 + 10f, true, true))
		return true;

	return false;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0xAE4 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_48(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_49())
		return func_48(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_48(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_21() // Position - 0xB58 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_23(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_22(int iParam0) // Position - 0xBB0 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_23(var uParam0, var uParam1) // Position - 0xBC4 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_50(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_51(uParam0))
		return false;

	return true;
}

int func_24(var uParam0, var uParam1) // Position - 0xBF8 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

float func_25(var uParam0) // Position - 0xC02 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_52(uParam0))
		return 0f;

	if (func_53(uParam0))
		return uParam0->f_2;

	return func_54() - uParam0->f_1;
}

void func_26() // Position - 0xC34 Hash - 0x30227423 ^0xAB639AE4
{
	var gameplayCamRot;
	var offsetFromCoordAndHeadingInWorldCoords;

	if (func_6() == 8)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(volLocal_48))
		{
			volLocal_48 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(volLocal_48, 1468.909f, -7225.962f, 86.862f, 0f, 0f, 18f, 748f, 853f, 473f);
		}
		else if (func_11(Global_33, 0))
		{
			if (!func_55(Global_33, volLocal_48, true, 0))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_49 > 5000)
				{
					iLocal_49 = MISC::GET_GAME_TIMER();
					gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
					offsetFromCoordAndHeadingInWorldCoords.f_8 = -1082130432;
					offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), gameplayCamRot.f_2, 0f, -1f, 0f) };
					offsetFromCoordAndHeadingInWorldCoords.f_3 = { PED::GET_PED_BONE_COORDS(Global_33, 21030, 0f, 0f, 0f) };
					offsetFromCoordAndHeadingInWorldCoords.f_7 = 1000f;
					offsetFromCoordAndHeadingInWorldCoords.f_12 = 1;
					offsetFromCoordAndHeadingInWorldCoords.f_6 = joaat("weapon_sniperrifle_carcano");
					MISC::FIRE_SINGLE_BULLET(&offsetFromCoordAndHeadingInWorldCoords);
				}
			}
		}
	}

	return;
}

void func_27(var uParam0) // Position - 0xD09 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_56(uParam0, 0f);
	return;
}

BOOL func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11) // Position - 0xD18 Hash - 0xC31BF175 ^0x915D2C1C
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
			func_57(&(uParam3->f_1), uParam3->f_2, uParam0, iParam5, iParam7, iParam8, fParam9, fParam10, iParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_58(&(uParam3->f_1), iParam5, uParam0);
			
				if (!_IS_NULL_VECTOR(uParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_59(uParam3->f_6));
			
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

BOOL func_29(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0xE3D Hash - 0x3F4C1B1 ^0x44CB89D6
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return false;

	unk = 4;
	unk[0] = iParam4;
	unk6 = 4;
	unk6[0] = 8192;
	unk6[1] = iParam5;

	if (VOLUME::_0x870E9981ED27C815(uParam0, &unk, &unk6, iParam3))
		return true;

	return false;
}

void func_30(var uParam0, int iParam1, BOOL bParam2) // Position - 0xE8A Hash - 0xDC7EB85A ^0x8E2A3227
{
	uParam0->f_2 = 0;

	if (!bParam2)
		uParam0->f_6 = { 0f, 0f, 0f };

	if (iParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));

	*uParam0 = 0;
	return;
}

void func_31() // Position - 0xEC5 Hash - 0x5B1BE7 ^0x7E377291
{
	iLocal_35[iLocal_27] = func_60(eptLocal_30, uLocal_17.f_3, 0, true, true, 0, true, true, true, false, false);
	func_61(iLocal_35[iLocal_27]);
	iLocal_27 = iLocal_27 + 1;

	if (iLocal_27 >= iLocal_26)
	{
		iLocal_27 = 0;
		bLocal_28 = true;
	}

	return;
}

void func_32() // Position - 0xF05 Hash - 0x2DBE32D1 ^0x1A8240D
{
	uLocal_41[iLocal_27] = func_60(eptLocal_31, uLocal_17.f_3, 0, true, true, 0, true, true, true, false, false);
	iLocal_27 = iLocal_27 + 1;

	if (iLocal_27 >= iLocal_26)
		bLocal_29 = true;

	return;
}

int func_33(Ped pedParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xF38 Hash - 0x32B863AB ^0xCE62541D
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	if (PED::GET_MOUNT(pedParam0) != pedParam1)
	{
		PED::SET_PED_ONTO_MOUNT(pedParam0, pedParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(pedParam1, bParam2);
	}

	return 1;
}

BOOL func_34(int iParam0) // Position - 0xF7D Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

Vector3 func_35(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4) // Position - 0xF92 Hash - 0xC59B327E ^0x28F503C3
{
	var unk;
	float endRange;

	unk = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	endRange = fParam4 / 2f;
	unk = { func_62(unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	unk.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-endRange, endRange);
	return uParam0 + unk;
}

void func_36(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xFDA Hash - 0x124090B1 ^0x6D30AFF8
{
	if (!PED::DOES_GROUP_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
		return;

	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);

	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *uParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *uParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, bParam5);
	}

	PED::_0x97C475212B327666(*uParam1, bParam6);
	return;
}

float func_37(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1045 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false), bParam2);
}

int func_38(int iParam0) // Position - 0x108D Hash - 0xA08D7C4E ^0xA08D7C4E
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

int func_39(int iParam0) // Position - 0x1148 Hash - 0x5FACFC02 ^0xC65488A8
{
	if (!func_34(iParam0))
		return 0;

	if (func_41(iParam0, 2))
		return 5;

	if (func_63(iParam0) > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
		return func_64(func_63(iParam0));

	return 0;
}

BOOL func_40(int iParam0, int iParam1) // Position - 0x1194 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0x11A3 Hash - 0x9AD134EA ^0x3BFBD1FE
{
	if (!func_34(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_42(int iParam0) // Position - 0x11E8 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_43(int iParam0, BOOL bParam1) // Position - 0x11FE Hash - 0x420CBA68 ^0x9F9619A9
{
	if (!func_42(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_44(int iParam0) // Position - 0x1240 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_45(int iParam0, BOOL bParam1) // Position - 0x1256 Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1287 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_47(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x12B1 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_65(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_48(Any* panParam0, int iParam1, int iParam2) // Position - 0x130C Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_49() // Position - 0x1343 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_50(int iParam0) // Position - 0x1352 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_51(int iParam0) // Position - 0x1391 Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

BOOL func_52(var uParam0) // Position - 0x1427 Hash - 0x5001E582 ^0x5001E582
{
	return func_66(*uParam0, 1);
}

BOOL func_53(var uParam0) // Position - 0x1437 Hash - 0x39705408 ^0x39705408
{
	return func_66(*uParam0, 2);
}

float func_54() // Position - 0x1447 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_55(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x1479 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

void func_56(var uParam0, float fParam1) // Position - 0x14AF Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_54() - fParam1;
	func_67(uParam0, 1);
	func_68(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_57(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, float fParam8, float fParam9, int iParam10) // Position - 0x14D5 Hash - 0xF3743088 ^0xD7A675F3
{
	int num;
	int num2;

	if (!_IS_NULL_VECTOR(uParam2))
		TASK::_0x2064B33F6E6B92D4(*uParam0, uParam2);

	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);

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
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
			break;
	
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
		
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_69(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 46:
				num = func_70(uParam2, true);
				num2 = func_71(uParam2);
			
				if (num2 == 15 || num2 == 14 || num2 == 13 || num2 == 9 && num == -1 || num2 == 4 && num == -1)
				{
					TASK::_0x2EB977293923C723(*uParam0, func_69(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_69(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_69(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(80f, 150f, 17.5f, iParam1));
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
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_69(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(40f, 100f, 10f, iParam1));
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

void func_58(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x22E3 Hash - 0xF7709AA0 ^0xA0B87357
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
			if (func_70(uParam2, true) == 5)
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

Vector3 func_59(float fParam0, var uParam1, var uParam2) // Position - 0x2AA3 Hash - 0xFB6A39D2 ^0x80C9C759
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

Ped func_60(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x2AE2 Hash - 0xA67C0C52 ^0xA10AD291
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_72(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_61(Ped pedParam0) // Position - 0x2B22 Hash - 0x6EE119AF ^0x4E705A3
{
	LAW::_SET_PED_LAW_BEHAVIOUR(pedParam0, 2);
	LAW::_SET_PED_LAW_BEHAVIOUR(pedParam0, 1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 188, true);
	PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(pedParam0, joaat("law"));
	PED::SET_PED_COMBAT_ATTRIBUTES(pedParam0, BF_CanBust, true);
	TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(pedParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(pedParam0, false);
	WEAPON::GIVE_WEAPON_TO_PED(pedParam0, joaat("group_revolver"), 100, true, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
	WEAPON::GIVE_WEAPON_TO_PED(pedParam0, joaat("GROUP_SNIPER"), 100, false, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
	return;
}

Vector3 func_62(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x2BAB Hash - 0x88200B15 ^0xE07B704A
{
	float num;

	if (fParam3 == 0f)
		return 0f, 0f, 0f;

	num = BUILTIN::VMAG(vParam0);

	if (num != 0f)
		return vParam0 * { fParam3 / num, fParam3 / num, fParam3 / num };

	return 0f, 0f, 0f;
}

int func_63(int iParam0) // Position - 0x2BE2 Hash - 0xDE3AB7BF ^0xBF88E2D7
{
	int i;
	var gamerHandle;
	int bountyData;

	if (!func_34(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_73(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_64(int iParam0) // Position - 0x2C50 Hash - 0xD38CDAEA ^0x766CC7B5
{
	int i;

	for (i = 5; i >= 1; i = i + -1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(i))
			return i;
	}

	return 0;
}

float func_65(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2C7B Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_66(int iParam0, int iParam1) // Position - 0x2C99 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_67(var uParam0, int iParam1) // Position - 0x2CA8 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_68(var uParam0, int iParam1) // Position - 0x2CB9 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_69(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x2CCE Hash - 0x3A11F625 ^0x3A11F625
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

int func_70(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2CF3 Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_8();

	if (func_44(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_74(vParam0, bParam3);
}

int func_71(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2D41 Hash - 0x56F0811C ^0x278FB5A
{
	return func_75(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_72(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2D57 Hash - 0x81861438 ^0x93C66BE8
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
			func_76(pedParam0, false, true);
	
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

struct<2> func_73(Player plParam0) // Position - 0x2E21 Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

int func_74(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2E35 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_79(vParam0);
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

int func_75(Hash hParam0) // Position - 0x2EEC Hash - 0x50573299 ^0x50573299
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

void func_76(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2FA6 Hash - 0x4FE4E8A8 ^0x44655508
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

void func_77(Ped pedParam0, BOOL bParam1) // Position - 0x2FEB Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_78(Ped pedParam0, int iParam1) // Position - 0x3030 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_79(var uParam0, var uParam1, var uParam2) // Position - 0x3057 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_80(uParam0, 0f, 0f, 0, 2);
	return func_80(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

int func_80(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x3092 Hash - 0xA452440E ^0xD3F785A1
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

