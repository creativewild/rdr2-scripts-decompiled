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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xBE66DFCD ^0x8CFE64EA
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();

	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	func_4();
	func_5();
	return;
}

void func_1() // Position - 0x2E Hash - 0x590BEAB6 ^0x835A2F40
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();

	if (func_8())
		func_5();

	func_9();
	func_10(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

BOOL func_2() // Position - 0x61 Hash - 0x5C18CA54 ^0x5C18CA54
{
	if (func_11(false, false))
		return true;

	return false;
}

void func_3() // Position - 0x77 Hash - 0x1D1A0BB7 ^0x1D1A0BB7
{
	if (!func_12())
		return;

	if (func_13() || Global_1048585)
		return;

	func_14();
	func_15();
	func_16();

	if (func_17())
	{
		func_18();
	}
	else
	{
		Global_1260806.f_3363 = 1;
		Global_1260806.f_3364 = 0;
	}

	func_19();
	return;
}

void func_4() // Position - 0xCC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xD4 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_6(int iParam0, int iParam1) // Position - 0xE0 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_7() // Position - 0xFD Hash - 0x1FABDECD ^0x67C342BC
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
			func_5();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_5();
					break;
			
				case 2:
					func_5();
					break;
			
				case 3:
					func_5();
					break;
			
				case 4:
					func_5();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_5();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_5();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_5();
	
		if (func_20() == 0)
			if (func_21())
				func_5();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	return 1;
}

BOOL func_8() // Position - 0x20E Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_9() // Position - 0x23C Hash - 0x6B0E2690 ^0x6FEA0638
{
	func_22();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1254993, 2516, 46);
	!func_23(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1254993), 2516, "g_mpBeatManagerHostData");
	func_24();
	func_25();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1257509, 3297, 47);
	!func_26(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1257509[0 /*103*/]), 3297, "g_mpBeatManagerPlayerData");

	if (!func_27())
		func_28();

	return;
}

void func_10(BOOL bParam0) // Position - 0x2A4 Hash - 0x2B211437 ^0xE0D702E
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
					func_5();
					break;
			
				case 2:
					func_5();
					break;
			
				case 3:
					func_5();
					break;
			
				case 4:
					func_5();
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
			func_5();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_11(BOOL bParam0, BOOL bParam1) // Position - 0x36D Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_12() // Position - 0x44D Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_13() // Position - 0x461 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_29(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

void func_14() // Position - 0x4B9 Hash - 0xE4B366A5 ^0xE4B366A5
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_30(Global_1260806.f_3351[i]))
			if (func_31(Global_1260806.f_3351[i]) >= func_32(i))
				func_33(&Global_1260806.f_3351[i]);
	}

	return;
}

void func_15() // Position - 0x50C Hash - 0x3CE67417 ^0x27C70F91
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;
	int num;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		unk = weatherType1;
	else
		unk = weatherType2;

	if (func_34(unk))
		num = num | 1;

	if (func_35(unk))
		num = num | 2;

	if (func_36(unk))
		num = num | 4;

	if (func_37(unk))
		num = num | 8;

	if (func_38(unk))
		num = num | 16;

	if (func_39(unk))
		num = num | 32;

	if (func_40(unk))
		num = num | 64;

	Global_1260806.f_3485 = num;
	return;
}

void func_16() // Position - 0x5AA Hash - 0xBD2CB748 ^0xCAA2E3DB
{
	BOOL flag;
	var unk;
	int num;
	BOOL flag2;
	int num2;

	if (!func_41(0))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1153255129))
			func_42(0);
	}
	else
	{
		if (!func_41(1))
			if (UNLOCK::UNLOCK_IS_UNLOCKED(1942525086))
				func_42(1);
	
		if (!func_41(2))
			if (UNLOCK::UNLOCK_IS_UNLOCKED(282898204))
				func_42(2);
	}

	if (!func_41(6))
		if (UNLOCK::UNLOCK_IS_UNLOCKED(1208871121))
			func_42(6);

	if (!func_41(7))
		if (func_43(9))
			func_42(7);

	flag = true;
	unk = { func_44() };

	if (!func_29(unk))
	{
		flag = false;
	}
	else
	{
		num = func_45(unk);
	
		switch (func_46(num))
		{
			case 195932838:
				break;
		
			default:
				flag = false;
				break;
		}
	}

	if (flag != func_41(3))
		if (flag)
			func_42(3);
		else
			func_47(3);

	flag2 = func_48();

	if (flag2 != func_41(4))
		if (flag2)
			func_42(4);
		else
			func_47(4);

	num2 = func_49();

	if (func_50(num2))
	{
		if (Global_1260806.f_3499 != num2 || !func_41(5))
		{
			if (func_51(num2, &(Global_1260806.f_3493), &(Global_1260806.f_3496)))
			{
				func_42(5);
				Global_1260806.f_3499 = num2;
			}
			else if (func_41(5))
			{
				func_47(5);
				Global_1260806.f_3499 = -1;
			}
		}
	}
	else if (func_41(5))
	{
		func_47(5);
		Global_1260806.f_3499 = -1;
	}

	return;
}

BOOL func_17() // Position - 0x731 Hash - 0xAB92B447 ^0x6273F31
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[15], false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_beat_manager", -1, true, 0))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[15]);
}

void func_18() // Position - 0x775 Hash - 0x50A6FF48 ^0x50A6FF48
{
	switch (Global_1260806.f_3363)
	{
		case 0:
			func_52();
			break;
	
		case 1:
			func_53();
			break;
	
		case 2:
			func_54();
			break;
	
		case 3:
			func_55();
			break;
	}

	return;
}

void func_19() // Position - 0x7BE Hash - 0x50A6FF48 ^0x50A6FF48
{
	switch (Global_1260806.f_3349)
	{
		case 0:
			func_56();
			break;
	
		case 1:
			func_57();
			break;
	
		case 2:
			func_58();
			break;
	
		case 3:
			func_59();
			break;
	}

	return;
}

int func_20() // Position - 0x807 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_21() // Position - 0x815 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_22() // Position - 0x823 Hash - 0x6C24F698 ^0x6C24F698
{
	func_60();
	func_61();
	return;
}

BOOL func_23(int iParam0, int iParam1, char* sParam2) // Position - 0x833 Hash - 0x4A2623DD ^0x4A2623DD
{
	return true;
}

void func_24() // Position - 0x83C Hash - 0x95A06623 ^0x95A06623
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_62(i);
	}

	return;
}

void func_25() // Position - 0x85D Hash - 0x1146FFB9 ^0xF3E87F4E
{
	int i;

	for (i = 1; i <= 34; i = i + 1)
	{
		Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[i] = func_63(i);
	}

	return;
}

BOOL func_26(int iParam0, int iParam1, char* sParam2) // Position - 0x88E Hash - 0x4A2623DD ^0x4A2623DD
{
	return true;
}

BOOL func_27() // Position - 0x897 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

void func_28() // Position - 0x8A6 Hash - 0xF9A0B8A7 ^0xF9A0B8A7
{
	func_64(&Global_1260806);
	Global_1260806.f_3349 = 0;
	func_65();
	return;
}

BOOL func_29(var uParam0, var uParam1) // Position - 0x8C2 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_66(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_67(uParam0))
		return false;

	return true;
}

BOOL func_30(int iParam0) // Position - 0x8F6 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

int func_31(int iParam0) // Position - 0x902 Hash - 0x30429530 ^0xDB3DB7A7
{
	return (Global_1295666.f_16 - iParam0) * 1000;
}

int func_32(int iParam0) // Position - 0x916 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1260806.f_3357[iParam0];
}

void func_33(int iParam0) // Position - 0x929 Hash - 0x4918B04C ^0x4918B04C
{
	*iParam0 = 0;
	return;
}

BOOL func_34(int iParam0) // Position - 0x935 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("highpressure"):
		case joaat("overcastdark"):
		case joaat("clouds"):
		case joaat("Misty"):
		case joaat("SUNNY"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_35(int iParam0) // Position - 0x96E Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_36(int iParam0) // Position - 0x9B3 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("snow"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("whiteout"):
		case joaat("snowclearing"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_37(int iParam0) // Position - 0x9E6 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("Fog"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_38(int iParam0) // Position - 0xA01 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Misty"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_39(int iParam0) // Position - 0xA28 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("snowclearing"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_40(int iParam0) // Position - 0xA49 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("sandstorm"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_41(int iParam0) // Position - 0xA64 Hash - 0xAF759F3F ^0x1C735AE3
{
	return MISC::IS_BIT_SET(Global_1260806.f_3486, iParam0);
}

void func_42(int iParam0) // Position - 0xA79 Hash - 0x77CF310 ^0x89E5B84E
{
	MISC::SET_BIT(&(Global_1260806.f_3486), iParam0);
	return;
}

BOOL func_43(int iParam0) // Position - 0xA8E Hash - 0x5D73A58D ^0xC4F87AC8
{
	Hash unlockHash;
	int num;

	if (iParam0 == 0)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	unlockHash = func_68(iParam0);

	if (unlockHash == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
	{
		num = func_69(1, iParam0);
	
		if (num == 0)
			return false;
	
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
			return true;
	}

	return false;
}

struct<2> func_44() // Position - 0xAE8 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_70(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_70(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

int func_45(var uParam0, var uParam1) // Position - 0xB33 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_71(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_46(int iParam0) // Position - 0xB5F Hash - 0xFCB1B5BE ^0xF6B212CC
{
	var unk;
	var unk2;

	if (func_72(&unk2, iParam0))
		func_73(unk2, 1609846533, &unk, true);

	return unk;
}

void func_47(int iParam0) // Position - 0xB85 Hash - 0x77CF310 ^0x4BD94C07
{
	MISC::CLEAR_BIT(&(Global_1260806.f_3486), iParam0);
	return;
}

BOOL func_48() // Position - 0xB9A Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

int func_49() // Position - 0xBBF Hash - 0xB3A0750F ^0xA3ADCADC
{
	int scheduleLocation;
	int num;

	if (STATS::_0x3AEABAE3F3C7600C() && STATS::_0xA2E2BEA4E83F6270(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS")) > 0)
		STATS::_0xB5E2EDA2135E0FA1(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS"), 0, &scheduleLocation);
	else
		return -1;

	if (scheduleLocation == 0)
		return -1;

	num = func_74(scheduleLocation);

	if (num < 0 || num >= 12)
		return -1;

	return 135 + num;
}

BOOL func_50(int iParam0) // Position - 0xC1F Hash - 0x8858DE32 ^0x8858DE32
{
	return iParam0 > -1 && iParam0 < 180;
}

BOOL func_51(int iParam0, Vector3* pvParam1, var uParam2) // Position - 0xC35 Hash - 0x9317D957 ^0x2E2C651A
{
	int num;
	float num2;

	num = Global_1072759.f_28418[48 /*4*/].f_3;
	num.f_2 = -738708473;
	num.f_3 = func_75(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return false;

	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam1, &num);
	num2 = 0f;
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num2, &num);
	uParam2->f_2 = num2;
	return true;
}

void func_52() // Position - 0xCB5 Hash - 0xE899B7EF ^0xE899B7EF
{
	if (Global_1260806.f_3349 > 0)
		func_76(1);

	return;
}

void func_53() // Position - 0xCCD Hash - 0x790C7CC9 ^0x790C7CC9
{
	if (func_77())
	{
		func_78();
		func_79();
		Global_1260806.f_3364 = 0;
		func_80();
		func_81(2, false);
		func_76(2);
	}

	return;
}

void func_54() // Position - 0xCFB Hash - 0x5286C056 ^0x2AA4A4A
{
	var unk;
	int num;
	var unk32;
	int num2;
	int value;
	int num3;
	var unk33;
	Player player;
	int num4;
	int num5;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;

	if (!func_82(2))
	{
		func_83(false, Global_1260806.f_3364);
		func_84(2, false);
	}

	if (!func_85())
		return;

	if (!func_86(&num, &unk32, &num2, &value))
	{
		func_76(1);
		return;
	}

	func_87(&unk, num, num2, -1, 255);

	if (func_88(unk.f_11, 1084227584, 70f))
	{
		func_76(1);
		func_89(unk.f_5, 0);
		return;
	}

	if (unk.f_6 == 2)
	{
		num3 = func_90(num);
	
		if (unk.f_7 == 3)
		{
			unk33.f_1 = -1;
		
			if (!func_91(num3, num2, unk.f_5, &unk33))
			{
				func_76(1);
				func_89(unk.f_5, 1);
				return;
			}
		
			func_92(&unk33, num3, num2, 32, -1);
		}
		else
		{
			func_93(num3, num2, 32);
		}
	}
	else if (unk.f_6 == 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(value);
		num4 = func_94(num, num2, &unk, player);
		num5 = func_95(num, num2, num4);
	
		if (!func_96(num, num2, num4, num5, player))
		{
			func_76(1);
			func_89(unk.f_5, 2);
			return;
		}
	}

	func_76(3);
	return;
}

void func_55() // Position - 0xE51 Hash - 0x116EAD40 ^0x1EDCF544
{
	if (!func_30(Global_1254993.f_2512.f_3))
	{
		func_97(&(Global_1254993.f_2512.f_3));
		return;
	}

	if (func_31(Global_1254993.f_2512.f_3) >= Global_1901671.f_245.f_68)
	{
		func_33(&(Global_1254993.f_2512.f_3));
		func_76(1);
	}

	return;
}

void func_56() // Position - 0xEA4 Hash - 0x14BCD93D ^0x14BCD93D
{
	if (Global_1245174.f_9816 != 2)
		return;

	func_98();
	func_99(1);
	return;
}

void func_57() // Position - 0xEC3 Hash - 0x88A89384 ^0x88A89384
{
	if (Global_1245174.f_9816 != 2)
		return;

	if (Global_1260806.f_3350 == 0)
		Global_1260806.f_3350 = func_100();

	func_101(true);
	func_99(2);
	return;
}

void func_58() // Position - 0xEF9 Hash - 0x10A08F52 ^0x6CA80A0C
{
	BOOL flag;

	if (func_30(Global_1254993.f_2512.f_3))
	{
		func_102(1, false);
		func_99(3);
		return;
	}

	if (func_41(3))
	{
		func_101(true);
		func_102(1, true);
		return;
	}

	if (func_103(&flag))
		if (!flag)
			func_104(1, false);
		else
			func_102(1, false);

	return;
}

void func_59() // Position - 0xF53 Hash - 0xE1427CDE ^0xED855483
{
	if (!func_30(Global_1254993.f_2512.f_3))
	{
		func_99(1);
	
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			func_76(1);
	}
	else
	{
		func_76(3);
	}

	return;
}

void func_60() // Position - 0xF86 Hash - 0x5435E0D5 ^0xC6082D77
{
	var unk;
	int i;

	unk.f_2 = -15;

	for (i = 0; i <= 836; i = i + 1)
	{
		Global_1254993[i /*3*/] = { unk };
	}

	return;
}

void func_61() // Position - 0xFBB Hash - 0x3808652A ^0x3808652A
{
	var unk;

	Global_1254993.f_2512 = { unk };
	return;
}

void func_62(int iParam0) // Position - 0xFD0 Hash - 0x7665BF48 ^0x228F3234
{
	var unk;

	unk = 28;
	unk.f_29 = 28;
	unk.f_58 = 35;
	unk.f_94 = -1;
	unk.f_97 = 5;
	Global_1257509[iParam0 /*103*/] = { unk };
	return;
}

BOOL func_63(int iParam0) // Position - 0x100A Hash - 0x7CAB2AC ^0xE65F101B
{
	var statId;
	int num;

	statId = { func_105(iParam0, joaat("variations_seen")) };

	if (!STATS::STAT_ID_GET_INT(&statId, &num))
		return -1;

	return num;
}

void func_64(var uParam0) // Position - 0x1033 Hash - 0x44DB4F1A ^0xB9EC82F2
{
	int i;
	var src;
	var src2;

	for (i = 0; i < 837; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam0->[i /*4*/], &src, 4);
	}

	uParam0->f_3349 = 0;
	uParam0->f_3350 = 0;
	uParam0->f_3363 = 0;
	uParam0->f_3364 = 0;
	uParam0->f_3431 = 0;
	uParam0->f_3480 = 0;
	uParam0->f_3481 = 0;
	uParam0->f_3482 = 0;
	uParam0->f_3483 = -1;
	uParam0->f_3484 = 0f;
	uParam0->f_3485 = 0;
	uParam0->f_3486 = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		uParam0->f_3365[i] = 0;
		uParam0->f_3398[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		uParam0->f_3351[i] = 0;
		uParam0->f_3357[i] = 0;
		uParam0->f_3487[i] = 0;
	}

	src2 = 47;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_3432), &src2, 48);
	return;
}

void func_65() // Position - 0x1110 Hash - 0xC202E579 ^0x6AA90939
{
	var unk;
	int i;

	for (i = 0; i <= 836; i = i + 1)
	{
		Global_1260806[i /*4*/] = { unk };
	}

	return;
}

BOOL func_66(int iParam0) // Position - 0x113A Hash - 0x5000025C ^0x5000025C
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

int func_67(int iParam0) // Position - 0x1179 Hash - 0xE34A477A ^0xE34A477A
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

Hash func_68(int iParam0) // Position - 0x120F Hash - 0xC02FF737 ^0x4B828969
{
	switch (iParam0)
	{
		case 1:
			return joaat("CUTSCENE_MPCGOI1");
	
		case 2:
			return joaat("CUTSCENE_MPCGOI2");
	
		case 3:
			return -732709691;
	
		case 4:
			return 1691387227;
	
		case 5:
			return -969278268;
	
		case 6:
			return joaat("CUTSCENE_MPRM1");
	
		case 7:
			return 317202356;
	
		case 8:
			return 2111135919;
	
		case 9:
			return 1835271178;
	
		default:
		
	}

	return 0;
}

int func_69(int iParam0, int iParam1) // Position - 0x129E Hash - 0x751E6540 ^0x7AE49023
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
			
				case 1:
					return -193397860;
			
				case 2:
					return -1639158743;
			
				case 3:
					return -545263819;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
			
				case 1:
					return 1266428317;
			
				case 2:
					return -1342435444;
			
				case 3:
					return -243002563;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
			
				case 1:
					return 1587973176;
			
				case 2:
					return 1338229360;
			
				case 3:
					return -271501111;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
			
				case 1:
					return -466995375;
			
				case 2:
					return -398924971;
			
				case 3:
					return -1232006170;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
			
				case 1:
					return -1144971953;
			
				case 2:
					return 86781479;
			
				case 3:
					return 416111513;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
			
				case 1:
					return -2015262927;
			
				case 2:
					return -707938197;
			
				case 3:
					return 2136054096;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
			
				case 1:
					return 407185110;
			
				case 2:
					return -769170006;
			
				case 3:
					return -411703805;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
			
				case 1:
					return 410660064;
			
				case 2:
					return -254646314;
			
				case 3:
					return 1524612084;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 0:
					return -602228764;
			
				case 1:
					return 1765518873;
			
				case 2:
					return -1908979734;
			
				case 3:
					return 923460453;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

struct<2> func_70(int iParam0) // Position - 0x1540 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_71(int iParam0, var uParam1, Any* panParam2) // Position - 0x1554 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_29(iParam0))
		return false;

	func_106(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_72(Any* panParam0, int iParam1) // Position - 0x165F Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x1696 Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return 1;
	}
	else
	{
		bParam7;
	}

	return 0;
}

int func_74(int iParam0) // Position - 0x16C6 Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case joaat("MPSW_LOCATION_09"):
			return 9;
	
		case joaat("MPSW_LOCATION_04"):
			return 4;
	
		case joaat("MPSW_LOCATION_03"):
			return 3;
	
		case joaat("MPSW_LOCATION_06"):
			return 6;
	
		case joaat("MPSW_LOCATION_02"):
			return 2;
	
		case joaat("MPSW_LOCATION_08"):
			return 8;
	
		case joaat("MPSW_LOCATION_01"):
			return 1;
	
		case joaat("MPSW_LOCATION_07"):
			return 7;
	
		case joaat("MPSW_LOCATION_11"):
			return 11;
	
		case joaat("MPSW_LOCATION_10"):
			return 10;
	
		case joaat("MPSW_LOCATION_00"):
			return 0;
	
		case joaat("MPSW_LOCATION_05"):
			return 5;
	
		default:
		
	}

	return 0;
}

int func_75(int iParam0) // Position - 0x1753 Hash - 0xB8EC44B7 ^0x241D648F
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_post_office");
	
		case 2:
			return joaat("shop_asb_train_station");
	
		case 3:
			return 548657065;
	
		case 4:
			return 243086140;
	
		case 5:
			return joaat("shop_blk_bank");
	
		case 6:
			return joaat("shop_blk_general_store");
	
		case 7:
			return joaat("shop_blk_gunsmith");
	
		case 8:
			return joaat("shop_blk_barber");
	
		case 9:
			return joaat("shop_blk_butcher");
	
		case 10:
			return joaat("shop_blk_bartender");
	
		case 11:
			return joaat("SHOP_BLK_PIANIST");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
	
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
	
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
	
		case 19:
			return joaat("shop_blk_tailor");
	
		case 20:
			return joaat("shop_moonshine_still");
	
		case 21:
			return joaat("shop_moonshine_still");
	
		case 22:
			return joaat("shop_emr_fence");
	
		case 23:
			return joaat("shop_emr_general_store");
	
		case 24:
			return joaat("shop_emr_post_office");
	
		case 25:
			return joaat("shop_emr_train_station");
	
		case 26:
			return joaat("shop_lag_bait_store");
	
		case 27:
			return joaat("shop_rgg_post_office");
	
		case 28:
			return joaat("shop_rgg_train_station");
	
		case 29:
			return joaat("shop_rho_bank");
	
		case 30:
			return joaat("shop_rho_butcher");
	
		case 31:
			return joaat("shop_rho_fence");
	
		case 32:
			return joaat("shop_moonshine_still");
	
		case 33:
			return joaat("shop_rho_general_store");
	
		case 34:
			return joaat("shop_rho_gunsmith");
	
		case 35:
			return joaat("shop_rho_post_office");
	
		case 36:
			return joaat("shop_rho_bartender");
	
		case 37:
			return joaat("SHOP_RHO_PIANIST");
	
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
	
		case 39:
			return joaat("shop_rho_train_station");
	
		case 40:
			return -305029900;
	
		case 41:
			return joaat("shop_scm_horse_shop");
	
		case 42:
			return joaat("shop_sdn_bank");
	
		case 43:
			return joaat("shop_sdn_barber");
	
		case 44:
			return joaat("shop_sdn_butcher");
	
		case 45:
			return joaat("shop_sdn_doctor");
	
		case 46:
			return joaat("shop_sdn_fence");
	
		case 47:
			return joaat("shop_moonshine_still");
	
		case 48:
			return joaat("shop_sdn_general_store");
	
		case 49:
			return joaat("shop_sdn_gunsmith");
	
		case 50:
			return joaat("shop_sdn_horse_shop");
	
		case 51:
			return joaat("shop_sdn_post_office");
	
		case 52:
			return joaat("shop_sdn_train_station");
	
		case 53:
			return joaat("shop_sdn_tailor");
	
		case 54:
			return joaat("shop_sdn_bartender");
	
		case 55:
			return joaat("SHOP_SDN_PIANIST");
	
		case 56:
			return joaat("shop_sdn_bartender_slum");
	
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
	
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
	
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
	
		case 60:
			return joaat("shop_sdn_photo_studio");
	
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
	
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
	
		case 63:
			return joaat("shop_sdn_trapper");
	
		case 64:
			return 878376253;
	
		case 65:
			return 1388932648;
	
		case 66:
			return -2076086367;
	
		case 67:
			return 1529797091;
	
		case 68:
			return joaat("shop_str_butcher");
	
		case 69:
			return joaat("shop_str_general_store");
	
		case 70:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 71:
			return joaat("shop_str_horse_shop");
	
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
	
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
	
		case 74:
			return joaat("shop_str_post_office");
	
		case 75:
			return joaat("shop_str_bartender");
	
		case 76:
			return 1008537949;
	
		case 77:
			return joaat("shop_val_bank");
	
		case 78:
			return joaat("shop_val_barber");
	
		case 79:
			return joaat("shop_val_bartender");
	
		case 80:
			return joaat("SHOP_VAL_PIANIST");
	
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 82:
			return joaat("shop_val_butcher");
	
		case 83:
			return joaat("shop_val_doctor");
	
		case 84:
			return joaat("shop_val_general_store");
	
		case 85:
			return joaat("shop_val_gunsmith");
	
		case 86:
			return joaat("shop_val_horse_shop");
	
		case 87:
			return joaat("shop_val_post_office");
	
		case 88:
			return joaat("shop_val_train_station");
	
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
	
		case 90:
			return joaat("shop_val_hotel");
	
		case 91:
			return joaat("shop_val_bartender_slum");
	
		case 92:
			return joaat("shop_moonshine_still");
	
		case 93:
			return joaat("SHOP_VAN_FENCE");
	
		case 94:
			return joaat("shop_van_bartender");
	
		case 95:
			return joaat("SHOP_VAN_PIANIST");
	
		case 96:
			return joaat("shop_van_horse_shop");
	
		case 97:
			return joaat("shop_van_train_station");
	
		case 98:
			return joaat("shop_van_post_office");
	
		case 99:
			return joaat("shop_wal_general_store");
	
		case 100:
			return joaat("shop_wal_train_station");
	
		case 101:
			return joaat("shop_wal_post_office");
	
		case 102:
			return joaat("shop_tbl_general_store");
	
		case 103:
			return joaat("shop_tbl_gunsmith");
	
		case 104:
			return joaat("shop_tbl_butcher");
	
		case 105:
			return joaat("shop_tbl_bartender");
	
		case 106:
			return joaat("SHOP_TBL_PIANIST");
	
		case 107:
			return joaat("shop_tbl_horse_shop");
	
		case 108:
			return joaat("shop_amd_general_store");
	
		case 109:
			return joaat("shop_amd_honor_mp");
	
		case 110:
			return joaat("shop_amd_bartender");
	
		case 111:
			return joaat("shop_amd_post_office");
	
		case 112:
			return joaat("shop_amd_train_station");
	
		case 113:
			return joaat("shop_roj_honor_mp");
	
		case 114:
			return joaat("shop_boj_honor_mp");
	
		case 115:
			return joaat("shop_moonshine_still");
	
		case 116:
			return joaat("shop_ryc_fence");
	
		case 117:
			return joaat("shop_ben_post_office");
	
		case 118:
			return joaat("shop_ben_train_station");
	
		case 119:
			return joaat("shop_dynamic");
	
		case 120:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_val_coach");
	
		case 122:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 123:
			return joaat("shop_blk_coach");
	
		case 124:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 125:
			return joaat("shop_sdn_coach");
	
		case 126:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 127:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 128:
			return joaat("shop_van_coach");
	
		case 129:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 130:
			return joaat("shop_thl_fence");
	
		case 131:
			return joaat("shop_moonshine_still");
	
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
	
		case 133:
			return joaat("shop_wilderness_supplies");
	
		case 134:
			return -765151559;
	
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
	
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
	
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
	
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
	
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
	
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
	
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
	
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
	
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
	
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
	
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
	
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
	
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
	
		case 148:
			return 1239556700;
	
		case 149:
			return 1968750441;
	
		case 150:
			return 317019665;
	
		case 151:
			return 1421441577;
	
		case 152:
			return joaat("shop_anywhere_handheld");
	
		case 153:
			return joaat("shop_camp_lockbox");
	
		case 154:
			return joaat("shop_camp_butchertable");
	
		case 155:
			return joaat("shop_bvh_doctor");
	
		case 156:
			return joaat("shop_bvh_general_store");
	
		case 157:
			return joaat("shop_bvh_gunsmith");
	
		case 158:
			return joaat("shop_bvh_horse_trainer");
	
		case 159:
			return joaat("shop_clm_doctor");
	
		case 160:
			return joaat("shop_clm_general_store");
	
		case 161:
			return joaat("shop_clm_gunsmith");
	
		case 162:
			return joaat("shop_clm_horse_trainer");
	
		case 163:
			return joaat("shop_clm_horse_fence");
	
		case 164:
			return joaat("shop_hso_doctor");
	
		case 165:
			return joaat("shop_hso_general_store");
	
		case 166:
			return joaat("shop_hso_gunsmith");
	
		case 167:
			return joaat("shop_hso_horse_trainer");
	
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 172:
			return joaat("shop_shb_doctor");
	
		case 173:
			return joaat("shop_shb_general_store");
	
		case 174:
			return joaat("shop_shb_gunsmith");
	
		case 175:
			return joaat("shop_shb_horse_trainer");
	
		case 176:
			return joaat("shop_weapon_mod_store");
	
		case 177:
			return joaat("shop_clothing");
	
		case 178:
			return joaat("shop_camp_shaving");
	
		case 179:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

