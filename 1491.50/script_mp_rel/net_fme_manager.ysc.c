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
#endregion

void main() // Position - 0x0 Hash - 0x6780C3BA ^0x1B79479
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();

	while (!func_2(false, false))
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	func_4();
	func_5();
	return;
}

void func_1() // Position - 0x30 Hash - 0x590BEAB6 ^0x835A2F40
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

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x63 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_3() // Position - 0x143 Hash - 0x38BBAC53 ^0xCE40D7A
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_11();

	func_12();
	return;
}

void func_4() // Position - 0x15A Hash - 0x1D414E45 ^0x4EA603B4
{
	int i;

	func_13();

	if (HUD::TEXT_BLOCK_IS_LOADED(func_14()))
		HUD::_TEXT_BLOCK_DELETE(func_14());

	Global_1206497 = 0;

	for (i = 0; i <= 7; i = i + 1)
	{
		Global_1206497.f_239[i /*26*/] = { Global_1205938.f_1[i /*26*/] };
	
		if (Global_1206497.f_78[i /*20*/] > 0 && Global_1206497.f_78[i /*20*/] < 4)
		{
			func_15(i, 8);
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_SESSION())
				func_16(&Global_1206166[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][i]);
		
			func_17(&Global_1206497.f_78[i /*20*/]);
		}
	}

	return;
}

void func_5() // Position - 0x205 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_6(int iParam0, int iParam1) // Position - 0x211 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_7() // Position - 0x22E Hash - 0x1FABDECD ^0x67C342BC
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
	
		if (func_18() == 0)
			if (func_19())
				func_5();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	return 1;
}

BOOL func_8() // Position - 0x33F Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_9() // Position - 0x36D Hash - 0x85F59579 ^0x7EF72ECE
{
	func_20(&Global_1205938);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1205938, 228, 40);
	func_21(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1205938), 228, "g_mpFmeManagerHostData");

	if (func_22())
		Global_1206487 = { Global_1206166[func_23() /*10*/] };

	func_24(&Global_1206166);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1206166, 321, 41);
	func_25(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1206166[0 /*10*/]), 321, "g_mpFmeManagerPlayerData");

	if (!func_22())
		func_26(&Global_1206497);

	return;
}

void func_10(BOOL bParam0) // Position - 0x3EF Hash - 0x2B211437 ^0xE0D702E
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

void func_11() // Position - 0x4B8 Hash - 0x8DF297A9 ^0x8DF297A9
{
	switch (Global_1205938)
	{
		case 0:
			func_27();
			break;
	
		case 1:
			func_28();
			break;
	
		case 2:
			func_29();
			break;
	
		case 3:
			func_30();
			break;
	}

	return;
}

void func_12() // Position - 0x4FE Hash - 0x8DF297A9 ^0x8DF297A9
{
	switch (Global_1206497)
	{
		case 0:
			func_31();
			break;
	
		case 1:
			func_32();
			break;
	
		case 2:
			func_33();
			break;
	
		case 3:
			func_34();
			break;
	}

	return;
}

void func_13() // Position - 0x544 Hash - 0x1131DDF ^0x73861E98
{
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206497.f_455))
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1206497.f_455);

	return;
}

char* func_14() // Position - 0x565 Hash - 0xD47BDD17 ^0xD47BDD17
{
	return "FMUI";
}

void func_15(int iParam0, int iParam1) // Position - 0x570 Hash - 0x823E3440 ^0xE67DFC91
{
	func_35(&(Global_1206497.f_78[iParam0 /*20*/].f_6), iParam1);
	return;
}

void func_16(int iParam0) // Position - 0x58A Hash - 0xC8446C5 ^0xC8446C5
{
	var unk;

	*iParam0 = unk;
	return;
}

void func_17(int iParam0) // Position - 0x597 Hash - 0x42F34EA2 ^0x3D19A030
{
	var unk;

	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 5;
	*iParam0 = { unk };
	return;
}

int func_18() // Position - 0x5CC Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_19() // Position - 0x5DA Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_20(int* piParam0) // Position - 0x5E8 Hash - 0xC1C9E982 ^0x69C4C4B9
{
	var unk;

	unk.f_1 = 8;
	unk.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_5 = -1;
	unk.f_1.f_1.f_5.f_1 = -1;
	unk.f_1.f_1.f_7 = 255;
	unk.f_1.f_1.f_26.f_1 = -1;
	unk.f_1.f_1.f_26.f_5 = -1;
	unk.f_1.f_1.f_26.f_5.f_1 = -1;
	unk.f_1.f_1.f_26.f_7 = 255;
	unk.f_1.f_1.f_26.f_26.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_5 = -1;
	unk.f_1.f_1.f_26.f_26.f_5.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_7 = 255;
	unk.f_1.f_1.f_26.f_26.f_26.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_5 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_7 = 255;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	*piParam0 = { unk };
	return;
}

int func_21(int iParam0, int iParam1, char* sParam2) // Position - 0x6F0 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

BOOL func_22() // Position - 0x6F9 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

int func_23() // Position - 0x708 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_24(Any anParam0) // Position - 0x717 Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_36(&anParam0->[i /*10*/]);
	}

	return;
}

int func_25(int iParam0, int iParam1, char* sParam2) // Position - 0x73F Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_26(int iParam0) // Position - 0x748 Hash - 0xA7711E85 ^0xEE998996
{
	var unk;

	unk.f_1 = 19;
	unk.f_78 = 8;
	unk.f_78.f_1.f_1 = -1;
	unk.f_78.f_1.f_3 = -1;
	unk.f_78.f_1.f_7 = -1;
	unk.f_78.f_1.f_7.f_1 = -1;
	unk.f_78.f_1.f_10 = 5;
	unk.f_78.f_1.f_20.f_1 = -1;
	unk.f_78.f_1.f_20.f_3 = -1;
	unk.f_78.f_1.f_20.f_7 = -1;
	unk.f_78.f_1.f_20.f_7.f_1 = -1;
	unk.f_78.f_1.f_20.f_10 = 5;
	unk.f_78.f_1.f_20.f_20.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_3 = -1;
	unk.f_78.f_1.f_20.f_20.f_7 = -1;
	unk.f_78.f_1.f_20.f_20.f_7.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_10 = 5;
	unk.f_78.f_1.f_20.f_20.f_20.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_3 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_7 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_7.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_10 = 5;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_3 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_7 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_10 = 5;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	unk.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	unk.f_239 = 8;
	unk.f_239.f_1.f_1 = -1;
	unk.f_239.f_1.f_5 = -1;
	unk.f_239.f_1.f_5.f_1 = -1;
	unk.f_239.f_1.f_7 = 255;
	unk.f_239.f_1.f_26.f_1 = -1;
	unk.f_239.f_1.f_26.f_5 = -1;
	unk.f_239.f_1.f_26.f_5.f_1 = -1;
	unk.f_239.f_1.f_26.f_7 = 255;
	unk.f_239.f_1.f_26.f_26.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_5 = -1;
	unk.f_239.f_1.f_26.f_26.f_5.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_7 = 255;
	unk.f_239.f_1.f_26.f_26.f_26.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_5 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_7 = 255;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	unk.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	unk.f_448 = 5;
	*iParam0 = { unk };
	return;
}

void func_27() // Position - 0x97B Hash - 0x6F73E100 ^0x6F73E100
{
	func_37(1);
	return;
}

void func_28() // Position - 0x988 Hash - 0x60AD9DC3 ^0x60AD9DC3
{
	if (func_38())
		func_37(2);

	return;
}

void func_29() // Position - 0x99C Hash - 0xBF7DAD1D ^0xBF7DAD1D
{
	if (Global_1206497 >= 2)
	{
		func_39();
		func_40();
		func_37(3);
	}

	return;
}

void func_30() // Position - 0x9B9 Hash - 0x51642012 ^0x51642012
{
	func_41();
	func_42();
	func_43();
	return;
}

void func_31() // Position - 0x9CD Hash - 0x8D2DABE8 ^0xB0793862
{
	int i;

	if (Global_1205938 > 0)
	{
		if (func_22() && func_44())
		{
			for (i = 0; i <= 7; i = i + 1)
			{
				if (func_45(i, 8))
				{
					if (func_45(i, 1) && !SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[i /*20*/].f_5))
					{
						func_16(&Global_1206166[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][i]);
						func_17(&Global_1206497.f_78[i /*20*/]);
					}
					else
					{
						Global_1206166[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][i] = Global_1206487[i];
					}
				}
			}
		}
	
		func_46();
		func_47(1);
	}

	return;
}

void func_32() // Position - 0xA6C Hash - 0xBB554552 ^0xBB554552
{
	if (func_38() && Global_1205938 > 1)
	{
		func_48();
		func_47(2);
	}

	return;
}

void func_33() // Position - 0xA8F Hash - 0xD86ACCA6 ^0xD86ACCA6
{
	if (Global_1205938 > 2)
		func_47(3);

	return;
}

void func_34() // Position - 0xAA4 Hash - 0xDF65808A ^0x796FFD18
{
	func_49(&Global_1206166[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/]);
	func_50();
	return;
}

void func_35(int iParam0, int iParam1) // Position - 0xABE Hash - 0xF55E891F ^0xF55E891F
{
	func_51(iParam0, iParam1);
	return;
}

void func_36(var uParam0) // Position - 0xACE Hash - 0x3DD94994 ^0x3DD94994
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		func_16(&uParam0->[i]);
	}

	return;
}

void func_37(int iParam0) // Position - 0xAF2 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1205938 = iParam0;
	return;
}

BOOL func_38() // Position - 0xB00 Hash - 0x612B8B6D ^0x59775B1B
{
	BOOL num;

	if (!func_52())
		return false;

	if (!func_53())
		return false;

	num = 1;

	if (!func_54())
		num = 0;

	HUD::TEXT_BLOCK_REQUEST(func_14());

	if (!HUD::TEXT_BLOCK_IS_LOADED(func_14()))
		num = 0;

	return num;
}

void func_39() // Position - 0xB48 Hash - 0x92B7152F ^0x38DCAFBE
{
	var outTime;
	var inDateTime;
	var timeToAdd;
	int i;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
	inDateTime = { outTime };
	inDateTime.f_3 = 0;
	inDateTime.f_4 = 0;
	inDateTime.f_5 = 0;
	inDateTime.f_6 = 0;
	timeToAdd.f_4 = func_55();
	CLOCK::_ADD_TIME_TO_DATE_TIME(&inDateTime, &timeToAdd, &inDateTime);

	for (i = 0; !func_56(inDateTime, outTime) && i < 500; i = i + 1)
	{
		CLOCK::_ADD_TIME_TO_DATE_TIME(&inDateTime, &timeToAdd, &inDateTime);
	}

	Global_1205938.f_226 = i;
	Global_1205938.f_210 = { inDateTime };
	return;
}

void func_40() // Position - 0xBC9 Hash - 0x68E48251 ^0xA8155629
{
	var unk;
	var outTime;
	var inDateTime;
	var timeToAdd;
	int i;

	unk = Global_1901671.f_319.f_185;
	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
	inDateTime = { outTime };
	inDateTime.f_3 = 0;
	inDateTime.f_4 = unk;
	inDateTime.f_5 = 0;
	inDateTime.f_6 = 0;
	timeToAdd.f_4 = func_57();
	CLOCK::_ADD_TIME_TO_DATE_TIME(&inDateTime, &timeToAdd, &inDateTime);

	for (i = 0; !func_56(inDateTime, outTime) && i < 500; i = i + 1)
	{
		CLOCK::_ADD_TIME_TO_DATE_TIME(&inDateTime, &timeToAdd, &inDateTime);
	}

	Global_1205938.f_227 = i;
	Global_1205938.f_217 = { inDateTime };
	return;
}

void func_41() // Position - 0xC56 Hash - 0x3C4604A5 ^0xFB4416D3
{
	var outTime;
	int num;

	if (!func_58() || Global_1072759.f_28761)
		return;

	if (!func_59(2, 30))
		return;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);

	if (func_56(outTime, Global_1205938.f_210))
	{
		num = 0;
	
		if (Global_1205938.f_1[num /*26*/] != 0 && !func_60())
		{
			func_61(0);
			return;
		}
	
		if (func_62(joaat("standard")))
			func_39();
		else
			func_63(joaat("standard"));
	}

	return;
}

void func_42() // Position - 0xCDD Hash - 0xE05DC73 ^0xE087BB63
{
	var outTime;
	int num;

	if (!func_58() || Global_1072759.f_28761)
		return;

	if (!func_59(3, 30))
		return;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);

	if (func_56(outTime, Global_1205938.f_217))
	{
		num = 1;
	
		if (Global_1205938.f_1[num /*26*/] != 0 && !func_60())
		{
			func_61(1);
			return;
		}
	
		if (func_62(joaat("themed")))
			func_40();
		else
			func_63(joaat("themed"));
	}

	return;
}

void func_43() // Position - 0xD64 Hash - 0x37970BE0 ^0x37970BE0
{
	if (Global_1206497.f_448[1] >= 8)
		Global_1206497.f_448[1] = 0;

	func_64(Global_1206497.f_448[1]);
	Global_1206497.f_448[1] = Global_1206497.f_448[1] + 1;
	return;
}

BOOL func_44() // Position - 0xDAA Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

BOOL func_45(int iParam0, int iParam1) // Position - 0xDC6 Hash - 0x4DB4C8D ^0xF2228486
{
	return func_65(Global_1206497.f_78[iParam0 /*20*/].f_6, iParam1);
}

void func_46() // Position - 0xDE0 Hash - 0x1947FDAA ^0x61FB755C
{
	Global_1206497.f_455 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(1024887829);
	return;
}

void func_47(int iParam0) // Position - 0xDF8 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1206497 = iParam0;
	return;
}

void func_48() // Position - 0xE06 Hash - 0x6C24F698 ^0x6C24F698
{
	func_66();
	func_67();
	return;
}

void func_49(int* piParam0) // Position - 0xE16 Hash - 0x1DF6FB65 ^0x304BE8D
{
	Global_1206497.f_454 = (Global_1206497.f_454 + 1) % 30;

	if (Global_1206497.f_454 > 0)
		return;

	if (!func_68(piParam0->f_9, 1))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, joaat("weapon_fishingrod"), 0, false))
			func_69(&(piParam0->f_9), 1);

	return;
}

