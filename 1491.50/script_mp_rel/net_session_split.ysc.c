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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = -1;
#endregion

void main() // Position - 0x0 Hash - 0xCE7058D7 ^0x56A0F8CD
{
	iLocal_13.f_1 = { uScriptParam_0 };
	func_1();

	while (!func_2(false, false) && iLocal_13 != 5)
	{
		func_3(&iLocal_13);
		BUILTIN::WAIT(0);
	}

	func_4();
	return;
}

void func_1() // Position - 0x3B Hash - 0xCE5FB49E ^0x213D7813
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x47 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_3(var uParam0) // Position - 0x127 Hash - 0x59FC40B ^0x21529472
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_1.f_1), i))
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))
				SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(uParam0->f_1.f_1), i);
	}

	if (*uParam0 > 0)
		if (MISC::GET_GAME_TIMER() - uParam0->f_6 > 15000)
			func_5(5, uParam0);

	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(&(uParam0->f_1.f_1)))
			{
				func_5(1, uParam0);
				uParam0->f_6 = MISC::GET_GAME_TIMER();
				NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(uParam0->f_1.f_3);
			}
			break;
	
		case 1:
			if (NETWORK::NETWORK_AUTO_SESSION_SPLIT_SESSION(1, uParam0->f_1.f_4, 0, -1))
				func_5(2, uParam0);
			break;
	
		case 2:
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT())
			{
			}
			else
			{
				func_5(3, uParam0);
			}
			break;
	
		case 3:
			if (NETWORK::_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL())
				func_5(4, uParam0);
			else
				func_5(1, uParam0);
			break;
	
		case 4:
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
			{
				if (!NETWORK::_0x0B6B4507AC5EA8B8())
					if (!NETWORK::NETWORK_IS_RESETTING_POPULATION())
						NETWORK::NETWORK_RESET_POPULATION(false, 0);
			
				func_5(5, uParam0);
			}
			else
			{
				func_5(1, uParam0);
			}
			break;
	
		case 5:
			break;
	}

	return;
}

void func_4() // Position - 0x265 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_5(int iParam0, var uParam1) // Position - 0x271 Hash - 0xE093B57 ^0xE093B57
{
	*uParam1 = iParam0;
	return;
}