void func_76(int iParam0) // Position - 0x213B Hash - 0xB3D6FC5E ^0xB3D6FC5E
{
	if (Global_1260806.f_3363 != iParam0)
		Global_1260806.f_3363 = iParam0;

	return;
}

BOOL func_77() // Position - 0x2158 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_107(1);
}

void func_78() // Position - 0x2165 Hash - 0xEC3FDAED ^0xEC3FDAED
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1260806.f_3365[i] != -1)
		{
			Global_1260806.f_3365[i] = -1;
			Global_1260806.f_3398[i] = 0f;
		}
	}

	return;
}

void func_79() // Position - 0x21A7 Hash - 0xDE5A5A16 ^0x198811BD
{
	int i;

	for (i = 0; i <= Global_1260806.f_3350 - 1; i = i + 1)
	{
		if (Global_1254993[i /*3*/].f_1 != 0)
			Global_1254993[i /*3*/].f_1 = 0;
	}

	return;
}

void func_80() // Position - 0x21E2 Hash - 0x97061C1F ^0x17AE62B0
{
	int i;
	int num;
	int num2;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))
		{
			num = Global_1257509[i /*103*/].f_94;
		
			if (!func_108(num))
			{
				Global_1260806.f_3365[num2] = num;
				Global_1260806.f_3398[num2] = Global_1257509[i /*103*/].f_95;
				num2 = num2 + 1;
			}
		}
	}

	return;
}

void func_81(int iParam0, BOOL bParam1) // Position - 0x2248 Hash - 0x4DCDCCF ^0xEA28542D
{
	if (func_82(iParam0))
	{
		bParam1;
		func_109(&(Global_1254993.f_2512.f_1), iParam0);
	}

	return;
}

BOOL func_82(int iParam0) // Position - 0x226D Hash - 0x69CFCCB3 ^0x20C7D959
{
	return func_110(Global_1254993.f_2512.f_1, iParam0);
}

void func_83(BOOL bParam0, int iParam1) // Position - 0x2284 Hash - 0xB7C40C6C ^0x93D5FD9C
{
	int num;
	int i;
	int num2;

	if (bParam0 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)))
		return;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1260806.f_3365[i] == -1)
			break;
	
		num2 = Global_1260806.f_3365[i];
	
		if (num2 >= 0)
		{
			if (bParam0)
				func_111(&num, num2, iParam1);
			else
				func_112(&num, num2);
		
			if (num != 0)
				Global_1260806.f_3365[i] = -2;
		}
	}

	return;
}

void func_84(int iParam0, BOOL bParam1) // Position - 0x230A Hash - 0x85C2193A ^0x322AE3B2
{
	if (!func_82(iParam0))
	{
		bParam1;
		func_113(&(Global_1254993.f_2512.f_1), iParam0);
	}

	return;
}

BOOL func_85() // Position - 0x2330 Hash - 0x8425689A ^0x8425689A
{
	int num;

	while (num < 1)
	{
		func_83(true, Global_1260806.f_3364);
		num = num + 1;
		Global_1260806.f_3364 = Global_1260806.f_3364 + 1;
	
		if (Global_1260806.f_3364 >= 32)
			break;
	}

	if (Global_1260806.f_3364 < 32)
		return false;
	else
		Global_1260806.f_3364 = 0;

	return true;
}

BOOL func_86(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x238E Hash - 0x46351D6D ^0x46351D6D
{
	float num;
	int i;

	*uParam2 = -1;
	*uParam1 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1260806.f_3365[i] >= 0)
		{
			if (Global_1260806.f_3398[i] > num)
			{
				*uParam1 = Global_1260806.f_3365[i];
				num = Global_1260806.f_3398[i];
				*uParam3 = i;
			}
		}
		else if (Global_1260806.f_3365[i] == -1)
		{
			break;
		}
	}

	if (*uParam1 >= 0 && *uParam1 < Global_1260806.f_3350)
	{
		func_114(*uParam1, uParam0, uParam2);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_87(Any* panParam0, int iParam1, int iParam2, int iParam3, Player plParam4) // Position - 0x2436 Hash - 0x843FDFCA ^0xC3ED9912
{
	var src;
	int i;

	src.f_10 = 1106247680;
	src.f_15 = 4;
	src.f_20 = 4;
	src.f_26 = -1;
	src.f_28 = 2;
	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 31);

	for (i = 0; i < 2; i = i + 1)
	{
		panParam0->f_28[i] = 0;
	}

	if (plParam4 == 255)
		plParam4 = PLAYER::PLAYER_ID();

	switch (iParam1)
	{
		case 0:
			*panParam0 = 0;
			panParam0->f_1 = 0;
			panParam0->f_2 = 0;
			break;
	
		case 1:
			func_115(panParam0, iParam2);
			break;
	
		case 2:
			func_116(panParam0, iParam2);
			break;
	
		case 3:
			func_117(panParam0, iParam2);
			break;
	
		case 4:
			func_118(panParam0, iParam2);
			break;
	
		case 5:
			func_122(panParam0, iParam2);
			break;
	
		case 6:
			func_120(panParam0, iParam2);
			break;
	
		case 7:
			func_121(panParam0, iParam2, iParam3);
			break;
	
		case 8:
			func_126(panParam0, iParam2);
			break;
	
		case 9:
			func_124(panParam0, iParam2, iParam3);
			break;
	
		case 10:
			func_125(panParam0, iParam2);
			break;
	
		case 11:
			func_123(panParam0, iParam2);
			break;
	
		case 12:
			func_119(panParam0, iParam2);
			break;
	
		case 13:
			func_127(panParam0, iParam2, plParam4);
			break;
	
		case 14:
			func_128(panParam0, iParam2, iParam3);
			break;
	
		case 15:
			func_129(panParam0, iParam2);
			break;
	
		case 16:
			func_130(panParam0, iParam2, iParam3);
			break;
	
		case 17:
			func_145(panParam0, iParam2);
			break;
	
		case 18:
			func_146(panParam0, iParam2);
			break;
	
		case 19:
			func_147(panParam0, iParam2);
			break;
	
		case 20:
			func_148(panParam0, iParam2);
			break;
	
		case 21:
			func_132(panParam0, iParam2);
			break;
	
		case 22:
			func_136(panParam0, iParam2);
			break;
	
		case 23:
			func_137(panParam0, iParam2);
			break;
	
		case 24:
			func_135(panParam0, iParam2);
			break;
	
		case 25:
			func_134(panParam0, iParam2);
			break;
	
		case 26:
			func_139(panParam0, iParam2);
			break;
	
		case 27:
			func_141(panParam0, iParam2);
			break;
	
		case 28:
			func_133(panParam0, iParam2);
			break;
	
		case 29:
			func_138(panParam0, iParam2);
			break;
	
		case 30:
			func_140(panParam0, iParam2);
			break;
	
		case 31:
			func_131(panParam0, iParam2);
			break;
	
		case 32:
			func_142(panParam0, iParam2, iParam3);
			break;
	
		case 33:
			func_143(panParam0, iParam2, iParam3);
			break;
	
		case 34:
			func_144(panParam0, iParam2);
			break;
	
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
			func_149(panParam0, iParam1, iParam2);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_88(Vector3 vParam0, var uParam1, var uParam2, int iParam3, float fParam4) // Position - 0x275C Hash - 0x96220277 ^0x84123E84
{
	BOOL isSphereVisible;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_150(PLAYER::PLAYER_ID()), vParam0, true) <= fParam4 + iParam3)
		isSphereVisible = CAM::IS_SPHERE_VISIBLE(vParam0, iParam3);

	if (!isSphereVisible)
		isSphereVisible = NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam0, iParam3, fParam4 + iParam3);

	return isSphereVisible;
}

void func_89(Any anParam0, int iParam1) // Position - 0x27A3 Hash - 0x8EF8435F ^0x8EF8435F
{
	func_151(anParam0, 1, iParam1, 255);
	return;
}

int func_90(int iParam0) // Position - 0x27B6 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1260806.f_3432[iParam0];
}

BOOL func_91(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x27C9 Hash - 0x7B6D10DF ^0x7B6D10DF
{
	var unk;
	var unk6;
	int num;
	int num2;
	int num3;

	unk = 4;
	unk[0] = 1;
	unk[1] = 2;
	unk[2] = 4;
	unk[3] = 6;
	unk6 = { func_152(iParam0, iParam1) };
	num = func_45(unk6);
	num2 = func_153(num, uParam2);
	num3 = unk[MISC::GET_RANDOM_INT_IN_RANGE(0, 4)];
	return func_154(uParam3, num3, -1, num2);
}

void func_92(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2825 Hash - 0x81E84103 ^0xABF19203
{
	var unk;

	unk.f_5 = -1;
	unk.f_10 = -1;
	unk.f_11 = -1;
	unk.f_14.f_1 = -1;
	unk.f_21 = 6;
	func_155(&unk, iParam1, iParam2, iParam3, iParam4);
	MISC::COPY_SCRIPT_STRUCT(&(unk.f_14), panParam0, 4);
	func_156(&unk);
	return;
}

void func_93(int iParam0, int iParam1, int iParam2) // Position - 0x2871 Hash - 0x20F6E5C2 ^0x5863794
{
	var unk;

	unk.f_5 = -1;
	unk.f_10 = -1;
	unk.f_11 = -1;
	unk.f_14.f_1 = -1;
	unk.f_21 = 6;
	func_155(&unk, iParam0, iParam1, iParam2, -1);
	func_156(&unk);
	return;
}

int func_94(int iParam0, int iParam1, var uParam2, Player plParam3) // Position - 0x28B1 Hash - 0xBCFB6EA3 ^0xBCFB6EA3
{
	if (func_157(uParam2, 16))
		return func_158(iParam0, uParam2, plParam3);

	return func_159(iParam0, iParam1, uParam2);
}

int func_95(int iParam0, int iParam1, int iParam2) // Position - 0x28DE Hash - 0xF67E0F74 ^0x99903CA9
{
	var unk;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_87(&unk, iParam0, iParam1, iParam2, 255);
	return func_160(unk.f_4, unk.f_2, 1, 0);
}

BOOL func_96(int iParam0, int iParam1, int iParam2, int iParam3, Player plParam4) // Position - 0x2927 Hash - 0x6DC09CD3 ^0x3FD04F6E
{
	var unk;
	var unk41;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;
	unk41.f_10 = 1106247680;
	unk41.f_15 = 4;
	unk41.f_20 = 4;
	unk41.f_26 = -1;
	unk41.f_28 = 2;
	func_87(&unk41, iParam0, iParam1, -1, 255);
	func_161(&(unk.f_8.f_5), unk41.f_5);
	unk.f_2 = 7;
	unk.f_5 = 0;
	unk.f_8.f_1 = 2;
	unk.f_8 = 2;
	unk.f_8.f_2 = { unk41.f_11 };
	unk.f_23 = func_162(iParam0);
	unk.f_23.f_1 = func_163(iParam0);
	unk.f_23.f_5 = plParam4;
	unk.f_23.f_14 = iParam1;
	unk.f_23.f_15 = iParam2;
	unk.f_23.f_16 = iParam3;
	unk.f_23.f_7 = 1;
	unk.f_23.f_8[0 /*4*/].f_3 = BUILTIN::FLOOR(Global_1901671.f_245.f_64);
	unk.f_23.f_2 = BUILTIN::FLOOR(Global_1901671.f_245.f_65);
	unk.f_23.f_8[0 /*4*/] = func_164(unk41.f_11);
	unk.f_23.f_6 = 7601;

	if (func_165(&Global_1210485[Global_1295666 /*204*/]))
		return false;

	if (!func_166(&Global_1210485[Global_1295666 /*204*/], &unk, false, 0, 0, 0, 0))
		return false;

	func_167(&unk);
	return true;
}

void func_97(int iParam0) // Position - 0x2AF5 Hash - 0x610FC0B7 ^0x444F5A7F
{
	*iParam0 = Global_1295666.f_16;
	return;
}

void func_98() // Position - 0x2B06 Hash - 0xE2B9F9FB ^0x94DB5FE4
{
	int num;
	var unk;
	int i;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;

	for (i = 0; i <= 46; i = i + 1)
	{
		func_87(&unk, i, -1, -1, 255);
	
		if (unk.f_6 == 2)
		{
			func_168(unk.f_8);
			num = func_168(unk.f_8);
			Global_1260806.f_3432[i] = num;
		}
	}

	return;
}

void func_99(int iParam0) // Position - 0x2B7A Hash - 0xB3D6FC5E ^0xB3D6FC5E
{
	if (Global_1260806.f_3349 != iParam0)
		Global_1260806.f_3349 = iParam0;

	return;
}

int func_100() // Position - 0x2B97 Hash - 0x91BA7F46 ^0xDFF75EC6
{
	var unk;
	int num;
	int num2;
	int i;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;

	for (i = 1; i <= 46; i = i + 1)
	{
		num = i;
		func_87(&unk, num, -1, -1, 255);
		num2 = num2 + unk;
	}

	return num2;
}

void func_101(BOOL bParam0) // Position - 0x2BF0 Hash - 0xB31994A ^0xA825B174
{
	Global_1260806.f_3482 = 0;
	Global_1260806.f_3481 = 0;
	Global_1260806.f_3480 = 1;
	Global_1260806.f_3483 = -1;
	Global_1260806.f_3484 = 0f;

	if (bParam0)
	{
		Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_94 = -1;
		Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_95 = 0f;
	}

	return;
}

void func_102(int iParam0, BOOL bParam1) // Position - 0x2C3F Hash - 0x3C2D2A28 ^0xC6494F74
{
	if (func_169(iParam0, 255))
	{
		bParam1;
		func_109(&(Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_96), iParam0);
	}

	return;
}

BOOL func_103(var uParam0) // Position - 0x2C69 Hash - 0x6B0E459C ^0xBA2861EE
{
	int num;
	int num2;
	BOOL flag;

	num2.f_10 = 1106247680;
	num2.f_15 = 4;
	num2.f_20 = 4;
	num2.f_26 = -1;
	num2.f_28 = 2;

	while (num < 3)
	{
		func_87(&num2, Global_1260806.f_3480, Global_1260806.f_3481, -1, 255);
	
		if (num2 <= 0)
		{
			func_170(&flag);
			break;
		}
	
		func_171(Global_1260806.f_3480, Global_1260806.f_3481, Global_1260806.f_3482, &num2);
		num = num + 1;
		Global_1260806.f_3481 = Global_1260806.f_3481 + 1;
		Global_1260806.f_3482 = Global_1260806.f_3482 + 1;
	
		if (Global_1260806.f_3482 == 836)
		{
			flag = true;
			break;
		}
	
		if (num2 == Global_1260806.f_3481)
			func_170(&flag);
	}

	if (!flag)
		return false;

	if (Global_1260806.f_3483 != -1)
	{
		Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_94 = Global_1260806.f_3483;
		Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_95 = Global_1260806.f_3484;
	}
	else
	{
		Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_94 = -1;
		Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_95 = 0f;
		*uParam0 = 1;
	}

	func_101(false);
	return true;
}

void func_104(int iParam0, BOOL bParam1) // Position - 0x2D8D Hash - 0x575D6CD5 ^0x533A8BE7
{
	if (!func_169(iParam0, 255))
	{
		bParam1;
		func_113(&(Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_96), iParam0);
	}

	return;
}

struct<2> func_105(int iParam0, int iParam1) // Position - 0x2DB8 Hash - 0x2DE2269E ^0x2DE2269E
{
	var statId;
	var unk2;
	int num;

	if (iParam1 == 0)
		return unk2;

	num = func_172(iParam0);

	if (num == 0)
		return unk2;

	statId = { func_173(iParam1, num) };

	if (!STATS::STAT_ID_IS_VALID(&statId))
		return unk2;

	return statId;
}

void func_106(Any* panParam0) // Position - 0x2E03 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_107(int iParam0) // Position - 0x2E19 Hash - 0x7C4C37A4 ^0x32EBD96E
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_169(iParam0, i))
			return 1;
	}

	return 0;
}

BOOL func_108(int iParam0) // Position - 0x2E53 Hash - 0xAF47152C ^0xAF47152C
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1260806.f_3365[i] == iParam0)
			return true;
		else if (Global_1260806.f_3365[i] == -1)
			return false;
	}

	return false;
}

void func_109(int iParam0, int iParam1) // Position - 0x2E99 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_110(int iParam0, int iParam1) // Position - 0x2EAE Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_111(var uParam0, int iParam1, int iParam2) // Position - 0x2EBD Hash - 0x6EA9CED ^0x6EA9CED
{
	func_174(uParam0, iParam1, iParam2);
	func_175(uParam0, iParam1, iParam2);
	return;
}

void func_112(var uParam0, int iParam1) // Position - 0x2ED9 Hash - 0xF55E891F ^0xF55E891F
{
	func_176(uParam0, iParam1);
	return;
}

void func_113(int iParam0, int iParam1) // Position - 0x2EE9 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_114(int iParam0, var uParam1, var uParam2) // Position - 0x2EFA Hash - 0xEF83025F ^0x2D6BF14A
{
	int num;
	int i;
	int num2;

	num2.f_10 = 1106247680;
	num2.f_15 = 4;
	num2.f_20 = 4;
	num2.f_26 = -1;
	num2.f_28 = 2;

	for (i = 1; i <= 46; i = i + 1)
	{
		*uParam1 = i;
		func_87(&num2, *uParam1, -1, -1, 255);
		num = num + num2;
	
		if (num >= iParam0)
		{
			num = num - num2;
			*uParam2 = 0;
		
			while (*uParam2 <= num2 - 1)
			{
				if (num == iParam0)
					return 1;
			
				num = num + 1;
				*uParam2 = *uParam2 + 1;
			}
		}
	}

	return 0;
}

void func_115(Any* panParam0, int iParam1) // Position - 0x2F8C Hash - 0x1B652E10 ^0xE0CB7F13
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 7;
	func_177(panParam0, iParam1);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2150.3738f, 1728.2147f, 125.2313f };
			break;
	
		case 1:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
			panParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
	
		case 2:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
			panParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
	
		case 3:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
			panParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
	
		case 4:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
			panParam0->f_11 = { -1370.7115f, -515.7384f, 125.267f };
			break;
	
		case 5:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
			panParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
	
		case 6:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
			panParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
	
		case 7:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
			panParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
	
		case 8:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
			panParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
	
		case 9:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
			panParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}

	return;
}

