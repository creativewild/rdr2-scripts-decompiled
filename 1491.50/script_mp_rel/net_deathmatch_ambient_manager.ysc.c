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
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x320CFB86 ^0x13FB86F6
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();

	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	func_4(&Global_1220316, 4);
	func_4(&Global_1220316, 8);
	func_4(&Global_1220316, 16);
	func_5(0);

	if (func_6() != 0)
		func_7(0);

	if (func_8() != 0)
		func_9(0);

	return;
}

void func_1() // Position - 0x62 Hash - 0xEEAC5077 ^0xCFC52F31
{
	func_10(32, -1);
	func_11();

	if (func_12())
		func_13();

	func_14();
	func_15(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	func_16(&Global_1220316, 1);
	return;
}

BOOL func_2() // Position - 0x9D Hash - 0xE5A38AA7 ^0xE5A38AA7
{
	if (func_17(false, false))
		return true;

	if (Global_1048577)
		return true;

	return false;
}

void func_3() // Position - 0xBE Hash - 0x64208A98 ^0x6B1B4142
{
	if (func_18() != 0)
		return;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_VERSUS")))
		return;

	func_19();

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_8() != 0)
			func_9(0);
	
		return;
	}

	switch (func_20())
	{
		case -1:
			func_21();
			break;
	
		case 0:
			func_22();
			break;
	
		case 1:
			func_23();
			break;
	
		case 2:
			func_24();
			break;
	
		case 3:
			func_25();
			break;
	
		default:
			break;
	}

	return;
}

void func_4(int iParam0, int iParam1) // Position - 0x156 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_5(int iParam0) // Position - 0x16B Hash - 0x54DC2C2F ^0xB9EE6A09
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	Global_1220529 = iParam0;
	return;
}

int func_6() // Position - 0x18F Hash - 0x4228A1C2 ^0x69EA5C68
{
	return Global_1220316.f_211;
}

void func_7(int iParam0) // Position - 0x19D Hash - 0x29A8F290 ^0x3CE58891
{
	Global_1220316.f_211 = iParam0;
	return;
}

int func_8() // Position - 0x1AD Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1220316.f_1;
}

void func_9(int iParam0) // Position - 0x1BB Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1220316.f_1 = iParam0;
	return;
}

void func_10(int iParam0, int iParam1) // Position - 0x1CB Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_13();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_11() // Position - 0x1E8 Hash - 0x1FABDECD ^0x67C342BC
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
			func_13();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_13();
					break;
			
				case 2:
					func_13();
					break;
			
				case 3:
					func_13();
					break;
			
				case 4:
					func_13();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_13();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_13();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_13();
	
		if (func_18() == 0)
			if (func_26())
				func_13();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_13();

	return 1;
}

BOOL func_12() // Position - 0x2F9 Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_13() // Position - 0x327 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_14() // Position - 0x333 Hash - 0xE7C62432 ^0x6E535E1F
{
	func_27(&Global_1220529);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1220529, 86, 39);
	func_28(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1220529), 86, "g_mpDMAmbientManagerHostData");
	return;
}

void func_15(BOOL bParam0) // Position - 0x35F Hash - 0x2B211437 ^0xE0D702E
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
					func_13();
					break;
			
				case 2:
					func_13();
					break;
			
				case 3:
					func_13();
					break;
			
				case 4:
					func_13();
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
			func_13();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_16(int iParam0, int iParam1) // Position - 0x428 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_17(BOOL bParam0, BOOL bParam1) // Position - 0x439 Hash - 0x8CDC02F2 ^0xDB4E8541
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

int func_18() // Position - 0x519 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_19() // Position - 0x527 Hash - 0xEB852D41 ^0x373100C4
{
	int i;
	eEventType eventAtIndex;
	struct<4> eventData;

	i = 0;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		if (eventAtIndex != -507840394)
		{
		}
		else
		{
			SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 4);
		
			if (eventData != 187)
			{
			}
			else
			{
				func_29(i);
			}
		}
	}

	return;
}

int func_20() // Position - 0x579 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1220529;
}

void func_21() // Position - 0x585 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_22() // Position - 0x58D Hash - 0xCA06B6EB ^0xCA06B6EB
{
	if (func_30(Global_1220316, 1))
		func_5(1);

	return;
}

void func_23() // Position - 0x5A6 Hash - 0x36387AA2 ^0xA54582EA
{
	int i;
	int num;

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_1220529.f_5[i /*5*/].f_1 == 1)
			num = num + 1;
	}

	if (num != Global_1220529.f_3)
		Global_1220529.f_3 = num;

	if (Global_1220316.f_1 == 5)
	{
		Global_1220529.f_1 = Global_1220529.f_1 + 1;
		func_9(0);
	}

	if (Global_1220529.f_1 >= 3)
	{
		func_5(2);
		return;
	}

	if (num >= 3)
	{
		func_5(2);
		return;
	}

	func_31(Global_1220529.f_1);
	return;
}

