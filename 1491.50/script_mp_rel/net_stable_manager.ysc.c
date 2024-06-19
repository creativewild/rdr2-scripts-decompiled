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

void main() // Position - 0x0 Hash - 0x93B0971E ^0x6F672613
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();

	while (!func_2(false, false))
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	func_4();
	return;
}

void func_1() // Position - 0x3F Hash - 0x63003AC4 ^0x5FBF26F9
{
	int gameTimer;
	int num;

	Global_1291939.f_3 = 0;
	gameTimer = MISC::GET_GAME_TIMER();
	func_5(32, -1);
	func_6();

	if (func_7())
		func_4();

	func_8(&Global_1289642);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1289642, 1, 50);
	!func_9(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1289642), 1, "g_mpStableHostData");
	num = func_10();

	if (func_11() && num > -1 && num < 32)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_1290252, &Global_1289643[num /*19*/], 19);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289643, 609, 51);
		!func_12(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1289643[0 /*19*/]), 609, "g_mpStablePlayerData");
		MISC::COPY_SCRIPT_STRUCT(&Global_1289643[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*19*/], &Global_1290252, 19);
	}
	else
	{
		func_13(&Global_1289643);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289643, 609, 51);
		!func_12(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1289643[0 /*19*/]), 609, "g_mpStablePlayerData");
	}

	if (!func_11())
		func_14(&Global_1290271);

	func_15(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(16);
	Global_1291939.f_3 = 1;
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x15B Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_3() // Position - 0x23B Hash - 0xEBF4846F ^0x4F3651A9
{
	int i;
	Player player;

	func_16();
	func_17();
	player = 255;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			func_18(player, i);
		}
	}

	return;
}

void func_4() // Position - 0x27F Hash - 0xBAC16685 ^0xB32D591A
{
	Global_1291939.f_3 = 0;
	func_19();
	return;
}

void func_5(int iParam0, int iParam1) // Position - 0x292 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_19();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_6() // Position - 0x2AF Hash - 0x1FABDECD ^0x67C342BC
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
			func_19();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_19();
					break;
			
				case 2:
					func_19();
					break;
			
				case 3:
					func_19();
					break;
			
				case 4:
					func_19();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_19();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_19();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_19();
	
		if (func_20() == 0)
			if (func_21())
				func_19();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_19();

	return 1;
}

BOOL func_7() // Position - 0x3C0 Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_8(int iParam0) // Position - 0x3EE Hash - 0x4918B04C ^0x4918B04C
{
	*iParam0 = 0;
	return;
}

BOOL func_9(int iParam0, int iParam1, char* sParam2) // Position - 0x3FA Hash - 0x4A2623DD ^0x4A2623DD
{
	return true;
}

int func_10() // Position - 0x403 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_11() // Position - 0x412 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

BOOL func_12(int iParam0, int iParam1, char* sParam2) // Position - 0x421 Hash - 0x4A2623DD ^0x4A2623DD
{
	return true;
}

void func_13(Any anParam0) // Position - 0x42A Hash - 0x7D3EE57A ^0x7D3EE57A
{
	int i;

	for (i = 0; i < *anParam0; i = i + 1)
	{
		func_22(&anParam0->[i /*19*/]);
	}

	return;
}

void func_14(var uParam0) // Position - 0x450 Hash - 0x9184056A ^0xE9BDBB98
{
	int i;

	*uParam0 = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		uParam0->f_1[i] = 0;
	}

	uParam0->f_10 = 0;
	func_23(&(uParam0->f_11));
	func_24(&(uParam0->f_814));
	func_25(&(uParam0->f_1105));
	func_26(&(uParam0->f_1152));
	func_27(&(uParam0->f_1161));
	func_28(&(uParam0->f_1162));
	uParam0->f_1639 = 0;
	func_29(&(uParam0->f_1640));
	func_30(&(uParam0->f_1660));
	func_31(&(uParam0->f_1666));
	return;
}

void func_15(BOOL bParam0) // Position - 0x4D3 Hash - 0x2B211437 ^0xE0D702E
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
					func_19();
					break;
			
				case 2:
					func_19();
					break;
			
				case 3:
					func_19();
					break;
			
				case 4:
					func_19();
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
			func_19();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_16() // Position - 0x59C Hash - 0x88000C63 ^0x6A816477
{
	BOOL flag;
	int num;
	BOOL flag2;

	if (Global_1289643[Global_1295666 /*19*/].f_9 & 1 != 0)
		Global_1289643[Global_1295666 /*19*/].f_13 = Global_1290271.f_11.f_51;
	else
		Global_1289643[Global_1295666 /*19*/].f_13 = -1;

	if (Global_1289643[Global_1295666 /*19*/].f_9 & 2 != 0)
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Global_1289643[Global_1295666 /*19*/].f_2, Global_1289643[Global_1295666 /*19*/].f_3, Global_1289643[Global_1295666 /*19*/].f_9 & 4 != 0, 0))
		{
			func_32(2);
			Global_1289643[Global_1295666 /*19*/].f_2 = 0;
			Global_1289643[Global_1295666 /*19*/].f_3 = -1;
		}
	}

	if (Global_1289643[Global_1295666 /*19*/].f_9 & 16 != 0)
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Global_1289643[Global_1295666 /*19*/].f_2, Global_1289643[Global_1295666 /*19*/].f_3, true, 0))
		{
			func_32(16);
			Global_1289643[Global_1295666 /*19*/].f_2 = 0;
			Global_1289643[Global_1295666 /*19*/].f_3 = -1;
		}
	}

	if (Global_1289643[Global_1295666 /*19*/].f_10 & 1 != 0)
		Global_1289643[Global_1295666 /*19*/].f_14 = Global_1290271.f_814.f_46;
	else
		Global_1289643[Global_1295666 /*19*/].f_14 = -1;

	if (Global_1289643[Global_1295666 /*19*/].f_10 & 8 != 0)
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Global_1289643[Global_1295666 /*19*/].f_4, Global_1289643[Global_1295666 /*19*/].f_5, Global_1289643[Global_1295666 /*19*/].f_10 & 16 != 0, 0))
		{
			func_33(8);
			Global_1289643[Global_1295666 /*19*/].f_4 = 0;
			Global_1289643[Global_1295666 /*19*/].f_5 = -1;
		}
	}

	if (func_34(54))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 262144;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 262144;

	if (func_34(55))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 256;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 256;

	if (func_34(56))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 512;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 512;

	if (func_34(57))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 64;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 64;

	if (func_34(58))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 32;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 32;

	if (func_34(59))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 128;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 128;

	if (func_34(60))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 1024;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 1024;

	if (func_34(61))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 2048;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 2048;

	if (func_34(67))
	{
		flag = true;
	
		if (Global_1290271.f_11.f_306 == 0)
			flag = false;
	
		if (flag && !SCRIPTS::DOES_THREAD_EXIST(Global_1290271.f_11.f_306))
			flag = false;
	
		if (flag && !SCRIPTS::IS_THREAD_ACTIVE(Global_1290271.f_11.f_306, false))
			flag = false;
	
		if (!flag)
		{
			Global_1290271.f_11.f_306 = 0;
			func_35(67);
		}
	}

	if (func_34(67))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 8;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 8;

	if (func_34(68))
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 16384;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 16384;

	if (Global_17418.f_55.f_61.f_602 & 262144 != 0)
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 | 8192;
	else
		Global_1289643[Global_1295666 /*19*/].f_9 = Global_1289643[Global_1295666 /*19*/].f_9 - Global_1289643[Global_1295666 /*19*/].f_9 & 8192;

	if (func_34(9) || func_34(10) || func_34(11) || func_34(12) || func_34(13))
	{
		if (func_34(9))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 1;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 1;
	
		if (func_34(10))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 2;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 2;
	
		if (func_34(11))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 4;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 4;
	
		if (func_34(12))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 8;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 8;
	
		if (func_34(13))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 16;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 16;
	}
	else
	{
		if (Global_17418.f_55.f_61.f_602 & 1 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 1;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 1;
	
		if (Global_17418.f_55.f_61.f_602 & 2 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 2;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 2;
	
		if (Global_17418.f_55.f_61.f_602 & 4 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 4;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 4;
	
		if (Global_17418.f_55.f_61.f_602 & 8 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 8;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 8;
	
		if (Global_17418.f_55.f_61.f_602 & 16 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 16;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 16;
	}

	num = Global_1289643[Global_1295666 /*19*/].f_11;
	flag2 = Global_1901671.f_701.f_35 && func_36();

	if (func_34(19) || func_34(20) || func_34(21) || func_34(22) || func_34(23) || flag2)
	{
		if (flag2 || func_34(19))
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 1;
		else
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 1;
	
		if (!flag2)
		{
			if (func_34(20))
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 2;
			else
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 2;
		
			if (func_34(21))
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 4;
			else
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 4;
		
			if (func_34(22))
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 8;
			else
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 8;
		
			if (func_34(23))
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 16;
			else
				Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 16;
		}
	}
	else
	{
		if (Global_17418.f_55.f_61.f_602 & 524288 != 0)
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 1;
		else
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 1;
	
		if (Global_17418.f_55.f_61.f_602 & 1048576 != 0)
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 2;
		else
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 2;
	
		if (Global_17418.f_55.f_61.f_602 & 2097152 != 0)
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 4;
		else
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 4;
	
		if (Global_17418.f_55.f_61.f_602 & 4194304 != 0)
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 8;
		else
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 8;
	
		if (Global_17418.f_55.f_61.f_602 & 8388608 != 0)
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 | 16;
		else
			Global_1289643[Global_1295666 /*19*/].f_11 = Global_1289643[Global_1295666 /*19*/].f_11 - Global_1289643[Global_1295666 /*19*/].f_11 & 16;
	}

	if (num != Global_1289643[Global_1295666 /*19*/].f_11)
		func_37();

	if (func_34(14) || func_34(15) || func_34(16) || func_34(17) || func_34(18))
	{
		if (func_34(14))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 32;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 32;
	
		if (func_34(15))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 64;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 64;
	
		if (func_34(16))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 128;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 128;
	
		if (func_34(17))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 256;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 256;
	
		if (func_34(18))
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 512;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 512;
	}
	else
	{
		if (Global_17418.f_55.f_61.f_602 & 32 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 32;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 32;
	
		if (Global_17418.f_55.f_61.f_602 & 64 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 64;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 64;
	
		if (Global_17418.f_55.f_61.f_602 & 128 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 128;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 128;
	
		if (Global_17418.f_55.f_61.f_602 & 256 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 256;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 256;
	
		if (Global_17418.f_55.f_61.f_602 & 512 != 0)
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 | 512;
		else
			Global_1289643[Global_1295666 /*19*/].f_8 = Global_1289643[Global_1295666 /*19*/].f_8 - Global_1289643[Global_1295666 /*19*/].f_8 & 512;
	}

	Global_1290271.f_1152.f_2 = Global_1290271.f_1152.f_2 + 1;
	Global_1290271.f_1152.f_2 = Global_1290271.f_1152.f_2 % 32;
	return;
}

void func_17() // Position - 0x15F2 Hash - 0xB35FB9A3 ^0x17607439
{
	int num;
	int i;

	func_38();

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_1290271.f_11.f_322 >= 32)
			Global_1290271.f_11.f_322 = 0;
	
		num = Global_1290271.f_11.f_322;
		func_39(num, &Global_1290271.f_11.f_516[num /*7*/], Global_1290271.f_11.f_802);
		func_40(num, &Global_1290271.f_11.f_323[num /*6*/], Global_1290271.f_11.f_802);
		Global_1290271.f_11.f_322 = Global_1290271.f_11.f_322 + 1;
	}

	Global_1290271.f_11.f_802 = 0;
	func_41();
	return;
}

void func_18(Player plParam0, int iParam1) // Position - 0x1690 Hash - 0xBFD166F7 ^0x8032CD11
{
	var unk;
	var unk5;
	Player player;
	Ped mountOwnedByPlayer;
	int num;
	Ped ped;
	int num2;
	int i;
	int num3;
	int j;
	BOOL flag;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return;

	player = PLAYER::PLAYER_ID();
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer) || ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer))
	{
		if (func_42(player, plParam0, -1))
			func_43(plParam0);
	
		return;
	}

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
	{
	}
	else
	{
		ped = PLAYER::PLAYER_PED_ID();
		num2 = 0;
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			num2 = PED::_0x4642182A298187D0(ped, 5, &unk, 4, 2);
		
			if (num2 == 0)
				num2 = PED::_0x4642182A298187D0(ped, 7, &unk, 4, 2);
		}
	
		if (num2 != 0)
		{
			if (func_44(mountOwnedByPlayer, &unk))
			{
				if (!func_42(player, plParam0, -1))
				{
					for (i = 0; i < 3; i = i + 1)
					{
						if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk5, mountOwnedByPlayer, func_45(i), 0))
						{
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(unk5.f_3))
						{
						}
						else
						{
							num3 = i;
							break;
						}
					}
				
					func_46(plParam0, num3);
				}
			}
			else if (func_42(player, plParam0, -1))
			{
				func_43(plParam0);
			}
		}
		else if (func_42(player, plParam0, -1))
		{
			func_43(plParam0);
		}
	}

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		flag = false;
	
		for (j = 0; j < 32; j = j + 1)
		{
			if (func_42(player, PLAYER::INT_TO_PLAYERINDEX(j), -1))
				flag = true;
		}
	
		if (flag)
		{
			if (!func_47(Global_1289643[num /*19*/].f_9, 65536))
				func_48(&(Global_1289643[num /*19*/].f_9), 65536);
		
			PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 33, 2, true);
		}
		else
		{
			if (func_47(Global_1289643[num /*19*/].f_9, 65536))
				func_49(&(Global_1289643[num /*19*/].f_9), 65536);
		
			PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 33, 2, false);
		}
	}

	return;
}

