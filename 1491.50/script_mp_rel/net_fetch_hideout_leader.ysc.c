#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = -1;
	var uLocal_3 = -1;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 7;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x6B2E02E1 ^0x12F9733A
{
	fLocal_29 = 1f;
	fLocal_30 = 1f;
	func_1(uScriptParam_0.f_4);
	func_2(&uScriptParam_0);

	while (!func_3() && func_4())
	{
		BUILTIN::WAIT(0);
	}

	func_5();
	func_6();
	return;
}

void func_1(int iParam0) // Position - 0x3D Hash - 0xE7FF204B ^0x324E0B1C
{
	func_7(32, iParam0);
	func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_14, 1, 40);
	func_9(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&iLocal_14), 1, "m_hostData");
	func_10(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

void func_2(var uParam0) // Position - 0x78 Hash - 0x8B1600D4 ^0xEC527AFB
{
	Entity entity;

	iLocal_0.f_2 = { uParam0->f_1 };
	entity = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
	{
		func_11(2);
		return;
	}

	iLocal_0.f_1 = *uParam0;
	iLocal_0.f_4 = uParam0->f_4;
	iLocal_0.f_11 = uParam0->f_6;
	iLocal_0.f_13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	iLocal_0.f_12 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	func_12(&(iLocal_0.f_5), false);
	func_12(&(iLocal_0.f_8), false);
	return;
}

BOOL func_3() // Position - 0xE5 Hash - 0x747F152F ^0x9A6359F1
{
	if (func_13(false, false))
		return true;

	if (func_14(iLocal_0.f_2, 1, 0))
		return true;

	if (iLocal_0.f_4 == -1 || iLocal_0.f_11 == -1 || Global_1225099.f_369[iLocal_0.f_4 /*2*/] != iLocal_0.f_11)
		return true;

	if (iLocal_0.f_12 != 0 && GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) != iLocal_0.f_12)
		return true;

	return false;
}

BOOL func_4() // Position - 0x15E Hash - 0x75F93FB4 ^0x75F93FB4
{
	switch (iLocal_0)
	{
		case 0:
			func_15();
			break;
	
		case 1:
			func_16();
			break;
	
		case 2:
			return false;
	}

	return true;
}

