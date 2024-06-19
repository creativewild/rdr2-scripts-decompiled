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

void main() // Position - 0x0 Hash - 0xF0A21755 ^0xEE7AEAC
{
	BOOL isThreadExitRequested;

	func_1();
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
	isThreadExitRequested = false;

	while (!isThreadExitRequested)
	{
		if (func_2() != -1)
			isThreadExitRequested = func_3(true, true);
		else
			isThreadExitRequested = SCRIPTS::IS_THREAD_EXIT_REQUESTED();
	
		func_4();
		BUILTIN::WAIT(0);
	}

	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x4B Hash - 0x4806095B ^0x8A009057
{
	Global_26044.f_324[0 /*8*/] = 0.5f;
	Global_26044.f_324[0 /*8*/].f_1 = 0.085f;
	Global_26044.f_324[0 /*8*/].f_2 = 0.9f;
	Global_26044.f_324[0 /*8*/].f_3 = 0.12f;
	Global_26044.f_324[1 /*8*/] = 0.5f;
	Global_26044.f_324[1 /*8*/].f_1 = 0.16f;
	Global_26044.f_324[1 /*8*/].f_2 = 0.9f;
	Global_26044.f_324[1 /*8*/].f_3 = 0.03f;
	Global_26044.f_324[1 /*8*/].f_4 = 100;
	Global_26044.f_324[1 /*8*/].f_5 = 60;
	Global_26044.f_324[1 /*8*/].f_6 = 58;
	Global_26044.f_324[1 /*8*/].f_7 = 200;
	Global_26044.f_197[0 /*21*/] = 1;
	Global_26044.f_197[0 /*21*/].f_3 = 0.5f;
	Global_26044.f_197[0 /*21*/].f_4 = 0.03f;
	Global_26044.f_197[0 /*21*/].f_1 = 0.1f;
	Global_26044.f_197[0 /*21*/].f_2 = 0.5f;
	Global_26044.f_197[1 /*21*/] = 1;
	Global_26044.f_197[1 /*21*/].f_3 = 0.5f;
	Global_26044.f_197[1 /*21*/].f_4 = 0.065f;
	Global_26044.f_197[1 /*21*/].f_1 = 0.1f;
	Global_26044.f_197[1 /*21*/].f_2 = 0.5f;
	Global_26044.f_197[2 /*21*/] = 1;
	Global_26044.f_197[2 /*21*/].f_3 = 0.5f;
	Global_26044.f_197[2 /*21*/].f_4 = 0.1f;
	Global_26044.f_197[2 /*21*/].f_1 = 0.1f;
	Global_26044.f_197[2 /*21*/].f_2 = 0.5f;
	Global_26044.f_197[3 /*21*/] = 1;
	Global_26044.f_197[3 /*21*/].f_3 = 0.89f;
	Global_26044.f_197[3 /*21*/].f_4 = 0.03f;
	Global_26044.f_197[3 /*21*/].f_1 = 0f;
	Global_26044.f_197[3 /*21*/].f_2 = 0.294f;
	TEXT_LABEL_ASSIGN_STRING(&(Global_26044.f_197[3 /*21*/].f_5), "Ctrl + Num8 - Show/Hide", 128);
	Global_26044.f_197[4 /*21*/] = 1;
	Global_26044.f_197[4 /*21*/].f_3 = 0.088f;
	Global_26044.f_197[4 /*21*/].f_4 = 0.03f;
	Global_26044.f_197[4 /*21*/].f_1 = 0f;
	Global_26044.f_197[4 /*21*/].f_2 = 0.294f;
	Global_26044.f_197[5 /*21*/] = 1;
	Global_26044.f_197[5 /*21*/].f_3 = 0.5f;
	Global_26044.f_197[5 /*21*/].f_4 = 0.148f;
	Global_26044.f_197[5 /*21*/].f_1 = 0.1f;
	Global_26044.f_197[5 /*21*/].f_2 = 0.3f;
	TEXT_LABEL_ASSIGN_STRING(&(Global_26044.f_197[5 /*21*/].f_5), "Critical error detected, this might cause unexpected behaviour. Please restart the game.", 128);
	return;
}

int func_2() // Position - 0x2B6 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x2C4 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_4() // Position - 0x3A4 Hash - 0x2704311C ^0x6820A49
{
	func_6();

	if (func_7())
	{
		if (Global_26044.f_196)
			Global_26044.f_192 = 1;
		else
			Global_26044.f_192 = func_8() > 1;
	
		Global_26044.f_193 = func_9();
		Global_26044.f_194 = func_9();
	}
	else
	{
		Global_26044.f_196 = 0;
		Global_26044.f_192 = Global_26044.f_195;
		Global_26044.f_194 = Global_26044.f_195;
		Global_26044.f_193 = Global_26044.f_195;
		return;
	}

	func_10(true);
	func_11(&Global_26044.f_1[0 /*19*/]);
	func_12();
	func_10(false);
	return;
}

void func_5() // Position - 0x429 Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_10(false);
	return;
}

void func_6() // Position - 0x436 Hash - 0xDF4653C ^0xEB536906
{
	int eventData;
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(4); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(4, i);
	
		if (SCRIPTS::GET_EVENT_DATA(4, i, &eventData, 1))
			func_13(eventData, eventAtIndex);
	}

	return;
}