void func_19() // Position - 0x1857 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_20() // Position - 0x1863 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_21() // Position - 0x1871 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_22(var uParam0) // Position - 0x187F Hash - 0xE63F90FA ^0x748EB0BA
{
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = 0;
	uParam0->f_11 = 0;
	uParam0->f_13 = -1;
	uParam0->f_14 = -1;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	return;
}

void func_23(var uParam0) // Position - 0x18C7 Hash - 0x1BAC4775 ^0x681FC9E1
{
	int i;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_50(&(uParam0->f_3));
	func_51(&(uParam0->f_18));
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_51 = -1;
	uParam0->f_52 = -1;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = 0f;
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = func_52(2880);
	uParam0->f_62 = -1;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	func_53(&(uParam0->f_65));
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = { 0f, 0f, 0f };
	uParam0->f_77 = 0f;
	func_54(&(uParam0->f_78));
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_105 = 0;
	func_53(&(uParam0->f_106));
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_110), "", 64);
	uParam0->f_118 = 0;
	uParam0->f_122 = 0;
	func_53(&(uParam0->f_123));
	uParam0->f_127 = -1;
	func_54(&(uParam0->f_128));
	uParam0->f_152 = 0;
	uParam0->f_153 = 0;
	uParam0->f_303 = 0f;

	for (i = 0; i < uParam0->f_162; i = i + 1)
	{
		func_55(&uParam0->f_162[i /*7*/]);
	}

	return;
}

void func_24(var uParam0) // Position - 0x19E3 Hash - 0x1B8D83F6 ^0x8D0B889D
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_50(&(uParam0->f_2));
	func_51(&(uParam0->f_17));
	uParam0->f_45 = 0;
	uParam0->f_46 = -1;
	uParam0->f_47 = -1;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = { 0f, 0f, 0f };
	uParam0->f_53 = 0f;
	uParam0->f_54 = 0;
	uParam0->f_55 = -1;
	uParam0->f_56 = 0;
	func_53(&(uParam0->f_57));
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_65 = -1;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = 0f;
	func_53(&(uParam0->f_77));
	uParam0->f_81 = -1;
	func_54(&(uParam0->f_82));
	uParam0->f_106 = 0;
	uParam0->f_220 = 0;
	uParam0->f_221 = 0;
	func_53(&(uParam0->f_222));
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_226), "", 64);
	uParam0->f_235 = 0;
	func_53(&(uParam0->f_236));
	uParam0->f_240 = -1;
	func_54(&(uParam0->f_241));
	uParam0->f_265 = 0;
	uParam0->f_269 = 0;
	uParam0->f_280 = 0;
	uParam0->f_281 = 0;
	uParam0->f_282 = 0;
	uParam0->f_283 = -1;
	uParam0->f_284 = 0;
	uParam0->f_285 = 0;
	uParam0->f_285.f_1 = 0;
	uParam0->f_285.f_2 = 0;
	uParam0->f_285.f_3 = 0;

	if (MAP::DOES_BLIP_EXIST(uParam0->f_289))
		MAP::REMOVE_BLIP(&(uParam0->f_289));

	if (uParam0->f_290 != 0)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(uParam0->f_290, false);
		uParam0->f_290 = 0;
	}

	return;
}

void func_25(var uParam0) // Position - 0x1B33 Hash - 0x933E9ED0 ^0xAE8CE64A
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_56(&(uParam0->f_4));
	return;
}

void func_26(var uParam0) // Position - 0x1B56 Hash - 0xBF64A9B1 ^0x587F8CE3
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_8 = 0;
	return;
}

void func_27(var uParam0) // Position - 0x1B76 Hash - 0xCB533D49 ^0xCB533D49
{
	*uParam0 = -1;
	return;
}

void func_28(var uParam0) // Position - 0x1B82 Hash - 0xC269172 ^0xF6000BCA
{
	func_53(uParam0);
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	return;
}

void func_29(var uParam0) // Position - 0x1BA4 Hash - 0x9F0D8F78 ^0xF83007A3
{
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_9 = -1;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_18 = -15;
	uParam0->f_19 = 0;
	return;
}

void func_30(var uParam0) // Position - 0x1BF4 Hash - 0x99C7D6F7 ^0x1DB5E36C
{
	int i;

	func_57(uParam0);

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_3[i] = 0f;
	}

	return;
}

void func_31(var uParam0) // Position - 0x1C1D Hash - 0xF1A400DF ^0x80E0A848
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	return;
}

void func_32(int iParam0) // Position - 0x1C2E Hash - 0x4F769ECC ^0xB77E301B
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_9 = Global_1289643[num /*19*/].f_9 - Global_1289643[num /*19*/].f_9 && iParam0;
	return;
}

void func_33(int iParam0) // Position - 0x1C5E Hash - 0x4F769ECC ^0x83CF268
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 - Global_1289643[num /*19*/].f_10 && iParam0;
	return;
}

BOOL func_34(int iParam0) // Position - 0x1C8E Hash - 0xA1030A9F ^0xA1030A9F
{
	int num;
	int offset;

	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	return MISC::IS_BIT_SET(Global_1903838.f_496[num], offset);
}