void func_5() // Position - 0x196 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_6() // Position - 0x19E Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x1AA Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_8() // Position - 0x1C7 Hash - 0x1FABDECD ^0x67C342BC
{
	int scriptStatus;
	int gameTimer;
	int timeoutTime;

	scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	gameTimer = MISC::GET_GAME_TIMER();
	timeoutTime = NETWORK::NETWORK_GET_TIMEOUT_TIME();

	if (timeoutTime < 50000)
		timeoutTime = 50000;

	while (scriptStatus != 2)
	{
		MISC::GET_GAME_TIMER() - gameTimer > timeoutTime - 5000;
	
		if (MISC::GET_GAME_TIMER() - gameTimer > 300000)
			func_6();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_6();
					break;
			
				case 2:
					func_6();
					break;
			
				case 3:
					func_6();
					break;
			
				case 4:
					func_6();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_6();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_6();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_6();
	
		if (func_17() == 0)
			if (func_18())
				func_6();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	return 1;
}

int func_9(int iParam0, int iParam1, char* sParam2) // Position - 0x2D8 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_10(BOOL bParam0) // Position - 0x2E1 Hash - 0x2B211437 ^0xE0D702E
{
	int num;
	var unk;
	int num2;

	num = MISC::GET_SYSTEM_TIME() + 180000;
	num2 = 0;
	unk = { unk };

	while (true)
	{
		num2 = num2 + 1;
	
		if (bParam0)
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_6();
					break;
			
				case 2:
					func_6();
					break;
			
				case 3:
					func_6();
					break;
			
				case 4:
					func_6();
					break;
			
				default:
					break;
			}
		}
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return;
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			TEXT_LABEL_ASSIGN_STRING(&unk, "HOST", 64);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLIENT", 64);
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return;
	
		if (MISC::GET_SYSTEM_TIME() >= num)
		{
			func_6();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_11(int iParam0) // Position - 0x3AA Hash - 0x74B49122 ^0x74B49122
{
	if (iLocal_0 != iParam0)
		iLocal_0 = iParam0;

	return;
}

void func_12(var uParam0, BOOL bParam1) // Position - 0x3BD Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_19(uParam0))
		func_20(uParam0);

	return;
}

BOOL func_13(BOOL bParam0, BOOL bParam1) // Position - 0x3DD Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

BOOL func_14(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x4BD Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_21(Global_1051268) && !func_22(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_23(iParam2))
		return true;

	if (iParam3 != 0 && func_24(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return true;
	}

	if (Global_263042[Global_1295666 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return true;
	}

	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return true;
	}

	if (func_25())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_21(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return true;
		}
	}

	if (*Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(*Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return true;
	}

	Global_1072759.f_28307 = 0;
	return false;
}

void func_15() // Position - 0x5E6 Hash - 0x2E1228AD ^0xF4436337
{
	if (func_26())
	{
		func_11(1);
		return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0.f_13))
	{
		func_11(2);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(iLocal_0.f_13) && !PED::GET_PED_CONFIG_FLAG(iLocal_0.f_13, 11, false))
	{
		if (PED::IS_PED_HOGTIED(iLocal_0.f_13) && PED::_0x3D9F958834AB9C30(iLocal_0.f_13) == Global_33)
		{
			func_11(1);
			return;
		}
		else
		{
			func_11(2);
			return;
		}
	}

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_27();

	return;
}

void func_16() // Position - 0x667 Hash - 0xFB159BD7 ^0x871BB886
{
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		if (iLocal_0.f_1)
			func_28(joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"), true, true);
		else
			func_28(joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"), true, true);

	func_11(2);
	return;
}

int func_17() // Position - 0x69F Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_18() // Position - 0x6AD Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

BOOL func_19(var uParam0) // Position - 0x6BB Hash - 0x5001E582 ^0x5001E582
{
	return func_29(*uParam0, 1);
}

void func_20(var uParam0) // Position - 0x6CB Hash - 0x879B7DAC ^0x879B7DAC
{
	func_30(uParam0, 0);
	return;
}

BOOL func_21(var uParam0, var uParam1) // Position - 0x6DA Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_31(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_32(uParam0))
		return false;

	return true;
}

BOOL func_22(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x70E Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_23(int iParam0) // Position - 0x729 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0x74A Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_25() // Position - 0x786 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_21(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

BOOL func_26() // Position - 0x7DE Hash - 0xAEEC1E40 ^0xE1CB788B
{
	int i;
	struct<32> eventData;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i))
		{
			case -1315570756:
				if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 32))
					return false;
			
				if (!ENTITY::DOES_ENTITY_EXIST(eventData) || !ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
					return false;
			
				if (!ENTITY::IS_ENTITY_A_PED(eventData.f_1))
					return false;
			
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData) != iLocal_0.f_13)
					return false;
			
				if (!eventData.f_3 && !ENTITY::IS_ENTITY_DEAD(eventData))
					return false;
			
				if (eventData.f_24)
					return false;
			
				if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1)))
					return false;
			
				return GANG::NETWORK_GET_GANG_ID(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1))) == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		}
	}

	return false;
}

void func_27() // Position - 0x8B7 Hash - 0xC7B5E1A2 ^0x6B8BD0E3
{
	if (!func_33(iLocal_14, 1) && func_34(&(iLocal_0.f_5), 6000) && func_35())
	{
		func_36(iLocal_0.f_13, "HIDEOUT_LEADER_FLEE", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
		func_37(&iLocal_14, 1);
	}

	if (!func_33(iLocal_14, 2) && func_34(&(iLocal_0.f_8), 1000) && PED::_0x5203038FF8BAE577(iLocal_0.f_13, 26, 750))
	{
		func_36(iLocal_0.f_13, "HIDEOUT_LEADER_TURN", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
		func_37(&iLocal_14, 2);
	}

	return;
}

void func_28(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x94A Hash - 0x3564A945 ^0xFF0099CC
{
	var unk;
	var value;
	int i;

	if (func_17() != 0)
		return;

	if (func_38())
		return;

	if (PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(PLAYER::PLAYER_PED_ID()))
		return;

	if (iParam0 == -1)
		return;

	if (func_39(iParam0, 1) < 0)
		return;

	if (func_39(iParam0, 1) >= 106)
		return;

	if (!bParam1)
		if (!Global_1149432.f_3876.f_2[func_39(iParam0, 1) /*4*/])
			return;

	Global_1149432.f_3876.f_2[func_39(iParam0, 1) /*4*/].f_2 = Global_1149432.f_3876.f_2[func_39(iParam0, 1) /*4*/].f_2 + 1;

	if (!bParam2)
		return;

	if (Global_1295666.f_11 != Global_1295666)
		return;

	unk.f_5 = -1;
	unk.f_4 = 0;
	unk.f_5 = iParam0;
	unk.f_6 = bParam1;
	i = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[i]))
		{
		}
		else if (Global_1295666.f_149[i] == Global_1295666.f_5)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666.f_149[i]);
		}
	}

	func_40(&unk, value);
	return;
}