void func_50() // Position - 0xE66 Hash - 0xD3194A07 ^0xD3194A07
{
	if (Global_1206497.f_448[0] >= 8)
		Global_1206497.f_448[0] = 0;

	func_70(Global_1206497.f_448[0]);
	Global_1206497.f_448[0] = Global_1206497.f_448[0] + 1;
	return;
}

void func_51(int iParam0, int iParam1) // Position - 0xEAC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_52() // Position - 0xEBD Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_53() // Position - 0xED9 Hash - 0x2C6DE8F6 ^0xAB4AC7E1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

BOOL func_54() // Position - 0xEF5 Hash - 0x2096CB2D ^0xB9F469AD
{
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1206497.f_455);
}

var func_55() // Position - 0xF08 Hash - 0x7E2545D8 ^0x897897DD
{
	var unk;

	unk = Global_1901671.f_319.f_183;
	return unk;
}

BOOL func_56(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xF1D Hash - 0x92B3979B ^0xC243B97B
{
	if (uParam0 > uParam7)
		return true;
	else if (uParam7 > uParam0)
		return false;

	if (uParam0.f_1 > uParam7.f_1)
		return true;
	else if (uParam7.f_1 > uParam0.f_1)
		return false;

	if (uParam0.f_2 > uParam7.f_2)
		return true;
	else if (uParam7.f_2 > uParam0.f_2)
		return false;

	if (uParam0.f_3 > uParam7.f_3)
		return true;
	else if (uParam7.f_3 > uParam0.f_3)
		return false;

	if (uParam0.f_4 > uParam7.f_4)
		return true;
	else if (uParam7.f_4 > uParam0.f_4)
		return false;

	if (uParam0.f_5 > uParam7.f_5)
		return true;
	else if (uParam7.f_5 > uParam0.f_5)
		return false;

	if (uParam0.f_6 > uParam7.f_6)
		return true;
	else if (uParam7.f_6 > uParam0.f_6)
		return false;

	return false;
}

var func_57() // Position - 0x1005 Hash - 0x7E2545D8 ^0x457F0BCC
{
	var unk;

	unk = Global_1901671.f_319.f_184;
	return unk;
}

BOOL func_58() // Position - 0x101A Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_59(int iParam0, int iParam1) // Position - 0x102E Hash - 0xE1F19E3 ^0xE1F19E3
{
	Global_1206497.f_448[iParam0] = Global_1206497.f_448[iParam0] + 1;

	if (Global_1206497.f_448[iParam0] < iParam1)
		return false;

	Global_1206497.f_448[iParam0] = 0;
	return true;
}

BOOL func_60() // Position - 0x106F Hash - 0x89C3DDB ^0xCEF7E29D
{
	return Global_1572887.f_72.f_40 != 1;
}

void func_61(int iParam0) // Position - 0x1081 Hash - 0xB16C1311 ^0xED87E5B3
{
	if (func_71() != PLAYER::PLAYER_ID())
		return;

	if (func_72(iParam0) != 0)
		func_73(iParam0, 6);

	return;
}

BOOL func_62(int iParam0) // Position - 0x10A8 Hash - 0xB77DC522 ^0xE18B8180
{
	int seed;
	int num;
	int num2;
	int num3;
	BOOL flag;

	seed = func_75(func_74(iParam0));
	MISC::SET_RANDOM_SEED(seed);

	switch (iParam0)
	{
		case joaat("standard"):
			if (!func_76(&num, &num2, &num3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
	
		case joaat("themed"):
			if (!func_77(&num, &num2, &num3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
	}

	flag = func_78(num, PLAYER::PLAYER_ID(), num2, num3, seed, 0);
	MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());

	if (flag)
	{
		switch (iParam0)
		{
			case joaat("standard"):
				Global_1205938.f_224 = num;
				break;
		
			case joaat("themed"):
				Global_1205938.f_225 = num;
				break;
		}
	}

	return flag;
}

void func_63(int iParam0) // Position - 0x115C Hash - 0x8C45F596 ^0x9A433F01
{
	var outTime;
	var outDateTime;
	var timeToAdd;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
	outDateTime.f_3 = 0;
	outDateTime.f_4 = 0;
	outDateTime.f_5 = 0;
	outDateTime.f_6 = 0;
	timeToAdd.f_4 = 1;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&outTime, &timeToAdd, &outDateTime);

	switch (iParam0)
	{
		case joaat("standard"):
			Global_1205938.f_210 = { outDateTime };
			break;
	
		case joaat("themed"):
			Global_1205938.f_217 = { outDateTime };
			break;
	}

	return;
}

void func_64(int iParam0) // Position - 0x11BF Hash - 0x58398237 ^0xEF0012FE
{
	if (Global_1205938.f_1[iParam0 /*26*/] == 0)
		return;

	switch (Global_1205938.f_1[iParam0 /*26*/])
	{
		case 1:
			func_79(iParam0);
			break;
	
		case 5:
			func_80(iParam0);
			break;
	
		case 6:
			func_81(iParam0);
			break;
	}

	return;
}

BOOL func_65(int iParam0, int iParam1) // Position - 0x1215 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_66() // Position - 0x1224 Hash - 0x17AB0B88 ^0x6F3D1C13
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1093317127, "data/events/event(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1782115362, "locations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1574313466, "location(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 454625570, "location(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -171261332, "outro");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 670816652, "respawn");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1701407264, "ui");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -310067910, "variations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1481789088, "variation(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1739269194, "variation(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1648302374, "lobby_positions");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1950557689, "lobby_position(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -704316038, "lobby_position(id=%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 2005647695, ":ambient_blocking_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -75980337, ":award_mod_promo");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -13272314, ":disable_mount");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1576411076, ":duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -2068413581, ":enable_law");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1393462640, ":event_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -135059083, ":spec_cam_pos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1922656805, ":spec_cam_rot");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -185561597, ":heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1378896287, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -994988323, ":alternative_mode");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1963437248, ":inner_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1220434501, ":intro_shard_primary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -463492762, ":lobby_duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1168414437, ":lobby_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -823479386, ":max_players");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1189568052, ":min_gangs");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 948567928, ":min_players");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1755025897, ":min_players_start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -467067774, ":relationship_type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 37194763, ":name_handle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1771940760, ":name_handle_alt");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1509074216, ":on_foot");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 2121037717, ":on_mount");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -415053522, ":outer_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 2060397848, ":position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 221135615, ":lobby_blip_position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1777884256, ":rules_help");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1996633489, ":rules_secondary_help");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -399138777, ":script");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1434638998, ":shocking_event_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 1388840187, ":stack_size");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 915697271, ":stat_group");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -874721119, ":text_block");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1268019774, ":toast_icon");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1641329203, ":toast_icon_dict");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1102158142, ":tod_hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 796959411, ":tod_end_hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1068020191, ":tod_start_hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -1107031930, ":type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -605149915, ":unlock_id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, -993857789, ":unlock_level");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 511429636, ":weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206497.f_455, 733859289, ":xml");
	return;
}

void func_67() // Position - 0x16CB Hash - 0x567B9471 ^0x567B9471
{
	int i;

	for (i = 0; i <= 18; i = i + 1)
	{
		func_82(i);
	}

	return;
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x16EC Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_69(int iParam0, int iParam1) // Position - 0x16FB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_70(int iParam0) // Position - 0x170C Hash - 0x9169C0D5 ^0x188CC065
{
	if (Global_1205938.f_1[iParam0 /*26*/] == 0 && Global_1206497.f_78[iParam0 /*20*/] == 0)
		return;

	if (!func_83(iParam0))
		return;

	switch (Global_1206497.f_78[iParam0 /*20*/])
	{
		case 0:
			func_84(iParam0);
			break;
	
		case 1:
			func_85(iParam0);
			break;
	
		case 2:
			func_86(iParam0);
			break;
	
		case 3:
			func_87(iParam0);
			break;
	
		case 4:
			func_88(iParam0);
			break;
	
		case 5:
			func_89(iParam0);
			break;
	
		case 6:
			func_90(iParam0);
			break;
	}

	return;
}

Player func_71() // Position - 0x17BD Hash - 0x34E6ABCF ^0xF3026AAC
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[4]) || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[4], false) || !NETWORK::_NETWORK_IS_THREAD_ACTIVE(Global_1051645.f_16[4]))
		return 255;

	return NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[4]);
}

int func_72(int iParam0) // Position - 0x1811 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1205938.f_1[iParam0 /*26*/];
}

void func_73(int iParam0, int iParam1) // Position - 0x1823 Hash - 0x5687C3CD ^0x9B1E7D52
{
	if (Global_1205938.f_1[iParam0 /*26*/] != iParam1)
		Global_1205938.f_1[iParam0 /*26*/] = iParam1;

	return;
}

struct<7> func_74(int iParam0) // Position - 0x1846 Hash - 0x2F4BB14B ^0xB537C74E
{
	switch (iParam0)
	{
		case joaat("standard"):
			return Global_1205938.f_210;
	
		case joaat("themed"):
			return Global_1205938.f_217;
	
		default:
		
	}

	return Global_1205938.f_210;
}

int func_75(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1880 Hash - 0x5226D427 ^0xD45646F4
{
	int num;

	num = iParam0 * iParam0.f_1 * iParam0.f_2 * (iParam0.f_3 + 1) * (iParam0.f_4 + 1);
	return num;
}

BOOL func_76(var uParam0, var uParam1, var uParam2) // Position - 0x18A6 Hash - 0x25C86A3E ^0x682A6221
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	var unk23;
	int num4;
	int num5;

	num = func_91();

	if (num == 0)
		return false;

	num2 = Global_1205938.f_226 % num;
	i = num2;
	*uParam0 = func_92(i);
	num3 = func_93(i);

	if (num3 > -1 && func_94(*uParam0, num3, uParam1, uParam2))
		return true;
	else if (func_95(*uParam0, uParam1, uParam2))
		return true;

	unk = 21;
	unk23 = 21;

	for (i = 0; i <= 20; i = i + 1)
	{
		*uParam0 = func_92(i);
	
		if (*uParam0 == Global_1205938.f_224)
		{
		}
		else if (func_95(*uParam0, &unk23[num4 /*2*/], &(unk23[num4 /*2*/].f_1)))
		{
			unk[num4] = *uParam0;
			num4 = num4 + 1;
		}
	}

	if (num4 <= 0)
		return false;

	num5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % num4;

	if (num5 < 0 || num5 >= 21)
		return false;

	*uParam0 = unk[num5];
	*uParam1 = unk23[num5 /*2*/];
	*uParam2 = unk23[num5 /*2*/].f_1;
	return true;
}

BOOL func_77(var uParam0, var uParam1, var uParam2) // Position - 0x19BD Hash - 0x25C86A3E ^0x4CE64798
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	var unk23;
	int num4;
	int num5;

	num = func_96();

	if (num == 0)
		return false;

	num2 = Global_1205938.f_227 % num;
	i = num2;
	*uParam0 = func_97(i);
	num3 = func_98(i);

	if (num3 > -1 && func_94(*uParam0, num3, uParam1, uParam2))
		return true;
	else if (func_95(*uParam0, uParam1, uParam2))
		return true;

	unk = 21;
	unk23 = 21;

	for (i = 0; i <= 20; i = i + 1)
	{
		*uParam0 = func_97(i);
	
		if (*uParam0 == Global_1205938.f_225)
		{
		}
		else if (func_95(*uParam0, &unk23[num4 /*2*/], &(unk23[num4 /*2*/].f_1)))
		{
			unk[num4] = *uParam0;
			num4 = num4 + 1;
		}
	}

	if (num4 <= 0)
		return false;

	num5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % num4;

	if (num5 < 0 || num5 >= 21)
		return false;

	*uParam0 = unk[num5];
	*uParam1 = unk23[num5 /*2*/];
	*uParam2 = unk23[num5 /*2*/].f_1;
	return true;
}

BOOL func_78(int iParam0, Player plParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1AD4 Hash - 0x4DAE88FC ^0xF4F1A276
{
	int num;
	int num2;
	var unk;
	var outTime;
	var timeToAdd;
	var outTime2;
	var timeToAdd2;

	if (func_71() != PLAYER::PLAYER_ID())
		return 0;

	num = -1;
	num2 = func_99(iParam0, plParam1, &num);

	if (num2 != 0)
		return 0;

	num2 = func_100(iParam0, iParam2);

	if (num2 != 0)
		return 0;

	num2 = func_101(iParam3);

	if (num2 != 0)
		return 0;

	unk = { func_102(iParam0, iParam2, iParam3) };
	num2 = func_103(unk);

	if (num2 == 14 && func_104(iParam0))
	{
		iParam2 = func_106(iParam0, func_105(plParam1));
		iParam3 = func_107(iParam0, iParam2);
		unk = { func_102(iParam0, iParam2, iParam3) };
		num2 = func_103(unk);
	}

	if (num2 != 0)
		return 0;

	Global_1205938.f_1[num /*26*/] = 1;
	Global_1205938.f_1[num /*26*/].f_1 = iParam0;
	Global_1205938.f_1[num /*26*/].f_7 = plParam1;
	Global_1205938.f_1[num /*26*/].f_2 = iParam2;
	Global_1205938.f_1[num /*26*/].f_3 = iParam3;
	Global_1205938.f_1[num /*26*/].f_4 = iParam4;
	Global_1205938.f_1[num /*26*/].f_5 = { unk };
	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
	timeToAdd.f_4 = 3;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&outTime, &timeToAdd, &outTime);
	Global_1205938.f_1[num /*26*/].f_12 = { outTime };
	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime2);
	timeToAdd2.f_4 = 8;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&outTime2, &timeToAdd2, &outTime2);
	Global_1205938.f_1[num /*26*/].f_19 = { outTime2 };
	return 1;
}

void func_79(int iParam0) // Position - 0x1C42 Hash - 0x634D2E16 ^0x9288B032
{
	BOOL flag;

	if (func_108(iParam0, 1))
		if (func_109(Global_1206497.f_78[iParam0 /*20*/].f_3) != joaat("posse_versus"))
			func_73(iParam0, 5);
		else if (func_110(iParam0, &flag))
			if (flag)
				func_73(iParam0, 6);
			else
				func_73(iParam0, 5);

	return;
}

void func_80(int iParam0) // Position - 0x1C97 Hash - 0xD598DC8 ^0xD598DC8
{
	var outTime;

	if (!func_111(iParam0, 1))
	{
		func_73(iParam0, 6);
		return;
	}

	if (func_108(iParam0, 8))
	{
		func_73(iParam0, 6);
		return;
	}

	if (!func_111(iParam0, 64))
	{
		CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
	
		if (func_56(outTime, Global_1205938.f_1[iParam0 /*26*/].f_19))
			func_73(iParam0, 6);
	}

	return;
}