void func_35(int iParam0) // Position - 0x1CCB Hash - 0x7317FD65 ^0x259FA389
{
	int num;
	int offset;

	if (!func_58(iParam0))
		return;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_1903838.f_496[num], offset);
	return;
}

BOOL func_36() // Position - 0x1CFF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

void func_37() // Position - 0x1D0E Hash - 0x2402FC66 ^0xD52017F
{
	int num;
	int num2;

	num = 1;
	num2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (Global_1289643[num2 /*19*/].f_11 & 1 == 0)
	{
		if (Global_1289643[num2 /*19*/].f_11 & 2 != 0)
			num = num | 4;
	
		if (Global_1289643[num2 /*19*/].f_11 & 4 != 0)
			num = num | 8;
	
		if (Global_1289643[num2 /*19*/].f_11 & 8 != 0)
			num = num | 16;
	
		if (Global_1289643[num2 /*19*/].f_11 & 16 != 0)
			num = 2;
	}

	PLAYER::_0x4EC8BE63B8A5D4EF(PLAYER::PLAYER_ID(), num);
	return;
}

void func_38() // Position - 0x1D92 Hash - 0x84778D45 ^0x2672AAE8
{
	NETWORK::_GET_RESERVED_MISSION_ENTITIES_FOR_THREAD(SCRIPTS::GET_ID_OF_THIS_THREAD(), &(Global_1290271.f_11.f_741), &(Global_1290271.f_11.f_741.f_1), &(Global_1290271.f_11.f_741.f_2), &(Global_1290271.f_11.f_741.f_3), &(Global_1290271.f_11.f_741.f_4), &(Global_1290271.f_11.f_741.f_5));
	return;
}

int func_39(int iParam0, var uParam1, BOOL bParam2) // Position - 0x1DE2 Hash - 0x6F4B9796 ^0xF196A6D6
{
	if (!MISC::IS_BIT_SET(Global_1290271.f_11.f_321, iParam0))
		return 0;

	if (!func_59(uParam1, bParam2))
		return 0;

	uParam1->f_3 = 0;
	uParam1->f_4 = 0;
	uParam1->f_4.f_1 = 0;

	if (func_60(uParam1))
		func_57(uParam1);

	MISC::CLEAR_BIT(&(Global_1290271.f_11.f_321), iParam0);

	if (uParam1->f_6 && Global_1291939.f_2 && Global_1291939 == iParam0)
	{
		Global_1291939 = -1;
		Global_1291939.f_2 = 0;
	}

	func_38();
	return 1;
}

int func_40(int iParam0, Any* panParam1, BOOL bParam2) // Position - 0x1E6F Hash - 0xC6C119C9 ^0xEB21F902
{
	int num;

	if (!MISC::IS_BIT_SET(Global_1290271.f_11.f_320, iParam0))
		return 0;

	if (!func_61(panParam1, bParam2))
		return 0;

	num = -1;

	if (ENTITY::DOES_ENTITY_EXIST(panParam1->f_2) && func_47(panParam1->f_4, 2))
	{
		switch (panParam1->f_3)
		{
			case 0:
			case 1:
				if (!func_62(panParam1, &num))
					return 0;
				break;
		}
	}

	if (func_47(panParam1->f_4, 8))
	{
		switch (panParam1->f_3)
		{
			case 0:
			case 1:
				if (num != -1)
				{
					Global_1291939 = num;
					Global_1291939.f_2 = 1;
				}
				else
				{
					Global_1291939 = -1;
					Global_1291939.f_2 = 0;
				}
				break;
		
			case 2:
			case 3:
				Global_1291939.f_1 = -1;
				break;
		}
	}

	panParam1->f_2 = 0;
	panParam1->f_3 = -1;
	panParam1->f_4 = 0;
	*panParam1 = 0;
	panParam1->f_1 = 0;
	MISC::CLEAR_BIT(&(Global_1290271.f_11.f_320), iParam0);
	func_38();
	return 1;
}

void func_41() // Position - 0x1F6D Hash - 0x3977AEAA ^0xF7AA3DF6
{
	Player playerIndex;
	Ped ped;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerIndex))
		return;

	ped = func_63();

	if (ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(playerIndex)))
	{
		if (Global_1901671.f_701.f_37)
		{
		}
		else
		{
			func_64();
		}
	}

	return;
}

BOOL func_42(Player plParam0, Player plParam1, int iParam2) // Position - 0x1FBA Hash - 0x39B59418 ^0x5273C9F2
{
	var unk;
	int num;

	if (!func_65())
		return false;

	if (!func_66(plParam1, &unk) || !func_66(plParam0, &num))
		return false;

	return Global_1289643[num /*19*/].f_6 == plParam1 && iParam2 == -1 || Global_1289643[num /*19*/].f_7 == iParam2;
}

int func_43(Player plParam0) // Position - 0x2016 Hash - 0x53BB6C98 ^0xF5267CC6
{
	var unk;
	int num;

	if (!func_65())
		return 0;

	if (!func_66(plParam0, &unk))
		return 0;

	if (!func_66(PLAYER::PLAYER_ID(), &num))
		return 0;

	Global_1289643[num /*19*/].f_6 = 255;
	Global_1289643[num /*19*/].f_7 = -1;
	return 1;
}

BOOL func_44(Ped pedParam0, var uParam1) // Position - 0x2064 Hash - 0x469CE65 ^0xF0B1FA7F
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && ENTITY::IS_ENTITY_A_PED(uParam1->f_1))
		if (pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1))
			return true;

	return false;
}

int func_45(int iParam0) // Position - 0x2096 Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

int func_46(Player plParam0, int iParam1) // Position - 0x20CE Hash - 0xEAD7C64F ^0x186B7694
{
	var unk;
	int num;

	if (!func_65())
		return 0;

	if (!func_66(plParam0, &unk))
		return 0;

	if (!func_66(PLAYER::PLAYER_ID(), &num))
		return 0;

	Global_1289643[num /*19*/].f_6 = plParam0;
	Global_1289643[num /*19*/].f_7 = iParam1;
	return 1;
}

BOOL func_47(int iParam0, int iParam1) // Position - 0x211D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_48(int iParam0, int iParam1) // Position - 0x212C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_49(int iParam0, int iParam1) // Position - 0x213D Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_50(var uParam0) // Position - 0x2152 Hash - 0xA244D6E8 ^0xCE1F4CE9
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_67(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
	return;
}

void func_51(var uParam0) // Position - 0x217A Hash - 0xF24E8406 ^0x5547F45D
{
	func_68(uParam0);
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = 10;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = 0f;
	uParam0->f_14 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0;
	uParam0->f_23 = -1;
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = 0f;
	return;
}

int func_52(int iParam0) // Position - 0x21EA Hash - 0x21C37800 ^0xCAC46E18
{
	int num;
	int year;
	var month;
	var day;
	var hour;
	var minute;
	var second;

	if (iParam0 <= 0)
		return 0;

	CLOCK::GET_POSIX_TIME(&year, &month, &day, &hour, &minute, &second);
	num = year + month + day + hour + minute + second + MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	num = num % iParam0;
	return num;
}

void func_53(var uParam0) // Position - 0x2232 Hash - 0xA4B72113 ^0x62A5EAE1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

void func_54(var uParam0) // Position - 0x224D Hash - 0x5016D797 ^0x890608C3
{
	func_53(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_69() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	return;
}

void func_55(var uParam0) // Position - 0x2291 Hash - 0x5184897A ^0x8CA8F6C3
{
	*uParam0 = { func_69() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	return;
}

void func_56(var uParam0) // Position - 0x22B0 Hash - 0x7D3EE57A ^0x7D3EE57A
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_70(&uParam0->[i /*7*/]);
	}

	return;
}

void func_57(var uParam0) // Position - 0x22D6 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_58(int iParam0) // Position - 0x22EC Hash - 0x5EE14A7B ^0x5EE14A7B
{
	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	return true;
}

BOOL func_59(var uParam0, BOOL bParam1) // Position - 0x230B Hash - 0x473F2A59 ^0x4ABF1374
{
	Player playerFromGamerHandle;
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return true;

	if (!func_60(uParam0))
		func_71(uParam0);

	playerFromGamerHandle = 255;

	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_4)))
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_4));

	flag = bParam1 && uParam0->f_6;

	if (!flag)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
			if (!func_72(uParam0, 30f))
				return false;
			else if (uParam0->f_6)
				if (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3))
					return false;
	else if (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3))
		return false;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		return false;

	if (!func_73(uParam0->f_3))
		return false;

	ENTITY::DELETE_ENTITY(&(uParam0->f_3));
	return false;
}

BOOL func_60(var uParam0) // Position - 0x23D4 Hash - 0x5001E582 ^0x5001E582
{
	return func_74(*uParam0, 1);
}

BOOL func_61(Any* panParam0, BOOL bParam1) // Position - 0x23E4 Hash - 0x4E676AE0 ^0x812BD80B
{
	if (!ENTITY::DOES_ENTITY_EXIST(panParam0->f_2))
		return true;

	if (!func_47(panParam0->f_4, 16))
	{
		panParam0->f_4 = panParam0->f_4 | 16;
		panParam0->f_5 = 1;
	}

	switch (panParam0->f_3)
	{
		case -1:
		case 6:
			if (!func_75(panParam0))
				return false;
			break;
	
		case 0:
		case 1:
			if (!func_77(panParam0, bParam1))
				return false;
			break;
	
		case 2:
		case 3:
			if (!func_76(panParam0))
				return false;
			break;
	
		case 4:
			break;
	}

	return true;
}