BOOL func_7() // Position - 0x475 Hash - 0x7FD12804 ^0x7137A847
{
	return Global_26044.f_195;
}

int func_8() // Position - 0x482 Hash - 0x21D64237 ^0x21D64237
{
	return Global_26044;
}

BOOL func_9() // Position - 0x48D Hash - 0x361EC403 ^0xD38E3521
{
	return Global_26044.f_1[0 /*19*/].f_17 != 0;
}

void func_10(BOOL bParam0) // Position - 0x4A1 Hash - 0x29FA89BD ^0xF7F4BC1F
{
	if (bParam0)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	else
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}

	return;
}

void func_11(char* sParam0) // Position - 0x4C5 Hash - 0x3AD421F8 ^0xB5E8B1AE
{
	float num;
	float num2;

	if (!Global_26044.f_193)
		return;

	num = (float)MISC::GET_GAME_TIMER() / 1000f;
	num2 = (0.5f * BUILTIN::SIN(250f * (num - 0f))) + 0.5f;
	Global_26044.f_324[0 /*8*/].f_4 = BUILTIN::FLOOR(func_14(200f, 100f, num2));
	Global_26044.f_324[0 /*8*/].f_5 = BUILTIN::FLOOR(func_14(4f, 60f, num2));
	Global_26044.f_324[0 /*8*/].f_6 = BUILTIN::FLOOR(func_14(0f, 58f, num2));
	Global_26044.f_324[0 /*8*/].f_7 = BUILTIN::FLOOR(func_14(200f, 200f, num2));
	func_15(&Global_26044.f_324[0 /*8*/]);
	TEXT_LABEL_ASSIGN_STRING(&(Global_26044.f_197[0 /*21*/].f_5), "Script: '", 128);
	TEXT_LABEL_APPEND_STRING(&(Global_26044.f_197[0 /*21*/].f_5), sParam0, 128);
	TEXT_LABEL_APPEND_STRING(&(Global_26044.f_197[0 /*21*/].f_5), "'", 128);
	func_16(&Global_26044.f_197[0 /*21*/]);
	TEXT_LABEL_ASSIGN_STRING(&(Global_26044.f_197[1 /*21*/].f_5), func_17(sParam0->f_17), 128);
	func_16(&Global_26044.f_197[1 /*21*/]);
	TEXT_LABEL_ASSIGN_STRING(&(Global_26044.f_197[2 /*21*/].f_5), "Frame: ", 128);
	TEXT_LABEL_APPEND_INT(&(Global_26044.f_197[2 /*21*/].f_5), sParam0->f_18, 128);
	func_16(&Global_26044.f_197[2 /*21*/]);
	TEXT_LABEL_ASSIGN_STRING(&(Global_26044.f_197[4 /*21*/].f_5), "Error Count: ", 128);
	TEXT_LABEL_APPEND_INT(&(Global_26044.f_197[4 /*21*/].f_5), func_8(), 128);
	func_16(&Global_26044.f_197[4 /*21*/]);
	return;
}

void func_12() // Position - 0x631 Hash - 0xDFE162A6 ^0x9E075BBB
{
	if (!Global_26044.f_194)
		return;

	func_15(&Global_26044.f_324[1 /*8*/]);
	func_16(&Global_26044.f_197[5 /*21*/]);
	return;
}

BOOL func_13(int iParam0, eEventType eetParam1) // Position - 0x65E Hash - 0x237785A2 ^0x826489AD
{
	int i;
	int num;

	for (i = 9; i >= 0; i = i + -1)
	{
		if (i == 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_26044.f_1[i /*19*/], func_18(iParam0), 128);
			Global_26044.f_1[i /*19*/].f_16 = iParam0;
			Global_26044.f_1[i /*19*/].f_17 = eetParam1;
			Global_26044.f_1[i /*19*/].f_18 = MISC::GET_FRAME_COUNT();
		}
	
		num = i - 1;
	
		if (num < 0)
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&Global_26044.f_1[i /*19*/], &Global_26044.f_1[num /*19*/], 19);
		}
	}

	Global_26044 = Global_26044 + 1;
	return true;
}

float func_14(float fParam0, float fParam1, float fParam2) // Position - 0x6E9 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

void func_15(float fParam0) // Position - 0x6FE Hash - 0xBB891E38 ^0xC023699
{
	GRAPHICS::DRAW_RECT(*fParam0, fParam0->f_1, fParam0->f_2, fParam0->f_3, fParam0->f_4, fParam0->f_5, fParam0->f_6, fParam0->f_7, false, true);
	return;
}

void func_16(int iParam0) // Position - 0x72B Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

char* func_17(int iParam0) // Position - 0x733 Hash - 0x8B62784C ^0x8B62784C
{
	switch (iParam0)
	{
		case -1009774763:
			return "GLOBAL BLOCK INACCESSIBLE";
	
		case -992702923:
			return "ARRAY OVERRUN";
	
		case -921472336:
			return "UNKNOWN ERROR";
	
		case 397004310:
			return "INSTRUCTION LIMIT";
	
		case 1028822748:
			return "GLOBAL BLOCK NOT RESIDENT";
	
		case 2004694700:
			return "STACK OVERFLOW";
	
		default:
		
	}

	return func_18(iParam0);
}

char* func_18(int iParam0) // Position - 0x791 Hash - 0xCCEDF737 ^0x2075CB05
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