void func_81(int iParam0) // Position - 0x1CFB Hash - 0x6E0D1335 ^0x243CFFCB
{
	if (!func_111(iParam0, 1))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1205938.f_1[iParam0 /*26*/].f_9.f_1))
			VOLUME::_RELEASE_LOCK_VOLUME(Global_1205938.f_1[iParam0 /*26*/].f_9.f_1);
	
		func_112(&Global_1205938.f_1[iParam0 /*26*/]);
	}

	return;
}

void func_82(int iParam0) // Position - 0x1D43 Hash - 0x4A0075DB ^0xDC282C73
{
	if (Global_1206497.f_1[iParam0 /*4*/] != 0)
		return;

	Global_1206497.f_1[iParam0 /*4*/] = func_113(iParam0);

	if (Global_1206497.f_1[iParam0 /*4*/] == joaat("themed"))
		Global_1206497.f_1[iParam0 /*4*/].f_3 = func_114(iParam0);

	return;
}

BOOL func_83(int iParam0) // Position - 0x1D90 Hash - 0xEE77C210 ^0x17574B61
{
	if (func_45(iParam0, 8) && Global_1206497.f_78[iParam0 /*20*/] < 6)
	{
		if (!func_115(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			func_116(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_117(&Global_1206497.f_239[iParam0 /*26*/], iParam0);
		}
		else
		{
			Global_1206497.f_78[iParam0 /*20*/].f_19 = Global_1206497.f_78[iParam0 /*20*/].f_19 + 1;
		
			if (Global_1206497.f_78[iParam0 /*20*/].f_19 > 120)
			{
				func_118(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
				Global_1206497.f_78[iParam0 /*20*/].f_19 = 0;
			}
		}
	
		return false;
	}

	if (func_115(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!func_119(Global_1205938.f_1[iParam0 /*26*/].f_5, Global_1206497.f_78[iParam0 /*20*/].f_7))
			return false;
	
		func_118(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}

	if (func_120())
		return false;

	return true;
}

void func_84(int iParam0) // Position - 0x1E7A Hash - 0x8FD740CB ^0xEA6B5206
{
	if (Global_1205938.f_1[iParam0 /*26*/] > 0 && Global_1205938.f_1[iParam0 /*26*/] < 6)
		func_121(iParam0, 1);

	return;
}

void func_85(int iParam0) // Position - 0x1EA9 Hash - 0x67849DC8 ^0x54B21D55
{
	var unk;
	var unk4;
	var outTime;

	if (Global_1205938.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}

	if (!func_115(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (Global_1205938.f_1[iParam0 /*26*/].f_1 != -1 && func_122(Global_1205938.f_1[iParam0 /*26*/].f_5))
		{
			if (func_123(&unk4, Global_1205938.f_1[iParam0 /*26*/].f_1) && func_124(&unk4) && func_125(&unk4, Global_1205938.f_1[iParam0 /*26*/].f_2))
				func_126(unk4, 2060397848, &unk, true);
		
			Global_1206497.f_78[iParam0 /*20*/].f_3 = Global_1205938.f_1[iParam0 /*26*/].f_1;
			Global_1206497.f_78[iParam0 /*20*/].f_7 = { Global_1205938.f_1[iParam0 /*26*/].f_5 };
			Global_1206497.f_78[iParam0 /*20*/].f_9 = Global_1205938.f_1[iParam0 /*26*/].f_11;
			func_116(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
	}
	else if (Global_1205938.f_1[iParam0 /*26*/] > 1)
	{
		if (func_109(Global_1206497.f_78[iParam0 /*20*/].f_3) != joaat("posse_versus"))
		{
			CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
		
			if (func_56(outTime, Global_1205938.f_1[iParam0 /*26*/].f_12))
			{
				func_121(iParam0, 6);
				return;
			}
		
			func_121(iParam0, 2);
		}
		else
		{
			func_15(iParam0, 1024);
			func_121(iParam0, 4);
		}
	}

	return;
}

void func_86(int iParam0) // Position - 0x200B Hash - 0x2A8F3F7 ^0xA10CB002
{
	if (Global_1205938.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}

	if (func_45(iParam0, 1) && Global_1205938.f_1[iParam0 /*26*/] > 2)
		func_121(iParam0, 3);

	return;
}

void func_87(int iParam0) // Position - 0x204D Hash - 0xBA806568 ^0x9D523E70
{
	if (Global_1205938.f_1[iParam0 /*26*/] >= 6)
	{
		if (func_45(iParam0, 512))
			func_127(1024);
	
		func_121(iParam0, 6);
		return;
	}

	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[iParam0 /*20*/].f_5))
	{
		func_121(iParam0, 6);
		return;
	}

	func_128(iParam0);

	if (!func_45(iParam0, 512))
	{
		func_129(iParam0);
	}
	else if (!func_115(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_130())
		{
			func_116(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_121(iParam0, 4);
		}
	}

	return;
}

void func_88(int iParam0) // Position - 0x20E4 Hash - 0x269BC07 ^0xB25CAC7A
{
	int num;
	var unk;
	var scriptName;
	struct<10> args;
	eStackSize stackSize;
	var unk22;

	if (Global_1205938.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}

	if (func_45(iParam0, 1) && !SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[iParam0 /*20*/].f_5))
	{
		func_121(iParam0, 6);
		return;
	}

	func_128(iParam0);
	num = Global_1205938.f_1[iParam0 /*26*/].f_1;

	if (!func_123(&unk, num))
		return;

	func_131(unk, -399138777, &scriptName, true);
	SCRIPTS::REQUEST_SCRIPT(&scriptName);

	if (!SCRIPTS::HAS_SCRIPT_LOADED(&scriptName))
		return;

	args = -1;
	args.f_1 = -1;
	args.f_5 = 255;
	args.f_7 = -1;
	args.f_7.f_1 = -1;
	args.f_1 = num;
	args = iParam0;
	args.f_5 = Global_1205938.f_1[iParam0 /*26*/].f_7;
	args.f_2 = Global_1205938.f_1[iParam0 /*26*/].f_2;
	args.f_3 = Global_1205938.f_1[iParam0 /*26*/].f_3;
	args.f_4 = Global_1205938.f_1[iParam0 /*26*/].f_4;
	args.f_7 = { Global_1206497.f_78[iParam0 /*20*/].f_7 };
	args.f_9 = Global_1206497.f_1[num /*4*/];

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(args.f_5))
		args.f_6 = GANG::NETWORK_GET_GANG_ID(args.f_5);

	stackSize = 1024;

	if (func_132(unk, 1388840187, &unk22, false))
		stackSize = func_133(unk22);

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(stackSize) == 0)
		return;

	if (func_134(args.f_7, 0, 128))
		return;

	if (func_135(Global_1205938.f_1[iParam0 /*26*/].f_7, Global_1205938.f_1[iParam0 /*26*/].f_1))
		Global_1206497.f_78[iParam0 /*20*/].f_4 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&scriptName, &args, 10, stackSize);

	func_121(iParam0, 5);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&scriptName);
	return;
}

void func_89(int iParam0) // Position - 0x229E Hash - 0xCC526D4E ^0x1511167A
{
	if (Global_1205938.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}

	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[iParam0 /*20*/].f_4))
	{
		func_121(iParam0, 6);
		return;
	}

	if (func_45(iParam0, 1) && !SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[iParam0 /*20*/].f_5))
	{
		func_121(iParam0, 6);
		return;
	}

	func_128(iParam0);
	return;
}

void func_90(int iParam0) // Position - 0x230C Hash - 0x7B678357 ^0x3EEA5630
{
	if (!func_115(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		func_116(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT());

	if (SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[iParam0 /*20*/].f_4))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1206497.f_78[iParam0 /*20*/].f_4, false))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206497.f_78[iParam0 /*20*/].f_4);
	}
	else if (SCRIPTS::DOES_THREAD_EXIST(Global_1206497.f_78[iParam0 /*20*/].f_5))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1206497.f_78[iParam0 /*20*/].f_5, false))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206497.f_78[iParam0 /*20*/].f_5);
	}
	else
	{
		if (func_115(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
			func_118(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	
		if (Global_1205938.f_1[iParam0 /*26*/] == 6 || !func_119(Global_1205938.f_1[iParam0 /*26*/].f_5, Global_1206497.f_78[iParam0 /*20*/].f_7))
		{
			func_16(&Global_1206166[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iParam0]);
			func_17(&Global_1206497.f_78[iParam0 /*20*/]);
		}
	}

	return;
}

int func_91() // Position - 0x2415 Hash - 0x80C72B5F ^0x87EAFF00
{
	if (Global_1901671.f_319.f_189 == -1)
		return 0;
	else if (Global_1901671.f_319.f_190 == -1)
		return 1;
	else if (Global_1901671.f_319.f_191 == -1)
		return 2;
	else if (Global_1901671.f_319.f_192 == -1)
		return 3;
	else if (Global_1901671.f_319.f_193 == -1)
		return 4;
	else if (Global_1901671.f_319.f_194 == -1)
		return 5;
	else if (Global_1901671.f_319.f_195 == -1)
		return 6;
	else if (Global_1901671.f_319.f_196 == -1)
		return 7;
	else if (Global_1901671.f_319.f_197 == -1)
		return 8;
	else if (Global_1901671.f_319.f_198 == -1)
		return 9;
	else if (Global_1901671.f_319.f_199 == -1)
		return 10;
	else if (Global_1901671.f_319.f_200 == -1)
		return 11;
	else if (Global_1901671.f_319.f_201 == -1)
		return 12;
	else if (Global_1901671.f_319.f_202 == -1)
		return 13;
	else if (Global_1901671.f_319.f_203 == -1)
		return 14;
	else if (Global_1901671.f_319.f_204 == -1)
		return 15;
	else if (Global_1901671.f_319.f_205 == -1)
		return 16;
	else if (Global_1901671.f_319.f_206 == -1)
		return 17;
	else if (Global_1901671.f_319.f_207 == -1)
		return 18;
	else if (Global_1901671.f_319.f_208 == -1)
		return 19;
	else if (Global_1901671.f_319.f_209 == -1)
		return 20;

	return 21;
}

int func_92(int iParam0) // Position - 0x25CD Hash - 0xE259059 ^0x7DABB857
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_319.f_189;
	
		case 1:
			return Global_1901671.f_319.f_190;
	
		case 2:
			return Global_1901671.f_319.f_191;
	
		case 3:
			return Global_1901671.f_319.f_192;
	
		case 4:
			return Global_1901671.f_319.f_193;
	
		case 5:
			return Global_1901671.f_319.f_194;
	
		case 6:
			return Global_1901671.f_319.f_195;
	
		case 7:
			return Global_1901671.f_319.f_196;
	
		case 8:
			return Global_1901671.f_319.f_197;
	
		case 9:
			return Global_1901671.f_319.f_198;
	
		case 10:
			return Global_1901671.f_319.f_199;
	
		case 11:
			return Global_1901671.f_319.f_200;
	
		case 12:
			return Global_1901671.f_319.f_201;
	
		case 13:
			return Global_1901671.f_319.f_202;
	
		case 14:
			return Global_1901671.f_319.f_203;
	
		case 15:
			return Global_1901671.f_319.f_204;
	
		case 16:
			return Global_1901671.f_319.f_205;
	
		case 17:
			return Global_1901671.f_319.f_206;
	
		case 18:
			return Global_1901671.f_319.f_207;
	
		case 19:
			return Global_1901671.f_319.f_208;
	
		case 20:
			return Global_1901671.f_319.f_209;
	
		default:
		
	}

	return -1;
}

int func_93(int iParam0) // Position - 0x2758 Hash - 0xE259059 ^0xC98F725D
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_319.f_211;
	
		case 1:
			return Global_1901671.f_319.f_212;
	
		case 2:
			return Global_1901671.f_319.f_213;
	
		case 3:
			return Global_1901671.f_319.f_214;
	
		case 4:
			return Global_1901671.f_319.f_215;
	
		case 5:
			return Global_1901671.f_319.f_216;
	
		case 6:
			return Global_1901671.f_319.f_217;
	
		case 7:
			return Global_1901671.f_319.f_218;
	
		case 8:
			return Global_1901671.f_319.f_219;
	
		case 9:
			return Global_1901671.f_319.f_220;
	
		case 10:
			return Global_1901671.f_319.f_221;
	
		case 11:
			return Global_1901671.f_319.f_222;
	
		case 12:
			return Global_1901671.f_319.f_223;
	
		case 13:
			return Global_1901671.f_319.f_224;
	
		case 14:
			return Global_1901671.f_319.f_225;
	
		case 15:
			return Global_1901671.f_319.f_226;
	
		case 16:
			return Global_1901671.f_319.f_227;
	
		case 17:
			return Global_1901671.f_319.f_228;
	
		case 18:
			return Global_1901671.f_319.f_229;
	
		case 19:
			return Global_1901671.f_319.f_230;
	
		case 20:
			return Global_1901671.f_319.f_231;
	
		default:
		
	}

	return -1;
}