void func_116(Any* panParam0, int iParam1) // Position - 0x313E Hash - 0x54238BE5 ^0xC54B9184
{
	panParam0->f_6 = 1;
	*panParam0 = 20;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			panParam0->f_11 = { -1925.3425f, -2119.336f, 52.16934f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			panParam0->f_11 = { 136.29797f, 35.34337f, 101.27948f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			panParam0->f_11 = { -910.7408f, 860.84534f, 134.66505f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			panParam0->f_11 = { 2788.7786f, 1077.2836f, 57.99089f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			panParam0->f_11 = { 1751.9142f, -1117.7389f, 40.70011f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			panParam0->f_11 = { 1290.4315f, -836.7289f, 77.47561f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			panParam0->f_11 = { 308.11407f, 1187.8075f, 180.17459f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			panParam0->f_11 = { -1779.5381f, -235.38936f, 181.20294f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			panParam0->f_11 = { -1290.3986f, -1179.1986f, 72.33453f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			panParam0->f_11 = { -2306.8904f, -1546.2078f, 152.01866f };
			break;
	
		case 10:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			panParam0->f_11 = { -2724.458f, -2521.5242f, 64.76124f };
			break;
	
		case 11:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			panParam0->f_11 = { -4461.8833f, -3271.474f, 14.54459f };
			break;
	
		case 12:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			panParam0->f_11 = { -4631.0537f, -2738.483f, -12.13559f };
			break;
	
		case 13:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			panParam0->f_11 = { -5678.259f, -3182.9395f, -22.66476f };
			break;
	
		case 14:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			panParam0->f_11 = { -1688.8683f, -2272.0908f, 44.12061f };
			break;
	
		case 15:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			panParam0->f_11 = { -1621.917f, 1628.2081f, 235.96451f };
			break;
	
		case 16:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			panParam0->f_11 = { 420.36334f, 2020.9095f, 230.44226f };
			break;
	
		case 17:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			panParam0->f_11 = { -517.4607f, 510.53485f, 102.23069f };
			break;
	
		case 18:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			panParam0->f_11 = { 1775.6008f, 546.3866f, 106.63338f };
			break;
	
		case 19:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			panParam0->f_11 = { 1612.415f, -1715.3972f, 52.91364f };
			break;
	}

	return;
}

void func_117(Any* panParam0, int iParam1) // Position - 0x34EB Hash - 0x5EE1A985 ^0xAE443C00
{
	panParam0->f_6 = 1;
	*panParam0 = 21;
	panParam0->f_1 = 8;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2252.0354f, 1342.7057f, 84.5573f };
			break;
	
		case 1:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			panParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
	
		case 2:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			panParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
	
		case 3:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			panParam0->f_11 = { 1130.5413f, 575.7938f, 86.66257f };
			break;
	
		case 4:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			func_180(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			panParam0->f_11 = { -754.38934f, -399.11334f, 40.84306f };
			break;
	
		case 5:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			func_180(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			panParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
	
		case 6:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			panParam0->f_11 = { -2085.7773f, -161.9067f, 208.0633f };
			break;
	
		case 7:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			panParam0->f_11 = { -1678.3037f, -517.8369f, 140.867f };
			break;
	
		case 8:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			panParam0->f_11 = { -2624.8809f, -339.7662f, 141.8102f };
			break;
	
		case 9:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			panParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
	
		case 10:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 5);
			func_180(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			panParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
	
		case 11:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			panParam0->f_11 = { -1069.1802f, -1919.6165f, 42.3447f };
			break;
	
		case 12:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			panParam0->f_11 = { 1673.6715f, 1440.0455f, 146.0849f };
			break;
	
		case 13:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			panParam0->f_11 = { 1562.4343f, 1445.2374f, 145.2842f };
			break;
	
		case 14:
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			panParam0->f_11 = { 1244.9269f, 1177.2512f, 148.8856f };
			break;
	
		case 15:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			func_180(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			panParam0->f_11 = { 1926.7029f, -362.3477f, 42.4864f };
			break;
	
		case 16:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			func_180(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			panParam0->f_11 = { 2192.4888f, -318.3198f, 40.7232f };
			break;
	
		case 17:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			func_180(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			panParam0->f_11 = { 2408.447f, -490.45618f, 40.9243f };
			break;
	
		case 18:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			panParam0->f_11 = { -3243.502f, -3187.1414f, -9.3137f };
			break;
	
		case 19:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			panParam0->f_11 = { -1745.0105f, -2929.1406f, -12.3355f };
			break;
	
		case 20:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			panParam0->f_11 = { -1735.0702f, -2378.3552f, 41.289f };
			break;
	}

	return;
}

void func_118(Any* panParam0, int iParam1) // Position - 0x3AB1 Hash - 0x9A737154 ^0x31A63517
{
	panParam0->f_6 = 1;
	*panParam0 = 11;
	panParam0->f_1 = 1;
	panParam0->f_2 = 2;
	func_178(panParam0);
	panParam0->f_15[0] = joaat("22_TO_4");

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			panParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			panParam0->f_11 = { 1274.5785f, -1218.2861f, 80.6496f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			panParam0->f_11 = { -954.4733f, -1203.2461f, 54.5241f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			panParam0->f_11 = { -5442.5366f, -2904.5088f, -0.0668f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			panParam0->f_11 = { -4438.9077f, -2693.0728f, -12.033f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			panParam0->f_11 = { -3339.6006f, -2869.2827f, -6.9507f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			panParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			panParam0->f_11 = { 1735.8651f, -422.7769f, 47.1349f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			panParam0->f_11 = { 1978.5011f, -1902.6475f, 41.0487f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			panParam0->f_11 = { 2757.9985f, -1078.6664f, 45.8905f };
			break;
	
		case 10:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			panParam0->f_11 = { -1762.1147f, -237.9833f, 181.9701f };
			break;
	}

	return;
}

void func_119(Any* panParam0, int iParam1) // Position - 0x3CD6 Hash - 0xDF444245 ^0x16DE4ED9
{
	panParam0->f_6 = 1;
	*panParam0 = 15;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			panParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			panParam0->f_11 = { 1428.8171f, -1812.9952f, 57.37384f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			panParam0->f_11 = { 2578.8933f, -852.3694f, 41.3078f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			panParam0->f_11 = { 2798.119f, 1432.1865f, 77.71185f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			panParam0->f_11 = { 1243.4546f, 526.5765f, 87.43867f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			panParam0->f_11 = { -28.69774f, 1111.2297f, 167.99446f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			panParam0->f_11 = { -546.60913f, -298.20566f, 52.56811f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			panParam0->f_11 = { -1403.6885f, 383.75064f, 102.2472f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			panParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			panParam0->f_11 = { -1459.7523f, -1915.6023f, 50.93545f };
			break;
	
		case 10:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			panParam0->f_11 = { -2470.0183f, -2426.993f, 59.1458f };
			break;
	
		case 11:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			panParam0->f_11 = { -3092.9353f, -3166.527f, -1.36638f };
			break;
	
		case 12:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			panParam0->f_11 = { -3685.6243f, -2769.2468f, -15.14988f };
			break;
	
		case 13:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			panParam0->f_11 = { -4668.993f, -3706.8193f, 12.54352f };
			break;
	
		case 14:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			panParam0->f_11 = { -5194.4834f, -2883.913f, 2.32447f };
			break;
	}

	return;
}

void func_120(Any* panParam0, int iParam1) // Position - 0x3FA3 Hash - 0x6A9A796D ^0xE47C788C
{
	panParam0->f_6 = 1;
	*panParam0 = 16;
	panParam0->f_1 = 2;
	panParam0->f_2 = 8;
	func_181(panParam0, iParam1);

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			panParam0->f_11 = { 498.92355f, 1191.2755f, 179.50165f };
			break;
	
		case 1:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			panParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
	
		case 2:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			panParam0->f_11 = { 2271.7534f, -440.52768f, 40.82026f };
			break;
	
		case 3:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			panParam0->f_11 = { 2000.5798f, -499.0656f, 41.0245f };
			break;
	
		case 4:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			panParam0->f_11 = { 2299.8096f, -898.4015f, 41.04434f };
			break;
	
		case 5:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			panParam0->f_11 = { 2369.2922f, -673.8396f, 41.36789f };
			break;
	
		case 6:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			panParam0->f_11 = { 1531.3302f, 1578.8372f, 147.40665f };
			break;
	
		case 7:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			panParam0->f_11 = { 945.3031f, 1142.5409f, 147.4809f };
			break;
	
		case 8:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			panParam0->f_11 = { -1126.4692f, 815.38293f, 117.65359f };
			break;
	
		case 9:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			panParam0->f_11 = { -2063.8135f, 935.3212f, 147.08078f };
			break;
	
		case 10:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			panParam0->f_11 = { -1589.6876f, -1425.3187f, 80.34965f };
			break;
	
		case 11:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			panParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
	
		case 12:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -2690.1038f, -2892.6267f, 64.73759f };
			break;
	
		case 13:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			panParam0->f_11 = { -2914.5295f, -2558.9668f, 61.66708f };
			break;
	
		case 14:
			func_180(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			panParam0->f_11 = { -4545.762f, -3673.9324f, 17.87756f };
			break;
	
		case 15:
			func_180(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			panParam0->f_11 = { -4720.841f, -3356.9995f, 8.61745f };
			break;
	}

	return;
}

void func_121(Any* panParam0, int iParam1, int iParam2) // Position - 0x42E9 Hash - 0xBFAC7426 ^0xCE61387F
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 12;
	panParam0->f_2 = 3;

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			panParam0->f_11 = { 468.69318f, 60.0849f, 134.48164f };
			break;
	
		case 1:
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 8);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			panParam0->f_11 = { -408.7124f, 154.07425f, 40.84526f };
			break;
	
		case 2:
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 6);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			panParam0->f_11 = { -1929.6549f, -1348.3383f, 105.84004f };
			break;
	
		case 3:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			panParam0->f_11 = { -2003.943f, -2158.1348f, 54.2301f };
			break;
	
		case 4:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			panParam0->f_11 = { -1272.2256f, 97.47642f, 70.53004f };
			break;
	
		case 5:
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 7);
			func_180(panParam0, 8);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			panParam0->f_11 = { -2350.8613f, -359.48505f, 143.74742f };
			break;
	
		case 6:
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			func_180(panParam0, 6);
			func_180(panParam0, 7);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			panParam0->f_11 = { -1736.7568f, 306.27814f, 108.13549f };
			break;
	
		case 7:
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			func_180(panParam0, 6);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			panParam0->f_11 = { -4964.499f, -3399.8892f, 7.97322f };
			break;
	
		case 8:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -2192.8054f, -2778.9773f, 69.01174f };
			break;
	
		case 9:
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			func_180(panParam0, 5);
			func_180(panParam0, 9);
			func_180(panParam0, 10);
			func_180(panParam0, 11);
			func_182(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			panParam0->f_11 = { -4603.1655f, -2701.4338f, -10.12116f };
			break;
	}

	return;
}

void func_122(Any* panParam0, int iParam1) // Position - 0x46EE Hash - 0x5D320215 ^0x3150B5E
{
	panParam0->f_6 = 1;
	*panParam0 = 21;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			panParam0->f_11 = { 1452.2505f, -1695.1158f, 64.9668f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			panParam0->f_11 = { 1163.5503f, -324.00864f, 97.10712f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2682.1038f, 858.447f, 85.90118f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			panParam0->f_11 = { 1311.3326f, 1183.9337f, 151.58594f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			panParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			panParam0->f_11 = { 109.94106f, 1282.2561f, 176.292f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			panParam0->f_11 = { -1450.8594f, 1686.2659f, 255.2526f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			panParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			panParam0->f_11 = { -1698.0358f, 380.6171f, 106.08258f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			panParam0->f_11 = { -2016.359f, -909.59174f, 84.91344f };
			break;
	
		case 10:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			panParam0->f_11 = { -1362.0912f, -1267.6244f, 82.41972f };
			break;
	
		case 11:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			panParam0->f_11 = { -2449.0513f, -1457.9423f, 148.70496f };
			break;
	
		case 12:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			panParam0->f_11 = { -1559.3394f, -1930.7284f, 50.99157f };
			break;
	
		case 13:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			panParam0->f_11 = { -1764.4445f, -2717.768f, 62.81413f };
			break;
	
		case 14:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			panParam0->f_11 = { -2190.5444f, -2200.2883f, 64.42333f };
			break;
	
		case 15:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			panParam0->f_11 = { -2803.2598f, -3142.291f, 5.88098f };
			break;
	
		case 16:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -3175.1685f, -2402.267f, 22.72451f };
			break;
	
		case 17:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			panParam0->f_11 = { -4220.6113f, -2690.138f, 0.65931f };
			break;
	
		case 18:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			panParam0->f_11 = { -4372.619f, -3274.0547f, 20.26154f };
			break;
	
		case 19:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			panParam0->f_11 = { -5456.922f, -3562.7441f, -21.1142f };
			break;
	
		case 20:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			panParam0->f_11 = { -5796.2217f, -2650.1453f, -16.68393f };
			break;
	}

	return;
}

void func_123(Any* panParam0, int iParam1) // Position - 0x4AC9 Hash - 0x8450976C ^0x21F65E49
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	func_178(panParam0);
	func_183(panParam0, 2);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			panParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			panParam0->f_11 = { 1465.5144f, -821.0334f, 50.2372f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			panParam0->f_11 = { -1082.3317f, -696.7548f, 70.5432f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			panParam0->f_11 = { -1462.9519f, -1929.859f, 48.4187f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			panParam0->f_11 = { -4988.295f, -3902.3462f, -0.03286f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			panParam0->f_11 = { -2770.4727f, -2936.5059f, 64.84297f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			panParam0->f_11 = { -1209.6105f, -1812.1654f, 61.23543f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			panParam0->f_11 = { -1706.9928f, -580.9286f, 149.92998f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			panParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			panParam0->f_11 = { 1778.2363f, -1731.3589f, 48.27552f };
			break;
	}

	return;
}

void func_124(Any* panParam0, int iParam1, int iParam2) // Position - 0x4CBC Hash - 0xCA41473A ^0x4BBB9DEE
{
	panParam0->f_6 = 1;
	*panParam0 = 12;
	panParam0->f_1 = 4;
	panParam0->f_2 = 5;

	switch (iParam1)
	{
		case 0:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			panParam0->f_11 = { -1159.1152f, 397.0877f, 60.4953f };
			break;
	
		case 1:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			panParam0->f_11 = { -1278.3585f, 291.4224f, 76.6652f };
			break;
	
		case 2:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			panParam0->f_11 = { -1371.2797f, 283.4114f, 86.0114f };
			break;
	
		case 3:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			panParam0->f_11 = { -1117.6871f, 406.6783f, 55.3681f };
			break;
	
		case 4:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			panParam0->f_11 = { -1288.3231f, 148.5012f, 71.7864f };
			break;
	
		case 5:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			panParam0->f_11 = { -1648.4469f, -114.858f, 170.0504f };
			break;
	
		case 6:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			panParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
	
		case 7:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			panParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
	
		case 8:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			panParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
	
		case 9:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			panParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
	
		case 10:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			panParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
	
		case 11:
			func_184(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			panParam0->f_11 = { 817.72473f, 566.34467f, 114.37611f };
			break;
	}

	return;
}

void func_125(Any* panParam0, int iParam1) // Position - 0x4F14 Hash - 0x34A025B7 ^0xE89D46E7
{
	panParam0->f_6 = 1;
	*panParam0 = 20;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			panParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			panParam0->f_11 = { -1541.353f, -2334.6106f, 43.10187f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			panParam0->f_11 = { -3456.3904f, -2262.3394f, 0.01624f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			panParam0->f_11 = { -3703.7117f, -3594.2244f, 45.18983f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			panParam0->f_11 = { -1581.5511f, -1656.278f, 78.51012f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			panParam0->f_11 = { -1236.2917f, -1118.5502f, 68.58572f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			panParam0->f_11 = { -1264.1251f, -773.21173f, 91.83559f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			panParam0->f_11 = { -1414.6073f, -234.21231f, 99.22668f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			panParam0->f_11 = { -1721.4021f, 553.60004f, 112.52401f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			panParam0->f_11 = { -484.79907f, -70.36918f, 42.94242f };
			break;
	
		case 10:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			panParam0->f_11 = { -458.58392f, -346.5686f, 80.66556f };
			break;
	
		case 11:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			panParam0->f_11 = { 1089.5831f, 23.75282f, 88.22131f };
			break;
	
		case 12:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			panParam0->f_11 = { 1000.1311f, 417.59085f, 107.90821f };
			break;
	
		case 13:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			panParam0->f_11 = { 713.73315f, 23.52884f, 152.07973f };
			break;
	
		case 14:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			panParam0->f_11 = { 63.77304f, 1023.48724f, 201.97491f };
			break;
	
		case 15:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			panParam0->f_11 = { 366.667f, 1408.6646f, 175.0605f };
			break;
	
		case 16:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			panParam0->f_11 = { 1785.9344f, 1522.0093f, 155.1442f };
			break;
	
		case 17:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			panParam0->f_11 = { 1279.0696f, 1164.6782f, 149.25081f };
			break;
	
		case 18:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			panParam0->f_11 = { 2106.4556f, 207.61694f, 72.68985f };
			break;
	
		case 19:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			panParam0->f_11 = { 2675.5486f, 179.96567f, 54.14579f };
			break;
	}

	return;
}

void func_126(Any* panParam0, int iParam1) // Position - 0x52C2 Hash - 0x592A5E34 ^0x881E9437
{
	panParam0->f_6 = 1;
	*panParam0 = 9;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	func_178(panParam0);
	panParam0->f_10 = 60f;

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			panParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			panParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			panParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			panParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			panParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			panParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			panParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}

	return;
}

void func_127(Any* panParam0, int iParam1, Player plParam2) // Position - 0x548A Hash - 0x9556483D ^0xB363A474
{
	panParam0->f_6 = 1;
	*panParam0 = 1;
	panParam0->f_1 = 6;
	panParam0->f_2 = 1;
	func_178(panParam0);
	func_183(panParam0, 1);
	func_183(panParam0, 4);
	func_183(panParam0, 8);
	func_183(panParam0, 16);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			panParam0->f_11 = { func_186(func_185(plParam2)) };
			break;
	}

	return;
}

void func_128(Any* panParam0, int iParam1, int iParam2) // Position - 0x54F9 Hash - 0x56DE7B4C ^0xC010063B
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 5;
	panParam0->f_2 = 6;

	switch (iParam1)
	{
		case 0:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			panParam0->f_11 = { -347.45312f, 740.86426f, 116.4549f };
			break;
	
		case 1:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			panParam0->f_11 = { -360.64975f, 824.0327f, 115.47684f };
			break;
	
		case 2:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			panParam0->f_11 = { 2957.2253f, 524.47064f, 43.66619f };
			break;
	
		case 3:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			panParam0->f_11 = { 2975.8853f, 537.22455f, 42.42131f };
			break;
	
		case 4:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			panParam0->f_11 = { 1444.6334f, -1417.9818f, 78.22246f };
			break;
	
		case 5:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			panParam0->f_11 = { 1394.1692f, -1422.8539f, 78.97552f };
			break;
	
		case 6:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			panParam0->f_11 = { 2996.1448f, 1351.8083f, 42.95977f };
			break;
	
		case 7:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			panParam0->f_11 = { 2915.7434f, 1231.9519f, 43.5792f };
			break;
	
		case 8:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			panParam0->f_11 = { -833.56085f, -1543.9165f, 59.6274f };
			break;
	
		case 9:
			func_187(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			panParam0->f_11 = { -1019.64f, -1138.9438f, 56.39161f };
			break;
	}

	return;
}

void func_129(Any* panParam0, int iParam1) // Position - 0x56F3 Hash - 0x362990E7 ^0x4AF57DA
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 1;
	*panParam0 = 12;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			panParam0->f_11 = { 2208.6682f, -350.9536f, 41.488f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			panParam0->f_11 = { 1733.9232f, -727.6727f, 40.8996f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			panParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			panParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			panParam0->f_11 = { 646.006f, 1304.9276f, 193.4366f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			panParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			panParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			panParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			panParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			panParam0->f_11 = { 2566.8933f, -71.0977f, 49.3333f };
			break;
	
		case 10:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 1389.072f, -2196.6956f, 48.3307f };
			break;
	
		case 11:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}

	return;
}

void func_130(Any* panParam0, int iParam1, int iParam2) // Position - 0x593E Hash - 0x25DA952B ^0xD79372A6
{
	panParam0->f_6 = 1;
	*panParam0 = 15;
	panParam0->f_1 = 2;
	panParam0->f_2 = 4;
	func_188(panParam0, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_0");
			panParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
	
		case 1:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_1");
			panParam0->f_11 = { 2602.444f, -1286.5703f, 51.2567f };
			break;
	
		case 2:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_2");
			panParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
	
		case 3:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_3");
			panParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
	
		case 4:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_4");
			panParam0->f_11 = { 2530.8828f, -1149.3745f, 49.0052f };
			break;
	
		case 5:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_5");
			panParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
	
		case 6:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_6");
			panParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
	
		case 7:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_7");
			panParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
	
		case 8:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_8");
			panParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
	
		case 9:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_9");
			panParam0->f_11 = { 2593.1646f, -1207.4845f, 52.3112f };
			break;
	
		case 10:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_10");
			panParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
	
		case 11:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_11");
			panParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
	
		case 12:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_0");
			panParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
	
		case 13:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_1");
			panParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
	
		case 14:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_2");
			panParam0->f_11 = { -843.7784f, -1282.6638f, 42.3634f };
			break;
	}

	return;
}

void func_131(Any* panParam0, int iParam1) // Position - 0x5BB3 Hash - 0x76E410F2 ^0x728520F5
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 15;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -1084113577;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 8;
	}

	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -672003008;
			panParam0->f_11 = { 2153.7854f, -1677.7432f, 40.5666f };
			break;
	
		case 1:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -396317411;
			panParam0->f_11 = { 2188.5845f, -1595.6418f, 40.591f };
			break;
	
		case 2:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -1239103346;
			panParam0->f_11 = { 2078.438f, -1694.9067f, 40.6896f };
			break;
	
		case 3:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -889851344;
			panParam0->f_11 = { 2066.834f, -1767.3042f, 40.1183f };
			break;
	
		case 4:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -1582784618;
			panParam0->f_11 = { 2131.7183f, -1865.6598f, 40.0837f };
			break;
	
		case 5:
			func_189(panParam0, iParam1);
			panParam0->f_5 = 407459900;
			panParam0->f_11 = { 2189.6125f, -654.0466f, 40.5628f };
			break;
	
		case 6:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -1359903346;
			panParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
	
		case 7:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -1075501195;
			panParam0->f_11 = { 2212.4346f, -599.6181f, 40.5628f };
			break;
	
		case 8:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -761049871;
			panParam0->f_11 = { 2273.3408f, -693.9393f, 40.5628f };
			break;
	
		case 9:
			func_189(panParam0, iParam1);
			panParam0->f_5 = 1397804618;
			panParam0->f_11 = { 2314.6592f, -599.6119f, 40.5628f };
			break;
	
		case 10:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -636095416;
			panParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
	
		case 11:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -933474091;
			panParam0->f_11 = { 2800.1301f, -727.0102f, 40.6116f };
			break;
	
		case 12:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -1209520147;
			panParam0->f_11 = { 2726.1284f, -662.6138f, 40.5283f };
			break;
	
		case 13:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -1524528544;
			panParam0->f_11 = { 2710.1377f, -534.5544f, 40.615f };
			break;
	
		case 14:
			func_189(panParam0, iParam1);
			panParam0->f_5 = -449082741;
			panParam0->f_11 = { 2728.1738f, -468.3862f, 40.7744f };
			break;
	}

	return;
}

void func_132(Any* panParam0, int iParam1) // Position - 0x5EDC Hash - 0x46DCFEF ^0xD3E139E3
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 13;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 477228254;

	if (iParam1 > 7)
	{
		panParam0->f_27 = 18;
		panParam0->f_20[0] = joaat("Night");
	}
	else
	{
		panParam0->f_27 = 1;
		panParam0->f_20[0] = joaat("DAY");
	}

	switch (iParam1)
	{
		case 0:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -42638554;
			panParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
	
		case 1:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -330841909;
			panParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
	
		case 2:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -637690825;
			panParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
	
		case 3:
			func_190(panParam0, iParam1);
			panParam0->f_5 = 1210841234;
			panParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
	
		case 4:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -275624566;
			panParam0->f_11 = { -2023.4004f, 662.6884f, 119.8702f };
			break;
	
		case 5:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -2051147289;
			panParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
	
		case 6:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -1760846718;
			panParam0->f_11 = { -2487.2324f, 414.2487f, 148.2772f };
			break;
	
		case 7:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -1591562064;
			panParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
	
		case 8:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -1159724897;
			panParam0->f_11 = { -1377.9451f, 265.2666f, 78.222f };
			break;
	
		case 9:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -114459335;
			panParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
	
		case 10:
			func_190(panParam0, iParam1);
			panParam0->f_5 = 564350440;
			panParam0->f_11 = { -1091.1877f, -37.3214f, 40.5256f };
			break;
	
		case 11:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -840522068;
			panParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
	
		case 12:
			func_190(panParam0, iParam1);
			panParam0->f_5 = -2076667055;
			panParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}

	return;
}

void func_133(Any* panParam0, int iParam1) // Position - 0x61A0 Hash - 0x51DB4086 ^0x774CE5CE
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 1796670491;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 0;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 18;
	}

	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = -666643000;
			panParam0->f_11 = { -2323.8208f, -444.3168f, 143.2396f };
			break;
	
		case 1:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = -930743103;
			panParam0->f_11 = { -2387.7808f, -333.0453f, 142.8896f };
			break;
	
		case 2:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = -4199612;
			panParam0->f_11 = { -2622.5005f, -342.7303f, 141.5315f };
			break;
	
		case 3:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = -1480377528;
			panParam0->f_11 = { -2760.3196f, -77.8632f, 151.8582f };
			break;
	
		case 4:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = -1817640794;
			panParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
	
		case 5:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = -915442079;
			panParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
	
		case 6:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = 1928422814;
			panParam0->f_11 = { 2257.8928f, 256.7348f, 43.6559f };
			break;
	
		case 7:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = 1940620434;
			panParam0->f_11 = { 2324.8257f, 895.6353f, 71.6451f };
			break;
	
		case 8:
			func_180(panParam0, 1);
			panParam0->f_5 = -665538457;
			panParam0->f_11 = { 2383.811f, 1084.1549f, 85.9333f };
			break;
	
		case 9:
			func_180(panParam0, 1);
			panParam0->f_5 = 355243564;
			panParam0->f_11 = { 2398.5303f, 773.5043f, 67.0099f };
			break;
	}

	return;
}

void func_134(Any* panParam0, int iParam1) // Position - 0x6423 Hash - 0x40694B7A ^0x27E59267
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 326651247;
	func_178(panParam0);

	if (iParam1 > 4)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 9;
	}

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 0);
			panParam0->f_5 = -1024453831;
			panParam0->f_11 = { -1856.6093f, 1802.9187f, 234.305f };
			break;
	
		case 1:
			func_180(panParam0, 0);
			panParam0->f_5 = -652787833;
			panParam0->f_11 = { -1821.1525f, 1566.3519f, 235.8068f };
			break;
	
		case 2:
			func_180(panParam0, 0);
			panParam0->f_5 = 230697180;
			panParam0->f_11 = { -2069.5774f, 1812.8115f, 246.0542f };
			break;
	
		case 3:
			func_180(panParam0, 0);
			panParam0->f_5 = -543699832;
			panParam0->f_11 = { -1932.0067f, 2153.2158f, 322.7221f };
			break;
	
		case 4:
			func_180(panParam0, 0);
			panParam0->f_5 = 894826503;
			panParam0->f_11 = { -1752.3472f, 1951.3691f, 264.5091f };
			break;
	
		case 5:
			func_180(panParam0, 1);
			panParam0->f_5 = 1666294228;
			panParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
	
		case 6:
			func_180(panParam0, 1);
			panParam0->f_5 = 1426851145;
			panParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
	
		case 7:
			func_180(panParam0, 1);
			panParam0->f_5 = -807339271;
			panParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
	
		case 8:
			func_180(panParam0, 1);
			panParam0->f_5 = -1050255868;
			panParam0->f_11 = { 1251.4652f, 344.8225f, 92.1045f };
			break;
	
		case 9:
			func_180(panParam0, 1);
			panParam0->f_5 = -1406848126;
			panParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}

	return;
}

void func_135(Any* panParam0, int iParam1) // Position - 0x6657 Hash - 0x5DB55177 ^0x939820EC
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 11;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -1848813677;
	func_178(panParam0);

	if (iParam1 > 5)
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 9;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 18;
	}

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 0);
			panParam0->f_5 = -1741150966;
			panParam0->f_11 = { -1352.6392f, -2550.3784f, 74.9777f };
			break;
	
		case 1:
			func_180(panParam0, 0);
			panParam0->f_5 = -796584541;
			panParam0->f_11 = { -1913.6312f, -2213.5647f, 42.0518f };
			break;
	
		case 2:
			func_180(panParam0, 0);
			panParam0->f_5 = 80182823;
			panParam0->f_11 = { -1745.8838f, -2388.8066f, 42.8205f };
			break;
	
		case 3:
			func_180(panParam0, 1);
			panParam0->f_5 = 1964620432;
			panParam0->f_11 = { -1593.1063f, -2351.92f, 43.0229f };
			break;
	
		case 4:
			func_180(panParam0, 1);
			panParam0->f_5 = 1731665611;
			panParam0->f_11 = { -1800.6515f, -1644.9438f, 96.7288f };
			break;
	
		case 5:
			func_180(panParam0, 1);
			panParam0->f_5 = -1728544175;
			panParam0->f_11 = { -1628.2157f, -1943.5537f, 50.1671f };
			break;
	
		case 6:
			func_180(panParam0, 2);
			panParam0->f_5 = -1242537170;
			panParam0->f_11 = { 2443.7122f, -19.2163f, 43.2151f };
			break;
	
		case 7:
			func_180(panParam0, 2);
			panParam0->f_5 = 2036591126;
			panParam0->f_11 = { 2715.9102f, -128.7452f, 42.0147f };
			break;
	
		case 8:
			func_180(panParam0, 2);
			panParam0->f_5 = 197299925;
			panParam0->f_11 = { 2363.7769f, 13.1458f, 41.3272f };
			break;
	
		case 9:
			func_180(panParam0, 2);
			panParam0->f_5 = 1291850063;
			panParam0->f_11 = { 2355.3376f, -247.3491f, 41.5576f };
			break;
	
		case 10:
			func_180(panParam0, 2);
			panParam0->f_5 = 1599124976;
			panParam0->f_11 = { 2601.3857f, -212.5256f, 43.7812f };
			break;
	}

	return;
}

void func_136(Any* panParam0, int iParam1) // Position - 0x68B9 Hash - 0x5ACAFE75 ^0xE98E7282
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 20;
	panParam0->f_1 = 4;
	panParam0->f_2 = 2;
	panParam0->f_28[0] = 458679075;

	switch (iParam1)
	{
		case 0:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 980541174;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
	
		case 1:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 1220770713;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
	
		case 2:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 1322813407;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
	
		case 3:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 1552098100;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
	
		case 4:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 1916358304;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
	
		case 5:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -1363212564;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5896.217f, -3811.8545f, -31.2514f };
			break;
	
		case 6:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 686685000;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6360.1875f, -3401.3994f, -14.7027f };
			break;
	
		case 7:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -1524698208;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6241.614f, -3430.4648f, 1.465f };
			break;
	
		case 8:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -1804348854;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6091.5396f, -3398.5269f, 17.9157f };
			break;
	
		case 9:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -2035403073;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6054.187f, -3594.0505f, -4.8637f };
			break;
	
		case 10:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 728964560;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5609.956f, -3781.1257f, -24.15435f };
			break;
	
		case 11:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 765075998;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5664.643f, -3561.7263f, -24.1565f };
			break;
	
		case 12:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 1070974613;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5811.0273f, -3789.5337f, -27.8079f };
			break;
	
		case 13:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -1088797396;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5906.5083f, -3520.4355f, -24.1555f };
			break;
	
		case 14:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -740987230;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5753.8623f, -3302.776f, -24.1569f };
			break;
	
		case 15:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 2110034336;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -937.2829f, -1900.0708f, 50.81326f };
			break;
	
		case 16:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -783796062;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 16;
			panParam0->f_11 = { -1060.5697f, -1731.0603f, 75.49813f };
			break;
	
		case 17:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -545106666;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -1052.6598f, -1784.9424f, 62.46124f };
			break;
	
		case 18:
			func_191(panParam0, iParam1);
			panParam0->f_5 = 379536207;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 16;
			panParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
	
		case 19:
			func_191(panParam0, iParam1);
			panParam0->f_5 = -992108595;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -1331.61f, -1892.6777f, 60.4174f };
			break;
	}

	return;
}

void func_137(Any* panParam0, int iParam1) // Position - 0x6DF0 Hash - 0xAE4094E3 ^0x98242EA7
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 15;
	panParam0->f_1 = 5;
	panParam0->f_2 = 2;
	panParam0->f_28[0] = 78935770;

	switch (iParam1)
	{
		case 0:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 1750035473;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1486.6128f, -2140.1343f, 47.13319f };
			break;
	
		case 1:
			func_192(panParam0, iParam1);
			panParam0->f_5 = -1499633496;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1400.0927f, -2166.3218f, 47.3376f };
			break;
	
		case 2:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 2019068959;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1229.7979f, -2101.0017f, 57.1906f };
			break;
	
		case 3:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 1010504677;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1036.5808f, -2147.274f, 43.912f };
			break;
	
		case 4:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 1297331734;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1190.8431f, -2218.737f, 57.2836f };
			break;
	
		case 5:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 980309385;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
	
		case 6:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 1451396569;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 1632.4163f, -616.6262f, 42.8678f };
			break;
	
		case 7:
			func_192(panParam0, iParam1);
			panParam0->f_5 = -1404978858;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2127.6238f, -907.4355f, 40.6492f };
			break;
	
		case 8:
			func_192(panParam0, iParam1);
			panParam0->f_5 = -1173302028;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2023.6965f, -1017.1588f, 42.3998f };
			break;
	
		case 9:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 2143543387;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
	
		case 10:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 1187325752;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 2183.5396f, -213.3573f, 45.5331f };
			break;
	
		case 11:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 201273773;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 16;
			panParam0->f_11 = { 2185.6724f, -43.506f, 52.2188f };
			break;
	
		case 12:
			func_192(panParam0, iParam1);
			panParam0->f_5 = 36249089;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
	
		case 13:
			func_192(panParam0, iParam1);
			panParam0->f_5 = -1717449488;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 16;
			panParam0->f_11 = { 1832.4199f, -317.352f, 45.708f };
			break;
	
		case 14:
			func_192(panParam0, iParam1);
			panParam0->f_5 = -2014041707;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 1876.5323f, -453.5455f, 43.2695f };
			break;
	}

	return;
}

