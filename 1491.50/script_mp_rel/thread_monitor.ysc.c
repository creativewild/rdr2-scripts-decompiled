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
#endregion

void main() // Position - 0x0 Hash - 0xD9778C9F ^0xD57E7342
{
	char* scriptName;
	BOOL flag;
	int systemTime;
	BOOL flag2;

	func_1();
	scriptName = func_3(func_2());
	func_4();
	func_5();
	func_6(0);
	Global_1051645.f_44 = 0;
	flag = false;
	iLocal_13 = 0;

	while (func_7() && !func_8(true, true) && !func_9(4) && !func_9(2048) && func_11(func_10()))
	{
		if (func_12())
		{
			func_13();
			func_14();
		
			switch (func_15())
			{
				case 0:
					if (func_16() && func_17(PLAYER::PLAYER_ID()) > 2 || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[0], false) || !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(scriptName, -1, true, 0))
					{
						if (func_18(0) == 0)
						{
							!func_19();
							func_18(0) == 0;
							func_20();
							func_21();
						}
						else if (Global_1051645.f_7 > 0)
						{
							func_22();
						}
					}
				
					Global_1051645.f_11;
				
					if (func_23())
					{
						func_22();
						func_24();
						func_25();
						func_26();
						func_6(1);
					}
					break;
			
				case 1:
					if (!func_19())
					{
						func_27();
						flag = false;
						func_6(2);
						SCRIPTS::REQUEST_SCRIPT(scriptName);
					}
					else
					{
						func_28();
					}
					break;
			
				case 2:
					if (func_29())
					{
						func_30() % 1000 == 0;
					}
					else
					{
						if (!flag)
						{
							if (func_30() > Global_1901671.f_603)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on a session end for longer than 2 minutes now.  This is bad.");
								flag = true;
								func_31(30, -1);
							}
						}
					
						if (func_18(0) == 1)
						{
							func_22();
						
							if (Global_1051645.f_7 <= 0)
							{
								if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									func_6(3);
								else
									func_6(4);
							}
							else
							{
								if (func_18(0) != 0)
								{
								}
							
								func_22();
							}
						}
						else if (Global_1051645.f_11)
						{
							func_6(3);
						}
					}
					break;
			
				case 3:
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!flag)
						{
							if (func_30() > Global_1901671.f_603)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on NETWORK_IS_GAME_IN_PROGRESS for longer than 2 minutes now.  This is bad.");
								flag = true;
								func_31(30, -1);
							}
						}
					}
					else
					{
						func_6(4);
					}
					break;
			
				case 4:
					if (SCRIPTS::DOES_SCRIPT_EXIST(scriptName))
					{
						SCRIPTS::REQUEST_SCRIPT(scriptName);
					
						if (SCRIPTS::HAS_SCRIPT_LOADED(scriptName) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6000) > 0)
						{
							if (Global_1051645.f_44)
							{
								func_32(true);
								func_33(true, true);
								Global_1051645.f_44 = 0;
							}
						
							func_34();
							Global_1051645.f_16[0] = SCRIPTS::START_NEW_SCRIPT(scriptName, 6000);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
							func_35();
							func_6(0);
							func_27();
						
							if (Global_1051645.f_11)
								Global_1051645.f_11 = 0;
						
							func_36();
						}
					}
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (func_9(2048))
	{
	}
	else if (func_9(4))
	{
	}
	else if (!func_11(func_10()))
	{
	}
	else if (!func_11(func_37()))
	{
	}
	else
	{
		func_6(5);
		CAM::DO_SCREEN_FADE_OUT(0);
		flag2 = false;
	
		while (!flag2)
		{
			switch (func_15())
			{
				case 5:
					systemTime = MISC::GET_SYSTEM_TIME();
					NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					func_6(6);
					break;
			
				case 6:
					if (MISC::GET_SYSTEM_TIME() - systemTime > 1000)
					{
						func_6(7);
					
						if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_OUT(0);
					}
					break;
			
				case 7:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_31(iLocal_13, -1);
						flag2 = true;
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					break;
			}
		
			BUILTIN::WAIT(0);
		}
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	if (NETWORK::NETWORK_IS_IN_SESSION())
		NETWORK::NETWORK_SESSION_LEAVE_SESSION();

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		PLAYER::FORCE_CLEANUP(2);

	func_38(2048);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x3B9 Hash - 0xAC42989 ^0xF0AF4CB0
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	func_39(&Global_1051645);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

var func_2() // Position - 0x3D6 Hash - 0x4228A1C2 ^0x70530203
{
	return Global_1572887.f_15;
}

char* func_3(int iParam0) // Position - 0x3E4 Hash - 0x69444DA ^0x69444DA
{
	switch (iParam0)
	{
		case 1:
			return "net_main_tlg_online";
	
		default:
		
	}

	return "net_main_online";
}

void func_4() // Position - 0x409 Hash - 0x6DA30377 ^0x178CB113
{
	!Global_1051645.f_9;
	Global_1051645.f_9 = 1;
	return;
}

void func_5() // Position - 0x422 Hash - 0x3932D0A1 ^0x4E079536
{
	Global_1051645.f_40 = MISC::GET_SYSTEM_TIME();
	return;
}

void func_6(int iParam0) // Position - 0x434 Hash - 0x1453D55E ^0x5D3AFEC7
{
	Global_1051645.f_12 = iParam0;
	func_41(func_40(Global_1051645.f_12));
	return;
}

BOOL func_7() // Position - 0x452 Hash - 0x3A2173D5 ^0xC4A75788
{
	iLocal_13 = 0;

	if (func_42(1976253964))
	{
	}
	else if (func_42(1355399116))
	{
	}
	else if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	else if (Global_1572887.f_12)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (func_9(4) || func_9(2048) || !func_11(func_10()))
				iLocal_13 = 0;
			else
				iLocal_13 = 24;
	}

	return true;
}