BOOL func_94(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0x28E3 Hash - 0x7C195954 ^0x55C5B006
{
	Any any;
	Any any2;
	var unk9;
	var unk14;
	int numChildren;
	int numChildren2;
	var unk19;
	int i;
	int j;
	int num;
	int num2;
	int num3;
	int num4;

	if (func_123(&any, uParam0))
	{
		any2 = { any };
	
		if (func_136(&any2))
		{
			if (func_137(&any2, iParam1))
			{
				func_132(any2, -1378896287, uParam3, true);
				func_132(any2, -994988323, &num3, false);
			}
		}
	}

	if (*uParam3 == 0)
		return false;

	if (func_124(&any))
	{
		numChildren2 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
	
		for (i = 0; i <= numChildren2 - 1; i = i + 1)
		{
			unk14 = { any };
		
			if (func_138(&unk14, i))
			{
				any2 = { unk14 };
			
				if (func_136(&any2))
				{
					numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any2, any2.f_1);
				
					if (numChildren > 0)
					{
						for (j = 0; j <= numChildren - 1; j = j + 1)
						{
							unk9 = { any2 };
						
							if (func_137(&unk9, j))
							{
								func_132(unk9, -1378896287, &unk19, true);
								num4 = 0;
							
								if (num3 != 0)
									func_132(unk9, -994988323, &num4, false);
							
								if (unk19 == *uParam3 || num3 != 0 && num3 == num4)
									num = num + 1;
							}
						}
					}
				}
			}
		}
	
		if (num == 0)
			return false;
	
		num2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % num;
		num = 0;
	
		for (i = 0; i <= numChildren2 - 1; i = i + 1)
		{
			unk14 = { any };
		
			if (func_138(&unk14, i))
			{
				any2 = { unk14 };
			
				if (func_136(&any2))
				{
					numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any2, any2.f_1);
				
					if (numChildren > 0)
					{
						for (j = 0; j <= numChildren - 1; j = j + 1)
						{
							unk9 = { any2 };
						
							if (func_137(&unk9, j))
							{
								func_132(unk9, -1378896287, &unk19, true);
								num4 = 0;
							
								if (num3 != 0)
									func_132(unk9, -994988323, &num4, false);
							
								if (unk19 == *uParam3 || num3 != 0 && num3 == num4)
								{
									if (num == num2)
									{
										*uParam3 = unk19;
										func_132(unk14, -1378896287, uParam2, true);
										return true;
									}
								
									num = num + 1;
								}
							}
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_95(int iParam0, var uParam1, var uParam2) // Position - 0x2B13 Hash - 0xAA17EA47 ^0x1D0C88EB
{
	int num;
	Any any;
	Any any2;
	var unk9;
	Any numChildren;
	int num2;
	int num3;
	int num4;
	int numChildren2;
	var unk14;
	BOOL flag;

	num = -1;

	if (func_99(iParam0, PLAYER::PLAYER_ID(), &num) == 0)
	{
		*uParam1 = 0;
	
		if (func_123(&any, iParam0) && func_124(&any))
		{
			numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
			num2 = 0;
			num3 = 0;
			num4 = 0;
			numChildren2 = 0;
			unk14 = -1;
			unk14.f_1 = -1;
		
			while (!flag)
			{
				if (num3 > 99)
					return false;
			
				num2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % numChildren;
				any2 = { any };
			
				if (func_138(&any2, num2))
				{
					func_132(any2, -1378896287, uParam1, true);
				
					if (func_100(iParam0, *uParam1) == 0 && func_136(&any2))
					{
						numChildren2 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any2, any2.f_1);
						num4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % numChildren2;
						unk9 = { any2 };
					
						if (func_137(&unk9, num4))
						{
							func_132(unk9, -1378896287, uParam2, true);
						
							if (func_101(*uParam2) == 0)
							{
								unk14 = { func_102(iParam0, *uParam1, *uParam2) };
							
								if (func_103(unk14) == 0)
									flag = true;
							}
						}
					}
				}
			
				num3 = num3 + 1;
			}
		}
	}

	return true;
}

int func_96() // Position - 0x2C3E Hash - 0x80C72B5F ^0xBECF713B
{
	if (Global_1901671.f_319.f_232 == -1)
		return 0;
	else if (Global_1901671.f_319.f_233 == -1)
		return 1;
	else if (Global_1901671.f_319.f_234 == -1)
		return 2;
	else if (Global_1901671.f_319.f_235 == -1)
		return 3;
	else if (Global_1901671.f_319.f_236 == -1)
		return 4;
	else if (Global_1901671.f_319.f_237 == -1)
		return 5;
	else if (Global_1901671.f_319.f_238 == -1)
		return 6;
	else if (Global_1901671.f_319.f_239 == -1)
		return 7;
	else if (Global_1901671.f_319.f_240 == -1)
		return 8;
	else if (Global_1901671.f_319.f_241 == -1)
		return 9;
	else if (Global_1901671.f_319.f_242 == -1)
		return 10;
	else if (Global_1901671.f_319.f_243 == -1)
		return 11;
	else if (Global_1901671.f_319.f_244 == -1)
		return 12;
	else if (Global_1901671.f_319.f_245 == -1)
		return 13;
	else if (Global_1901671.f_319.f_246 == -1)
		return 14;
	else if (Global_1901671.f_319.f_247 == -1)
		return 15;
	else if (Global_1901671.f_319.f_248 == -1)
		return 16;
	else if (Global_1901671.f_319.f_249 == -1)
		return 17;
	else if (Global_1901671.f_319.f_250 == -1)
		return 18;
	else if (Global_1901671.f_319.f_251 == -1)
		return 19;
	else if (Global_1901671.f_319.f_252 == -1)
		return 20;

	return 21;
}

int func_97(int iParam0) // Position - 0x2DF6 Hash - 0xD9680264 ^0xD8E14CA1
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_319.f_232 + 8;
	
		case 1:
			return Global_1901671.f_319.f_233 + 8;
	
		case 2:
			return Global_1901671.f_319.f_234 + 8;
	
		case 3:
			return Global_1901671.f_319.f_235 + 8;
	
		case 4:
			return Global_1901671.f_319.f_236 + 8;
	
		case 5:
			return Global_1901671.f_319.f_237 + 8;
	
		case 6:
			return Global_1901671.f_319.f_238 + 8;
	
		case 7:
			return Global_1901671.f_319.f_239 + 8;
	
		case 8:
			return Global_1901671.f_319.f_240 + 8;
	
		case 9:
			return Global_1901671.f_319.f_241 + 8;
	
		case 10:
			return Global_1901671.f_319.f_242 + 8;
	
		case 11:
			return Global_1901671.f_319.f_243 + 8;
	
		case 12:
			return Global_1901671.f_319.f_244 + 8;
	
		case 13:
			return Global_1901671.f_319.f_245 + 8;
	
		case 14:
			return Global_1901671.f_319.f_246 + 8;
	
		case 15:
			return Global_1901671.f_319.f_247 + 8;
	
		case 16:
			return Global_1901671.f_319.f_248 + 8;
	
		case 17:
			return Global_1901671.f_319.f_249 + 8;
	
		case 18:
			return Global_1901671.f_319.f_250 + 8;
	
		case 19:
			return Global_1901671.f_319.f_251 + 8;
	
		case 20:
			return Global_1901671.f_319.f_252 + 8;
	
		default:
		
	}

	return -1;
}

int func_98(int iParam0) // Position - 0x2FAB Hash - 0xDD27D11F ^0x2986D8E7
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_319.f_253;
	
		case 1:
			return Global_1901671.f_319.f_254;
	
		case 2:
			return Global_1901671.f_319.f_255;
	
		case 3:
			return Global_1901671.f_319.f_256;
	
		case 4:
			return Global_1901671.f_319.f_257;
	
		case 5:
			return Global_1901671.f_319.f_258;
	
		case 6:
			return Global_1901671.f_319.f_259;
	
		case 7:
			return Global_1901671.f_319.f_260;
	
		case 8:
			return Global_1901671.f_319.f_261;
	
		case 9:
			return Global_1901671.f_319.f_262;
	
		case 10:
			return Global_1901671.f_319.f_263;
	
		case 11:
			return Global_1901671.f_319.f_264;
	
		case 12:
			return Global_1901671.f_319.f_265;
	
		case 13:
			return Global_1901671.f_319.f_266;
	
		case 14:
			return Global_1901671.f_319.f_267;
	
		case 15:
			return Global_1901671.f_319.f_268;
	
		case 16:
			return Global_1901671.f_319.f_269;
	
		case 17:
			return Global_1901671.f_319.f_270;
	
		case 18:
			return Global_1901671.f_319.f_271;
	
		case 19:
			return Global_1901671.f_319.f_272;
	
		case 20:
			return Global_1901671.f_319.f_273;
	
		default:
		
	}

	return -1;
}

int func_99(int iParam0, Player plParam1, var uParam2) // Position - 0x3148 Hash - 0xD17880D9 ^0xC8F6AA49
{
	Any gangId;
	int num;
	int num2;
	int num3;
	var unk;
	int num4;

	if (plParam1 == 255)
		return 1;

	if (iParam0 == -1)
		return 3;

	if (func_109(iParam0) == joaat("posse_versus"))
	{
		if (func_139(plParam1, true))
			return 9;
	
		gangId = GANG::NETWORK_GET_GANG_ID(plParam1);
	
		if (!GANG::NETWORK_IS_GANG_ID_VALID(gangId))
			return 7;
	
		if (!func_140(gangId))
			return 8;
	
		num = 2;
	
		if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId) < num)
			return 10;
	
		if (func_141(plParam1, true, false, true))
			return 17;
	}

	*uParam2 = func_142(Global_1206497.f_1[iParam0 /*4*/]);

	if (*uParam2 == -1)
		return 12;

	if (Global_1205938.f_1[*uParam2 /*26*/].f_1 != -1)
		return 13;

	num2 = 0;
	num3 = 24;

	if (func_123(&unk, iParam0))
	{
		func_143(unk, -1068020191, &num2, false);
		func_143(unk, 796959411, &num3, false);
	}

	num4 = func_145(func_144());

	if (num2 < num3)
		if (num4 < num2 || num4 >= num3)
			return 11;
	else if (num4 >= num3 && num4 < num2)
		return 11;

	return 0;
}

int func_100(int iParam0, int iParam1) // Position - 0x3276 Hash - 0xA30DD1FB ^0x99496526
{
	Vector3 vector;

	if (iParam1 == 0)
		return 4;

	if (func_109(iParam0) == joaat("posse_versus"))
	{
		vector = { func_146(iParam0, iParam1) };
	
		if (!_IS_NULL_VECTOR(vector) && VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 100f, 0, 0, 0) || VOLUME::_0xAA9EE2AAFC717623(vector, 0, 0, 0))
			return 16;
	}

	return 0;
}

int func_101(int iParam0) // Position - 0x32DA Hash - 0x99302E3E ^0x99302E3E
{
	if (iParam0 == 0)
		return 5;

	return 0;
}

struct<2> func_102(int iParam0, int iParam1, int iParam2) // Position - 0x32ED Hash - 0xE85DEB43 ^0xBF29510B
{
	var unk;
	var unk6;
	var unk7;

	if (func_123(&unk, iParam0) && func_124(&unk) && func_125(&unk, iParam1) && func_136(&unk) && func_148(&unk, iParam2))
	{
		func_132(unk, -605149915, &unk6, true);
	
		if (func_149(6, unk6, &unk7))
			return func_150(unk7.f_3, 6);
	}

	return func_151();
}

int func_103(var uParam0, var uParam1) // Position - 0x335D Hash - 0xC6213AD ^0xC6213AD
{
	if (!func_122(uParam0))
	{
		func_153(func_152(uParam0), 8, 6, 255);
		return 6;
	}
	else if (func_154(uParam0) != -1)
	{
		func_153(func_152(uParam0), 8, 14, 255);
		return 14;
	}
	else if (!func_155(uParam0))
	{
		func_153(func_152(uParam0), 8, 21, 255);
		return 21;
	}
	else if (!func_156(uParam0))
	{
		func_153(func_152(uParam0), 8, 22, 255);
		return 22;
	}
	else if (func_130())
	{
		func_153(func_152(uParam0), 8, 15, 255);
		return 15;
	}

	return 0;
}

BOOL func_104(int iParam0) // Position - 0x3412 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return true;
	
		default:
		
	}

	return false;
}

Vector3 func_105(Player plParam0) // Position - 0x3439 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

int func_106(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x344D Hash - 0x90D55BFA ^0xB75D84E2
{
	int num;
	Any any;
	var unk5;
	int numChildren;
	Vector3 vector;
	float num2;
	float num3;
	float num4;
	float num5;
	var value;
	int num6;
	int i;
	Player player;
	int j;

	num = 0;

	if (func_123(&any, iParam0) && func_124(&any))
	{
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
		num5 = 999999.9f;
	
		for (j = 0; j <= numChildren - 1; j = j + 1)
		{
			unk5 = { any };
		
			if (func_138(&unk5, j))
			{
				num6 = 0;
				func_132(unk5, -1378896287, &num6, true);
			
				if (func_157(iParam0, num6) == -1 && func_100(iParam0, num6) == 0)
				{
					func_126(unk5, 2060397848, &vector, true);
				
					if (_IS_NULL_VECTOR(vector))
						num3 = 0f;
					else
						num3 = BUILTIN::VDIST(vParam1, vector);
				
					num2 = func_158(iParam0, num6);
					num4 = 0f;
				
					if (num3 > num2)
						num4 = num4 + ((num3 - num2) * 0.01f);
				
					value = func_159(vector, 0f, 0f, 0f, num2, num2, num2, joaat("volSphere"), 1, 8);
				
					for (i = 0; i <= 31; i = i + 1)
					{
						if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&value, i))
						{
							player = PLAYER::INT_TO_PLAYERINDEX(i);
						
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && !GANG::_NETWORK_IS_GANG_MEMBER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), player))
								num4 = num4 + 1f;
						}
					}
				
					if (num4 < num5)
					{
						num5 = num4;
						num = num6;
					}
				}
			}
		}
	}

	return num;
}

int func_107(int iParam0, int iParam1) // Position - 0x35A4 Hash - 0xC74F208 ^0x7D5C475D
{
	int num;
	Any any;
	Any numChildren;
	int num2;

	num = 0;

	if (func_123(&any, iParam0) && func_124(&any) && func_125(&any, iParam1) && func_136(&any))
	{
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
		num2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % numChildren;
	
		if (func_137(&any, num2))
			func_132(any, -1378896287, &num, true);
	}

	return num;
}

BOOL func_108(int iParam0, int iParam1) // Position - 0x3615 Hash - 0xAEED8ABC ^0x281890F2
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && !func_65(Global_1206166[i /*10*/][iParam0], iParam1))
			return false;
	}

	return true;
}

int func_109(int iParam0) // Position - 0x365D Hash - 0x220835E3 ^0xD3CA642C
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

