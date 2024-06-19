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
	Hash hLocal_19 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x7337C775 ^0xAB73BA0B
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2;
		func_1();
		return;
	}

	func_2();
	Global_1878407.f_1822 = 0;
	Global_1878407 = 0;
	Global_1878407.f_1822 = 0;

	while (!func_3(false, false))
	{
		if (!Global_1878407.f_7185)
		{
			BUILTIN::WAIT(0);
		}
		else if (func_4(68))
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			func_5();
			func_6();
			BUILTIN::WAIT(0);
		}
	}

	func_1();
	return;
}

void func_1() // Position - 0x82 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x8E Hash - 0xB3AD2B5E ^0x82067B17
{
	func_7(32, -1);
	func_8();

	if (func_9())
		func_10();

	func_11(&Global_1220640);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1220640, 80, 45);
	func_12(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1220640), 80, "g_mpFlowData");
	func_13(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_14(&Global_1220316, 1);
	return;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0xE8 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_4(int iParam0) // Position - 0x1C8 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_5() // Position - 0x1DB Hash - 0x26A9C314 ^0x456CB03A
{
	int* p_num;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	p_num = Global_1220640 + 1;

	if (p_num > 25)
		p_num = 0;

	Global_1220640 = p_num;
	func_15();
	return;
}

void func_6() // Position - 0x20A Hash - 0xD98665C3 ^0x20CC0D85
{
	Hash hash;
	int num;
	int num2;
	BOOL flag;

	hash = -1;
	num = 0;
	num2 = 3;
	func_16(&num2);
	Global_1900460.f_68 = func_17(0, true, false);

	while (num < num2 && !flag)
	{
		if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hLocal_19 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hLocal_19 /*4*/], 1))
			{
				hash = hLocal_19;
				func_18(hash, false);
			
				if (Global_1878407.f_9[hash])
				{
					func_18(hash, true);
				
					if (Global_1878407.f_9[hash])
						Global_1878407.f_9[hash] = false;
				}
			}
		
			num = num + 1;
		}
	
		hLocal_19 = hLocal_19 + 1;
	
		if (hLocal_19 >= Global_1878407.f_7184)
		{
			if (!Global_1878407.f_1822)
				Global_1878407 = 0;
		
			Global_1878407.f_1822 = 0;
			hLocal_19 = 0;
		}
	
		if (MISC::_GET_MAX_NUM_INSTRUCTIONS() - MISC::_GET_NUMBER_OF_INSTRUCTIONS() <= BUILTIN::FLOOR(BUILTIN::TO_FLOAT(MISC::_GET_MAX_NUM_INSTRUCTIONS()) * 0.2f))
			flag = true;
	}

	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x2F7 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_10();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_8() // Position - 0x314 Hash - 0x1FABDECD ^0x67C342BC
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
			func_10();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_10();
					break;
			
				case 2:
					func_10();
					break;
			
				case 3:
					func_10();
					break;
			
				case 4:
					func_10();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_10();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_10();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_10();
	
		if (func_19() == 0)
			if (func_20())
				func_10();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_10();

	return 1;
}

BOOL func_9() // Position - 0x425 Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_10() // Position - 0x453 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_11(int* piParam0) // Position - 0x45F Hash - 0xC6CD6328 ^0x7A8EC931
{
	var unk;
	int i;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	*piParam0 = 0;
	i = 0;

	for (i = 0; i < 26; i = i + 1)
	{
		piParam0->f_1[i /*3*/] = { unk };
	}

	return;
}

int func_12(int iParam0, int iParam1, char* sParam2) // Position - 0x49A Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_13(BOOL bParam0) // Position - 0x4A3 Hash - 0x2B211437 ^0xE0D702E
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
					func_10();
					break;
			
				case 2:
					func_10();
					break;
			
				case 3:
					func_10();
					break;
			
				case 4:
					func_10();
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
			func_10();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_14(var uParam0, int iParam1) // Position - 0x56C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_15() // Position - 0x57D Hash - 0x88351999 ^0xA242D853
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (Global_1220640 < 13 || Global_1220640 > 25)
		return;

	if (func_21(Global_1220640) && !func_22())
		func_23(Global_1220640);
	else
		func_24(Global_1220640);

	return;
}

void func_16(var uParam0) // Position - 0x5D4 Hash - 0xD4C7B6B ^0x3753B152
{
	int num;

	if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295666.f_10) || GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10))
	{
		if (Global_1295666.f_11 != Global_1295666 && Global_1295666.f_11 >= 0 && Global_1295666.f_11 < 32 && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[Global_1295666.f_11]))
		{
			func_25();
			Global_1878407.f_5 = Global_1878407.f_5 + 1;
			*uParam0 = 0;
		}
		else if (Global_1878407.f_5 > 0)
		{
			if (func_26() > 0)
			{
				num = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - func_26());
			
				if (num < 120)
				{
					Global_1878407.f_5 = Global_1878407.f_5 + 1;
					*uParam0 = 0;
					return;
				}
			
				func_27(0);
			}
		
			func_28();
			Global_1878407.f_5 = 0;
		}
	}
	else if (Global_1878407.f_5 > 0)
	{
		Global_1878407.f_5 = 0;
	}

	return;
}

BOOL func_17(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6B3 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_29())
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

	if (iParam0 == 0 && func_31(func_30(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_32(func_30(0)))
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

void func_18(Hash hParam0, BOOL bParam1) // Position - 0x829 Hash - 0xDA9CFD94 ^0x2F082272
{
	int num;
	int num2;
	int num3;
	int num4;

	num = Global_1878407.f_7185.f_1[hParam0 /*4*/].f_1;
	num2 = num;
	num3 = Global_1878407.f_7134[hParam0 /*2*/];
	num4 = Global_1878407.f_7134[hParam0 /*2*/].f_1;

	if (num < num3)
		return;

	if (num > num4)
		return;

	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hParam0 /*4*/], 1))
		return;

	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hParam0 /*4*/], 2))
		return;

	func_33(hParam0, num);
	num = Global_1878407.f_7185.f_1[hParam0 /*4*/].f_1;

	if (Global_1878407.f_1823[num /*3*/] == 531432813)
		func_33(hParam0, num);

	if (bParam1)
	{
		while (num2 != Global_1878407.f_7185.f_1[hParam0 /*4*/].f_1)
		{
			num2 = Global_1878407.f_7185.f_1[hParam0 /*4*/].f_1;
			func_33(hParam0, Global_1878407.f_7185.f_1[hParam0 /*4*/].f_1);
		}
	}

	return;
}

int func_19() // Position - 0x920 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_20() // Position - 0x92E Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

BOOL func_21(int* piParam0) // Position - 0x93C Hash - 0xBF62E6E9 ^0x224E00B3
{
	int i;
	Player player;

	if (!func_34(piParam0))
		return false;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(player) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (MISC::_IS_BIT_FLAG_SET(&(Global_1056554[i /*491*/].f_15.f_21), piParam0))
		{
			return true;
		}
	}

	return false;
}

BOOL func_22() // Position - 0x9AF Hash - 0x3E1997C3 ^0x3E1997C3
{
	BOOL num;

	if (!func_35())
		return false;

	num = 0;

	switch (Global_1051268)
	{
		case 4:
			num = 1;
			break;
	}

	return num;
}

int func_23(int* piParam0) // Position - 0x9DE Hash - 0xC22DD942 ^0x469024F6
{
	Vector3 vector;
	float radius;
	var args;
	int volLockRequestId;
	int volumeLockRequestStatus;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return 0;

	if (!func_36(piParam0))
		return 0;

	if (!func_37(piParam0))
		return 1;

	vector = { func_38(piParam0) };
	radius = func_39(piParam0);

	switch (func_40(piParam0))
	{
		case 0:
			if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vector, radius, false, 0, 0))
			{
				if (func_41(&args, piParam0))
				{
					volLockRequestId = VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&args);
				
					if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
						return 1;
				}
			
				break;
			}
		
			if (!func_42())
				break;
		
			func_43(piParam0, 1);
			break;
	
		case 1:
			if (!func_41(&args, piParam0))
			{
				func_43(piParam0, 0);
				break;
			}
		
			func_44(piParam0, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args));
			func_43(piParam0, 2);
			break;
	
		case 2:
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(func_45(piParam0)))
			{
				func_43(piParam0, 0);
				break;
			}
		
			volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(func_45(piParam0));
		
			switch (volumeLockRequestStatus)
			{
				case 1:
				case 2:
					break;
			
				case 3:
					func_46(piParam0, VOLUME::_0x351D71B8B72B858B(func_45(piParam0)));
				
					if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(piParam0)))
					{
						func_43(piParam0, 0);
						return 0;
					}
				
					func_43(piParam0, 3);
					break;
			
				case 4:
					func_43(piParam0, 0);
					break;
			}
			break;
	
		case 3:
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(piParam0)))
				return 1;
		
			func_43(piParam0, 0);
			break;
	}

	return 0;
}

int func_24(int* piParam0) // Position - 0xB5B Hash - 0x780B12E5 ^0xC4BFC11
{
	var args;
	int volLockRequestId;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return 0;

	if (!func_36(piParam0))
		return 0;

	switch (func_40(piParam0))
	{
		case 0:
			if (func_41(&args, piParam0))
			{
				volLockRequestId = VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&args);
			
				if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
				{
					func_46(piParam0, volLockRequestId);
					func_43(piParam0, 3);
				}
			}
			break;
	
		case 1:
		case 2:
			func_43(piParam0, 0);
			break;
	
		case 3:
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(piParam0)))
				VOLUME::_RELEASE_LOCK_VOLUME(func_47(piParam0));
		
			func_43(piParam0, 0);
			break;
	}

	return 1;
}

void func_25() // Position - 0xBFE Hash - 0x7E92CB9A ^0xBCE75E9A
{
	int i;
	int j;

	if (Global_1878407.f_5 == 0)
	{
		for (i = 13; i <= 25; i = i + 1)
		{
			func_48(i, true);
			func_49(i, -1, false, true, true, 0, 0);
			func_50(i);
			func_51(i);
		}
	
		for (j = 0; j < 10; j = j + 1)
		{
			if (!func_52(j))
			{
			}
			else if (func_53(j))
			{
				func_54(j, 1, 1, 1);
			}
			else if (func_55(j) && Global_1295666.f_11 != Global_1295666)
			{
				func_54(j, 1, 1, 1);
			}
		}
	}

	return;
}

int func_26() // Position - 0xC9A Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1878407.f_6;
}

void func_27(int iParam0) // Position - 0xCA8 Hash - 0x29A8F290 ^0xB00AC4D8
{
	Global_1878407.f_6 = iParam0;
	return;
}

void func_28() // Position - 0xCB8 Hash - 0x27552A31 ^0x2F124F8E
{
	int i;
	int j;

	for (i = 6; i <= 10; i = i + 1)
	{
		MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[i /*4*/], 1);
		MISC::SET_BIT(&Global_1878407.f_7185.f_1[i /*4*/], 2);
		Global_1878407.f_7185.f_1[i /*4*/].f_1 = Global_1878407.f_7134[i /*2*/];
	}

	for (j = 1; j <= 6; j = j + 1)
	{
		if (!Global_1878407.f_7185.f_74[j])
		{
		}
		else
		{
			Global_1878407.f_7185.f_74[j] = false;
		}
	}

	func_56();
	MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[5 /*4*/], 2);
	MISC::SET_BIT(&Global_1878407.f_7185.f_1[5 /*4*/], 1);
	MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[6 /*4*/], 2);
	MISC::SET_BIT(&Global_1878407.f_7185.f_1[6 /*4*/], 1);
	return;
}

BOOL func_29() // Position - 0xD8E Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_31(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_30(int iParam0) // Position - 0xDE6 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_31(var uParam0, var uParam1) // Position - 0xDFA Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_57(uParam0))
		return 0;

	if (uParam0.f_1 < 0)
		return 0;

	if (uParam0.f_1 >= func_58(uParam0))
		return 0;

	return 1;
}

int func_32(var uParam0, var uParam1) // Position - 0xE2E Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

Hash func_33(Hash hParam0, int iParam1) // Position - 0xE38 Hash - 0x7DB25CA6 ^0xE1C757DB
{
	Hash hash;
	int num;
	Hash hash2;

	hash = -1;
	num = Global_1878407.f_1823[iParam1 /*3*/];
	hash2 = Global_1878407.f_1823[iParam1 /*3*/].f_2;

	switch (num)
	{
		case -2093459088:
			hash = func_78(hParam0, hash2);
			break;
	
		case -2037170240:
			hash = func_91(hash2);
			break;
	
		case -2024549018:
			hash = func_89(hash2);
			break;
	
		case -1982716178:
			hash = func_70(hash2);
			break;
	
		case -1913176419:
			hash = func_72(hash2);
			break;
	
		case -1878191811:
			hash = func_61(hash2);
			break;
	
		case -1750917831:
			hash = -2;
			break;
	
		case -1676509288:
			hash = func_99(hash2);
			break;
	
		case -1664179412:
			hash = func_76(hParam0, hash2);
			break;
	
		case -1592972575:
			hash = func_92(hash2);
			break;
	
		case -1532130030:
			hash = func_66(hash2);
			break;
	
		case -1406703909:
			hash = func_88(hash2);
			break;
	
		case -1397432621:
			hash = func_95(hash2);
			break;
	
		case -1228560642:
			hash = func_90(hash2);
			break;
	
		case -1178941194:
			hash = func_93(hash2);
			break;
	
		case -964850613:
			hash = func_71(hash2);
			break;
	
		case -868169264:
			hash = func_79(hParam0, hash2);
			break;
	
		case -673493118:
			hash = func_98();
			break;
	
		case -661286798:
			hash = func_65(hash2);
			break;
	
		case -644074888:
			hash = func_83();
			break;
	
		case -612537234:
			hash = func_85(hash2);
			break;
	
		case -217347738:
			hash = func_62(hash2);
			break;
	
		case -157982035:
			hash = func_87(hash2);
			break;
	
		case -157595539:
			hash = func_94();
			break;
	
		case 427205337:
			hash = func_74(hParam0, hash2);
			break;
	
		case 442701271:
			hash = func_84();
			break;
	
		case 485486536:
			hash = -2;
			break;
	
		case 531432813:
			hash = -2;
			break;
	
		case 535702079:
			hash = func_56();
			break;
	
		case 645932728:
			hash = func_96(hash2);
			break;
	
		case 712880499:
			hash = func_75(hParam0, hash2);
			break;
	
		case 770100737:
			hash = func_77(hash2);
			break;
	
		case 1098008903:
			hash = func_81(hash2);
			break;
	
		case 1111033820:
			hash = func_68(hash2);
			break;
	
		case 1144707570:
			hash = func_63(hash2);
			break;
	
		case 1174602905:
			hash = func_67(hash2);
			break;
	
		case 1210875743:
			hash = func_73(hParam0, hash2);
			break;
	
		case 1232552289:
			hash = func_97();
			break;
	
		case 1281917784:
			hash = func_80(hParam0, hash2);
			break;
	
		case 1677774865:
			hash = func_59(hash2);
			break;
	
		case 1873982265:
			hash = func_86(hash2);
			break;
	
		case 1909997983:
			MISC::SET_BIT(&Global_1878407.f_7185.f_1[hParam0 /*4*/], 2);
			hash = -1;
			break;
	
		case 1984622930:
			hash = func_64(hash2);
			break;
	
		case 1986927063:
			hash = func_69(hash2);
			break;
	
		case 2058194871:
			hash = func_60(hash2);
			break;
	
		case 2088295092:
			hash = func_82(hash2);
			break;
	
		default:
			hash = -2;
			break;
	}

	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hParam0 /*4*/], 2))
	{
		if (hash != -1)
		{
			Global_1878407 = 1;
			Global_1878407.f_1822 = 1;
		}
	
		func_100(hParam0, hash);
	}

	return hash;
}

BOOL func_34(int iParam0) // Position - 0x11B6 Hash - 0x83C2A288 ^0x83C2A288
{
	int* p_num;

	p_num = iParam0;
	return p_num >= 0 && p_num < 64;
}

BOOL func_35() // Position - 0x11D0 Hash - 0xA584E02B ^0xA584E02B
{
	return func_31(Global_1051268);
}

BOOL func_36(Hash hParam0) // Position - 0x11E2 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return hParam0 > -1 && hParam0 <= 80;
}

BOOL func_37(int iParam0) // Position - 0x11F8 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return true;
	
		default:
		
	}

	return false;
}

Vector3 func_38(int* piParam0) // Position - 0x125B Hash - 0xAFBD63A2 ^0x16E0911B
{
	switch (piParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return Global_1835011[piParam0 /*72*/].f_19;
	
		default:
		
	}

	return func_101();
}

float func_39(int* piParam0) // Position - 0x12CC Hash - 0xCE911EC2 ^0xCE911EC2
{
	switch (piParam0)
	{
		case 13:
			return 18f;
	
		case 14:
			return 40f;
	
		case 15:
			return 35f;
	
		case 16:
			return 55f;
	
		case 17:
			return 50f;
	
		case 18:
			return 50f;
	
		case 19:
			return 45f;
	
		case 20:
			return 60f;
	
		case 21:
			return 55f;
	
		case 22:
			return 30f;
	
		case 23:
			return 55f;
	
		case 24:
			return 55f;
	
		case 25:
			return 65f;
	
		default:
		
	}

	return 0f;
}

int func_40(int* piParam0) // Position - 0x1393 Hash - 0x58295D68 ^0x7968A647
{
	if (!func_36(piParam0))
		return 4;

	return Global_1220640.f_1[piParam0 /*3*/].f_2;
}

BOOL func_41(Any* panParam0, int* piParam1) // Position - 0x13B5 Hash - 0x9D5BB5B1 ^0x90CE9087
{
	var src;

	if (!func_36(piParam1))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 9);
	*panParam0 = { func_38(piParam1) };

	if (_IS_NULL_VECTOR(*panParam0))
		return false;

	panParam0->f_4 = func_39(piParam1);
	panParam0->f_5 = func_103(piParam1);
	panParam0->f_6 = func_104();
	panParam0->f_7 = Global_1835011[piParam1 /*72*/].f_51;
	return true;
}

BOOL func_42() // Position - 0x1419 Hash - 0x6601DAE8 ^0xB840871F
{
	if (func_29())
		return false;

	if (func_105() != -1)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_31(func_106()))
		return false;

	return true;
}

void func_43(int* piParam0, int iParam1) // Position - 0x1454 Hash - 0x581DC092 ^0x4BF551DE
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (!func_36(piParam0))
		return;

	if (Global_1220640.f_1[piParam0 /*3*/].f_2 == iParam1)
		return;

	Global_1220640.f_1[piParam0 /*3*/].f_2 = iParam1;
	return;
}

void func_44(int* piParam0, int iParam1) // Position - 0x1496 Hash - 0x581DC092 ^0xC7DAA466
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (!func_36(piParam0))
		return;

	if (Global_1220640.f_1[piParam0 /*3*/].f_1 == iParam1)
		return;

	Global_1220640.f_1[piParam0 /*3*/].f_1 = iParam1;
	return;
}

int func_45(int* piParam0) // Position - 0x14D8 Hash - 0x95AD1260 ^0x42861FB5
{
	if (!func_36(piParam0))
		return -1;

	return Global_1220640.f_1[piParam0 /*3*/].f_1;
}

void func_46(int* piParam0, int iParam1) // Position - 0x14FA Hash - 0x2094F1BE ^0xB224E86C
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (!func_36(piParam0))
		return;

	if (Global_1220640.f_1[piParam0 /*3*/] == iParam1)
		return;

	Global_1220640.f_1[piParam0 /*3*/] = iParam1;
	return;
}

int func_47(int iParam0) // Position - 0x1538 Hash - 0xBE334AF5 ^0x5B7B4E6
{
	if (!func_36(iParam0))
		return -1;

	return Global_1220640.f_1[iParam0 /*3*/];
}

void func_48(int iParam0, BOOL bParam1) // Position - 0x1558 Hash - 0x75177599 ^0xD02591BD
{
	int num;

	num = func_107(Global_1835011[iParam0 /*72*/].f_1);

	if (!func_108(num))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900562[num /*2*/]))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&Global_1900562[num /*2*/]);
	}

	if (func_109(num, 48))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));

	if (bParam1)
	{
		func_111(func_110(4, iParam0), 0);
		func_112(Global_1835011[iParam0 /*72*/].f_1, false, 2, 0, false);
	}

	if (Global_1835011[iParam0 /*72*/].f_32 != -1)
		Global_1835011[iParam0 /*72*/].f_32 = -1;

	func_113(iParam0);
	return;
}

void func_49(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, int iParam6) // Position - 0x1600 Hash - 0x880AF98 ^0x212D2624
{
	var unk;

	if (!func_108(iParam1))
	{
		iParam1 = func_107(func_114(iParam0));
	
		if (!func_108(iParam1))
			return;
	}

	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*72*/].f_28));
		Global_1835011[iParam0 /*72*/].f_66 = 0;
	}
	else if (bParam2 && !Global_26688)
	{
		func_115(iParam0, iParam5, iParam1);
	}

	if (func_109(iParam1, 48))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));

	unk = { Global_1835011[iParam0 /*72*/].f_13 };

	if (bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&unk) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_17, false))
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*72*/].f_17);

	if (bParam4)
		func_116(Global_1835011[iParam0 /*72*/].f_1);
	else
		func_117(iParam1, 3831);

	Global_1835011[iParam0 /*72*/].f_71 = 0;
	return;
}

void func_50(int iParam0) // Position - 0x16FE Hash - 0x7A3C19D5 ^0xFD9E064
{
	var unk;

	TEXT_LABEL_COPY(&unk, { Global_1835011[iParam0 /*72*/].f_4 }, 3);

	if (func_19() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&unk) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_8, false))
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*72*/].f_8);

	return;
}

void func_51(int iParam0) // Position - 0x174E Hash - 0x612C484F ^0xE721B942
{
	Player playerIndex;

	if (!func_34(iParam0))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndex) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerIndex))
		return;

	if (!func_118(iParam0, playerIndex))
		return;

	MISC::_CLEAR_BIT_FLAG(&(Global_1056554[playerIndex /*491*/].f_15.f_21), iParam0);
	return;
}

BOOL func_52(Hash hParam0) // Position - 0x17A5 Hash - 0x68EEA5A8 ^0x68EEA5A8
{
	if (hParam0 <= 0 || hParam0 >= 10)
		return false;

	return true;
}

BOOL func_53(int iParam0) // Position - 0x17C4 Hash - 0x34554191 ^0x34554191
{
	switch (iParam0)
	{
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return false;
	
		case 4:
			return false;
	
		case 5:
			return false;
	
		case 6:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return false;
	
		case 9:
			return false;
	
		default:
		
	}

	return false;
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x182F Hash - 0x8B56C5FF ^0xC71A31C6
{
	if (iParam0 >= 10 || iParam0 <= 0)
		return;

	if (Global_1291943.f_133[iParam0 /*5*/].f_3 == iParam1)
		return;

	Global_1291943.f_133[iParam0 /*5*/].f_3 = iParam1;
	Global_1291943.f_133[iParam0 /*5*/].f_2 = iParam3;
	Global_1291943.f_133[iParam0 /*5*/].f_1 = iParam2;
	return;
}

BOOL func_55(int iParam0) // Position - 0x188A Hash - 0x5069B399 ^0x5069B399
{
	switch (iParam0)
	{
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return false;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 6:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return false;
	
		case 9:
			return false;
	
		default:
		
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
Hash func_56() // Position - 0x18F5 Hash - 0xF527B394 ^0xFA9C5909
{
	int i;
	int j;
	int num;
	Hash unlockHash;

	for (i = 13; i <= 25; i = i + 1)
	{
		num = func_110(4, i);
	
		if (num == 0)
		{
		}
		else
		{
			func_113(i);
		
			if (Global_1149432.f_4920[i /*3*/].f_2)
				func_111(num, 0);
		}
	}

	for (j = 1; j <= 9; j = j + 1)
	{
		switch (func_119(j, PLAYER::PLAYER_ID()))
		{
			case 3:
			case 4:
			case 6:
				goto 0xC8;
		}
	
		if (!func_53(j) && !func_55(j))
		{
		}
		else
		{
			num = func_120(3, j);
		
			if (num == 0)
			{
			}
			else
			{
				unlockHash = func_121(j);
			
				if (unlockHash == 0)
				{
				}
				else if (UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
				{
					func_111(num, 0);
				}
			}
		}
	}

	return -2;
}

BOOL func_57(int iParam0) // Position - 0x19CC Hash - 0x5000025C ^0x5000025C
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

int func_58(int iParam0) // Position - 0x1A0B Hash - 0xE34A477A ^0xE34A477A
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

Hash func_59(Hash hParam0) // Position - 0x1AA1 Hash - 0x5F3B0FFA ^0xCC6A6096
{
	Hash hash;

	if (hParam0 < -1 || hParam0 > Global_1878407.f_7184)
		return -2;

	hash = hParam0;

	if (hash == -1)
		return -2;

	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hash /*4*/], 1))
		return -2;

	MISC::SET_BIT(&Global_1878407.f_7185.f_1[hash /*4*/], 1);

	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hash /*4*/], 2))
		MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[hash /*4*/], 2);

	return -2;
}

Hash func_60(Hash hParam0) // Position - 0x1B2D Hash - 0x5F3B0FFA ^0xCC6A6096
{
	Hash hash;

	if (hParam0 < -1 || hParam0 > Global_1878407.f_7184)
		return -2;

	hash = hParam0;

	if (hash == -1)
		return -2;

	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hash /*4*/], 2))
		return -2;

	MISC::SET_BIT(&Global_1878407.f_7185.f_1[hash /*4*/], 2);

	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hash /*4*/], 1))
		MISC::SET_BIT(&Global_1878407.f_7185.f_1[hash /*4*/], 1);

	return -2;
}

Hash func_61(Hash hParam0) // Position - 0x1BBA Hash - 0x342356E9 ^0xC0479FFA
{
	int num;

	num = hParam0 % 1000000;

	if (num < -2 || num > 15)
		return -2;

	return num;
}