void func_24() // Position - 0x638 Hash - 0x750352D4 ^0x12952E21
{
	int i;
	int num;

	if (func_30(Global_1220316, 2))
	{
		func_5(3);
		return;
	}

	if (Global_1220529.f_2 < 0)
	{
		Global_1220529.f_2 = 0;
		return;
	}

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_1220529.f_5[i /*5*/].f_1 == 1)
			num = num + 1;
	}

	if (num != Global_1220529.f_3)
		Global_1220529.f_3 = num;

	func_32();

	if (Global_1220529.f_1 == -1)
		if (!func_33())
			return;

	if (Global_1220529.f_2 > 0)
	{
		if (func_31(Global_1220529.f_1))
		{
			func_9(0);
			Global_1220529.f_1 = Global_1220529.f_1 + 1;
			Global_1220529.f_2 = Global_1220529.f_2 - 1;
		
			if (Global_1220529.f_1 >= 16)
				Global_1220529.f_1 = -1;
		}
	}
	else if (num < 3)
	{
		Global_1220529.f_2 = Global_1220529.f_2 + 1;
	}

	return;
}

void func_25() // Position - 0x724 Hash - 0x51B1E709 ^0x51B1E709
{
	Global_1220316 = 0;
	func_34();
	func_27(&Global_1220529);
	func_5(0);
	return;
}

BOOL func_26() // Position - 0x742 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_27(int* piParam0) // Position - 0x750 Hash - 0xF0588F56 ^0x2EA790D3
{
	var unk;
	int i;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	unk = -1;
	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		piParam0->f_5[i /*5*/] = { unk };
	}

	piParam0->f_2 = 0;
	piParam0->f_1 = 0;
	piParam0->f_4 = 0;
	return;
}

int func_28(int iParam0, int iParam1, char* sParam2) // Position - 0x79D Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_29(int iParam0) // Position - 0x7A6 Hash - 0xD8B792E0 ^0xD7A2CD07
{
	struct<12> eventData;
	Player hostOfThread;
	int i;
	var unk12;
	var unk24;
	var unk36;

	eventData.f_5 = -1;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 12))
		return;

	switch (eventData.f_4)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				return;
		
			func_39(eventData);
			break;
	
		case 1:
			switch (Global_1220316.f_211)
			{
				case 0:
					return;
			
				case 1:
					Global_1220316.f_206 = { eventData.f_5 };
					func_7(2);
					return;
			
				case 2:
					return;
			
				case 3:
					return;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (Global_1220316.f_211)
			{
				case 0:
					return;
			
				case 1:
					func_7(3);
					return;
			
				case 2:
					return;
			
				case 3:
					return;
			
				default:
					break;
			}
			break;
	
		case 3:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				return;
		
			if (eventData.f_5 == -1)
				return;
		
			for (i = 0; i < 16; i = i + 1)
			{
				if (Global_1220529.f_5[i /*5*/] != eventData.f_5)
				{
				}
				else
				{
					func_40(i);
					break;
				}
			}
			break;
	
		case 4:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				return;
		
			if (eventData.f_5 == -1)
				return;
		
			unk24.f_5 = -1;
		
			for (i = 0; i < 16; i = i + 1)
			{
				if (Global_1220529.f_5[i /*5*/] != eventData.f_5)
				{
				}
				else
				{
					unk24.f_4 = 8;
					unk24.f_5 = { Global_1220529.f_5[i /*5*/] };
					func_38(&unk24, func_37(0, 8));
					func_41(i);
					break;
				}
			}
			break;
	
		case 5:
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
				break;
		
			hostOfThread = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
		
			if (PLAYER::PLAYER_ID() != hostOfThread)
				break;
		
			if (GANG::NETWORK_IS_GANG_ID_VALID(eventData.f_10))
				if (eventData.f_5 != -1)
					func_35(eventData.f_5, eventData.f_10);
			break;
	
		case 6:
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
				break;
		
			hostOfThread = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
		
			if (PLAYER::PLAYER_ID() != hostOfThread)
				break;
		
			if (eventData.f_5 != -1)
			{
				if (func_36(eventData.f_5))
				{
					unk12.f_5 = -1;
					unk12.f_4 = 4;
					unk12.f_5 = { eventData.f_5 };
					func_38(&unk12, func_37(0, 8));
				}
			}
			break;
	
		case 7:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				return;
		
			if (eventData.f_5 == -1)
				return;
		
			for (i = 0; i < 16; i = i + 1)
			{
				if (Global_1220529.f_5[i /*5*/] != eventData.f_5)
				{
				}
				else
				{
					func_42(i, eventData.f_11);
					break;
				}
			}
			break;
	
		case 8:
			if (eventData.f_5 == Global_1220316.f_206)
			{
				unk36 = -1;
				Global_1220316.f_206 = { unk36 };
				func_7(0);
			}
			break;
	
		case 9:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				return;
		
			if (eventData.f_5 == -1)
				return;
		
			for (i = 0; i < 16; i = i + 1)
			{
				if (Global_1220529.f_5[i /*5*/] != eventData.f_5)
				{
				}
				else
				{
					func_43(i);
					break;
				}
			}
			break;
	
		case 10:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				return;
		
			if (func_30(Global_1220316, 1))
				return;
			else
				func_16(&Global_1220316, 1);
			break;
	
		case 11:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				return;
		
			func_16(&Global_1220316, 2);
			break;
	}

	return;
}