BOOL func_62(Any* panParam0, var uParam1) // Position - 0x2487 Hash - 0xA798DBAE ^0xFF2A0951
{
	int i;

	*uParam1 = -1;

	if (!ENTITY::DOES_ENTITY_EXIST(panParam0->f_2))
		return false;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1290271.f_11.f_321, i))
		{
			Global_1290271.f_11.f_516[i /*7*/].f_3 = panParam0->f_2;
			Global_1290271.f_11.f_516[i /*7*/].f_4 = { *panParam0 };
			Global_1290271.f_11.f_516[i /*7*/].f_6 = func_47(panParam0->f_4, 8);
			func_71(&Global_1290271.f_11.f_516[i /*7*/]);
			MISC::SET_BIT(&(Global_1290271.f_11.f_321), i);
			*uParam1 = i;
			return true;
		}
	}

	return false;
}

Ped func_63() // Position - 0x2534 Hash - 0xC01FB5C0 ^0x31561D60
{
	if (Global_1291939 < 0 || Global_1291939 >= 32)
		return 0;

	if (Global_1291939.f_2)
	{
		if (!MISC::IS_BIT_SET(Global_1290271.f_11.f_321, Global_1291939))
			return 0;
	
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_11.f_516[Global_1291939 /*7*/].f_3))
			return 0;
	
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1290271.f_11.f_516[Global_1291939 /*7*/].f_3);
	}

	if (!MISC::IS_BIT_SET(Global_1290271.f_11.f_320, Global_1291939))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_11.f_323[Global_1291939 /*6*/].f_2))
		return 0;

	return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1290271.f_11.f_323[Global_1291939 /*6*/].f_2);
}

// Unhandled jump detected. Output should be considered invalid
void func_64() // Position - 0x25F8 Hash - 0x4E50A16E ^0x9799E447
{
	Ped mountOwnedByPlayer;
	int num;
	var unk;
	var unk97;
	int num2;
	var src;
	int i;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Ped ped;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		mountOwnedByPlayer = func_63();

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		return;

	unk.f_10 = 10;
	unk97.f_10 = 10;
	flag = true;
	flag2 = false;
	flag3 = false;
	flag4 = PED::IS_PED_RAGDOLL(mountOwnedByPlayer) || PED::IS_PED_DEAD_OR_DYING(mountOwnedByPlayer, true) || TASK::IS_PED_IN_WRITHE(mountOwnedByPlayer);

	for (i = 0; i < 3; i = i + 1)
	{
		num = i;
		num2 = func_45(i);
		func_78(&unk);
	
		if (flag4 || func_79(mountOwnedByPlayer, i, num2, &flag2, &flag3, &flag))
		{
			if (!Global_1903838.f_112 || flag3)
			{
			}
			else
			{
				if (Global_1903838.f_113[num /*96*/].f_1 != 0)
				{
					Global_1940252.f_5 = 1;
				
					if (func_80(mountOwnedByPlayer, Global_1903838.f_113[num /*96*/].f_1, i))
						func_81(mountOwnedByPlayer, Global_1903838.f_113[num /*96*/].f_1, 1, !flag2, -142743235);
				}
			
				Global_1290271.f_1171.f_241[i] = 0;
				Global_1290271.f_1171.f_258[i] = false;
				MISC::COPY_SCRIPT_STRUCT(&Global_1290271.f_1171.f_245[i /*4*/], &src, 4);
				func_82(&unk97, &Global_1903838.f_113[num /*96*/]);
				goto 0x267;
			}
		}
	
		if (flag3)
		{
		}
		else
		{
			ped = Global_1290271.f_1171.f_245[i /*4*/].f_3;
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
				Global_1290271.f_1171.f_258[i] = !ENTITY::_GET_ENTITY_CARRYING_FLAG(ped, 2) || ENTITY::_GET_ENTITY_CARRYING_FLAG(ped, 27);
		
			func_83(ped, &unk);
		
			if (Global_1903838.f_113[num /*96*/].f_1 != 0)
			{
				if (Global_1903838.f_113[num /*96*/].f_1 != unk.f_1)
				{
					if (func_80(mountOwnedByPlayer, Global_1903838.f_113[num /*96*/].f_1, i))
					{
						func_81(mountOwnedByPlayer, Global_1903838.f_113[num /*96*/].f_1, 1, !flag2, -142743235);
					
						if (unk.f_1 != 0)
						{
							if (func_84(mountOwnedByPlayer, unk.f_1, i))
							{
								func_85(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(mountOwnedByPlayer), unk.f_1, 1);
								Global_1903838.f_113[num /*96*/].f_1 = unk.f_1;
							}
						}
					
						Global_1940252.f_5 = 1;
					}
				}
			}
			else if (func_84(mountOwnedByPlayer, unk.f_1, i))
			{
				func_85(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(mountOwnedByPlayer), unk.f_1, 1);
				Global_1940252.f_5 = 1;
			}
		
			func_82(&unk, &Global_1903838.f_113[num /*96*/]);
		}
	}

	if (!Global_1903838.f_112 && Global_1903838.f_111 && flag)
		Global_1903838.f_112 = 1;

	return;
}

BOOL func_65() // Position - 0x288E Hash - 0x4D0DC63E ^0x7EDA2319
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[18], false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_stable_manager", -1, true, 0))
		return false;

	return Global_1291939.f_3;
}

BOOL func_66(Player plParam0, var uParam1) // Position - 0x28C5 Hash - 0xF634582C ^0x11B31C15
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	*uParam1 = plParam0;
	return *uParam1 > -1 && *uParam1 < 32;
}

void func_67(var uParam0) // Position - 0x28F0 Hash - 0xDAA91251 ^0x6BC598FB
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	return;
}

void func_68(var uParam0) // Position - 0x2918 Hash - 0xABC463B0 ^0xB8B671FC
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	return;
}

struct<4> func_69() // Position - 0x2938 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

void func_70(var uParam0) // Position - 0x2944 Hash - 0xB4387A1E ^0xE0FB2E70
{
	int i;

	*uParam0 = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		uParam0->f_1[i] = 0;
	}

	return;
}

void func_71(var uParam0) // Position - 0x296B Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_86(uParam0, 0f);
	return;
}

BOOL func_72(var uParam0, float fParam1) // Position - 0x297A Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_60(uParam0))
		return false;

	if (func_87(uParam0) > fParam1)
		return true;

	return false;
}

BOOL func_73(Vehicle veParam0) // Position - 0x29A1 Hash - 0xE9D6C1D0 ^0x137BB70B
{
	if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veParam0, true))
		return true;

	switch (ENTITY::GET_ENTITY_TYPE(veParam0))
	{
		case 1:
			if (!func_88())
				return false;
			break;
	
		case 2:
			if (!func_89())
				return false;
			break;
	
		case 3:
			break;
	}

	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam0, true, true);

	if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veParam0, true))
		return true;

	return false;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x2A19 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_75(Any* panParam0) // Position - 0x2A28 Hash - 0x9D27F27 ^0xDF64DAE6
{
	BOOL flag;
	Player playerFromGamerHandle;
	var unk;

	flag = func_47(panParam0->f_4, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(panParam0->f_2))
		return true;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(panParam0->f_2))
		return false;

	panParam0->f_5 = 1;
	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam0);
	NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle);

	if (!func_73(panParam0->f_2))
		return false;

	panParam0->f_5 = 2;
	NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle);

	if (flag)
	{
		if (!func_90(panParam0->f_2, panParam0->f_3))
		{
			return false;
		}
		else
		{
			unk = panParam0->f_2;
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&unk);
			return true;
		}
	}
	else
	{
		ENTITY::DELETE_ENTITY(&(panParam0->f_2));
	}

	return false;
}

BOOL func_76(Any* panParam0) // Position - 0x2AC7 Hash - 0x1028006C ^0x3D89F27A
{
	BOOL flag;
	Vehicle vehicleIndexFromEntityIndex;
	Player playerFromGamerHandle;

	flag = func_47(panParam0->f_4, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(panParam0->f_2))
		return true;

	if (!ENTITY::IS_ENTITY_A_VEHICLE(panParam0->f_2))
	{
		if (func_75(panParam0))
			return true;
	
		return false;
	}

	vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(panParam0->f_2);

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleIndexFromEntityIndex))
		return true;

	if (VEHICLE::_IS_VEHICLE_FADING_OUT(vehicleIndexFromEntityIndex))
		return true;

	if (func_91(vehicleIndexFromEntityIndex))
		return true;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(panParam0->f_2))
		return false;

	panParam0->f_5 = 1;
	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam0);
	NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle);

	if (!func_73(vehicleIndexFromEntityIndex))
		return false;

	panParam0->f_5 = 2;
	NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle);
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(vehicleIndexFromEntityIndex, 17, true);

	if (!flag)
	{
		func_92(vehicleIndexFromEntityIndex, false);
	}
	else
	{
		func_92(vehicleIndexFromEntityIndex, true);
		TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(vehicleIndexFromEntityIndex, false);
	}

	if (flag)
	{
		if (!func_90(vehicleIndexFromEntityIndex, panParam0->f_3))
		{
			return false;
		}
		else
		{
			TASK::_TASK_VEHICLE_FLEE_ON_CLEANUP(vehicleIndexFromEntityIndex, 0f, 0f, 0f, 8f, 1148979587);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&vehicleIndexFromEntityIndex);
			return true;
		}
	}
	else
	{
		VEHICLE::_FADE_AND_DESTROY_VEHICLE(&vehicleIndexFromEntityIndex);
	}

	return false;
}

