#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5689034F ^0x4B082B95
{
	int num;
	var unk;
	var unk2;
	int num2;
	int num3;
	Hash hashOfThisScriptName;

	if (iScriptParam_0 == -1)
		return;

	num = 0;
	unk = iScriptParam_0.f_1;
	unk2 = iScriptParam_0.f_2;
	num2 = iScriptParam_0;
	num3 = -1;

	if (Global_1072759.f_28313.f_25.f_72 == unk)
	{
		num3 = Global_1072759.f_28313.f_25.f_71;
		Global_1072759.f_28313.f_25.f_71 = -1;
		Global_1072759.f_28313.f_25.f_72 = 0;
	}

	hashOfThisScriptName = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();

	while (!func_1(&hashOfThisScriptName, &unk, &num) && func_2(&num, &unk2, &unk, &num2, &num3, &(iScriptParam_0.f_3)))
	{
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_1(var uParam0, var uParam1, var uParam2) // Position - 0x8F Hash - 0x5A1BB67E ^0x5A1BB67E
{
	if (func_3(false, false))
		return true;

	if (*uParam2 == 2)
		return true;

	return false;
}

BOOL func_2(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xB0 Hash - 0x4E82BC86 ^0x4E82BC86
{
	switch (*uParam0)
	{
		case 0:
			if (func_4(uParam1, uParam2, uParam3, uParam4, uParam5))
				*uParam0 = 1;
			else
				*uParam0 = 2;
			break;
	
		case 1:
			if (func_5(uParam1, uParam5))
				*uParam0 = 2;
			break;
	
		case 2:
			func_6(uParam1, uParam5);
			return false;
	}

	return true;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x115 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1F5 Hash - 0x71690553 ^0xBE13EB85
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		return false;

	switch (*uParam0)
	{
		case 0:
			return func_7(uParam1, uParam2, uParam3, uParam4);
	
		default:
		
	}

	return false;
}

BOOL func_5(var uParam0, var uParam1) // Position - 0x22B Hash - 0x5B166213 ^0x5B166213
{
	switch (*uParam0)
	{
		case 0:
			return func_8(uParam1);
	
		default:
		
	}

	return true;
}

int func_6(var uParam0, var uParam1) // Position - 0x24C Hash - 0x5B166213 ^0x5B166213
{
	switch (*uParam0)
	{
		case 0:
			return func_9(uParam1);
	
		default:
		
	}

	return 1;
}

BOOL func_7(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x26D Hash - 0x7E870558 ^0x7E870558
{
	if (*uParam3)
	{
	}
	else
	{
		func_10(*uParam0, uParam1, uParam2);
	}

	return 1;
}

BOOL func_8(var uParam0) // Position - 0x28A Hash - 0x296D9231 ^0x8435DC65
{
	int scriptTaskStatus;

	if (*uParam0)
	{
		return 1;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(Global_1295666.f_3, 655598529, true);
	
		if (!(scriptTaskStatus == 1 || scriptTaskStatus == 0 || scriptTaskStatus == 6))
			return 1;
	}

	return 0;
}

int func_9(var uParam0) // Position - 0x2D2 Hash - 0xE8D1C5B5 ^0xE8D1C5B5
{
	if (*uParam0)
	{
	}

	return 1;
}

void func_10(Hash hParam0, var uParam1, var uParam2) // Position - 0x2E4 Hash - 0x8F60F3DB ^0x6E87C283
{
	int playbackMode;

	if (PED::IS_PED_SITTING(Global_1295666.f_3) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Global_1295666.f_3) || PED::IS_PED_ON_MOUNT(Global_1295666.f_3))
		playbackMode = 0;
	else if (*uParam2 != -1)
		playbackMode = *uParam2;
	else
		playbackMode = 2;

	TASK::_TASK_PLAY_EMOTE(Global_1295666.f_3, *uParam1, playbackMode, hParam0, false, true, false, false, false);
	return;
}