BOOL func_30(int iParam0, int iParam1) // Position - 0xB1F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_31(int iParam0) // Position - 0xB2E Hash - 0x1C2DA4DF ^0xB053069C
{
	var unk;
	int num;
	int num2;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return false;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	switch (func_8())
	{
		case 0:
			func_9(1);
			break;
	
		case 1:
			func_9(2);
			break;
	
		case 2:
			func_44(&unk, iParam0);
			func_45(&unk);
		
			if (func_46(&Global_1210485[Global_1295666 /*204*/], &unk, false, 0, 0, 0, 0))
			{
				func_9(3);
			}
			else
			{
				num = func_47(&Global_1210485[Global_1295666 /*204*/], &unk);
			
				if (num >= 0)
					func_48(&Global_1210485[Global_1295666 /*204*/], num);
			
				func_9(4);
			}
			break;
	
		case 3:
			func_44(&unk, iParam0);
		
			if (func_47(&Global_1210485[Global_1295666 /*204*/], &unk) != -1)
				break;
		
			num2 = -1;
			num2 = func_49(&(unk.f_8.f_5));
		
			if (num2 == -1)
			{
				func_9(4);
				break;
			}
		
			num2.f_1 = 1;
			Global_1220529.f_5[iParam0 /*5*/] = { num2 };
			func_9(5);
			break;
	
		case 4:
			if (Global_1220529.f_4 <= 0)
			{
				Global_1220529.f_4 = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT());
				break;
			}
		
			if (MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1220529.f_4) < 30)
				break;
		
			Global_1220529.f_4 = 0;
			func_9(1);
			break;
	
		case 5:
			if (Global_1220529.f_5[iParam0 /*5*/] == -1)
			{
				func_9(0);
				break;
			}
		
			return true;
	}

	return false;
}

void func_32() // Position - 0xDB9 Hash - 0xC01A4425 ^0xA4095883
{
	int i;
	BOOL flag;
	var unk;
	var unk16;
	var value;
	Player hostOfThread;

	i = 0;
	flag = false;
	unk = 2;
	unk.f_1 = -1;
	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_3 = -1;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_6.f_1 = -1;
	unk.f_5.f_9 = 2;
	unk16.f_5 = -1;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_1220529.f_5[i /*5*/].f_1 != 2)
		{
		}
		else
		{
			if (!func_50(Global_1220529.f_5[i /*5*/]))
			{
				func_41(i);
				return;
			}
		
			unk = { func_51(Global_1220529.f_5[i /*5*/]) };
		
			if (unk.f_5.f_2 == Global_1295666.f_10)
			{
			}
			else
			{
				if (!GANG::NETWORK_IS_GANG_ID_VALID(unk.f_5.f_2))
					flag = true;
			
				if (!GANG::NETWORK_IS_GANG_IN_SESSION(unk.f_5.f_2))
					flag = true;
			
				if (!GANG::NETWORK_IS_GANG_ACTIVE(unk.f_5.f_2))
					flag = true;
			
				if (GANG::NETWORK_GET_GANG_LEADER(unk.f_5.f_2) <= -1 || GANG::NETWORK_GET_GANG_LEADER(unk.f_5.f_2) == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(unk.f_5.f_2)))
					flag = true;
			
				if (flag)
				{
					SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
					{
						hostOfThread = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
					
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(hostOfThread))
							SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, hostOfThread);
					}
				
					if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&value))
					{
					}
					else if (MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1220615.f_8[i]) < 2)
					{
					}
					else
					{
						Global_1220615.f_8[i] = NETWORK::GET_CLOUD_TIME_AS_INT();
						unk16.f_4 = 5;
						unk16.f_5 = { Global_1220529.f_5[i /*5*/] };
						unk16.f_10 = Global_1295666.f_10;
						func_38(&unk16, value);
						return;
					}
				}
			}
		}
	}

	func_52();
	return;
}

BOOL func_33() // Position - 0xF85 Hash - 0xB0BC3DF2 ^0x7F4B4DA4
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_1220529.f_5[i /*5*/].f_1 != 1)
		{
		}
		else
		{
			Global_1220529.f_1 = i;
			return true;
		}
	}

	Global_1220529.f_1 = -1;
	return false;
}