BOOL func_8(BOOL bParam0, BOOL bParam1) // Position - 0x4D1 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_9(int iParam0) // Position - 0x5B1 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_10() // Position - 0x5C4 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1572864;
}

BOOL func_11(int iParam0) // Position - 0x5D0 Hash - 0x5EF98C2A ^0x5EF98C2A
{
	if (iParam0 == 3)
		return true;

	if (iParam0 == 4)
		return true;

	return false;
}

BOOL func_12() // Position - 0x5ED Hash - 0x4228A1C2 ^0x5FAFE78F
{
	return Global_1051645.f_9;
}

void func_13() // Position - 0x5FB Hash - 0x483FF194 ^0x311F0D05
{
	var unk;
	int num;
	int i;

	func_43();

	if (Global_1051645.f_7 > 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
		i = 0;
	
		for (i = 0; i <= Global_1051645.f_7 - 1; i = i + 1)
		{
			num = func_18(i);
		
			if (num == 0)
				TEXT_LABEL_APPEND_STRING(&unk, "S", 64);
			else if (num == 1)
				TEXT_LABEL_APPEND_STRING(&unk, "E", 64);
			else if (num == -1)
				TEXT_LABEL_APPEND_STRING(&unk, "N", 64);
		}
	}

	return;
}

void func_14() // Position - 0x669 Hash - 0x7EF8254C ^0x7BCF7345
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				func_20();
				break;
		
			case 3:
				break;
		
			case 4:
				break;
		}
	}

	return;
}

int func_15() // Position - 0x6B3 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

BOOL func_16() // Position - 0x6C1 Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

int func_17(Player plParam0) // Position - 0x6DD Hash - 0xCAA14173 ^0xCAA14173
{
	if (plParam0 >= 0)
		return Global_1056554[plParam0 /*491*/];

	return -1;
}

int func_18(int iParam0) // Position - 0x6F8 Hash - 0xB3F5DAA8 ^0xB3F5DAA8
{
	int num;

	num = func_44(iParam0);
	return num;
}

BOOL func_19() // Position - 0x70A Hash - 0xD0BF229D ^0x45F95A8C
{
	int i;
	BOOL num;

	num = 0;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_1051645.f_16[i] != 0)
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
				num = 1;
			else
				Global_1051645.f_16[i] = 0;
	}

	return num;
}

void func_20() // Position - 0x75A Hash - 0xD4ABC353 ^0x1E157371
{
	Global_1051645.f_10 = 1;
	return;
}

void func_21() // Position - 0x769 Hash - 0xA6E27BF9 ^0x1BEE0D44
{
	if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_37))
		SCRIPTS::TERMINATE_THREAD(Global_1051645.f_37);

	return;
}

int func_22() // Position - 0x788 Hash - 0xB4DE2DAF ^0xBFF2FCE7
{
	int num;
	int num2;
	int i;

	if (Global_1051645.f_7 <= 0)
	{
		num = -1;
		return num;
	}

	num2 = func_44(0);
	i = 0;

	for (i = 0; i <= 4; i = i + 1)
	{
		Global_1051645[i] = Global_1051645[i + 1];
	}

	func_45();
	return num2;
}

BOOL func_23() // Position - 0x7DA Hash - 0xC61B2370 ^0x2875C907
{
	return Global_1051645.f_10 || Global_1051645.f_11;
}

void func_24() // Position - 0x7F4 Hash - 0xD4ABC353 ^0xDB24033
{
	Global_1051645.f_8 = 1;
	return;
}

void func_25() // Position - 0x803 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_26() // Position - 0x80B Hash - 0x3932D0A1 ^0x4E079536
{
	Global_1051645.f_40 = MISC::GET_SYSTEM_TIME();
	return;
}

