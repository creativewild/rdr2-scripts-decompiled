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
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x918BB12C ^0x1D3758B2
{
	BOOL isThreadExitRequested;

	SCRIPTS::TERMINATE_THIS_THREAD();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || !func_1(uScriptParam_0))
		SCRIPTS::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
	uLocal_13 = uScriptParam_0;
	isThreadExitRequested = false;

	while (!isThreadExitRequested)
	{
		if (func_2() != -1)
			isThreadExitRequested = func_3(true, true);
		else
			isThreadExitRequested = SCRIPTS::IS_THREAD_EXIT_REQUESTED();
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1(int iParam0) // Position - 0x60 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -992702923:
		case 397004310:
		case 2004694700:
			return true;
	
		default:
		
	}

	return false;
}

int func_2() // Position - 0x87 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x95 Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return 0;

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
			return 1;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return 1;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
		
			case 1:
				return 1;
		
			case 2:
				if (!bParam0)
					return 1;
				break;
		
			case 3:
				return 1;
		
			case 4:
				return 1;
		
			default:
				return 1;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return 1;
	}

	return 0;
}