void func_34() // Position - 0xFCA Hash - 0x5AC7FEF5 ^0xD4F166C7
{
	var unk;

	unk.f_2.f_2 = 5;
	unk.f_2.f_3 = 5;
	unk.f_2.f_3.f_1 = -1;
	unk.f_2.f_3.f_1.f_1 = -1;
	unk.f_2.f_3.f_1.f_2 = -1;
	unk.f_2.f_3.f_1.f_3 = 255;
	unk.f_2.f_3.f_1.f_4 = -1;
	unk.f_2.f_3.f_1.f_5 = -1;
	unk.f_2.f_3.f_1.f_6 = -1;
	unk.f_2.f_3.f_1.f_8 = 2;
	unk.f_2.f_3.f_1.f_8.f_1 = -1;
	unk.f_2.f_3.f_1.f_8.f_5 = -1;
	unk.f_2.f_3.f_1.f_8.f_5.f_1 = -1;
	unk.f_2.f_3.f_1.f_8.f_5.f_3 = -1;
	unk.f_2.f_3.f_1.f_8.f_5.f_4 = -1;
	unk.f_2.f_3.f_1.f_8.f_5.f_5 = -1;
	unk.f_2.f_3.f_1.f_8.f_5.f_6 = -1;
	unk.f_2.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	unk.f_2.f_3.f_1.f_8.f_5.f_9 = 2;
	unk.f_2.f_3.f_1.f_23.f_1 = 1024;
	unk.f_2.f_3.f_1.f_23.f_4 = -15;
	unk.f_2.f_3.f_1.f_23.f_5 = 255;
	unk.f_2.f_3.f_1.f_23.f_8 = 1;
	unk.f_2.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_2.f_3.f_1.f_23.f_13 = -1;
	unk.f_2.f_3.f_1.f_40 = -1;
	unk.f_2.f_3.f_1.f_40.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_2 = -1;
	unk.f_2.f_3.f_1.f_40.f_3 = 255;
	unk.f_2.f_3.f_1.f_40.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_8 = 2;
	unk.f_2.f_3.f_1.f_40.f_8.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	unk.f_2.f_3.f_1.f_40.f_23.f_1 = 1024;
	unk.f_2.f_3.f_1.f_40.f_23.f_4 = -15;
	unk.f_2.f_3.f_1.f_40.f_23.f_5 = 255;
	unk.f_2.f_3.f_1.f_40.f_23.f_8 = 1;
	unk.f_2.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_2.f_3.f_1.f_40.f_23.f_13 = -1;
	unk.f_2.f_3.f_1.f_40.f_40 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_2 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_3 = 255;
	unk.f_2.f_3.f_1.f_40.f_40.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8 = 2;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_2.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	unk.f_2.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	unk.f_2.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	unk.f_2.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	unk.f_2.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_2.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	unk.f_206 = -1;
	Global_1220316 = { unk };
	return;
}

void func_35(int iParam0, var uParam1) // Position - 0x133B Hash - 0xADE609F4 ^0xD2D7030C
{
	Global_1207480.f_231[iParam0 /*15*/].f_5.f_2 = uParam1;
	return;
}

BOOL func_36(int iParam0) // Position - 0x1353 Hash - 0x9BC61F50 ^0x1FCD5A30
{
	var unk;
	int num;
	int num2;
	int num3;

	if (!func_50(iParam0))
		return false;

	unk = 2;
	unk.f_1 = -1;
	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_3 = -1;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_6.f_1 = -1;
	unk.f_5.f_9 = 2;
	num = { Global_1207480.f_231[iParam0 /*15*/] };
	unk.f_1 = 0;
	Global_1207480.f_231[iParam0 /*15*/] = { unk };
	num2 = num;
	num3 = num.f_5.f_9;
	Global_1207480.f_13[num3] = Global_1207480.f_13[num3] - 1;
	Global_1207480.f_8[num2] = Global_1207480.f_8[num2] - 1;

	if (num2 != num3)
		Global_1207480.f_18[num2] = Global_1207480.f_18[num2] - 1;

	if (func_53(iParam0))
		Global_1207480.f_23[num2] = Global_1207480.f_23[num2] - 1;

	return true;
}

var func_37(int iParam0, int iParam1) // Position - 0x144A Hash - 0x42C305C ^0x81DF2F42
{
	return func_54(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_38(Any* panParam0, var uParam1) // Position - 0x1468 Hash - 0x9BA65439 ^0xA285F708
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 187;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 12, 25, &uParam1);
	return;
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x149F Hash - 0x968EA71E ^0xB8C22DC3
{
	var unk;
	int i;
	BOOL flag;
	var value;
	Any gangId;
	Player hostOfThread;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	unk.f_5 = -1;

	if (Global_1220529.f_3 <= 0)
	{
		unk.f_4 = 2;
		func_38(&unk, func_55(uParam0.f_1));
		return;
	}

	i = 0;
	flag = false;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_1220529.f_5[i /*5*/].f_1 != 1)
		{
		}
		else
		{
			unk.f_5 = { Global_1220529.f_5[i /*5*/] };
			flag = true;
			break;
		}
	}

	if (!flag)
	{
		unk.f_4 = 2;
		func_38(&unk, func_55(uParam0.f_1));
		return;
	}

	Global_1220529.f_5[i /*5*/].f_1 = 2;
	Global_1220529.f_5[i /*5*/].f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	unk.f_4 = 1;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, uParam0.f_1);
	func_38(&unk, value);
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);
	gangId = GANG::NETWORK_GET_GANG_ID(uParam0.f_1);

	if (GANG::NETWORK_IS_GANG_ID_VALID(gangId) && GANG::NETWORK_IS_GANG_ACTIVE(gangId))
		unk.f_10 = gangId;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
	{
		hostOfThread = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(hostOfThread))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, hostOfThread);
	}

	unk.f_4 = 5;
	func_38(&unk, value);
	return;
}

void func_40(int iParam0) // Position - 0x15D5 Hash - 0xCCB9DB3 ^0xDF76AA01
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (iParam0 <= -1 || iParam0 >= 16)
		return;

	Global_1220529.f_5[iParam0 /*5*/].f_2 = 0;
	Global_1220529.f_5[iParam0 /*5*/].f_1 = 1;
	return;
}