void func_27() // Position - 0x81D Hash - 0x54676713 ^0xF5463CDC
{
	Global_1051645.f_10 = 0;
	return;
}

void func_28() // Position - 0x82C Hash - 0x4B280D80 ^0xA49B08AC
{
	int i;
	BOOL threadExists;
	BOOL hasScriptHandler;

	threadExists = false;
	hasScriptHandler = false;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_1051645.f_16[i] != 0)
		{
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
			{
				SCRIPTS::GET_THREAD_EXISTENCE_DETAILS(Global_1051645.f_16[i], &threadExists, &hasScriptHandler);
			
				if (threadExists)
				{
					if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1051645.f_16[i]))
						SCRIPTS::_REQUEST_THREAD_EXIT(Global_1051645.f_16[i]);
				}
				else if (hasScriptHandler)
				{
				}
			}
			else
			{
				Global_1051645.f_16[i] = 0;
			}
		}
	}

	return;
}

BOOL func_29() // Position - 0x8BF Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_30() // Position - 0x8C8 Hash - 0x1D714C9D ^0x116D850F
{
	return MISC::GET_SYSTEM_TIME() - Global_1051645.f_40;
}

void func_31(int iParam0, int iParam1) // Position - 0x8DB Hash - 0x95A959B9 ^0x95A959B9
{
	if (iParam0 != 0)
		func_46(iParam0, iParam1);

	func_47(4);
	func_48();
	func_49(1);
	return;
}

void func_32(BOOL bParam0) // Position - 0x8FF Hash - 0x94D25186 ^0x198BE5BA
{
	if (!bParam0)
	{
		func_50(2);
	}
	else
	{
		func_51(2);
		PLAYER::_0x2C2D287748E8E9B7(false);
	}

	return;
}

void func_33(BOOL bParam0, BOOL bParam1) // Position - 0x921 Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_52(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_50(0);
	}
	else
	{
		if (bParam1)
			func_54(0, false, 0, true);
	
		func_51(0);
		func_55(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_56(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_57(Global_1102813.f_3839, 36);
	func_58(Global_1102813.f_3878, 36);
	return;
}

void func_34() // Position - 0xA6C Hash - 0xFEC7EE2F ^0xBE34F9F4
{
	int i;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_1051645.f_16[i] != 0)
		{
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
			{
			}
		
			Global_1051645.f_16[i] = 0;
		}
	}

	return;
}

void func_35() // Position - 0xAB7 Hash - 0xBAC16685 ^0x9C862E1F
{
	Global_1572887.f_9 = 0;
	func_59();
	return;
}

void func_36() // Position - 0xACA Hash - 0x54676713 ^0x87248C07
{
	Global_1051645.f_8 = 0;
	return;
}

int func_37() // Position - 0xAD9 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1572864.f_1;
}

void func_38(int iParam0) // Position - 0xAE7 Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_39(var uParam0) // Position - 0xB05 Hash - 0xC2F34B3D ^0x256E751E
{
	var unk;

	unk = 6;
	unk.f_1 = -1;
	unk.f_1.f_1 = -1;
	unk.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	unk.f_9 = 1;
	unk.f_16 = 20;
	unk.f_45.f_2 = 32;
	unk.f_80 = 10;
	*uParam0 = { unk };
	return;
}

char* func_40(int iParam0) // Position - 0xB67 Hash - 0xAF306359 ^0x70710072
{
	char* str;

	str = "invalid";

	switch (iParam0)
	{
		case 0:
			str = "MPTM_RUNNING";
			break;
	
		case 1:
			str = "MPTM_SHUTDOWN";
			break;
	
		case 2:
			str = "MPTM_DEAD";
			break;
	
		case 3:
			str = "MPTM_WAIT_TO_REBOOT";
			break;
	
		case 4:
			str = "MPTM_REBOOT";
			break;
	
		case 5:
			str = "MPTM_MP_BAIL";
			break;
	
		case 6:
			str = "MPTM_FADE_OUT";
			break;
	
		case 7:
			str = "MPTM_EXIT";
			break;
	}

	return str;
}

void func_41(char* sParam0) // Position - 0xBF5 Hash - 0xFB58C8E6 ^0xE1B59648
{
	int systemTime;
	int frameCount;

	systemTime = MISC::GET_SYSTEM_TIME();
	frameCount = MISC::GET_FRAME_COUNT();
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::GET_SYSTEM_TIME();
	return;
}

BOOL func_42(Hash hParam0) // Position - 0xC1D Hash - 0x7CC7B7B8 ^0xBC5EBD99
{
	if (hParam0 == 0)
		return false;

	return SCRIPTS::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, hParam0);
}