Hash func_62(Hash hParam0) // Position - 0x1BE7 Hash - 0x48654532 ^0xC589CF98
{
	Hash hash;
	Hash hash2;
	int unk;
	int num;
	int num2;
	int num3;
	int num4;
	Hash hash3;

	if (hParam0 == -1)
		return -2;

	hash = Global_1878407.f_1084[hParam0 /*2*/];

	if (hash <= -1 || hash >= Global_1878407.f_7184)
		return -2;

	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hash /*4*/], 1))
		return -2;

	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hash /*4*/], 2))
		return -2;

	hash2 = Global_1878407.f_1084[hParam0 /*2*/].f_1;
	unk = Global_1878407.f_7185.f_1[hash /*4*/].f_1;
	num = Global_1878407.f_7134[hash /*2*/];
	num2 = Global_1878407.f_7134[hash /*2*/].f_1;

	if (unk < num)
		return -2;

	if (unk > num2)
		return -2;

	num3 = num;
	num4 = -1;

	while (num3 <= num2)
	{
		if (Global_1878407.f_1823[num3 /*3*/] == 531432813)
		{
			num4 = Global_1878407.f_1823[num3 /*3*/].f_2;
			hash3 = Global_1878407.f_123[num4 /*4*/];
		
			if (hash3 == hash2)
			{
				Global_1878407.f_7185.f_1[hash /*4*/].f_1 = num3;
				return -2;
			}
		}
	
		num3 = num3 + 1;
	}

	return -2;
}

Hash func_63(Hash hParam0) // Position - 0x1D18 Hash - 0x9D054DA7 ^0x8533D1F6
{
	Hash hash;
	int num;

	if (hParam0 == -1)
		return -2;

	hash = Global_1878407.f_123[hParam0 /*4*/];

	if (hash == -1 || hash == 1)
		return -2;

	num = 0;

	if (Global_1878407.f_123[hParam0 /*4*/].f_1 == 1)
		num = 1;

	func_122(hash, num);
	return -2;
}

Hash func_64(Hash hParam0) // Position - 0x1D70 Hash - 0x2AF1233C ^0x94AE4DC9
{
	Hash hash;
	Hash hash2;

	if (hParam0 == -1)
		return -2;

	hash = Global_1878407.f_123[hParam0 /*4*/];

	if (hash == -1 || hash == 1)
		return -2;

	hash2 = Global_1878407.f_123[hParam0 /*4*/].f_1;
	func_123(hash, hash2);
	return -2;
}

Hash func_65(Hash hParam0) // Position - 0x1DC0 Hash - 0x2AF1233C ^0x94AE4DC9
{
	int num;
	int num2;
	int num3;

	if (hParam0 == -1)
		return -2;

	num = Global_1878407.f_123[hParam0 /*4*/];

	if (num == -1 || num == 1)
		return -2;

	num2 = Global_1878407.f_123[hParam0 /*4*/].f_1;

	if (num2 < 0 || num2 >= 32)
		return -2;

	num3 = 0;

	if (Global_1878407.f_123[hParam0 /*4*/].f_2 == 1)
		num3 = 1;

	func_124(num, num2, num3);
	return -2;
}

Hash func_66(Hash hParam0) // Position - 0x1E40 Hash - 0x34617E80 ^0x5C8835EE
{
	int num;
	int num2;
	int num3;

	if (hParam0 == -1)
		return -2;

	num = Global_1878407.f_123[hParam0 /*4*/] % 1000000;

	if (num == -1 || num == 1)
		return -2;

	num2 = Global_1878407.f_123[hParam0 /*4*/].f_1;
	num3 = Global_1878407.f_123[hParam0 /*4*/].f_2;

	if (func_125(num))
		return num2;

	return num3;
}

Hash func_67(Hash hParam0) // Position - 0x1EA8 Hash - 0x2AF1233C ^0x94AE4DC9
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	if (hParam0 == -1)
		return -2;

	hash = Global_1878407.f_123[hParam0 /*4*/];

	if (hash == -1 || hash == 1)
		return -2;

	hash2 = Global_1878407.f_123[hParam0 /*4*/].f_1;
	hash3 = Global_1878407.f_123[hParam0 /*4*/].f_2;
	hash4 = Global_1878407.f_123[hParam0 /*4*/].f_3;

	if (func_126(hash) == hash2)
		return hash3;

	return hash4;
}

Hash func_68(Hash hParam0) // Position - 0x1F1B Hash - 0x2AF1233C ^0x94AE4DC9
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	if (hParam0 == -1)
		return -2;

	hash = Global_1878407.f_123[hParam0 /*4*/];

	if (hash == -1 || hash == 1)
		return -2;

	hash2 = Global_1878407.f_123[hParam0 /*4*/].f_1;

	if (hash2 < 0 || hash2 >= 32)
		return -2;

	hash3 = Global_1878407.f_123[hParam0 /*4*/].f_2;
	hash4 = Global_1878407.f_123[hParam0 /*4*/].f_3;

	if (func_127(hash, hash2))
		return hash3;

	return hash4;
}

Hash func_69(Hash hParam0) // Position - 0x1FA6 Hash - 0xF5323AC7 ^0x58DFF181
{
	Hash hash;
	Hash hash2;
	Hash hash3;

	if (hParam0 == -1)
		return -2;

	hash = Global_1878407.f_123[hParam0 /*4*/];

	if (hash == -1 || hash == Global_1878407.f_7184)
		return -2;

	hash2 = Global_1878407.f_123[hParam0 /*4*/].f_1;
	hash3 = Global_1878407.f_123[hParam0 /*4*/].f_2;

	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[hash /*4*/], 2))
		return hash2;

	return hash3;
}

Hash func_70(Hash hParam0) // Position - 0x201B Hash - 0xD0CB2634 ^0x4098ECFF
{
	int num;

	num = hParam0 % 1000000;

	if (num == -1 || num == 7)
		return -2;

	if (!Global_1878407.f_7185.f_74[num])
		return -1;

	return -2;
}

Hash func_71(Hash hParam0) // Position - 0x205B Hash - 0xC9AC738C ^0xF65AEFD9
{
	int num;

	num = hParam0 % 1000000;

	if (num == -1 || num == 7)
		return -2;

	Global_1878407.f_7185.f_74[num] = true;
	return -2;
}

Hash func_72(Hash hParam0) // Position - 0x2094 Hash - 0x4F266DC5 ^0x371A03F6
{
	int address;
	int num;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return -2;

	if (hParam0 == -1)
		return -2;

	address = Global_1878407.f_123[hParam0 /*4*/].f_1;
	num = Global_1878407.f_123[hParam0 /*4*/];

	if (MISC::IS_BIT_SET(address, 0))
		CLOCK::SET_CLOCK_TIME(func_128(num), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());

	if (MISC::IS_BIT_SET(address, 1))
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), func_129(num), CLOCK::GET_CLOCK_SECONDS());

	if (MISC::IS_BIT_SET(address, 2))
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), func_130(num));

	if (MISC::IS_BIT_SET(address, 3))
		CLOCK::SET_CLOCK_DATE(func_131(num), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());

	if (MISC::IS_BIT_SET(address, 4))
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), func_132(num), CLOCK::GET_CLOCK_YEAR());

	if (MISC::IS_BIT_SET(address, 5))
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), func_133(num));

	return -2;
}

Hash func_73(Hash hParam0, Hash hParam1) // Position - 0x217A Hash - 0x1CCDE565 ^0xCEB463F5
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	int num;

	if (hParam1 == -1)
		return -2;

	if (!func_134())
		return -2;

	hash = Global_1878407.f_123[hParam1 /*4*/].f_2;
	hash2 = Global_1878407.f_123[hParam1 /*4*/].f_1;
	hash3 = Global_1878407.f_123[hParam1 /*4*/];

	if (!Global_1878407.f_28[hParam0])
	{
		if (func_135(Global_1878407.f_7185.f_1[hParam0 /*4*/].f_3))
		{
			Global_1878407.f_66[hParam0] = Global_1878407.f_7185.f_1[hParam0 /*4*/].f_3;
		}
		else
		{
			Global_1878407.f_66[hParam0] = func_136();
			func_137(&Global_1878407.f_66[hParam0], hash, hash2, hash3, 0, 0, 0, false);
			Global_1878407.f_7185.f_1[hParam0 /*4*/].f_3 = Global_1878407.f_66[hParam0];
		}
	
		Global_1878407.f_28[hParam0] = true;
	}
	else
	{
		num = -1;
	
		if (func_138(func_136(), Global_1878407.f_66[hParam0], true) || num == 0)
		{
			Global_1878407.f_28[hParam0] = false;
			Global_1878407.f_7185.f_1[hParam0 /*4*/].f_3 = -15;
		
			if (num == 0)
				Global_1900595 = MISC::GET_GAME_TIMER();
		
			return -2;
		}
	}

	return -1;
}

Hash func_74(Hash hParam0, Hash hParam1) // Position - 0x22A9 Hash - 0x3FA58CB7 ^0x21C16F57
{
	if (!func_134())
		return -2;

	if (!Global_1878407.f_28[hParam0])
	{
		if (hParam1 < 0)
			return -2;
	
		Global_1878407.f_47[hParam0] = MISC::GET_GAME_TIMER() + hParam1;
		Global_1878407.f_28[hParam0] = true;
	}
	else if (MISC::GET_GAME_TIMER() > Global_1878407.f_47[hParam0])
	{
		Global_1878407.f_28[hParam0] = false;
		return -2;
	}

	return -1;
}

Hash func_75(Hash hParam0, int iParam1) // Position - 0x231B Hash - 0x8D6430F0 ^0x49E75E12
{
	int num;
	int num2;

	if (!func_134())
		return -2;

	if (!Global_1878407.f_28[hParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
			return -2;
	
		num = iParam1;
		num2 = func_136();
	
		if (func_128(num2) > num)
			func_137(&num2, 0, 0, 0, 1, 0, 0, false);
	
		if (func_128(num2) != num)
		{
			func_139(&num2, 0);
			func_140(&num2, 0);
			func_141(&num2, num);
		}
	
		Global_1878407.f_66[hParam0] = num2;
		Global_1878407.f_28[hParam0] = true;
	}
	else if (func_142(Global_1878407.f_66[hParam0], true))
	{
		Global_1878407.f_28[hParam0] = false;
		return -2;
	}

	return -1;
}

Hash func_76(Hash hParam0, int iParam1) // Position - 0x23D8 Hash - 0x3EB4DE1A ^0xAE9542EA
{
	int num;

	if (!Global_1878407.f_28[hParam0])
	{
		num = iParam1;
		Global_1878407.f_66[hParam0] = num;
		Global_1878407.f_28[hParam0] = true;
	}
	else if (func_142(Global_1878407.f_66[hParam0], true))
	{
		Global_1878407.f_28[hParam0] = false;
		return -2;
	}

	return -1;
}

Hash func_77(Hash hParam0) // Position - 0x2430 Hash - 0xA70639F5 ^0x5B5C2E93
{
	Hash hash;
	Hash hash2;
	Hash hash3;

	if (hParam0 == -1)
		return -2;

	hash = Global_1878407.f_123[hParam0 /*4*/];

	if (hash < 0 || hash >= 24)
		return -2;

	hash2 = Global_1878407.f_123[hParam0 /*4*/].f_1;
	hash3 = Global_1878407.f_123[hParam0 /*4*/].f_2;

	if (CLOCK::GET_CLOCK_HOURS() >= hash)
		return hash2;

	return hash3;
}

Hash func_78(Hash hParam0, int iParam1) // Position - 0x2497 Hash - 0x584FEE6D ^0xFB477910
{
	int num;
	int num2;

	num = iParam1;
	num2 = func_143(num);

	if (!func_144(num))
	{
		func_145(num2, Global_1835011[num /*72*/].f_19);
	
		if (!(Global_1940199 & 4096 != 0) && !func_17(0, true, true))
		{
			if (!func_146())
				return -1;
		
			func_147(num, false);
		}
	}
	else
	{
		return -2;
	}

	return -1;
}

Hash func_79(Hash hParam0, Hash hParam1) // Position - 0x2502 Hash - 0xCE849E51 ^0x81DA9BB8
{
	Hash hash;

	hash = hParam1;

	if (func_4(32768))
		return -1;

	if (!func_144(hash))
	{
		if (func_148(Global_1940199, 2097152))
			return -1;
	
		if (!func_148(Global_1940199, 4096) && !func_17(0, true, true))
		{
			if (func_19() == -1 && func_134() && func_149(&Global_0, 3))
				return -1;
		
			func_147(hash, false);
		}
	}
	else
	{
		return -2;
	}

	return -1;
}

Hash func_80(Hash hParam0, Hash hParam1) // Position - 0x258D Hash - 0xDB88C929 ^0xD989AEBB
{
	Hash hash;
	Hash hash2;
	Hash hash3;

	if (hParam1 == -1)
		return -2;

	hash = Global_1878407.f_123[hParam1 /*4*/].f_3;

	if (func_36(hash))
		if (func_144(hash))
			return -2;

	hash2 = Global_1878407.f_123[hParam1 /*4*/];
	hash2.f_1 = Global_1878407.f_123[hParam1 /*4*/].f_1;
	hash3 = Global_1878407.f_123[hParam1 /*4*/].f_2;

	if (!Global_1878407.f_85[hParam0])
	{
		Global_1878407.f_104[hParam0] = func_150(hash2) + hash3;
		Global_1878407.f_85[hParam0] = true;
	}
	else if (func_150(hash2) >= Global_1878407.f_104[hParam0])
	{
		return -2;
	}

	return -1;
}

Hash func_81(Hash hParam0) // Position - 0x2641 Hash - 0x489524F2 ^0xD193AA0
{
	func_151(hParam0);
	return -2;
}

Hash func_82(Hash hParam0) // Position - 0x2652 Hash - 0xC8BCDEEA ^0xB7DA243B
{
	Hash hash;

	hash = hParam0;

	if (!func_152(hash))
		return -1;

	if (func_153(hash))
		return -2;

	if (func_154(hash, 0, PLAYER::PLAYER_ID(), 0, false))
		return -2;

	return -1;
}

Hash func_83() // Position - 0x2692 Hash - 0xA783DF57 ^0x286A87F0
{
	if (func_155(255))
		return -1;

	return -2;
}

Hash func_84() // Position - 0x26AA Hash - 0x9B7C95C6 ^0xCD443327
{
	NETWORK::NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(true);
	return -2;
}

Hash func_85(Hash hParam0) // Position - 0x26BB Hash - 0x790EECAD ^0x285370BC
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_146())
		return -1;

	hash = Global_1878407.f_123[hParam0 /*4*/];
	hash2 = Global_1878407.f_123[hParam0 /*4*/].f_1;
	hash3 = Global_1878407.f_123[hParam0 /*4*/].f_2;

	if (!func_17(0, true, true))
	{
		func_147(hash, false);
		func_147(hash2, false);
		func_147(hash3, false);
	}

	flag = func_144(hash);
	flag2 = func_144(hash2);
	flag3 = func_144(hash3);

	if (!flag)
		func_145(1, Global_1835011[hash /*72*/].f_19);
	else if (!flag2)
		func_145(1, Global_1835011[hash2 /*72*/].f_19);
	else if (!flag3)
		func_145(1, Global_1835011[hash3 /*72*/].f_19);

	if (flag && flag2 && flag3)
		return -2;

	return -1;
}

Hash func_86(Hash hParam0) // Position - 0x279A Hash - 0x91BA6661 ^0x111C3EB2
{
	Hash hash;
	Hash unlockHash;

	hash = Global_1878407.f_1084[hParam0 /*2*/];
	unlockHash = Global_1878407.f_1084[hParam0 /*2*/].f_1;

	if (!func_152(hash))
		return -1;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hash))
		UNLOCK::_UNLOCK_SET_NEW(unlockHash, true);

	return -2;
}

Hash func_87(Hash hParam0) // Position - 0x27E0 Hash - 0xBF11EC4F ^0x5E9BE8CD
{
	Hash hash;
	int num;

	hash = Global_1878407.f_1084[hParam0 /*2*/];

	if (hash == 0)
		return -2;

	if (func_156(hash))
		return -2;

	num = func_157(hash);
	func_145(num, func_158(hash));
	func_159(hash, 1);
	return -1;
}

Hash func_88(Hash hParam0) // Position - 0x282C Hash - 0x1DB4A891 ^0x22DB0F63
{
	Hash hash;

	hash = Global_1878407.f_1084[hParam0 /*2*/];

	if (hash == 0)
		return -2;

	if (func_156(hash))
		return -2;

	return -1;
}

Hash func_89(Hash hParam0) // Position - 0x285D Hash - 0xA8985F7B ^0xEF3F34D0
{
	int num;

	num = 0;

	if (func_160(PLAYER::PLAYER_ID()))
		num = Global_1878407.f_1084[hParam0 /*2*/];
	else
		num = Global_1878407.f_1084[hParam0 /*2*/].f_1;

	if (num == 0 || !func_152(num))
		return -2;

	if (func_154(num, 0, PLAYER::PLAYER_ID(), 0, false))
		return -2;

	return -2;
}

Hash func_90(Hash hParam0) // Position - 0x28C5 Hash - 0xDA6B5782 ^0x6A9595FA
{
	Hash hash;

	hash = Global_1878407.f_1084[hParam0 /*2*/];

	if (hash == -1)
		return -2;

	if (func_161(hash))
		return -1;

	return -2;
}

Hash func_91(Hash hParam0) // Position - 0x28F6 Hash - 0x688C2A04 ^0x846BCBBF
{
	int num;
	BOOL flag;
	int i;
	int j;

	num = Global_1878407.f_1084[hParam0 /*2*/];
	flag = Global_1878407.f_1084[hParam0 /*2*/].f_1 == 1;

	if (num <= -1 || num >= Global_1878407.f_7184)
		return -2;

	if (func_160(Global_1295666.f_5))
	{
		if (flag)
		{
			if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[num /*4*/], 1))
			{
				MISC::SET_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 1);
				MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 2);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[num /*4*/], 1))
		{
			for (i = 13; i <= 25; i = i + 1)
			{
				if (func_162(i) != num)
				{
				}
				else if (!func_163(i))
				{
				}
				else
				{
					func_48(i, true);
					func_49(i, -1, false, true, true, 0, 0);
					func_50(i);
					func_51(i);
				}
			}
		
			Global_1878407.f_7185.f_1[num /*4*/].f_1 = Global_1878407.f_7134[num /*2*/];
			MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 1);
			MISC::SET_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 2);
		}
	}
	else if (flag)
	{
		if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[num /*4*/], 1))
		{
			for (j = 13; j <= 25; j = j + 1)
			{
				if (func_162(j) != num)
				{
				}
				else if (!func_163(j))
				{
				}
				else
				{
					func_48(j, true);
					func_49(j, -1, false, true, true, 0, 0);
					func_50(j);
					func_51(j);
				}
			}
		
			Global_1878407.f_7185.f_1[num /*4*/].f_1 = Global_1878407.f_7134[num /*2*/];
			MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 1);
			MISC::SET_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 2);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[num /*4*/], 1))
	{
		MISC::SET_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 1);
		MISC::CLEAR_BIT(&Global_1878407.f_7185.f_1[num /*4*/], 2);
	}

	return -2;
}

Hash func_92(Hash hParam0) // Position - 0x2B12 Hash - 0x6C311C93 ^0xA4B92909
{
	Hash hash;
	Hash hash2;
	BOOL flag;

	hash = Global_1878407.f_1084[hParam0 /*2*/];
	hash2 = Global_1878407.f_1084[hParam0 /*2*/].f_1;
	flag = func_152(hash2);

	if (!func_152(hash))
	{
		if (!flag)
		{
			return -1;
		}
		else
		{
			hash = hash2;
			flag = false;
		}
	}

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hash))
		return -2;

	if (flag)
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hash2))
			return -2;

	return -1;
}

Hash func_93(Hash hParam0) // Position - 0x2B80 Hash - 0x868DFBA9 ^0x1AE8983D
{
	Hash unlockHash;

	unlockHash = hParam0;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		return -1;

	return -2;
}

Hash func_94() // Position - 0x2B9D Hash - 0x1C2B0E9E ^0xDD11BAE7
{
	int num;
	var unk;

	if (Global_13)
		return -1;

	if (func_164(joaat("upgrade_camp_butcher_table"), true, true, false) == 0)
		return -2;

	if (!func_165(4))
		return -2;

	if (!func_166())
	{
		if (Global_1292128.f_12)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				CAM::DO_SCREEN_FADE_IN(1000);
		
			Global_1292128.f_12 = 0;
		}
	
		return -2;
	}

	num = 0;
	unk = { func_167(Global_1295666) };

	switch (unk.f_1)
	{
		case joaat("hennigans_stead_camp"):
		case joaat("rio_bravo_camp"):
		case joaat("great_plains_camp"):
		case joaat("tall_trees_camp"):
		case joaat("cholla_springs_camp"):
		case joaat("gaptooth_ridge_camp"):
			num = joaat("GFH_ARMADIILO_GENERAL_STORE");
			break;
	
		case joaat("roanoke_ridge_camp"):
		case joaat("bayou_nawas_camp"):
		case joaat("scarlett_meadows_camp"):
			num = joaat("GFH_SAINT_DENIS_GENERAL_STORE");
			break;
	
		case joaat("cumberland_forest_camp"):
		case joaat("grizzlies_camp"):
		case joaat("heartland_camp"):
		case joaat("big_valley_camp"):
			num = joaat("GFH_VALENTINE_GENERAL_STORE");
			break;
	
		default:
			return -2;
	}

	if (!func_168(num))
		return -1;

	func_169(false);
	return -2;
}

Hash func_95(int iParam0) // Position - 0x2CAB Hash - 0xF93014A9 ^0x73C07928
{
	int flagIndex;
	int num;

	num = iParam0;
	flagIndex = func_170(num);

	if (flagIndex == -1)
		return -2;

	if (!NETWORK::NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(true, flagIndex))
		return -1;

	return -2;
}

Hash func_96(int iParam0) // Position - 0x2CDD Hash - 0xE3FBB317 ^0x7761981E
{
	int flagIndex;
	int num;

	num = iParam0;
	flagIndex = func_170(num);

	if (flagIndex == -1)
		return -2;

	if (!NETWORK::NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(false, flagIndex))
		return -1;

	return -2;
}

Hash func_97() // Position - 0x2D0F Hash - 0x4B57D72B ^0x6A2B011A
{
	int num;

	num = func_171(joaat("WINS"), joaat("fetch_trader_sell_contested"));
	num = num + func_171(joaat("WINS"), joaat("fetch_trader_sell_sell_goods"));

	if (num > 0)
		return -2;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1348352077))
		return -1;

	return -2;
}

Hash func_98() // Position - 0x2D5A Hash - 0x89482624 ^0x69D653F6
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("ROLE_PROGRESSION_MOONSHINE_COOK_SETUP")) && UNLOCK::UNLOCK_IS_UNLOCKED(joaat("ROLE_PROGRESSION_MOONSHINE_SUPPLIES_SETUP")))
		return -2;

	return -1;
}

Hash func_99(Hash hParam0) // Position - 0x2D83 Hash - 0xEBF1B397 ^0x995961E4
{
	Hash hash;

	hash = Global_1878407.f_1084[hParam0 /*2*/];

	if (func_172(hash, 1))
		return -2;

	return -1;
}

void func_100(int iParam0, Hash hParam1) // Position - 0x2DA9 Hash - 0x6F5B58E7 ^0xC8EA0F1D
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Hash hash;

	switch (iParam0)
	{
		case -1:
		case 18:
			return;
	
		default:
		
	}

	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iParam0 /*4*/], 1))
		return;

	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iParam0 /*4*/], 2))
		return;

	if (hParam1 == -1)
		return;

	if (hParam1 == -2)
	{
		Global_1878407.f_66[iParam0] = -15;
		Global_1878407.f_28[iParam0] = false;
		Global_1878407.f_7185.f_1[iParam0 /*4*/].f_3 = -15;
		Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1 = Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1 + 1;
		return;
	}

	num = Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1;
	num2 = Global_1878407.f_7134[iParam0 /*2*/];
	num3 = Global_1878407.f_7134[iParam0 /*2*/].f_1;

	if (num < num2)
		return;

	if (num > num3)
		return;

	num4 = num2;
	num5 = -1;

	while (num4 <= num3)
	{
		if (Global_1878407.f_1823[num4 /*3*/] == 531432813)
		{
			num5 = Global_1878407.f_1823[num4 /*3*/].f_2;
			hash = Global_1878407.f_123[num5 /*4*/];
		
			if (hash == hParam1)
			{
				Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1 = num4;
				return;
			}
		}
	
		num4 = num4 + 1;
	}

	return;
}

Vector3 func_101() // Position - 0x2EF8 Hash - 0xA9B5EBA8 ^0xA9B5EBA8
{
	return 0f, 0f, 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2F03 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_103(int iParam0) // Position - 0x2F2D Hash - 0x7E929F65 ^0x7E929F65
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 160;
	
		default:
		
	}

	return 0;
}

int func_104() // Position - 0x2F91 Hash - 0x9F572D68 ^0x2626B94C
{
	return -1360426452;
}

int func_105() // Position - 0x2F9E Hash - 0x6E784062 ^0xAFF2C516
{
	return Global_1110244.f_21.f_13.f_1;
}

struct<2> func_106() // Position - 0x2FB0 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_30(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_30(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

int func_107(var uParam0, var uParam1) // Position - 0x2FFB Hash - 0x3BE504D9 ^0x3BE504D9
{
	int i;

	if (Global_1900530 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1900530 - 1; i = i + 1)
	{
		if (func_173(Global_1900531[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

BOOL func_108(int iParam0) // Position - 0x3044 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

BOOL func_109(int iParam0, int iParam1) // Position - 0x3063 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_108(iParam0) && Global_1900562[iParam0 /*2*/].f_1 && iParam1 != false;
}

int func_110(int iParam0, int iParam1) // Position - 0x3085 Hash - 0x4CC004CE ^0x4B7EACC4
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
			
				case 2:
					return 239417318;
			
				case 3:
					return 239417318;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
			
				case 2:
					return -1124047374;
			
				case 3:
					return -311950714;
			
				case 4:
					return -1877729336;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
			
				case 2:
					return -1291660805;
			
				case 3:
					return 53620250;
			
				case 4:
					return -967242671;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
			
				case 2:
					return -1002933146;
			
				case 3:
					return 300796817;
			
				case 4:
					return -1332027179;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
			
				case 2:
					return -1340126692;
			
				case 3:
					return -1177458231;
			
				case 4:
					return 1413260826;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
			
				case 2:
					return -1612797541;
			
				case 3:
					return -1876683153;
			
				case 4:
					return 1251939043;
			
				default:
					break;
			}
			break;
	
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
			
				case 2:
					return 1855246300;
			
				case 3:
					return 763461736;
			
				case 4:
					return -92262210;
			
				default:
					break;
			}
			break;
	
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
			
				case 2:
					return 2084465459;
			
				case 3:
					return 1616668189;
			
				case 4:
					return -1758631398;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
			
				case 2:
					return 941214835;
			
				case 3:
					return 68299210;
			
				case 4:
					return 1699902717;
			
				default:
					break;
			}
			break;
	
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
			
				case 2:
					return 1265238199;
			
				case 3:
					return -1638616368;
			
				case 4:
					return 1550104174;
			
				default:
					break;
			}
			break;
	
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
			
				case 2:
					return -1099733308;
			
				case 3:
					return -697261301;
			
				case 4:
					return 1865014264;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
			
				case 2:
					return 1853607854;
			
				case 3:
					return 1511414161;
			
				case 4:
					return -2030843481;
			
				default:
					break;
			}
			break;
	
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
			
				case 2:
					return 885906515;
			
				case 3:
					return -674835160;
			
				case 4:
					return 867181329;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
			
				case 2:
					return -645886158;
			
				case 3:
					return 825197572;
			
				case 4:
					return 1390137360;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_111(Hash hParam0, int iParam1) // Position - 0x36F5 Hash - 0x37FA9E51 ^0x38034F60
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (Global_1292143.f_459.f_1546 >= 40)
	{
		func_174();
		return -1;
	}

	num = -1;
	num.f_5.f_1 = 11;
	num.f_18.f_1 = 10;
	num.f_4 = hParam0;
	num = func_175();
	num.f_3 = iParam1;
	func_176(num, 0);
	return num;
}