void func_41(int iParam0) // Position - 0x1617 Hash - 0x2B78EE71 ^0x82CBC349
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (iParam0 <= -1 || iParam0 >= 16)
		return;

	Global_1220529.f_5[iParam0 /*5*/].f_2 = 0;
	Global_1220529.f_5[iParam0 /*5*/].f_1 = 0;
	Global_1220529.f_5[iParam0 /*5*/] = -1;
	return;
}

void func_42(int iParam0, BOOL bParam1) // Position - 0x1664 Hash - 0xABE29AD7 ^0xE07D6E8F
{
	if (iParam0 <= -1 || iParam0 >= 16)
		return;

	Global_1220529.f_5[iParam0 /*5*/].f_2 = bParam1;

	if (!bParam1)
		Global_1220529.f_5[iParam0 /*5*/].f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();

	return;
}

void func_43(int iParam0) // Position - 0x16A5 Hash - 0xF60DDA8A ^0xB9BDB70
{
	if (iParam0 <= -1 || iParam0 >= 16)
		return;

	if (Global_1220529.f_5[iParam0 /*5*/].f_2)
		return;

	Global_1220529.f_5[iParam0 /*5*/].f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	return;
}

struct<40> func_44(var uParam0, int iParam1) // Position - 0x16E4 Hash - 0xB37D1B8F ^0x544D395D
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;
	*uParam0 = { unk };
	*uParam0 = 1;
	uParam0->f_2 = 6;
	uParam0->f_5 = 0;
	uParam0->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_8 = 3;
	uParam0->f_8.f_1 = 2;
	uParam0->f_8.f_5.f_2 = Global_1295666.f_10;
	uParam0->f_8.f_5.f_5 = iParam1;
	uParam0->f_8.f_5.f_9 = 3;
	return *uParam0;
}

void func_45(var uParam0) // Position - 0x17E5 Hash - 0x52FF39FA ^0x75C19672
{
	var unk;

	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_2 = -1;
	unk.f_5.f_3 = 255;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_8 = 2;
	unk.f_5.f_8.f_1 = -1;
	unk.f_5.f_8.f_5 = -1;
	unk.f_5.f_8.f_5.f_1 = -1;
	unk.f_5.f_8.f_5.f_3 = -1;
	unk.f_5.f_8.f_5.f_4 = -1;
	unk.f_5.f_8.f_5.f_5 = -1;
	unk.f_5.f_8.f_5.f_6 = -1;
	unk.f_5.f_8.f_5.f_6.f_1 = -1;
	unk.f_5.f_8.f_5.f_9 = 2;
	unk.f_5.f_23.f_1 = 1024;
	unk.f_5.f_23.f_4 = -15;
	unk.f_5.f_23.f_5 = 255;
	unk.f_5.f_23.f_8 = 1;
	unk.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_5.f_23.f_13 = -1;
	unk.f_5 = { *uParam0 };
	unk.f_4 = 0;
	func_56(&unk, func_37(0, 8));
	return;
}

BOOL func_46(int* piParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x18B6 Hash - 0x2EE7EC36 ^0x3C7F57D
{
	int num;
	int num2;

	if (func_57(piParam0))
		return false;

	if (!func_58(&(uParam1->f_8)))
		return false;

	if (uParam1->f_2 == -1)
		return false;

	if (uParam1->f_2 == 5)
		uParam1->f_3 = PLAYER::PLAYER_ID();

	if (uParam1->f_5 == -1)
		return false;

	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
		return false;

	num = func_47(piParam0, uParam1);

	if (num >= 0)
		return false;

	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
			if (!func_59(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
				return false;
			break;
	
		default:
			break;
	}

	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	num2 = (piParam0->f_1 + *piParam0) % piParam0->f_2;
	uParam1->f_4 = num2;
	piParam0->f_3[num2 /*40*/] = { *uParam1 };
	func_60(&piParam0->f_3[num2 /*40*/], 0);
	*piParam0 = *piParam0 + 1;
	return true;
}

int func_47(int* piParam0, var uParam1) // Position - 0x19A7 Hash - 0x67A996 ^0x5F20740C
{
	int i;
	int num;

	for (i = 0; i < *piParam0; i = i + 1)
	{
		num = (piParam0->f_1 + i) % piParam0->f_2;
	
		if (func_61(uParam1, &piParam0->f_3[num /*40*/]))
			return i;
	}

	return -1;
}

struct<40> func_48(int* piParam0, int iParam1) // Position - 0x19E8 Hash - 0xB9C722BD ^0xB9C722BD
{
	var unk;

	unk = { func_62(piParam0, iParam1) };
	func_63(piParam0, iParam1);
	return unk;
}

int func_49(var uParam0) // Position - 0x1A0A Hash - 0xC6AB7C0D ^0x7895D4AD
{
	int num;
	int i;

	if (!func_64(uParam0))
		return -1;

	num = func_65(uParam0, uParam0->f_9);

	if (num != -1)
		return num;

	for (i = 0; i < 4; i = i + 1)
	{
		if (i == uParam0->f_9)
		{
		}
		else
		{
			num = func_65(uParam0, i);
		
			if (num != -1)
				return num;
		}
	}

	return -1;
}

BOOL func_50(int iParam0) // Position - 0x1A6B Hash - 0x596E39DA ^0x596E39DA
{
	return iParam0 >= 0 && iParam0 < 71;
}

struct<15> func_51(int iParam0) // Position - 0x1A81 Hash - 0xF427A620 ^0x34D54A29
{
	var unk;

	unk = 2;
	unk.f_1 = -1;
	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_3 = -1;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_6.f_1 = -1;
	unk.f_5.f_9 = 2;

	if (!func_50(iParam0))
		return unk;

	return Global_1207480.f_231[iParam0 /*15*/];
}

void func_52() // Position - 0x1AEB Hash - 0x8C133227 ^0x601291CD
{
	int num;
	int i;
	int num2;
	var unk5;

	num = -1;
	i = 0;
	unk5.f_5 = -1;

	for (i = 0; i < 16; i = i + 1)
	{
		num = { Global_1220529.f_5[i /*5*/] };
	
		if (num == -1)
		{
		}
		else if (num.f_1 != 2)
		{
		}
		else if (func_66(i))
		{
		}
		else
		{
			num2 = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - num.f_4);
		
			if (num2 >= 60)
			{
				func_67(&num, 0);
				unk5.f_4 = 6;
				unk5.f_5 = { num };
				func_38(&unk5, func_37(0, 8));
			}
		
			Global_1220529.f_5[i /*5*/] = { num };
		}
	}

	return;
}

BOOL func_53(int iParam0) // Position - 0x1B94 Hash - 0xF654448C ^0x32AAEFDC
{
	if (iParam0 < 3)
		return false;

	if (iParam0 < 3 + Global_1207480.f_3[1])
		return false;

	if (iParam0 < 35)
		return true;

	if (iParam0 < 35 + Global_1207480.f_3[2])
		return false;

	if (iParam0 < 35 + Global_1207480.f_3[2] + 16)
		return false;

	return true;
}

var func_54(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x1BF2 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_68() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_69());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_69());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_69());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_70(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_71(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_72(i) != 1)
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
					if (!func_73(player2))
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

var func_55(int iParam0) // Position - 0x1F85 Hash - 0x76D96CB1 ^0x9EF34143
{
	var value;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, iParam0);
	return value;
}