void func_138(Any* panParam0, int iParam1) // Position - 0x71F1 Hash - 0xA6BC0DDA ^0xF0B31598
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 6;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 29257535;
	func_178(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dusk");
		panParam0->f_27 = 0;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 9;
	}

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			panParam0->f_5 = -813726569;
			panParam0->f_11 = { -2685.8171f, -2697.8298f, 71.8905f };
			break;
	
		case 1:
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			panParam0->f_5 = -991070207;
			panParam0->f_11 = { -2841.4717f, -2845.1875f, 86.3463f };
			break;
	
		case 2:
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			panParam0->f_5 = 1385332783;
			panParam0->f_11 = { -3043.8962f, -2154.732f, 59.9256f };
			break;
	
		case 3:
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			panParam0->f_5 = 1394180521;
			panParam0->f_11 = { -2653.5857f, -2143.5112f, 75.962f };
			break;
	
		case 4:
			func_180(panParam0, 3);
			func_180(panParam0, 4);
			func_180(panParam0, 5);
			panParam0->f_5 = -1581141590;
			panParam0->f_11 = { -3228.7905f, -2434.5234f, 26.6737f };
			break;
	
		case 5:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			panParam0->f_5 = 1300807189;
			panParam0->f_11 = { -1177.5936f, -748.8547f, 67.811f };
			break;
	
		case 6:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			panParam0->f_5 = -1226288496;
			panParam0->f_11 = { -1735.6862f, -628.3361f, 145.1246f };
			break;
	
		case 7:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			panParam0->f_5 = -566411244;
			panParam0->f_11 = { -1572.9393f, -328.771f, 160.6099f };
			break;
	
		case 8:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			panParam0->f_5 = 1931184426;
			panParam0->f_11 = { -1463.6456f, -481.3466f, 129.9887f };
			break;
	
		case 9:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			panParam0->f_5 = 432310963;
			panParam0->f_11 = { -1525.9829f, -916.2361f, 88.1698f };
			break;
	}

	return;
}

void func_139(Any* panParam0, int iParam1) // Position - 0x74C8 Hash - 0xF6F1E06F ^0xB7B9575E
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 20;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -463663296;

	if (iParam1 < 10)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 57;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 57;
	}

	switch (iParam1)
	{
		case 0:
			func_193(panParam0, iParam1);
			panParam0->f_5 = 439376203;
			panParam0->f_11 = { 1200.3378f, -568.1477f, 67.3878f };
			break;
	
		case 1:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -862568936;
			panParam0->f_11 = { 1238.1017f, -546.7609f, 66.5485f };
			break;
	
		case 2:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -1361247578;
			panParam0->f_11 = { 1294.0115f, -627.1522f, 58.9807f };
			break;
	
		case 3:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -518330591;
			panParam0->f_11 = { 1330.1124f, -709.0779f, 64.7788f };
			break;
	
		case 4:
			func_193(panParam0, iParam1);
			panParam0->f_5 = 1666706329;
			panParam0->f_11 = { 1174.0096f, -520.5736f, 69.0551f };
			break;
	
		case 5:
			func_193(panParam0, iParam1);
			panParam0->f_5 = 618479763;
			panParam0->f_11 = { 627.306f, -1038.2047f, 42.0511f };
			break;
	
		case 6:
			func_193(panParam0, iParam1);
			panParam0->f_5 = 916579356;
			panParam0->f_11 = { 675.5718f, -1121.4354f, 50.7543f };
			break;
	
		case 7:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -1544831314;
			panParam0->f_11 = { 799.3545f, -1190.9348f, 42.9927f };
			break;
	
		case 8:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -1524645610;
			panParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
	
		case 9:
			func_193(panParam0, iParam1);
			panParam0->f_5 = 5765001;
			panParam0->f_11 = { 745.8436f, -1119.9094f, 55.5229f };
			break;
	
		case 10:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -147337997;
			panParam0->f_11 = { -963.4839f, 2238.2976f, 342.2684f };
			break;
	
		case 11:
			func_193(panParam0, iParam1);
			panParam0->f_5 = 46195721;
			panParam0->f_11 = { -1100.6395f, 2080.9211f, 365.7759f };
			break;
	
		case 12:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -41952889;
			panParam0->f_11 = { -1209.4318f, 2421.6323f, 309.8767f };
			break;
	
		case 13:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -280740592;
			panParam0->f_11 = { -1280.9374f, 2445.1343f, 305.019f };
			break;
	
		case 14:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -636874084;
			panParam0->f_11 = { -1340.4723f, 2298.7341f, 308.7317f };
			break;
	
		case 15:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -1240479072;
			panParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
	
		case 16:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -1479922155;
			panParam0->f_11 = { -1329.4703f, 2266.8655f, 309.1315f };
			break;
	
		case 17:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -1836252261;
			panParam0->f_11 = { -1202.5902f, 2191.1006f, 333.5445f };
			break;
	
		case 18:
			func_193(panParam0, iParam1);
			panParam0->f_5 = -2075236578;
			panParam0->f_11 = { -1171.6855f, 2299.1843f, 323.3623f };
			break;
	
		case 19:
			func_193(panParam0, iParam1);
			panParam0->f_5 = 1074322888;
			panParam0->f_11 = { -1394.3943f, 2394.8376f, 308.3089f };
			break;
	}

	return;
}

void func_140(Any* panParam0, int iParam1) // Position - 0x78EE Hash - 0x86330382 ^0x7B39CD1B
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -2109368060;
	func_178(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 0;
	}

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = 1070019252;
			panParam0->f_11 = { 2876.5347f, 2181.4087f, 156.7777f };
			break;
	
		case 1:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = -510012600;
			panParam0->f_11 = { 2808.3577f, 2290.3066f, 155.8015f };
			break;
	
		case 2:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = -250768090;
			panParam0->f_11 = { 2324.25f, 2143.9644f, 211.2929f };
			break;
	
		case 3:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = 1057891329;
			panParam0->f_11 = { 2876.5347f, 2181.4087f, 156.7777f };
			break;
	
		case 4:
			func_180(panParam0, 2);
			func_180(panParam0, 3);
			panParam0->f_5 = 863129034;
			panParam0->f_11 = { 2489.669f, 2265.4365f, 175.6015f };
			break;
	
		case 5:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = -1100103111;
			panParam0->f_11 = { -957.019f, 1550.1614f, 237.4414f };
			break;
	
		case 6:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = -383805560;
			panParam0->f_11 = { -1023.7738f, 1561.6144f, 237.4295f };
			break;
	
		case 7:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			panParam0->f_5 = -233104073;
			panParam0->f_11 = { -986.7993f, 1636.2957f, 237.4295f };
			break;
	
		case 8:
			func_180(panParam0, 1);
			panParam0->f_5 = -604353467;
			panParam0->f_11 = { -874.8361f, 1499.4232f, 245.7041f };
			break;
	
		case 9:
			func_180(panParam0, 1);
			panParam0->f_5 = 1641665016;
			panParam0->f_11 = { -919.2281f, 1482.4799f, 245.1043f };
			break;
	}

	return;
}

void func_141(Any* panParam0, int iParam1) // Position - 0x7B59 Hash - 0xABB2F709 ^0xE9EA011C
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 25;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -646307557;

	if (iParam1 < 10)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 57;
	}

	switch (iParam1)
	{
		case 0:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -1895828765;
			panParam0->f_11 = { 1649.5977f, 1335.1406f, 144.8913f };
			break;
	
		case 1:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1786489311;
			panParam0->f_11 = { 1711.2482f, 1464.3175f, 146.3869f };
			break;
	
		case 2:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1548029298;
			panParam0->f_11 = { 1569.2794f, 1372.5167f, 145.0414f };
			break;
	
		case 3:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -718766281;
			panParam0->f_11 = { 1427.0967f, 1701.4105f, 197.8922f };
			break;
	
		case 4:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -1212595111;
			panParam0->f_11 = { 1593.9575f, 1646.358f, 143.5214f };
			break;
	
		case 5:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -1283376151;
			panParam0->f_11 = { 1694.9733f, 1740.2335f, 188.4962f };
			break;
	
		case 6:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -1525768444;
			panParam0->f_11 = { 1487.9932f, 1066.912f, 182.3846f };
			break;
	
		case 7:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 249590434;
			panParam0->f_11 = { 1401.9225f, 1325.5527f, 163.9692f };
			break;
	
		case 8:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 9885199;
			panParam0->f_11 = { 1812.5867f, 1193.9237f, 215.9388f };
			break;
	
		case 9:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1343123829;
			panParam0->f_11 = { 1940.4858f, 1389.0662f, 177.8712f };
			break;
	
		case 10:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -2039750752;
			panParam0->f_11 = { 127.6135f, 1824.7876f, 199.2989f };
			break;
	
		case 11:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -2028740368;
			panParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
	
		case 12:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1508771493;
			panParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
	
		case 13:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1820404683;
			panParam0->f_11 = { 185.3962f, 1824.2019f, 200.2588f };
			break;
	
		case 14:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1332736425;
			panParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
	
		case 15:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 536875722;
			panParam0->f_11 = { 239.17f, 1914.0143f, 204.8216f };
			break;
	
		case 16:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 795259287;
			panParam0->f_11 = { 512.8569f, 1926.0737f, 199.1983f };
			break;
	
		case 17:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 20501824;
			panParam0->f_11 = { 325.2433f, 1902.0831f, 200.069f };
			break;
	
		case 18:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 320272636;
			panParam0->f_11 = { 360.4333f, 1843.8536f, 185.1447f };
			break;
	
		case 19:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1135434088;
			panParam0->f_11 = { 506.2105f, 1883.9572f, 201.9437f };
			break;
	
		case 20:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 1976647087;
			panParam0->f_11 = { 253.8551f, 1705.4384f, 187.3591f };
			break;
	
		case 21:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -2028969939;
			panParam0->f_11 = { 320.4962f, 1736.1595f, 192.2878f };
			break;
	
		case 22:
			func_194(panParam0, iParam1);
			panParam0->f_5 = 2065778767;
			panParam0->f_11 = { -29.8717f, 1716.4124f, 179.3378f };
			break;
	
		case 23:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -1385354006;
			panParam0->f_11 = { -20.6945f, 1632.4878f, 162.0277f };
			break;
	
		case 24:
			func_194(panParam0, iParam1);
			panParam0->f_5 = -1602546938;
			panParam0->f_11 = { 480.1275f, 2070.2236f, 235.143f };
			break;
	}

	return;
}

void func_142(Any* panParam0, int iParam1, int iParam2) // Position - 0x8063 Hash - 0x5C25DC38 ^0xB5972818
{
	BOOL flag;

	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 3;
	panParam0->f_2 = 2;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = -196458416;
	flag = iParam1 >= 5;

	if (!flag)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 1;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 1;
	}

	func_195(panParam0, iParam1, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -1725684832;
			panParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
	
		case 1:
			panParam0->f_5 = -1992129571;
			panParam0->f_11 = { 477.293f, -270.40164f, 143.05318f };
			break;
	
		case 2:
			panParam0->f_5 = 2064181094;
			panParam0->f_11 = { 178.33774f, -192.74625f, 126.56092f };
			break;
	
		case 3:
			panParam0->f_5 = 1983503816;
			panParam0->f_11 = { -138.12213f, -21.41103f, 95.08842f };
			break;
	
		case 4:
			panParam0->f_5 = 1603580030;
			panParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
	
		case 5:
			panParam0->f_5 = 1591141935;
			panParam0->f_11 = { -2105.9136f, -1658.8076f, 139.23032f };
			break;
	
		case 6:
			panParam0->f_5 = 1382010177;
			panParam0->f_11 = { -2322.8457f, -1606.9253f, 147.5517f };
			break;
	
		case 7:
			panParam0->f_5 = -1315566672;
			panParam0->f_11 = { -2327.0935f, -1401.0499f, 142.41951f };
			break;
	
		case 8:
			panParam0->f_5 = 395106204;
			panParam0->f_11 = { -2004.4985f, -1326.4708f, 115.41615f };
			break;
	
		case 9:
			panParam0->f_5 = 88814361;
			panParam0->f_11 = { -2532.945f, -1409.8516f, 145.39828f };
			break;
	}

	return;
}

void func_143(Any* panParam0, int iParam1, int iParam2) // Position - 0x8259 Hash - 0xED6232B3 ^0x7602ADAD
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 3;
	panParam0->f_2 = 2;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = 970130440;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_20[1] = joaat("DAY");
		panParam0->f_27 = 57;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dusk");
		panParam0->f_27 = 57;
	}

	func_196(panParam0, iParam1, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -44146172;
			panParam0->f_11 = { -4886.7227f, -3659.6113f, 23.51921f };
			break;
	
		case 1:
			panParam0->f_5 = -1882192159;
			panParam0->f_11 = { -3706.045f, -3561.4067f, 47.211f };
			break;
	
		case 2:
			panParam0->f_5 = -1446495535;
			panParam0->f_11 = { -3997.8872f, -3743.6997f, 39.394f };
			break;
	
		case 3:
			panParam0->f_5 = -1153835596;
			panParam0->f_11 = { -4533.075f, -3761.2876f, 13.8127f };
			break;
	
		case 4:
			panParam0->f_5 = 345870470;
			panParam0->f_11 = { -4165.4634f, -3614.1619f, 49.5309f };
			break;
	
		case 5:
			panParam0->f_5 = -1885586340;
			panParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
	
		case 6:
			panParam0->f_5 = 1366147128;
			panParam0->f_11 = { 1879.3193f, 2050.4155f, 269.9333f };
			break;
	
		case 7:
			panParam0->f_5 = 1740369108;
			panParam0->f_11 = { 1522.469f, 2192.8547f, 333.81f };
			break;
	
		case 8:
			panParam0->f_5 = -416486532;
			panParam0->f_11 = { 693.7542f, 2222.7292f, 222.769f };
			break;
	
		case 9:
			panParam0->f_5 = -1184690199;
			panParam0->f_11 = { 756.6907f, 2034.3179f, 266.4209f };
			break;
	}

	return;
}

void func_144(Any* panParam0, int iParam1) // Position - 0x8463 Hash - 0x4AED8B64 ^0x796FDF1A
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = -405566878;
	func_178(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_27 = 24;
		panParam0->f_20[0] = joaat("6_TO_18");
	}
	else
	{
		panParam0->f_27 = 24;
		panParam0->f_20[0] = joaat("18_TO_0");
		panParam0->f_20[1] = joaat("22_TO_4");
	}

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -145880949;
			panParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_180(panParam0, 0);
			break;
	
		case 1:
			panParam0->f_5 = 1765108824;
			panParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_180(panParam0, 0);
			break;
	
		case 2:
			panParam0->f_5 = 1620892455;
			panParam0->f_11 = { -142.6579f, 1231.1278f, 164.5134f };
			func_180(panParam0, 0);
			break;
	
		case 3:
			panParam0->f_5 = 1380531840;
			panParam0->f_11 = { 411.3364f, 1329.0742f, 180.39f };
			func_180(panParam0, 0);
			break;
	
		case 4:
			panParam0->f_5 = -1542790654;
			panParam0->f_11 = { 473.7581f, 1011.3758f, 173.0766f };
			func_180(panParam0, 0);
			break;
	
		case 5:
			panParam0->f_5 = -1733556405;
			panParam0->f_11 = { -4209.333f, -2677.5925f, 5.4303f };
			func_180(panParam0, 1);
			break;
	
		case 6:
			panParam0->f_5 = -478503693;
			panParam0->f_11 = { -4260.6167f, -2412.103f, 23.6335f };
			func_180(panParam0, 1);
			break;
	
		case 7:
			panParam0->f_5 = -156122271;
			panParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_180(panParam0, 1);
			break;
	
		case 8:
			panParam0->f_5 = 1073468916;
			panParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_180(panParam0, 1);
			break;
	
		case 9:
			panParam0->f_5 = -249481152;
			panParam0->f_11 = { -4104.4595f, -2061.2197f, 4.8147f };
			func_180(panParam0, 1);
			break;
	}

	return;
}

void func_145(Any* panParam0, int iParam1) // Position - 0x86A3 Hash - 0xD5E845EB ^0xFE3B297D
{
	panParam0->f_6 = 1;
	*panParam0 = 11;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			panParam0->f_11 = { -2586.9229f, -264.5349f, 161.6671f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			panParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			panParam0->f_11 = { -2196.5764f, 468.8412f, 119.5676f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			panParam0->f_11 = { -1637.2004f, -1513.2339f, 82.6688f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			panParam0->f_11 = { -825.3087f, -1804.9507f, 59.0313f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			panParam0->f_11 = { 1786.9149f, 1588.926f, 167.4663f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			panParam0->f_11 = { 1959.8942f, 1387.2507f, 179.786f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			panParam0->f_11 = { 637.5925f, 2099.4553f, 222.0308f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			panParam0->f_11 = { 1296.321f, 1161.6852f, 150.1379f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = 2107537913;
			panParam0->f_11 = { -2100.2473f, -1372.8866f, 127.74232f };
			break;
	
		case 10:
			func_179(panParam0);
			panParam0->f_5 = -1477292384;
			panParam0->f_11 = { -2205.0159f, -1584.1448f, 148.39436f };
			break;
	}

	return;
}

void func_146(Any* panParam0, int iParam1) // Position - 0x88BC Hash - 0xEF8140EB ^0xDE574DE1
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = -274965770;
			panParam0->f_11 = { -1109.7175f, 2104.703f, 361.4368f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = 1652259747;
			panParam0->f_11 = { -4300.761f, -3445.6018f, 33.26603f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = -743720569;
			panParam0->f_11 = { -3895.4612f, -2492.511f, -11.57848f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = -1200331578;
			panParam0->f_11 = { -2190.5076f, -2867.2227f, 25.40727f };
			break;
	
		case 4:
			func_179(panParam0);
			panParam0->f_5 = -1026512984;
			panParam0->f_11 = { -2083.8928f, -1412.5518f, 131.8581f };
			break;
	
		case 5:
			func_179(panParam0);
			panParam0->f_5 = -1017773316;
			panParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
	
		case 6:
			func_179(panParam0);
			panParam0->f_5 = 303940131;
			panParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
	
		case 7:
			func_179(panParam0);
			panParam0->f_5 = 1273284251;
			panParam0->f_11 = { 1548.0837f, 1355.0973f, 146.0557f };
			break;
	
		case 8:
			func_179(panParam0);
			panParam0->f_5 = -950817569;
			panParam0->f_11 = { 2652.989f, 1189.5033f, 118.7033f };
			break;
	
		case 9:
			func_179(panParam0);
			panParam0->f_5 = -910888222;
			panParam0->f_11 = { 1509.1018f, -2101.4487f, 45.3134f };
			break;
	}

	return;
}

void func_147(Any* panParam0, int iParam1) // Position - 0x8AA8 Hash - 0x1DCDF585 ^0xB467924F
{
	panParam0->f_6 = 1;
	*panParam0 = 7;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_178(panParam0);

	switch (iParam1)
	{
		case 0:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			panParam0->f_11 = { -1499.3971f, -553.9472f, 131.81976f };
			break;
	
		case 1:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			panParam0->f_11 = { -1760.5497f, 268.62433f, 118.69484f };
			break;
	
		case 2:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			panParam0->f_11 = { -2762.128f, -158.04846f, 150.8974f };
			break;
	
		case 3:
			func_179(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			panParam0->f_11 = { -719.5702f, -756.90515f, 49.81378f };
			break;
	
		case 4:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 951.5258f, -1248.3708f, 53.86922f };
			break;
	
		case 5:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 1088.2909f, -1418.5994f, 55.54557f };
			break;
	
		case 6:
			func_180(panParam0, 0);
			func_180(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			panParam0->f_11 = { 1289.6934f, -1603.7043f, 64.23989f };
			break;
	}

	return;
}

void func_148(Any* panParam0, int iParam1) // Position - 0x8C24 Hash - 0xB0A50286 ^0x79D650A0
{
	panParam0->f_6 = 1;
	*panParam0 = 8;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;

	switch (iParam1)
	{
		case 0:
			func_197(panParam0, iParam1);
			panParam0->f_5 = -418287183;
			panParam0->f_11 = { -2081.231f, -2774.5967f, 77.5683f };
			break;
	
		case 1:
			func_197(panParam0, iParam1);
			panParam0->f_5 = -1127015115;
			panParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
	
		case 2:
			func_197(panParam0, iParam1);
			panParam0->f_5 = -1853700459;
			panParam0->f_11 = { -2925.0168f, -2769.882f, 95.6414f };
			break;
	
		case 3:
			func_197(panParam0, iParam1);
			panParam0->f_5 = 529883832;
			panParam0->f_11 = { -2648.38f, -2977.7717f, 76.4237f };
			break;
	
		case 4:
			func_197(panParam0, iParam1);
			panParam0->f_5 = -204230900;
			panParam0->f_11 = { -2323.9211f, -2074.8455f, 88.1254f };
			break;
	
		case 5:
			func_197(panParam0, iParam1);
			panParam0->f_5 = -1938530367;
			panParam0->f_11 = { -3455.5781f, -2264.6997f, 4.7142f };
			break;
	
		case 6:
			func_197(panParam0, iParam1);
			panParam0->f_5 = 1968802033;
			panParam0->f_11 = { -3581.2175f, -3650.8904f, -12.8679f };
			break;
	
		case 7:
			func_197(panParam0, iParam1);
			panParam0->f_5 = -2098551789;
			panParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}

	return;
}

void func_149(Any* panParam0, int iParam1, int iParam2) // Position - 0x8DC0 Hash - 0x398660A6 ^0xD8BB78E3
{
	int num;

	switch (iParam1)
	{
		case 35:
			panParam0->f_8 = joaat("hideout");
			break;
	
		case 36:
			panParam0->f_8 = joaat("DYNAMIC_AMBUSH");
			break;
	
		case 37:
			panParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
			break;
	
		case 38:
			panParam0->f_8 = joaat("DYNAMIC_ESCORT");
			break;
	
		case 39:
			panParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
			break;
	
		case 40:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
			break;
	
		case 41:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
			break;
	
		case 42:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
			break;
	
		case 43:
			panParam0->f_8 = 362795228;
			break;
	
		case 44:
			panParam0->f_8 = -2096602762;
			break;
	
		case 45:
			panParam0->f_8 = -1812122325;
			break;
	
		case 46:
			panParam0->f_8 = 918897273;
			break;
	}

	num = func_90(iParam1);

	if (num == -1)
		return;

	if (iParam1 == 41 || iParam1 == 42 || iParam1 == 40)
		panParam0->f_7 = 1;
	else if (iParam1 == 43)
		panParam0->f_7 = 2;
	else if (iParam1 == 44)
		panParam0->f_7 = 3;
	else if (iParam1 == 45 || iParam1 == 46)
		panParam0->f_7 = 4;

	*panParam0 = func_198(num);
	panParam0->f_1 = 0;
	panParam0->f_6 = 2;
	func_183(panParam0, 32);

	if (iParam2 != -1)
	{
		panParam0->f_9 = func_200(func_199(num), iParam2);
		panParam0->f_15[0] = func_201(func_199(num), iParam2);
		panParam0->f_5 = func_202(num, iParam2);
		panParam0->f_11 = { func_203(num, iParam2) };
	}

	return;
}

Vector3 func_150(Player plParam0) // Position - 0x8F73 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_151(Any anParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8F87 Hash - 0x9F673585 ^0x14A8C14E
{
	Player player;
	int num;
	int num2;

	if (iParam3 == 255)
		player = PLAYER::PLAYER_ID();

	num2 = func_204(iParam1);
	num = iParam2;
	num2 && num != false;
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(anParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player), false, false), num2 || num);
	return;
}

struct<2> func_152(int iParam0, int iParam1) // Position - 0x8FC9 Hash - 0x28437B05 ^0x67BE6AB6
{
	var unk;
	var unk2;
	var unk35;

	unk = func_205(func_199(iParam0), iParam1);
	unk2 = { func_206(unk, 1, iParam0, iParam1) };

	if (unk2.f_3 != 0)
	{
		unk35 = { func_207(unk2.f_3, 4) };
	
		if (!func_29(unk35))
			return func_208();
	
		return unk35;
	}

	return func_208();
}

int func_153(int iParam0, var uParam1) // Position - 0x9025 Hash - 0xE159584F ^0x411549FD
{
	int num;
	var unk;

	num = 0;

	if (func_72(&unk, iParam0) && func_209(&unk, uParam1))
		func_73(unk, 1740047909, &num, false);

	return num;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_154(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x905B Hash - 0x52141D14 ^0x2988D55C
{
	int num;
	int randomIntInRange;
	int i;
	int endRange;
	int num2;
	int randomIntInRange2;
	int j;
	int endRange2;
	int num3;
	int value;
	BOOL address;
	BOOL flag;
	int offset;
	int randomIntInRange3;
	int k;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	BOOL flag2;

	endRange = func_210(0);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i <= endRange - 1; i = i + 1)
	{
		num = (randomIntInRange + i) % endRange;
		num4 = func_211(0, num);
	
		if (num4 == joaat("flow"))
		{
		}
		else
		{
			endRange2 = func_212(0, num4);
			randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange2);
		
			for (j = 0; j <= endRange2 - 1; j = j + 1)
			{
				num2 = (randomIntInRange2 + j) % endRange2;
				num5 = func_213(0, num4, num2);
			
				if (num5 == 0)
				{
				}
				else
				{
					num3 = func_214(num5);
				
					if (num3 <= 0)
						goto 0x180;
				
					if (iParam1 > 0)
					{
						if (num3 != iParam1)
						{
						}
						else
						{
							value = func_215(num5, 0, 0);
							flag = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value))) - 1;
							address = func_216(num5);
						
							if (flag && address == flag)
								goto 0x180;
						
							if (num6 == 0)
								flag2 = true;
							else
								flag2 = false;
						
							if (iParam2 != -1)
							{
								num8 = func_217(num5);
							
								if (num8 == iParam2)
								{
									if (!flag2)
										if (num6 != 0)
											if (iParam2 != func_217(num6) && iParam3 == 0 || iParam3 != 0 && iParam3 == num4)
												num6 = num5;
								}
								else
								{
									if (flag2)
										num6 = num5;
								
									goto 0x180;
								}
							}
						
							if (iParam3 != 0)
							{
								if (iParam3 == num4)
								{
									if (!flag2)
										if (num6 != 0)
											if (iParam3 != func_218(num6))
												num6 = num5;
								}
								else
								{
									if (flag2)
										num6 = num5;
								
									goto 0x180;
								}
							}
						
							num7 = num5;
							break;
						}
					}
				
					value = func_215(num5, 0, 0);
					flag = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value))) - 1;
					address = func_216(num5);
				
					if (flag && address == flag)
						goto 0x180;
				
					if (num6 == 0)
						flag2 = true;
					else
						flag2 = false;
				
					if (iParam2 != -1)
					{
						num8 = func_217(num5);
					
						if (num8 == iParam2)
						{
							if (!flag2)
								if (num6 != 0)
									if (iParam2 != func_217(num6) && iParam3 == 0 || iParam3 != 0 && iParam3 == num4)
										num6 = num5;
						}
						else
						{
							if (flag2)
								num6 = num5;
						
							goto 0x180;
						}
					}
				
					if (iParam3 != 0)
					{
						if (iParam3 == num4)
						{
							if (!flag2)
								if (num6 != 0)
									if (iParam3 != func_218(num6))
										num6 = num5;
						}
						else
						{
							if (flag2)
								num6 = num5;
						
							goto 0x180;
						}
					}
				
					num7 = num5;
					break;
				}
			}
		
			if (num7 != 0)
				break;
		}
	}

	if (num7 == 0)
		num7 = num6;

	if (num7 != 0)
	{
		*uParam0 = num7;
		uParam0->f_2 = func_219(num7);
		value = func_215(num7, 0, 0);
		address = func_216(num7);
		randomIntInRange3 = MISC::GET_RANDOM_INT_IN_RANGE(0, value);
	
		for (k = 0; k <= value - 1; k = k + 1)
		{
			offset = (randomIntInRange3 + k) % value;
		
			if (MISC::IS_BIT_SET(address, offset))
			{
			}
			else
			{
				uParam0->f_1 = offset;
				break;
			}
		}
	}

	return *uParam0 != 0;
}

