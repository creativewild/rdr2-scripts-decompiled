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

void main() // Position - 0x0 Hash - 0x6C9A1651 ^0x6C9A1651
{
	char* str;
	var unk;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	str = "net_ambient_content_evaluator";
	func_2(&unk);

	while (!func_3(false, false))
	{
		if (func_4())
			func_5(&Global_1219595, str);
		else
			func_6(&Global_1219595, str, &unk);
	
		BUILTIN::WAIT(0);
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		func_6(&Global_1219595, str, &unk);
		BUILTIN::WAIT(0);
	}

	func_7();
	return;
}

void func_1() // Position - 0x71 Hash - 0xE8EEEED0 ^0x37F20448
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_8();

	if (func_9())
		func_7();

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	return;
}

void func_2(var uParam0) // Position - 0x9A Hash - 0x879B7DAC ^0x879B7DAC
{
	func_10(uParam0, 0);
	return;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0xA9 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_4() // Position - 0x189 Hash - 0xE54755E3 ^0xE54755E3
{
	return !func_12(func_11(), 0, 0);
}

void func_5(var uParam0, char* sParam1) // Position - 0x19C Hash - 0xD2FD867B ^0xE0F9B74F
{
	if (SCRIPTS::DOES_THREAD_EXIST(*uParam0))
		return;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
		return;

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
		return;

	SCRIPTS::REQUEST_SCRIPT(sParam1);

	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam1))
	{
		*uParam0 = SCRIPTS::START_NEW_SCRIPT(sParam1, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam1);
		return;
	}

	return;
}

void func_6(var uParam0, char* sParam1, var uParam2) // Position - 0x1F5 Hash - 0x145D1552 ^0x54B995CE
{
	if (*uParam0 == 0)
		return;

	if (!SCRIPTS::DOES_THREAD_EXIST(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
		return;

	if (func_13(uParam2, 30000))
	{
		if (SCRIPTS::DOES_THREAD_EXIST(*uParam0))
			SCRIPTS::_REQUEST_THREAD_EXIT(*uParam0);
	
		func_2(uParam2);
	}

	return;
}

void func_7() // Position - 0x24C Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_8() // Position - 0x258 Hash - 0x1FABDECD ^0x67C342BC
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
			func_7();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_7();
					break;
			
				case 2:
					func_7();
					break;
			
				case 3:
					func_7();
					break;
			
				case 4:
					func_7();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_7();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_7();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_7();
	
		if (func_14() == 0)
			if (func_15())
				func_7();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_7();

	return 1;
}

BOOL func_9() // Position - 0x369 Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_10(var uParam0, int iParam1) // Position - 0x397 Hash - 0x11064FF ^0x6DE2240D
{
	uParam0->f_1 = func_16() - iParam1;
	func_17(uParam0, 1);
	func_18(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

struct<2> func_11() // Position - 0x3BD Hash - 0xEB184E4F ^0xA3D2CE41
{
	return Global_1140723.f_5.f_3;
}

BOOL func_12(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x3CF Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_19(Global_1051268) && !func_20(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_21(iParam2))
		return true;

	if (iParam3 != 0 && func_22(iParam3, 255))
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

	if (func_23())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_19(Global_1051268))
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

BOOL func_13(var uParam0, int iParam1) // Position - 0x4F8 Hash - 0x4C835E28 ^0x4C835E28
{
	if (!func_24(uParam0))
		return false;

	if (func_25(uParam0) > iParam1)
		return true;

	return false;
}

int func_14() // Position - 0x51E Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_15() // Position - 0x52C Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

int func_16() // Position - 0x53A Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

void func_17(var uParam0, int iParam1) // Position - 0x558 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x569 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_19(var uParam0, var uParam1) // Position - 0x57E Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_26(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_27(uParam0))
		return false;

	return true;
}

BOOL func_20(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x5B2 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_21(int iParam0) // Position - 0x5CD Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0x5EE Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_23() // Position - 0x62A Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_19(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

BOOL func_24(var uParam0) // Position - 0x682 Hash - 0x5001E582 ^0x5001E582
{
	return func_28(*uParam0, 1);
}

int func_25(var uParam0) // Position - 0x692 Hash - 0x720DD7E0 ^0x45527890
{
	if (!func_24(uParam0))
	{
		func_29(uParam0, false);
		return uParam0->f_1;
	}

	if (func_30(uParam0))
		return uParam0->f_2;

	return func_16() - uParam0->f_1;
}

BOOL func_26(int iParam0) // Position - 0x6CE Hash - 0x5000025C ^0x5000025C
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

int func_27(int iParam0) // Position - 0x70D Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_28(int iParam0, int iParam1) // Position - 0x7A3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_29(var uParam0, BOOL bParam1) // Position - 0x7B2 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_24(uParam0))
		func_2(uParam0);

	return;
}

BOOL func_30(var uParam0) // Position - 0x7D2 Hash - 0x39705408 ^0x39705408
{
	return func_28(*uParam0, 2);
}