void func_56(Any* panParam0, var uParam1) // Position - 0x1F97 Hash - 0xC2157C75 ^0x2276B021
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 4;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 45, 37, &uParam1);
	return;
}

BOOL func_57(int* piParam0) // Position - 0x1FC5 Hash - 0x94562F20 ^0x604E8D55
{
	return *piParam0 == piParam0->f_2;
}

BOOL func_58(var uParam0) // Position - 0x1FD5 Hash - 0x4E3CB413 ^0x3CB5C7AD
{
	if (uParam0->f_1 == -1)
		return false;

	if (!func_64(&(uParam0->f_5)))
		return false;

	return true;
}

BOOL func_59(var uParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1FFA Hash - 0x14F4724D ^0x326BA845
{
	var unk;
	var unk34;
	BOOL flag;
	var unk36;
	int i;
	int num;
	int numReservedMissionPeds;
	int numReservedMissionVehicles;
	int numReservedMissionObjects;
	int numReservedMissionPickups;
	int num2;

	unk34 = -1;
	unk34.f_1 = -1;

	if (func_74(uParam0->f_8.f_5))
		unk34 = { uParam0->f_8.f_5 };
	else if (func_74(uParam0->f_8.f_5.f_6))
		unk34 = { uParam0->f_8.f_5.f_6 };
	else
		return true;

	flag = false;

	if (_IS_NULL_VECTOR(uParam0->f_8.f_2))
		flag = true;
	else
		flag = false;

	if (bParam1)
	{
		unk.f_25 = iParam2;
		unk.f_26 = iParam3;
		unk.f_27 = iParam4;
		unk.f_28 = iParam5;
	}
	else if (!func_77(func_76(unk34), &unk))
	{
		return false;
	}

	unk36 = 4;

	if (unk.f_25 <= 0 || unk.f_25 > 50)
	{
		unk.f_25 != 0;
		unk36[0] = 0;
	}
	else
	{
		unk36[0] = 1;
	}

	if (unk.f_26 <= 0 || unk.f_26 > 10)
	{
		unk.f_26 != 0;
		unk36[1] = 0;
	}
	else
	{
		unk36[1] = 1;
	}

	if (unk.f_27 <= 0 || unk.f_27 > 25)
	{
		unk.f_27 != 0;
		unk36[2] = 0;
	}
	else
	{
		unk36[2] = 1;
	}

	if (unk.f_28 <= 0 || unk.f_28 > 10)
	{
		unk.f_28 != 0;
		unk36[3] = 0;
	}
	else
	{
		unk36[3] = 1;
	}

	if (flag)
	{
		numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		numReservedMissionVehicles = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		numReservedMissionObjects = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		numReservedMissionPickups = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(uParam0->f_8.f_2, false, &numReservedMissionPeds, &numReservedMissionVehicles, &numReservedMissionObjects, &numReservedMissionPickups);
	}

	for (i = 0; i < 4; i = i + 1)
	{
		num2 = i;
	
		if (num2 == -1)
		{
		}
		else if (!unk36[i])
		{
		}
		else
		{
			switch (num2)
			{
				case 0:
					num = NETWORK::GET_MAX_NUM_NETWORK_PEDS() - numReservedMissionPeds;
				
					if (num < unk.f_25)
						return false;
					break;
			
				case 1:
					num = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - numReservedMissionVehicles;
				
					if (num < unk.f_26)
						return false;
					break;
			
				case 2:
					num = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - numReservedMissionObjects;
				
					if (num < unk.f_27)
						return false;
					break;
			
				case 3:
					num = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - numReservedMissionPickups;
				
					if (num < unk.f_28)
						return false;
					break;
			}
		}
	}

	return true;
}

void func_60(var uParam0, int iParam1) // Position - 0x2253 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_61(var uParam0, var uParam1) // Position - 0x2260 Hash - 0x18878F11 ^0xC97EFD19
{
	if (uParam1->f_2 == -1)
		return false;

	if (uParam0->f_2 == -1)
		return false;

	if (uParam1->f_2 != uParam0->f_2)
		return false;

	if (uParam1->f_5 == -1)
		return false;

	if (uParam0->f_5 == -1)
		return false;

	if (uParam1->f_5 != uParam0->f_5)
		return false;

	if (uParam1->f_8 != uParam0->f_8)
		return false;

	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
		return false;

	if (!func_78(uParam1->f_8.f_5, uParam0->f_8.f_5))
		return false;

	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
		return false;

	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
		return false;

	return true;
}

struct<40> func_62(int* piParam0, int iParam1) // Position - 0x2323 Hash - 0xB37D1B8F ^0x544D395D
{
	var unk;
	var unk41;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	if (!func_79(piParam0, iParam1))
		return unk;

	unk41 = { piParam0->f_3[iParam1 /*40*/] };
	piParam0->f_3[iParam1 /*40*/] = { unk };
	return unk41;
}

void func_63(int* piParam0, int iParam1) // Position - 0x240B Hash - 0x5547D09E ^0xB61B32CF
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	num = ((piParam0->f_1 + *piParam0) - 1) % piParam0->f_2;

	if (piParam0->f_1 == iParam1)
	{
		num2 = *piParam0;
	
		for (i = 0; i < *piParam0; i = i + 1)
		{
			num3 = (piParam0->f_1 + i) % piParam0->f_2;
		
			if (piParam0->f_3[num3 /*40*/] != -1)
				break;
		
			if (piParam0->f_3[num3 /*40*/].f_4 != -1)
				func_62(piParam0, num3);
		
			num2 = num2 - 1;
		}
	
		piParam0->f_1 = num3;
		*piParam0 = num2;
	}
	else if (num == iParam1)
	{
		num2 = *piParam0;
	
		for (i = 0; i < *piParam0; i = i + 1)
		{
			num4 = ((num - i) + 5) % piParam0->f_2;
		
			if (piParam0->f_3[num4 /*40*/] != -1)
				break;
		
			func_62(piParam0, num4);
			num2 = num2 - 1;
		}
	
		*piParam0 = num2;
	}

	return;
}