BOOL func_110(int iParam0, var uParam1) // Position - 0x3679 Hash - 0x77DDFBD6 ^0xBE5609C7
{
	Vector3 vector;
	var args;

	vector = { func_146(Global_1205938.f_1[iParam0 /*26*/].f_1, Global_1205938.f_1[iParam0 /*26*/].f_2) };

	if (_IS_NULL_VECTOR(vector))
		return true;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1205938.f_1[iParam0 /*26*/].f_9))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vector, 100f, false, 0, MISC::GET_HASH_KEY("NET_TRAIN")))
		{
			*uParam1 = 1;
			return true;
		}
	
		args = { vector };
		args.f_4 = 100f;
		args.f_6 = MISC::GET_HASH_KEY("NET_FME_MANAGER");
		args.f_7 = Global_1205938.f_1[iParam0 /*26*/].f_4;
		args.f_5 = 129;
		Global_1205938.f_1[iParam0 /*26*/].f_9 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args);
	}

	switch (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1205938.f_1[iParam0 /*26*/].f_9))
	{
		case 3:
			Global_1205938.f_1[iParam0 /*26*/].f_9.f_1 = VOLUME::_0x351D71B8B72B858B(Global_1205938.f_1[iParam0 /*26*/].f_9);
			return true;
	
		case 4:
			*uParam1 = 1;
			Global_1205938.f_1[iParam0 /*26*/].f_9 = 0;
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_111(int iParam0, int iParam1) // Position - 0x3785 Hash - 0x4B02EE0 ^0x4A2C2E8A
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_65(Global_1206166[i /*10*/][iParam0], iParam1))
			return true;
	}

	return false;
}

void func_112(int iParam0) // Position - 0x37CC Hash - 0x1B064952 ^0x57EACDD2
{
	var unk;

	unk.f_1 = -1;
	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_7 = 255;
	*iParam0 = { unk };
	return;
}

int func_113(int iParam0) // Position - 0x37FC Hash - 0x7DE3ED3E ^0xEE30A844
{
	int num;
	var unk;

	num = 0;

	if (func_123(&unk, iParam0))
		func_132(unk, -1107031930, &num, true);

	return num;
}

int func_114(int iParam0) // Position - 0x3828 Hash - 0xDF7F422F ^0xE2C114B9
{
	int num;
	var unk;

	num = 4;

	if (func_123(&unk, iParam0))
		func_132(unk, -993857789, &num, false);

	return num;
}

BOOL func_115(int iParam0, int iParam1, Player plParam2) // Position - 0x3854 Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_65(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

void func_116(int iParam0, int iParam1, int iParam2) // Position - 0x386E Hash - 0x442ECCB5 ^0x442ECCB5
{
	func_35(&Global_1206166[iParam2 /*10*/][iParam0], iParam1);
	return;
}

void func_117(var uParam0, int iParam1) // Position - 0x3888 Hash - 0xA736EBC0 ^0xE9585C54
{
	var unk;

	if (func_71() == PLAYER::PLAYER_ID())
	{
		func_160(uParam0, iParam1, PLAYER::PLAYER_ID());
	}
	else
	{
		unk.f_5 = -1;
		unk.f_9 = -1;
		unk.f_10 = -1;
		unk.f_11.f_1 = -1;
		unk.f_11.f_5 = -1;
		unk.f_11.f_5.f_1 = -1;
		unk.f_11.f_7 = 255;
		unk.f_4 = 2;
		unk.f_11 = { *uParam0 };
		unk.f_9 = iParam1;
		func_162(&unk, func_161(false, 8));
	}

	return;
}

void func_118(int iParam0, int iParam1, int iParam2) // Position - 0x3902 Hash - 0x442ECCB5 ^0x442ECCB5
{
	func_163(&Global_1206166[iParam2 /*10*/][iParam0], iParam1);
	return;
}

BOOL func_119(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x391C Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_120() // Position - 0x3937 Hash - 0xEDE4804A ^0xEDE4804A
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_45(i, 8))
			return true;
	}

	return false;
}

void func_121(int iParam0, int iParam1) // Position - 0x3961 Hash - 0x5687C3CD ^0xFDBB31E6
{
	if (Global_1206497.f_78[iParam0 /*20*/] != iParam1)
		Global_1206497.f_78[iParam0 /*20*/] = iParam1;

	return;
}

BOOL func_122(int iParam0, var uParam1) // Position - 0x3984 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_164(iParam0))
		return false;

	if (iParam0.f_1 < 0)
		return false;

	if (iParam0.f_1 >= func_165(iParam0))
		return false;

	return true;
}

BOOL func_123(Any* panParam0, int iParam1) // Position - 0x39B8 Hash - 0x923307EB ^0xCB9659A0
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206497.f_455))
		return false;

	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1093317127;
	panParam0->f_3 = func_166(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_124(Any* panParam0) // Position - 0x39FA Hash - 0xECAE432B ^0x7E3263BA
{
	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1782115362;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_125(Any* panParam0, int iParam1) // Position - 0x3A1F Hash - 0x5E449B87 ^0xA45EA367
{
	panParam0->f_2 = 454625570;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_126(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0x3A40 Hash - 0x75EEBFEF ^0x20737992
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

void func_127(int iParam0) // Position - 0x3A66 Hash - 0x3BF5B800 ^0x153609DB
{
	func_69(&(Global_1572887.f_72.f_16), iParam0);
	return;
}

void func_128(int iParam0) // Position - 0x3A7C Hash - 0x291B2D92 ^0xF7405F83
{
	if (!func_115(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && func_45(iParam0, 32))
		func_116(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());

	return;
}

void func_129(int iParam0) // Position - 0x3AAD Hash - 0xF324D1FF ^0xE67D5C2E
{
	Any gangId;
	int numGangMembers;
	int num;
	Player gangLeader;
	Player player;
	Player i;

	if (func_45(iParam0, 512))
		return;

	if (!func_45(iParam0, 32))
		return;

	if (func_60())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}

	if (func_130())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (!GANG::NETWORK_IS_GANG_ID_VALID(gangId))
		return;

	numGangMembers = GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId);

	if (numGangMembers == 1)
	{
		func_167(iParam0);
	}
	else
	{
		num = func_168(iParam0, 64, gangId);
	
		if (num == numGangMembers)
		{
			if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				func_167(iParam0);
		}
		else if (!func_169(&(Global_1206497.f_78[iParam0 /*20*/].f_16)))
		{
			func_170(&(Global_1206497.f_78[iParam0 /*20*/].f_16), true);
		}
		else if (func_171(&(Global_1206497.f_78[iParam0 /*20*/].f_16)) > 15000)
		{
			if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			{
				gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
			
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader) || !func_115(iParam0, 64, gangLeader))
					func_172(true);
			}
			else
			{
				i = 0;
			
				for (i = 0; i <= 31; i = i + 1)
				{
					player = PLAYER::INT_TO_PLAYERINDEX(i);
				
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && player != PLAYER::PLAYER_ID() && GANG::_NETWORK_IS_GANG_MEMBER(gangId, player) && !func_115(iParam0, 64, i))
						func_173(player, false, 120);
				}
			}
		}
	}

	return;
}

BOOL func_130() // Position - 0x3C3E Hash - 0xA5A53F42 ^0x62B332A8
{
	return func_68(Global_1572887.f_8, 1);
}

int func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, BOOL bParam7) // Position - 0x3C51 Hash - 0x75EEBFEF ^0xA888E94A
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x3C77 Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return true;
	}
	else
	{
		bParam7;
	}

	return false;
}

eStackSize func_133(int iParam0) // Position - 0x3CA7 Hash - 0x355813CB ^0xCADFC114
{
	switch (iParam0)
	{
		case joaat("posse_feud"):
			return &func_23;
	
		case joaat("MISSION"):
			return 45000;
	
		case joaat("NETWORK_BOT"):
			return 4096;
	
		case joaat("MINIGAME_INTRO"):
			return 6001;
	
		case joaat("net_fetch_hideout_leader"):
			return 200;
	
		case joaat("DEBUG_SCRIPT"):
			return 4080;
	
		case joaat("MP_MISSION_DOWNLOADER"):
			return 3088;
	
		case joaat("net_cutscene"):
			return 2051;
	
		case joaat("MISSION_INTRO"):
			return 6000;
	
		case joaat("FME_THM_LARGE"):
			return 7001;
	
		case joaat("MAP_EVENTS"):
			return 2026;
	
		case joaat("net_moonshine_property"):
			return 3982;
	
		case joaat("UPDATE"):
			return 1300;
	
		case joaat("STRANGER_MISSION_FETCH"):
			return 10000;
	
		case joaat("Transition"):
			return 25500;
	
		case joaat("FME_PV_SMALL"):
			return 3000;
	
		case joaat("posse_versus_race"):
			return 1600;
	
		case joaat("CHARACTER_REROLL"):
			return 10003;
	
		case joaat("region"):
			return 5503;
	
		case joaat("FME_THM_MEDIUM"):
			return 5501;
	
		case joaat("net_beat_manager"):
			return 3500;
	
		case joaat("FME_STD_LARGE"):
			return 7002;
	
		case joaat("DEBUG_MP_STEAL_VEHICLE"):
			return 32768;
	
		case joaat("PAUSE_MENU_SCRIPT"):
			return 2000;
	
		case joaat("SHOP"):
			return 6005;
	
		case joaat("FME_STD_MEDIUM"):
			return 5502;
	
		case joaat("DEFAULT"):
			return 1024;
	
		case joaat("COUPONS_EVENTS"):
			return 2053;
	
		case joaat("DB_MEGA"):
			return 5400;
	
		case joaat("ROLE_PROGRESSION_EVENTS"):
			return 2048;
	
		case joaat("PAUSE_MENU_EVENT_SCRIPT"):
			return 4700;
	
		case joaat("net_gun_for_hire_offline"):
			return 6010;
	
		case joaat("NET_MAIN"):
			return 6002;
	
		case joaat("SHOP_EVENTS"):
			return 2027;
	
		case joaat("SOAK_TEST"):
			return 4088;
	
		case joaat("AUTOSTART"):
			return 7301;
	
		case joaat("shows"):
			return 5504;
	
		case joaat("INSTANCED_CONTENT"):
			return 75000;
	
		case joaat("NET_BEAT"):
			return 2452;
	
		case joaat("MINI"):
			return 512;
	
		case joaat("Matchmaking"):
			return 1301;
	
		case joaat("FME_PV_LARGE"):
			return 7000;
	
		case joaat("FME_PV_MEDIUM"):
			return 5500;
	
		case joaat("REWARDS_EVENTS"):
			return 2549;
	
		case joaat("HUB_EVENTS"):
			return 1026;
	
		case joaat("TOOL_MEGA"):
			return 65536;
	
		case joaat("STABLE_MOUNT"):
			return 400;
	
		case joaat("fishing"):
			return 5505;
	
		case joaat("ABILITY_CARD_EVENTS"):
			return 800;
	
		case joaat("net_gun_for_hire_online"):
			return 3090;
	
		case joaat("MICRO"):
			return 128;
	
		case joaat("net_background"):
			return 1631;
	
		case joaat("DEBUG_MENU"):
			return 50000;
	
		case joaat("CAMPWORKS"):
			return 3081;
	
		case joaat("SATCHEL_EVENTS"):
			return 2025;
	
		case joaat("SCRIPT_XML"):
			return 4592;
	
		case joaat("SAVE_MENU_EVENTS"):
			return 2024;
	
		case joaat("MISSION_CREATOR"):
			return 40500;
	
		case joaat("FME_STD_SMALL"):
			return 3002;
	
		case joaat("STRANGER_MISSION_NON_FETCH"):
			return 5001;
	
		case joaat("PLAYER_MENU_SCRIPT"):
			return 1400;
	
		case joaat("Minigame"):
			return 6500;
	
		case joaat("BACKGROUND_SCRIPT"):
			return 2047;
	
		case joaat("camp_item"):
			return 6700;
	
		case joaat("MP_MISSION_LOBBY"):
			return 10001;
	
		case joaat("CAMP_DOG"):
			return 600;
	
		case joaat("MISSION_TUTORIAL"):
			return 7300;
	
		case joaat("NET_SYSTEM_EXTENDED"):
			return 2050;
	
		case joaat("FME_THM_SMALL"):
			return 3001;
	
		case joaat("virtualization_unit_test_support"):
			return 129;
	
		case joaat("MP_UGC_TRANSITION"):
			return 14335;
	
		case joaat("ENDFLOW"):
			return 5506;
	
		case joaat("camp"):
			return 5000;
	
		default:
		
	}

	return 0;
}

BOOL func_134(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x402A Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_122(Global_1051268) && !func_119(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_174(iParam2))
		return true;

	if (iParam3 != 0 && func_175(iParam3, 255))
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

	if (func_176())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_122(Global_1051268))
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

BOOL func_135(Player plParam0, int iParam1) // Position - 0x4153 Hash - 0xE7028168 ^0xD3137B18
{
	switch (iParam1)
	{
		case 15:
		case 16:
		case 17:
			return Global_1295666.f_10 == GANG::NETWORK_GET_GANG_ID(plParam0);
	
		default:
		
	}

	return true;
}

BOOL func_136(Any* panParam0) // Position - 0x4186 Hash - 0x424BB8C9 ^0x61C1F918
{
	panParam0->f_2 = -310067910;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_137(Any* panParam0, int iParam1) // Position - 0x41A1 Hash - 0x5E449B87 ^0x52070773
{
	panParam0->f_2 = 1481789088;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_138(Any* panParam0, int iParam1) // Position - 0x41C2 Hash - 0x5E449B87 ^0xD7F51783
{
	panParam0->f_2 = 1574313466;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_139(Player plParam0, BOOL bParam1) // Position - 0x41E3 Hash - 0x5FD9694A ^0x8A2402F0
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 != -1 && func_115(i, 64, player))
				if (bParam1)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return true;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return true;
		}
	}

	return false;
}

BOOL func_140(Any anParam0) // Position - 0x4257 Hash - 0x1BED13A8 ^0xB3AE4D14
{
	Player gangLeader;
	int num;
	var unk;
	int num2;
	int i;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return false;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(anParam0);

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		if (gangLeader == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&num);
		
			if (num != 0)
				return true;
		}
		else
		{
			unk = { func_177(gangLeader) };
		
			for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
			{
				if (POSSE::_0xC084FF658B2E81DA(&unk, i, &num2) && num2 != 0 && num2.f_9 == 1)
					return true;
			}
		}
	}

	return false;
}