void func_112(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3759 Hash - 0xAC2AF54 ^0xAC2AF54
{
	int num;

	if (!func_31(uParam0))
	{
		!bParam2;
		return;
	}

	if (!func_177(uParam0) && !func_178(uParam0))
	{
		!bParam2;
		return;
	}

	func_179(uParam0) == 0;

	if (iParam3 == 0 || iParam3 == 1 || iParam3 == 4)
		if (func_180(uParam0) == 3)
			func_181(true, -1706799532);
		else if (func_180(uParam0) == 4)
			func_181(false, -1706799532);

	if (func_180(uParam0) == 3 || func_180(uParam0) == 1 || bParam5 && func_180(uParam0) == 4 && STATS::STATSTRACKER_IS_INITIALIZED(func_179(uParam0)))
		if (iParam3 != -1)
			func_182(uParam0, iParam3, iParam4, 255, 0);
		else
			func_182(uParam0, 2, iParam4, 255, 0);

	func_183(uParam0, 0);

	if (func_173(func_30(0), uParam0))
	{
		func_184(true);
		func_185(false);
		func_186(false);
		func_187(1);
	}

	func_188(uParam0);
	Global_1051645.f_45.f_1 = 1;
	num = func_32(uParam0);

	if (num != 2 && num != 7)
		MISC::_0x1096603B519C905F("");

	return;
}

void func_113(int iParam0) // Position - 0x38C0 Hash - 0xB14644B ^0xA5A3F761
{
	Global_1149432.f_4920[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149432.f_4920[iParam0 /*3*/].f_2 = UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149432.f_4920[iParam0 /*3*/].f_1 = UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3);
	return;
}

struct<2> func_114(int iParam0) // Position - 0x3917 Hash - 0xB40CEF65 ^0x4D71D9AE
{
	if (!func_36(iParam0))
		return func_189();

	return Global_1835011[iParam0 /*72*/].f_1;
}

int func_115(int iParam0, int iParam1, int iParam2) // Position - 0x393C Hash - 0xF23FC0C8 ^0xA8769202
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Vector3 vector;

	if (func_4(32768))
		return 0;

	num = func_19();

	if (func_190(&(Global_1835011[iParam0 /*72*/].f_30), 512) && !func_190(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		if (func_191())
			return 0;

	if (Global_1835011[iParam0 /*72*/].f_67)
		return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		flag3 = Global_1835011[iParam0 /*72*/].f_66;
	
		if (func_192(iParam0, num))
		{
			vector = { func_193(iParam0) };
			Global_1835011[iParam0 /*72*/].f_65 = VOLUME::CREATE_VOLUME_SPHERE(vector, 0f, 0f, 0f, 19f, 19f, 19f);
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1835011[iParam0 /*72*/].f_65))
				Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_VOLUME(joaat("BLIP_STYLE_MISSION"), Global_1835011[iParam0 /*72*/].f_65);
		}
		else if (flag3)
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_194(iParam0));
		}
		else
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_195(iParam0));
		}
	
		Global_1835011[iParam0 /*72*/].f_29 = joaat("BLIP_STYLE_MISSION");
		flag = true;
	
		if (iParam2 != -1)
			if (flag2)
				func_196(iParam2, 4194304);
			else
				func_117(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*72*/].f_28, 72, Global_1835011[iParam0 /*72*/].f_3);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
		return 0;

	func_197(iParam0);

	if (flag)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*72*/].f_28, Global_1835011[iParam0 /*72*/].f_27, true);
	
		if (num != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[iParam0 /*72*/].f_28, &(Global_1835011[iParam0 /*72*/].f_42));
	
		if (!func_190(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_198(&(Global_1835011[iParam0 /*72*/].f_30), 1024);
		}
	
		if (func_190(&(Global_1835011[iParam0 /*72*/].f_30), 524288))
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_OBJECTIVE"));
	
		if (func_190(&(Global_1835011[iParam0 /*72*/].f_30), 1048576))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_FORCE_GPS"));
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
	}

	return 1;
}

void func_116(var uParam0, var uParam1) // Position - 0x3BAC Hash - 0xEDDB2A63 ^0xEDDB2A63
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 <= 0)
		return;

	if (!func_31(uParam0))
		return;

	if (func_178(uParam0))
		func_112(uParam0, false, -1, 0, false);

	num = func_107(uParam0);

	if (num < 0)
		return;

	num2 = num;

	if (Global_1900530 > 1)
	{
		Global_1900531[num2 /*2*/] = { Global_1900531[Global_1900530 - 1 /*2*/] };
		Global_1900562[num2 /*2*/] = { Global_1900562[Global_1900530 - 1 /*2*/] };
		func_199(&Global_1900531[Global_1900530 - 1 /*2*/]);
		Global_1900562[Global_1900530 - 1 /*2*/] = { unk };
	}
	else
	{
		func_199(&Global_1900531[num2 /*2*/]);
		Global_1900562[num2 /*2*/] = { unk };
	}

	Global_1900530 = Global_1900530 - 1;

	if (Global_1900530 < 0)
		Global_1900530 = 0;

	return;
}

void func_117(int iParam0, int iParam1) // Position - 0x3C8A Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_108(iParam0))
		return;

	Global_1900562[iParam0 /*2*/].f_1 = Global_1900562[iParam0 /*2*/].f_1 - Global_1900562[iParam0 /*2*/].f_1 && iParam1;
	return;
}

BOOL func_118(int iParam0, Player plParam1) // Position - 0x3CC1 Hash - 0xF0F37DB8 ^0xC8497B94
{
	if (!func_34(iParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(plParam1))
		return false;

	return MISC::_IS_BIT_FLAG_SET(&(Global_1056554[plParam1 /*491*/].f_15.f_21), iParam0);
}

int func_119(int iParam0, Player plParam1) // Position - 0x3D05 Hash - 0xC4D66D9E ^0x51C0F4AA
{
	if (iParam0 <= 0 || iParam0 >= 10)
		return -1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		return -1;

	return Global_1056554[plParam1 /*491*/].f_42.f_1[iParam0 /*16*/];
}

Hash func_120(int iParam0, Hash hParam1) // Position - 0x3D42 Hash - 0x751E6540 ^0x7AE49023
{
	switch (hParam1)
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

Hash func_121(Hash hParam0) // Position - 0x3FE4 Hash - 0xD7742789 ^0xE3335CE7
{
	switch (hParam0)
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

void func_122(Hash hParam0, BOOL bParam1) // Position - 0x4088 Hash - 0x71A97923 ^0x6EC0614D
{
	if (hParam0 == 1 || hParam0 == -1)
		return;

	if (Global_1878407.f_7185.f_74.f_8[hParam0] == bParam1)
		return;

	Global_1878407.f_7185.f_74.f_8[hParam0] = bParam1;
	return;
}

void func_123(Hash hParam0, Hash hParam1) // Position - 0x40CC Hash - 0x71A97923 ^0x6E1C45AE
{
	if (hParam0 == 1 || hParam0 == -1)
		return;

	if (Global_1878407.f_7185.f_74.f_10[hParam0] == hParam1)
		return;

	Global_1878407.f_7185.f_74.f_10[hParam0] = hParam1;
	return;
}

void func_124(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4110 Hash - 0x10DA09E4 ^0x3873DBD4
{
	BOOL isBitSet;

	if (iParam0 == 1 || iParam0 == -1)
		return;

	if (iParam1 < 0 || iParam1 >= 32)
		return;

	isBitSet = MISC::IS_BIT_SET(Global_1878407.f_7185.f_74.f_12[iParam0], iParam1);

	if (isBitSet == bParam2)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_1878407.f_7185.f_74.f_12[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_1878407.f_7185.f_74.f_12[iParam0], iParam1);

	return;
}

BOOL func_125(int iParam0) // Position - 0x4194 Hash - 0x4B4EB576 ^0x2B00EDFB
{
	if (iParam0 == 1 || iParam0 == -1)
		return false;

	return Global_1878407.f_7185.f_74.f_8[iParam0];
}

Hash func_126(Hash hParam0) // Position - 0x41C0 Hash - 0x4B4EB576 ^0x22DEDD13
{
	if (hParam0 == 1 || hParam0 == -1)
		return 0;

	return Global_1878407.f_7185.f_74.f_10[hParam0];
}

BOOL func_127(Hash hParam0, Hash hParam1) // Position - 0x41EC Hash - 0x7F9CDF6A ^0x7F9CDF6A
{
	BOOL isBitSet;

	if (hParam0 == 1 || hParam0 == -1)
		return false;

	if (hParam1 < 0 || hParam1 >= 32)
		return false;

	isBitSet = MISC::IS_BIT_SET(Global_1878407.f_7185.f_74.f_12[hParam0], hParam1);
	return isBitSet;
}

int func_128(int iParam0) // Position - 0x4238 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_129(int iParam0) // Position - 0x424B Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_130(int iParam0) // Position - 0x425D Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_131(int iParam0) // Position - 0x426F Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_132(int iParam0) // Position - 0x4282 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_133(int iParam0) // Position - 0x4295 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

BOOL func_134() // Position - 0x42BA Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

BOOL func_135(int iParam0) // Position - 0x42D9 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_130(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_129(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_128(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_133(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_132(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_131(iParam0);

	if (num6 < 1 || num6 > func_201(num5, num4))
		return false;

	return true;
}

int func_136() // Position - 0x43B5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_137(int iParam0, Hash hParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x43C1 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_133(*iParam0);
	i = func_132(*iParam0);
	num2 = func_131(*iParam0);
	j = func_128(*iParam0);
	k = func_129(*iParam0);
	l = func_130(*iParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && hParam3 == 0 && hParam2 == 0 && hParam1 == 0)
		return;

	if (hParam1 < 0)
		return;

	if (hParam2 < 0)
		return;

	if (hParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + hParam1; l >= 60; l = l - 60)
	{
		hParam2 = hParam2 + 1;
	}

	for (k = k + hParam2; k >= 60; k = k - 60)
	{
		hParam3 = hParam3 + 1;
	}

	for (j = j + hParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_201(i, num); num2 > m; m = func_201(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_202(iParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_138(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4549 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_135(iParam1) || !func_135(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_139(var uParam0, int iParam1) // Position - 0x4576 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_140(var uParam0, int iParam1) // Position - 0x45AE Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_141(var uParam0, int iParam1) // Position - 0x45E7 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

BOOL func_142(int iParam0, BOOL bParam1) // Position - 0x4622 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_138(func_136(), iParam0, bParam1);
}

int func_143(int iParam0) // Position - 0x4636 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_144(Hash hParam0) // Position - 0x4699 Hash - 0x7FF7187E ^0xD95261C9
{
	int num;

	if (!(hParam0 > -1 && hParam0 <= 80))
		return false;

	num = func_110(2, hParam0);

	if (num == 0)
		return false;

	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num);
}

void func_145(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x46D0 Hash - 0x155428FA ^0x155428FA
{
	if (iParam0 == 0)
		return;

	if (iParam0 < 0 || iParam0 >= 9)
		return;

	if (func_203(Global_17418.f_2964[iParam0 /*3*/], uParam1))
		return;

	Global_17418.f_2964[iParam0 /*3*/] = { uParam1 };
	return;
}

BOOL func_146() // Position - 0x4720 Hash - 0x124A24FC ^0xF369D6C4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (NETWORK::NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS())
		return false;

	if (!func_204())
		return false;

	if (!func_205())
		return false;

	if (!func_206())
		return false;

	if (func_207())
		return false;

	return true;
}

BOOL func_147(Hash hParam0, BOOL bParam1) // Position - 0x476F Hash - 0x39BD071C ^0x108D9775
{
	int num;
	int num2;

	if (hParam0 == -1)
		return false;

	if (hParam0 >= 13 && hParam0 <= 25)
		if (Global_1835011[hParam0 /*72*/].f_51 == 0)
			return false;

	if (!bParam1)
		if (func_144(hParam0))
			return true;

	if (func_208(hParam0) > 0)
	{
		num = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - func_208(hParam0));
	
		if (num < 60)
			return false;
		else
			func_209(hParam0, 0);
	}

	if (Global_1149432.f_4920[hParam0 /*3*/].f_1 && Global_1149432.f_4920[hParam0 /*3*/].f_2)
	{
		if (func_210(Global_1835011[hParam0 /*72*/].f_32))
			Global_1835011[hParam0 /*72*/].f_32 = -1;
	
		if (func_37(hParam0))
		{
			if (!func_211(hParam0))
			{
				if (func_212(hParam0) == 0)
				{
					func_213(hParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
					return false;
				}
			
				if (MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - func_212(hParam0)) > 30)
				{
					func_48(hParam0, true);
					func_49(hParam0, -1, false, true, true, 0, 0);
					func_213(hParam0, 0);
					func_209(hParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
				}
			
				return false;
			}
		}
	
		func_213(hParam0, 0);
		func_209(hParam0, 0);
		return true;
	}

	func_113(hParam0);
	num2 = func_110(0, hParam0);

	if (num2 == 0)
		return false;

	if (!Global_1149432.f_4920[hParam0 /*3*/].f_1 || !Global_1149432.f_4920[hParam0 /*3*/].f_2)
	{
		if (Global_1835011[hParam0 /*72*/].f_32 == -1)
			Global_1835011[hParam0 /*72*/].f_32 = func_111(num2, 0);
	
		switch (func_214(Global_1835011[hParam0 /*72*/].f_32, false))
		{
			case 1:
				return false;
		
			case 2:
				if (!Global_1149432.f_4920[hParam0 /*3*/].f_2)
					Global_1835011[hParam0 /*72*/].f_32 = -1;
				break;
		
			case 3:
				Global_1835011[hParam0 /*72*/].f_32 = -1;
				break;
		}
	}

	return false;
}

BOOL func_148(int iParam0, int iParam1) // Position - 0x4958 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x4967 Hash - 0x718DD1EF ^0xD9260236
{
	return iParam0->f_2 && iParam1 != false;
}

int func_150(var uParam0, var uParam1) // Position - 0x4978 Hash - 0x3AAD93D4 ^0x6348F3E3
{
	int unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

void func_151(Hash hParam0) // Position - 0x498B Hash - 0xCA9DF5C5 ^0xF2633F1A
{
	Hash hash;

	hash = func_215(hParam0);

	if (!func_152(hash))
		return;
	else if (func_153(hash))
		return;

	if (-2042919232 == hash)
		return;

	if (!func_154(hash, 0, 255, 0, false))
		return;

	if (hash == 173210050)
		func_216(27, 1);

	return;
}

BOOL func_152(Hash hParam0) // Position - 0x49E8 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_153(Hash hParam0) // Position - 0x49F4 Hash - 0xA0822178 ^0xF457B65B
{
	int i;

	if (!func_152(hParam0))
		return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return true;

	for (i = 0; i < Global_1292143.f_2012; i = i + 1)
	{
		if (Global_1292143.f_2012.f_1[i /*24*/].f_4 == hParam0)
			return true;
	}

	return false;
}

BOOL func_154(Hash hParam0, int iParam1, Player plParam2, int iParam3, BOOL bParam4) // Position - 0x4A48 Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_217(hParam0, &unk26, &unk13, &unk, iParam1, plParam2, iParam3, bParam4);
}

BOOL func_155(int iParam0) // Position - 0x4A78 Hash - 0x3DDE257F ^0x823746F6
{
	if (Global_1295299.f_1 >= 3)
		return true;

	if (iParam0 == 255)
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	if (iParam0 == 255)
		return true;

	if (func_218(29, iParam0))
		return true;

	if (func_219(iParam0))
		return true;

	return false;
}

BOOL func_156(Hash hParam0) // Position - 0x4AD9 Hash - 0x5D73A58D ^0xC4F87AC8
{
	Hash unlockHash;
	int num;

	if (hParam0 == 0)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	unlockHash = func_121(hParam0);

	if (unlockHash == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
	{
		num = func_120(1, hParam0);
	
		if (num == 0)
			return false;
	
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
			return true;
	}

	return false;
}

int func_157(Hash hParam0) // Position - 0x4B33 Hash - 0xE19EC271 ^0xE19EC271
{
	switch (hParam0)
	{
		case 1:
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
		case 8:
			return 6;
	
		case 9:
			return 8;
	
		default:
		
	}

	return 0;
}

Vector3 func_158(Hash hParam0) // Position - 0x4B97 Hash - 0x89DF5952 ^0x89DF5952
{
	switch (hParam0)
	{
		case 1:
		
	
		case 2:
		
	
		case 3:
		
	
		case 4:
		
	
		case 5:
		
	
		case 6:
		
	
		case 7:
		
	
		case 8:
		
	
		case 9:
		
	
		default:
		
	}

	return func_101();
}

void func_159(Hash hParam0, int iParam1) // Position - 0x4C5F Hash - 0x22AE5DD1 ^0x3A88905B
{
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	BOOL flag2;
	Hash hash2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (func_220(hParam0))
		return;

	if (func_221(hParam0))
		return;

	unlockHash = func_121(hParam0);

	if (unlockHash == 0)
		return;

	hash = func_120(3, hParam0);

	if (hash != 0)
		if (func_222(hash) || func_223(hash))
			return;

	flag = UNLOCK::UNLOCK_IS_VISIBLE(unlockHash);
	flag2 = UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash);

	if (func_210(func_224(hParam0)))
	{
		switch (func_214(func_224(hParam0), false))
		{
			case 1:
				return;
		
			case 2:
			
		
			default:
				return;
		}
	
		return;
		return;
	
		if (!flag)
		{
			func_225(hParam0, -1);
			return;
		}
	}

	if (!flag2 || !flag)
	{
		hash2 = func_120(0, hParam0);
	
		if (hash2 == 0)
			return;
	
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hash2))
			return;
	
		if (!func_210(func_224(hParam0)))
			func_225(hParam0, func_111(hash2, 0));
	
		return;
	}

	func_225(hParam0, -1);
	func_226(hParam0, true);
	return;
}

BOOL func_160(Player plParam0) // Position - 0x4D6E Hash - 0xFEB7CBB2 ^0x8D69FA11
{
	int num;

	num = func_227(plParam0);

	if (num < 0)
		return true;

	return func_228(&Global_1149432.f_11.f_3222.f_320[num /*4*/], 1);
}

BOOL func_161(Hash hParam0) // Position - 0x4D9D Hash - 0x8FCC588B ^0x8FCC588B
{
	int num;
	Any gangId;
	Player gangLeader;
	int num2;
	int num3;

	if (hParam0 == -1)
		return false;

	if (hParam0 >= 13 && hParam0 <= 15)
		return false;

	if (func_144(hParam0))
		if (!func_229(hParam0, &num))
			return false;
	else if (!func_230(hParam0, &num))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::GET_PLAYER_INDEX());

	if (GANG::NETWORK_IS_GANG_ID_VALID(gangId))
	{
		if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId) > 1)
		{
			gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
				return true;
		
			num = Global_1056554[gangLeader /*491*/].f_15.f_24;
		}
	}

	if (num <= 0)
		return false;

	num2 = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - num);
	num3 = func_231(hParam0);

	if (func_144(hParam0))
		num3 = func_232(hParam0);

	return num2 < num3;
}

int func_162(int iParam0) // Position - 0x4E68 Hash - 0x80F854E5 ^0x80F854E5
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 1;
	
		case 6:
			return 2;
	
		case 7:
			return 3;
	
		case 8:
			return 4;
	
		case 9:
			return 1;
	
		case 10:
			return 2;
	
		case 11:
			return 3;
	
		case 12:
			return 4;
	
		case 13:
			return 6;
	
		case 14:
			return 6;
	
		case 15:
			return 6;
	
		case 16:
			return 7;
	
		case 17:
			return 7;
	
		case 18:
			return 8;
	
		case 19:
			return 8;
	
		case 20:
			return 9;
	
		case 21:
			return 7;
	
		case 22:
			return 7;
	
		case 23:
			return 8;
	
		case 24:
			return 8;
	
		case 25:
			return 9;
	
		default:
		
	}

	return -1;
}

BOOL func_163(int iParam0) // Position - 0x4F83 Hash - 0xE2BE913A ^0x6C7658FD
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_178(Global_1835011[iParam0 /*72*/].f_1);
}

int func_164(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4FB1 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_233(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_234(bParam1), hParam0, bParam3);
}

BOOL func_165(Hash hParam0) // Position - 0x4FE4 Hash - 0x49256A88 ^0x9919A21B
{
	if (!func_52(hParam0))
		return false;

	return Global_1291943.f_133[hParam0 /*5*/].f_4;
}

BOOL func_166() // Position - 0x5006 Hash - 0x77FDDADA ^0xCE477395
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1324907014))
		return true;

	if (!UNLOCK::UNLOCK_IS_VISIBLE(1324907014))
		return true;

	return false;
}

Vector3 func_167(int iParam0) // Position - 0x5031 Hash - 0x4168FF99 ^0xE3960051
{
	if (iParam0 == 255)
		return Global_1144526[func_235() /*83*/].f_38;

	return Global_1144526[iParam0 /*83*/].f_38;
}

BOOL func_168(int iParam0) // Position - 0x505D Hash - 0xB4C61E03 ^0xC0494B9C
{
	int num;
	int num2;
	var unk;
	var unk34;
	var unk38;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_4 = 10;
	unk.f_15 = 4;
	unk.f_15.f_5 = 4;
	unk.f_25 = 1;
	unk.f_28 = 2;
	unk.f_28.f_1 = -1;
	unk.f_28.f_1.f_1 = -1;
	unk.f_31 = joaat("NONE");
	unk.f_31.f_1 = joaat("NONE");
	unk34.f_1 = -1;

	if (!func_236())
		return false;

	if (!func_237(&unk, iParam0))
		return false;

	if (!func_238(unk.f_2))
		return false;

	if (unk.f_2.f_1 == 0)
		return false;

	num = func_239(joaat("cripps"));
	num2 = func_240(iParam0);

	if (func_241(&(unk.f_25), joaat("HAS_INTRO_CUTSCENE")))
		func_242(&unk38, 2);

	if (func_241(&(unk.f_25), joaat("HAS_FLOW_FADE")))
		func_242(&unk38, 4);

	func_243();
	func_244(num2, num, unk38, unk.f_2, unk, unk34, 0);
	return true;
}

void func_169(BOOL bParam0) // Position - 0x516F Hash - 0xC0EC45E8 ^0xC0EC45E8
{
	if (bParam0)
		if (!Global_1885680.f_1682)
			Global_1885680.f_1682 = 1;
	else if (Global_1885680.f_1682)
		Global_1885680.f_1682 = 0;

	return;
}

int func_170(int iParam0) // Position - 0x51A4 Hash - 0x4AE0BD91 ^0x4AE0BD91
{
	switch (iParam0)
	{
		case 2:
			return 1;
	
		case 3:
			return 0;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 6:
			return 4;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		default:
		
	}

	return -1;
}