BOOL func_64(var uParam0) // Position - 0x252D Hash - 0x5EFE183E ^0x62E9C2B9
{
	if (func_74(*uParam0))
		return true;

	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
			return true;
	
		if (uParam0->f_4 != -1)
			return true;
	
		if (uParam0->f_5 != -1)
			return true;
	}

	return false;
}

int func_65(var uParam0, int iParam1) // Position - 0x2571 Hash - 0x989AAD62 ^0x4D14C098
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int i;

	num = func_80(iParam1);
	num2 = (num + Global_1207480.f_3[iParam1]) - 1;

	if (Global_1207480.f_23[iParam1] != 0)
		num2 = (num + func_81(iParam1)) - 1;

	flag = func_74(*uParam0);
	flag2 = uParam0->f_2 != 0 && uParam0->f_3 != -1;
	flag3 = uParam0->f_2 != 0 && uParam0->f_4 != -1;
	flag4 = uParam0->f_2 != 0 && uParam0->f_5 != -1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (flag)
			if (func_78(Global_1207480.f_231[i /*15*/].f_5, *uParam0))
				return i;
	
		if (flag2)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_3 == uParam0->f_3)
				return i;
	
		if (flag3)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_4 == uParam0->f_4)
				return i;
	
		if (flag4)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_5 == uParam0->f_5)
				return i;
	}

	return -1;
}

BOOL func_66(int iParam0) // Position - 0x26D0 Hash - 0x359FF9F5 ^0xF7570B40
{
	if (iParam0 <= -1 || iParam0 >= 16)
		return false;

	return Global_1220529.f_5[iParam0 /*5*/].f_2;
}

void func_67(var uParam0, int iParam1) // Position - 0x26FA Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

int func_68() // Position - 0x2708 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_69() // Position - 0x2716 Hash - 0x2CA13FC5 ^0x2CA13FC5
{
	return "unnamed";
}

BOOL func_70(int iParam0) // Position - 0x2721 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_71(int iParam0) // Position - 0x27B0 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_82(36, iParam0);
}

int func_72(int iParam0) // Position - 0x27CE Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_73(Player plParam0) // Position - 0x2819 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_83(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_84(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_74(var uParam0, var uParam1) // Position - 0x285E Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_85(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_86(uParam0))
		return false;

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2892 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_76(var uParam0, var uParam1) // Position - 0x28BC Hash - 0x10103901 ^0xC90ADDEF
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_87(uParam0, &num))
		return num;

	return 0;
}