BOOL func_141(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x42E3 Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_178(bParam1, bParam2, bParam3);

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

int func_142(int iParam0) // Position - 0x4418 Hash - 0x1C727479 ^0x1C727479
{
	int num;
	int num2;
	int i;

	switch (iParam0)
	{
		case joaat("standard"):
			num = 0;
			num2 = 0;
			break;
	
		case joaat("posse_versus"):
			num = 2;
			num2 = 7;
			break;
	
		case joaat("themed"):
			num = 1;
			num2 = 1;
			break;
	}

	for (i = num; i <= num2; i = i + 1)
	{
		if (Global_1205938.f_1[i /*26*/] == 0)
			return i;
	}

	return -1;
}

int func_143(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x447D Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

int func_144() // Position - 0x44A3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

int func_145(int iParam0) // Position - 0x44AF Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

Vector3 func_146(int iParam0, int iParam1) // Position - 0x44C2 Hash - 0xDC069CBE ^0x231A2372
{
	var unk;
	var unk4;

	if (func_123(&unk4, iParam0) && func_124(&unk4) && func_125(&unk4, iParam1))
		func_126(unk4, 2060397848, &unk, false);

	return unk;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4502 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_148(Any* panParam0, int iParam1) // Position - 0x452C Hash - 0x5E449B87 ^0x9CEAF780
{
	panParam0->f_2 = -1739269194;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_149(int iParam0, var uParam1, var uParam2) // Position - 0x454D Hash - 0x75EF2F01 ^0x75EF2F01
{
	var unk;

	if (!func_179(iParam0))
		return false;

	if (func_180(iParam0, uParam1, &unk))
		func_181(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

struct<2> func_150(var uParam0, int iParam1) // Position - 0x4582 Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_182(uParam0, &(Global_1072759.f_573), func_165(iParam1));
			break;
	
		case 3:
			num.f_1 = func_182(uParam0, &(Global_1072759.f_573.f_602), func_165(iParam1));
			break;
	
		case 4:
			num.f_1 = func_182(uParam0, &(Global_1072759.f_573.f_2104), func_165(iParam1));
			break;
	
		case 5:
			num.f_1 = func_182(uParam0, &(Global_1072759.f_573.f_12606), func_165(iParam1));
			break;
	
		case 6:
			num.f_1 = func_182(uParam0, &(Global_1072759.f_573.f_12908), func_165(iParam1));
			break;
	
		case 7:
			num.f_1 = func_182(uParam0, &(Global_1072759.f_573.f_15910), func_165(iParam1));
			break;
	
		case 8:
			num.f_1 = func_182(uParam0, &(Global_1072759.f_573.f_16512), func_165(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_151();

	return num;
}

struct<2> func_151() // Position - 0x46A8 Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

Hash func_152(var uParam0, var uParam1) // Position - 0x46C1 Hash - 0x10103901 ^0xC90ADDEF
{
	Hash num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_183(uParam0, &num))
		return num;

	return 0;
}

void func_153(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x46EB Hash - 0x9F673585 ^0x14A8C14E
{
	Player player;
	int num;
	int num2;

	if (iParam3 == 255)
		player = PLAYER::PLAYER_ID();

	num2 = func_184(iParam1);
	num = iParam2;
	num2 && num != false;
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(hParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player), false, false), num2 || num);
	return;
}

int func_154(var uParam0, var uParam1) // Position - 0x472D Hash - 0xBC93F8EB ^0x994E7FF6
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_119(Global_1205938.f_1[i /*26*/].f_5, uParam0))
			return i;
	}

	return -1;
}

BOOL func_155(var uParam0, var uParam1) // Position - 0x4766 Hash - 0x8531A89A ^0x2C81CB96
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_152(uParam0));
}

BOOL func_156(var uParam0, var uParam1) // Position - 0x477A Hash - 0x8531A89A ^0xC8990837
{
	return UNLOCK::UNLOCK_IS_VISIBLE(func_152(uParam0));
}

int func_157(int iParam0, int iParam1) // Position - 0x478E Hash - 0xAFC21E33 ^0xC959DC0B
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (Global_1205938.f_1[i /*26*/].f_1 == iParam0 && Global_1205938.f_1[i /*26*/].f_2 == iParam1)
			return i;
	}

	return -1;
}

float func_158(int iParam0, int iParam1) // Position - 0x47D4 Hash - 0xEDC94CE6 ^0xA4439EA4
{
	float num;
	var unk;

	num = 200f;

	if (func_123(&unk, iParam0) && func_124(&unk) && func_125(&unk, iParam1))
		func_185(unk, 1168414437, &num, false);

	return num;
}

var func_159(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x4819 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_186() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_187());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_187());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_187());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_188(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_189(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_190(i) != 1)
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
					if (!func_191(player2))
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

void func_160(var uParam0, int iParam1, Player plParam2) // Position - 0x4BAC Hash - 0x1D4DFA0B ^0xAD72273B
{
	int num;

	if (func_71() != PLAYER::PLAYER_ID())
		return;

	num = func_154(uParam0->f_5);

	if (num != -1)
	{
		func_192(uParam0, num, iParam1, plParam2);
		return;
	}

	num = func_142(func_109(uParam0->f_1));

	if (num != -1)
	{
		Global_1205938.f_1[num /*26*/] = { *uParam0 };
		func_192(uParam0, num, iParam1, plParam2);
	}
	else
	{
		func_192(uParam0, -1, iParam1, plParam2);
	}

	return;
}

var func_161(BOOL bParam0, int iParam1) // Position - 0x4C23 Hash - 0x42C305C ^0x81DF2F42
{
	return func_159(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), bParam0, iParam1);
}

void func_162(Any* panParam0, var uParam1) // Position - 0x4C41 Hash - 0x6B700EA0 ^0x275A2BEA
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 26;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 47, 5, &uParam1);
	func_193(panParam0);
	return;
}

void func_163(int iParam0, int iParam1) // Position - 0x4C7E Hash - 0xF55E891F ^0xF55E891F
{
	func_194(iParam0, iParam1);
	return;
}

BOOL func_164(int iParam0) // Position - 0x4C8E Hash - 0x5000025C ^0x5000025C
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

int func_165(int iParam0) // Position - 0x4CCD Hash - 0xE34A477A ^0xE34A477A
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

int func_166(int iParam0) // Position - 0x4D63 Hash - 0xB8EC44B7 ^0xABFEE883
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARCHERY");
	
		case 1:
			return joaat("CHALLENGES");
	
		case 2:
			return joaat("DEAD_DROP");
	
		case 3:
			return joaat("GOLDEN_HAT");
	
		case 4:
			return joaat("HOT_PROPERTY");
	
		case 5:
			return joaat("KING_OF_THE_CASTLE");
	
		case 6:
			return joaat("KING_OF_THE_RAILS");
	
		case 7:
			return -142235487;
	
		case 8:
			return joaat("ESCAPED_CONVICTS");
	
		case 9:
			return joaat("ROUND_UP");
	
		case 10:
			return joaat("SUPPLY_TRAIN");
	
		case 11:
			return joaat("WRECKAGE");
	
		case 12:
			return joaat("CONDOR_EGG");
	
		case 13:
			return -27117790;
	
		case 14:
			return 1653867545;
	
		case 15:
			return joaat("PV_CHALLENGE_HERBALIST");
	
		case 16:
			return joaat("PV_CHALLENGE_BIGGEST_FISH");
	
		case 17:
			return joaat("PV_CHALLENGE_FLYING_BIRD");
	
		case 18:
			return joaat("HUNT_THE_POSSE_LEADER");
	
		default:
		
	}

	return 0;
}

void func_167(int iParam0) // Position - 0x4E7E Hash - 0xA0A45FA0 ^0xC00EF489
{
	int num;
	int num2;

	if (!func_45(iParam0, 512))
	{
		num = func_195(Global_1206497.f_78[iParam0 /*20*/].f_3, Global_1205938.f_1[iParam0 /*26*/].f_3);
		num2 = func_196(num);
	
		if (func_197(3, 32, 0, num2, Global_1206497.f_78[iParam0 /*20*/].f_7, 268435458, -1, false, 0, 0))
			if (func_169(&(Global_1206497.f_78[iParam0 /*20*/].f_16)))
				func_198(&(Global_1206497.f_78[iParam0 /*20*/].f_16));
	}

	return;
}

int func_168(int iParam0, int iParam1, Any anParam2) // Position - 0x4F00 Hash - 0xDD2503EA ^0x91D6CBD9
{
	Player player;
	int num;
	int i;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam2))
		return 0;

	num = 0;
	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && GANG::_NETWORK_IS_GANG_MEMBER(anParam2, player) && func_65(Global_1206166[i /*10*/][iParam0], iParam1))
			num = num + 1;
	}

	return num;
}

BOOL func_169(var uParam0) // Position - 0x4F6C Hash - 0x5001E582 ^0x5001E582
{
	return func_199(*uParam0, 1);
}

void func_170(var uParam0, BOOL bParam1) // Position - 0x4F7C Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_169(uParam0))
		func_200(uParam0);

	return;
}

int func_171(var uParam0) // Position - 0x4F9C Hash - 0xCB0C9F2B ^0x95CAE221
{
	if (!func_169(uParam0))
		return 0;

	if (func_201(uParam0))
		return uParam0->f_2;

	return func_202(uParam0->f_1);
}

void func_172(BOOL bParam0) // Position - 0x4FCD Hash - 0xE40CA36A ^0xA75018EA
{
	int num;
	Any gangId;

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
	{
		func_69(&(Global_1203952.f_3), 32);
		func_69(&(Global_1203952.f_4), 12);
		Global_1203952.f_478 = num;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			func_69(&(Global_1203952.f_4), 2);
	
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203952.f_5[5] = 0;
		func_69(&Global_1203952.f_5[5], 1);
	}

	Global_1203952.f_5[3] = 0;
	func_69(&Global_1203952.f_5[3], 1);
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (!GANG::NETWORK_IS_GANG_ID_VALID(gangId))
	{
		func_69(&Global_1203952.f_5[3], 6);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_ACTIVE(gangId))
	{
		func_69(&Global_1203952.f_5[3], 6);
		return;
	}

	GANG::_NETWORK_LEAVE_GANG(bParam0);
	return;
}

int func_173(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x50A1 Hash - 0xB98737FE ^0x44C8B4C3
{
	BOOL flag;
	Any gangId;
	var unk;
	int num;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return 0;

	if (GANG::NETWORK_GET_GANG_ID(plParam0) != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
		return 0;

	flag = false;
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (func_140(gangId))
	{
		if (bParam1)
		{
			unk = { func_177(plParam0) };
			POSSE::_0xC08AFF658B2E51DA(&num);
		
			if (func_203(num, unk))
				flag = true;
			else
				return 0;
		}
		else
		{
			flag = true;
		}
	}
	else
	{
		flag = true;
	}

	if (flag)
		GANG::_NETWORK_KICK_GANG_MEMBER(plParam0, iParam2);

	return 1;
}

BOOL func_174(int iParam0) // Position - 0x5138 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_175(int iParam0, int iParam1) // Position - 0x5159 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_176() // Position - 0x5195 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_122(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_177(Player plParam0) // Position - 0x51ED Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_178(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5201 Hash - 0xC9655EC3 ^0xE7BDB885
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

BOOL func_179(int iParam0) // Position - 0x529F Hash - 0x5000025C ^0x5000025C
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

BOOL func_180(int iParam0, var uParam1, Any* panParam2) // Position - 0x52DE Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_204(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_181(int iParam0, Any* panParam1, var uParam2) // Position - 0x5312 Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_205(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_206(num);
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
			uParam2->f_5 = func_207(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_208(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_209(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_210(num);
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

int func_182(var uParam0, var uParam1, int iParam2) // Position - 0x556D Hash - 0x3B53E80C ^0x3B53E80C
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

BOOL func_183(int iParam0, var uParam1, Any* panParam2) // Position - 0x55C2 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_122(iParam0))
		return false;

	func_211(panParam2);

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

int func_184(int iParam0) // Position - 0x56CD Hash - 0xC02FF737 ^0x133962DF
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

int func_185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float* pfParam6, BOOL bParam7) // Position - 0x575C Hash - 0x75EEBFEF ^0x896914A8
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

int func_186() // Position - 0x5782 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_187() // Position - 0x5790 Hash - 0x306ACA3A ^0x4BACF663
{
	return "unnamed";
}

BOOL func_188(int iParam0) // Position - 0x579C Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_189(int iParam0) // Position - 0x582B Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_212(36, iParam0);
}

int func_190(int iParam0) // Position - 0x5849 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_191(Player plParam0) // Position - 0x5894 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_213(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_214(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

void func_192(var uParam0, int iParam1, int iParam2, Player plParam3) // Position - 0x58D9 Hash - 0x30A94D67 ^0x40DBA61C
{
	var unk;
	var value;

	if (plParam3 == PLAYER::PLAYER_ID())
	{
		func_215(uParam0, iParam1, iParam2);
	}
	else
	{
		unk.f_5 = -1;
		unk.f_9 = -1;
		unk.f_10 = -1;
		unk.f_11.f_1 = -1;
		unk.f_11.f_5 = -1;
		unk.f_11.f_5.f_1 = -1;
		unk.f_11.f_7 = 255;
		unk.f_4 = 3;
		unk.f_11 = { *uParam0 };
		unk.f_10 = iParam1;
		unk.f_9 = iParam2;
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam3);
		func_162(&unk, value);
	}

	return;
}

void func_193(Any* panParam0) // Position - 0x5958 Hash - 0x2B13DF45 ^0xA7F6C894
{
	panParam0->f_1 != 255;
	panParam0->f_11.f_7 != 255;
	panParam0->f_37 != 255;
	return;
}

void func_194(int iParam0, int iParam1) // Position - 0x597D Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

int func_195(int iParam0, int iParam1) // Position - 0x5992 Hash - 0x3004B716 ^0x16D06F86
{
	int num;
	var unk;

	num = 28;

	if (func_123(&unk, iParam0) && func_136(&unk) && func_148(&unk, iParam1))
		func_143(unk, -823479386, &num, true);

	return num;
}

int func_196(int iParam0) // Position - 0x59D4 Hash - 0xBA44BA73 ^0xBA44BA73
{
	switch (iParam0)
	{
		case 8:
			return 32;
	
		case 12:
			return 34;
	
		case 16:
			return 36;
	
		case 20:
			return 38;
	
		case 28:
			return 42;
	
		default:
		
	}

	return 42;
}

BOOL func_197(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, BOOL bParam8, int iParam9, int iParam10) // Position - 0x5A1D Hash - 0x73EAB6F2 ^0xF20333AB
{
	int num;
	var unk22;
	var unk30;

	if (!func_216(iParam2, iParam3))
		return false;

	if (func_60() && Global_1572887.f_72.f_40 != 9)
		return false;

	if (!func_217(Global_1295666.f_5))
		return false;

	num.f_3 = -1;
	num.f_3.f_1 = -1;
	num.f_5 = 1;
	num.f_6 = 7;
	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = 1;
	num.f_3 = { uParam4 };
	func_218(&num);
	func_219(iParam10, true);
	func_220(iParam2, iParam3, iParam7, true);
	func_221(uParam4, true);
	func_222(iParam6);
	func_223(iParam9);
	func_224();

	if (func_122(uParam4) && !func_225() && Global_1220759 == -1)
		func_226(uParam4);

	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);

	if (iParam2 != 2)
		func_227();

	if (func_225())
	{
		func_228(uParam4);
	}
	else if (iParam2 == 3)
	{
		if (!func_229(268435456))
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("player_menu")))
				func_230(1, false);
	}
	else
	{
		if (iParam2 == 2)
		{
			unk30 = 255;
			unk30.f_13 = 2147483647;
			unk30.f_16.f_2 = -504335712;
			unk30.f_16.f_4 = 3;
			unk30.f_21 = -1;
			unk30.f_25 = 1;
			unk30.f_26 = 1;
			unk30.f_27 = 1;
			unk30.f_28 = 32;
			unk30.f_29 = 1;
			unk30.f_30 = -2;
			unk30.f_42.f_5 = -1;
			unk30.f_48 = -1;
			unk30.f_48.f_1 = -1;
			unk30.f_50.f_3 = -1;
			func_231(&unk30, iParam3, -1, -1, 3);
			TEXT_LABEL_ASSIGN_STRING(&unk22, func_232(&(unk30.f_32), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_233(iParam3)), 64);
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_235(func_234(), iParam3)), 64);
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, &unk22);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_117, MISC::VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	}

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_236(255, false) && !bParam8)
		func_237("NM_MATCHMAKING_WARNING");

	func_238(10);
	return true;
}