int func_171(int iParam0, int iParam1) // Position - 0x51FB Hash - 0xBEF58E44 ^0x9B835991
{
	var unk;
	var statId;

	statId = { func_245(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

BOOL func_172(Hash hParam0, int iParam1) // Position - 0x521A Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_246(hParam0, 0))
		return false;

	num = func_247(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_249(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_248(hParam0, 1))
				return false;
			break;
	}

	return func_250(hParam0, false, false, false) >= iParam1;
}

BOOL func_173(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x529D Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

void func_174() // Position - 0x52B8 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_175() // Position - 0x52C0 Hash - 0x65D86EC2 ^0xEDE20818
{
	Global_1292143.f_459.f_1552 = Global_1292143.f_459.f_1552 + 1;

	if (Global_1292143.f_459.f_1552 >= 2147483646)
		Global_1292143.f_459.f_1552 = 0;

	return Global_1292143.f_459.f_1552;
}

void func_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x5305 Hash - 0x559491F8 ^0xD7B41EE2
{
	switch (iParam30)
	{
		case 0:
			Global_1292143.f_459.f_44[func_251() /*30*/] = { uParam0 };
			func_252((func_251() + 1) % 40);
			Global_1292143.f_459.f_1546 = Global_1292143.f_459.f_1546 + 1;
			break;
	
		case 1:
			Global_1292143.f_459.f_1245[func_253() /*30*/] = { uParam0 };
			func_254((func_253() + 1) % 10);
			Global_1292143.f_459.f_1547 = Global_1292143.f_459.f_1547 + 1;
			break;
	}

	return;
}

BOOL func_177(var uParam0, var uParam1) // Position - 0x539C Hash - 0x37B45816 ^0x37B45816
{
	int num;

	num = func_180(uParam0);
	return num == 3 || num == 4;
}

BOOL func_178(var uParam0, var uParam1) // Position - 0x53BC Hash - 0xA188F144 ^0xA188F144
{
	int num;

	num = func_180(uParam0);
	return num == 1 || num == 2;
}

Hash func_179(var uParam0, var uParam1) // Position - 0x53DC Hash - 0x39F26DE7 ^0x39F26DE7
{
	return func_255(uParam0);
}

int func_180(var uParam0, var uParam1) // Position - 0x53EC Hash - 0xA6DDAF91 ^0xF19E68CE
{
	int num;

	if (!func_31(uParam0))
		return -1;

	num = func_256(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

int func_181(BOOL bParam0, int iParam1) // Position - 0x5427 Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_204())
		return 0;

	if (!func_257())
		return 0;

	Global_0 = iParam1;

	if (bParam0)
		func_258(&Global_0, 8);

	func_258(&Global_0, 1);
	return 1;
}

void func_182(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x547D Hash - 0x348E6B9F ^0x6D604516
{
	int deedType;
	Hash deedHash;
	int data;
	char* contentId;

	deedType = func_259(func_32(uParam0));
	deedHash = func_179(uParam0);
	contentId = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_19() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		contentId = func_260(Global_265213.f_122484.f_80.f_22);
		func_261(uParam0, &data, iParam2);
	}

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam4))
	{
		data.f_4 = plParam4;
		data.f_3 = iParam5;
	}
	else
	{
		data.f_4 = 255;
		data.f_3 = 0;
	}

	if (Global_1072759.f_16.f_1)
		data.f_6 = 1;

	data.f_5 = Global_1072759.f_16.f_2;

	if (data.f_5 == -1)
		data.f_5 = deedHash;

	TELEMETRY::_0x6F5BC5C4EAB42B15(data.f_5, 2, contentId);
	STATS::_STATSTRACKER_DEED_STATUS(deedType, deedHash, iParam2, &data);
	return;
}

void func_183(var uParam0, var uParam1, int iParam2) // Position - 0x554C Hash - 0xEE2C20F9 ^0xEE2C20F9
{
	if (!func_31(uParam0))
		return;

	if (iParam2 == 0 || iParam2 == -1)
		func_262(uParam0);
	else
		func_263(uParam0, iParam2);

	func_264();
	return;
}

void func_184(BOOL bParam0) // Position - 0x558F Hash - 0x5D1342E6 ^0x41116E92
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_265(&Global_1940199, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_266(&Global_1940199, 8388608);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

void func_185(BOOL bParam0) // Position - 0x5632 Hash - 0x22D62138 ^0x4A5C4AF7
{
	int i;
	Hash crimeType;
	var unk;

	for (i = 0; i <= 58; i = i + 1)
	{
		crimeType = func_267(i, 1);
	
		if (crimeType == joaat("crime_murder_player") || crimeType == joaat("crime_murder_player_horse") || crimeType == joaat("crime_trample_player"))
		{
		}
		else
		{
			if (bParam0)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_268(unk);
			}
			else
			{
				func_269();
			}
		
			LAW::_0xF611DE44AEB36A1D(crimeType, bParam0);
		}
	}

	return;
}

int func_186(BOOL bParam0) // Position - 0x56A3 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_270(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_187(BOOL bParam0) // Position - 0x56D0 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1900460 = Global_1900460 || bParam0;
	return;
}

int func_188(var uParam0, var uParam1) // Position - 0x56E3 Hash - 0x6EEEB4AF ^0x6EEEB4AF
{
	return func_272(func_271(uParam0));
}

struct<2> func_189() // Position - 0x56F7 Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_190(var uParam0, int iParam1) // Position - 0x5710 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

BOOL func_191() // Position - 0x5730 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_192(int iParam0, int iParam1) // Position - 0x5750 Hash - 0x13A8E017 ^0x13A8E017
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
				return true;
			break;
	}

	return false;
}

Vector3 func_193(int iParam0) // Position - 0x5780 Hash - 0x4159D95 ^0x8FA57611
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_194(int iParam0) // Position - 0x5794 Hash - 0x4159D95 ^0x8FA57611
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_195(int iParam0) // Position - 0x57A8 Hash - 0x4159D95 ^0x8FA57611
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

void func_196(int iParam0, int iParam1) // Position - 0x57BC Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_108(iParam0))
		return;

	Global_1900562[iParam0 /*2*/].f_1 = Global_1900562[iParam0 /*2*/].f_1 || iParam1;
	return;
}

void func_197(int iParam0) // Position - 0x57E8 Hash - 0xDF2F2B3F ^0x4FCA3C11
{
	if (func_19() == -1)
		return;

	if (Global_1835011[iParam0 /*72*/].f_3 != 0 && UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3))
		UNLOCK::_UNLOCK_SET_NEW(Global_1835011[iParam0 /*72*/].f_3, false);

	func_113(iParam0);
	return;
}

void func_198(var uParam0, int iParam1) // Position - 0x5832 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_199(var uParam0) // Position - 0x5843 Hash - 0xA48990DD ^0x470FECFD
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	return;
}

var func_200(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5854 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_201(int iParam0, int iParam1) // Position - 0x586B Hash - 0x893AC59E ^0x893AC59E
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

void func_202(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5905 Hash - 0xA65AB937 ^0xA65AB937
{
	func_273(uParam0, iParam6);
	func_274(uParam0, iParam5);
	func_275(uParam0, iParam4);
	func_141(uParam0, iParam3);
	func_140(uParam0, iParam2);
	func_139(uParam0, iParam1);
	return;
}

BOOL func_203(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x593D Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_204() // Position - 0x5966 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

BOOL func_205() // Position - 0x5975 Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

BOOL func_206() // Position - 0x5991 Hash - 0x2C6DE8F6 ^0xAB4AC7E1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

BOOL func_207() // Position - 0x59AD Hash - 0x9B63752F ^0x341C80A6
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

int func_208(int iParam0) // Position - 0x59D8 Hash - 0xE4DA9E55 ^0xFC6A9F00
{
	if (!func_36(iParam0))
		return 0;

	return Global_1835011[iParam0 /*72*/].f_70;
}

void func_209(int iParam0, int iParam1) // Position - 0x59F8 Hash - 0x690CFBD7 ^0xCB74D023
{
	if (!func_36(iParam0))
		return;

	if (Global_1835011[iParam0 /*72*/].f_70 == iParam1)
		return;

	Global_1835011[iParam0 /*72*/].f_70 = iParam1;
	return;
}

BOOL func_210(int iParam0) // Position - 0x5A2B Hash - 0x1D686BE7 ^0x2CC3BF74
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
		return false;

	return true;
}

BOOL func_211(int iParam0) // Position - 0x5A4D Hash - 0x6E01F166 ^0xCFAEA09B
{
	return VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(iParam0));
}

int func_212(int iParam0) // Position - 0x5A5F Hash - 0xE4DA9E55 ^0xBC705F8E
{
	if (!func_36(iParam0))
		return 0;

	return Global_1835011[iParam0 /*72*/].f_69;
}

void func_213(int iParam0, int iParam1) // Position - 0x5A7F Hash - 0x690CFBD7 ^0x8D8091EF
{
	if (!func_36(iParam0))
		return;

	if (Global_1835011[iParam0 /*72*/].f_69 == iParam1)
		return;

	Global_1835011[iParam0 /*72*/].f_69 = iParam1;
	return;
}

int func_214(int iParam0, BOOL bParam1) // Position - 0x5AB2 Hash - 0xDC25C259 ^0xF0C87A0D
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1292143.f_459.f_44[i /*30*/] == -1)
		{
		}
		else if (Global_1292143.f_459.f_44[i /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292143.f_459.f_44[i /*30*/].f_1;
		}
	}

	if (bParam1)
		return 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1292143.f_459.f_1245[i /*30*/] == -1)
		{
		}
		else if (Global_1292143.f_459.f_1245[i /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292143.f_459.f_1245[i /*30*/].f_1;
		}
	}

	return 0;
}

Hash func_215(Hash hParam0) // Position - 0x5B6D Hash - 0x4BC3462 ^0x3505B02C
{
	int num;

	num = func_276(hParam0);

	switch (num)
	{
		case -765810527:
		
	
		case -736232052:
		
	
		case 34802860:
		
	
		case joaat("mission_coop_char_creator"):
		
	
		default:
		
	}

	return 0;
}

int func_216(int iParam0, int iParam1) // Position - 0x5BBE Hash - 0xFBE3DE8E ^0xE80B245A
{
	Hash chalHash;
	Hash goalHash;

	if (!func_277(iParam0, &chalHash, &goalHash))
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_217(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, Player plParam5, int iParam6, BOOL bParam7) // Position - 0x5BE3 Hash - 0x72C1A759 ^0xD848AFAA
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_278(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = plParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_279(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_218(int iParam0, int iParam1) // Position - 0x5CC4 Hash - 0x28283238 ^0x1A4D4A94
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1295232[iParam1 /*2*/] && iParam0 != false;
}

BOOL func_219(int iParam0) // Position - 0x5CFC Hash - 0x2CE28C79 ^0x2F819513
{
	int i;

	if (iParam0 == 255)
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), iParam0))
		return true;

	for (i = 0; i < 1; i = i + 1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&Global_1295205.f_23[i /*3*/], iParam0))
			return true;
	}

	return false;
}

BOOL func_220(Hash hParam0) // Position - 0x5D64 Hash - 0xA3093881 ^0xA3093881
{
	if (hParam0 == 0)
		return false;

	return Global_1291943[hParam0] == hParam0;
}

BOOL func_221(Hash hParam0) // Position - 0x5D81 Hash - 0x98D53BC2 ^0x8B04EC17
{
	if (hParam0 == 0)
		return false;

	return Global_1291943.f_11[hParam0] == hParam0;
}

int func_222(Hash hParam0) // Position - 0x5DA0 Hash - 0x9F4C8260 ^0x2F8D5883
{
	int i;

	if (!func_152(hParam0))
		return 0;

	for (i = 0; i < Global_1292143.f_2012; i = i + 1)
	{
		if (Global_1292143.f_2012.f_1[i /*24*/].f_4 == hParam0 && Global_1292143.f_2012.f_1[i /*24*/].f_5 == 0)
			return NETWORK::_0xE10F2D7715ABABEC(&Global_1292143.f_2012.f_1[i /*24*/]);
	}

	return 0;
}

int func_223(Hash hParam0) // Position - 0x5E0E Hash - 0xAA5F2325 ^0x80304A78
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1292143.f_459.f_44[i /*30*/] == -1)
		{
		}
		else if (Global_1292143.f_459.f_44[i /*30*/].f_4 != hParam0)
		{
		}
		else
		{
			return 1;
		}
	}

	return 0;
}

int func_224(Hash hParam0) // Position - 0x5E59 Hash - 0x61C01E3 ^0x61C01E3
{
	if (hParam0 <= 0 || hParam0 >= 10)
		return -1;

	return Global_1292128[hParam0];
}

void func_225(Hash hParam0, int iParam1) // Position - 0x5E7F Hash - 0x8AC6DE55 ^0x8AC6DE55
{
	if (!func_52(hParam0))
		return;

	Global_1292128[hParam0] = iParam1;
	return;
}

void func_226(Hash hParam0, BOOL bParam1) // Position - 0x5E9E Hash - 0x59542D41 ^0x717E452E
{
	if (!func_52(hParam0))
		return;

	if (bParam1)
		if (Global_1291943.f_11[hParam0] == 0)
			Global_1291943.f_11[hParam0] = hParam0;
	else if (Global_1291943.f_11[hParam0] != 0)
		Global_1291943.f_11[hParam0] = 0;

	return;
}

int func_227(Player plParam0) // Position - 0x5EF1 Hash - 0xB51678BE ^0xFDD29DED
{
	if (plParam0 == 255)
		plParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (plParam0 < 0 || plParam0 >= 32)
		return -1;

	return Global_1155150[plParam0 /*30*/].f_3.f_1;
}

BOOL func_228(var uParam0, int iParam1) // Position - 0x5F28 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

BOOL func_229(Hash hParam0, int* piParam1) // Position - 0x5F39 Hash - 0x22E6619C ^0xA9517010
{
	var statId;

	*piParam1 = -1;

	switch (hParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			statId = { func_280(joaat("gvo_flow_replay_timestamp")) };
			STATS::STAT_ID_GET_INT(&statId, piParam1);
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_230(Hash hParam0, int* piParam1) // Position - 0x5FB6 Hash - 0x22E6619C ^0x81317720
{
	var statId;

	*piParam1 = -1;

	switch (hParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			statId = { func_280(joaat("gvo_flow_initial_timestamp")) };
			STATS::STAT_ID_GET_INT(&statId, piParam1);
			return true;
	
		default:
		
	}

	return false;
}

int func_231(Hash hParam0) // Position - 0x6021 Hash - 0xEF6A7C9F ^0xACB10226
{
	if (hParam0 == -1)
		return 0;

	if (hParam0 == 25)
		return Global_1901671.f_51.f_26 * 2;

	return Global_1901671.f_51.f_26;
}

int func_232(Hash hParam0) // Position - 0x6052 Hash - 0x4D967C2 ^0x1BB77640
{
	if (hParam0 == -1)
		return 0;

	return Global_1901671.f_51.f_27;
}

BOOL func_233(Hash hParam0) // Position - 0x606C Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_234(BOOL bParam0) // Position - 0x607A Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_19() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_235() // Position - 0x60BB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_236() // Position - 0x60CA Hash - 0x9C0611C2 ^0x4A21680D
{
	switch (func_281())
	{
		case 0:
			Global_1120497.f_18173.f_1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-911959609);
			Global_1120497.f_18173.f_2 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(joaat("net_gun_for_hire_missions"));
			func_282(1);
			return false;
	
		case 1:
			if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_283()))
				return false;
		
			if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_284()))
				return false;
		
			func_285(func_283());
			func_286(func_284());
			func_282(2);
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_237(Any* panParam0, int iParam1) // Position - 0x615C Hash - 0xE30E093C ^0xB2B76016
{
	int i;
	int j;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int gangId;
	Player player;
	var unk;
	BOOL flag;
	BOOL flag2;
	var unk4;
	var unk210;
	var unk211;
	int num6;
	var unk212;
	int num7;
	var dst;
	var src;
	var unk277;
	var unk377;
	var unk381;
	var unk386;
	int dst2;
	var src2;
	var unk393;

	unk4 = 205;
	dst = -1;
	dst.f_1 = -1;
	dst.f_2 = -1;
	dst.f_4 = 10;
	dst.f_15 = 4;
	dst.f_15.f_5 = 4;
	dst.f_25 = 1;
	dst.f_28 = 2;
	dst.f_28.f_1 = -1;
	dst.f_28.f_1.f_1 = -1;
	dst.f_31 = joaat("NONE");
	dst.f_31.f_1 = joaat("NONE");
	src = -1;
	src.f_1 = -1;
	src.f_2 = -1;
	src.f_4 = 10;
	src.f_15 = 4;
	src.f_15.f_5 = 4;
	src.f_25 = 1;
	src.f_28 = 2;
	src.f_28.f_1 = -1;
	src.f_28.f_1.f_1 = -1;
	src.f_31 = joaat("NONE");
	src.f_31.f_1 = joaat("NONE");
	unk277 = 3;
	unk277.f_1 = -1;
	unk277.f_1.f_1 = -1;
	unk277.f_1.f_2 = -1;
	unk277.f_1.f_4 = 10;
	unk277.f_1.f_15 = 4;
	unk277.f_1.f_15.f_5 = 4;
	unk277.f_1.f_25 = 1;
	unk277.f_1.f_28 = 2;
	unk277.f_1.f_28.f_1 = -1;
	unk277.f_1.f_28.f_1.f_1 = -1;
	unk277.f_1.f_31 = joaat("NONE");
	unk277.f_1.f_31.f_1 = joaat("NONE");
	unk277.f_1.f_33 = -1;
	unk277.f_1.f_33.f_1 = -1;
	unk277.f_1.f_33.f_2 = -1;
	unk277.f_1.f_33.f_4 = 10;
	unk277.f_1.f_33.f_15 = 4;
	unk277.f_1.f_33.f_15.f_5 = 4;
	unk277.f_1.f_33.f_25 = 1;
	unk277.f_1.f_33.f_28 = 2;
	unk277.f_1.f_33.f_28.f_1 = -1;
	unk277.f_1.f_33.f_28.f_1.f_1 = -1;
	unk277.f_1.f_33.f_31 = joaat("NONE");
	unk277.f_1.f_33.f_31.f_1 = joaat("NONE");
	unk277.f_1.f_33.f_33 = -1;
	unk277.f_1.f_33.f_33.f_1 = -1;
	unk277.f_1.f_33.f_33.f_2 = -1;
	unk277.f_1.f_33.f_33.f_4 = 10;
	unk277.f_1.f_33.f_33.f_15 = 4;
	unk277.f_1.f_33.f_33.f_15.f_5 = 4;
	unk277.f_1.f_33.f_33.f_25 = 1;
	unk277.f_1.f_33.f_33.f_28 = 2;
	unk277.f_1.f_33.f_33.f_28.f_1 = -1;
	unk277.f_1.f_33.f_33.f_28.f_1.f_1 = -1;
	unk277.f_1.f_33.f_33.f_31 = joaat("NONE");
	unk277.f_1.f_33.f_33.f_31.f_1 = joaat("NONE");
	unk377 = 3;
	dst2 = -1;
	src2 = -1;
	unk393 = -1;
	unk393.f_1 = -1;
	player = PLAYER::PLAYER_ID();
	gangId = GANG::NETWORK_GET_GANG_ID(player);
	num = func_287(player);
	num3 = func_240(joaat("GFH_PLAYER_CAMP"));
	unk = { Global_34 };
	flag = false;
	num7 = 536877168;
	num5 = 0;
	func_288(&unk4, 205, true);

	if (!func_289(&unk381, func_283()))
		return false;

	if (!func_290(unk381, &(unk381.f_1), -1782208300, 0, 0, 1))
		return false;

	if (!func_290(unk381, &(unk381.f_1), 466723622, 0, 0, 1))
		return false;

	if (!func_290(unk381, &(unk381.f_1), 1635370648, iParam1, 0, 1))
		return false;

	if (!func_290(unk381, &(unk381.f_1), 56746299, 0, 0, 1))
		return false;

	if (!func_290(unk381, &(unk381.f_1), 1915534289, num5, 0, 1))
		return false;

	unk210 = unk381.f_1;

	if (!func_291(&unk386, func_284()))
		return false;

	unk211 = unk386.f_1;
	num4 = func_292(unk381, 1141833051);

	for (i = 0; i <= 204; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&dst2, &src2, 2);
		MISC::COPY_SCRIPT_STRUCT(&dst, &src, 33);
		unk381.f_1 = unk210;
		unk386.f_1 = unk211;
		unk393 = { func_189() };
		flag = false;
		flag2 = false;
		num2 = unk4[i];
	
		if (num2 >= num4)
		{
		}
		else if (!func_293(&unk381, num2, &dst2))
		{
		}
		else
		{
			unk393 = { func_294(dst2.f_1) };
		
			if (!func_295(dst2, 1))
			{
			}
			else
			{
				for (j = 0; j <= 3 - 1; j = j + 1)
				{
					num6 = j;
				
					if (func_297(unk393, unk, func_296(num6)))
					{
						flag = true;
						break;
					}
				}
			
				if (!flag)
				{
				}
				else if (unk277[num6 /*33*/].f_2.f_1 != 0)
				{
				}
				else
				{
					flag2 = num6 == 0;
				
					if (!func_298(&unk386, &dst2, &dst, false))
					{
					}
					else if (func_299(&dst, num2, &unk377, gangId, num, num3, &unk212, num7, -1))
					{
					}
					else
					{
						if (flag2)
						{
							MISC::COPY_SCRIPT_STRUCT(panParam0, &dst, 33);
							return true;
						}
					
						MISC::COPY_SCRIPT_STRUCT(&unk277[num6 /*33*/], &dst, 33);
					}
				}
			}
		}
	}

	MISC::COPY_SCRIPT_STRUCT(&dst, &src, 33);

	for (i = 0; i <= 3 - 1; i = i + 1)
	{
		if (unk277[i /*33*/].f_2.f_1 == 0)
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&dst, &unk277[i /*33*/], 33);
			break;
		}
	}

	if (dst.f_2.f_1 == 0)
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &dst, 33);
	return true;
}

BOOL func_238(int iParam0) // Position - 0x6651 Hash - 0x211FDF81 ^0x211FDF81
{
	return iParam0 > -1 && iParam0 < 104;
}

int func_239(int iParam0) // Position - 0x6667 Hash - 0x797E2C82 ^0x797E2C82
{
	return func_300(13, iParam0);
}

int func_240(int iParam0) // Position - 0x6677 Hash - 0x4D0357BA ^0x4D0357BA
{
	return func_300(14, iParam0);
}

BOOL func_241(var uParam0, int iParam1) // Position - 0x6687 Hash - 0x80DF9EED ^0x80DF9EED
{
	return func_302(uParam0, func_301(iParam1, 1), 1);
}

void func_242(var uParam0, int iParam1) // Position - 0x669D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_243() // Position - 0x66AE Hash - 0x10A4D52F ^0x431D60F6
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(func_283());
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(func_284());
	func_282(0);
	func_303(0);
	func_304(0);
	return;
}

void func_244(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x66D5 Hash - 0x611E104E ^0x4F96552A
{
	var unk;
	var unk32;
	var unk33;
	float num;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk32 = func_305(0, 8);
	unk.f_6 = iParam0;
	unk.f_5 = iParam1;
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	unk.f_4 = 3;
	unk.f_9 = uParam3;
	unk.f_14 = uParam2;
	unk.f_7 = { uParam4 };
	unk.f_13 = iParam10;
	MISC::COPY_SCRIPT_STRUCT(&(unk.f_27), &uParam6, 4);
	Global_1110244.f_4647 = uParam2;
	unk33 = { func_306(iParam0) };
	num = func_307(iParam0);
	func_308(&(unk.f_19), unk.f_11, unk33, num);
	func_309(&unk, unk32);
	return;
}

struct<2> func_245(int iParam0, int iParam1) // Position - 0x67D6 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_246(Hash hParam0, int iParam1) // Position - 0x67EC Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_247(Hash hParam0) // Position - 0x6806 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_246(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_248(Hash hParam0, int iParam1) // Position - 0x6831 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_246(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_310(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_311("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_312(&unk, i, num, num2))
			{
			}
			else if (!func_313(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_314(num);
				return true;
			}
		}
	
		func_314(num);
	}

	return false;
}