void func_43() // Position - 0xC36 Hash - 0x8C40D735 ^0x60FAE515
{
	int i;
	int eventData;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i))
		{
			case -2119801478:
				func_61();
			
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 1))
				{
					switch (eventData)
					{
						case 0:
							break;
					
						case 1:
							break;
					
						case 2:
							break;
					
						case 3:
							break;
					
						case 4:
							break;
					
						case 5:
							break;
					
						case 7:
							break;
					}
				}
				break;
		
			case -857756425:
				func_60();
			
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 1))
				{
					switch (eventData)
					{
						case 0:
							break;
					
						case 1:
							break;
					
						case 2:
							break;
					
						case 3:
							Global_1051645.f_44 = 1;
							break;
					
						case 4:
							break;
					
						case 5:
							break;
					
						case 7:
							break;
					}
				}
				break;
		}
	}

	return;
}

int func_44(int iParam0) // Position - 0xD2A Hash - 0xABC952CF ^0xD11FC09B
{
	int num;

	if (Global_1051645.f_7 <= 0)
	{
		num = -1;
		return num;
	}

	return Global_1051645[iParam0];
}

void func_45() // Position - 0xD50 Hash - 0xB9470FD4 ^0x726B8FF8
{
	Global_1051645.f_7 = Global_1051645.f_7 - 1;

	if (Global_1051645.f_7 < 0)
		Global_1051645.f_7 = 0;

	return;
}

void func_46(int iParam0, int iParam1) // Position - 0xD77 Hash - 0xA62339F3 ^0xF0743E79
{
	if (Global_1572864.f_17 != 0)
		return;

	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
	return;
}

void func_47(int iParam0) // Position - 0xD9C Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_48() // Position - 0xDB3 Hash - 0xAFCBF874 ^0xD0F8E2BC
{
	int i;

	i = 0;

	for (i = 0; i <= 2; i = i + 1)
	{
		Global_1572887.f_300.f_1[i] = 0;
	}

	return;
}

void func_49(int iParam0) // Position - 0xDDE Hash - 0x2BE23AD4 ^0x369A49EF
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

int func_50(int iParam0) // Position - 0xDF7 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_62(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_51(int iParam0) // Position - 0xE14 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_63(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_52(int iParam0) // Position - 0xE31 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xE7C Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_54(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xEA6 Hash - 0x79169E9C ^0xA3FE4569
{
	func_64(iParam0);

	if (!func_65(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_66(128) && !func_67(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_68() == 4)
		func_50(18);

	func_69(1024);
	return;
}

void func_55(var uParam0) // Position - 0xF08 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_56(float* pfParam0) // Position - 0xF1A Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_57(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0xF2C Hash - 0x63EE9672 ^0xDAC9325D
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xF82 Hash - 0x6DF4F0B2 ^0x7B946ED1
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

void func_59() // Position - 0xFAF Hash - 0x7A7B15A5 ^0x5CD02123
{
	if (Global_1901671.f_1 == 0)
		return;

	Global_1901671.f_1 = 0;
	return;
}

void func_60() // Position - 0xFCB Hash - 0xCE97BCEF ^0xA149BF1
{
	if (Global_1051645.f_7 >= 6)
		return;

	if (Global_1051645.f_7 > 0)
		if (Global_1051645[Global_1051645.f_7 - 1] == 0)
			return;

	Global_1051645[Global_1051645.f_7] = 0;
	func_70();
	return;
}

void func_61() // Position - 0x1010 Hash - 0x64359979 ^0xBFD06775
{
	if (Global_1051645.f_7 >= 6)
		return;

	if (Global_1051645.f_7 > 0)
		if (Global_1051645[Global_1051645.f_7 - 1] == 1)
			return;

	Global_1051645[Global_1051645.f_7] = 1;
	func_70();
	return;
}

BOOL func_62(int* piParam0, int iParam1, int iParam2) // Position - 0x1055 Hash - 0x8AC008A3 ^0x375BADC3
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

BOOL func_63(int* piParam0, int iParam1, int iParam2) // Position - 0x1087 Hash - 0xA8F08582 ^0x9810C45C
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

void func_64(int iParam0) // Position - 0x10BA Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_65(int iParam0) // Position - 0x10CC Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_66(BOOL bParam0) // Position - 0x10E1 Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_67(int iParam0) // Position - 0x10F6 Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_68() // Position - 0x1124 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_69(BOOL bParam0) // Position - 0x1157 Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_71(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

void func_70() // Position - 0x117E Hash - 0xA4262E6 ^0x368A9204
{
	Global_1051645.f_7 = Global_1051645.f_7 + 1;

	if (Global_1051645.f_7 > 6)
		Global_1051645.f_7 = 6;

	return;
}

BOOL func_71(BOOL bParam0) // Position - 0x11A5 Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