BOOL func_29(int iParam0, int iParam1) // Position - 0xA8B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_30(var uParam0, int iParam1) // Position - 0xA9A Hash - 0x49A512C1 ^0x5081D805
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_41(uParam0, 1);
	func_42(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

BOOL func_31(int iParam0) // Position - 0xAD6 Hash - 0x5000025C ^0x5000025C
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

int func_32(int iParam0) // Position - 0xB15 Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_33(int iParam0, int iParam1) // Position - 0xBAB Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_34(var uParam0, int iParam1) // Position - 0xBBA Hash - 0x4C835E28 ^0x4C835E28
{
	if (!func_19(uParam0))
		return false;

	if (func_43(uParam0) > iParam1)
		return true;

	return false;
}

BOOL func_35() // Position - 0xBE0 Hash - 0x8E430929 ^0xEB4D191F
{
	int i;
	Player player;
	Ped playerPed;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && GANG::NETWORK_GET_GANG_ID(player) == iLocal_0.f_12)
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (!ENTITY::IS_ENTITY_DEAD(playerPed) && ENTITY::GET_ENTITY_SPEED(playerPed) > 0f && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(playerPed, true, false), ENTITY::GET_ENTITY_COORDS(iLocal_0.f_13, true, false)) < 8f)
				return true;
		}
	}

	return false;
}

BOOL func_36(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xC61 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = iParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_44(pedParam0, &str);
}

void func_37(var uParam0, int iParam1) // Position - 0xCA8 Hash - 0xF55E891F ^0xF55E891F
{
	func_45(uParam0, iParam1);
	return;
}

BOOL func_38() // Position - 0xCB8 Hash - 0xF2555F70 ^0x7B9AF3F5
{
	if (func_17() != 0)
		return true;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
		return true;

	if (Global_1149432.f_3876.f_1 & 2 != 0)
		return true;

	if (Global_1149432.f_3876.f_1 & 4 != 0)
		return true;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
		return true;

	return false;
}

int func_39(int iParam0, int iParam1) // Position - 0xD10 Hash - 0xA2AFA677 ^0xA2AFA677
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
	
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
	
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
	
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
	
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
	
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
	
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
	
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
	
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
	
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
	
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
	
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
	
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
	
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
	
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
	
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
	
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
	
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
	
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
	
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
	
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
	
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
	
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
	
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
	
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
	
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
	
		case -29468993:
			return 103;
	
		case -1:
			return 0;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
	
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
	
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
	
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
	
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
	
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
	
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
	
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
	
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
	
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
	
		case 669386338:
			return 104;
	
		case 796310207:
			return 66;
	
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
	
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
	
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
	
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
	
		case 1623086000:
			return 65;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
	
		case 1723535349:
			return 58;
	
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
	
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
	
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
	
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_40(Any* panParam0, var uParam1) // Position - 0x11B7 Hash - 0x68A45BCF ^0xA337BBFE
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 188;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 7, 14, &uParam1);
	return;
}

void func_41(var uParam0, int iParam1) // Position - 0x11EE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_42(var uParam0, int iParam1) // Position - 0x11FF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_43(var uParam0) // Position - 0x1214 Hash - 0xCB0C9F2B ^0x95CAE221
{
	if (!func_19(uParam0))
		return 0;

	if (func_46(uParam0))
		return uParam0->f_2;

	return func_47(uParam0->f_1);
}

BOOL func_44(Ped pedParam0, Any* panParam1) // Position - 0x1245 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

void func_45(var uParam0, int iParam1) // Position - 0x1255 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_46(var uParam0) // Position - 0x1266 Hash - 0x39705408 ^0x39705408
{
	return func_29(*uParam0, 2);
}

int func_47(int iParam0) // Position - 0x1276 Hash - 0xFDA007B9 ^0xE83F4FF2
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