void func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x926E Hash - 0x431D19D2 ^0x5F3C9AAC
{
	uParam0->f_4 = 1;
	uParam0->f_6 = iParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	uParam0->f_21[0 /*3*/] = { Global_34 };
	uParam0->f_7 = iParam3;
	return;
}

void func_156(Any* panParam0) // Position - 0x92AD Hash - 0xBFFF0A11 ^0xBA32B9F4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_1051645.f_16[13] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[13]))
		return;

	*panParam0 = 178;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(panParam0, 40, 5, Global_1051645.f_16[13]);
	func_220(panParam0, panParam0->f_1);
	return;
}

BOOL func_157(var uParam0, int iParam1) // Position - 0x9319 Hash - 0xBD0B8CC9 ^0x46EB929E
{
	return func_221(uParam0->f_25, iParam1);
}

int func_158(int iParam0, var uParam1, Player plParam2) // Position - 0x932B Hash - 0xBADDA39C ^0x260BD252
{
	int num;
	BOOL flag;
	int i;

	num = iParam0;
	flag = func_222(uParam1->f_3, Global_1257509[plParam2 /*103*/].f_58[num]);

	if (flag == false)
	{
		for (i = uParam1->f_1 - 1; i >= 0; i = i + -1)
		{
			if (MISC::IS_BIT_SET(uParam1->f_3, i))
				return i;
		}
	
		return 0;
	}

	return func_223(flag);
}

int func_159(int iParam0, int iParam1, var uParam2) // Position - 0x9388 Hash - 0x1EAB5410 ^0x72D848BC
{
	int num;
	var unk;
	int i;
	BOOL flag;
	int j;
	BOOL flag2;
	Player player;
	int num2;
	int num3;
	int num4;

	num = iParam0;
	unk = 16;
	flag = -1;

	for (j = 0; j <= 31; j = j + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(j);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_224(func_150(player), uParam2->f_11) > Global_1901671.f_245.f_64)
		{
		}
		else
		{
			flag2 = func_222(uParam2->f_3, Global_1257509[j /*103*/].f_58[num]);
			flag = flag && flag2;
			i = func_225(flag2, 0);
		
			if (i != -1)
				unk[i] = unk[i] + 1;
		}
	}

	if (func_226(flag) > 0)
	{
		num2 = func_160(flag, uParam2->f_1, 1, 0);
		return num2;
	}
	else
	{
		num3 = -1;
		num4 = -1;
	
		for (i = 0; i <= 15; i = i + 1)
		{
			if (unk[i] == 0)
			{
			}
			else if (unk[i] > num4)
			{
				num3 = i;
				num4 = unk[i];
			}
		}
	
		if (num3 != -1)
			return num3;
	}

	return func_227(iParam0, iParam1);
}

int func_160(BOOL bParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9490 Hash - 0xA6729010 ^0x84FF9B25
{
	int randomIntInRange;
	int startRange;
	int i;
	int endRange;
	var unk;

	iParam1 > 32;
	startRange = func_228(iParam3);

	if (iParam2 == 0)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(startRange, iParam1);
		return randomIntInRange;
	}

	unk = 32;

	for (i = startRange; i <= (startRange + iParam1) - 1; i = i + 1)
	{
		if (iParam2 == 1 && MISC::IS_BIT_SET(bParam0, i) || iParam2 == 2 && !MISC::IS_BIT_SET(bParam0, i))
		{
			unk[endRange] = i;
			endRange = endRange + 1;
		}
	}

	if (endRange == 0)
		return -1;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	return unk[randomIntInRange];
}

void func_161(var uParam0, var uParam1) // Position - 0x952E Hash - 0x4DC245EF ^0x3570A6D5
{
	uParam0->f_9 = 2;
	*uParam0 = { func_207(uParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
	return;
}

int func_162(int iParam0) // Position - 0x9551 Hash - 0x77880703 ^0x8AECE941
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return joaat("nb_animal_attack");
	
		case 2:
			return joaat("nb_arrowhead_injury");
	
		case 3:
			return joaat("nb_egg_protector");
	
		case 4:
			return joaat("nb_graverobber");
	
		case 5:
			return joaat("nb_rival_collector");
	
		case 6:
			return joaat("nb_kidnapped");
	
		case 7:
			return joaat("nb_photography");
	
		case 8:
			return joaat("nb_tied_up_ped");
	
		case 9:
			return joaat("nb_treasure_hunter");
	
		case 10:
			return joaat("nb_tree_map");
	
		case 11:
			return joaat("nb_runaway_wagon");
	
		case 12:
			return joaat("nb_hobo_dog");
	
		case 13:
			return joaat("nb_wildman");
	
		case 14:
			return joaat("nb_duel");
	
		case 15:
			return joaat("nb_moonshine_camp");
	
		case 16:
			return joaat("nb_beggar");
	
		case 17:
			return joaat("nb_stalking_hunter");
	
		case 18:
			return joaat("nb_slumped_hunter");
	
		case 19:
			return joaat("nb_crashed_wagon");
	
		case 20:
			return joaat("nb_suspension_trap");
	
		case 21:
			return joaat("la_bear");
	
		case 22:
			return joaat("la_cougar");
	
		case 23:
			return 569695338;
	
		case 24:
			return joaat("la_boar");
	
		case 25:
			return joaat("la_bison");
	
		case 26:
			return joaat("la_fox");
	
		case 27:
			return joaat("la_wolf");
	
		case 28:
			return joaat("la_beaver");
	
		case 29:
			return joaat("la_coyote");
	
		case 30:
			return joaat("la_moose");
	
		case 31:
			return joaat("la_alligator");
	
		case 32:
			return 1773252799;
	
		case 33:
			return -1209093440;
	
		case 34:
			return 901959776;
	
		default:
		
	}

	return 0;
}

int func_163(int iParam0) // Position - 0x9748 Hash - 0x4634232E ^0xDC595CD7
{
	return 2452;
}

BOOL func_164(float fParam0, var uParam1, var uParam2) // Position - 0x9753 Hash - 0xEEEBBA53 ^0xA3D9EE1A
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

BOOL func_165(int* piParam0) // Position - 0x97A8 Hash - 0x94562F20 ^0x604E8D55
{
	return *piParam0 == piParam0->f_2;
}

BOOL func_166(int* piParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x97B8 Hash - 0x2EE7EC36 ^0x3C7F57D
{
	int num;
	int num2;

	if (func_165(piParam0))
		return false;

	if (!func_229(&(uParam1->f_8)))
		return false;

	if (uParam1->f_2 == -1)
		return false;

	if (uParam1->f_2 == 5)
		uParam1->f_3 = PLAYER::PLAYER_ID();

	if (uParam1->f_5 == -1)
		return false;

	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
		return false;

	num = func_230(piParam0, uParam1);

	if (num >= 0)
		return false;

	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
			if (!func_231(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
				return false;
			break;
	
		default:
			break;
	}

	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	num2 = (piParam0->f_1 + *piParam0) % piParam0->f_2;
	uParam1->f_4 = num2;
	piParam0->f_3[num2 /*40*/] = { *uParam1 };
	func_232(&piParam0->f_3[num2 /*40*/], 0);
	*piParam0 = *piParam0 + 1;
	return true;
}

void func_167(var uParam0) // Position - 0x98A9 Hash - 0x52FF39FA ^0x75C19672
{
	var unk;

	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_2 = -1;
	unk.f_5.f_3 = 255;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_8 = 2;
	unk.f_5.f_8.f_1 = -1;
	unk.f_5.f_8.f_5 = -1;
	unk.f_5.f_8.f_5.f_1 = -1;
	unk.f_5.f_8.f_5.f_3 = -1;
	unk.f_5.f_8.f_5.f_4 = -1;
	unk.f_5.f_8.f_5.f_5 = -1;
	unk.f_5.f_8.f_5.f_6 = -1;
	unk.f_5.f_8.f_5.f_6.f_1 = -1;
	unk.f_5.f_8.f_5.f_9 = 2;
	unk.f_5.f_23.f_1 = 1024;
	unk.f_5.f_23.f_4 = -15;
	unk.f_5.f_23.f_5 = 255;
	unk.f_5.f_23.f_8 = 1;
	unk.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_5.f_23.f_13 = -1;
	unk.f_5 = { *uParam0 };
	unk.f_4 = 0;
	func_234(&unk, func_233(0, 8));
	return;
}

int func_168(int iParam0) // Position - 0x997A Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_72(&num2, iParam0))
		num = func_235() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

BOOL func_169(int iParam0, int iParam1) // Position - 0x99A5 Hash - 0xAAF44CD0 ^0x866580F5
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_110(Global_1257509[iParam1 /*103*/].f_96, iParam0);
}

void func_170(var uParam0) // Position - 0x99CA Hash - 0x12210731 ^0x12210731
{
	int num;

	Global_1260806.f_3481 = 0;
	num = Global_1260806.f_3480;
	num = num + 1;

	if (num == 47)
		*uParam0 = 1;
	else
		Global_1260806.f_3480 = num;

	return;
}

void func_171(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x9A00 Hash - 0x5281A034 ^0x80F4A961
{
	float num;
	int num2;
	int num3;
	int num4;

	num2 = num3;
	num = num + func_236(&num2, iParam0, iParam1, iParam2, uParam3);

	if (num2 != 0)
	{
		if (func_237(num2))
		{
			num4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		
			if (Global_1257509[num4 /*103*/].f_97[uParam3->f_7] < func_238(uParam3->f_7))
			{
				if (!func_30(Global_1260806.f_3487[uParam3->f_7]) || func_31(Global_1260806.f_3487[uParam3->f_7]) >= Global_1901671.f_245.f_73)
				{
					Global_1257509[num4 /*103*/].f_97[uParam3->f_7] = Global_1257509[num4 /*103*/].f_97[uParam3->f_7] + 1;
					func_97(&Global_1260806.f_3487[uParam3->f_7]);
				}
			}
		}
	
		num = -1f;
	}
	else if (num > Global_1260806.f_3484)
	{
		Global_1260806.f_3484 = num;
		Global_1260806.f_3483 = iParam2;
	}

	Global_1260806[iParam2 /*4*/].f_3 = num2;

	if (Global_1260806[iParam2 /*4*/].f_1 < Global_1295666.f_16)
	{
		func_239(iParam2);
		Global_1260806[iParam2 /*4*/].f_1 = 0;
		Global_1260806[iParam2 /*4*/].f_2 = 0;
	}

	return;
}

int func_172(int iParam0) // Position - 0x9B17 Hash - 0x17C363BB ^0xC11D606E
{
	switch (iParam0)
	{
		case 1:
			return joaat("net_beat_animal_attack");
	
		case 2:
			return joaat("net_beat_arrowhead_injury");
	
		case 3:
			return joaat("net_beat_egg_protector");
	
		case 4:
			return joaat("net_beat_graverobber");
	
		case 5:
			return joaat("net_beat_rival_collector");
	
		case 6:
			return joaat("net_beat_kidnapped");
	
		case 7:
			return joaat("net_beat_photography");
	
		case 8:
			return joaat("net_beat_tied_up_ped");
	
		case 9:
			return joaat("net_beat_treasure_hunter");
	
		case 10:
			return joaat("net_beat_tree_map");
	
		case 11:
			return joaat("net_beat_runaway_wagon");
	
		case 12:
			return joaat("net_beat_hobo_dog");
	
		case 13:
			return joaat("net_beat_wildman");
	
		case 14:
			return joaat("net_beat_duel");
	
		case 15:
			return joaat("net_beat_moonshine_camp");
	
		case 16:
			return joaat("net_beat_beggar");
	
		case 17:
			return joaat("net_beat_stalking_hunter");
	
		case 18:
			return joaat("net_beat_slumped_hunter");
	
		case 19:
			return joaat("net_beat_crashed_wagon");
	
		case 20:
			return joaat("net_beat_suspension_trap");
	
		case 21:
			return joaat("net_beat_legendary_animal_bear");
	
		case 22:
			return joaat("net_beat_legendary_animal_cougar");
	
		case 23:
			return 257784569;
	
		case 24:
			return joaat("net_beat_legendary_animal_boar");
	
		case 25:
			return 1829377792;
	
		case 26:
			return joaat("net_beat_legendary_animal_fox");
	
		case 27:
			return joaat("net_beat_legendary_animal_wolf");
	
		case 28:
			return joaat("net_beat_legendary_animal_beaver");
	
		case 29:
			return joaat("net_beat_legendary_animal_coyote");
	
		case 30:
			return -1373797819;
	
		case 31:
			return joaat("net_beat_legendary_animal_alligator");
	
		case 32:
			return -753359492;
	
		case 33:
			return -268685349;
	
		case 34:
			return -2047817190;
	
		default:
		
	}

	return 0;
}

struct<2> func_173(int iParam0, int iParam1) // Position - 0x9D03 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_174(var uParam0, int iParam1, int iParam2) // Position - 0x9D19 Hash - 0x942F4C6D ^0x1BCF12E6
{
	if (func_240(iParam1, iParam2))
		func_241(uParam0, iParam1, 8192, "host");

	return;
}

void func_175(var uParam0, int iParam1, int iParam2) // Position - 0x9D3A Hash - 0x87BA4F01 ^0x48621F3C
{
	if (func_242(iParam1, iParam2))
		Global_1254993[iParam1 /*3*/].f_1 = Global_1254993[iParam1 /*3*/].f_1 + 1;

	if (Global_1254993[iParam1 /*3*/].f_1 > 7)
		func_241(uParam0, iParam1, 4096, "host");

	return;
}

void func_176(var uParam0, int iParam1) // Position - 0x9D7F Hash - 0x387635E5 ^0x39C94179
{
	float num;
	int i;
	float num2;
	float randomFloatInRange;
	float num3;
	float num4;

	num = Global_1901671.f_245.f_62;

	if (num < 1f)
	{
		num2 = 0f;
	
		for (i = 0; i < 32; i = i + 1)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))
			{
			}
			else if (Global_1257509[i /*103*/].f_94 == iParam1)
			{
				num2 = Global_1257509[i /*103*/].f_95;
				break;
			}
		}
	
		if (func_30(Global_1254993[iParam1 /*3*/]) && func_31(Global_1254993[iParam1 /*3*/]) < Global_1901671.f_245.f_58)
		{
			func_241(uParam0, iParam1, 32, "host");
			func_97(&Global_1254993[iParam1 /*3*/]);
			return;
		}
	
		randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216);
		num3 = func_243(0f, 1f, num2 / 1.5f);
		num4 = num + (num3 * (1f - num));
	
		if (num2 < 1.5f && randomFloatInRange > num4)
		{
			Global_1254993.f_2512.f_2 = Global_1254993.f_2512.f_2 + 1;
		
			if (Global_1254993.f_2512.f_2 < 10)
			{
				func_241(uParam0, iParam1, 32, "host");
				func_97(&Global_1254993[iParam1 /*3*/]);
			}
			else
			{
				func_33(&Global_1254993[iParam1 /*3*/]);
				Global_1254993.f_2512.f_2 = 0;
			}
		}
		else
		{
			func_33(&Global_1254993[iParam1 /*3*/]);
			Global_1254993.f_2512.f_2 = 0;
		}
	}

	return;
}

void func_177(Any* panParam0, int iParam1) // Position - 0x9ECA Hash - 0x64CB2E0A ^0x64CB2E0A
{
	switch (iParam1)
	{
		case 0:
			func_244(panParam0);
			break;
	
		case 1:
			func_244(panParam0);
			break;
	
		case 2:
			func_244(panParam0);
			break;
	
		case 3:
			func_245(panParam0);
			break;
	
		case 4:
			func_244(panParam0);
			break;
	
		case 5:
			func_244(panParam0);
			break;
	
		case 6:
			func_245(panParam0);
			break;
	
		case 7:
			func_245(panParam0);
			break;
	
		case 8:
			func_245(panParam0);
			break;
	
		case 9:
			func_244(panParam0);
			break;
	
		default:
			func_179(panParam0);
			func_178(panParam0);
			break;
	}

	return;
}

void func_178(Any* panParam0) // Position - 0x9F7F Hash - 0x78864A5A ^0x4FF385C0
{
	int i;

	for (i = 0; i <= panParam0->f_2 - 1; i = i + 1)
	{
		func_246(panParam0, i);
	}

	return;
}

void func_179(Any* panParam0) // Position - 0x9FA6 Hash - 0x78864A5A ^0xDFA7B0B9
{
	int i;

	for (i = 0; i <= panParam0->f_1 - 1; i = i + 1)
	{
		func_180(panParam0, i);
	}

	return;
}

void func_180(Any* panParam0, int iParam1) // Position - 0x9FCD Hash - 0x28B904D2 ^0xF2004430
{
	MISC::SET_BIT(&(panParam0->f_3), iParam1);
	return;
}

void func_181(Any* panParam0, int iParam1) // Position - 0x9FDF Hash - 0xB53F75E2 ^0xB53F75E2
{
	switch (iParam1)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
			func_247(panParam0);
			break;
	
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_248(panParam0);
			break;
	
		default:
			func_179(panParam0);
			func_178(panParam0);
			break;
	}

	return;
}

void func_182(Any* panParam0, int iParam1) // Position - 0xA070 Hash - 0x25B11912 ^0x25B11912
{
	switch (iParam1)
	{
		case 0:
			func_246(panParam0, 0);
			break;
	
		case 1:
		case 2:
			func_246(panParam0, 1);
			func_246(panParam0, 2);
			break;
	
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_246(panParam0, 0);
			func_246(panParam0, 2);
			break;
	
		case 8:
			func_246(panParam0, 1);
			break;
	
		case 9:
		case 10:
		case 11:
			func_246(panParam0, 1);
			break;
	
		default:
			func_178(panParam0);
			break;
	}

	return;
}

void func_183(Any* panParam0, int iParam1) // Position - 0xA111 Hash - 0xEDC3BD2D ^0x1CFE187F
{
	func_249(&(panParam0->f_25), iParam1);
	return;
}

void func_184(Any* panParam0, int iParam1) // Position - 0xA123 Hash - 0x216B8EF4 ^0x216B8EF4
{
	switch (iParam1)
	{
		case 0:
			func_250(panParam0);
			break;
	
		case 1:
			func_251(panParam0);
			break;
	
		case 2:
			func_252(panParam0);
			break;
	
		case 3:
			func_253(panParam0);
			break;
	
		default:
			func_179(panParam0);
			func_178(panParam0);
			break;
	}

	return;
}

int func_185(Player plParam0) // Position - 0xA17E Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

Vector3 func_186(int iParam0) // Position - 0xA1AE Hash - 0xD853D669 ^0x22A7A43A
{
	if (!func_254(iParam0))
		return 0f, 0f, 0f;

	return Global_1141332[iParam0 /*27*/].f_20;
}

void func_187(Any* panParam0, int iParam1) // Position - 0xA1D2 Hash - 0x5241576E ^0x5241576E
{
	switch (iParam1)
	{
		case 0:
			func_255(panParam0);
			break;
	
		case 1:
		case 2:
			func_256(panParam0);
			break;
	
		case 3:
		case 4:
			func_257(panParam0);
			break;
	
		default:
			func_178(panParam0);
			break;
	}

	func_179(panParam0);
	return;
}

void func_188(Any* panParam0, int iParam1) // Position - 0xA22A Hash - 0xF3EAC257 ^0xF3EAC257
{
	switch (iParam1)
	{
		case 0:
			func_246(panParam0, 0);
			func_246(panParam0, 2);
			break;
	
		case 1:
			func_246(panParam0, 1);
			func_246(panParam0, 3);
			break;
	
		default:
			func_179(panParam0);
			func_178(panParam0);
			break;
	}

	return;
}

void func_189(Any* panParam0, int iParam1) // Position - 0xA277 Hash - 0x92F9B8BF ^0x92F9B8BF
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_180(panParam0, 2);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_180(panParam0, 0);
			break;
	
		default:
			func_180(panParam0, 0);
			break;
	}

	func_178(panParam0);
	return;
}

void func_190(Any* panParam0, int iParam1) // Position - 0xA30F Hash - 0x2EDBC20A ^0x2EDBC20A
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_180(panParam0, 0);
			break;
	
		case 4:
		case 5:
		case 6:
		case 7:
			func_180(panParam0, 1);
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_180(panParam0, 2);
			break;
	
		default:
			func_179(panParam0);
			break;
	}

	func_178(panParam0);
	return;
}

void func_191(Any* panParam0, int iParam1) // Position - 0xA39A Hash - 0xA3CE3A80 ^0xA3CE3A80
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_180(panParam0, 0);
			func_246(panParam0, 1);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(panParam0, 1);
			func_246(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_180(panParam0, 2);
			func_246(panParam0, 1);
			break;
	
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_180(panParam0, 3);
			func_246(panParam0, 0);
			break;
	}

	return;
}

void func_192(Any* panParam0, int iParam1) // Position - 0xA466 Hash - 0xCF7EC546 ^0xCF7EC546
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_180(panParam0, 0);
			func_246(panParam0, 0);
			break;
	
		case 2:
			func_180(panParam0, 1);
			func_246(panParam0, 0);
			break;
	
		case 3:
		case 4:
			func_180(panParam0, 2);
			func_246(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(panParam0, 3);
			func_246(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_180(panParam0, 4);
			func_246(panParam0, 1);
			break;
	}

	return;
}

void func_193(Any* panParam0, int iParam1) // Position - 0xA525 Hash - 0x25472C8B ^0x25472C8B
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(panParam0, 3);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			break;
	
		default:
			func_179(panParam0);
			break;
	}

	func_178(panParam0);
	return;
}

void func_194(Any* panParam0, int iParam1) // Position - 0xA5DE Hash - 0x452D89DE ^0x452D89DE
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(panParam0, 3);
			break;
	
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			break;
	
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			break;
	
		default:
			func_179(panParam0);
			break;
	}

	func_178(panParam0);
	return;
}

void func_195(Any* panParam0, int iParam1, int iParam2) // Position - 0xA6C6 Hash - 0x13E6A02D ^0x13E6A02D
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_246(panParam0, 0);
			func_180(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_246(panParam0, 1);
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			func_180(panParam0, 2);
			break;
	
		default:
			func_246(panParam0, 0);
			func_180(panParam0, 0);
			break;
	}

	return;
}

void func_196(Any* panParam0, int iParam1, int iParam2) // Position - 0xA753 Hash - 0x6656963C ^0x6656963C
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_246(panParam0, 0);
			func_180(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_246(panParam0, 1);
			func_180(panParam0, 0);
			func_180(panParam0, 1);
			break;
	
		default:
			func_246(panParam0, 0);
			func_180(panParam0, 0);
			break;
	}

	return;
}

void func_197(Any* panParam0, int iParam1) // Position - 0xA7D9 Hash - 0x1EC8FF19 ^0x1EC8FF19
{
	switch (iParam1)
	{
		case 0:
			func_178(panParam0);
			func_179(panParam0);
			break;
	
		default:
			func_178(panParam0);
			func_179(panParam0);
			break;
	}

	return;
}

int func_198(int iParam0) // Position - 0xA80D Hash - 0xEEAE9B95 ^0x7FE78BE2
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_3;
}

int func_199(int iParam0) // Position - 0xA829 Hash - 0x2A0C2E1D ^0x2A0C2E1D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

var func_200(int iParam0, int iParam1) // Position - 0xA843 Hash - 0x1B6EFA9A ^0x5BE8148D
{
	var unk;
	var unk2;

	if (func_72(&unk2, iParam0) && func_258(&unk2, iParam1))
		func_73(unk2, 1099008783, &unk, false);

	return unk;
}

int func_201(int iParam0, int iParam1) // Position - 0xA876 Hash - 0xE159584F ^0x439F0C8B
{
	int num;
	var unk;

	num = 0;

	if (func_72(&unk, iParam0) && func_258(&unk, iParam1))
		func_73(unk, -1052341598, &num, false);

	return num;
}

Hash func_202(int iParam0, int iParam1) // Position - 0xA8AC Hash - 0x36CC74E2 ^0x36CC74E2
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_259(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/];
}

Vector3 func_203(int iParam0, int iParam1) // Position - 0xA8D3 Hash - 0xF9603F7A ^0xA6B0FE66
{
	int num;

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	num = func_259(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_3;
}

int func_204(int iParam0) // Position - 0xA900 Hash - 0xC02FF737 ^0x133962DF
{
	switch (iParam0)
	{
		case 0:
			return -2147483648;
	
		case 1:
			return 1073741824;
	
		case 2:
			return 1610612736;
	
		case 3:
			return 1879048192;
	
		case 4:
			return 2013265920;
	
		case 5:
			return 805306368;
	
		case 6:
			return 268435456;
	
		case 7:
			return 939524096;
	
		case 8:
			return 134217728;
	
		default:
		
	}

	return 0;
}

var func_205(int iParam0, int iParam1) // Position - 0xA98F Hash - 0x1B6EFA9A ^0x9372B8FE
{
	var unk;
	var unk2;

	if (func_72(&unk2, iParam0) && func_258(&unk2, iParam1))
		func_73(unk2, -1775150615, &unk, false);

	return unk;
}

struct<33> func_206(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA9C2 Hash - 0x583ED44A ^0x583ED44A
{
	var unk;

	!func_260(4, uParam0, &unk);
	return unk;
}

struct<2> func_207(int iParam0, int iParam1) // Position - 0xA9DC Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_261(iParam0, &(Global_1072759.f_573), func_67(iParam1));
			break;
	
		case 3:
			num.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_602), func_67(iParam1));
			break;
	
		case 4:
			num.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_2104), func_67(iParam1));
			break;
	
		case 5:
			num.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_&func_116), func_67(iParam1));
			break;
	
		case 6:
			num.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_12908), func_67(iParam1));
			break;
	
		case 7:
			num.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_15910), func_67(iParam1));
			break;
	
		case 8:
			num.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_16512), func_67(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_208();

	return num;
}

struct<2> func_208() // Position - 0xAB02 Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_209(Any* panParam0, var uParam1) // Position - 0xAB1B Hash - 0x5E449B87 ^0xE170EA7B
{
	panParam0->f_2 = 775488648;
	panParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_210(int iParam0) // Position - 0xAB3C Hash - 0x1FE935C9 ^0x1FE935C9
{
	var unk;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(iParam0), 0, 1))
		return 0;

	if (!func_263(&unk, 12, 0, 0, 1))
		return 0;

	return func_265(&unk, 2);
}

int func_211(int iParam0, int iParam1) // Position - 0xABA8 Hash - 0xC0102889 ^0xC0102889
{
	var unk;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(iParam0), 0, 1))
		return 0;

	if (!func_263(&unk, 12, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 15, iParam1, 0, 1))
		return 0;

	return func_266(&unk, 1);
}

int func_212(int iParam0, int iParam1) // Position - 0xAC28 Hash - 0xC0102889 ^0xC0102889
{
	var unk;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(iParam0), 0, 1))
		return 0;

	if (!func_263(&unk, 12, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 13, iParam1, 0, 0))
		return 0;

	if (!func_263(&unk, 9, 0, 0, 1))
		return 0;

	return func_265(&unk, 0);
}

