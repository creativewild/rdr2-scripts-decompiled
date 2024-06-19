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
#endregion

void main() // Position - 0x0 Hash - 0xDB8B3E3 ^0x961C3F53
{
	func_1();

	while (!func_2(false, false))
	{
		BUILTIN::WAIT(0);
	}

	func_3();
	return;
}

void func_1() // Position - 0x22 Hash - 0x33395E3F ^0xC21553CF
{
	func_4(32, -1);
	func_5();

	if (func_6())
		func_3();

	func_7();
	func_8(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x53 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_3() // Position - 0x133 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_9();
	return;
}

void func_4(int iParam0, int iParam1) // Position - 0x13F Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_9();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_5() // Position - 0x15C Hash - 0x1FABDECD ^0x67C342BC
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
			func_9();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_9();
					break;
			
				case 2:
					func_9();
					break;
			
				case 3:
					func_9();
					break;
			
				case 4:
					func_9();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_9();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_9();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_9();
	
		if (func_10() == 0)
			if (func_11())
				func_9();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_9();

	return 1;
}

BOOL func_6() // Position - 0x26D Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_7() // Position - 0x29B Hash - 0x69EBC839 ^0x36C9A24F
{
	var unk;
	int* p_num;

	unk.f_3 = 4;
	unk.f_3.f_1 = -1;
	unk.f_3.f_1.f_1 = -1;
	unk.f_3.f_1.f_2 = -1;
	unk.f_3.f_1.f_5 = -1;
	unk.f_3.f_1.f_8 = -1;
	unk.f_3.f_1.f_8.f_1 = -1;
	unk.f_3.f_1.f_8.f_2 = -1;
	unk.f_3.f_1.f_8.f_5 = -1;
	unk.f_3.f_1.f_8.f_8 = -1;
	unk.f_3.f_1.f_8.f_8.f_1 = -1;
	unk.f_3.f_1.f_8.f_8.f_2 = -1;
	unk.f_3.f_1.f_8.f_8.f_5 = -1;
	unk.f_3.f_1.f_8.f_8.f_8 = -1;
	unk.f_3.f_1.f_8.f_8.f_8.f_1 = -1;
	unk.f_3.f_1.f_8.f_8.f_8.f_2 = -1;
	unk.f_3.f_1.f_8.f_8.f_8.f_5 = -1;
	Global_1289572 = { unk };
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1289572, 36, 7);
	func_12(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1289572), 36, "g_mpShowHostData");

	if (func_13())
	{
		Global_1289539[func_14()] = p_num;
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289539, 33, 8);
		func_15(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1289539[0]), 33, "g_mpShowPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289539, 33, 8);
		func_15(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1289539[0]), 33, "g_mpShowPlayerData");
	}

	return;
}

void func_8(BOOL bParam0) // Position - 0x38C Hash - 0x2B211437 ^0xE0D702E
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
					func_9();
					break;
			
				case 2:
					func_9();
					break;
			
				case 3:
					func_9();
					break;
			
				case 4:
					func_9();
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
			func_9();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_9() // Position - 0x455 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_10() // Position - 0x461 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_11() // Position - 0x46F Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

int func_12(int iParam0, int iParam1, char* sParam2) // Position - 0x47D Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

BOOL func_13() // Position - 0x486 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

int func_14() // Position - 0x495 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

int func_15(int iParam0, int iParam1, char* sParam2) // Position - 0x4A4 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