BOOL func_249(Hash hParam0) // Position - 0x68D8 Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_246(hParam0, 0))
		return false;

	num = func_315(hParam0);

	switch (num)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num2 = func_316(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_317(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_318(hParam0);
	num3 = func_317(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_250(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6994 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_246(hParam0, 0))
		return 0;

	num = func_247(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_310(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_319(hParam0, false);
	}

	if (func_320(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_234(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_321(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_234(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_251() // Position - 0x6A56 Hash - 0xEEC80C47 ^0xEEC80C47
{
	if (Global_1292143.f_459.f_1548 >= 40 || Global_1292143.f_459.f_1548 < 0)
		Global_1292143.f_459.f_1548 = 0;

	return Global_1292143.f_459.f_1548;
}

void func_252(int iParam0) // Position - 0x6A95 Hash - 0x91140DCF ^0x91140DCF
{
	if (iParam0 >= 40 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1548 = iParam0;
	return;
}

int func_253() // Position - 0x6ABE Hash - 0x3F0702A6 ^0x3F0702A6
{
	if (Global_1292143.f_459.f_1549 >= 10 || Global_1292143.f_459.f_1549 < 0)
		Global_1292143.f_459.f_1549 = 0;

	return Global_1292143.f_459.f_1549;
}

void func_254(int iParam0) // Position - 0x6AFD Hash - 0x2263858C ^0x2263858C
{
	if (iParam0 >= 10 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1549 = iParam0;
	return;
}

Hash func_255(var uParam0, var uParam1) // Position - 0x6B26 Hash - 0x10103901 ^0xC90ADDEF
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_322(uParam0, &num))
		return num;

	return 0;
}

int func_256(var uParam0, var uParam1) // Position - 0x6B50 Hash - 0x2B1F0751 ^0xFAA335B4
{
	var unk;
	var unk4;
	int num;
	int num2;
	int num3;

	if (Global_1072759.f_19487 <= 0)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_322(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_322(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_257() // Position - 0x6BF7 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_258(int iParam0, int iParam1) // Position - 0x6C0B Hash - 0x53A96DDB ^0xB6A79257
{
	iParam0->f_2 = iParam0->f_2 || iParam1;
	return;
}

int func_259(int iParam0) // Position - 0x6C1E Hash - 0xF10AB031 ^0x99A2B2C1
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
	
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
	
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
	
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
	
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
	
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
	
		case 8:
			return 634321112;
	
		default:
		
	}

	return 0;
}

char* func_260(var uParam0, var uParam1, var uParam2) // Position - 0x6C91 Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_261(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x6CA5 Hash - 0x96F9C981 ^0x71D39102
{
	int num;
	int i;
	int num2;
	int gangId;
	int num3;
	int j;
	int num4;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	num2 = -1;
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (gangId == 0)
		return;

	switch (func_32(uParam0))
	{
		case 4:
			num3 = func_324(func_323(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_325(j) == func_323(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_326(num3);
		
			if (!func_327(num4, 0))
				return;
			break;
	
		case 8:
			return;
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1107816.f_33[i /*16*/] == gangId)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return;

	num = Global_1107816.f_33[num2 /*16*/].f_3.f_1;

	if (num == -1)
		return;

	uParam2->f_2 = Global_1114893[num /*70*/];
	return;
}

int func_262(var uParam0, var uParam1) // Position - 0x6DB7 Hash - 0xBD58DDB3 ^0xBD58DDB3
{
	int num;

	num = func_256(uParam0);

	if (num < 0)
		return 0;

	return func_328(num);
}

int func_263(var uParam0, var uParam1, int iParam2) // Position - 0x6DD9 Hash - 0xBFD2BCAE ^0x459D438
{
	var unk;
	var unk4;
	var unk7;
	int num;

	if (Global_1072759.f_19487 >= 32)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_322(uParam0, &unk))
		return -1;

	unk7 = -1;
	unk7.f_1 = -1;
	unk7 = { uParam0 };
	unk7.f_2 = iParam2;

	if (Global_1072759.f_19487 == 0)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
		return 0;
	}

	num = 0;

	while (num < Global_1072759.f_19487)
	{
		func_322(Global_1072759.f_19487.f_1[num /*3*/], &unk4);
	
		if (unk == unk4)
		{
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
		else if (unk > unk4)
		{
			num = num + 1;
		}
		else if (unk < unk4)
		{
			func_329(num);
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
	}

	if (Global_1072759.f_19487 < 31)
	{
		num = Global_1072759.f_19487;
		Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
	
		if (Global_1072759.f_19487 > 32)
			Global_1072759.f_19487 = 32;
	
		return num;
	}

	return -1;
}

void func_264() // Position - 0x6F48 Hash - 0x78106AC5 ^0x65F3CC03
{
	int num;
	var unk;

	num = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;

	while (num < Global_1072759.f_19487)
	{
		func_322(Global_1072759.f_19487.f_1[num /*3*/], &unk);
		num = num + 1;
	}

	return;
}

void func_265(int iParam0, int iParam1) // Position - 0x6F8F Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_266(int iParam0, int iParam1) // Position - 0x6FA4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_267(int iParam0, int iParam1) // Position - 0x6FB5 Hash - 0xE1D12727 ^0xE8936757
{
	switch (iParam0)
	{
		case 0:
			return joaat("crime_arson");
	
		case 1:
			return joaat("crime_assault");
	
		case 2:
			return joaat("crime_assault_animal");
	
		case 3:
			return joaat("crime_assault_corpse");
	
		case 4:
			return joaat("crime_assault_horse");
	
		case 5:
			return joaat("crime_assault_law");
	
		case 6:
			return joaat("crime_assault_livestock");
	
		case 7:
			return joaat("crime_bank_robbery");
	
		case 8:
			return joaat("crime_burglary");
	
		case 9:
			return joaat("crime_cheating");
	
		case 10:
			return joaat("CRIME_DISTURBANCE");
	
		case 11:
			return joaat("crime_explosion");
	
		case 12:
			return joaat("crime_grave_robbery");
	
		case 13:
			return joaat("CRIME_HASSLE");
	
		case 14:
			return joaat("crime_hit_and_run");
	
		case 15:
			return joaat("crime_hit_and_run_law");
	
		case 16:
			return joaat("crime_intimidation");
	
		case 17:
			return joaat("crime_jack_horse");
	
		case 18:
			return joaat("crime_jack_vehicle");
	
		case 19:
			return joaat("crime_jail_break");
	
		case 20:
			return joaat("crime_kidnapping");
	
		case 21:
			return joaat("crime_kidnapping_law");
	
		case 22:
			return joaat("crime_lasso_assault");
	
		case 23:
			return joaat("crime_law_is_threatened");
	
		case 24:
			return joaat("crime_loitering");
	
		case 25:
			return joaat("crime_looting");
	
		case 26:
			return joaat("crime_murder");
	
		case 27:
			return joaat("crime_murder_animal");
	
		case 28:
			return joaat("crime_murder_horse");
	
		case 29:
			return joaat("crime_murder_law");
	
		case 30:
			return joaat("crime_murder_livestock");
	
		case 31:
			return joaat("crime_property_destruction");
	
		case 32:
			return joaat("CRIME_RESIST_ARREST");
	
		case 33:
			return joaat("crime_robbery");
	
		case 34:
			return joaat("crime_stagecoach_robbery");
	
		case 35:
			return joaat("crime_stolen_goods");
	
		case 36:
			return joaat("crime_theft");
	
		case 37:
			return joaat("crime_theft_horse");
	
		case 38:
			return joaat("crime_theft_livestock");
	
		case 39:
			return joaat("crime_theft_vehicle");
	
		case 40:
			return joaat("crime_threaten");
	
		case 41:
			return joaat("crime_threaten_law");
	
		case 42:
			return joaat("crime_train_robbery");
	
		case 43:
			return joaat("crime_trample");
	
		case 44:
			return joaat("crime_trample_law");
	
		case 45:
			return joaat("crime_trespassing");
	
		case 46:
			return joaat("crime_unarmed_assault");
	
		case 47:
			return joaat("crime_vandalism");
	
		case 48:
			return joaat("crime_vandalism_vehicle");
	
		case 49:
			return joaat("crime_vehicle_destruction");
	
		case 50:
			return joaat("crime_wanted_level_up_debug_high");
	
		case 51:
			return joaat("crime_wanted_level_up_debug_low");
	
		case 52:
			return joaat("crime_accomplice");
	
		case 53:
			return joaat("crime_explosion_poison");
	
		case 54:
			return joaat("crime_murder_player");
	
		case 55:
			return joaat("crime_murder_player_horse");
	
		case 56:
			return joaat("crime_self_defence");
	
		case 57:
			return joaat("crime_trample_player");
	
		case 58:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_268(var uParam0, var uParam1, var uParam2) // Position - 0x730A Hash - 0x3608481D ^0x5B5E60FC
{
	Global_1939102.f_75.f_67 = { uParam0 };
	return;
}

void func_269() // Position - 0x7320 Hash - 0xBA4536FD ^0xF7777B54
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1939102.f_75.f_67), "", 24);
	return;
}

BOOL func_270(int iParam0) // Position - 0x7335 Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_330(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_331(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_332(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

int func_271(var uParam0, var uParam1) // Position - 0x73B4 Hash - 0xFF65B6AA ^0xB94EF0F6
{
	int i;

	if (!func_31(uParam0))
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_173(Global_1900460.f_1[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_272(int iParam0) // Position - 0x73FF Hash - 0x30DA06D5 ^0x3666A687
{
	if (iParam0 < 0)
		return 0;

	if (Global_1900460.f_66 == 0)
		return 0;

	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_199(&Global_1900460.f_1[0 /*2*/]);
		return 1;
	}

	func_199(&Global_1900460.f_1[iParam0 /*2*/]);
	Global_1900460.f_66 = Global_1900460.f_66 - 1;
	func_333(iParam0, Global_1900460.f_66);
	return 1;
}

void func_273(var uParam0, int iParam1) // Position - 0x746A Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_274(var uParam0, int iParam1) // Position - 0x74F0 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_275(var uParam0, int iParam1) // Position - 0x752C Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_132(*uParam0);
	num2 = func_133(*uParam0);

	if (iParam1 < 1 || iParam1 > func_201(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

int func_276(int iParam0) // Position - 0x757F Hash - 0x51E02475 ^0x77FEC1FF
{
	switch (iParam0)
	{
		case 0:
			return joaat("mission_coop_char_creator");
	
		case 1:
		case 2:
		case 3:
		case 4:
			return -765810527;
	
		case 5:
		case 6:
		case 7:
		case 8:
			return 34802860;
	
		case 9:
		case 10:
		case 11:
		case 12:
			return -736232052;
	
		default:
		
	}

	return 0;
}

BOOL func_277(int iParam0, var uParam1, var uParam2) // Position - 0x75FE Hash - 0xB04DAB21 ^0x10C1D2E2
{
	if (!func_334(iParam0))
		return false;

	if (!func_134())
		return false;

	if (!func_335(iParam0, uParam1, uParam2))
		return false;

	if (*uParam1 == joaat("MP_ACHIEVEMENTS") && Global_1572887.f_14 != 0)
		return false;
	else if (*uParam1 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_14 != -1)
		return false;

	return true;
}

void func_278(int iParam0, int iParam1) // Position - 0x7670 Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_279(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x76A0 Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_336(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

struct<2> func_280(int iParam0) // Position - 0x775B Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

int func_281() // Position - 0x776D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1120497.f_18173;
}

void func_282(int iParam0) // Position - 0x777C Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1120497.f_18173 = iParam0;
	return;
}

int func_283() // Position - 0x778D Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1120497.f_18173.f_1;
}

int func_284() // Position - 0x779E Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1120497.f_18173.f_2;
}

void func_285(int iParam0) // Position - 0x77AF Hash - 0x86B03B34 ^0xF363DADB
{
	int i;
	int num;

	for (i = 0; i <= 241; i = i + 1)
	{
		num = func_337(i, 1);
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(iParam0, num, func_338(num));
	}

	return;
}

void func_286(int iParam0) // Position - 0x77E2 Hash - 0xBEEEB0D1 ^0x113F8F24
{
	int i;
	int num;

	for (i = 0; i <= 55; i = i + 1)
	{
		num = func_339(i, 1);
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(iParam0, num, func_340(num));
	}

	return;
}

int func_287(Player plParam0) // Position - 0x7815 Hash - 0x86C8A729 ^0x86C8A729
{
	int num;
	int num2;

	num = func_341(plParam0);
	num2 = func_342(plParam0, num);

	if (num != num2)
	{
		if (func_343(num2))
		{
			func_344(num2);
			num = num2;
		}
	}

	return num;
}

void func_288(var uParam0, int iParam1, BOOL bParam2) // Position - 0x784B Hash - 0xD58BF130 ^0xD58BF130
{
	var unk;
	int randomIntInRange;
	int i;

	i = 0;

	if (bParam2)
	{
		for (i = 0; i <= iParam1 - 1; i = i + 1)
		{
			uParam0->[i] = i;
		}
	}

	i = iParam1 - 1;

	for (i = iParam1 - 1; i >= 0; i = i + -1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, i);
		unk = uParam0->[i];
		uParam0->[i] = uParam0->[randomIntInRange];
		uParam0->[randomIntInRange] = unk;
	}

	return;
}

BOOL func_289(Any* panParam0, int iParam1) // Position - 0x78B8 Hash - 0x6052E425 ^0xEB4CC712
{
	var src;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iParam1))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iParam1))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = iParam1;
	return true;
}

BOOL func_290(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x78EB Hash - 0x9BC890AF ^0xDF6320E0
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

BOOL func_291(Any* panParam0, int iParam1) // Position - 0x7916 Hash - 0x6052E425 ^0xEB4CC712
{
	var src;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iParam1))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iParam1))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = iParam1;
	return true;
}

Any func_292(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x7949 Hash - 0xE9C3EF95 ^0x995DFE77
{
	uParam0.f_2 = iParam5;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&uParam0);
}

BOOL func_293(Any* panParam0, int iParam1, var uParam2) // Position - 0x795D Hash - 0xA785DFFA ^0xA785DFFA
{
	if (!func_345(panParam0, iParam1))
		return false;

	if (!func_346(panParam0, uParam2))
		return false;

	return true;
}

struct<2> func_294(var uParam0) // Position - 0x7986 Hash - 0x6C87C802 ^0xCFA8552F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_347(uParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_347(uParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_347(uParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_347(uParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_347(uParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_347(uParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_347(uParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_189();
}

BOOL func_295(int iParam0, int iParam1) // Position - 0x7A56 Hash - 0x9F63FB1 ^0x37A242D7
{
	return func_348(&(Global_1110244.f_3667[iParam0 /*7*/].f_2), iParam1);
}

float func_296(int iParam0) // Position - 0x7A71 Hash - 0x3E935C4D ^0xF79FAEEF
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_319.f_62;
	
		case 1:
			return Global_1901671.f_319.f_63;
	
		case 2:
			return Global_1901671.f_319.f_64;
	
		default:
		
	}

	return -1f;
}

BOOL func_297(var uParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5) // Position - 0x7ABB Hash - 0x204284F6 ^0x72A50EC
{
	int num;
	var unk;

	if (fParam5 < 0f)
		return false;

	func_349(uParam0, &num, &unk);
	return BUILTIN::VDIST(vParam2, func_350(num, unk)) <= fParam5;
}

BOOL func_298(var uParam0, Any* panParam1, var uParam2, BOOL bParam3) // Position - 0x7AED Hash - 0xD53ED16C ^0x21028D81
{
	if (!func_351(*uParam0, &(uParam0->f_1), 33417155, 0, 0, 1))
		return false;

	if (*panParam1 == -1)
		return false;

	if (panParam1->f_1 == 0)
		return false;

	if (!func_351(*uParam0, &(uParam0->f_1), 12932893, func_352(*panParam1), 0, 1))
		return false;

	if (!func_351(*uParam0, &(uParam0->f_1), -2017210649, panParam1->f_1, 0, 1))
		return false;

	MISC::COPY_SCRIPT_STRUCT(&(uParam2->f_2), panParam1, 2);
	return func_353(*uParam0, uParam2, bParam3);
}

BOOL func_299(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, int iParam8) // Position - 0x7B7F Hash - 0xAFE6F3CD ^0x15945917
{
	int num;
	int num2;
	int num3;

	num = func_354(uParam0->f_2);
	num2 = func_355(num);

	if (iParam8 == -1)
		num3 = func_356(iParam5);
	else
		num3 = iParam8;

	*uParam6 = 0;
	*uParam6 = func_357(uParam0);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_358(num3, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_359(uParam0, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_360(uParam0, iParam1, uParam2, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_361(uParam0, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_362(num3, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_363(uParam0, num3, iParam3, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_364(uParam0, iParam3, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_365(iParam3, iParam4, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_366(iParam3);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_367(iParam3, uParam0, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_368(uParam0, iParam3, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_369(uParam0, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_370(uParam0, iParam7);

	if (*uParam6 != 0)
		return true;

	*uParam6 = func_371(iParam3, iParam7);

	if (*uParam6 != 0)
		return true;

	switch (num2)
	{
		case 0:
			*uParam6 = func_374(uParam0, iParam7, iParam3);
			break;
	
		case 1:
			*uParam6 = func_373(uParam0, iParam7);
			break;
	
		case 2:
			*uParam6 = func_372(uParam0, iParam7, iParam3, num3, iParam5);
			break;
	
		default:
			*uParam6 = 45;
			break;
	}

	return *uParam6 != 0;
}

int func_300(int iParam0, int iParam1) // Position - 0x7D61 Hash - 0x5550484A ^0x2912C0B2
{
	var unk;

	if (func_375(iParam0, iParam1, &unk))
		return unk.f_1;

	return -1;
}

int func_301(int iParam0, int iParam1) // Position - 0x7D7E Hash - 0xAE668FD9 ^0xAE668FD9
{
	switch (iParam0)
	{
		case joaat("MULTIPLE_OBJECTIVES_2"):
			return 10;
	
		case -2001405328:
			return 6;
	
		case joaat("MULTIPLE_OBJECTIVES_3"):
			return 11;
	
		case joaat("MULTIPLE_OBJECTIVES_4"):
			return 12;
	
		case -1348549877:
			return 13;
	
		case joaat("REQUIRES_POSSE_TARGET"):
			return 17;
	
		case -1086220725:
			return 4;
	
		case joaat("SETUP_MISSION_1"):
			return 19;
	
		case -1040947274:
			return 14;
	
		case joaat("NO_PVP"):
			return 8;
	
		case -775927147:
			return 5;
	
		case joaat("SETUP_MISSION_0"):
			return 18;
	
		case -399531147:
			return 20;
	
		case joaat("INSTANCED"):
			return 1;
	
		case joaat("HAS_FLOW_FADE"):
			return 3;
	
		case 1042373141:
			return 7;
	
		case 1803795142:
			return 15;
	
		case joaat("MULTI_GANG"):
			return 0;
	
		case joaat("HAS_INTRO_CUTSCENE"):
			return 2;
	
		case joaat("MULTIPLE_OBJECTIVES_1"):
			return 9;
	
		case joaat("REQUIRES_PLAYER_TARGET"):
			return 16;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_302(var uParam0, int iParam1, int iParam2) // Position - 0x7E7E Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

void func_303(int iParam0) // Position - 0x7EB5 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1120497.f_18173.f_1 = iParam0;
	return;
}

void func_304(int iParam0) // Position - 0x7EC8 Hash - 0xC421D95B ^0x56CEE285
{
	Global_1120497.f_18173.f_2 = iParam0;
	return;
}

var func_305(int iParam0, int iParam1) // Position - 0x7EDB Hash - 0x42C305C ^0x81DF2F42
{
	return func_376(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

Vector3 func_306(int iParam0) // Position - 0x7EF9 Hash - 0xCE91891 ^0x60C80DB1
{
	return Global_1114893[iParam0 /*70*/].f_7.f_1;
}

float func_307(int iParam0) // Position - 0x7F0F Hash - 0x7647021A ^0xE862F828
{
	return Global_1114893[iParam0 /*70*/].f_7;
}

// Unhandled jump detected. Output should be considered invalid
void func_308(var uParam0, Any anParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x7F21 Hash - 0x51931D5B ^0x54B65FD8
{
	int num;
	int num2;
	int i;
	int value;
	var unk;
	Player player;

	unk = 7;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(anParam1, player))
		{
		}
		else
		{
			if (GANG::NETWORK_IS_GANG_LEADER(player))
			{
				uParam0->[0] = player;
				goto 0x9F;
			}
		
			if (func_377(player, uParam2, fParam5))
			{
				if (num + 1 < 7)
				{
					uParam0->[1 + num] = player;
					num = num + 1;
				}
			}
			else if (num2 < 7)
			{
				unk[num2] = i;
				num2 = num2 + 1;
			}
		}
	}

	for (i = 0; i <= num2 - 1; i = i + 1)
	{
		value = unk[i];
		player = PLAYER::INT_TO_PLAYERINDEX(value);
	
		if (num + 1 < 7)
		{
			uParam0->[1 + num] = player;
			num = num + 1;
		}
	}

	return;
}

void func_309(Any* panParam0, var uParam1) // Position - 0x800C Hash - 0x11D3787C ^0x1C8C3901
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 9;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 31, 32, &uParam1);
	return;
}

Hash func_310(Hash hParam0, int iParam1) // Position - 0x8043 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_246(hParam0, 0))
		return 0;

	num = func_247(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_378(hParam0, 1399091007))
	{
		func_379(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_311(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x80BD Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_234(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_312(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x80E4 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_313(Hash hParam0) // Position - 0x811F Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_314(int iParam0) // Position - 0x813A Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_315(Hash hParam0) // Position - 0x815B Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_246(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_316(Hash hParam0) // Position - 0x8186 Hash - 0xB8EC44B7 ^0x72487142
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_317(var uParam0, int iParam1) // Position - 0x8269 Hash - 0x6AC2726E ^0xDB215040
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_318(Hash hParam0) // Position - 0x82A6 Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_315(hParam0);

	switch (num)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

int func_319(Hash hParam0, BOOL bParam1) // Position - 0x8313 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_380(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_382(&unk, func_381(false));

	if (!func_383(&unk, &num, &num2, false))
		return 0;

	func_314(num);
	return num2;
}

int func_320(Hash hParam0, Hash hParam1) // Position - 0x8372 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_385(func_384(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

struct<4> func_321(Hash hParam0, BOOL bParam1) // Position - 0x839E Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_386(hParam0, bParam1, 0) };
	return func_387(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_322(int iParam0, var uParam1, Any* panParam2) // Position - 0x83C3 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_31(iParam0))
		return false;

	func_388(panParam2);

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

int func_323(var uParam0, var uParam1) // Position - 0x84CE Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_322(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_324(int iParam0) // Position - 0x84FA Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_389(&num2, iParam0))
		num = func_390() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_325(int iParam0) // Position - 0x8525 Hash - 0x2A0C2E1D ^0x2A0C2E1D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

int func_326(int iParam0) // Position - 0x853F Hash - 0x83E9D265 ^0xBE06DE0D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_327(int iParam0, BOOL bParam1) // Position - 0x855B Hash - 0x5364EDB8 ^0x5364EDB8
{
	switch (iParam0)
	{
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
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
	
		case joaat("dynamic"):
			return bParam1;
	
		default:
		
	}

	return false;
}

int func_328(int iParam0) // Position - 0x85C3 Hash - 0x6790D007 ^0xC928B5CD
{
	int i;
	var unk;

	for (i = iParam0; i < Global_1072759.f_19487; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1072759.f_19487.f_1[i /*3*/] = { Global_1072759.f_19487.f_1[i + 1 /*3*/] };
	}

	unk = -1;
	unk.f_1 = -1;

	if (Global_1072759.f_19487 < 32)
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk };

	Global_1072759.f_19487 = Global_1072759.f_19487 - 1;

	if (Global_1072759.f_19487 < 0)
		Global_1072759.f_19487 = 0;

	return 1;
}

int func_329(int iParam0) // Position - 0x8664 Hash - 0x878FD84 ^0x34564BD6
{
	int num;
	var unk;

	num = Global_1072759.f_19487 - 1;
	unk = -1;
	unk.f_1 = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1072759.f_19487.f_1[num + 1 /*3*/] = { Global_1072759.f_19487.f_1[num /*3*/] };
	
		num = num - 1;
	}

	Global_1072759.f_19487.f_1[iParam0 /*3*/] = { unk };
	Global_1072759.f_19487 = Global_1072759.f_19487 + 1;

	if (Global_1072759.f_19487 > 32)
		Global_1072759.f_19487 = 32;

	return 1;
}

int func_330(int iParam0, int iParam1) // Position - 0x86F8 Hash - 0xC0F3E3A4 ^0x6F5CEED
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
	
		case -2141419899:
			return 404;
	
		case -2106445152:
			return 277;
	
		case -2106214197:
			return 102;
	
		case -2101264851:
			return 192;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
	
		case -2073072369:
			return 57;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
	
		case -2058120606:
			return 194;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 90;
	
		case -2022369555:
			return 251;
	
		case -2021582629:
			return 110;
	
		case -2020023971:
			return 263;
	
		case -1957523409:
			return 205;
	
		case -1952856164:
			return 163;
	
		case -1949204933:
			return 261;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			return 387;
	
		case -1939389836:
			return 416;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
	
		case -1852605133:
			return 10;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
	
		case -1847672446:
			return 312;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
	
		case -1840704908:
			return 274;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_331(int iParam0) // Position - 0x9F9D Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_391(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_332(int iParam0) // Position - 0x9FBA Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

void func_333(int iParam0, int iParam1) // Position - 0x9FD1 Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_392(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_392(i, i + 1);
		}
	}

	if (func_31(Global_1900460.f_1[0 /*2*/]))
		func_183(Global_1900460.f_1[0 /*2*/], 3);

	return;
}

BOOL func_334(int iParam0) // Position - 0xA04B Hash - 0xE8373240 ^0xE8373240
{
	if (iParam0 <= -1 || iParam0 >= 33)
		return false;

	return true;
}

BOOL func_335(int iParam0, var uParam1, var uParam2) // Position - 0xA06A Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_334(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			if (Global_1572887.f_14 != 0)
				*uParam1 = joaat("SP_ACHIEVEMENTS");
			else
				*uParam1 = joaat("MP_ACHIEVEMENTS");
		
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		case 17:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_PERSISTENT");
			break;
	
		case 18:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_BUCKLE");
			break;
	
		case 19:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_MVP");
			break;
	
		case 20:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_HORSES");
			break;
	
		case 21:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_COUNTER");
			break;
	
		case 22:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_HOME");
			break;
	
		case 23:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_CRAFTAMMO");
			break;
	
		case 24:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_CRAFT");
			break;
	
		case 25:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_BUTCHER");
			break;
	
		case 26:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_HERBS");
			break;
	
		case 27:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_INTRO");
			break;
	
		case 28:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_GUN4HIRE");
			break;
	
		case 29:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_SERIES");
			break;
	
		case 30:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_FREEMODE");
			break;
	
		case 31:
			*uParam1 = joaat("MP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MP_POSSE");
			break;
	
		case 32:
			if (Global_1572887.f_14 != 0)
				*uParam1 = joaat("SP_ACHIEVEMENTS");
			else
				*uParam1 = joaat("MP_ACHIEVEMENTS");
		
			*uParam2 = joaat("ACH_MP_BONDING");
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_336(Any anParam0) // Position - 0xA3F3 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_337(int iParam0, int iParam1) // Position - 0xA439 Hash - 0xE1D12727 ^0x9C5748F5
{
	switch (iParam0)
	{
		case 0:
			return 1008523256;
	
		case 1:
			return 1141833051;
	
		case 2:
			return 830686115;
	
		case 3:
			return 1371816784;
	
		case 4:
			return -279039872;
	
		case 5:
			return -347364204;
	
		case 6:
			return -1591356522;
	
		case 7:
			return -1481147674;
	
		case 8:
			return 1071445036;
	
		case 9:
			return 1393764479;
	
		case 10:
			return 416600242;
	
		case 11:
			return 1774314862;
	
		case 12:
			return 1624339917;
	
		case 13:
			return -702452069;
	
		case 14:
			return -1697453237;
	
		case 15:
			return 935565856;
	
		case 16:
			return 164389658;
	
		case 17:
			return -3633128;
	
		case 18:
			return 568979268;
	
		case 19:
			return -742165699;
	
		case 20:
			return 1241889488;
	
		case 21:
			return -1450969535;
	
		case 22:
			return 135103436;
	
		case 23:
			return -1562463744;
	
		case 24:
			return -569428078;
	
		case 25:
			return 1034986020;
	
		case 26:
			return 1282514153;
	
		case 27:
			return 699547230;
	
		case 28:
			return -1188075274;
	
		case 29:
			return -307865396;
	
		case 30:
			return -340432202;
	
		case 31:
			return 891000470;
	
		case 32:
			return -1785915344;
	
		case 33:
			return 95610146;
	
		case 34:
			return -175154863;
	
		case 35:
			return -779715008;
	
		case 36:
			return 966721050;
	
		case 37:
			return 1773322216;
	
		case 38:
			return 965995012;
	
		case 39:
			return -2106942431;
	
		case 40:
			return 1772846069;
	
		case 41:
			return -1782208300;
	
		case 42:
			return 466723622;
	
		case 43:
			return -155807419;
	
		case 44:
			return 369580868;
	
		case 45:
			return 1862983441;
	
		case 46:
			return -1462149998;
	
		case 47:
			return 1097539553;
	
		case 48:
			return -1479366685;
	
		case 49:
			return 1475807964;
	
		case 50:
			return 504293064;
	
		case 51:
			return -678729477;
	
		case 52:
			return 1635370648;
	
		case 53:
			return 741518720;
	
		case 54:
			return -1021330426;
	
		case 55:
			return -879824208;
	
		case 56:
			return 56746299;
	
		case 57:
			return 1915534289;
	
		case 58:
			return 1089670230;
	
		case 59:
			return 1179867258;
	
		case 60:
			return -328876172;
	
		case 61:
			return 824485797;
	
		case 62:
			return -146546566;
	
		case 63:
			return -733684727;
	
		case 64:
			return 2080739522;
	
		case 65:
			return 1250184037;
	
		case 66:
			return 1142477451;
	
		case 67:
			return -750441052;
	
		case 68:
			return -467924289;
	
		case 69:
			return 1034671917;
	
		case 70:
			return -1442893430;
	
		case 71:
			return 957547265;
	
		case 72:
			return 1781322358;
	
		case 73:
			return 1219330971;
	
		case 74:
			return -2110119917;
	
		case 75:
			return 709191463;
	
		case 76:
			return 2038044382;
	
		case 77:
			return 1062084355;
	
		case 78:
			return -690423049;
	
		case 79:
			return 202835363;
	
		case 80:
			return -293519133;
	
		case 81:
			return 592206679;
	
		case 82:
			return -816725755;
	
		case 83:
			return -255537257;
	
		case 84:
			return -770038426;
	
		case 85:
			return -1940881994;
	
		case 86:
			return -1099377300;
	
		case 87:
			return -1298580726;
	
		case 88:
			return -1838764391;
	
		case 89:
			return 1537295589;
	
		case 90:
			return -26782235;
	
		case 91:
			return 1465961145;
	
		case 92:
			return -150140702;
	
		case 93:
			return 925148616;
	
		case 94:
			return -586196356;
	
		case 95:
			return -989277348;
	
		case 96:
			return -1045571630;
	
		case 97:
			return -1028785813;
	
		case 98:
			return -944306928;
	
		case 99:
			return -1799624227;
	
		case 100:
			return -1413825410;
	
		case 101:
			return -1083767826;
	
		case 102:
			return 1392091586;
	
		case 103:
			return 1269397350;
	
		case 104:
			return -1808878008;
	
		case 105:
			return 696574474;
	
		case 106:
			return 1280983896;
	
		case 107:
			return -473520653;
	
		case 108:
			return -1142735215;
	
		case 109:
			return -662059387;
	
		case 110:
			return 1196324698;
	
		case 111:
			return 1781673553;
	
		case 112:
			return 1091365066;
	
		case 113:
			return -346602855;
	
		case 114:
			return -642855470;
	
		case 115:
			return -1294273068;
	
		case 116:
			return -1181812906;
	
		case 117:
			return 2016458991;
	
		case 118:
			return 200716381;
	
		case 119:
			return -1845137425;
	
		case 120:
			return 787092883;
	
		case 121:
			return 888483612;
	
		case 122:
			return 2063500509;
	
		case 123:
			return joaat("rfl_bullpup_mk2_big_player_slow_mo_rfl_bullpup_mk2_suppressed2_player_04_stereo");
	
		case 124:
			return 262797908;
	
		case 125:
			return 2012255077;
	
		case 126:
			return 1499632451;
	
		case 127:
			return -236880317;
	
		case 128:
			return 1211454712;
	
		case 129:
			return -626189620;
	
		case 130:
			return -1438489730;
	
		case 131:
			return -479537578;
	
		case 132:
			return -1463903719;
	
		case 133:
			return 1203863120;
	
		case 134:
			return -351785645;
	
		case 135:
			return -895584822;
	
		case 136:
			return -1723095449;
	
		case 137:
			return 1915528396;
	
		case 138:
			return -1266254117;
	
		case 139:
			return -1614496179;
	
		case 140:
			return -1490596352;
	
		case 141:
			return -1047907201;
	
		case 142:
			return -1202322374;
	
		case 143:
			return 157340468;
	
		case 144:
			return 2064288322;
	
		case 145:
			return -2116748653;
	
		case 146:
			return 155183949;
	
		case 147:
			return 825663396;
	
		case 148:
			return 976967808;
	
		case 149:
			return 590738432;
	
		case 150:
			return 1708896805;
	
		case 151:
			return 2035135006;
	
		case 152:
			return 334691246;
	
		case 153:
			return -835870147;
	
		case 154:
			return -1267680873;
	
		case 155:
			return 1153433438;
	
		case 156:
			return 1489424180;
	
		case 157:
			return -904522836;
	
		case 158:
			return 1611867516;
	
		case 159:
			return -1119986744;
	
		case 160:
			return -941621037;
	
		case 161:
			return 101270175;
	
		case 162:
			return -875013288;
	
		case 163:
			return -1541719198;
	
		case 164:
			return 842085562;
	
		case 165:
			return 1887179278;
	
		case 166:
			return 1468744908;
	
		case 167:
			return -1248823782;
	
		case 168:
			return 1154537543;
	
		case 169:
			return -1244566857;
	
		case 170:
			return -1255654531;
	
		case 171:
			return -2137705453;
	
		case 172:
			return -1924253471;
	
		case 173:
			return 1990527907;
	
		case 174:
			return -1963575852;
	
		case 175:
			return -2051828336;
	
		case 176:
			return 1798123698;
	
		case 177:
			return 495975404;
	
		case 178:
			return -665208900;
	
		case 179:
			return -2090796305;
	
		case 180:
			return 1649401908;
	
		case 181:
			return -2103309026;
	
		case 182:
			return 1582509135;
	
		case 183:
			return -1471337442;
	
		case 184:
			return -1207177750;
	
		case 185:
			return 1269504651;
	
		case 186:
			return 1519769314;
	
		case 187:
			return 644398018;
	
		case 188:
			return 107613027;
	
		case 189:
			return 93270913;
	
		case 190:
			return -2118935736;
	
		case 191:
			return -536214615;
	
		case 192:
			return 1772867250;
	
		case 193:
			return 766204040;
	
		case 194:
			return 564321544;
	
		case 195:
			return -434046439;
	
		case 196:
			return 728527958;
	
		case 197:
			return -1923952042;
	
		case 198:
			return -749877125;
	
		case 199:
			return 1857771831;
	
		case 200:
			return 273544526;
	
		case 201:
			return 1068458324;
	
		case 202:
			return 600894625;
	
		case 203:
			return -1463447134;
	
		case 204:
			return -1161401818;
	
		case 205:
			return 1888618008;
	
		case 206:
			return 1225419284;
	
		case 207:
			return 1127626385;
	
		case 208:
			return -1211596176;
	
		case 209:
			return 1811646877;
	
		case 210:
			return 1651578691;
	
		case 211:
			return 1382238315;
	
		case 212:
			return -2099616401;
	
		case 213:
			return 946618725;
	
		case 214:
			return -862103290;
	
		case 215:
			return -578476660;
	
		case 216:
			return 333834761;
	
		case 217:
			return -1530925183;
	
		case 218:
			return -809702995;
	
		case 219:
			return -267638862;
	
		case 220:
			return 1323614307;
	
		case 221:
			return -2094518374;
	
		case 222:
			return -209614658;
	
		case 223:
			return -2011961582;
	
		case 224:
			return 1656869860;
	
		case 225:
			return -969870146;
	
		case 226:
			return 1319079466;
	
		case 227:
			return -1688741952;
	
		case 228:
			return -1537888061;
	
		case 229:
			return 1417063580;
	
		case 230:
			return 992974374;
	
		case 231:
			return -1714801835;
	
		case 232:
			return -134912699;
	
		case 233:
			return 41531735;
	
		case 234:
			return -1175686941;
	
		case 235:
			return -1834878085;
	
		case 236:
			return 1672605872;
	
		case 237:
			return 1083028949;
	
		case 238:
			return 890539395;
	
		case 239:
			return -1603547373;
	
		case 240:
			return -748173978;
	
		case 241:
			return 1949355378;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

char* func_338(int iParam0) // Position - 0xB194 Hash - 0x1D41976D ^0x1D41976D
{
	switch (iParam0)
	{
		case -2137705453:
			return ":name";
	
		case -2118935736:
			return ":blip_modifier";
	
		case -2116748653:
			return "blocking_object_flags";
	
		case -2110119917:
			return "transitions";
	
		case -2106942431:
			return "flags";
	
		case -2103309026:
			return ":attach_to_model";
	
		case -2099616401:
			return ":handle";
	
		case -2094518374:
			return ":radius";
	
		case -2090796305:
			return ":required_volume_config";
	
		case -2051828336:
			return ":blip_sprite_close";
	
		case -2011961582:
			return ":heading";
	
		case -1963575852:
			return ":blip_modifier_close";
	
		case -1940881994:
			return "unreachable_scearios";
	
		case -1924253471:
			return ":name_type";
	
		case -1923952042:
			return ":command_hash";
	
		case -1845137425:
			return "mission_flag(%i)";
	
		case -1838764391:
			return "scenario_flag(%i)";
	
		case -1834878085:
			return ":model_search_position";
	
		case -1808878008:
			return "required_volume(%i)";
	
		case -1799624227:
			return "mission(type=%x)";
	
		case -1785915344:
			return "unlock";
	
		case -1782208300:
			return "Gun_for_Hire";
	
		case -1723095449:
			return "flags(type=%x)";
	
		case -1714801835:
			return ":interior_coords";
	
		case -1697453237:
			return "ipl";
	
		case -1688741952:
			return ":z_probe";
	
		case -1614496179:
			return "attribute(%i)";
	
		case -1603547373:
			return ":destination_position";
	
		case -1591356522:
			return "blocking_object_flag";
	
		case joaat("rfl_bullpup_mk2_big_player_slow_mo_rfl_bullpup_mk2_suppressed2_player_04_stereo"):
			return "mission_types";
	
		case -1562463744:
			return "turn_in_type";
	
		case -1541719198:
			return ":prop_name";
	
		case -1537888061:
			return ":open_ratio";
	
		case -1530925183:
			return ":clear_space";
	
		case -1490596352:
			return "weapons";
	
		case -1481147674:
			return "location_flag";
	
		case -1479366685:
			return "settings";
	
		case -1471337442:
			return ":blip_sprite";
	
		case -1463903719:
			return "town_volumes";
	
		case -1463447134:
			return ":id";
	
		case -1462149998:
			return "location_flags";
	
		case -1450969535:
			return "anim";
	
		case -1442893430:
			return "peds";
	
		case -1438489730:
			return "town(id=%x)";
	
		case -1413825410:
			return "mission_data";
	
		case -1298580726:
			return "scenario_flags";
	
		case -1294273068:
			return "Location(%i)";
	
		case -1267680873:
			return "giver(%i)";
	
		case -1266254117:
			return "attributes";
	
		case -1255654531:
			return ":model";
	
		case -1248823782:
			return ":mission_type";
	
		case -1244566857:
			return ":dialogue_id";
	
		case -1211596176:
			return ":use";
	
		case -1207177750:
			return ":blip_style";
	
		case -1202322374:
			return "anti_grief_volumes";
	
		case -1188075274:
			return "Mission_Giver";
	
		case -1181812906:
			return "veg_mod(%i)";
	
		case -1175686941:
			return ":scale";
	
		case -1161401818:
			return ":location_type";
	
		case -1142735215:
			return "attachment";
	
		case -1119986744:
			return ":conditional";
	
		case -1099377300:
			return "invalid_scenario(%i)";
	
		case -1083767826:
			return "interiors";
	
		case -1047907201:
			return "weapon(%i)";
	
		case -1045571630:
			return "dialogue_type(type=%x)";
	
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
	
		case -1021330426:
			return "interaction_lockon";
	
		case -989277348:
			return "blip_data";
	
		case -969870146:
			return ":launch_radius_offline";
	
		case -944306928:
			return "mission(unlock=%x)";
	
		case -941621037:
			return ":attach_bone";
	
		case -904522836:
			return ":name";
	
		case -895584822:
			return "lanterns";
	
		case -879824208:
			return "mission_giver_creation_data";
	
		case -875013288:
			return ":playlist_name";
	
		case -862103290:
			return ":use_veg_mod";
	
		case -835870147:
			return "flags(%i)";
	
		case -816725755:
			return "ipl(%i)";
	
		case -809702995:
			return ":should_be_locked";
	
		case -779715008:
			return "flag";
	
		case -770038426:
			return "ped(%i)";
	
		case -750441052:
			return "scenarios";
	
		case -749877125:
			return ":honor_requirement";
	
		case -748173978:
			return ":destination_orientation";
	
		case -742165699:
			return "scenario_flag";
	
		case -733684727:
			return "volume_lock(%i)";
	
		case -702452069:
			return "prop";
	
		case -690423049:
			return "doors";
	
		case -678729477:
			return "Missions";
	
		case -665208900:
			return ":type";
	
		case -662059387:
			return "Location(%i)";
	
		case -642855470:
			return "location(%i)";
	
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
	
		case -586196356:
			return "name(%i)";
	
		case -578476660:
			return ":force_to_be_object";
	
		case -569428078:
			return "item";
	
		case -536214615:
			return ":prop_set_name";
	
		case -479537578:
			return "volume(script_volume_type=%x)";
	
		case -473520653:
			return "mission_giver_type(type=%x)";
	
		case -467924289:
			return "prop_sets";
	
		case -434046439:
			return ":door_id";
	
		case -351785645:
			return "ipls";
	
		case -347364204:
			return "nav_block_volume";
	
		case -346602855:
			return "locations";
	
		case -340432202:
			return "required_volume";
	
		case -328876172:
			return "volume(%i)";
	
		case -307865396:
			return "location";
	
		case -293519133:
			return "prop_set(%i)";
	
		case -279039872:
			return "volume_component";
	
		case -267638862:
			return ":is_breakable";
	
		case -255537257:
			return "lantern(%i)";
	
		case -236880317:
			return "string(%i)";
	
		case -209614658:
			return ":model_search_radius";
	
		case -175154863:
			return "string";
	
		case -155807419:
			return "Mission_Givers";
	
		case -150140702:
			return "mission_giver_data";
	
		case -146546566:
			return "volume_locks";
	
		case -134912699:
			return ":position";
	
		case -26782235:
			return "force_volume(%i)";
	
		case -3633128:
			return "veg_mod";
	
		case 41531735:
			return ":orientation";
	
		case 56746299:
			return "schedule";
	
		case 93270913:
			return ":blip";
	
		case 95610146:
			return "state";
	
		case 101270175:
			return ":anim_scene_name";
	
		case 107613027:
			return ":giver";
	
		case 135103436:
			return "name";
	
		case 155183949:
			return "blocking_object_flag(%i)";
	
		case 157340468:
			return "nav_block_volumes";
	
		case 164389658:
			return "prop_set";
	
		case 200716381:
			return "mission_flags";
	
		case 202835363:
			return "scenario(%i)";
	
		case 262797908:
			return "unlock(%i)";
	
		case 273544526:
			return ":ipl_group";
	
		case 333834761:
			return ":disable_scenario";
	
		case 334691246:
			return "hour(%i)";
	
		case 369580868:
			return "Player_Bounties";
	
		case 416600242:
			return "door";
	
		case 466723622:
			return "Locations";
	
		case 495975404:
			return ":script_volume_type";
	
		case 504293064:
			return "Dialogue";
	
		case 564321544:
			return ":prop_set_placement_type";
	
		case 568979268:
			return "invalid_scenario";
	
		case 590738432:
			return "warp_location(%i)";
	
		case 592206679:
			return "prop(%i)";
	
		case 600894625:
			return ":ipl_nav_mesh";
	
		case 644398018:
			return ":location";
	
		case 696574474:
			return "required_volume_type(type=%x)";
	
		case 699547230:
			return "Location";
	
		case 709191463:
			return "transition(%i)";
	
		case 728527958:
			return ":outfit";
	
		case 741518720:
			return "Mission_Giver(giver=%x)";
	
		case 766204040:
			return ":scenario_mapping";
	
		case 787092883:
			return "door_config(config=%x)";
	
		case 824485797:
			return "volume_component(%i)";
	
		case 825663396:
			return "ped(role=%x)";
	
		case 830686115:
			return "mission_type(type=%x)/mission";
	
		case 842085562:
			return ":unlock";
	
		case 888483612:
			return "mission_type(type=%x)";
	
		case 890539395:
			return ":spawn_position";
	
		case 891000470:
			return "mission_type";
	
		case 925148616:
			return "mission_giver_names";
	
		case 935565856:
			return "lantern";
	
		case 946618725:
			return ":value";
	
		case 957547265:
			return "script_created_scenarios";
	
		case 965995012:
			return "warp_location";
	
		case 966721050:
			return "attribute";
	
		case 976967808:
			return "warp_locations";
	
		case 992974374:
			return ":spawn_heading";
	
		case 1008523256:
			return "time_block";
	
		case 1034671917:
			return "props";
	
		case 1034986020:
			return "interior";
	
		case 1062084355:
			return "force_volumes";
	
		case 1068458324:
			return ":ipl_veg_mod";
	
		case 1071445036:
			return "setting";
	
		case 1083028949:
			return ":rotation";
	
		case 1089670230:
			return "mission(%i)";
	
		case 1091365066:
			return "mission_giver_name(type=%x)";
	
		case 1097539553:
			return "location_flag(%i)";
	
		case 1127626385:
			return ":attach_point";
	
		case 1141833051:
			return "mission";
	
		case 1142477451:
			return "volume";
	
		case 1153433438:
			return "dialogue";
	
		case 1154537543:
			return ":mission_name";
	
		case 1179867258:
			return "volumes";
	
		case 1196324698:
			return "Location(id=%x)";
	
		case 1203863120:
			return "map_props";
	
		case 1211454712:
			return "scenario";
	
		case 1219330971:
			return "conditional_anims";
	
		case 1225419284:
			return ":weapon";
	
		case 1241889488:
			return "veg_flag";
	
		case 1250184037:
			return "blocking_object_flags";
	
		case 1269397350:
			return "name(name_type=%x)";
	
		case 1269504651:
			return ":blip_region";
	
		case 1280983896:
			return "required_volumes_types";
	
		case 1282514153:
			return "transition";
	
		case 1319079466:
			return ":launch_radius_online";
	
		case 1323614307:
			return ":snap_to";
	
		case 1371816784:
			return "volume";
	
		case 1382238315:
			return ":gender";
	
		case 1392091586:
			return "interior(%i)";
	
		case 1393764479:
			return "scenario";
	
		case 1417063580:
			return ":auto_close_rate";
	
		case 1465961145:
			return "door(%i)";
	
		case 1468744908:
			return "mission(%i):unlock";
	
		case 1475807964:
			return "setting(%i)";
	
		case 1489424180:
			return ":dialogue_star_handle";
	
		case 1499632451:
			return "strings";
	
		case 1519769314:
			return ":valid_location";
	
		case 1537295589:
			return "veg_flag(%i)";
	
		case 1582509135:
			return ":scenario_author_type";
	
		case 1611867516:
			return ":volume_name";
	
		case 1624339917:
			return "ped";
	
		case 1635370648:
			return "Location(location=%x)";
	
		case 1649401908:
			return ":type";
	
		case 1651578691:
			return ":document";
	
		case 1656869860:
			return ":float";
	
		case 1672605872:
			return ":launch_coords";
	
		case 1708896805:
			return "scene";
	
		case 1772846069:
			return "giver";
	
		case 1772867250:
			return ":scenario_prop";
	
		case 1773322216:
			return "weapon";
	
		case 1774314862:
			return "force_volume";
	
		case 1781322358:
			return "veg_mods";
	
		case 1781673553:
			return "Mission_Giver(%i)";
	
		case 1798123698:
			return ":flag";
	
		case 1811646877:
			return ":texture";
	
		case 1857771831:
			return ":loadout";
	
		case 1862983441:
			return "Use_Contexts";
	
		case 1887179278:
			return ":unlock_group";
	
		case 1888618008:
			return ":inventory_item";
	
		case 1915528396:
			return "flag(%i)";
	
		case 1915534289:
			return "time_block(%i)";
	
		case 1949355378:
			return ":origin";
	
		case 1990527907:
			return ":blip_style_close";
	
		case 2012255077:
			return "state(%i)";
	
		case 2016458991:
			return "veg_mod_data(type=%x)";
	
		case 2035135006:
			return "giver_schedule";
	
		case 2038044382:
			return "anim(%i)";
	
		case 2063500509:
			return "mission_type(%i)";
	
		case 2064288322:
			return "volume";
	
		case 2080739522:
			return "nav_block_volume(%i)";
	
		default:
		
	}

	return "";
}

int func_339(int iParam0, int iParam1) // Position - 0xBDDF Hash - 0xE1D12727 ^0x3B1ED9F
{
	switch (iParam0)
	{
		case 0:
			return -792947925;
	
		case 1:
			return -1427946892;
	
		case 2:
			return 408367626;
	
		case 3:
			return -1622280771;
	
		case 4:
			return 1394196983;
	
		case 5:
			return 2016265965;
	
		case 6:
			return 135054243;
	
		case 7:
			return -276973166;
	
		case 8:
			return 218782838;
	
		case 9:
			return 1811778263;
	
		case 10:
			return -1182771454;
	
		case 11:
			return 33417155;
	
		case 12:
			return 12932893;
	
		case 13:
			return 767213493;
	
		case 14:
			return -2017210649;
	
		case 15:
			return 581202040;
	
		case 16:
			return 2062917018;
	
		case 17:
			return -620047125;
	
		case 18:
			return -1250873360;
	
		case 19:
			return 154896618;
	
		case 20:
			return -371275865;
	
		case 21:
			return 1005476533;
	
		case 22:
			return 1957572717;
	
		case 23:
			return 2125319032;
	
		case 24:
			return -1581105240;
	
		case 25:
			return -667693420;
	
		case 26:
			return -1523280739;
	
		case 27:
			return 1937201256;
	
		case 28:
			return 2002802057;
	
		case 29:
			return 938696127;
	
		case 30:
			return 924791973;
	
		case 31:
			return -1029131400;
	
		case 32:
			return -118633223;
	
		case 33:
			return -951023588;
	
		case 34:
			return 1571312404;
	
		case 35:
			return 1217673812;
	
		case 36:
			return 499583568;
	
		case 37:
			return 1828532652;
	
		case 38:
			return 54969057;
	
		case 39:
			return -1969117434;
	
		case 40:
			return -1368219331;
	
		case 41:
			return -151415096;
	
		case 42:
			return 1570262717;
	
		case 43:
			return -419812745;
	
		case 44:
			return 1134292740;
	
		case 45:
			return -662147553;
	
		case 46:
			return -1445468930;
	
		case 47:
			return 327661882;
	
		case 48:
			return 314220799;
	
		case 49:
			return 402983180;
	
		case 50:
			return -1287008399;
	
		case 51:
			return 460561235;
	
		case 52:
			return -377576419;
	
		case 53:
			return -1418408851;
	
		case 54:
			return -1592717000;
	
		case 55:
			return -1108141625;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

char* func_340(int iParam0) // Position - 0xC112 Hash - 0xD64B00E9 ^0x686B4B8
{
	switch (iParam0)
	{
		case -2017210649:
			return "mission(unlock=%x)";
	
		case -1969117434:
			return ":mission_name";
	
		case -1622280771:
			return "string";
	
		case -1592717000:
			return ":min_posse_members";
	
		case -1581105240:
			return "map(%i)";
	
		case -1523280739:
			return "mission_type_flags(type=%x)";
	
		case -1445468930:
			return ":honor_requirement";
	
		case -1427946892:
			return "mission";
	
		case -1418408851:
			return ":region_name";
	
		case -1368219331:
			return ":mission_description";
	
		case -1287008399:
			return ":base_id";
	
		case -1250873360:
			return "string(%i)";
	
		case -1182771454:
			return "hour";
	
		case -1108141625:
			return ":hour";
	
		case -1029131400:
			return "unavailable_hours";
	
		case -951023588:
			return "prerequisites";
	
		case -792947925:
			return "mission_type";
	
		case -667693420:
			return "map(type=%x)";
	
		case -662147553:
			return ":description";
	
		case -620047125:
			return "strings";
	
		case -419812745:
			return ":type";
	
		case -377576419:
			return ":region_id";
	
		case -371275865:
			return "mission_flags(%i)";
	
		case -276973166:
			return "mission_type_flags";
	
		case -151415096:
			return ":dialogue_id";
	
		case -118633223:
			return "hour(%i)";
	
		case 12932893:
			return "mission_type(type=%x)";
	
		case 33417155:
			return "Net_Gun_For_Hire_Missions";
	
		case 54969057:
			return ":award";
	
		case 135054243:
			return "map";
	
		case 154896618:
			return "mission_flags(type=%x)";
	
		case 218782838:
			return "mission_type_flag";
	
		case 314220799:
			return ":hash";
	
		case 327661882:
			return ":anim_scene_id";
	
		case 402983180:
			return ":id";
	
		case 408367626:
			return "mission_flag";
	
		case 460561235:
			return ":item";
	
		case 499583568:
			return ":unlock";
	
		case 581202040:
			return "mission(%i)";
	
		case 767213493:
			return "mission_type(%i)";
	
		case 924791973:
			return "stat(%i)";
	
		case 938696127:
			return "stats";
	
		case 1005476533:
			return "mission_flag(%i)";
	
		case 1134292740:
			return ":name";
	
		case 1217673812:
			return ":unlock_group";
	
		case 1394196983:
			return "mission_flags";
	
		case 1570262717:
			return ":flag";
	
		case 1571312404:
			return "prerequisite(%i)";
	
		case 1811778263:
			return "stat";
	
		case 1828532652:
			return ":unlock_flow";
	
		case 1937201256:
			return "mission_type_flags(%i)";
	
		case 1957572717:
			return "string(type=%x)";
	
		case 2002802057:
			return "mission_type_flag(%i)";
	
		case 2016265965:
			return "prerequisite";
	
		case 2062917018:
			return "mission_data";
	
		case 2125319032:
			return "mappings";
	
		default:
		
	}

	return "";
}

int func_341(Player plParam0) // Position - 0xC3FF Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1138673[plParam0 /*56*/];
}

int func_342(Player plParam0, int iParam1) // Position - 0xC40F Hash - 0x21BD3496 ^0xE77F6774
{
	int gangId;
	int i;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (func_343(iParam1))
		if (gangId == func_393(iParam1))
			return iParam1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (gangId == func_393(i))
			return i;
	}

	return -1;
}

BOOL func_343(int iParam0) // Position - 0xC45C Hash - 0xB95B8D72 ^0xB95B8D72
{
	return iParam0 >= 0 && iParam0 < 32;
}

void func_344(int iParam0) // Position - 0xC472 Hash - 0x992590FD ^0x4805CF01
{
	if (!func_343(iParam0))
		return;

	Global_1138673[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
	return;
}

BOOL func_345(Any* panParam0, Any anParam1) // Position - 0xC493 Hash - 0xCCFC442B ^0x99568B7A
{
	panParam0->f_2 = 1089670230;
	panParam0->f_3 = anParam1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
		return false;

	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	return true;
}

BOOL func_346(Any* panParam0, var uParam1) // Position - 0xC4C7 Hash - 0xD2EC530F ^0xF168B985
{
	int num;

	panParam0->f_2 = -1248823782;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam0))
		return false;

	if (num == 0)
		return false;

	*uParam1 = func_394(num);
	panParam0->f_2 = 842085562;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam0))
		return false;

	if (num == 0)
		return false;

	uParam1->f_1 = num;
	return true;
}

struct<2> func_347(var uParam0, int iParam1) // Position - 0xC525 Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_395(uParam0, &(Global_1072759.f_573), func_58(iParam1));
			break;
	
		case 3:
			num.f_1 = func_395(uParam0, &(Global_1072759.f_573.f_602), func_58(iParam1));
			break;
	
		case 4:
			num.f_1 = func_395(uParam0, &(Global_1072759.f_573.f_2104), func_58(iParam1));
			break;
	
		case 5:
			num.f_1 = func_395(uParam0, &(Global_1072759.f_573.f_12606), func_58(iParam1));
			break;
	
		case 6:
			num.f_1 = func_395(uParam0, &(Global_1072759.f_573.f_12908), func_58(iParam1));
			break;
	
		case 7:
			num.f_1 = func_395(uParam0, &(Global_1072759.f_573.f_15910), func_58(iParam1));
			break;
	
		case 8:
			num.f_1 = func_395(uParam0, &(Global_1072759.f_573.f_16512), func_58(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_189();

	return num;
}

BOOL func_348(var uParam0, int iParam1) // Position - 0xC64B Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_349(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC65B Hash - 0x2529BD3C ^0x2529BD3C
{
	*uParam2 = func_324(func_323(uParam0));
	*uParam3 = func_396(func_325(*uParam2), func_179(uParam0));
	return;
}

Vector3 func_350(int iParam0, int iParam1) // Position - 0xC688 Hash - 0xF9603F7A ^0xA6B0FE66
{
	int num;

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	num = func_397(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_3;
}

BOOL func_351(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xC6B5 Hash - 0x9BC890AF ^0xDF6320E0
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

int func_352(int iParam0) // Position - 0xC6E0 Hash - 0xEA791A51 ^0x88D70FF
{
	return Global_1110244.f_3667[iParam0 /*7*/].f_1;
}

BOOL func_353(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0xC6F5 Hash - 0x2A012EDD ^0x630AB104
{
	var unk;
	int num;
	var unk2;

	unk = uParam0.f_1;
	num = func_354(uParam5->f_2);

	if (!func_351(uParam0, &(uParam0.f_1), 2062917018, 0, 0, 1))
		return 0;

	uParam5->f_4[0] = func_398(uParam0, -1592717000, 0, false, -1);
	uParam5->f_4[7] = func_400(uParam0, 327661882, bParam6 && func_399(num) != 7);
	uParam5->f_4[6] = func_400(uParam0, -151415096, bParam6 && func_399(num) != 7);
	uParam5->f_4[5] = func_400(uParam0, -1969117434, bParam6);
	uParam5->f_4[8] = func_400(uParam0, -377576419, false);
	uParam5->f_4[9] = func_400(uParam0, -1418408851, false);
	uParam0.f_1 = unk;
	func_401(uParam0, uParam5);
	uParam0.f_1 = unk;
	func_402(uParam0, uParam5);
	*uParam5 = { func_347(uParam5->f_2.f_1, func_403(num)) };
	uParam5->f_31.f_1 = func_404(num, uParam5->f_2.f_1);
	uParam5->f_31 = func_405(num, uParam5->f_2.f_1);
	func_406(func_403(num), uParam5->f_2.f_1, &unk2);
	uParam5->f_4[1] = unk2;
	uParam5->f_4[2] = unk2.f_2;
	uParam5->f_4[3] = unk2.f_1;
	uParam5->f_4[4] = unk2.f_3;
	return 1;
}

int func_354(int iParam0) // Position - 0xC85B Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

var func_355(int iParam0) // Position - 0xC86E Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_407(iParam0);
}

int func_356(int iParam0) // Position - 0xC87C Hash - 0x7647021A ^0xF0097466
{
	return Global_1114893[iParam0 /*70*/].f_1;
}

int func_357(var uParam0) // Position - 0xC88E Hash - 0xBEA42E2F ^0xBEA42E2F
{
	if (func_31(*uParam0))
		return 0;

	return 1;
}

int func_358(int iParam0, int iParam1) // Position - 0xC8A6 Hash - 0x584577C3 ^0x584577C3
{
	Hash unlockHash;

	if (!func_257())
		return 0;

	if (!func_408(iParam0))
		return 15;

	unlockHash = func_409(iParam0);

	if (unlockHash == 0)
		return 19;

	if (!func_410(iParam1, 2))
		if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
			return 18;

	if (!func_410(iParam1, 1))
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
			return 17;

	return 0;
}

int func_359(var uParam0, int iParam1) // Position - 0xC911 Hash - 0x3EA653F1 ^0x24C426F7
{
	if (uParam0->f_2.f_1 == 0)
		return 2;

	if (!func_410(iParam1, 4))
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_2.f_1))
			return 4;

	if (!func_410(iParam1, 8))
		if (!UNLOCK::UNLOCK_IS_VISIBLE(uParam0->f_2.f_1))
			return 3;

	return 0;
}

int func_360(var uParam0, int iParam1, var uParam2, int iParam3) // Position - 0xC963 Hash - 0x3DD80C50 ^0xD6EA35E7
{
	if (func_410(iParam3, 16))
		return 0;

	if (!func_257())
		return 0;

	if (func_295(uParam0->f_2, 1))
		return 0;

	if (func_411(uParam2, iParam1))
		return 0;

	return 5;
}

int func_361(var uParam0, int iParam1) // Position - 0xC9A6 Hash - 0x8118BB26 ^0xEA41F6F1
{
	int offset;

	if (func_410(iParam1, 16384))
		return 0;

	offset = func_128(func_136());

	if (MISC::IS_BIT_SET(uParam0->f_25.f_2, offset))
		return 14;

	return 0;
}

int func_362(int iParam0, int iParam1) // Position - 0xC9DD Hash - 0xE226A2E6 ^0x42D801E5
{
	Any gangId;
	Player player;

	if (func_410(iParam1, 1024))
		return 0;

	if (!func_408(iParam0))
		return 15;

	if (!func_413(func_412(iParam0)))
		return 0;

	player = PLAYER::PLAYER_ID();
	gangId = GANG::NETWORK_GET_GANG_ID(player);

	if (GANG::NETWORK_GET_GANG_LEADER(gangId) != player)
		return 28;

	return 0;
}

int func_363(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0xCA35 Hash - 0xBD5461CC ^0x2883EC15
{
	Player gangLeader;

	if (!func_408(iParam1))
		return 15;

	if (!func_257())
		return 0;

	if (func_410(iParam3, 32))
		return 0;

	if (func_295(uParam0->f_2, 1))
		return 0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam2))
		return 23;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam2))
		return 24;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(iParam2);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return 29;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return 30;

	if (func_414(gangLeader, iParam1))
		return 16;

	return 0;
}

int func_364(var uParam0, int iParam1, int iParam2) // Position - 0xCACC Hash - 0x3692A34E ^0x24AAEF44
{
	Player gangLeader;

	if (!func_238(uParam0->f_2))
		return 21;

	if (!func_257())
		return 0;

	if (func_410(iParam2, 64))
		return 0;

	if (func_295(uParam0->f_2, 1))
		return 0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam1))
		return 23;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam1))
		return 24;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(iParam1);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return 29;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return 30;

	if (func_415(gangLeader, uParam0->f_2))
		return 22;

	return 0;
}

int func_365(int iParam0, int iParam1, int iParam2) // Position - 0xCB67 Hash - 0x8ED38628 ^0x3C38B632
{
	if (iParam1 == -1)
	{
		iParam1 = func_416(iParam0);
	
		if (iParam1 == -1)
			return 26;
	}

	if (func_417(iParam1) != 0)
	{
		if (func_410(iParam2, 2048))
			return 0;
	
		return 25;
	}

	return 0;
}

int func_366(int iParam0) // Position - 0xCBA8 Hash - 0x1D08CB9B ^0x5038167F
{
	Player gangLeader;

	if (!func_257())
		return 0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
		return 23;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam0))
		return 24;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return 29;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return 30;

	if (func_31(Global_1056554[gangLeader /*491*/].f_2))
		return 6;

	return 0;
}

int func_367(int iParam0, var uParam1, int iParam2) // Position - 0xCC19 Hash - 0xF843A44A ^0xD0EA81EF
{
	Player gangLeader;
	int num;

	if (func_410(iParam2, 256))
		return 0;

	if (uParam1->f_31.f_1 == joaat("NONE"))
		return 0;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(iParam0);

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
			num = func_418(gangLeader);
		else
			return 30;
	else
		return 29;

	if (num == 0)
		return 31;

	switch (uParam1->f_31.f_1)
	{
		case joaat("positive"):
			if (num != 1)
				return 7;
			break;
	
		case joaat("negative"):
			if (num != 2)
				return 8;
			break;
	
		default:
			break;
	}

	return 0;
}

int func_368(var uParam0, int iParam1, int iParam2) // Position - 0xCCB7 Hash - 0x74433E50 ^0x6239D5BF
{
	if (func_410(iParam2, 512))
		return 0;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iParam1) < uParam0->f_4[0])
		return 27;

	return 0;
}

int func_369(var uParam0, int iParam1) // Position - 0xCCE5 Hash - 0x5A81C447 ^0xF61E880F
{
	var unk;
	int i;
	BOOL flag;
	BOOL flag2;

	if (func_410(iParam1, 128))
		return 0;

	if (func_295(uParam0->f_2, 1))
		return 0;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_4 = 10;
	unk.f_15 = 4;
	unk.f_15.f_5 = 4;
	unk.f_25 = 1;
	unk.f_28 = 2;
	unk.f_28.f_1 = -1;
	unk.f_28.f_1.f_1 = -1;
	unk.f_31 = joaat("NONE");
	unk.f_31.f_1 = joaat("NONE");
	func_419(&unk);

	if (!func_31(unk))
		return 0;

	for (i = 0; i <= 3; i = i + 1)
	{
		flag = unk.f_15[i] || unk.f_15.f_5[i];
	
		if (flag == false)
		{
		}
		else
		{
			flag2 = uParam0->f_15.f_5[i] && flag;
		
			if (flag2 != false)
				return 9;
		}
	}

	return 0;
}

int func_370(var uParam0, int iParam1) // Position - 0xCDD7 Hash - 0x5EF4D67C ^0x5C840ABE
{
	int numReservedMissionPeds;
	int maxNumNetworkPeds;

	if (func_410(iParam1, 4096))
		return 0;

	if (uParam0->f_4[1] > 0)
	{
		maxNumNetworkPeds = NETWORK::GET_MAX_NUM_NETWORK_PEDS();
		numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
	
		if (maxNumNetworkPeds - numReservedMissionPeds < uParam0->f_4[1])
			return 10;
	}

	if (uParam0->f_4[2] > 0)
	{
		maxNumNetworkPeds = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
		numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
	
		if (maxNumNetworkPeds - numReservedMissionPeds < uParam0->f_4[2])
			return 11;
	}

	if (uParam0->f_4[3] > 0)
	{
		maxNumNetworkPeds = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
		numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
	
		if (maxNumNetworkPeds - numReservedMissionPeds < uParam0->f_4[3])
			return 12;
	}

	if (uParam0->f_4[4] > 0)
	{
		maxNumNetworkPeds = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
		numReservedMissionPeds = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	
		if (maxNumNetworkPeds - numReservedMissionPeds < uParam0->f_4[4])
			return 13;
	}

	return 0;
}

int func_371(int iParam0, int iParam1) // Position - 0xCEA0 Hash - 0x833E46FC ^0x8AF4CDFC
{
	Player gangLeader;

	if (iParam0 == 0)
		return 23;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return 29;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return 30;

	if (func_420(gangLeader))
		return 44;

	return 0;
}

int func_372(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xCEE8 Hash - 0x288AD029 ^0xAAE91CDA
{
	var unk;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	int num;
	int i;
	Vector3 vector;

	if (!func_408(iParam3))
		return 15;

	if (!func_421(iParam4))
		return 20;

	unk = { func_306(iParam4) };
	flag2 = func_422(iParam1, 536870912);

	if (func_241(&(uParam0->f_25), joaat("REQUIRES_PLAYER_TARGET")) || func_241(&(uParam0->f_25), joaat("REQUIRES_POSSE_TARGET")))
		if (!func_423(iParam2, unk, flag))
			return 33;

	hash = func_179(*uParam0);
	num = func_424(uParam0->f_2, hash);

	if (!flag2)
	{
		for (i = 0; i < num; i = i + 1)
		{
			vector = { func_425(uParam0->f_2, hash, i) };
		
			if (_IS_NULL_VECTOR(vector))
			{
			}
			else if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vector, 20f, false, 0, joaat("net_train")))
			{
				return 34;
			}
		}
	}

	return 0;
}