int func_213(int iParam0, int iParam1, int iParam2) // Position - 0xACBB Hash - 0x90F5ACB9 ^0x90F5ACB9
{
	var unk;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(iParam0), 0, 1))
		return 0;

	if (!func_263(&unk, 12, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 13, iParam1, 0, 1))
		return 0;

	if (!func_263(&unk, 9, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 11, iParam2, 0, 1))
		return 0;

	return func_267(&unk, 1);
}

int func_214(int iParam0) // Position - 0xAD62 Hash - 0xDDECDEDD ^0xDDECDEDD
{
	var unk;
	int num;

	num = func_268(iParam0);

	if (num == -1)
		return 0;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(num), 0, 1))
		return 0;

	if (!func_263(&unk, 9, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 10, iParam0, 0, 1))
		return 0;

	if (!func_263(&unk, 17, 0, 0, 0))
		return 1;

	return func_265(&unk, 0) + 1;
}

int func_215(int iParam0, int iParam1, int iParam2) // Position - 0xAE09 Hash - 0xF85C633C ^0xF85C633C
{
	var unk;
	int num;

	num = func_268(iParam0);

	if (num == -1)
		return 0;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(num), 0, 1))
		return 0;

	if (!func_263(&unk, 9, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 10, iParam0, 0, 1))
		return 0;

	if (!func_263(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 21, func_269(iParam1), 0, 1))
		return 0;

	if (!func_263(&unk, 22, func_270(iParam2), 0, 1))
		return 0;

	return func_265(&unk, 1);
}

BOOL func_216(int iParam0) // Position - 0xAEDE Hash - 0xBF6D3DBF ^0xBF6D3DBF
{
	int i;
	int j;
	var address;
	int num;
	int num2;
	int num3;

	for (i = 0; i <= func_271() - 1; i = i + 1)
	{
		num = i;
	
		for (j = 0; j <= 3 - 1; j = j + 1)
		{
			num2 = j;
			num3 = func_272(num, num2);
		
			if (iParam0 != num3)
			{
			}
			else
			{
				MISC::SET_BIT(&address, func_273(num, num2));
			}
		}
	}

	return address;
}

int func_217(int iParam0) // Position - 0xAF3D Hash - 0xAA46D67B ^0xAA46D67B
{
	var unk;
	int num;

	num = func_268(iParam0);

	if (num == -1)
		return -1;

	if (!func_262(&unk))
		return -1;

	if (!func_263(&unk, 5, 0, 0, 1))
		return -1;

	if (!func_263(&unk, 6, 0, 0, 1))
		return -1;

	if (!func_263(&unk, 8, func_264(num), 0, 1))
		return -1;

	if (!func_263(&unk, 9, 0, 0, 1))
		return -1;

	if (!func_263(&unk, 10, iParam0, 0, 1))
		return -1;

	if (!func_263(&unk, 16, 0, 0, 1))
		return -1;

	return func_274(&unk, 1);
}

int func_218(int iParam0) // Position - 0xAFE2 Hash - 0xEFD7F48C ^0xEFD7F48C
{
	int i;
	int num;
	var unk;
	int num2;
	var unk6;
	var unk7;

	if (iParam0 == 0)
		return 0;

	num2 = func_268(iParam0);

	if (num2 == -1)
		return 0;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(num2), 0, 1))
		return 0;

	if (!func_263(&unk, 12, 0, 0, 1))
		return 0;

	unk6 = unk.f_1;
	num = func_265(&unk, 2);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk.f_1 = unk6;
	
		if (!func_263(&unk, 15, i, 0, 1))
		{
		}
		else
		{
			unk7 = unk.f_1;
		
			if (!func_263(&unk, 9, 0, 0, 1))
			{
			}
			else if (!func_263(&unk, 10, iParam0, 0, 0))
			{
			}
			else
			{
				unk.f_1 = unk7;
				return func_266(&unk, 1);
			}
		}
	}

	return 0;
}

int func_219(int iParam0) // Position - 0xB0DC Hash - 0x77009D30 ^0x77009D30
{
	var unk;
	int num;
	int num2;
	int i;
	int num3;
	var unk6;

	if (iParam0 == 0)
		return 0;

	num = func_268(iParam0);

	if (num == -1)
		return 0;

	if (!func_262(&unk))
		return 0;

	if (!func_263(&unk, 5, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 6, 0, 0, 1))
		return 0;

	if (!func_263(&unk, 8, func_264(num), 0, 1))
		return 0;

	if (!func_263(&unk, 12, 0, 0, 1))
		return 0;

	unk6 = unk.f_1;
	num3 = func_265(&unk, 2);

	for (i = 0; i <= num3 - 1; i = i + 1)
	{
		unk.f_1 = unk6;
	
		if (!func_263(&unk, 15, i, 0, 1))
		{
		}
		else
		{
			num2 = func_266(&unk, 1);
		
			if (!func_263(&unk, 9, 0, 0, 1))
			{
			}
			else if (!func_263(&unk, 10, iParam0, 0, 0))
			{
			}
			else
			{
				return num2;
			}
		}
	}

	return 0;
}

void func_220(Any* panParam0, var uParam1) // Position - 0xB1CE Hash - 0x1D3BC24B ^0x7C44D0E
{
	int i;
	int num;
	int j;

	for (i = 0; i <= 31; i = i + 1)
	{
		num = func_275(i);
		func_110(panParam0->f_7, num);
	}

	for (j = 0; j <= 5; j = j + 1)
	{
	}

	return;
}

BOOL func_221(int iParam0, int iParam1) // Position - 0xB210 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_222(BOOL bParam0, BOOL bParam1) // Position - 0xB21F Hash - 0x452F3C50 ^0x452F3C50
{
	BOOL flag;

	flag = bParam1 && bParam0;
	return flag ^ bParam0;
}

int func_223(BOOL bParam0) // Position - 0xB233 Hash - 0x3458D847 ^0x3458D847
{
	bParam0 = bParam0 && -bParam0;

	switch (bParam0)
	{
		case false:
			return -1;
	
		case true:
			return 0;
	
		case 2:
			return 1;
	
		case 4:
			return 2;
	
		case 8:
			return 3;
	
		case 16:
			return 4;
	
		case 32:
			return 5;
	
		case 64:
			return 6;
	
		case 128:
			return 7;
	
		case 256:
			return 8;
	
		case 512:
			return 9;
	
		case 1024:
			return 10;
	
		case 2048:
			return 11;
	
		case 4096:
			return 12;
	
		case 8192:
			return 13;
	
		case 16384:
			return 14;
	
		case 32768:
			return 15;
	
		case 65536:
			return 16;
	
		case 131072:
			return 17;
	
		case 262144:
			return 18;
	
		case 524288:
			return 19;
	
		case 1048576:
			return 20;
	
		case 2097152:
			return 21;
	
		case 4194304:
			return 22;
	
		case 8388608:
			return 23;
	
		case 16777216:
			return 24;
	
		case 33554432:
			return 25;
	
		case 67108864:
			return 26;
	
		case 134217728:
			return 27;
	
		case 268435456:
			return 28;
	
		case 536870912:
			return 29;
	
		case 1073741824:
			return 30;
	}

	return -1;
}

float func_224(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xB403 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_225(BOOL bParam0, int iParam1) // Position - 0xB421 Hash - 0x4ECE4716 ^0x6743206F
{
	int i;

	for (i = iParam1; i <= 31; i = i + 1)
	{
		if (MISC::IS_BIT_SET(bParam0, i))
			return i;
	}

	return -1;
}

int func_226(BOOL bParam0) // Position - 0xB44E Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

int func_227(int iParam0, int iParam1) // Position - 0xB473 Hash - 0xEA5C5C6 ^0xF9D5990B
{
	var unk;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_87(&unk, iParam0, iParam1, -1, 255);
	return func_160(unk.f_3, unk.f_1, 1, 0);
}

int func_228(int iParam0) // Position - 0xB4BB Hash - 0x4BF83446 ^0x4CFCE2B8
{
	int num;
	int num2;

	num = 0;
	num2 = iParam0;

	if (MISC::IS_BIT_SET(iParam0, 31))
	{
		num = num + 1;
		iParam0 = iParam0 ^ -1;
	}

	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		num = num + 1;
	}

	return num;
}

BOOL func_229(var uParam0) // Position - 0xB4FB Hash - 0x4E3CB413 ^0x3CB5C7AD
{
	if (uParam0->f_1 == -1)
		return false;

	if (!func_276(&(uParam0->f_5)))
		return false;

	return true;
}

int func_230(int* piParam0, var uParam1) // Position - 0xB520 Hash - 0x67A996 ^0x5F20740C
{
	int i;
	int num;

	for (i = 0; i < *piParam0; i = i + 1)
	{
		num = (piParam0->f_1 + i) % piParam0->f_2;
	
		if (func_277(uParam1, &piParam0->f_3[num /*40*/]))
			return i;
	}

	return -1;
}

BOOL func_231(var uParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xB561 Hash - 0x14F4724D ^0x326BA845
{
	var unk;
	var unk34;
	BOOL flag;
	var unk36;
	int i;
	int num;
	int numReservedMissionPeds;
	int numReservedMissionVehicles;
	int numReservedMissionObjects;
	int numReservedMissionPickups;
	int num2;

	unk34 = -1;
	unk34.f_1 = -1;

	if (func_29(uParam0->f_8.f_5))
		unk34 = { uParam0->f_8.f_5 };
	else if (func_29(uParam0->f_8.f_5.f_6))
		unk34 = { uParam0->f_8.f_5.f_6 };
	else
		return true;

	flag = false;

	if (_IS_NULL_VECTOR(uParam0->f_8.f_2))
		flag = true;
	else
		flag = false;

	if (bParam1)
	{
		unk.f_25 = iParam2;
		unk.f_26 = iParam3;
		unk.f_27 = iParam4;
		unk.f_28 = iParam5;
	}
	else if (!func_280(func_279(unk34), &unk))
	{
		return false;
	}

	unk36 = 4;

	if (unk.f_25 <= 0 || unk.f_25 > 50)
	{
		unk.f_25 != 0;
		unk36[0] = 0;
	}
	else
	{
		unk36[0] = 1;
	}

	if (unk.f_26 <= 0 || unk.f_26 > 10)
	{
		unk.f_26 != 0;
		unk36[1] = 0;
	}
	else
	{
		unk36[1] = 1;
	}

	if (unk.f_27 <= 0 || unk.f_27 > 25)
	{
		unk.f_27 != 0;
		unk36[2] = 0;
	}
	else
	{
		unk36[2] = 1;
	}

	if (unk.f_28 <= 0 || unk.f_28 > 10)
	{
		unk.f_28 != 0;
		unk36[3] = 0;
	}
	else
	{
		unk36[3] = 1;
	}

	if (flag)
	{
		numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		numReservedMissionVehicles = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		numReservedMissionObjects = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		numReservedMissionPickups = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(uParam0->f_8.f_2, false, &numReservedMissionPeds, &numReservedMissionVehicles, &numReservedMissionObjects, &numReservedMissionPickups);
	}

	for (i = 0; i < 4; i = i + 1)
	{
		num2 = i;
	
		if (num2 == -1)
		{
		}
		else if (!unk36[i])
		{
		}
		else
		{
			switch (num2)
			{
				case 0:
					num = NETWORK::GET_MAX_NUM_NETWORK_PEDS() - numReservedMissionPeds;
				
					if (num < unk.f_25)
						return false;
					break;
			
				case 1:
					num = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - numReservedMissionVehicles;
				
					if (num < unk.f_26)
						return false;
					break;
			
				case 2:
					num = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - numReservedMissionObjects;
				
					if (num < unk.f_27)
						return false;
					break;
			
				case 3:
					num = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - numReservedMissionPickups;
				
					if (num < unk.f_28)
						return false;
					break;
			}
		}
	}

	return true;
}

void func_232(var uParam0, int iParam1) // Position - 0xB7BA Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

var func_233(int iParam0, int iParam1) // Position - 0xB7C7 Hash - 0x42C305C ^0x81DF2F42
{
	return func_281(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_234(Any* panParam0, var uParam1) // Position - 0xB7E5 Hash - 0xC2157C75 ^0x2276B021
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 4;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 45, 37, &uParam1);
	return;
}

int func_235() // Position - 0xB813 Hash - 0x33EB0DBC ^0xEC692AA0
{
	int numChildren;
	Any any;

	numChildren = 0;
	any = Global_1245174.f_9818;
	any.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);

	return numChildren;
}

float func_236(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4) // Position - 0xB84B Hash - 0x973364E2 ^0x973364E2
{
	int i;
	float num;

	for (i = 0; i <= 14; i = i + 1)
	{
		num = num + func_282(uParam0, iParam1, iParam2, iParam3, uParam4, i);
	
		if (!func_283(uParam0))
			break;
	}

	func_284(uParam0, iParam3, iParam1, uParam4);
	return num;
}

BOOL func_237(int iParam0) // Position - 0xB896 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 1:
		case 32:
		case 64:
		case 128:
		case 4096:
		case 65536:
		case 131072:
		case 524288:
		case 1048576:
			return true;
	
		default:
		
	}

	return false;
}

int func_238(int iParam0) // Position - 0xB8E1 Hash - 0xA000BBB0 ^0xCA8E1A6C
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_245.f_72;
	
		default:
		
	}

	return -1;
}

void func_239(int iParam0) // Position - 0xB903 Hash - 0xE1B4F0D8 ^0xDD3CC22B
{
	func_285(&(Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_29), iParam0, 28);
	return;
}

BOOL func_240(int iParam0, int iParam1) // Position - 0xB920 Hash - 0x926C6656 ^0x33E86B0C
{
	return func_286(&(Global_1257509[iParam1 /*103*/].f_29), iParam0, 28);
}

void func_241(var uParam0, int iParam1, int iParam2, char* sParam3) // Position - 0xB93A Hash - 0x4175BAC5 ^0x4175BAC5
{
	if (!func_110(*uParam0, iParam2))
	{
		func_287(iParam1, iParam2);
		func_113(uParam0, iParam2);
	}

	return;
}

BOOL func_242(int iParam0, int iParam1) // Position - 0xB95F Hash - 0x926C6656 ^0x33E86B0C
{
	return func_286(&(Global_1257509[iParam1 /*103*/].f_29), iParam0, 28);
}

float func_243(float fParam0, float fParam1, float fParam2) // Position - 0xB979 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_244(Any* panParam0) // Position - 0xB9A0 Hash - 0xEB9263E1 ^0xEB9263E1
{
	func_180(panParam0, 0);
	func_180(panParam0, 1);
	func_180(panParam0, 3);
	func_178(panParam0);
	return;
}

void func_245(Any* panParam0) // Position - 0xB9C3 Hash - 0x23633041 ^0x23633041
{
	func_179(panParam0);
	func_288(panParam0, 0, 3);
	return;
}

void func_246(Any* panParam0, int iParam1) // Position - 0xB9D9 Hash - 0x28B904D2 ^0x220E1675
{
	MISC::SET_BIT(&(panParam0->f_4), iParam1);
	return;
}

void func_247(Any* panParam0) // Position - 0xB9EB Hash - 0xBAD35CA1 ^0xBAD35CA1
{
	func_180(panParam0, 0);
	func_246(panParam0, 0);
	func_246(panParam0, 1);
	func_246(panParam0, 4);
	func_246(panParam0, 5);
	return;
}

void func_248(Any* panParam0) // Position - 0xBA16 Hash - 0x2BCB1EBC ^0x2BCB1EBC
{
	func_180(panParam0, 1);
	func_246(panParam0, 2);
	func_246(panParam0, 3);
	func_246(panParam0, 6);
	func_246(panParam0, 7);
	func_183(panParam0, 2);
	return;
}

void func_249(var uParam0, int iParam1) // Position - 0xBA48 Hash - 0xF55E891F ^0xF55E891F
{
	func_289(uParam0, iParam1);
	return;
}

void func_250(Any* panParam0) // Position - 0xBA58 Hash - 0xB62D0A1 ^0xB62D0A1
{
	func_180(panParam0, 0);
	func_246(panParam0, 0);
	func_246(panParam0, 1);
	func_246(panParam0, 2);
	return;
}

void func_251(Any* panParam0) // Position - 0xBA7C Hash - 0x272E8086 ^0x272E8086
{
	func_180(panParam0, 1);
	func_178(panParam0);
	return;
}

void func_252(Any* panParam0) // Position - 0xBA91 Hash - 0x14CF0761 ^0x14CF0761
{
	func_180(panParam0, 2);
	func_246(panParam0, 3);
	return;
}

void func_253(Any* panParam0) // Position - 0xBAA7 Hash - 0xF4DD0BF1 ^0xF4DD0BF1
{
	func_180(panParam0, 3);
	func_246(panParam0, 4);
	return;
}

BOOL func_254(int iParam0) // Position - 0xBABD Hash - 0xED5061BA ^0xED5061BA
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

void func_255(Any* panParam0) // Position - 0xBADC Hash - 0x2F073967 ^0x2F073967
{
	func_246(panParam0, 0);
	func_246(panParam0, 1);
	return;
}

void func_256(Any* panParam0) // Position - 0xBAF2 Hash - 0x14CF0761 ^0x14CF0761
{
	func_246(panParam0, 2);
	func_246(panParam0, 3);
	return;
}

void func_257(Any* panParam0) // Position - 0xBB08 Hash - 0x9AE8A110 ^0x9AE8A110
{
	func_246(panParam0, 4);
	func_246(panParam0, 5);
	return;
}

BOOL func_258(Any* panParam0, int iParam1) // Position - 0xBB1E Hash - 0x5E449B87 ^0x295D242D
{
	panParam0->f_2 = 333456427;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_259(int iParam0, int iParam1) // Position - 0xBB3F Hash - 0xC12581FD ^0xC872D18E
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_4 + iParam1;
}

BOOL func_260(int iParam0, int iParam1, var uParam2) // Position - 0xBB5E Hash - 0x75EF2F01 ^0x75EF2F01
{
	var unk;

	if (!func_290(iParam0))
		return false;

	if (func_291(iParam0, iParam1, &unk))
		func_292(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

int func_261(var uParam0, var uParam1, int iParam2) // Position - 0xBB93 Hash - 0x3B53E80C ^0x3B53E80C
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = iParam2 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (uParam1->[num3 /*3*/] > uParam0)
			num2 = num3 - 1;
		else if (uParam1->[num3 /*3*/] < uParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_262(Any* panParam0) // Position - 0xBBE8 Hash - 0x7156C84B ^0xD38025A8
{
	var src;
	int fileHandle;

	fileHandle = Global_1072759.f_28418[31 /*4*/].f_3;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_263(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xBC2A Hash - 0xE0BDD26B ^0x7E1BB2F9
{
	var unk;

	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;
	unk = panParam0->f_1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_264(int iParam0) // Position - 0xBC63 Hash - 0xB57C9A63 ^0x7E754D04
{
	switch (iParam0)
	{
		case 0:
			return joaat("bounty");
	
		case 1:
			return -1340981006;
	
		case 2:
			return joaat("moonshine");
	
		case 3:
			return joaat("MOONSHINE_RECIPE");
	
		case 4:
			return joaat("LEGENDARY_ANIMAL");
	
		default:
		
	}

	return 0;
}

int func_265(Any anParam0, int iParam1) // Position - 0xBCBD Hash - 0x286372BD ^0x53677BA0
{
	Any numNodes;

	anParam0->f_2 = iParam1;
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
	return numNodes;
}

int func_266(Any* panParam0, int iParam1) // Position - 0xBCD5 Hash - 0x3BEFBAC ^0x3BEFBAC
{
	return func_293(panParam0, 31, iParam1);
}

int func_267(Any* panParam0, int iParam1) // Position - 0xBCE7 Hash - 0x3BEFBAC ^0x3BEFBAC
{
	return func_293(panParam0, 31, iParam1);
}

int func_268(int iParam0) // Position - 0xBCF9 Hash - 0xE874E1E9 ^0xE874E1E9
{
	var unk;

	if (!func_262(&unk))
		return -1;

	if (!func_263(&unk, 5, 0, 0, 1))
		return -1;

	if (!func_263(&unk, 7, 0, 0, 1))
		return -1;

	if (!func_263(&unk, 9, 0, 0, 1))
		return -1;

	if (!func_263(&unk, 10, iParam0, 0, 1))
		return -1;

	return func_294(&unk, 1);
}

int func_269(int iParam0) // Position - 0xBD61 Hash - 0xE305A8A6 ^0xC97E7A3
{
	switch (iParam0)
	{
		case 0:
			return joaat("English");
	
		case 1:
			return joaat("LOCALIZED");
	
		default:
		
	}

	return 0;
}

int func_270(int iParam0) // Position - 0xBD91 Hash - 0xB57C9A63 ^0xBE2F0659
{
	switch (iParam0)
	{
		case 0:
			return joaat("GANG_NAME");
	
		case 1:
			return joaat("ILO_NAME");
	
		case 2:
			return joaat("Crime");
	
		case 3:
			return joaat("HEADER");
	
		case 4:
			return joaat("shard");
	
		default:
		
	}

	return 0;
}

int func_271() // Position - 0xBDEB Hash - 0x4228A1C2 ^0x846908F2
{
	return Global_1140770.f_235;
}

var func_272(int iParam0, int iParam1) // Position - 0xBDF9 Hash - 0x5F264DA7 ^0x3687EC26
{
	return Global_1140770[iParam0 /*18*/].f_2[iParam1 /*5*/];
}

int func_273(int iParam0, int iParam1) // Position - 0xBE0F Hash - 0xEC4DC695 ^0x77CED481
{
	return Global_1140770[iParam0 /*18*/].f_2[iParam1 /*5*/].f_2;
}

int func_274(Any* panParam0, int iParam1) // Position - 0xBE27 Hash - 0x209EDCA ^0x209EDCA
{
	return func_295(func_293(panParam0, 39, iParam1));
}

int func_275(int iParam0) // Position - 0xBE3D Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

BOOL func_276(var uParam0) // Position - 0xBE4C Hash - 0x5EFE183E ^0x62E9C2B9
{
	if (func_29(*uParam0))
		return true;

	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
			return true;
	
		if (uParam0->f_4 != -1)
			return true;
	
		if (uParam0->f_5 != -1)
			return true;
	}

	return false;
}

BOOL func_277(var uParam0, var uParam1) // Position - 0xBE90 Hash - 0x18878F11 ^0xC97EFD19
{
	if (uParam1->f_2 == -1)
		return false;

	if (uParam0->f_2 == -1)
		return false;

	if (uParam1->f_2 != uParam0->f_2)
		return false;

	if (uParam1->f_5 == -1)
		return false;

	if (uParam0->f_5 == -1)
		return false;

	if (uParam1->f_5 != uParam0->f_5)
		return false;

	if (uParam1->f_8 != uParam0->f_8)
		return false;

	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
		return false;

	if (!func_296(uParam1->f_8.f_5, uParam0->f_8.f_5))
		return false;

	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
		return false;

	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
		return false;

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xBF53 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_279(var uParam0, var uParam1) // Position - 0xBF7D Hash - 0x10103901 ^0xC90ADDEF
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_71(uParam0, &num))
		return num;

	return 0;
}

BOOL func_280(int iParam0, var uParam1) // Position - 0xBFA7 Hash - 0x276CF8AE ^0x276CF8AE
{
	int num;

	num = { func_297(iParam0) };

	if (!func_29(num))
		return false;

	func_260(num, iParam0, uParam1);
	return true;
}

var func_281(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0xBFD5 Hash - 0x36FF3E9 ^0xAA13F532
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	Any any;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_298() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1295666.f_5;
	any = Global_1295666.f_10;
	flag3 = true;
	flag4 = bParam10;

	if (BUILTIN::VMAG2(fParam6) < 1f)
	{
		flag3 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("volBox"):
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_299());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_299());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_299());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_300(PLAYER::GET_PLAYER_TEAM(player));

	if (flag4 & 8 != 0 && flag4 & 32768 != 0)
	{
		flag4 = flag4 | 65536;
		flag4 = flag4 - flag4 & 40952;
	}

	if (flag4 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			flag4 = flag4 - flag4 & 4;
			flag4 = flag4 | false;
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
			player2 = Global_1295666.f_149[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_301(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_302(i) != 1)
					flag = true;
		
			if (!flag)
				if (flag4 & 16384 != 0 && PED::IS_PED_INCAPACITATED(playerPed))
					flag = true;
		
			if (!flag)
				if (flag4 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player2))
					flag = true;
		
			if (!flag)
			{
				if (flag4 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(player2))
					{
						case -1:
							if (flag4 & 16 != 0)
								flag2 = true;
							break;
					
						case 0:
							if (flag4 & 32 != 0)
								flag2 = true;
							break;
					
						case 1:
							if (flag4 & 64 != 0)
								flag2 = true;
							break;
					
						case 2:
							if (flag4 & 128 != 0)
								flag2 = true;
							break;
					
						case 3:
							if (flag4 & 256 != 0)
								flag2 = true;
							break;
					
						case 4:
							if (flag4 & 512 != 0)
								flag2 = true;
							break;
					
						case 5:
							if (flag4 & 1024 != 0)
								flag2 = true;
							break;
					
						case 6:
							if (flag4 & 2048 != 0)
								flag2 = true;
							break;
					
						case 8:
							if (flag4 & 4096 != 0)
								flag2 = true;
							break;
					}
				
					if (!flag2)
						flag = true;
				}
			}
		
			if (!flag)
				if (flag4 & 32768 != 0)
					if (GANG::NETWORK_GET_GANG_ID(player2) != any)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_303(player2))
						flag = true;
		
			if (!flag && flag3)
				if (!VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)))
					flag = true;
		
			if (!flag)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (flag3)
		VOLUME::DELETE_VOLUME(volume);

	return value;
}

float func_282(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5) // Position - 0xC369 Hash - 0xA313692D ^0xA313692D
{
	switch (iParam5)
	{
		case 0:
			return func_304(uParam0, iParam1, iParam2, iParam3, uParam4);
	
		case 1:
			return func_305(uParam0, iParam3);
	
		case 2:
			return func_306(uParam0, iParam3, uParam4);
	
		case 3:
			return func_307(uParam0, iParam1, iParam2, iParam3, uParam4);
	
		case 4:
			return func_308(uParam0, iParam3, uParam4);
	
		case 5:
			return func_309(uParam0, iParam3, uParam4);
	
		case 6:
			return func_310(uParam0, iParam1, iParam3, uParam4);
	
		case 8:
			return func_311(uParam0, uParam4->f_7, iParam3);
	
		case 9:
			return func_313(uParam0, iParam3, uParam4);
	
		case 10:
			return func_314(uParam0, iParam3, uParam4);
	
		case 11:
			return func_315(uParam0, iParam1, iParam3, uParam4);
	
		case 12:
			return func_316(uParam0, iParam3);
	
		case 13:
			return func_317(uParam0, iParam1, iParam3, uParam4);
	
		case 14:
			return func_312(uParam0, iParam1, iParam3, uParam4);
	
		default:
		
	}

	return 0f;
}

BOOL func_283(var uParam0) // Position - 0xC492 Hash - 0x6239AAC ^0x6239AAC
{
	return *uParam0 == 0;
}

void func_284(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0xC49F Hash - 0x66A9A872 ^0xD289C59D
{
	int num;

	if (*uParam0 == 0)
		return;

	num = 417341510;

	if (func_110(*uParam0, num))
		return;

	if (*uParam0 == Global_1260806[iParam1 /*4*/].f_3)
		return;

	func_318(uParam3->f_5, *uParam0);
	return;
}

BOOL func_285(int* piParam0, int iParam1, int iParam2) // Position - 0xC4E5 Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(piParam0->[num], offset);
	MISC::CLEAR_BIT(&piParam0->[num], offset);
	return isBitSet;
}

BOOL func_286(Any* panParam0, int iParam1, int iParam2) // Position - 0xC517 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