void func_198(var uParam0) // Position - 0x5CA0 Hash - 0x46B3830A ^0x717D457A
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

BOOL func_199(int iParam0, int iParam1) // Position - 0x5CB6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_200(var uParam0) // Position - 0x5CC5 Hash - 0x879B7DAC ^0x879B7DAC
{
	func_239(uParam0, 0);
	return;
}

BOOL func_201(var uParam0) // Position - 0x5CD4 Hash - 0x39705408 ^0x39705408
{
	return func_199(*uParam0, 2);
}

int func_202(int iParam0) // Position - 0x5CE4 Hash - 0xFDA007B9 ^0xE83F4FF2
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

BOOL func_203(int iParam0, var uParam1, var uParam2) // Position - 0x5CF6 Hash - 0x5B230858 ^0x33963172
{
	var unk;
	var gamerHandle2;
	BOOL flag;
	int i;

	unk.f_22 = 10;

	if (iParam0 == 0 || !POSSE::_0xC087FF658B2E51DA(iParam0, &unk))
		return false;

	gamerHandle2 = { func_240() };

	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(unk.f_19), &gamerHandle2))
		return false;

	if (!func_241(uParam1))
		return false;

	for (i = 0; i <= unk.f_21 - 1; i = i + 1)
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&unk.f_22[i /*4*/], &uParam1))
		{
			flag = true;
			break;
		}
	}

	if (!flag)
		return false;

	if (POSSE::_0xC08EFF658B2E51DB(iParam0, &uParam1))
		return true;

	return false;
}

int func_204(int iParam0) // Position - 0x5D97 Hash - 0x5FB59AC3 ^0xE293EFF
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

int func_205(int iParam0, var uParam1) // Position - 0x5F0C Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_242(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_206(int iParam0) // Position - 0x5F29 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_207(int iParam0) // Position - 0x607F Hash - 0xCBE7BE7C ^0xCBE7BE7C
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

int func_208(int iParam0) // Position - 0x60D6 Hash - 0x2A2D8996 ^0x2A2D8996
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

int func_209(int iParam0) // Position - 0x61B0 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_210(int iParam0) // Position - 0x6248 Hash - 0xD7A7D6 ^0xD7A7D6
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