BOOL func_77(Any* panParam0, BOOL bParam1) // Position - 0x2BE3 Hash - 0x5834689E ^0x9B781FE1
{
	BOOL flag;
	Ped pedIndexFromEntityIndex;
	BOOL flag2;
	Player playerFromGamerHandle;
	Player playerFromGamerHandle2;
	Ped playerPed;

	flag = func_47(panParam0->f_4, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(panParam0->f_2))
		return true;

	if (!ENTITY::IS_ENTITY_A_PED(panParam0->f_2))
		return func_75(panParam0);

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(panParam0->f_2);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return true;

	flag2 = func_93(pedIndexFromEntityIndex);

	if (bParam1 && func_47(panParam0->f_4, 8))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedIndexFromEntityIndex);
		flag = false;
	}
	else if (flag && func_91(pedIndexFromEntityIndex))
	{
		return true;
	}

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedIndexFromEntityIndex))
		return false;

	if (PED::_IS_PED_QUEUED_FOR_DELETION(pedIndexFromEntityIndex))
		return false;

	PED::SET_PED_RESET_FLAG(pedIndexFromEntityIndex, 105, true);

	if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(pedIndexFromEntityIndex, 34))
		ENTITY::_SET_ENTITY_CARRYING_FLAG(pedIndexFromEntityIndex, 34, true);

	panParam0->f_5 = 1;
	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam0);
	NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle);

	if (!func_73(pedIndexFromEntityIndex))
		return false;

	panParam0->f_5 = 2;
	NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle);

	if (!flag2)
		return false;

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedIndexFromEntityIndex, true);
	PED::SET_LOOTING_FLAG(pedIndexFromEntityIndex, 4, false);
	PED::SET_LOOTING_FLAG(pedIndexFromEntityIndex, 0, false);
	PED::SET_LOOTING_FLAG(pedIndexFromEntityIndex, 1, false);
	PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex, 136, true);
	PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex, 288, true);
	PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex, 211, false);
	PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex, 297, false);
	PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex, 400, false);
	PED::SET_PED_CAN_BE_TARGETTED(pedIndexFromEntityIndex, false);
	AITRANSPORT::SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS(pedIndexFromEntityIndex, 0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(pedIndexFromEntityIndex, 34, true);
	PED::_SET_PED_TO_BE_REMOVED(pedIndexFromEntityIndex, 20f, 150f, 30000, 5000);

	if (!ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex) && TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
		ENTITY::SET_ENTITY_HEALTH(pedIndexFromEntityIndex, 0, 0);

	if (flag)
	{
		if (!func_90(panParam0->f_2, panParam0->f_3))
		{
			return false;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
			{
				playerFromGamerHandle2 = 255;
			
				if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam0))
					playerFromGamerHandle2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam0);
			
				playerPed = 0;
			
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle2))
					playerPed = PLAYER::GET_PLAYER_PED(playerFromGamerHandle2);
			
				if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
					TASK::TASK_FLEE_COORD(pedIndexFromEntityIndex, ENTITY::GET_ENTITY_COORDS(pedIndexFromEntityIndex, true, false), 4, 24832, 20000f, -1, 0);
				else
					TASK::TASK_FLEE_PED(pedIndexFromEntityIndex, playerPed, 4, 24832, 20000f, -1, 0);
			}
		
			PED::_SET_REMOVE_PED_NETWORKED(pedIndexFromEntityIndex, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedIndexFromEntityIndex);
			return true;
		}
	}
	else
	{
		PED::FADE_AND_DESTROY_PED(&pedIndexFromEntityIndex);
	}

	return false;
}

void func_78(var uParam0) // Position - 0x2E21 Hash - 0x6843C143 ^0x645B1C36
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

BOOL func_79(Ped pedParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2ECD Hash - 0xB40193F3 ^0xE91A4203
{
	var src;
	Ped ped;
	Ped ped2;
	int carriableEntityState;

	*uParam3 = 0;
	*uParam4 = 0;
	ped = Global_1290271.f_1171.f_245[iParam1 /*4*/].f_3;

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&src, pedParam0, iParam2, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			Global_1290271.f_1171.f_258[iParam1] = !ENTITY::_GET_ENTITY_CARRYING_FLAG(ped, 2) || ENTITY::_GET_ENTITY_CARRYING_FLAG(ped, 27);
	
		if (Global_1290271.f_1171.f_258[iParam1])
		{
			if (Global_1901671.f_701.f_36)
			{
			}
			else
			{
				*uParam4 = 1;
				return 0;
			}
		}
	
		return 1;
	}

	MISC::COPY_SCRIPT_STRUCT(&Global_1290271.f_1171.f_245[iParam1 /*4*/], &src, 4);
	ped2 = src.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(ped2))
		return 1;

	if (ENTITY::DOES_ENTITY_EXIST(ped) && ENTITY::DOES_ENTITY_EXIST(ped2))
	{
		if (ped != ped2)
		{
			*uParam3 = 1;
			return 1;
		}
		else if (ENTITY::IS_ENTITY_A_PED(ped) && PED::_IS_PED_QUEUED_FOR_DELETION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped)))
		{
			*uParam4 = 1;
			return 0;
		}
	}

	carriableEntityState = ENTITY::GET_CARRIABLE_ENTITY_STATE(ped2);

	if (carriableEntityState != 7)
	{
		*uParam5 = 0;
	
		if (Global_1290271.f_1171.f_241[iParam1] == 7)
			*uParam3 = 1;
	
		Global_1290271.f_1171.f_241[iParam1] = carriableEntityState;
		return 1;
	}

	Global_1290271.f_1171.f_241[iParam1] = carriableEntityState;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(ped2))
		return 1;

	if (ENTITY::IS_ENTITY_A_PED(ped2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped2)))
		return 1;

	return 0;
}

BOOL func_80(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x3037 Hash - 0x1AD87EAF ^0x1F734BD6
{
	int num;
	int num2;

	num = 0;

	switch (iParam2)
	{
		case 0:
			if (Global_1903838.f_113[1 /*96*/].f_1 == hParam1)
				num = num + 1;
		
			if (Global_1903838.f_113[2 /*96*/].f_1 == hParam1)
				num = num + 1;
			break;
	
		case 1:
			if (Global_1903838.f_113[0 /*96*/].f_1 == hParam1)
				num = num + 1;
		
			if (Global_1903838.f_113[2 /*96*/].f_1 == hParam1)
				num = num + 1;
			break;
	
		case 2:
			if (Global_1903838.f_113[1 /*96*/].f_1 == hParam1)
				num = num + 1;
		
			if (Global_1903838.f_113[0 /*96*/].f_1 == hParam1)
				num = num + 1;
			break;
	}

	if (func_94(hParam1))
		num = num + func_95(hParam1);

	num2 = func_96(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);

	if (num2 - 1 < num)
		return false;

	return true;
}

int func_81(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x3119 Hash - 0xCC673625 ^0x5E579BC1
{
	return func_97(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1, iParam2, bParam3, hParam4);
}

void func_82(Any* panParam0, Any* panParam1) // Position - 0x3133 Hash - 0xBFEF95EB ^0x45C41A3B
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, panParam0, 96);
	return;
}

void func_83(Ped pedParam0, var uParam1) // Position - 0x3145 Hash - 0x4A204963 ^0x4378EDF
{
	Ped pedIndexFromEntityIndex;
	int i;
	var drawable;
	var albedo;
	var normal;
	var material;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	*uParam1 = ENTITY::GET_ENTITY_MODEL(pedParam0);
	uParam1->f_1 = func_98(pedParam0);
	uParam1->f_2 = ENTITY::_0xD21C7418C590BB40(pedParam0);
	uParam1->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(pedParam0);
	uParam1->f_93 = ENTITY::_0xB16C780C51E51E2B(pedParam0);

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		uParam1->f_95 = 0;
		uParam1->f_92 = 0;
		return;
	}

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		uParam1->f_95 = 0;
		uParam1->f_92 = 0;
		return;
	}

	uParam1->f_4 = PED::_GET_PED_QUALITY(pedIndexFromEntityIndex);
	uParam1->f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(pedIndexFromEntityIndex);
	uParam1->f_6 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedIndexFromEntityIndex);
	uParam1->f_7 = PED::_GET_PED_DAMAGED(pedIndexFromEntityIndex);
	uParam1->f_94 = ENTITY::_0x37B01666BAE8F7EF(pedIndexFromEntityIndex);
	uParam1->f_91 = PERSISTENCE::_0x2E545965DF98D476(pedParam0);
	uParam1->f_8 = PED::_GET_PED_META_OUTFIT_HASH(pedIndexFromEntityIndex);

	if (uParam1->f_9 < 1)
		uParam1->f_9 = 0;
	else if (uParam1->f_9 >= 10)
		uParam1->f_9 = 9;

	if (uParam1->f_9 > 0)
	{
		for (i = 0; i < uParam1->f_9; i = i + 1)
		{
			if (PED::GET_META_PED_ASSET_GUIDS(pedIndexFromEntityIndex, i, &drawable, &albedo, &normal, &material))
			{
				uParam1->f_10[i /*8*/] = drawable;
				uParam1->f_10[i /*8*/].f_1 = albedo;
				uParam1->f_10[i /*8*/].f_2 = normal;
				uParam1->f_10[i /*8*/].f_3 = material;
			}
		
			if (PED::GET_META_PED_ASSET_TINT(pedIndexFromEntityIndex, i, &drawable, &albedo, &normal, &material))
			{
				uParam1->f_10[i /*8*/].f_4 = drawable;
				uParam1->f_10[i /*8*/].f_5 = albedo;
				uParam1->f_10[i /*8*/].f_6 = normal;
				uParam1->f_10[i /*8*/].f_7 = material;
			}
		}
	}

	if (!func_99(uParam1->f_1))
	{
		uParam1->f_95 = 0;
		uParam1->f_92 = 0;
	}
	else
	{
		uParam1->f_95 = TASK::_0x7CB99FADDE73CD1B(pedIndexFromEntityIndex);
		uParam1->f_92 = PED::_IS_META_PED_USING_COMPONENT(pedIndexFromEntityIndex, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(pedParam0);
	}

	return;
}