void func_287(int iParam0, int iParam1) // Position - 0xC54E Hash - 0x2C4EDA83 ^0xAE80FEB8
{
	int num;
	int num2;

	if (iParam0 == -1)
		return;

	switch (iParam1)
	{
		case 2:
			if (Global_1260806[iParam0 /*4*/].f_2 == 1)
			{
				func_239(iParam0);
				Global_1260806[iParam0 /*4*/].f_1 = 0;
				Global_1260806[iParam0 /*4*/].f_2 = 0;
			}
			break;
	}

	num = func_319(iParam1);

	if (num != 0)
	{
		num2 = Global_1295666.f_16 + (num / 1000);
	
		if (Global_1260806[iParam0 /*4*/].f_1 == 0 || Global_1260806[iParam0 /*4*/].f_1 < num2)
		{
			func_320(iParam0);
			Global_1260806[iParam0 /*4*/].f_1 = num2;
			Global_1260806[iParam0 /*4*/].f_2 = iParam1;
		}
	}

	return;
}

void func_288(Any* panParam0, int iParam1, int iParam2) // Position - 0xC5F7 Hash - 0x427701AE ^0x1B998B16
{
	int i;

	if (iParam1 < 0)
		iParam1 = 0;

	if (iParam2 < iParam1)
		iParam2 = panParam0->f_2 - 1;

	for (i = iParam1; i <= iParam2; i = i + 1)
	{
		func_246(panParam0, i);
	}

	return;
}

void func_289(var uParam0, int iParam1) // Position - 0xC633 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_290(int iParam0) // Position - 0xC644 Hash - 0x5000025C ^0x5000025C
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

BOOL func_291(int iParam0, var uParam1, Any* panParam2) // Position - 0xC683 Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_321(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_292(int iParam0, Any* panParam1, var uParam2) // Position - 0xC6B7 Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_322(iParam0, uParam2->f_1);
	panParam1->f_2 = -2140901307;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_2 = num;
	panParam1->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), panParam1);
	panParam1->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), panParam1);

	if (*uParam2 == 3)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_323(num);
	}
	else if (*uParam2 == 4)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = num;
	}
	else if (*uParam2 == 5)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_324(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_325(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_326(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_327(num);
	panParam1->f_2 = 1060782978;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), panParam1);
	panParam1->f_2 = 162343104;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	panParam1->f_2 = -733480474;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), panParam1);
	panParam1->f_2 = 492825771;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), panParam1);
	panParam1->f_2 = -839279581;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), panParam1);
	panParam1->f_2 = -640941103;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), panParam1);
	num = 0;
	panParam1->f_2 = -2025968302;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_29 = num;
	num = 0;
	panParam1->f_2 = -1829781569;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_30 = num;
	num = 0;
	panParam1->f_2 = -1999176766;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_31 = num;
	num = 0;
	panParam1->f_2 = -739728609;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_32 = num;
	return;
}

var func_293(Any* panParam0, int iParam1, int iParam2) // Position - 0xC912 Hash - 0xB8727DF2 ^0x6ABF2CB5
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

int func_294(Any* panParam0, int iParam1) // Position - 0xC92E Hash - 0x80634059 ^0x80634059
{
	return func_328(func_293(panParam0, 40, iParam1));
}

int func_295(int iParam0) // Position - 0xC944 Hash - 0xA2602D8C ^0xA2602D8C
{
	switch (iParam0)
	{
		case joaat("aggressive"):
			return 1;
	
		case joaat("Townsfolk"):
			return 0;
	
		case joaat("uni_criminal"):
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_296(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC976 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

struct<2> func_297(int iParam0) // Position - 0xC991 Hash - 0x6C87C802 ^0xCFA8552F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_207(iParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_207(iParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_207(iParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_207(iParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_207(iParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_207(iParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_207(iParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_208();
}

int func_298() // Position - 0xCA61 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_299() // Position - 0xCA6F Hash - 0x12416ED0 ^0x12416ED0
{
	return "unnamed";
}

BOOL func_300(int iParam0) // Position - 0xCA7A Hash - 0xC360B8E6 ^0xCBE2AF9D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -1:
			num = 16;
			break;
	
		case 0:
			num = 32;
			break;
	
		case 1:
			num = 64;
			break;
	
		case 2:
			num = 128;
			break;
	
		case 3:
			num = 256;
			break;
	
		case 4:
			num = 512;
			break;
	
		case 5:
			num = 1024;
			break;
	
		case 6:
			num = 2048;
			break;
	
		case 8:
			num = 4096;
			break;
	}

	return num;
}

BOOL func_301(int iParam0) // Position - 0xCB09 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_329(36, iParam0);
}

int func_302(int iParam0) // Position - 0xCB27 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_303(Player plParam0) // Position - 0xCB72 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_330(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_331(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

float func_304(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4) // Position - 0xCBB7 Hash - 0x2BACC9D7 ^0x618FAC26
{
	var unk;
	BOOL flag;
	BOOL flag2;
	int num;
	int num2;
	int i;

	unk = { uParam4->f_11 };

	if (func_157(uParam4, 1) && _IS_NULL_VECTOR(unk))
	{
		func_241(uParam0, iParam3, 256, 0);
		return -1f;
	}

	if (func_332(unk, &flag))
	{
		func_333(iParam3);
	
		if (flag)
		{
			func_241(uParam0, iParam3, 1, 0);
			return -1f;
		}
	
		flag2 = true;
	}

	if (uParam4->f_6 == 2)
	{
		num = func_90(iParam1);
		num2 = func_334(num, iParam2);
	
		if (num2 > 0)
		{
			for (i = 0; i <= num2 - 1; i = i + 1)
			{
				unk = { func_335(func_199(num), iParam2, i) };
			
				if (func_332(unk, &flag))
				{
					func_333(iParam3);
				
					if (flag)
					{
						func_241(uParam0, iParam3, 1, 0);
						return -1f;
					}
				
					flag2 = true;
				}
			}
		}
	}

	if (flag2)
		return 0.25f + func_336();

	func_337(iParam3);
	func_241(uParam0, iParam3, 2, 0);
	return -1f;
}

float func_305(var uParam0, int iParam1) // Position - 0xCCAC Hash - 0x6C41A223 ^0xC0DEC102
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_241(uParam0, iParam1, 131072, 0);
		return 0f;
	}

	return 0f;
}

float func_306(var uParam0, int iParam1, var uParam2) // Position - 0xCCCD Hash - 0x84C50043 ^0x57054F63
{
	int num;

	if (!func_157(uParam2, 1))
		return 0f;

	num = func_185(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));

	if (!func_254(num))
	{
		func_241(uParam0, iParam1, 256, 0);
		return 0f;
	}

	if (func_338(num))
	{
		func_241(uParam0, iParam1, 524288, 0);
		return 0f;
	}

	return 0f;
}

float func_307(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4) // Position - 0xCD2B Hash - 0x44C5EE27 ^0xDDFD1D2B
{
	float num;
	Vector3 vector;
	int num2;
	int i;
	int num3;
	int j;

	vector = { uParam4->f_11 };

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1225099[i /*28*/].f_2 != -1)
		{
			num = func_224(vector, func_339(i));
		
			if (num < Global_1901671.f_245.f_66)
			{
				func_241(uParam0, iParam3, 64, 0);
				return 0f;
			}
		
			if (uParam4->f_6 == 2)
			{
				num2 = func_90(iParam1);
				num3 = func_334(num2, iParam2);
			
				if (num3 > 0)
				{
					for (j = 0; j <= num3 - 1; j = j + 1)
					{
						vector = { func_335(func_199(num2), iParam2, j) };
						num = func_224(vector, Global_1235687[i /*697*/].f_617[j /*3*/]);
					
						if (num < Global_1901671.f_245.f_66)
						{
							func_241(uParam0, iParam3, 64, 0);
							return 0f;
						}
					}
				}
			}
		}
	}

	if (func_340(vector, 2, Global_1901671.f_245.f_66))
	{
		func_241(uParam0, iParam3, 64, 0);
		return 0f;
	}

	if (func_41(5))
	{
		if (BUILTIN::VDIST(vector, Global_1260806.f_3493) < Global_1901671.f_245.f_66)
		{
			func_241(uParam0, iParam3, 64, 0);
			return 0f;
		}
	}

	return 0f;
}

float func_308(var uParam0, int iParam1, var uParam2) // Position - 0xCE63 Hash - 0x9FB08C82 ^0x2E51F6A4
{
	if (func_30(Global_1260806.f_3351[uParam2->f_7]))
	{
		func_241(uParam0, iParam1, 2097152, 0);
		return 0f;
	}

	if (func_341(uParam2->f_7))
	{
		func_241(uParam0, iParam1, 2097152, 0);
		return 0f;
	}

	return 0f;
}

float func_309(var uParam0, int iParam1, var uParam2) // Position - 0xCEAD Hash - 0x27F85DE4 ^0x27F85DE4
{
	int num;
	var unk;
	int num2;
	int num3;
	int num4;

	num = func_342(uParam2);

	if (num == -1)
		return 0f;

	if (func_30(Global_1260806[iParam1 /*4*/]) && func_31(Global_1260806[iParam1 /*4*/]) < num)
	{
		func_241(uParam0, iParam1, 8, 0);
		return 0f;
	}

	unk = func_344(func_343(joaat("mp_fetch_last_attempted_dynamic_mission_unlock")));

	if (unk == uParam2->f_5)
	{
		num2 = func_344(func_343(joaat("mp_fetch_last_attempted_dynamic_mission_timestamp")));
	
		if (num2 != 0 && Global_1295666.f_16 - num2 < num / 1000)
		{
			func_241(uParam0, iParam1, 8, 0);
			return 0f;
		}
	}

	num3 = func_344(func_343(joaat("mp_fetch_last_attempted_cooldown_tag_id")));

	if (uParam2->f_9 == num3)
	{
		num4 = func_344(func_343(joaat("mp_fetch_last_attempted_cooldown_tag_timestamp")));
	
		if (num4 != 0 && Global_1295666.f_16 - num4 < num / 1000)
		{
			func_241(uParam0, iParam1, 262144, 0);
			return 0f;
		}
	}

	return 0f;
}

float func_310(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0xCFA0 Hash - 0x6476E2E3 ^0x6476E2E3
{
	int num;

	if (func_157(uParam3, 32))
		return 0f;

	num = func_345(iParam1);

	if (func_346(iParam1, num))
	{
		func_241(uParam0, iParam2, 16, 0);
		return 0f;
	}

	return 0f;
}

float func_311(var uParam0, int iParam1, int iParam2) // Position - 0xCFDA Hash - 0x518FD887 ^0x27AFD203
{
	if (func_30(Global_1254993[iParam2 /*3*/]) && func_31(Global_1254993[iParam2 /*3*/]) < Global_1901671.f_245.f_58)
	{
		func_241(uParam0, iParam2, 32, 0);
		return 0f;
	}

	return func_347(iParam1) * func_348(iParam1);
}

float func_312(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0xD027 Hash - 0x5DA00537 ^0x587BFFAE
{
	int num;
	int num2;

	if (uParam3->f_6 == 2)
	{
		num = func_90(iParam1);
		num2 = func_349(num);
	
		if (num2 == joaat("AMBUSH") && PLAYER::GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(PLAYER::PLAYER_ID(), Global_1901671.f_245.f_29, false))
		{
			func_241(uParam0, iParam2, 65536, 0);
			return 0f;
		}
	}

	return 0f;
}

float func_313(var uParam0, int iParam1, var uParam2) // Position - 0xD07A Hash - 0x2917FE36 ^0xAFEFC601
{
	int i;
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	float num3;

	flag = true;

	for (i = 0; i < 4; i = i + 1)
	{
		if (uParam2->f_15[i] != 0)
		{
			func_350(uParam2->f_15[i], &num, &num2);
		
			if (num == -1 || num2 == -1)
			{
			}
			else
			{
				flag = false;
				break;
			}
		}
	}

	if (!flag)
		flag = func_351(num, num2);

	flag2 = flag && func_352(uParam2->f_26);

	if (flag && flag2)
	{
		num3 = 0.25f;
	
		if (uParam2->f_27 != 0)
			if (func_352(uParam2->f_27))
				num3 = num3 + 0.25f;
	
		for (i = 0; i < 4; i = i + 1)
		{
			if (uParam2->f_20[i] != 0)
			{
				func_350(uParam2->f_20[i], &num, &num2);
			
				if (num == -1 || num2 == -1)
				{
				}
				else if (func_351(num, num2))
				{
					num3 = num3 + 0.25f;
					break;
				}
			}
		}
	
		return num3;
	}

	func_241(uParam0, iParam1, 128, 0);
	return 0f;
}

float func_314(var uParam0, int iParam1, var uParam2) // Position - 0xD18C Hash - 0x70D82521 ^0xA46C0D45
{
	if (uParam2->f_14 == 0)
		return 0f;

	if (func_353(0) == uParam2->f_14)
		return 0.25f;

	func_241(uParam0, iParam1, 512, 0);
	return 0f;
}

float func_315(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0xD1C4 Hash - 0xAACBE7A6 ^0x36F93938
{
	int num;

	if (uParam3->f_6 == 2)
	{
		num = func_90(iParam1);
	
		if (func_354(num))
			func_241(uParam0, iParam2, 16384, 0);
	}

	return 0f;
}

float func_316(var uParam0, int iParam1) // Position - 0xD1F2 Hash - 0x6123CC01 ^0xF91F5BA6
{
	if (func_355(PLAYER::PLAYER_ID(), true, false, true))
		func_241(uParam0, iParam1, 32768, 0);

	return 0f;
}

float func_317(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0xD216 Hash - 0x6D155980 ^0x182BD190
{
	int i;
	int num;
	int num2;
	float num3;
	int num4;
	int num5;

	if (func_41(4))
	{
		if (!func_157(uParam3, 64))
		{
			func_241(uParam0, iParam2, 64, 0);
			return 0f;
		}
	}

	if (Global_1254993[iParam2 /*3*/].f_2 != -15 && !func_357(func_356(), Global_1254993[iParam2 /*3*/].f_2, true))
	{
		func_241(uParam0, iParam2, 1024, 0);
		return 0f;
	}

	if (!func_358(iParam1, uParam3->f_6, uParam3->f_7, &num2, &num3))
	{
		func_241(uParam0, iParam2, num2, 0);
		return 0f;
	}

	if (uParam3->f_6 == 2)
	{
		num4 = func_90(iParam1);
		num5 = func_349(num4);
		num = func_359(num4, uParam3->f_5, num5, Global_34, true, false, false, -1082130432);
		num2 = func_360(num);
	
		if (num2 != 0)
		{
			func_241(uParam0, iParam2, num2, 0);
			return 0f;
		}
	}
	else if (uParam3->f_6 == 1)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(uParam3->f_5))
		{
			func_241(uParam0, iParam2, 268435456, 0);
			return 0f;
		}
	
		if (func_157(uParam3, 8) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_241(uParam0, iParam2, 1048576, 0);
			return 0f;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (uParam3->f_28[i] != 0)
		{
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(uParam3->f_28[i]))
			{
				func_241(uParam0, iParam2, 268435456, 0);
				return 0f;
			}
		}
	}

	return num3;
}

void func_318(Any anParam0, int iParam1) // Position - 0xD385 Hash - 0x3641AF3 ^0x3641AF3
{
	func_151(anParam0, 0, iParam1, 255);
	return;
}

int func_319(int iParam0) // Position - 0xD398 Hash - 0x740F73DA ^0x95DFE435
{
	switch (iParam0)
	{
		case 1:
			return Global_1901671.f_245;
	
		case 2:
			return Global_1901671.f_245.f_1;
	
		case 4:
			return Global_1901671.f_245.f_2;
	
		case 8:
			return Global_1901671.f_245.f_3;
	
		case 16:
			return Global_1901671.f_245.f_4;
	
		case 32:
			return Global_1901671.f_245.f_5;
	
		case 64:
			return Global_1901671.f_245.f_13;
	
		case 128:
			return Global_1901671.f_245.f_14;
	
		case 256:
			return Global_1901671.f_245.f_15;
	
		case 512:
			return Global_1901671.f_245.f_16;
	
		case 1024:
			return Global_1901671.f_245.f_17;
	
		case 2048:
			return Global_1901671.f_245.f_18;
	
		case 4096:
			return Global_1901671.f_245.f_19;
	
		case 8192:
			return Global_1901671.f_245.f_20;
	
		case 16384:
			return Global_1901671.f_245.f_22;
	
		case 32768:
			return Global_1901671.f_245.f_23;
	
		case 65536:
			return Global_1901671.f_245.f_24;
	
		case 131072:
			return Global_1901671.f_245.f_25;
	
		case 524288:
			return Global_1901671.f_245.f_26;
	
		case 1048576:
			return Global_1901671.f_245.f_27;
	
		case 2097152:
			return Global_1901671.f_245.f_28;
	
		case 4194304:
			return Global_1901671.f_245.f_6;
	
		case 8388608:
			return Global_1901671.f_245.f_7;
	
		case 16777216:
			return Global_1901671.f_245.f_8;
	
		case 33554432:
			return Global_1901671.f_245.f_9;
	
		case 67108864:
			return Global_1901671.f_245.f_10;
	
		case 134217728:
			return Global_1901671.f_245.f_11;
	
		case 268435456:
			return Global_1901671.f_245.f_12;
	
		case 536870912:
			return Global_1901671.f_245.f_21;
	
		default:
		
	}

	return 0;
}

void func_320(int iParam0) // Position - 0xD597 Hash - 0xE1B4F0D8 ^0xDD3CC22B
{
	func_361(&(Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_29), iParam0, 28);
	return;
}

int func_321(int iParam0) // Position - 0xD5B4 Hash - 0x5FB59AC3 ^0xE293EFF
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -3:
			num = 1300413597;
			break;
	
		case -2:
			num = joaat("GOLD");
			break;
	
		case 0:
			num = joaat("Challenge");
			break;
	
		case 1:
			num = joaat("feature");
			break;
	
		case 2:
			num = joaat("MISSION_STORY");
			break;
	
		case 3:
			num = joaat("MISSION_PROCEDURAL");
			break;
	
		case 4:
			num = joaat("MISSION_FETCH");
			break;
	
		case 5:
			num = joaat("MISSION_MINIGAME");
			break;
	
		case 6:
			num = joaat("MISSION_FREE_MODE_EVENT");
			break;
	
		case 7:
			num = joaat("MISSION_UGC");
			break;
	
		case 8:
			num = joaat("MISSION_BEAT");
			break;
	
		case 9:
			num = joaat("Property");
			break;
	
		case 10:
			num = joaat("Recipe");
			break;
	
		case 11:
			num = joaat("TITLE");
			break;
	
		case 12:
			num = joaat("SHOP");
			break;
	
		case 13:
			num = joaat("GFH_GIVERS");
			break;
	
		case 14:
			num = joaat("GFH_LOCATIONS");
			break;
	
		case 15:
			num = 1332629624;
			break;
	
		case 16:
			num = 1746212499;
			break;
	
		case 17:
			num = joaat("GVO_UNLOCKS");
			break;
	
		case 18:
			num = 1151893103;
			break;
	
		case 19:
			num = -312924468;
			break;
	}

	return num;
}

int func_322(int iParam0, var uParam1) // Position - 0xD729 Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_362(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_323(int iParam0) // Position - 0xD746 Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case joaat("IWD_INF"):
			return 19;
	
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
	
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
	
		case -1381389849:
			return 5;
	
		case joaat("AMBUSH"):
			return 10;
	
		case -867762478:
			return 14;
	
		case joaat("IWD_1V1"):
			return 17;
	
		case -668110249:
			return 4;
	
		case -621956193:
			return 11;
	
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
	
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
	
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
	
		case joaat("ROBBERY_TRAIN"):
			return 2;
	
		case joaat("IWD_PF"):
			return 20;
	
		case joaat("ASSASSINATION"):
			return 22;
	
		case 377122918:
			return 8;
	
		case 536699577:
			return 6;
	
		case 541147288:
			return 7;
	
		case 602097925:
			return 15;
	
		case joaat("IWD_PLF"):
			return 21;
	
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
	
		case 1158195437:
			return 9;
	
		case 1336837986:
			return 0;
	
		case joaat("IWD_PVP"):
			return 18;
	
		case 1443764480:
			return 3;
	
		case 1518877519:
			return 30;
	
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
	
		case joaat("IWD_F"):
			return 28;
	
		case joaat("TRAIN_ESCORT"):
			return 16;
	
		case 2124631622:
			return 1;
	
		default:
		
	}

	return -1;
}

int func_324(int iParam0) // Position - 0xD89C Hash - 0xCBE7BE7C ^0xCBE7BE7C
{
	switch (iParam0)
	{
		case joaat("fence_building"):
			return 6;
	
		case joaat("blackjack"):
			return 0;
	
		case joaat("clean_stalls"):
			return 5;
	
		case joaat("Poker"):
			return 2;
	
		case joaat("dominoes"):
			return 1;
	
		case joaat("fillet"):
			return 3;
	
		case joaat("milking_cow"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_325(int iParam0) // Position - 0xD8F3 Hash - 0x2A2D8996 ^0x2A2D8996
{
	switch (iParam0)
	{
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
	
		case joaat("KING_OF_THE_RAILS"):
			return 6;
	
		case joaat("CONDOR_EGG"):
			return 12;
	
		case joaat("DEAD_DROP"):
			return 2;
	
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
	
		case joaat("HOT_PROPERTY"):
			return 4;
	
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
	
		case joaat("ESCAPED_CONVICTS"):
			return 8;
	
		case -142235487:
			return 7;
	
		case -27117790:
			return 13;
	
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
	
		case joaat("ROUND_UP"):
			return 9;
	
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
	
		case joaat("GOLDEN_HAT"):
			return 3;
	
		case 1653867545:
			return 14;
	
		case joaat("ARCHERY"):
			return 0;
	
		case joaat("CHALLENGES"):
			return 1;
	
		case joaat("WRECKAGE"):
			return 11;
	
		case joaat("SUPPLY_TRAIN"):
			return 10;
	
		default:
		
	}

	return -1;
}

int func_326(int iParam0) // Position - 0xD9CD Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case -1641798436:
			return 4;
	
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
	
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
	
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
	
		case 352400957:
			return 5;
	
		case 434282564:
			return 11;
	
		case 787592898:
			return 7;
	
		case 1039801657:
			return 10;
	
		case 1211286129:
			return 6;
	
		case 1228993410:
			return 12;
	
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
	
		case 2006131499:
			return 3;
	
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
	
		default:
		
	}

	return 0;
}

int func_327(int iParam0) // Position - 0xDA65 Hash - 0xD7A7D6 ^0xD7A7D6
{
	switch (iParam0)
	{
		case -1968391995:
			return 34;
	
		case joaat("intro_generic"):
			return 2;
	
		case -1797632736:
			return 36;
	
		case joaat("Collector"):
			return 12;
	
		case -1317631038:
			return 27;
	
		case -862833187:
			return 23;
	
		case -713504854:
			return 19;
	
		case joaat("intro_char"):
			return 1;
	
		case joaat("intro_freemode"):
			return 4;
	
		case joaat("season006"):
			return 16;
	
		case joaat("season005"):
			return 13;
	
		case -171568028:
			return 33;
	
		case -89188661:
			return 24;
	
		case joaat("hunter"):
			return 10;
	
		case joaat("trader"):
			return 11;
	
		case 67219675:
			return 31;
	
		case joaat("outlaw"):
			return 9;
	
		case joaat("vipseason006"):
			return 17;
	
		case 547199896:
			return 22;
	
		case 591458137:
			return 29;
	
		case joaat("BountyHunter"):
			return 7;
	
		case 696644969:
			return 26;
	
		case joaat("vipseason005"):
			return 14;
	
		case 753957709:
			return 20;
	
		case joaat("NULL"):
			return -1;
	
		case joaat("teamster"):
			return 6;
	
		case 1054483531:
			return 21;
	
		case 1322114923:
			return 3;
	
		case joaat("normal"):
			return 0;
	
		case joaat("intro_clay2"):
			return 5;
	
		case 1539627774:
			return 28;
	
		case joaat("moonshiner"):
			return 15;
	
		case joaat("gunslinger"):
			return 8;
	
		case 1792833819:
			return 25;
	
		case 1837071987:
			return 30;
	
		case 1885832251:
			return 32;
	
		case 1976336482:
			return 18;
	
		case 2042305612:
			return 35;
	
		default:
		
	}

	return -1;
}

int func_328(int iParam0) // Position - 0xDC0F Hash - 0x61129AA8 ^0x61129AA8
{
	switch (iParam0)
	{
		case -1340981006:
			return 1;
	
		case joaat("LEGENDARY_ANIMAL"):
			return 4;
	
		case joaat("bounty"):
			return 0;
	
		case joaat("moonshine"):
			return 2;
	
		case joaat("MOONSHINE_RECIPE"):
			return 3;
	
		default:
		
	}

	return -1;
}

BOOL func_329(int iParam0, int iParam1) // Position - 0xDC55 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_286(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_363())
		return func_286(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_286(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_330(Player plParam0) // Position - 0xDCC9 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_331(Player plParam0) // Position - 0xDCE6 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_364(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_365(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_332(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xDD69 Hash - 0xF3352AB5 ^0x4999717C
{
	float num;

	num = func_224(Global_34, uParam0);

	if (num < Global_1901671.f_245.f_63)
	{
		*uParam3 = 1;
		return true;
	}

	if (num < Global_1901671.f_245.f_64)
		return true;

	return false;
}

void func_333(int iParam0) // Position - 0xDDAF Hash - 0x606817F ^0x3C8CB15C
{
	func_361(&Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/], iParam0, 28);
	return;
}

int func_334(int iParam0, int iParam1) // Position - 0xDDCA Hash - 0xF57D12B3 ^0x18CEC7B5
{
	int num;

	if (iParam0 == -1)
		return -1;

	num = func_259(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_6;
}

Vector3 func_335(int iParam0, int iParam1, int iParam2) // Position - 0xDDF3 Hash - 0x92C7FD1C ^0xBA5FB6A8
{
	var unk;
	var unk4;

	if (func_72(&unk4, iParam0) && func_258(&unk4, iParam1) && func_366(&unk4, iParam2))
		func_367(unk4, 1702777600, &unk, false);

	return unk;
}

float func_336() // Position - 0xDE35 Hash - 0xA456E2CC ^0x9AE2B714
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.1f);
}

void func_337(int iParam0) // Position - 0xDE47 Hash - 0x606817F ^0x3C8CB15C
{
	func_285(&Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/], iParam0, 28);
	return;
}

BOOL func_338(int iParam0) // Position - 0xDE62 Hash - 0xB67AACE8 ^0xDE4546F5
{
	if (!func_254(iParam0))
		return false;

	return func_368(iParam0) && Global_1141332[iParam0 /*27*/].f_18.f_1 != 0;
}

Vector3 func_339(int iParam0) // Position - 0xDE91 Hash - 0x4BFFCD ^0x4BFFCD
{
	return Global_1235687[iParam0 /*697*/].f_614;
}