BOOL func_77(int iParam0, var uParam1) // Position - 0x28E6 Hash - 0x276CF8AE ^0x276CF8AE
{
	int num;

	num = { func_88(iParam0) };

	if (!func_74(num))
		return false;

	func_89(num, iParam0, uParam1);
	return true;
}

BOOL func_78(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2914 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_79(int* piParam0, int iParam1) // Position - 0x292F Hash - 0xD785E709 ^0xCEF9EED8
{
	return iParam1 >= 0 && iParam1 < piParam0->f_2;
}

int func_80(int iParam0) // Position - 0x2947 Hash - 0xDED1374F ^0xDED1374F
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 3;
	
		case 2:
			return 35;
	
		case 3:
			return 55;
	
		default:
		
	}

	return 0;
}

int func_81(int iParam0) // Position - 0x2982 Hash - 0x7B9E6017 ^0xD5F060B0
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			if (Global_1207480.f_3[iParam0] * 2 <= 32)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 32;
	
		case 2:
			if (Global_1207480.f_3[iParam0] * 2 <= 20)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 20;
	
		case 3:
			if (Global_1207480.f_3[iParam0] * 2 <= 16)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 16;
	
		default:
		
	}

	return 0;
}

BOOL func_82(int iParam0, int iParam1) // Position - 0x2A1E Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_90(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_91())
		return func_90(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_90(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_83(Player plParam0) // Position - 0x2A92 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_84(Player plParam0) // Position - 0x2AAF Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_92(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_93(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_85(int iParam0) // Position - 0x2B32 Hash - 0x5000025C ^0x5000025C
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

int func_86(int iParam0) // Position - 0x2B71 Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_87(int iParam0, var uParam1, Any* panParam2) // Position - 0x2C07 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_74(iParam0))
		return false;

	func_94(panParam2);

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

struct<2> func_88(int iParam0) // Position - 0x2D12 Hash - 0x6C87C802 ^0xCFA8552F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_95(iParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_95(iParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_95(iParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_95(iParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_95(iParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_95(iParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_95(iParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_96();
}

int func_89(int iParam0, int iParam1, var uParam2) // Position - 0x2DE2 Hash - 0x75EF2F01 ^0x75EF2F01
{
	var unk;

	if (!func_97(iParam0))
		return 0;

	if (func_98(iParam0, iParam1, &unk))
		func_99(iParam0, &unk, uParam2);
	else
		return 0;

	return 1;
}

BOOL func_90(Any* panParam0, int iParam1, int iParam2) // Position - 0x2E17 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_91() // Position - 0x2E4E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_92(Player plParam0) // Position - 0x2E5D Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_93(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_93(Player plParam0) // Position - 0x2EC9 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_94(Any* panParam0) // Position - 0x2F04 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

struct<2> func_95(int iParam0, int iParam1) // Position - 0x2F1A Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_100(iParam0, &(Global_1072759.f_573), func_86(iParam1));
			break;
	
		case 3:
			num.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_602), func_86(iParam1));
			break;
	
		case 4:
			num.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_2104), func_86(iParam1));
			break;
	
		case 5:
			num.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_12606), func_86(iParam1));
			break;
	
		case 6:
			num.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_12908), func_86(iParam1));
			break;
	
		case 7:
			num.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_15910), func_86(iParam1));
			break;
	
		case 8:
			num.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_16512), func_86(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_96();

	return num;
}

struct<2> func_96() // Position - 0x3040 Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_97(int iParam0) // Position - 0x3059 Hash - 0x5000025C ^0x5000025C
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

BOOL func_98(int iParam0, int iParam1, Any* panParam2) // Position - 0x3098 Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_101(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_99(int iParam0, Any* panParam1, var uParam2) // Position - 0x30CC Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_102(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_103(num);
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
			uParam2->f_5 = func_104(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_105(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_106(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_107(num);
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

int func_100(int iParam0, var uParam1, int iParam2) // Position - 0x3327 Hash - 0x3B53E80C ^0x3B53E80C
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = iParam2 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (uParam1->[num3 /*3*/] > iParam0)
			num2 = num3 - 1;
		else if (uParam1->[num3 /*3*/] < iParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

int func_101(int iParam0) // Position - 0x337C Hash - 0x5FB59AC3 ^0xE293EFF
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

int func_102(int iParam0, var uParam1) // Position - 0x34F1 Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_108(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_103(int iParam0) // Position - 0x350E Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_104(int iParam0) // Position - 0x3664 Hash - 0xCBE7BE7C ^0xCBE7BE7C
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

int func_105(int iParam0) // Position - 0x36BB Hash - 0x2A2D8996 ^0x2A2D8996
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

int func_106(int iParam0) // Position - 0x3795 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_107(int iParam0) // Position - 0x382D Hash - 0xD7A7D6 ^0xD7A7D6
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

BOOL func_108(int iParam0, var uParam1, var uParam2) // Position - 0x39D7 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_109(iParam0, uParam1, &unk))
		func_110(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_109(int iParam0, var uParam1, Any* panParam2) // Position - 0x39FE Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_101(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_110(Any* panParam0, int iParam1, var uParam2) // Position - 0x3A32 Hash - 0x59F43AD2 ^0xB9A366FE
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