int func_373(var uParam0, int iParam1) // Position - 0xCFC7 Hash - 0x47994D53 ^0xB681C61C
{
	Hash hash;
	int num;
	BOOL flag;
	int i;
	Vector3 vector;

	hash = func_179(*uParam0);
	num = func_424(uParam0->f_2, hash);
	flag = func_422(iParam1, 536870912);

	if (!flag)
	{
		for (i = 0; i < num; i = i + 1)
		{
			vector = { func_425(uParam0->f_2, hash, i) };
		
			if (_IS_NULL_VECTOR(vector))
			{
			}
			else if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vector, 20f, false, 0, joaat("net_train")))
			{
				return 34;
			}
		}
	}

	return 0;
}

int func_374(var uParam0, int iParam1, int iParam2) // Position - 0xD046 Hash - 0x8B019741 ^0x79B8A2B7
{
	int num;
	int num2;
	Hash hash;
	BOOL flag;
	BOOL flag2;
	var unk;
	int num3;

	flag = func_410(iParam1, 1073741824);
	flag2 = func_410(iParam1, 536870912);

	if (func_410(iParam1, 8192))
		unk = { 0f, 0f, 0f };
	else
		unk = { func_426(GANG::NETWORK_GET_GANG_LEADER(iParam2)) };

	func_427(*uParam0, &num2, &hash);
	num3 = func_428(num2, hash, func_326(num2), unk, !flag, flag2, true, -1082130432);

	if (num3 != 0)
	{
		switch (num3)
		{
			case 1:
				num = 35;
				break;
		
			case 2:
				num = 37;
				break;
		
			case 3:
				num = 43;
				break;
		
			case 4:
				num = 34;
				break;
		
			case 5:
				num = 38;
				break;
		
			case 6:
				num = 42;
				break;
		
			case 7:
				num = 39;
				break;
		
			case 8:
				num = 40;
				break;
		
			case 11:
				num = 32;
				break;
		
			case 12:
				num = 36;
				break;
		
			case 15:
				num = 44;
				break;
		
			default:
				num = 41;
				break;
		}
	
		return num;
	}

	return 0;
}