BOOL func_340(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4) // Position - 0xDEA7 Hash - 0x45E7A4A8 ^0x7E1E1BA6
{
	float num;
	int num2;
	int num3;
	var unk;
	int i;
	int j;

	num2 = func_369(iParam3);
	num3 = (num2 + Global_1207480.f_3[iParam3]) - 1;

	for (i = num2; i <= num3; i = i + 1)
	{
		if (Global_1207480.f_231.f_1066[i /*17*/].f_13 != 1 && Global_1207480.f_231.f_1066[i /*17*/].f_13 != 2)
		{
		}
		else
		{
			for (j = 0; j <= Global_1207480.f_231.f_1066[i /*17*/].f_7 - 1; j = j + 1)
			{
				unk = { func_370(i, j) };
			
				if (_IS_NULL_VECTOR(unk))
				{
				}
				else
				{
					if (fParam4 == -1f)
					{
						num = BUILTIN::TO_FLOAT(func_371(i, j));
					
						if (num == BUILTIN::TO_FLOAT(2147483647))
							return true;
					}
					else
					{
						num = fParam4;
					}
				
					if (func_224(uParam0, unk) < num)
						return true;
				}
			}
		}
	}

	return false;
}

BOOL func_341(int iParam0) // Position - 0xDF8B Hash - 0xBC18B53E ^0xBC18B53E
{
	int num;
	int num2;

	if (!func_372(iParam0, &num, &num2) && iParam0 != 0)
		return false;

	if (num == 0)
		return false;

	if (num2 < func_373(iParam0))
		return true;

	return false;
}

int func_342(var uParam0) // Position - 0xDFC8 Hash - 0xDF707A83 ^0x33C6A1FA
{
	switch (uParam0->f_6)
	{
		case 1:
			return Global_1901671.f_245.f_49;
	
		case 2:
			return Global_1901671.f_245.f_48;
	}

	return -1;
}

struct<2> func_343(int iParam0) // Position - 0xE003 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

int func_344(var uParam0, var uParam1) // Position - 0xE015 Hash - 0x3AAD93D4 ^0x6348F3E3
{
	var unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

int func_345(int iParam0) // Position - 0xE028 Hash - 0xCA6C84A ^0xBE91BAC6
{
	int num;

	num = Global_1901671.f_245.f_50 / 1000;
	return BUILTIN::CEIL((float)num * func_374(iParam0));
}

BOOL func_346(int iParam0, int iParam1) // Position - 0xE04C Hash - 0x52162214 ^0xA031296E
{
	var statId;
	int num;

	if (iParam0 == 0)
		return false;

	statId = { func_105(iParam0, joaat("cooldown")) };

	if (!STATS::STAT_ID_GET_INT(&statId, &num))
		return false;

	if (num != 0 && Global_1295666.f_16 - num < iParam1)
		return true;

	return false;
}

float func_347(int iParam0) // Position - 0xE09A Hash - 0xC5053E3F ^0x5737FB1D
{
	int value;
	int value2;

	value = func_238(iParam0);

	if (value < 1)
		return 0f;

	value2 = Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_97[iParam0];
	return func_243(BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(value), 0f, 1f);
}

float func_348(int iParam0) // Position - 0xE0D9 Hash - 0xD8DB3659 ^0xD8DB3659
{
	switch (iParam0)
	{
		case 2:
			return 1f;
	
		default:
		
	}

	return 0f;
}

int func_349(int iParam0) // Position - 0xE0F4 Hash - 0x83E9D265 ^0xBE06DE0D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

void func_350(int iParam0, var uParam1, var uParam2) // Position - 0xE110 Hash - 0x7CDC8C6D ^0x7CDC8C6D
{
	switch (iParam0)
	{
		case joaat("Dusk"):
			*uParam1 = 18;
			*uParam2 = 21;
			break;
	
		case joaat("6_TO_10"):
			*uParam1 = 6;
			*uParam2 = 10;
			break;
	
		case joaat("22_TO_4"):
			*uParam1 = 22;
			*uParam2 = 4;
			break;
	
		case joaat("12_TO_0"):
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case joaat("14_TO_18"):
			*uParam1 = 14;
			*uParam2 = 18;
			break;
	
		case joaat("18_TO_22"):
			*uParam1 = 18;
			*uParam2 = 22;
			break;
	
		case joaat("6_TO_14"):
			*uParam1 = 6;
			*uParam2 = 14;
			break;
	
		case joaat("0_TO_6"):
			*uParam1 = 0;
			*uParam2 = 6;
			break;
	
		case joaat("6_TO_18"):
			*uParam1 = 6;
			*uParam2 = 18;
			break;
	
		case joaat("Dawn"):
			*uParam1 = 6;
			*uParam2 = 9;
			break;
	
		case joaat("18_TO_0"):
			*uParam1 = 18;
			*uParam2 = 0;
			break;
	
		case joaat("0_TO_12"):
			*uParam1 = 0;
			*uParam2 = 12;
			break;
	
		case joaat("10_TO_14"):
			*uParam1 = 10;
			*uParam2 = 14;
			break;
	
		case joaat("6_TO_12"):
			*uParam1 = 6;
			*uParam2 = 12;
			break;
	
		case joaat("12_TO_18"):
			*uParam1 = 12;
			*uParam2 = 18;
			break;
	
		case joaat("Night"):
			*uParam1 = 21;
			*uParam2 = 6;
			break;
	
		case joaat("18_TO_6"):
			*uParam1 = 18;
			*uParam2 = 6;
			break;
	
		case joaat("DAY"):
			*uParam1 = 9;
			*uParam2 = 18;
			break;
	
		case 1991225883:
			*uParam1 = 4;
			*uParam2 = 6;
			break;
	
		case joaat("14_TO_22"):
			*uParam1 = 14;
			*uParam2 = 22;
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	return;
}

BOOL func_351(int iParam0, int iParam1) // Position - 0xE298 Hash - 0xA5EC6F94 ^0xB70616A8
{
	int clockHours;

	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (iParam0 < iParam1)
		if (clockHours >= iParam0 && clockHours < iParam1)
			return 1;
	else if (iParam0 > iParam1)
		if (clockHours >= iParam1 && clockHours < iParam0)
			return 0;
		else
			return 1;

	return 0;
}

BOOL func_352(int iParam0) // Position - 0xE2EB Hash - 0xA2355A7 ^0xA2355A7
{
	if (iParam0 == 0)
		return 0;
	else if (iParam0 == -1)
		return 1;

	if (Global_1260806.f_3485 && iParam0 != false)
		return 1;

	return 0;
}

int func_353(int iParam0) // Position - 0xE31D Hash - 0x1B04F1B9 ^0xD8CFB006
{
	return Global_1148506.f_2[iParam0 /*18*/].f_1;
}

BOOL func_354(int iParam0) // Position - 0xE331 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

BOOL func_355(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE33A Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_375(bParam1, bParam2, bParam3);

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

int func_356() // Position - 0xE46F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

BOOL func_357(int iParam0, int iParam1, BOOL bParam2) // Position - 0xE47B Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_376(iParam1) || !func_376(iParam0))
			return true;

	return iParam0 > iParam1;
}

BOOL func_358(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4) // Position - 0xE4A8 Hash - 0xF97AA55C ^0xA9C63727
{
	*uParam4 = 0f;

	switch (iParam2)
	{
		case 1:
			if (func_377(1, PLAYER::PLAYER_ID(), true, false) != -1)
			{
				*uParam3 = 8388608;
				return false;
			}
		
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("ROLE_MOONSHINER_PROGRESSION_HIDEOUT")))
			{
				*uParam3 = 268435456;
				return false;
			}
			break;
	
		case 2:
			if (!func_41(0))
			{
				*uParam3 = 268435456;
				return false;
			}
		
			switch (iParam1)
			{
				case 1:
					if (func_41(1))
						*uParam4 = 0.5f;
					break;
			
				case 2:
					switch (iParam0)
					{
						case 43:
							if (!func_41(2))
							{
								*uParam3 = 268435456;
								return false;
							}
							else
							{
								*uParam4 = 0.25f;
							}
							break;
					}
					break;
			}
		
			if (func_377(2, PLAYER::PLAYER_ID(), true, false) != -1)
			{
				*uParam3 = 8388608;
				return false;
			}
			break;
	
		case 3:
			if (!func_41(6))
			{
				*uParam3 = 268435456;
				return false;
			}
			break;
	
		case 4:
			if (!func_41(7))
			{
				*uParam3 = 268435456;
				return false;
			}
			break;
	}

	return true;
}

int func_359(int iParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0xE5C8 Hash - 0xBB30E22F ^0xBB30E22F
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	var unk;
	int num4;
	Vector3 vector;
	int num5;
	BOOL flag2;
	Hash unlockHash;
	Hash unlockHash2;

	num = iParam0;

	if (num < 0 || num >= 112)
		return 11;

	if (!func_378())
		return 2;

	num2 = func_199(iParam0);
	num3 = func_379(num2, uParam1);

	if (num3 < 0 || num3 >= 55)
		return 11;

	if (!bParam7 && func_380(iParam0, num3, bParam8, &flag))
		if (flag)
			return 1;
		else
			return 4;

	if (func_381(num2, uParam1) && !bParam7)
	{
		unk = { func_382(num2, uParam1) };
		num4 = func_383(num2, num3);
	
		if (!func_384(num4, unk))
			return 5;
	}

	if (func_385(iParam2) == -1)
		return 6;

	if (iParam9 >= 0f && !_IS_NULL_VECTOR(vParam3))
	{
		vector = { func_203(iParam0, num3) };
	
		if (BUILTIN::VDIST(vParam3, vector) > iParam9)
			return 12;
	}

	if (func_386(iParam2))
	{
		num5 = func_185(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	
		if (!func_254(num5))
			return 13;
	
		if (func_338(num5))
			return 14;
	}

	if (func_387(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
		return 15;

	if (bParam6)
	{
		if (iParam2 != joaat("INTRO_MISSION") && func_388(func_208(), func_208(), false, bParam7))
			return 3;
	
		flag2 = false;
	
		if (!flag2)
		{
			unlockHash = func_202(iParam0, num3);
		
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				return 8;
		
			if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
				return 7;
		
			unlockHash2 = func_389(iParam0, num3);
		
			if (unlockHash2 != 0)
			{
				if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash2))
					return 10;
			
				if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash2))
					return 9;
			}
		}
	}

	return 0;
}

int func_360(int iParam0) // Position - 0xE79F Hash - 0x51AEC88B ^0xE24F8BBD
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 4194304;
	
		case 3:
			return 8388608;
	
		case 4:
			return 16777216;
	
		case 5:
			return 33554432;
	
		case 6:
			return 67108864;
	
		case 7:
		case 9:
			return 134217728;
	
		case 8:
		case 10:
			return 268435456;
	
		case 11:
			return 536870912;
	
		case 12:
			return 1073741824;
	
		case 13:
			return 256;
	
		case 14:
			return 524288;
	
		case 15:
			return 32768;
	
		default:
		
	}

	return 0;
}

BOOL func_361(int* piParam0, int iParam1, int iParam2) // Position - 0xE868 Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(piParam0->[num], offset);
	MISC::SET_BIT(&piParam0->[num], offset);
	return !isBitSet;
}

BOOL func_362(int iParam0, var uParam1, var uParam2) // Position - 0xE89B Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_390(iParam0, uParam1, &unk))
		func_391(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_363() // Position - 0xE8C2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_364(Player plParam0) // Position - 0xE8D1 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_365(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_365(Player plParam0) // Position - 0xE93D Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_366(Any* panParam0, int iParam1) // Position - 0xE978 Hash - 0x5E449B87 ^0xC5EA9978
{
	panParam0->f_2 = 1700129460;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_367(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0xE999 Hash - 0x75EEBFEF ^0x20737992
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_368(int iParam0) // Position - 0xE9BF Hash - 0x25DCF1DD ^0x25DCF1DD
{
	int num;

	if (!func_254(iParam0))
		return false;

	num = func_392(iParam0);
	return num != 0 && num != 3;
}

int func_369(int iParam0) // Position - 0xE9EA Hash - 0xDED1374F ^0xDED1374F
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 3;
	
		case 2:
			return 35;
	
		case 3:
			return 55;
	
		default:
		
	}

	return 0;
}

Vector3 func_370(int iParam0, int iParam1) // Position - 0xEA25 Hash - 0x805ECF2A ^0xB8790664
{
	return func_393(Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

int func_371(int iParam0, int iParam1) // Position - 0xEA44 Hash - 0x6DB31DA3 ^0x81691380
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

BOOL func_372(int iParam0, int* piParam1, var uParam2) // Position - 0xEA61 Hash - 0x6242D8A4 ^0xB09BFF73
{
	var statId;

	*piParam1 = 0;
	*uParam2 = 0;

	if (iParam0 == 0)
		return false;

	statId = { func_394(iParam0) };

	if (!STATS::STAT_ID_IS_VALID(&statId))
		return false;

	if (!STATS::STAT_ID_GET_INT(&statId, piParam1))
		return false;

	if (*piParam1 > 0)
		*uParam2 = (Global_1295666.f_16 - *piParam1) * 1000;

	return true;
}

int func_373(int iParam0) // Position - 0xEABB Hash - 0x76587E97 ^0x39B25A52
{
	switch (iParam0)
	{
		case 1:
			return Global_1901671.f_245.f_51;
	
		case 2:
			return Global_1901671.f_245.f_52;
	
		case 3:
			return Global_1901671.f_245.f_53;
	
		case 4:
			return Global_1901671.f_245.f_54;
	
		default:
		
	}

	return 0;
}

float func_374(int iParam0) // Position - 0xEB10 Hash - 0x9DB9EC38 ^0x31955FAC
{
	switch (iParam0)
	{
		case 7:
			return Global_1901671.f_245.f_30;
	
		case 20:
			return Global_1901671.f_245.f_31;
	
		default:
		
	}

	return 1f;
}

BOOL func_375(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEB43 Hash - 0xC9655EC3 ^0xE7BDB885
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

BOOL func_376(int iParam0) // Position - 0xEBE1 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_395(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_396(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_397(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_398(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_399(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_400(iParam0);

	if (num6 < 1 || num6 > func_401(num5, num4))
		return false;

	return true;
}

int func_377(int iParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0xECBD Hash - 0x7C261D0E ^0x89091B68
{
	int num;
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		num = Global_1235687[i /*697*/].f_571;
	
		switch (iParam0)
		{
			case 1:
				if (!func_402(num))
				{
				}
				else
				{
					break;
				}
		
			case 2:
				if (!func_403(num))
				{
				}
				else
				{
					break;
				}
		
			case 3:
				if (!func_404(num))
				{
				}
				else
				{
					break;
				}
		
			case 4:
				if (!func_386(num))
				{
				}
				else
				{
					break;
				}
		}
	
		if (bParam2 && !func_405(i, 32, plParam1))
		{
		}
		else if (bParam3 && Global_1225099[i /*28*/].f_15 != plParam1)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

BOOL func_378() // Position - 0xED8C Hash - 0x286EE6DB ^0x286EE6DB
{
	if (func_13())
		return false;

	return true;
}

int func_379(int iParam0, var uParam1) // Position - 0xEDA0 Hash - 0xC5A091E0 ^0x1F65A4D4
{
	int num;
	int num2;

	num = -1;

	if (func_72(&num2, iParam0) && func_209(&num2, uParam1))
		num = func_406(iParam0) - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

BOOL func_380(int iParam0, int iParam1, BOOL bParam2, var uParam3) // Position - 0xEDDA Hash - 0xF94E84C0 ^0xF94E84C0
{
	BOOL flag;
	var unk;
	float num;

	flag = func_407(iParam0, iParam1, 2);

	if (func_408(iParam0, iParam1, flag))
		return true;

	unk = { func_203(iParam0, iParam1) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num = func_409(func_199(iParam0), iParam1);

	if (bParam2 && func_407(iParam0, iParam1, 1) && func_410(unk, num))
	{
		*uParam3 = 1;
		return true;
	}

	return func_411(unk, num, flag);
}

BOOL func_381(int iParam0, var uParam1) // Position - 0xEE5D Hash - 0xE159584F ^0x5F2380F1
{
	BOOL num;
	var unk;

	num = 0;

	if (func_72(&unk, iParam0) && func_209(&unk, uParam1))
		func_412(unk, -528314399, &num, false);

	return num;
}

Vector3 func_382(int iParam0, var uParam1) // Position - 0xEE93 Hash - 0xBB89433 ^0xB676338C
{
	var unk;
	var unk4;

	if (func_72(&unk4, iParam0) && func_209(&unk4, uParam1))
		func_367(unk4, -370006557, &unk, true);

	return unk;
}

int func_383(int iParam0, int iParam1) // Position - 0xEEC8 Hash - 0x2C69351D ^0xB92871CE
{
	int num;
	var unk;
	int num2;

	num = 0;

	if (func_72(&unk, iParam0))
		if (func_258(&unk, iParam1))
			func_73(unk, 1342438652, &num, false);

	num2 = 0;

	if (num != 0)
		num2 = func_413(num);

	return num2;
}

BOOL func_384(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xEF0D Hash - 0xF2F6932E ^0xF2F6932E
{
	float num;
	float num2;
	Player player;
	Ped playerPed;
	float num3;
	int i;

	if (_IS_NULL_VECTOR(vParam1))
		return false;

	if (func_414(iParam0))
		return false;

	if (func_415(iParam0))
		return false;

	num = 5f;
	num2 = func_416(iParam0);

	if (num2 > 300f)
		num2 = 300f;

	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, num, num2))
		return false;

	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, num, num2))
		return false;

	num2 = num2 * 0.75f;

	if (num2 < 150f)
		num2 = 150f;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (ENTITY::DOES_ENTITY_EXIST(playerPed))
			{
				num3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(playerPed, false, false), vParam1);
			
				if (num3 < num2 && !func_417(iParam0))
					return false;
			}
		}
	}

	return true;
}

int func_385(int iParam0) // Position - 0xF00D Hash - 0x78B72B7B ^0x78B72B7B
{
	int i;

	if (!func_418(iParam0))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (func_419(i))
			return i;
	}

	return -1;
}

BOOL func_386(int iParam0) // Position - 0xF045 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_387(Player plParam0) // Position - 0xF072 Hash - 0x5243A98E ^0xE4BCD34A
{
	var memberHandles;
	int i;
	int gangMembers;
	Player playerFromGamerHandle;

	memberHandles = 7;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(plParam0)))
		return false;

	if (!GANG::NETWORK_IS_GANG_LEADER(plParam0))
		return false;

	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(plParam0), &memberHandles);

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle) || PLAYER::IS_PLAYER_DEAD(playerFromGamerHandle))
		{
		}
		else if (func_420(1048576, playerFromGamerHandle))
		{
			return true;
		}
	}

	return false;
}

BOOL func_388(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xF0F9 Hash - 0x6FEF2465 ^0xA07C994A
{
	var unk;
	var unk3;

	if (!bParam4)
		if (func_13())
			return true;

	unk = -1;
	unk.f_1 = -1;

	if (!func_29(uParam2))
		unk = { func_421() };
	else
		unk = { uParam2 };

	if (!bParam5 && func_29(unk) && !func_296(unk, uParam0))
		return true;

	unk3 = { func_44() };

	if (func_29(unk3) && !func_29(unk3) || !func_296(uParam0, unk3))
		return true;

	return false;
}

Hash func_389(int iParam0, int iParam1) // Position - 0xF1A0 Hash - 0x2A1363C ^0xF71B8764
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_259(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_1;
}

BOOL func_390(int iParam0, var uParam1, Any* panParam2) // Position - 0xF1C9 Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_321(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_391(Any* panParam0, int iParam1, var uParam2) // Position - 0xF1FD Hash - 0x59F43AD2 ^0xB9A366FE
{
	var unk;

	*uParam2 = iParam1;
	panParam0->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam0);
	panParam0->f_2 = -2140901307;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0))
		uParam2->f_2 = unk;

	panParam0->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), panParam0);
	panParam0->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), panParam0);
	panParam0->f_2 = 1234058424;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), panParam0);
	return;
}

int func_392(int iParam0) // Position - 0xF277 Hash - 0x49256A88 ^0x10462E79
{
	if (!func_254(iParam0))
		return 0;

	return Global_1142424.f_1[iParam0 /*63*/].f_3;
}

Vector3 func_393(int iParam0) // Position - 0xF299 Hash - 0xAC89079C ^0xF0D7C0AA
{
	float num;
	int value;
	int value2;

	value = iParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (iParam0 & 1073741824 == 0)
		num = num * -1f;

	if (iParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

struct<2> func_394(int iParam0) // Position - 0xF2F5 Hash - 0xC45CE1A6 ^0x9B4FA7F9
{
	var unk;

	switch (iParam0)
	{
		case 1:
			return func_343(joaat("mp_beat_manager_moonshiner_cooldown_timestamp"));
	
		case 2:
			return func_343(-1122351331);
	
		case 3:
			return func_343(1185140727);
	
		case 4:
			return func_343(1185140727);
	}

	return unk;
}

int func_395(int iParam0) // Position - 0xF35D Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_396(int iParam0) // Position - 0xF36F Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_397(int iParam0) // Position - 0xF381 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_398(int iParam0) // Position - 0xF394 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_399(int iParam0) // Position - 0xF3B9 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_400(int iParam0) // Position - 0xF3CC Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_401(int iParam0, int iParam1) // Position - 0xF3DF Hash - 0x893AC59E ^0x893AC59E
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

BOOL func_402(int iParam0) // Position - 0xF479 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_403(int iParam0) // Position - 0xF4B2 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}

	return false;
}

BOOL func_404(int iParam0) // Position - 0xF4DC Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -2096602762:
		case joaat("bounty_board"):
		case joaat("BOUNTY_PLAYER"):
			return true;
	}

	return false;
}

BOOL func_405(int iParam0, int iParam1, Player plParam2) // Position - 0xF506 Hash - 0x97EE87D3 ^0x486EE39E
{
	if (plParam2 == 255)
		plParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_423(iParam0) && func_110(Global_1225687[plParam2 /*303*/][iParam0 /*23*/].f_19, iParam1);
}

int func_406(int iParam0) // Position - 0xF53B Hash - 0xE65AA95E ^0x2FD05C04
{
	int numChildren;
	Any any;

	numChildren = 0;

	if (func_72(&any, iParam0))
	{
		any.f_2 = 866900867;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
			numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
	}

	return numChildren;
}

BOOL func_407(int iParam0, int iParam1, int iParam2) // Position - 0xF575 Hash - 0x4BDA638D ^0x27EF43B5
{
	int num;

	if (iParam0 == -1)
		return false;

	num = func_259(iParam0, iParam1);
	return func_221(Global_1245174.f_566[num /*7*/].f_2, iParam2);
}

BOOL func_408(int iParam0, int iParam1, BOOL bParam2) // Position - 0xF5A4 Hash - 0x9ACEFA0F ^0x9ACEFA0F
{
	int i;
	var unk;
	float num;

	for (i = 0; i <= func_334(iParam0, iParam1) - 1; i = i + 1)
	{
		unk = { func_335(func_199(iParam0), iParam1, i) };
		num = func_424(func_199(iParam0), iParam1, i);
	
		if (_IS_NULL_VECTOR(unk))
			break;
	
		if (func_411(unk, num, bParam2))
			return true;
	}

	return false;
}

float func_409(int iParam0, int iParam1) // Position - 0xF60B Hash - 0xA5DBD1AB ^0x9028ADD5
{
	var unk;
	var unk2;

	unk = Global_1901671.f_171.f_34;

	if (func_72(&unk2, iParam0) && func_258(&unk2, iParam1))
		func_425(unk2, -364402952, &unk, false);

	return unk;
}

BOOL func_410(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0xF648 Hash - 0x286B9D71 ^0xEFDB0941
{
	int i;
	Player player;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player), false, false), vParam0) < fParam3)
			return true;
	}

	return false;
}

BOOL func_411(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0xF695 Hash - 0x7DBD310D ^0xC8B4D81B
{
	int num;

	if (!bParam4)
		num = joaat("net_train");

	return VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam0, fParam3, false, 0, num);
}

int func_412(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL* pbParam6, BOOL bParam7) // Position - 0xF6B8 Hash - 0x75EEBFEF ^0x4AB97CB1
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(pbParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

int func_413(int iParam0) // Position - 0xF6DE Hash - 0x51A18A13 ^0x51A18A13
{
	switch (iParam0)
	{
		case joaat("SECONDARY"):
			return 1;
	
		case joaat("TROLLEY"):
			return 2;
	
		case joaat("PRIMARY"):
			return 0;
	}

	return 0;
}

BOOL func_414(int iParam0) // Position - 0xF716 Hash - 0xB629DC5B ^0xB629DC5B
{
	return func_426(iParam0, 4);
}

BOOL func_415(int iParam0) // Position - 0xF725 Hash - 0x4AB2C3FA ^0x5B68BB9
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount - 1)
		return true;

	return false;
}

float func_416(int iParam0) // Position - 0xF761 Hash - 0x2530E44E ^0x2530E44E
{
	switch (iParam0)
	{
		case 0:
			return 450f;
	
		case 1:
			return 450f;
	
		case 2:
			return 250f;
	
		default:
		
	}

	return 450f;
}

BOOL func_417(int iParam0) // Position - 0xF7A0 Hash - 0x4AB2C3FA ^0xA98A8A06
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount - 1)
		return true;

	return false;
}

BOOL func_418(int iParam0) // Position - 0xF7DC Hash - 0x8DB16628 ^0x36CCD5D6
{
	int num;

	num = func_427(iParam0);

	if (num != 0 && func_428(num))
		return false;

	if (iParam0 == joaat("INTRO_MISSION"))
		return func_429();

	return true;
}

BOOL func_419(int iParam0) // Position - 0xF814 Hash - 0xE49494BB ^0xE49494BB
{
	return Global_1225099[iParam0 /*28*/] == -1;
}

BOOL func_420(int iParam0, Player plParam1) // Position - 0xF826 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

struct<2> func_421() // Position - 0xF852 Hash - 0x46B5D72E ^0x46B5D72E
{
	return Global_1051268;
}

var func_422(BOOL bParam0, var uParam1, var uParam2) // Position - 0xF860 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_423(int iParam0) // Position - 0xF877 Hash - 0x3927FA65 ^0x3927FA65
{
	return iParam0 >= 0 && iParam0 <= 12;
}

float func_424(int iParam0, int iParam1, int iParam2) // Position - 0xF88D Hash - 0x4129E625 ^0x602FD3C3
{
	var unk;
	var unk2;

	unk = Global_1901671.f_171.f_35;

	if (func_72(&unk2, iParam0) && func_258(&unk2, iParam1) && func_366(&unk2, iParam2))
		func_425(unk2, -364402952, &unk, false);

	return unk;
}

int func_425(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float* pfParam6, BOOL bParam7) // Position - 0xF8D7 Hash - 0x75EEBFEF ^0x896914A8
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_426(int iParam0, int iParam1) // Position - 0xF8FD Hash - 0x4B02EE0 ^0x4A2C2E8A
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_221(Global_1148618[i /*13*/][iParam0 /*4*/], iParam1))
			return 1;
	}

	return 0;
}

int func_427(int iParam0) // Position - 0xF944 Hash - 0x802361CB ^0x802361CB
{
	switch (iParam0)
	{
		case -2096602762:
		case -1812122325:
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("hideout"):
		case 918897273:
			return 8;
	
		case joaat("bounty_board"):
		case joaat("gun_for_hire"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("outlaw"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("dynamic"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_428(int iParam0) // Position - 0xF9E2 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_429() // Position - 0xFA03 Hash - 0x16C45944 ^0x16C45944
{
	return func_430(func_70(0));
}

BOOL func_430(var uParam0, var uParam1) // Position - 0xFA14 Hash - 0x213CF43D ^0x213CF43D
{
	return func_431(uParam0, 1, 4);
}

BOOL func_431(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0xFA26 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_29(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_432(iParam0);
	return num >= iParam2 && num <= iParam3;
}

int func_432(int iParam0, var uParam1) // Position - 0xFA61 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_45(iParam0);

	return -1;
}