BOOL func_84(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x330B Hash - 0x9BD76851 ^0xA4B4B8D9
{
	int num;
	int num2;

	num = 0;

	if (Global_1903838.f_113[1 /*96*/].f_1 != hParam1)
		num = num + 1;

	if (Global_1903838.f_113[2 /*96*/].f_1 != hParam1)
		num = num + 1;

	if (Global_1903838.f_113[0 /*96*/].f_1 != hParam1)
		num = num + 1;

	num2 = func_96(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);

	if (func_94(hParam1))
		num2 = num2 - func_95(hParam1);

	if (num2 < num)
		return true;

	return false;
}

int func_85(int iParam0, Hash hParam1, int iParam2) // Position - 0x3386 Hash - 0x2E1C6AB2 ^0xB396D62
{
	var guid2;
	var guid1;

	if (!func_100(hParam1, 0))
		return 0;

	guid2 = { func_101(iParam0) };
	guid1 = { func_102(iParam0, hParam1, guid2, guid2.f_4) };

	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &guid1, &guid2, hParam1, guid2.f_4, iParam2, 752097756))
		return 1;

	return 0;
}

void func_86(var uParam0, float fParam1) // Position - 0x33DD Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_103() - fParam1;
	func_104(uParam0, 1);
	func_105(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_87(var uParam0) // Position - 0x3403 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_60(uParam0))
		return uParam0->f_1;

	if (func_106(uParam0))
		return uParam0->f_2;

	return func_103() - uParam0->f_1;
}

BOOL func_88() // Position - 0x3438 Hash - 0xD93EFA08 ^0xB27E8590
{
	return Global_1290271.f_11.f_741.f_3 < Global_1290271.f_11.f_741;
}

BOOL func_89() // Position - 0x3455 Hash - 0xFA77A92E ^0xF5D5946C
{
	return Global_1290271.f_11.f_741.f_4 < Global_1290271.f_11.f_741.f_1;
}

BOOL func_90(Vehicle veParam0, int iParam1) // Position - 0x3474 Hash - 0xA40788CE ^0x562B64C6
{
	BOOL flag;

	if (func_91(veParam0))
		return true;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0))
		return false;

	flag = 1;

	if (iParam1 == -1)
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
			iParam1 = 2;
		else if (ENTITY::IS_ENTITY_A_PED(veParam0))
			iParam1 = 0;
		else
			return true;

	switch (iParam1)
	{
		case 0:
		case 1:
			flag = func_108(veParam0, func_107()) && flag;
			flag = func_108(veParam0, func_109()) && flag;
			flag = func_108(veParam0, func_110()) && flag;
			flag = func_108(veParam0, func_111()) && flag;
			flag = func_108(veParam0, func_112()) && flag;
			flag = func_108(veParam0, "loot_long_custom_anim_data_set") && flag;
			flag = func_108(veParam0, "HorseCamp") && flag;
			flag = func_108(veParam0, "HorseCompanion") && flag;
			flag = func_108(veParam0, "CaravanCommonHorse") && flag;
			flag = func_108(veParam0, "CaravanLivestock") && flag;
			flag = func_108(veParam0, "StableOwnedHorse") && flag;
			flag = func_108(veParam0, "HorseMission") && flag;
			flag = func_108(veParam0, "bHorseHasBeenStolen") && flag;
			flag = func_108(veParam0, "HorseGender") && flag;
			break;
	
		case 2:
		case 3:
		case 4:
			flag = func_108(veParam0, "SyncedFlags01") && flag;
			flag = func_108(veParam0, "SummonPosXY") && flag;
			flag = func_108(veParam0, "SummonPosZ") && flag;
			break;
	
		case 5:
			return true;
	}

	if (flag)
		if (func_108(veParam0, "bHasScriptBrain"))
			return true;

	return false;
}

BOOL func_91(Vehicle veParam0) // Position - 0x3649 Hash - 0x4D343502 ^0x827B3FF6
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return true;

	if (!DECORATOR::DECOR_EXIST_ON(veParam0, "bHasScriptBrain"))
		return true;

	return false;
}

void func_92(Vehicle veParam0, BOOL bParam1) // Position - 0x3672 Hash - 0x8E8C6964 ^0xCABC518B
{
	Ped pedInVehicleSeat;
	int i;

	if (func_113(veParam0))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, i);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedInVehicleSeat))
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat))
						PED::_WARP_PED_OUT_OF_VEHICLE(pedInVehicleSeat);
		}
	}

	return;
}

BOOL func_93(Ped pedParam0) // Position - 0x36CA Hash - 0xC193F244 ^0xA1F8A052
{
	var unk;
	int num;
	int num2;
	int i;

	if (!func_114(pedParam0))
		return 1;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return 1;

	unk = 3;
	num = func_115(pedParam0, &unk, 3);
	num2 = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(unk[i]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(unk[i]) || ENTITY::IS_ENTITY_A_PED(unk[i]) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(unk[i])))
			{
				PED::DETACH_CARRIABLE_ENTITY(unk[i], false, false);
				num2 = num2 + 1;
			}
			else
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(unk[i], 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(unk[i], 27, true);
				num2 = num2 + 1;
			}
		}
		else if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(unk[i], 2))
		{
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(unk[i], 27))
				num2 = num2 + 1;
		}
	}

	if (num == num2)
		return 1;

	return 0;
}