BOOL func_375(int iParam0, int iParam1, var uParam2) // Position - 0xD161 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_429(iParam0, iParam1, &unk))
		func_430(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

var func_376(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0xD188 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_431() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_432());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_432());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_432());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_433(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_434(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_435(i) != 1)
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
					if (!func_436(player2))
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

BOOL func_377(Player plParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0xD51B Hash - 0x44A83BBE ^0x3034E5CA
{
	return BUILTIN::VDIST(func_426(plParam0), vParam1) <= fParam4;
}

BOOL func_378(Hash hParam0, Hash hParam1) // Position - 0xD534 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_246(hParam0, 0))
		return func_437(func_384(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_379(Hash hParam0, var uParam1, var uParam2) // Position - 0xD575 Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_380(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xD781 Hash - 0x90CCF0F4 ^0xA5F3D799
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

struct<4> func_381(BOOL bParam0) // Position - 0xD85F Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_234(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_387(923904168, func_438(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_387(923904168, func_438(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_387(923904168, func_438(bParam0), -740156546, false);
}

void func_382(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xD900 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_383(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xD91B Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_234(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

Hash func_384(Hash hParam0) // Position - 0xD940 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_385(Hash hParam0, int iParam1) // Position - 0xD94A Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<5> func_386(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xD964 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_438(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_247(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_443(hParam0, -1823706425))
			{
				unk = { func_387(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_443(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_387(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_387(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_443(hParam0, -1653629781))
			{
				unk = { func_387(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_442(bParam1) };
		
			switch (func_315(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_387(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_381(bParam1) };
		
			if (iParam2 && func_439(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_440(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_440(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_441(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_444(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_443(hParam0, -1653629781))
			{
				unk = { func_387(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

struct<4> func_387(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xDCD8 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_246(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_234(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

void func_388(Any* panParam0) // Position - 0xDD09 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_389(Any* panParam0, int iParam1) // Position - 0xDD1F Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_390() // Position - 0xDD56 Hash - 0x33EB0DBC ^0xEC692AA0
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

int func_391(int iParam0) // Position - 0xDD8E Hash - 0x3620388 ^0x3620388
{
	return func_445(iParam0) + 30;
}

void func_392(int iParam0, int iParam1) // Position - 0xDD9E Hash - 0x3FC44C33 ^0xD65D7FEF
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { unk };
	return;
}

int func_393(int iParam0) // Position - 0xDDEB Hash - 0x6AA34421 ^0x71F4922
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

int func_394(int iParam0) // Position - 0xDDFD Hash - 0x268EF4F6 ^0x268EF4F6
{
	int num;

	num = func_447(0, func_446() - 1, &iParam0);

	if (num == -1)
		return -1;

	return func_448(num);
}

int func_395(var uParam0, var uParam1, int iParam2) // Position - 0xDE24 Hash - 0x3B53E80C ^0x3B53E80C
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

int func_396(int iParam0, Hash hParam1) // Position - 0xDE79 Hash - 0xC5A091E0 ^0x1F65A4D4
{
	int num;
	int num2;

	num = -1;

	if (func_389(&num2, iParam0) && func_449(&num2, hParam1))
		num = func_450(iParam0) - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_397(int iParam0, int iParam1) // Position - 0xDEB3 Hash - 0xC12581FD ^0xC872D18E
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_4 + iParam1;
}

int func_398(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0xDED2 Hash - 0x94EA1083 ^0xE16D1CC2
{
	int num;

	uParam0.f_2 = iParam5;

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &uParam0))
		if (bParam7)
			return iParam8;

	return num;
}

int func_399(int iParam0) // Position - 0xDEF8 Hash - 0x7647021A ^0xBB7AE530
{
	return Global_1296644[iParam0 /*5*/].f_3;
}

var func_400(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6) // Position - 0xDF0A Hash - 0x1FEE5487 ^0x98EB49F2
{
	var unk;

	uParam0.f_2 = iParam5;
	!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0);
	return unk;
}

void func_401(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xDF26 Hash - 0x855CBF07 ^0x8447325E
{
	int i;
	int num;
	int j;
	int num2;
	var unk;
	int num3;
	var unk2;
	var unk3;
	int num4;

	num = func_451(1394196983, uParam0);
	unk2 = uParam0.f_1;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		uParam0.f_1 = unk2;
	
		if (!func_351(uParam0, &(uParam0.f_1), -371275865, i, 0, 1))
		{
		}
		else
		{
			unk3 = uParam0.f_1;
			num4 = func_452(uParam0);
			num2 = func_451(408367626, uParam0);
		
			for (j = 0; j <= num2 - 1; j = j + 1)
			{
				uParam0.f_1 = unk3;
			
				if (!func_351(uParam0, &(uParam0.f_1), 1005476533, j, 0, 1))
				{
				}
				else
				{
					unk = func_400(uParam0, 1570262717, true);
				
					switch (num4)
					{
						case joaat("destinations"):
							num3 = func_453(unk);
							break;
					
						case joaat("origins"):
							num3 = func_453(unk);
							break;
					
						case joaat("Flags"):
							num3 = func_301(unk, 1);
							break;
					
						default:
							break;
					}
				
					if (num3 == -1)
					{
					}
					else
					{
						switch (num4)
						{
							case joaat("destinations"):
								func_456(&(uParam5->f_15.f_5), num3);
								break;
						
							case joaat("origins"):
								func_456(&(uParam5->f_15), num3);
								break;
						
							case joaat("Flags"):
								func_455(&(uParam5->f_25), func_454(num3, 1));
								break;
						
							default:
								break;
						}
					}
				}
			}
		}
	}

	return;
}

void func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xE073 Hash - 0x4B937144 ^0xA342C34C
{
	int i;
	int num;
	int offset;
	var unk;

	if (!func_351(uParam0, &(uParam0.f_1), -1029131400, 0, 0, 0))
		return;

	unk = uParam0.f_1;
	num = func_451(-1182771454, uParam0);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		uParam0.f_1 = unk;
		offset = -1;
	
		if (!func_351(uParam0, &(uParam0.f_1), -118633223, i, 0, 1))
		{
		}
		else
		{
			offset = func_398(uParam0, -1108141625, 1, true, -1);
		
			if (offset < 0 || offset > 23)
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam5->f_25.f_2), offset);
			}
		}
	}

	return;
}

int func_403(int iParam0) // Position - 0xE118 Hash - 0x4BA16E95 ^0x7E63CAA9
{
	return func_458(func_457(iParam0, joaat("UNLOCK_GROUP"), 1));
}

int func_404(int iParam0, int iParam1) // Position - 0xE130 Hash - 0x33C225B6 ^0x33C225B6
{
	return func_459(iParam0, iParam1);
}

var func_405(int iParam0, int iParam1) // Position - 0xE140 Hash - 0x927AF001 ^0x29125E29
{
	var unk;
	var unk2;

	func_460(iParam0, iParam1, joaat("PRIMARY_START"), &unk, &unk2);
	return unk2;
}

void func_406(int iParam0, int iParam1, int* piParam2) // Position - 0xE15C Hash - 0x1567F1E0 ^0x3B80FEF
{
	var unk;

	if (!func_461(iParam0))
		return;

	if (func_429(iParam0, iParam1, &unk))
	{
		unk.f_2 = -733480474;
		!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam2, &unk);
		unk.f_2 = 492825771;
		!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(piParam2->f_1), &unk);
		unk.f_2 = -839279581;
		!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(piParam2->f_2), &unk);
		unk.f_2 = -640941103;
		!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(piParam2->f_3), &unk);
	}

	return;
}

var func_407(int iParam0) // Position - 0xE1DB Hash - 0x7647021A ^0xF1D27A30
{
	return Global_1296644[iParam0 /*5*/].f_2;
}

BOOL func_408(int iParam0) // Position - 0xE1ED Hash - 0xA43326DA ^0xA43326DA
{
	return iParam0 >= 0 && iParam0 < 36;
}

Hash func_409(int iParam0) // Position - 0xE203 Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1119235[iParam0 /*35*/];
}

BOOL func_410(int iParam0, int iParam1) // Position - 0xE213 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_411(var uParam0, int iParam1) // Position - 0xE222 Hash - 0x9EDEFA43 ^0x9EDEFA43
{
	return func_302(uParam0, iParam1, 3);
}

var func_412(int iParam0) // Position - 0xE233 Hash - 0x7647021A ^0xF0097466
{
	return Global_1119235[iParam0 /*35*/].f_1;
}

BOOL func_413(var uParam0) // Position - 0xE245 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_414(Player plParam0, int iParam1) // Position - 0xE24E Hash - 0xFF4995B5 ^0x75DF1C42
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	if (iParam1 < 0 || iParam1 >= 36)
		return false;

	return func_462(plParam0, iParam1);
}

BOOL func_415(Player plParam0, int iParam1) // Position - 0xE290 Hash - 0xE109C14D ^0xC801517
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	if (!func_238(iParam1))
		return false;

	return func_463(plParam0, iParam1);
}

int func_416(int iParam0) // Position - 0xE2CA Hash - 0x62CD18E0 ^0x62CD18E0
{
	int i;

	if (iParam0 == 0)
		return -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (iParam0 == func_393(i))
			return i;
	}

	return -1;
}

int func_417(int iParam0) // Position - 0xE300 Hash - 0x1B04F1B9 ^0xCEC85F37
{
	return Global_1107816.f_33[iParam0 /*16*/].f_2;
}

int func_418(Player plParam0) // Position - 0xE314 Hash - 0x7647021A ^0xF737BB37
{
	return Global_1138673[plParam0 /*56*/].f_47;
}

void func_419(Any* panParam0) // Position - 0xE326 Hash - 0x645341F2 ^0xAD579B86
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &(Global_1110244.f_21.f_43.f_1), 33);
	return;
}

BOOL func_420(Player plParam0) // Position - 0xE340 Hash - 0x5243A98E ^0xE4BCD34A
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
		else if (func_464(1048576, playerFromGamerHandle))
		{
			return true;
		}
	}

	return false;
}

BOOL func_421(int iParam0) // Position - 0xE3C7 Hash - 0xDFBA3899 ^0xDFBA3899
{
	return iParam0 >= 0 && iParam0 < 62;
}

BOOL func_422(int iParam0, int iParam1) // Position - 0xE3DD Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_423(int iParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xE3EC Hash - 0x269BF525 ^0x1DB2B48E
{
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(player) == iParam0)
		{
		}
		else if (func_465(player))
		{
		}
		else if (!bParam4 && !func_466(player, uParam1))
		{
		}
		else
		{
			return true;
		}
	}

	return false;
}

int func_424(int iParam0, Hash hParam1) // Position - 0xE454 Hash - 0x2A6BE3E1 ^0xAA3F5213
{
	Any any;

	if (_IS_NULL_VECTOR(func_467(iParam0, hParam1)))
		return 0;

	if (!func_468(iParam0, &any, hParam1))
		return 1;

	any.f_2 = -146546566;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
		return 1;

	return DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1) + 1;
}

Vector3 func_425(int iParam0, Hash hParam1, int iParam2) // Position - 0xE4A8 Hash - 0x87DE822B ^0x502B8337
{
	var unk;
	var unk4;

	if (iParam2 == 0)
		return func_467(iParam0, hParam1);

	iParam2 = iParam2 - 1;

	if (!func_468(iParam0, &unk4, hParam1))
		return unk;

	unk4.f_2 = -146546566;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk4.f_1), &unk4))
		return unk;

	unk4.f_2 = -733684727;
	unk4.f_3 = iParam2;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk4.f_1), &unk4))
		return unk;

	unk4.f_2 = -134912699;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk, &unk4);
	return unk;
}

Vector3 func_426(Player plParam0) // Position - 0xE534 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_427(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xE548 Hash - 0xBEA78365 ^0xBEA78365
{
	*uParam2 = func_324(func_323(uParam0));
	*uParam3 = func_179(uParam0);
	return;
}