void func_211(Any* panParam0) // Position - 0x63F2 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_212(int iParam0, int iParam1) // Position - 0x6408 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_243(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_23())
		return func_243(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_243(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_213(Player plParam0) // Position - 0x647C Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_214(Player plParam0) // Position - 0x6499 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_244(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_245(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_215(var uParam0, int iParam1, int iParam2) // Position - 0x651C Hash - 0x2BD2E937 ^0x21CB9FC
{
	func_246(iParam2, 8);
	func_118(iParam2, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	Global_1206497.f_78[iParam2 /*20*/].f_19 = 0;

	if (iParam1 == -1)
	{
		func_118(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else if (!func_119(uParam0->f_5, Global_1206497.f_239[iParam2 /*26*/].f_5))
	{
		func_118(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else
	{
		Global_1206166[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iParam1] = Global_1206487[iParam2];
	
		if (iParam1 != iParam2)
		{
			Global_1206497.f_78[iParam1 /*20*/] = { Global_1206497.f_78[iParam2 /*20*/] };
			func_16(&Global_1206166[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iParam2]);
			func_17(&Global_1206497.f_78[iParam2 /*20*/]);
		}
	
		func_116(iParam1, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}

	return;
}

BOOL func_216(int iParam0, int iParam1) // Position - 0x65F6 Hash - 0x65A17ECB ^0x65A17ECB
{
	if (iParam0 == 0 || iParam0 == 3)
		return iParam1 != -1;

	return iParam1 != 0;
}

BOOL func_217(Player plParam0) // Position - 0x661A Hash - 0xA70D0238 ^0x72CB5344
{
	Any gangId;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (GANG::NETWORK_IS_GANG_ACTIVE(gangId) && !GANG::NETWORK_IS_GANG_LEADER(plParam0))
		return false;

	return true;
}

void func_218(Any* panParam0) // Position - 0x6644 Hash - 0x53BB36E1 ^0x2C22C04D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), panParam0, 22);
	return;
}

void func_219(int iParam0, BOOL bParam1) // Position - 0x665C Hash - 0x8AA8EE1E ^0xB92D42FE
{
	Global_1572887.f_72.f_39 = iParam0;

	if (bParam1)
		func_247();

	return;
}

void func_220(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x6677 Hash - 0x2754B9DE ^0x91E90DEF
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;

	if (bParam3)
		func_247();

	return;
}

void func_221(var uParam0, var uParam1, BOOL bParam2) // Position - 0x66A4 Hash - 0xAF33A640 ^0xBEF9E753
{
	Global_1572887.f_72.f_11 = { uParam0 };

	if (bParam2)
		func_247();

	return;
}

void func_222(int iParam0) // Position - 0x66C3 Hash - 0x42868A8 ^0xF23EAC3A
{
	Global_1572887.f_72.f_15 = iParam0;
	return;
}

void func_223(int iParam0) // Position - 0x66D5 Hash - 0x42868A8 ^0x730FDE49
{
	Global_1572887.f_72.f_13 = iParam0;
	return;
}

void func_224() // Position - 0x66E7 Hash - 0xA79E77AA ^0xC668C73F
{
	Ped ped;
	var entityCoords;

	ped = PLAYER::PLAYER_PED_ID();

	if (PED::IS_PED_INJURED(ped))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, false, false) };
	Global_1572887.f_72.f_49 = { entityCoords };
	return;
}

BOOL func_225() // Position - 0x671B Hash - 0x47D626CF ^0x5FEDB532
{
	if (func_234() != 0)
		return false;

	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
		return false;

	return true;
}

int func_226(var uParam0, var uParam1) // Position - 0x6751 Hash - 0xC6528C89 ^0xC6528C89
{
	if (func_248())
		return 0;

	if (!func_122(uParam0))
		return 0;

	Global_1051268 = { uParam0 };
	return 1;
}

void func_227() // Position - 0x677F Hash - 0xD40F8981 ^0x8FB474F8
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
	return;
}

void func_228(var uParam0, var uParam1) // Position - 0x6797 Hash - 0x3C794607 ^0x6EB493EB
{
	int num;
	int num2;
	int num3;
	var unk;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_117);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	num = func_249(uParam0);

	if (num == -1)
		return;

	num2 = func_250(num);

	if (num2 == -1)
		return;

	num3 = func_251(num);
	unk = { func_252(num2, num3) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &unk));
	return;
}

BOOL func_229(int iParam0) // Position - 0x683F Hash - 0xA1D29AFD ^0x462299BE
{
	return Global_1572887.f_72.f_15 && iParam0 != false;
}

int func_230(int iParam0, BOOL bParam1) // Position - 0x6854 Hash - 0x31DB738A ^0x31DB738A
{
	if (bParam1)
		func_253();

	if (!func_254(bParam1, bParam1, !bParam1))
		return 0;

	func_255(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x6890 Hash - 0x1DAAF101 ^0x7B4D5C35
{
	int num;
	int num2;
	int num3;

	if (iParam1 == 0)
		return 0;

	if (uParam0->f_11 == iParam1)
	{
		func_256(uParam0, 4194304);
		return 1;
	}

	num = func_257(iParam1);

	if (num == -1)
		return 0;

	TEXT_LABEL_COPY(&(uParam0->f_22), { Global_265213.f_4[num /*46*/] }, 3);
	uParam0->f_32 = { Global_265213.f_4[num /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_4[num /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_4[num /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_4[num /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_57505[num /*8*/];
	uParam0->f_56 = { Global_265213.f_4[num /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_4[num /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_4[num /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_4[num /*46*/].f_28;
	uParam0->f_16 = 1;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_4[num /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_4[num /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_4[num /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_4[num /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_4[num /*46*/].f_15 };
	TEXT_LABEL_COPY(&(uParam0->f_3), { Global_265213.f_4[num /*46*/].f_4 }, 8);
	func_258(&Global_265213.f_4[num /*46*/]);

	if (iParam2 != -1)
	{
		if (uParam0->f_16.f_2 == -933924539 && func_259(iParam2) || uParam0->f_16.f_2 == 395262693 && func_260(iParam2))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}

	if (iParam3 > 0)
		uParam0->f_25 = iParam3;

	num2 = func_261(Global_265213.f_57505[num /*8*/]);
	num3 = { func_262(uParam0->f_12) };

	if (num2 != -1)
	{
		uParam0->f_48 = { func_263(num2) };
	}
	else if (func_264(uParam0->f_12))
	{
		uParam0->f_48 = { func_266(func_265(uParam0->f_12)) };
	}
	else if (num3.f_1 != -1 && num3 != -1)
	{
		uParam0->f_48 = { func_267(&num3) };
	}
	else if (uParam0->f_16.f_3 == 31269700)
	{
		uParam0->f_48 = { func_268(640937726) };
	}
	else if (uParam0->f_16.f_3 == -698288936)
	{
		uParam0->f_48 = { func_268(1357993786) };
	}
	else
	{
		uParam0->f_48 = { func_269(uParam0->f_11) };
	
		if (!func_122(uParam0->f_48))
			uParam0->f_48 = { func_268(func_270(uParam0->f_16.f_2)) };
	}

	func_271(uParam0);
	func_256(uParam0, 4194304);
	return 1;
}

const char* func_232(var uParam0, int iParam1) // Position - 0x6B56 Hash - 0xB0CFF0C3 ^0x80A927F7
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_272(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

char* func_233(int iParam0) // Position - 0x6B8C Hash - 0x27A86066 ^0xFF586F19
{
	int num;

	num = func_273(iParam0);

	if (num == Global_265189.f_1[0])
		return "NM_BUCKET_RACE";

	if (num == Global_265189.f_1[1])
		return "NET_PLAYLIST_FEATURED_SERIES_001";

	if (num == Global_265189.f_1[5])
		return "NET_PLAYLIST_SPECIAL_SERIES_1";

	if (num == Global_265189.f_1[6])
		return "NET_PLAYLIST_SPECIAL_SERIES_2";

	if (num == Global_265189.f_1[7])
		return "NET_PLAYLIST_ELIMINATION_SMALL";

	if (num == Global_265189.f_1[8])
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";

	if (num == Global_265189.f_1[9])
		return "NET_PLAYLIST_ELIMINATION_LARGE";

	if (num == Global_265189.f_1[2])
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";

	if (num == Global_265189.f_1[3])
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";

	if (num == Global_265189.f_1[4])
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";

	if (num == Global_265189.f_1[15])
		return "NM_BUCKET_ORBIS_SERIES_1";

	if (num == Global_265189.f_1[16])
		return "NM_BUCKET_ORBIS_SERIES_2";

	if (num == Global_265189.f_1[17])
		return "NM_BUCKET_ORBIS_SERIES_3";

	if (num == Global_265189.f_1[19])
		return "NET_PLAYLIST_CAPTURE";

	if (num == Global_265189.f_1[18])
		return "NET_PLAYLIST_SHOOTOUT";

	return "Unmapped bucket hash";
}

int func_234() // Position - 0x6CE2 Hash - 0x4228A1C2 ^0xC61894FA
{
	return Global_1572887.f_72;
}

char* func_235(int iParam0, int iParam1) // Position - 0x6CF0 Hash - 0xE9B3A818 ^0x6ED126D2
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
			
				case 1:
					return "NM_BUCKET_RACE";
			
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
			
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
			
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
			
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
			
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
			
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
			
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
			
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
			
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
			
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
			
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
			
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
			
				default:
					break;
			}
			break;
	}

	return "Invalid Net Matchmaking Bucket";
}

BOOL func_236(int iParam0, BOOL bParam1) // Position - 0x6DCB Hash - 0x8A357F37 ^0x3E6BC767
{
	BOOL flag;

	flag = false;

	if (iParam0 == 255)
	{
		flag = true;
		iParam0 = func_23();
	}
	else if (iParam0 == func_23())
	{
		flag = true;
	}

	if (flag)
		if (!bParam1)
			return Global_1295666.f_9;

	if (!flag)
	{
		if (!Global_1295666.f_17[iParam0])
			return false;
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[iParam0]))
			return false;
	}

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(Global_1295666.f_149[iParam0])) <= 1)
		return false;

	return true;
}

int func_237(char* sParam0) // Position - 0x6E52 Hash - 0x78B95C49 ^0xF6B1C0A1
{
	const char* str;
	int num;

	str = MISC::VAR_STRING(2, sParam0);
	num = func_274(str, -2, 0, 0, 0, true);
	return num;
}

void func_238(int iParam0) // Position - 0x6E74 Hash - 0x42868A8 ^0x921F418E
{
	Global_1572887.f_72.f_40 = iParam0;
	return;
}

void func_239(var uParam0, int iParam1) // Position - 0x6E86 Hash - 0x49A512C1 ^0x5081D805
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_275(uParam0, 1);
	func_276(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

struct<2> func_240() // Position - 0x6EC2 Hash - 0xE72E2777 ^0x38D745D3
{
	var gamerHandle;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle);
	return gamerHandle;
}

BOOL func_241(var uParam0, var uParam1) // Position - 0x6ED4 Hash - 0x1E89677A ^0x2EE31D84
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

BOOL func_242(int iParam0, var uParam1, var uParam2) // Position - 0x6EE2 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_277(iParam0, uParam1, &unk))
		func_278(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_243(Any* panParam0, int iParam1, int iParam2) // Position - 0x6F09 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

void func_244(Player plParam0) // Position - 0x6F40 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_245(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_245(Player plParam0) // Position - 0x6FAC Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_246(int iParam0, int iParam1) // Position - 0x6FE7 Hash - 0x823E3440 ^0xE67DFC91
{
	func_163(&(Global_1206497.f_78[iParam0 /*20*/].f_6), iParam1);
	return;
}

void func_247() // Position - 0x7001 Hash - 0x53CFC0EB ^0xB2572CB4
{
	Player player;

	if (func_18() == -1)
		return;

	player = Global_1295666;

	if (func_68(Global_1572887.f_8, 1))
		func_69(&(Global_1056554[player /*491*/].f_204.f_10), 4);
	else
		func_279(&(Global_1056554[player /*491*/].f_204.f_10), 4);

	Global_1056554[player /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[player /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[player /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[player /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[player /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[player /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[player /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;

	if (func_229(1024))
		func_69(&(Global_1056554[player /*491*/].f_204.f_10), 2);
	else
		func_279(&(Global_1056554[player /*491*/].f_204.f_10), 2);

	return;
}

BOOL func_248() // Position - 0x7116 Hash - 0xA584E02B ^0xA584E02B
{
	return func_122(Global_1051268);
}

int func_249(var uParam0, var uParam1) // Position - 0x7128 Hash - 0xBC93F8EB ^0x84CDAD29
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_119(Global_1206497.f_78[i /*20*/].f_7, uParam0))
			return i;
	}

	return -1;
}

int func_250(int iParam0) // Position - 0x7161 Hash - 0x1B04F1B9 ^0xB3856B1A
{
	return Global_1206497.f_78[iParam0 /*20*/].f_3;
}

int func_251(int iParam0) // Position - 0x7175 Hash - 0x1B04F1B9 ^0x33AF67A6
{
	return Global_1205938.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_252(int iParam0, int iParam1) // Position - 0x7189 Hash - 0xAE6CBB09 ^0x91AC7C0C
{
	var unk;
	var unk9;

	if (func_123(&unk9, iParam0) && func_136(&unk9) && func_148(&unk9, iParam1) && func_280(&unk9))
		func_131(unk9, 37194763, &unk, true);

	return unk;
}

void func_253() // Position - 0x71D5 Hash - 0x5281CE7E ^0x311564BB
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_254(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x71EC Hash - 0xB9500D ^0xB9500D
{
	BOOL flag;

	flag = func_282(bParam2, func_281(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_255(int iParam0) // Position - 0x7214 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1896762.f_365 = iParam0;
	return;
}

void func_256(var uParam0, int iParam1) // Position - 0x7225 Hash - 0x53A96DDB ^0x70AB4F09
{
	uParam0->f_15 = uParam0->f_15 || iParam1;
	return;
}

int func_257(int iParam0) // Position - 0x7238 Hash - 0x6E9716ED ^0xF6B3847A
{
	int i;

	if (iParam0 == 0)
		return -1;

	for (i = 0; i < Global_265213.f_2; i = i + 1)
	{
		if (Global_265213.f_57505[i /*8*/] == iParam0)
			return i;
	
		if (Global_265213.f_4[i /*46*/].f_23 == iParam0)
			return i;
	}

	return -1;
}

void func_258(char* sParam0) // Position - 0x728F Hash - 0x1CB74C3 ^0xB32344E6
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
	return;
}

BOOL func_259(int iParam0) // Position - 0x72A5 Hash - 0xB8D7FAF1 ^0xB8D7FAF1
{
	if (func_283(iParam0, 0) == -1)
		return false;

	return true;
}

BOOL func_260(int iParam0) // Position - 0x72BD Hash - 0xB8D7FAF1 ^0xB8D7FAF1
{
	if (func_284(iParam0, 0) == -1)
		return false;

	return true;
}

int func_261(Hash hParam0) // Position - 0x72D5 Hash - 0xD773886E ^0xD773886E
{
	int i;

	if (func_18() == -1)
		return -1;

	for (i = 9; i <= 25; i = i + 1)
	{
		if (func_285(i) == hParam0)
			return i;
	}

	return -1;
}

Vector3 func_262(int iParam0) // Position - 0x730E Hash - 0x87D86CF ^0x4486BF0A
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	var unk7;

	num2 = -1;
	num2.f_1 = -1;
	num2.f_2 = -1;

	if (!func_286(&num))
		return num2;

	if (!func_287(&num, 13, 0, 0, 1))
		return num2;

	if (!func_287(&num, 17, 0, 0, 1))
		return num2;

	unk7 = num.f_1;
	num3 = func_288(&num, 0);

	for (i = 0; i <= num3 - 1; i = i + 1)
	{
		num.f_1 = unk7;
	
		if (!func_287(&num, 19, i, 0, 1))
		{
		}
		else if (!func_287(&num, 20, 0, 0, 1))
		{
		}
		else
		{
			num4 = func_288(&num, 1);
		
			if (!func_287(&num, 22, iParam0, 0, 0))
			{
			}
			else
			{
				num5 = DATAFILE::_0xE13634BB6BAF0734(num, num.f_1);
				num2 = i;
				num2.f_1 = num4 - num5 - 1;
				break;
			}
		}
	}

	return num2;
}

struct<2> func_263(int iParam0) // Position - 0x73F3 Hash - 0xAA9CEFB1 ^0x2504ADA0
{
	if (iParam0 < 0 || iParam0 >= 100)
		return func_151();

	return Global_1835011[iParam0 /*72*/].f_1;
}

BOOL func_264(int iParam0) // Position - 0x7420 Hash - 0xB240AFA2 ^0xB240AFA2
{
	if (iParam0 == 0)
		return false;

	return func_265(iParam0) != -1;
}

int func_265(int iParam0) // Position - 0x743A Hash - 0xA5514EF9 ^0xA5514EF9
{
	int i;
	int num;

	for (i = 0; i <= 13 - 1; i = i + 1)
	{
		num = i;
	
		if (iParam0 == func_289(num))
			return num;
	}

	return -1;
}

struct<2> func_266(int iParam0) // Position - 0x746C Hash - 0x83A4F0DE ^0x83A4F0DE
{
	return func_290(iParam0);
}

struct<2> func_267(var uParam0) // Position - 0x747A Hash - 0xDFD88D9B ^0xDFD88D9B
{
	var unk;
	var unk6;

	if (!func_286(&unk))
		return func_151();

	if (!func_287(&unk, 13, 0, 0, 1))
		return func_151();

	if (!func_287(&unk, 17, 0, 0, 1))
		return func_151();

	if (!func_287(&unk, 19, *uParam0, 0, 1))
		return func_151();

	if (!func_287(&unk, 20, 0, 0, 1))
		return func_151();

	if (!func_287(&unk, 23, uParam0->f_1, 0, 1))
		return func_151();

	unk6 = func_291(&unk);
	return func_268(unk6);
}

struct<2> func_268(int iParam0) // Position - 0x7514 Hash - 0x6C87C802 ^0xCFA8552F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_150(iParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_150(iParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_150(iParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_150(iParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_150(iParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_150(iParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_150(iParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_151();
}

struct<2> func_269(int iParam0) // Position - 0x75E4 Hash - 0xE6BA07B1 ^0x38C19170
{
	var unk;
	var unk6;

	if (iParam0 == 0)
		return func_151();

	if (!func_292(&unk, 7, iParam0, 76966722))
		return func_151();

	func_181(7, &unk, &unk6);

	if (unk6.f_4 != 7)
		return func_151();

	return func_150(unk6.f_3, unk6.f_4);
}

int func_270(int iParam0) // Position - 0x7636 Hash - 0x21FAF347 ^0x35226725
{
	switch (iParam0)
	{
		case -933924539:
			return joaat("MP_RACE");
	
		case -504335712:
			return joaat("MP_VS_MISSION");
	
		case 395262693:
			return joaat("MP_DEATHMATCH");
	
		default:
		
	}

	return 0;
}

void func_271(var uParam0) // Position - 0x7671 Hash - 0xBA5A1D5A ^0x1A2510B1
{
	uParam0->f_15 = 0;
	return;
}

const char* func_272(const char* sParam0, int iParam1) // Position - 0x767E Hash - 0x9E99F03 ^0x835BB6E6
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_273(Hash hParam0) // Position - 0x7698 Hash - 0x16BDE770 ^0xF0581AA0
{
	int i;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13575[i] == hParam0)
			return Global_265213.f_107995.f_13510[i];
	}

	return 0;
}

int func_274(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x76DC Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_FEED_TICKER(&num, &unk13, bParam5);
	return num2;
}

void func_275(var uParam0, int iParam1) // Position - 0x7717 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_276(var uParam0, int iParam1) // Position - 0x7728 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_277(int iParam0, var uParam1, Any* panParam2) // Position - 0x773D Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_204(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_278(Any* panParam0, int iParam1, var uParam2) // Position - 0x7771 Hash - 0x59F43AD2 ^0xB9A366FE
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

void func_279(int iParam0, int iParam1) // Position - 0x77EB Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_280(Any* panParam0) // Position - 0x7800 Hash - 0x424BB8C9 ^0x5FE3E3E4
{
	panParam0->f_2 = 1701407264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_281() // Position - 0x781B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20643;
}

BOOL func_282(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x782A Hash - 0x13FC6F30 ^0x85A59BCD
{
	Player player;
	Ped ped;
	BOOL isEntityDead;
	BOOL isPedIncapacitated;
	int num;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
		return 0;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-496459706))
		return 0;

	player = Global_1295666.f_149[Global_1295666];
	ped = Global_1295666.f_3;
	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(ped);

	if (isEntityDead || isPedIncapacitated)
	{
		if (!bParam5)
			return 0;
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
		
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
				return 0;
		}
	
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(player))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(ped, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (!bParam1)
	{
		if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
			return 0;
	
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
			return 0;
	}

	if (func_293())
		return 0;

	if (Global_15)
		return 0;

	if (!bParam2 && Global_1940085.f_10 || Global_1940085.f_11 || Global_1940085.f_12 || Global_1940085.f_13)
		return 0;

	if (!bParam3)
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (Global_1235687.f_9479 != -1)
			return 0;
	
		if (Global_1138673[num /*56*/].f_34 & 1 != 0 && Global_1138673[num /*56*/].f_34 & 2 == 0)
			return 0;
	
		if (Global_1140770.f_293)
			return 0;
	
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
			return 0;
		else if (Global_1572887.f_72.f_40 > 15)
			return 0;
	}

	if (!bParam8)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
				return 0;
		
			if (Global_1048581)
				return 0;
		
			if (Global_1048585)
				return 0;
		}
	}

	return 1;
}

int func_283(int iParam0, int iParam1) // Position - 0x7A50 Hash - 0xCABD9635 ^0xCABD9635
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
	
		case -1185533313:
			return 10;
	
		case -784189810:
			return 0;
	
		case -79999383:
			return 6;
	
		case -63669280:
			return 2;
	
		case 218185167:
			return 8;
	
		case 851921060:
			return 3;
	
		case 1457860192:
			return 5;
	
		case 1579717899:
			return 1;
	
		case 1744858848:
			return 9;
	
		case 2028478397:
			return 4;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_284(int iParam0, int iParam1) // Position - 0x7AE2 Hash - 0x61BEC69F ^0x61BEC69F
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
	
		case -1581094459:
			return 8;
	
		case -1437925683:
			return 12;
	
		case -725256130:
			return 17;
	
		case -632356431:
			return 14;
	
		case -559809431:
			return 10;
	
		case -548018579:
			return 13;
	
		case -533426613:
			return 1;
	
		case -457802746:
			return 3;
	
		case -222655798:
			return 16;
	
		case 10577687:
			return 15;
	
		case 424482930:
			return 6;
	
		case 1153715636:
			return 5;
	
		case 1175500245:
			return 11;
	
		case 1272390114:
			return 7;
	
		case 1788958412:
			return 4;
	
		case 1816768801:
			return 0;
	
		case 1842544025:
			return 9;
	
		case 1943481570:
			return 18;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_285(int iParam0) // Position - 0x7BCC Hash - 0x9F79BA48 ^0xAC7102A
{
	if (!func_294(iParam0))
		return 0;

	if (func_18() == -1)
		return 0;

	return Global_1835011[iParam0 /*72*/].f_51;
}

BOOL func_286(Any* panParam0) // Position - 0x7BF8 Hash - 0x699E87E5 ^0x2F91F009
{
	int fileHandle;
	var src;

	fileHandle = Global_1072759.f_28418[29 /*4*/].f_3;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_287(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x7C3A Hash - 0xA342F830 ^0xBDC6E0EB
{
	var unk;

	unk = panParam0->f_1;
	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_288(Any anParam0, int iParam1) // Position - 0x7C73 Hash - 0xF6C122AF ^0xA6A67C2F
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

int func_289(int iParam0) // Position - 0x7C87 Hash - 0x7647021A ^0xC06A5114
{
	return Global_1295849[iParam0 /*37*/].f_9;
}

struct<2> func_290(int iParam0) // Position - 0x7C99 Hash - 0xE4C1CC5C ^0x4865B60
{
	var dst;

	dst = -1;
	dst.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&dst, &(Global_1295849[iParam0 /*37*/].f_6), 2);
	return dst;
}

var func_291(Any* panParam0) // Position - 0x7CC3 Hash - 0x3E293D90 ^0x3E293D90
{
	return func_295(panParam0, 67, 1);
}

BOOL func_292(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7CD4 Hash - 0x7C6B6190 ^0xCA01B001
{
	*panParam0 = Global_1149432.f_7;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = func_204(iParam1);
	panParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_293() // Position - 0x7D05 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_294(int iParam0) // Position - 0x7D21 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

var func_295(Any* panParam0, int iParam1, int iParam2) // Position - 0x7D37 Hash - 0xB208A015 ^0xE27079B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