BOOL func_94(Hash hParam0) // Position - 0x37B8 Hash - 0x6AEB7416 ^0x6AEB7416
{
	int i;
	int num;
	Hash hash;

	if (!func_116(hParam0))
		return false;

	for (i = 0; i < 77; i = i + 1)
	{
		num = func_117(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

int func_95(Hash hParam0) // Position - 0x37FA Hash - 0xDA52E29E ^0xDA52E29E
{
	Hash hash;
	int num;

	if (!func_100(hParam0, 0))
		return 0;

	if (!func_94(hParam0))
		return 0;

	hash = func_118(hParam0);
	num = func_119(hash, 1);
	return Global_1903838.f_402[num];
}

int func_96(int iParam0, Hash hParam1) // Position - 0x383B Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_100(hParam1, 0))
		return 0;

	guid = { func_120(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

int func_97(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x3879 Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_100(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_121(iParam0, hParam1, 1))
		return 0;

	statId = { func_122(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_96(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_96(iParam0, hParam1) - iParam2 < 0)
		{
			func_97(iParam0, hParam1, func_123(hParam1, false, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_124(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!bParam3 && hParam1 != 1309979101)
		func_125(hParam1, -iParam2, flag, flag2, flag3, false, false);

	return 1;
}

Hash func_98(Ped pedParam0) // Position - 0x3953 Hash - 0xCBDF2AE2 ^0xCD5FF04E
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(pedParam0) || ENTITY::_GET_IS_BIRD(pedParam0))
	{
		hash = func_126(&pedParam0);
	
		if (!func_100(hash, 0))
			hash = func_127(pedParam0);
	}
	else
	{
		hash = func_127(pedParam0);
	}

	return hash;
}

BOOL func_99(Hash hParam0) // Position - 0x39A6 Hash - 0x5E6E1858 ^0x5BD2FA9
{
	!func_100(hParam0, 0);

	if (func_128(hParam0, 1286414894))
		return true;

	return false;
}

BOOL func_100(Hash hParam0, int iParam1) // Position - 0x39CC Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<5> func_101(int iParam0) // Position - 0x39E6 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_102(iParam0, joaat("character"), func_69(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_102(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x3A13 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_100(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

float func_103() // Position - 0x3A40 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_104(var uParam0, int iParam1) // Position - 0x3A72 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_105(var uParam0, int iParam1) // Position - 0x3A83 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_106(var uParam0) // Position - 0x3A98 Hash - 0x39705408 ^0x39705408
{
	return func_74(*uParam0, 2);
}

char* func_107() // Position - 0x3AA8 Hash - 0x306ACA3A ^0x76830AF4
{
	return "NetStableMount";
}

BOOL func_108(Entity eParam0, char* sParam1) // Position - 0x3AB4 Hash - 0x4913D14 ^0xC20B6F9F
{
	if (!DECORATOR::DECOR_EXIST_ON(eParam0, sParam1))
		return true;

	return DECORATOR::DECOR_REMOVE(eParam0, sParam1);
}

char* func_109() // Position - 0x3AD4 Hash - 0x306ACA3A ^0xE867FD69
{
	return "NetStableGUID1";
}

char* func_110() // Position - 0x3AE0 Hash - 0x306ACA3A ^0x88A8FC92
{
	return "NetStableGUID2";
}

char* func_111() // Position - 0x3AEC Hash - 0x306ACA3A ^0xC041586B
{
	return "NetStableGUID3";
}

char* func_112() // Position - 0x3AF8 Hash - 0x306ACA3A ^0xED85E7CE
{
	return "NetStableGUID4";
}

BOOL func_113(Vehicle veParam0) // Position - 0x3B04 Hash - 0x9318EC92 ^0xE8ACCA9D
{
	int vehicleNumberOfPassengers;

	vehicleNumberOfPassengers = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(veParam0);

	if (vehicleNumberOfPassengers > 0)
		return true;

	return false;
}

BOOL func_114(Ped pedParam0) // Position - 0x3B1F Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

int func_115(Ped pedParam0, var uParam1, int iParam2) // Position - 0x3B4B Hash - 0xA73ED9C1 ^0xC2062AF6
{
	ItemSet itemset;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return num;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			uParam1->[num] = entityFromItem;
			num = num + 1;
		
			if (num == iParam2)
				break;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return num;
}

BOOL func_116(Hash hParam0) // Position - 0x3BC7 Hash - 0x8740500B ^0x17CABE34
{
	if (!func_100(hParam0, 0))
		return false;

	return func_128(hParam0, 1686880204) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_117(int iParam0, int iParam1) // Position - 0x3BF5 Hash - 0xE1D12727 ^0xAE678AE7
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_alligator_skin");
	
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
	
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
	
		case 3:
			return joaat("provision_beaver_fur");
	
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 6:
			return joaat("provision_boar_skin");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 9:
			return joaat("provision_buck_fur");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("provision_coyote_fur");
	
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 18:
			return joaat("provision_deer_hide");
	
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 21:
			return joaat("provision_fox_fur");
	
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 24:
			return joaat("provision_goat_hair");
	
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 27:
			return joaat("provision_javelina_skin");
	
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 30:
			return joaat("provision_loanshark_skins");
	
		case 31:
			return joaat("provision_panther_fur");
	
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 34:
			return joaat("provision_pig_skin");
	
		case 35:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 36:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 37:
			return joaat("provision_pronghorn_fur");
	
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 40:
			return joaat("provision_ram_hide");
	
		case 41:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 42:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 43:
			return joaat("provision_sheep_wool");
	
		case 44:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 46:
			return joaat("provision_wolf_fur");
	
		case 47:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 48:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 49:
			return 121494806;
	
		case 50:
			return -251416414;
	
		case 51:
			return -1787430524;
	
		case 52:
			return -1572330336;
	
		case 53:
			return -1249752300;
	
		case 54:
			return -940052481;
	
		case 55:
			return -308200059;
	
		case 56:
			return -1218522879;
	
		case 57:
			return 923422806;
	
		case 58:
			return 832214437;
	
		case 59:
			return 397926876;
	
		case 60:
			return 219794592;
	
		case 61:
			return -1061362634;
	
		case 62:
			return 1728819413;
	
		case 63:
			return 1009802015;
	
		case 64:
			return 1276143905;
	
		case 65:
			return -1262044528;
	
		case 66:
			return -963027403;
	
		case 67:
			return 2088901891;
	
		case 68:
			return 836208559;
	
		case 69:
			return 1600479946;
	
		case 70:
			return -675142890;
	
		case 71:
			return -906131571;
	
		case 72:
			return -591844128;
	
		case 73:
			return -1946740647;
	
		case 74:
			return -1548204069;
	
		case 75:
			return -907373381;
	
		case 76:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

Hash func_118(Hash hParam0) // Position - 0x4046 Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_94(hParam0))
		return 0;

	return hParam0;
}

int func_119(Hash hParam0, int iParam1) // Position - 0x405E Hash - 0x9271BD12 ^0x9271BD12
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 3;
	
		case -1946740647:
			return 73;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
	
		case joaat("provision_deer_hide"):
			return 18;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case -1787430524:
			return 51;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
	
		case -1572330336:
			return 52;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
	
		case -1548204069:
			return 74;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
	
		case joaat("provision_javelina_skin"):
			return 27;
	
		case joaat("provision_sheep_wool"):
			return 43;
	
		case -1262044528:
			return 65;
	
		case -1249752300:
			return 53;
	
		case -1218522879:
			return 56;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
	
		case -1061362634:
			return 61;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
	
		case -963027403:
			return 66;
	
		case -940052481:
			return 54;
	
		case -907373381:
			return 75;
	
		case -906131571:
			return 71;
	
		case joaat("provision_buck_fur"):
			return 9;
	
		case joaat("provision_alligator_skin"):
			return 0;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
	
		case -675142890:
			return 70;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
	
		case -591844128:
			return 72;
	
		case joaat("provision_ram_hide"):
			return 40;
	
		case joaat("provision_panther_fur"):
			return 31;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
	
		case -308200059:
			return 55;
	
		case -251416414:
			return 50;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
	
		case joaat("provision_pig_skin"):
			return 34;
	
		case 0:
			return 76;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
	
		case 121494806:
			return 49;
	
		case 219794592:
			return 60;
	
		case joaat("provision_fox_fur"):
			return 21;
	
		case 397926876:
			return 59;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
	
		case joaat("provision_pronghorn_fur"):
			return 37;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
	
		case 832214437:
			return 58;
	
		case 836208559:
			return 68;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
	
		case 923422806:
			return 57;
	
		case 1009802015:
			return 63;
	
		case joaat("provision_wolf_fur"):
			return 46;
	
		case joaat("provision_coyote_fur"):
			return 15;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
	
		case 1276143905:
			return 64;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
	
		case 1600479946:
			return 69;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
	
		case joaat("provision_goat_hair"):
			return 24;
	
		case 1728819413:
			return 62;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
	
		case joaat("provision_loanshark_skins"):
			return 30;
	
		case 2088901891:
			return 67;
	
		case joaat("provision_boar_skin"):
			return 6;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

struct<4> func_120(int iParam0, Hash hParam1) // Position - 0x43C6 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_101(iParam0) };
	return func_102(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_121(int iParam0, Hash hParam1, int iParam2) // Position - 0x43E8 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_100(hParam1, 0))
		return false;

	return func_96(iParam0, hParam1) >= iParam2;
}

struct<2> func_122(Hash hParam0) // Position - 0x440A Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_100(hParam0, 0))
		return unk;

	if (func_128(hParam0, -305066475))
		if (func_20() == -1)
			if (func_128(hParam0, -537818634))
				return func_129(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_129(joaat("deadeye_items"));
	else if (func_128(hParam0, -537818634))
		return func_129(joaat("medicine_items"));

	if (func_128(hParam0, 2084895747))
		return func_129(joaat("lock_breaker_items"));

	return unk3;
}

int func_123(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x449E Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_100(hParam0, 0))
		return 0;

	num = func_130(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_131(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_132(hParam0, false);
	}

	if (func_133(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_134(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_135(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_134(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_124(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x4560 Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_100(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_101(iParam0) };
	unk6 = { func_102(iParam0, hParam1, unk, unk.f_4) };
	return func_136(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

void func_125(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x45AF Hash - 0x81C6837 ^0x21B516A3
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	int num2;
	int num3;
	Hash hash;
	int num4;
	char* str2;
	char* str3;
	int num5;
	char* str4;
	Hash hash2;
	Hash hash3;
	int value2;
	const char* str5;
	var unk7;

	if (!func_100(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_137() || bParam6)
	{
		func_138(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_140(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_130(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_128(hParam0, -1982291600) && !func_128(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_141(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_142(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num4 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num5 = 0;

	if (flag)
	{
		num4 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num5 = 1;
	}

	if (func_128(hParam0, 474910316))
	{
		str4 = func_143(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_rpg_special_1");
		else
			num4 = joaat("color_yellowdark");

	if (func_128(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_144(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_145(hParam0, false);

	if (func_146(hash) && func_128(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_147(hParam0);
	}
	else if (func_130(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_148(hParam0);
	
		if (func_100(hash3, 0))
			hash2 = func_145(hash3, false);
	}

	if (func_149(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_150(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_151(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_152(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_153(hParam0, &unk7))
			str5 = func_155(func_154(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_156(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

Hash func_126(var uParam0) // Position - 0x4A89 Hash - 0xDAEBAE6 ^0xFAD9C5D0
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
	return func_157(pedIndexFromEntityIndex);
}

Hash func_127(Ped pedParam0) // Position - 0x4AAF Hash - 0xB3A7ACD3 ^0xEF2020CA
{
	Hash carriableFromEntity;

	carriableFromEntity = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_A_PED(pedParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(pedParam0);

	if (carriableFromEntity == 0)
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
			carriableFromEntity = func_157(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0));

	return carriableFromEntity;
}

BOOL func_128(Hash hParam0, Hash hParam1) // Position - 0x4B0D Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_100(hParam0, 0))
		return func_159(func_158(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

struct<2> func_129(int iParam0) // Position - 0x4B4E Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_130(Hash hParam0) // Position - 0x4B5E Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_100(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

Hash func_131(Hash hParam0, int iParam1) // Position - 0x4B89 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_100(hParam0, 0))
		return 0;

	num = func_130(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_128(hParam0, 1399091007))
	{
		func_160(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_132(Hash hParam0, BOOL bParam1) // Position - 0x4C03 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_161(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_163(&unk, func_162(false));

	if (!func_164(&unk, &num, &num2, false))
		return 0;

	func_165(num);
	return num2;
}

int func_133(Hash hParam0, Hash hParam1) // Position - 0x4C62 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_166(func_158(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_134(BOOL bParam0) // Position - 0x4C8E Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_20() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_135(Hash hParam0, BOOL bParam1) // Position - 0x4CCF Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_167(hParam0, bParam1, 0) };
	return func_168(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_136(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x4CF4 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_169(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_170(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_137() // Position - 0x4D6C Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_138(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x4D79 Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_139(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4E9C Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_140(Hash hParam0, int iParam1) // Position - 0x4EB3 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_100(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

Hash func_141(Hash hParam0) // Position - 0x4ED2 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_100(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_142(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x4EFD Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

char* func_143(Hash hParam0) // Position - 0x4FF0 Hash - 0xFBA883FB ^0xBAE0C15F
{
	if (func_128(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_128(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_128(hParam0, 143267379))
		return "collectible_coins";

	if (func_128(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_128(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_128(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_128(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_128(hParam0, 781094263))
		return "collectible_flowers";

	if (func_128(hParam0, -352095726) || func_128(hParam0, -2014783736) || func_128(hParam0, -545064757) || func_128(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_144(Hash hParam0) // Position - 0x50EB Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_128(hParam0, -189374246))
		if (func_171(hParam0, -1305775593) || func_171(hParam0, 1384151091) || func_171(hParam0, 2075388272) || func_171(hParam0, -1738780413))
			return true;

	if (func_128(hParam0, -753854379) || func_128(hParam0, 173360570))
		return true;

	return false;
}

Hash func_145(Hash hParam0, BOOL bParam1) // Position - 0x516A Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_100(hParam0, 0))
		return 0;

	hash = func_172(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_146(Hash hParam0) // Position - 0x5198 Hash - 0x339D45CE ^0x339D45CE
{
	switch (hParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_147(Hash hParam0) // Position - 0x51BF Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_100(hParam0, 0))
		return 0;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (outData.f_18[i /*2*/].f_1 == 14460646)
				if (outData.f_18[i /*2*/] != 0)
					return outData.f_18[i /*2*/];
		}
	}

	return 0;
}

Hash func_148(Hash hParam0) // Position - 0x522D Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_173(hParam0);

	if (num == 0)
		return 0;

	unk = { func_174(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_175(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_176(outKey))
			{
				func_177(collectionId);
				return outKey;
			}
		}
	
		func_177(collectionId);
	}

	return 0;
}

BOOL func_149(Hash hParam0, Hash hParam1) // Position - 0x52B2 Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_150(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x52E3 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_100(hParam0, 0) && !func_166(func_158(hParam0), 2))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

const char* func_151(const char* sParam0, int iParam1) // Position - 0x5342 Hash - 0x9E99F03 ^0x68210AC3
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_152(Hash hParam0, int iParam1) // Position - 0x535C Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_178(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_153(Hash hParam0, char* sParam1) // Position - 0x537A Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_100(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_179(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_180(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_181(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_154(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x53F7 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_155(const char* sParam0, int iParam1) // Position - 0x540B Hash - 0xB0CFF0C3 ^0x9C4BCBCF
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_151(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_156(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x5441 Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_182(sParam0, sParam1, hParam2);
	return num2;
}

Hash func_157(Ped pedParam0) // Position - 0x54A4 Hash - 0x159F0730 ^0x5BA63351
{
	Ped pedAttached;
	int pedDamageCleanliness;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	pedAttached = pedParam0;
	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedAttached);
	num = func_183(pedAttached);

	if (!ENTITY::DOES_ENTITY_EXIST(pedAttached))
		return 0;

	if (TASK::_0x7CB99FADDE73CD1B(pedAttached))
		return 0;

	num2 = pedDamageCleanliness;
	num3 = num;

	if (num3 < num2)
		pedDamageCleanliness = num3;

	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&num4, pedAttached, pedDamageCleanliness))
		return 0;

	if (num4 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedAttached, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(pedAttached))
		{
			num5 = func_184(num4);
			return num5;
		}
	
		return num4;
	}

	switch (pedDamageCleanliness)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

Hash func_158(Hash hParam0) // Position - 0x5577 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_159(Hash hParam0, Hash hParam1) // Position - 0x5581 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_166(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_160(Hash hParam0, var uParam1, var uParam2) // Position - 0x55B7 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_161(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x57C3 Hash - 0x90CCF0F4 ^0xA5F3D799
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

struct<4> func_162(BOOL bParam0) // Position - 0x58A1 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_134(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_168(923904168, func_185(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_168(923904168, func_185(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_168(923904168, func_185(bParam0), -740156546, false);
}

void func_163(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x5942 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_164(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x595D Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_134(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_165(int iParam0) // Position - 0x5982 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_166(Hash hParam0, int iParam1) // Position - 0x59A3 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<5> func_167(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x59BD Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_185(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_130(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_190(hParam0, -1823706425))
			{
				unk = { func_168(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_190(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_168(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_168(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_190(hParam0, -1653629781))
			{
				unk = { func_168(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_189(bParam1) };
		
			switch (func_141(hParam0))
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
			unk = { func_168(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_162(bParam1) };
		
			if (iParam2 && func_186(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_188(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_191(unk, &unk28, bParam1, false, -1))
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
			else if (func_190(hParam0, -1653629781))
			{
				unk = { func_168(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_168(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x5D31 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_100(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_134(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_169(Hash hParam0) // Position - 0x5D62 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_170(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x5D78 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

BOOL func_171(Hash hParam0, Hash hParam1) // Position - 0x5DA4 Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

Hash func_172(Hash hParam0, BOOL bParam1) // Position - 0x5DCB Hash - 0xBBDA5425 ^0x75B53814
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

int func_173(Hash hParam0) // Position - 0x5E6D Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_100(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

struct<10> func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x5EA7 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x5F7B Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_176(Hash hParam0) // Position - 0x5F9C Hash - 0x5E6E1858 ^0xE905275C
{
	!func_100(hParam0, 0);

	if (func_128(hParam0, -393037696))
		return true;

	return false;
}

int func_177(int iParam0) // Position - 0x5FC2 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_178(Hash hParam0, int iParam1) // Position - 0x5FE3 Hash - 0x193BF536 ^0xD3271214
{
	var outData;
	int num;
	int outIndex;
	int i;

	outData = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
			{
				num = outData[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_179(Hash hParam0) // Position - 0x6031 Hash - 0xDFE9DE2F ^0x13BBEA87
{
	Hash labelHash;

	if (!func_100(hParam0, 0))
		return "";

	labelHash = func_145(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_180(Hash hParam0) // Position - 0x6065 Hash - 0xB0090776 ^0x189C4477
{
	if (func_141(hParam0) == -126813555 || func_141(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_181(Hash hParam0) // Position - 0x6093 Hash - 0xD13A89C ^0xD02E4E64
{
	Hash labelHash;

	if (!func_100(hParam0, 0))
		return "";

	labelHash = func_147(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

void func_182(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x60C6 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_183(Ped pedParam0) // Position - 0x60F7 Hash - 0x32EB82AB ^0x786A6EFC
{
	int num;
	int pedQuality;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return num;

	pedQuality = PED::_GET_PED_QUALITY(pedParam0);

	switch (pedQuality)
	{
		case -1:
		case 2:
			num = 2;
			break;
	
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	}

	return num;
}

int func_184(int iParam0) // Position - 0x614D Hash - 0xB8EC44B7 ^0x162CC37E
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
	
		case -2092697195:
			return 777641606;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
	
		case -2043601589:
			return 1815502722;
	
		case -2040849706:
			return -375348364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
	
		case -1821314478:
			return 1135507073;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
	
		case -1638839614:
			return 213936563;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
	
		case -1434083213:
			return -1671125008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
	
		case -1378208045:
			return 1586020612;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
	
		case -1282621313:
			return 1718756614;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case -885592109:
			return -132069363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case -827518870:
			return -2115566177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
	
		case -229670230:
			return -352805801;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case -70954328:
			return 616254818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
	
		case 546758456:
			return 1491466288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
	
		case 1367447057:
			return -1886936864;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
	
		case 1450608653:
			return 1892902297;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
	
		case 1493601140:
			return -438328437;
	
		case 1527400190:
			return 1020297399;
	
		case 1543592331:
			return 1920759986;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
	
		case 1705186999:
			return 897866285;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case 1758585485:
			return 1518910503;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
	
		case 1842740532:
			return 1683741809;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
	
		case 1888419655:
			return -1066678466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
	
		case 2004357248:
			return 403588059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
	
		case 2014346813:
			return -101301217;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
	
		default:
		
	}

	return 0;
}

struct<4> func_185(BOOL bParam0) // Position - 0x6B8A Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_134(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_168(joaat("character"), func_69(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_168(joaat("character"), func_69(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_168(joaat("character"), func_69(), joaat("SLOTID_NONE"), bParam0);
}

int func_186(Hash hParam0, BOOL bParam1) // Position - 0x6C2A Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_141(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_192();
		else
			return 1;

	return 0;
}

BOOL func_187(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6C61 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_193(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_188(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x6C7C Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_194(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_189(BOOL bParam0) // Position - 0x6C9D Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_134(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_168(271701509, func_185(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_168(271701509, func_185(bParam0), 12999093, false);
}

BOOL func_190(Hash hParam0, Hash hParam1) // Position - 0x6D07 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_141(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_195(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_191(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x6D74 Hash - 0x113CD144 ^0x113CD144
{
	return func_196(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_192() // Position - 0x6D8A Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_197(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_193(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x6DA7 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_100(hParam0, 0))
		return 0;

	if (!bParam7 && func_133(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_168(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_134(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_134(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_194(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x6E26 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_134(false);
	*panParam1 = { func_168(hParam0, func_162(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_195(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x6E6B Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_196(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x6E9E Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_134(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_197(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6ED8 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_198(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_134(bParam1), hParam0, bParam3);
}

BOOL func_198(Hash hParam0) // Position - 0x6F0B Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