int func_428(int iParam0, Hash hParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0xE56A Hash - 0xBB30E22F ^0xBB30E22F
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

	if (!func_469())
		return 2;

	num2 = func_325(iParam0);
	num3 = func_396(num2, hParam1);

	if (num3 < 0 || num3 >= 55)
		return 11;

	if (!bParam7 && func_470(iParam0, num3, bParam8, &flag))
		if (flag)
			return 1;
		else
			return 4;

	if (func_471(num2, hParam1) && !bParam7)
	{
		unk = { func_472(num2, hParam1) };
		num4 = func_473(num2, num3);
	
		if (!func_474(num4, unk))
			return 5;
	}

	if (func_475(iParam2) == -1)
		return 6;

	if (iParam9 >= 0f && !_IS_NULL_VECTOR(vParam3))
	{
		vector = { func_350(iParam0, num3) };
	
		if (BUILTIN::VDIST(vParam3, vector) > iParam9)
			return 12;
	}

	if (func_476(iParam2))
	{
		num5 = func_477(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	
		if (!func_478(num5))
			return 13;
	
		if (func_479(num5))
			return 14;
	}

	if (func_420(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
		return 15;

	if (bParam6)
	{
		if (iParam2 != joaat("INTRO_MISSION") && func_480(func_189(), func_189(), false, bParam7))
			return 3;
	
		flag2 = false;
	
		if (!flag2)
		{
			unlockHash = func_481(iParam0, num3);
		
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				return 8;
		
			if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
				return 7;
		
			unlockHash2 = func_482(iParam0, num3);
		
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

BOOL func_429(int iParam0, int iParam1, Any* panParam2) // Position - 0xE741 Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_483(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_430(Any* panParam0, int iParam1, var uParam2) // Position - 0xE775 Hash - 0x59F43AD2 ^0xB9A366FE
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

int func_431() // Position - 0xE7EF Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_432() // Position - 0xE7FD Hash - 0x306ACA3A ^0x5F6F5589
{
	return "unnamed";
}

BOOL func_433(int iParam0) // Position - 0xE809 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_434(int iParam0) // Position - 0xE898 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_484(36, iParam0);
}

int func_435(int iParam0) // Position - 0xE8B6 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_436(Player plParam0) // Position - 0xE901 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_485(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_486(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_437(Hash hParam0, Hash hParam1) // Position - 0xE946 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_385(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

struct<4> func_438(BOOL bParam0) // Position - 0xE97C Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_234(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_387(joaat("character"), func_487(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_387(joaat("character"), func_487(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_387(joaat("character"), func_487(), joaat("SLOTID_NONE"), bParam0);
}

int func_439(Hash hParam0, BOOL bParam1) // Position - 0xEA1C Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_315(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_488();
		else
			return 1;

	return 0;
}

BOOL func_440(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xEA53 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_489(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_441(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xEA6E Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_490(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_442(BOOL bParam0) // Position - 0xEA8F Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_234(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_387(271701509, func_438(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_387(271701509, func_438(bParam0), 12999093, false);
}

BOOL func_443(Hash hParam0, Hash hParam1) // Position - 0xEAF9 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_315(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_491(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_444(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0xEB66 Hash - 0x113CD144 ^0x113CD144
{
	return func_492(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_445(int iParam0) // Position - 0xEB7C Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

int func_446() // Position - 0xEB88 Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_1110244.f_3667.f_938;
}

int func_447(int iParam0, int iParam1, var uParam2) // Position - 0xEB9A Hash - 0x4D6E9A17 ^0x4D6E9A17
{
	int num;

	if (iParam0 > iParam1)
		return -1;

	num = (iParam0 + iParam1) / 2;

	if (*uParam2 < Global_1110244.f_3667.f_729[num /*2*/])
		return func_447(iParam0, num - 1, uParam2);

	if (*uParam2 > Global_1110244.f_3667.f_729[num /*2*/])
		return func_447(num + 1, iParam1, uParam2);

	return num;
}

int func_448(int iParam0) // Position - 0xEC04 Hash - 0xC69036C ^0xCCA4B427
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

BOOL func_449(Any* panParam0, Hash hParam1) // Position - 0xEC1C Hash - 0x5E449B87 ^0xE170EA7B
{
	panParam0->f_2 = 775488648;
	panParam0->f_3 = hParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_450(int iParam0) // Position - 0xEC3D Hash - 0xE65AA95E ^0x2FD05C04
{
	int numChildren;
	Any any;

	numChildren = 0;

	if (func_389(&any, iParam0))
	{
		any.f_2 = 866900867;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
			numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
	}

	return numChildren;
}

int func_451(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xEC77 Hash - 0xA2E573D2 ^0x26B29024
{
	uParam1.f_2 = iParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&uParam1);
}

var func_452(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xEC8B Hash - 0x86D25DFB ^0x407168DD
{
	return func_400(uParam0, -419812745, true);
}

int func_453(var uParam0) // Position - 0xECA1 Hash - 0xC71943CF ^0xF46CC329
{
	int num;
	int numNodes;
	int num2;

	num = Global_1072759.f_28418[30 /*4*/].f_3;
	num.f_2 = 0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num);
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&num);
	num.f_2 = 2;
	num.f_3 = uParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num);
	num2 = DATAFILE::_0xE13634BB6BAF0734(num, num.f_1);
	return numNodes - num2 - 1;
}

int func_454(int iParam0, int iParam1) // Position - 0xECF9 Hash - 0xE1D12727 ^0x9BA237D1
{
	switch (iParam0)
	{
		case 0:
			return joaat("MULTI_GANG");
	
		case 1:
			return joaat("INSTANCED");
	
		case 2:
			return joaat("HAS_INTRO_CUTSCENE");
	
		case 3:
			return joaat("HAS_FLOW_FADE");
	
		case 4:
			return -1086220725;
	
		case 5:
			return -775927147;
	
		case 6:
			return -2001405328;
	
		case 7:
			return 1042373141;
	
		case 8:
			return joaat("NO_PVP");
	
		case 9:
			return joaat("MULTIPLE_OBJECTIVES_1");
	
		case 10:
			return joaat("MULTIPLE_OBJECTIVES_2");
	
		case 11:
			return joaat("MULTIPLE_OBJECTIVES_3");
	
		case 12:
			return joaat("MULTIPLE_OBJECTIVES_4");
	
		case 13:
			return -1348549877;
	
		case 14:
			return -1040947274;
	
		case 15:
			return 1803795142;
	
		case 16:
			return joaat("REQUIRES_PLAYER_TARGET");
	
		case 17:
			return joaat("REQUIRES_POSSE_TARGET");
	
		case 18:
			return joaat("SETUP_MISSION_0");
	
		case 19:
			return joaat("SETUP_MISSION_1");
	
		case 20:
			return -399531147;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_455(var uParam0, int iParam1) // Position - 0xEE3E Hash - 0xFEAF17CB ^0xFEAF17CB
{
	func_493(uParam0, func_301(iParam1, 1), 1);
	return;
}

void func_456(var uParam0, int iParam1) // Position - 0xEE57 Hash - 0x4253B203 ^0x4253B203
{
	func_493(uParam0, iParam1, 4);
	return;
}

int func_457(int iParam0, int iParam1, int iParam2) // Position - 0xEE6B Hash - 0xBD363EA5 ^0x8BE702D3
{
	var unk;

	if (!func_494(iParam0))
		return 0;

	if (!func_495(&unk))
		return 0;

	if (!func_496(unk, &(unk.f_1), 13, 0, 0, 1))
		return 0;

	if (!func_496(unk, &(unk.f_1), 14, iParam0, 0, 1))
		return 0;

	if (!func_496(unk, &(unk.f_1), 22, 0, 0, 1))
		return 0;

	if (!func_496(unk, &(unk.f_1), 23, iParam1, 0, iParam2))
		return 0;

	return func_497(unk, 53, 1);
}

int func_458(int iParam0) // Position - 0xEF01 Hash - 0xF28FD492 ^0xF28FD492
{
	switch (iParam0)
	{
		case joaat("UNLOCK_GROUP__MISSION_UGC"):
			return 7;
	
		case joaat("UNLOCK_GROUP__MISSION_STORY"):
			return 2;
	
		case joaat("UNLOCK_GROUP__MISSION_FETCH"):
			return 4;
	
		case joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT"):
			return 6;
	
		case 634321112:
			return 8;
	
		case joaat("UNLOCK_GROUP__MISSION_MINIGAME"):
			return 5;
	
		case joaat("UNLOCK_GROUP__MISSION_PROCEDURAL"):
			return 3;
	
		default:
		
	}

	return -1;
}

int func_459(int iParam0, int iParam1) // Position - 0xEF59 Hash - 0xE3FA4D34 ^0xE5DE3BB0
{
	int num;
	var unk;
	int num2;

	if (!func_494(iParam0))
		return joaat("NONE");

	if (!func_495(&unk))
		return joaat("NONE");

	if (!func_496(unk, &(unk.f_1), 13, 0, 0, 1))
		return joaat("NONE");

	if (!func_496(unk, &(unk.f_1), 14, iParam0, 0, 1))
		return joaat("NONE");

	if (!func_496(unk, &(unk.f_1), 33, 0, 0, 0))
		return joaat("NONE");

	if (!func_496(unk, &(unk.f_1), 34, joaat("Honor"), 0, 0))
		return joaat("NONE");

	num = func_498(unk, 4);

	if (num != 1)
		return joaat("NONE");

	if (!func_496(unk, &(unk.f_1), 35, 0, 0, 1))
		return joaat("NONE");

	num2 = func_499(unk);

	if (iParam1 == 0)
	{
	}
	else if (func_496(unk, &(unk.f_1), 30, 0, 0, 0))
	{
		if (func_496(unk, &(unk.f_1), 31, iParam1, 0, 0))
			num2 = func_499(unk);
	}

	return num2;
}

int func_460(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4) // Position - 0xF082 Hash - 0x379D96CB ^0xB7E3FAAA
{
	var unk;

	if (!func_494(iParam0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}

	if (!func_495(&unk))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}

	if (!func_496(unk, &(unk.f_1), 13, 0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}

	if (!func_496(unk, &(unk.f_1), 14, iParam0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}

	if (!func_496(unk, &(unk.f_1), 28, 0, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}

	if (!func_496(unk, &(unk.f_1), 29, iParam2, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}

	*uParam3 = func_500(unk);
	*uParam4 = func_499(unk);

	if (iParam1 != 0)
	{
		if (func_496(unk, &(unk.f_1), 30, 0, 0, 0))
		{
			if (func_496(unk, &(unk.f_1), 31, iParam1, 0, 0))
			{
				*uParam3 = func_500(unk);
				*uParam4 = func_499(unk);
			}
		}
	}

	if (*uParam3 == 0)
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}

	return 1;
}

BOOL func_461(int iParam0) // Position - 0xF1C7 Hash - 0x5000025C ^0x5000025C
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

BOOL func_462(Player plParam0, int iParam1) // Position - 0xF206 Hash - 0x234F273A ^0x234F273A
{
	return func_302(&Global_1140466[plParam0 /*8*/], iParam1, 2);
}

BOOL func_463(Player plParam0, int iParam1) // Position - 0xF21D Hash - 0xC788B0CA ^0x653ABDE2
{
	return func_302(&(Global_1140466[plParam0 /*8*/].f_3), iParam1, 4);
}

BOOL func_464(int iParam0, Player plParam1) // Position - 0xF236 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_465(Player plParam0) // Position - 0xF262 Hash - 0x1ED0A69B ^0x698F2867
{
	int num;

	if (Global_1056554[plParam0 /*491*/].f_2 != -1)
		return true;

	num = func_501(plParam0);

	if (num == 2 || num == 1)
		return true;

	if (func_502(plParam0, 1))
		return true;

	if (func_503(1, plParam0))
		return true;

	return false;
}

BOOL func_466(Player plParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xF2B7 Hash - 0x35CD19E1 ^0x35CD19E1
{
	Vector3 vector;
	float num;
	float num2;
	float num3;

	vector = { func_426(plParam0) };

	if (!_IS_NULL_VECTOR(vParam1))
	{
		if (_IS_NULL_VECTOR(vector))
			return false;
	
		num = BUILTIN::VDIST(vector, vParam1);
		num2 = 1500f;
		num3 = 125f;
	
		if (num < num3)
			return false;
	
		if (num > num2)
			return false;
	}

	return true;
}

Vector3 func_467(int iParam0, Hash hParam1) // Position - 0xF319 Hash - 0x3CF164E8 ^0x7B7DF87B
{
	var unk;
	var unk4;

	if (!func_468(iParam0, &unk4, hParam1))
		return unk;

	unk4.f_2 = -134912699;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk, &unk4);
	return unk;
}

BOOL func_468(int iParam0, Any* panParam1, Hash hParam2) // Position - 0xF34C Hash - 0xD7D6455B ^0x65E9A63E
{
	int numChildren;
	int i;
	var unk;

	if (!func_504(iParam0, panParam1))
		return false;

	numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(*panParam1, panParam1->f_1);

	for (i = 0; i < numChildren; i = i + 1)
	{
		unk = { *panParam1 };
		unk.f_2 = 1089670230;
		unk.f_3 = i;
	
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
		}
		else
		{
			unk.f_2 = 1196324698;
			unk.f_3 = hParam2;
		
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
			{
			}
			else
			{
				*panParam1 = { unk };
				return true;
			}
		}
	}

	return false;
}

BOOL func_469() // Position - 0xF3D9 Hash - 0x286EE6DB ^0x286EE6DB
{
	if (func_29())
		return false;

	return true;
}

BOOL func_470(int iParam0, int iParam1, BOOL bParam2, var uParam3) // Position - 0xF3ED Hash - 0xF94E84C0 ^0xF94E84C0
{
	BOOL flag;
	var unk;
	float num;

	flag = func_505(iParam0, iParam1, 2);

	if (func_506(iParam0, iParam1, flag))
		return true;

	unk = { func_350(iParam0, iParam1) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num = func_507(func_325(iParam0), iParam1);

	if (bParam2 && func_505(iParam0, iParam1, 1) && func_508(unk, num))
	{
		*uParam3 = 1;
		return true;
	}

	return func_509(unk, num, flag);
}

BOOL func_471(int iParam0, Hash hParam1) // Position - 0xF470 Hash - 0xE159584F ^0x5F2380F1
{
	BOOL num;
	var unk;

	num = 0;

	if (func_389(&unk, iParam0) && func_449(&unk, hParam1))
		func_510(unk, -528314399, &num, false);

	return num;
}

Vector3 func_472(int iParam0, Hash hParam1) // Position - 0xF4A6 Hash - 0xBB89433 ^0xB676338C
{
	var unk;
	var unk4;

	if (func_389(&unk4, iParam0) && func_449(&unk4, hParam1))
		func_511(unk4, -370006557, &unk, true);

	return unk;
}

int func_473(int iParam0, int iParam1) // Position - 0xF4DB Hash - 0x2C69351D ^0xB92871CE
{
	int num;
	var unk;
	int num2;

	num = 0;

	if (func_389(&unk, iParam0))
		if (func_512(&unk, iParam1))
			func_513(unk, 1342438652, &num, false);

	num2 = 0;

	if (num != 0)
		num2 = func_514(num);

	return num2;
}

BOOL func_474(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xF520 Hash - 0xF2F6932E ^0xF2F6932E
{
	float num;
	float num2;
	Player player;
	Ped playerPed;
	float num3;
	int i;

	if (_IS_NULL_VECTOR(vParam1))
		return false;

	if (func_515(iParam0))
		return false;

	if (func_516(iParam0))
		return false;

	num = 5f;
	num2 = func_517(iParam0);

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
			
				if (num3 < num2 && !func_518(iParam0))
					return false;
			}
		}
	}

	return true;
}

int func_475(int iParam0) // Position - 0xF620 Hash - 0x78B72B7B ^0x78B72B7B
{
	int i;

	if (!func_519(iParam0))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (func_520(i))
			return i;
	}

	return -1;
}

BOOL func_476(int iParam0) // Position - 0xF658 Hash - 0x5000025C ^0x5000025C
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

int func_477(Player plParam0) // Position - 0xF685 Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

BOOL func_478(int iParam0) // Position - 0xF6B5 Hash - 0xED5061BA ^0xED5061BA
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

BOOL func_479(int iParam0) // Position - 0xF6D4 Hash - 0xB67AACE8 ^0xDE4546F5
{
	if (!func_478(iParam0))
		return false;

	return func_521(iParam0) && Global_1141332[iParam0 /*27*/].f_18.f_1 != 0;
}

BOOL func_480(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xF703 Hash - 0x6FEF2465 ^0xA07C994A
{
	var unk;
	var unk3;

	if (!bParam4)
		if (func_29())
			return true;

	unk = -1;
	unk.f_1 = -1;

	if (!func_31(uParam2))
		unk = { func_522() };
	else
		unk = { uParam2 };

	if (!bParam5 && func_31(unk) && !func_173(unk, uParam0))
		return true;

	unk3 = { func_106() };

	if (func_31(unk3) && !func_31(unk3) || !func_173(uParam0, unk3))
		return true;

	return false;
}

Hash func_481(int iParam0, int iParam1) // Position - 0xF7AA Hash - 0x36CC74E2 ^0x36CC74E2
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_397(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/];
}

Hash func_482(int iParam0, int iParam1) // Position - 0xF7D1 Hash - 0x2A1363C ^0xF71B8764
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_397(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_1;
}

int func_483(int iParam0) // Position - 0xF7FA Hash - 0x5FB59AC3 ^0xE293EFF
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

BOOL func_484(int iParam0, int iParam1) // Position - 0xF96F Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_302(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_235())
		return func_302(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_302(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_485(Player plParam0) // Position - 0xF9E3 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_486(Player plParam0) // Position - 0xFA00 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_523(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_524(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

struct<4> func_487() // Position - 0xFA83 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_488() // Position - 0xFA8F Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_164(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_489(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xFAAC Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_246(hParam0, 0))
		return 0;

	if (!bParam7 && func_320(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_387(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_234(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_234(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_490(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xFB2B Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_234(false);
	*panParam1 = { func_387(hParam0, func_381(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_491(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0xFB70 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_492(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xFBA3 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_234(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_493(var uParam0, int iParam1, int iParam2) // Position - 0xFBDD Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

BOOL func_494(int iParam0) // Position - 0xFC10 Hash - 0x7EE3A984 ^0x7EE3A984
{
	return iParam0 > -1 && iParam0 < 83;
}

BOOL func_495(Any* panParam0) // Position - 0xFC26 Hash - 0x5AEEE194 ^0x97DC092A
{
	int fileHandle;
	var src;

	fileHandle = func_525();

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_496(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xFC5F Hash - 0x9BC890AF ^0xDF6320E0
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

int func_497(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0xFC8A Hash - 0xB88E8B1E ^0x998FC172
{
	var unk;

	uParam0.f_2 = iParam5;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0);
	return unk;
}

int func_498(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0xFCA5 Hash - 0xE9C3EF95 ^0x995DFE77
{
	uParam0.f_2 = iParam5;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&uParam0);
}

int func_499(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xFCB9 Hash - 0x36445EFD ^0x36445EFD
{
	return func_497(uParam0, 56, 1);
}

int func_500(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xFCCC Hash - 0x14B6DA76 ^0x14B6DA76
{
	return func_497(uParam0, 54, 1);
}

int func_501(Player plParam0) // Position - 0xFCDF Hash - 0x1A5EA313 ^0xF0BD3075
{
	Player player;

	if (!Global_1149432.f_5568)
		return 0;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641.f_2;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	player = plParam0;

	if (player < 0 || player >= 32)
		return 0;

	return Global_1101558[player /*38*/].f_33;
}

BOOL func_502(Player plParam0, int iParam1) // Position - 0xFD44 Hash - 0x6C1FDCCC ^0xBC4A67DB
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return func_526(Global_1297600[player /*87*/].f_86, iParam1);

	return false;
}

BOOL func_503(int iParam0, Player plParam1) // Position - 0xFD78 Hash - 0x15C7A206 ^0x5439E553
{
	if (plParam1 != 255)
		return Global_1155150[plParam1 /*30*/].f_18.f_10 && iParam0 != false;

	return Global_1149432.f_4787.f_10 && iParam0 != false;
}

BOOL func_504(int iParam0, Any* panParam1) // Position - 0xFDA9 Hash - 0x1ECCD027 ^0x9846BD7C
{
	int fileHandle;

	if (iParam0 == -1)
		return false;

	if (!func_527(iParam0))
		return false;

	fileHandle = func_528(iParam0);

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	*panParam1 = fileHandle;
	panParam1->f_2 = -678729477;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam1->f_1), panParam1))
		return false;

	return true;
}

BOOL func_505(int iParam0, int iParam1, int iParam2) // Position - 0xFE00 Hash - 0x4BDA638D ^0x27EF43B5
{
	int num;

	if (iParam0 == -1)
		return false;

	num = func_397(iParam0, iParam1);
	return func_526(Global_1245174.f_566[num /*7*/].f_2, iParam2);
}

BOOL func_506(int iParam0, int iParam1, BOOL bParam2) // Position - 0xFE2F Hash - 0x9ACEFA0F ^0x9ACEFA0F
{
	int i;
	var unk;
	float num;

	for (i = 0; i <= func_529(iParam0, iParam1) - 1; i = i + 1)
	{
		unk = { func_530(func_325(iParam0), iParam1, i) };
		num = func_531(func_325(iParam0), iParam1, i);
	
		if (_IS_NULL_VECTOR(unk))
			break;
	
		if (func_509(unk, num, bParam2))
			return true;
	}

	return false;
}

float func_507(int iParam0, int iParam1) // Position - 0xFE96 Hash - 0xA5DBD1AB ^0x9028ADD5
{
	var unk;
	var unk2;

	unk = Global_1901671.f_171.f_34;

	if (func_389(&unk2, iParam0) && func_512(&unk2, iParam1))
		func_532(unk2, -364402952, &unk, false);

	return unk;
}

BOOL func_508(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0xFED3 Hash - 0x286B9D71 ^0xEFDB0941
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

BOOL func_509(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0xFF20 Hash - 0x7DBD310D ^0xC8B4D81B
{
	int num;

	if (!bParam4)
		num = joaat("net_train");

	return VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam0, fParam3, false, 0, num);
}

int func_510(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL* pbParam6, BOOL bParam7) // Position - 0xFF43 Hash - 0x75EEBFEF ^0x4AB97CB1
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(pbParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

int func_511(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0xFF69 Hash - 0x75EEBFEF ^0x20737992
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_512(Any* panParam0, int iParam1) // Position - 0xFF8F Hash - 0x5E449B87 ^0x295D242D
{
	panParam0->f_2 = 333456427;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_513(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0xFFB0 Hash - 0x6EB69AE6 ^0xE9AB1EC1
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

int func_514(int iParam0) // Position - 0xFFE0 Hash - 0x69A88D2A ^0x69A88D2A
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

BOOL func_515(int iParam0) // Position - 0x10019 Hash - 0xB629DC5B ^0xB629DC5B
{
	return func_533(iParam0, 4);
}

BOOL func_516(int iParam0) // Position - 0x10028 Hash - 0x4AB2C3FA ^0x5B68BB9
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_11 == frameCount - 1)
		return true;

	return false;
}

float func_517(int iParam0) // Position - 0x10064 Hash - 0x2530E44E ^0x2530E44E
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

BOOL func_518(int iParam0) // Position - 0x100A3 Hash - 0x4AB2C3FA ^0xA98A8A06
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount - 1)
		return true;

	return false;
}

BOOL func_519(int iParam0) // Position - 0x100DF Hash - 0x8DB16628 ^0x36CCD5D6
{
	int num;

	num = func_534(iParam0);

	if (num != 0 && func_535(num))
		return false;

	if (iParam0 == joaat("INTRO_MISSION"))
		return func_536();

	return true;
}

BOOL func_520(int iParam0) // Position - 0x10117 Hash - 0xE49494BB ^0xE49494BB
{
	return Global_1225099[iParam0 /*28*/] == -1;
}

BOOL func_521(int iParam0) // Position - 0x10129 Hash - 0x25DCF1DD ^0x25DCF1DD
{
	int num;

	if (!func_478(iParam0))
		return false;

	num = func_537(iParam0);
	return num != 0 && num != 3;
}

struct<2> func_522() // Position - 0x10154 Hash - 0x46B5D72E ^0x46B5D72E
{
	return Global_1051268;
}

void func_523(Player plParam0) // Position - 0x10162 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_524(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_524(Player plParam0) // Position - 0x101CE Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

int func_525() // Position - 0x10209 Hash - 0x451321BF ^0xEF0A3B85
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

BOOL func_526(int iParam0, int iParam1) // Position - 0x1021E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_527(int iParam0) // Position - 0x1022D Hash - 0x48CA125B ^0x48CA125B
{
	int num;
	int num2;

	if (iParam0 == -1)
		return false;

	num = func_354(iParam0);
	num == -1;
	num2 = func_355(num);

	switch (num2)
	{
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

int func_528(int iParam0) // Position - 0x10272 Hash - 0x9FFB79A7 ^0x9FFB79A7
{
	var unk;
	int num;
	int num2;

	if (!func_527(iParam0))
		return unk;

	num = func_354(iParam0);
	num2 = func_355(num);

	switch (num2)
	{
		case 1:
			return func_538(3);
	
		case 2:
			return func_538(2);
	
		default:
		
	}

	return unk;
}

int func_529(int iParam0, int iParam1) // Position - 0x102BF Hash - 0xF57D12B3 ^0x18CEC7B5
{
	int num;

	if (iParam0 == -1)
		return -1;

	num = func_397(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_6;
}

Vector3 func_530(int iParam0, int iParam1, int iParam2) // Position - 0x102E8 Hash - 0x92C7FD1C ^0xBA5FB6A8
{
	var unk;
	var unk4;

	if (func_389(&unk4, iParam0) && func_512(&unk4, iParam1) && func_539(&unk4, iParam2))
		func_511(unk4, 1702777600, &unk, false);

	return unk;
}

float func_531(int iParam0, int iParam1, int iParam2) // Position - 0x1032A Hash - 0x4129E625 ^0x602FD3C3
{
	var unk;
	var unk2;

	unk = Global_1901671.f_171.f_35;

	if (func_389(&unk2, iParam0) && func_512(&unk2, iParam1) && func_539(&unk2, iParam2))
		func_532(unk2, -364402952, &unk, false);

	return unk;
}

int func_532(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float* pfParam6, BOOL bParam7) // Position - 0x10374 Hash - 0x75EEBFEF ^0x896914A8
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_533(int iParam0, int iParam1) // Position - 0x1039A Hash - 0x4B02EE0 ^0x4A2C2E8A
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_526(Global_1148618[i /*13*/][iParam0 /*4*/], iParam1))
			return 1;
	}

	return 0;
}

int func_534(int iParam0) // Position - 0x103E1 Hash - 0x802361CB ^0x802361CB
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

BOOL func_535(int iParam0) // Position - 0x1047F Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_536() // Position - 0x104A0 Hash - 0x16C45944 ^0x16C45944
{
	return func_540(func_30(0));
}

int func_537(int iParam0) // Position - 0x104B1 Hash - 0x49256A88 ^0x10462E79
{
	if (!func_478(iParam0))
		return 0;

	return Global_1142424.f_1[iParam0 /*63*/].f_3;
}

var func_538(int iParam0) // Position - 0x104D3 Hash - 0x229CA6A8 ^0xABF26A6F
{
	return Global_1110244.f_21.f_3.f_1[iParam0];
}

BOOL func_539(Any* panParam0, int iParam1) // Position - 0x104E9 Hash - 0x5E449B87 ^0xC5EA9978
{
	panParam0->f_2 = 1700129460;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_540(var uParam0, var uParam1) // Position - 0x1050A Hash - 0x213CF43D ^0x213CF43D
{
	return func_541(uParam0, 1, 4);
}

BOOL func_541(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1051C Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_31(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_542(iParam0);
	return num >= iParam2 && num <= iParam3;
}

int func_542(int iParam0, var uParam1) // Position - 0x10557 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_323(iParam0);

	return -1;
}

