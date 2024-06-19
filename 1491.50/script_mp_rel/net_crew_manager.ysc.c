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

void main() // Position - 0x0 Hash - 0x1574CDE4 ^0xFAA14005
{
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

void func_1() // Position - 0x2A Hash - 0xA4A9024D ^0x24ACEF0B
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
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x62 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_3() // Position - 0x142 Hash - 0x38BBAC53 ^0xCE40D7A
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_11();

	func_12();
	return;
}

void func_4() // Position - 0x159 Hash - 0x15281E0C ^0xD8932DE9
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1205694.f_1[i /*3*/].f_2 != 0)
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(Global_1205694.f_1[i /*3*/]);
	}

	return;
}

void func_5() // Position - 0x192 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_6(int iParam0, int iParam1) // Position - 0x19E Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_7() // Position - 0x1BB Hash - 0x1FABDECD ^0x67C342BC
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
	
		if (func_13() == 0)
			if (func_14())
				func_5();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	return 1;
}

BOOL func_8() // Position - 0x2CC Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_9() // Position - 0x2FA Hash - 0x26B36D19 ^0x75A01300
{
	func_15(&Global_1205147);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1205147, 2, 5);
	func_16(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1205147), 2, "g_mpNetCrewHostData");
	func_17(&Global_1205149);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1205149, 545, 6);
	func_18(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1205149[0 /*17*/]), 545, "g_mpNetCrewPlayerData");
	func_19(&Global_1205694);
	return;
}

void func_10(BOOL bParam0) // Position - 0x356 Hash - 0x2B211437 ^0xE0D702E
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

void func_11() // Position - 0x41F Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_20();
	return;
}

void func_12() // Position - 0x42B Hash - 0xAD6306C9 ^0xEA415B7F
{
	switch (Global_1205694)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
				return;
		
			if (func_21(2))
				Global_1205149[PLAYER::PLAYER_ID() /*17*/].f_15 = 1;
		
			func_22();
			func_23();
			Global_1205694 = 1;
			break;
	
		case 1:
			func_24();
			break;
	}

	return;
}

int func_13() // Position - 0x484 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_14() // Position - 0x492 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_15(int* piParam0) // Position - 0x4A0 Hash - 0xCDEF5D36 ^0xCDEF5D36
{
	var unk;

	*piParam0 = { unk };
	return;
}

int func_16(int iParam0, int iParam1, char* sParam2) // Position - 0x4B0 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_17(Any anParam0) // Position - 0x4B9 Hash - 0x53293105 ^0x53293105
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_25(&anParam0->[i /*17*/]);
	}

	return;
}

int func_18(int iParam0, int iParam1, char* sParam2) // Position - 0x4DE Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_19(var uParam0) // Position - 0x4E7 Hash - 0x456E8C41 ^0xF7C4B295
{
	var unk;

	unk.f_1 = 32;
	*uParam0 = { unk };
	return;
}

void func_20() // Position - 0x503 Hash - 0x1F8F7710 ^0x670037B8
{
	int i;

	if (Global_1205694.f_108 == 0)
	{
		Global_1205147 = 0;
	
		for (i = 0; i <= 31; i = i + 1)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && Global_1205149[i /*17*/] != 0)
				Global_1205147 = Global_1205147 + 1;
		}
	}
	else if (Global_1205694.f_108 < 100)
	{
		Global_1205694.f_108 = Global_1205694.f_108 + 1;
	}
	else
	{
		Global_1205694.f_108 = 0;
	}

	return;
}

BOOL func_21(int iParam0) // Position - 0x579 Hash - 0xA059D395 ^0x8A024E09
{
	return func_26(Global_1204759.f_1, iParam0);
}

void func_22() // Position - 0x58D Hash - 0x7C1DBA55 ^0xC618B1D1
{
	Player player;
	int i;

	player = PLAYER::PLAYER_ID();

	for (i = 0; i <= 4; i = i + 1)
	{
		if (Global_1205149[player /*17*/].f_9[i] != Global_1204759.f_30[i /*22*/])
			Global_1205149[player /*17*/].f_9[i] = Global_1204759.f_30[i /*22*/];
	}

	return;
}

void func_23() // Position - 0x5E0 Hash - 0x95A06623 ^0x95A06623
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_27(i);
	}

	return;
}

void func_24() // Position - 0x601 Hash - 0x13521AE0 ^0x13521AE0
{
	if (!func_28())
		return;

	func_29();
	func_30();

	if (func_31())
	{
		func_22();
		func_32();
	}

	return;
}

void func_25(var uParam0) // Position - 0x62B Hash - 0xE305A5A7 ^0x14382515
{
	var unk;

	unk.f_9 = 5;
	*uParam0 = { unk };
	return;
}

BOOL func_26(int iParam0, int iParam1) // Position - 0x646 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_27(int iParam0) // Position - 0x655 Hash - 0xDA47F7C8 ^0x4C16A1D7
{
	int i;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		Global_1204759.f_163[iParam0 /*7*/] = 0;
		return;
	}

	Global_1204759.f_163[iParam0 /*7*/] = Global_1205149[iParam0 /*17*/];

	for (i = 0; i <= 4; i = i + 1)
	{
		Global_1204759.f_163[iParam0 /*7*/].f_1[i] = Global_1205149[iParam0 /*17*/].f_9[i];
	}

	return;
}

BOOL func_28() // Position - 0x6D0 Hash - 0x7057B9E5 ^0x159A083E
{
	return NETWORK::NETWORK_IS_CLOUD_AVAILABLE() && CREW::NETWORK_CLAN_SERVICE_IS_VALID();
}

void func_29() // Position - 0x6E5 Hash - 0x3444786 ^0x5057713E
{
	int memberDesc;
	int i;

	if (Global_1204759.f_141 != Global_1205149[PLAYER::PLAYER_ID() /*17*/])
	{
		if (Global_1204759.f_141 == 0)
		{
			Global_1205149[PLAYER::PLAYER_ID() /*17*/] = 0;
			return;
		}
	
		for (i = 0; i <= CREW::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() - 1; i = i + 1)
		{
			if (CREW::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&memberDesc, i) && memberDesc == Global_1204759.f_141)
			{
				Global_1205149[PLAYER::PLAYER_ID() /*17*/].f_1 = { memberDesc.f_1 };
				Global_1205149[PLAYER::PLAYER_ID() /*17*/] = Global_1204759.f_141;
				break;
			}
		}
	}

	return;
}

void func_30() // Position - 0x771 Hash - 0x9C40F239 ^0xBB0F9CF2
{
	BOOL flag;

	flag = NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1205694.f_109)) && Global_1205149[Global_1205694.f_109 /*17*/] != 0;
	func_33(Global_1205694.f_109, flag);
	func_27(Global_1205694.f_109);
	Global_1205694.f_109 = Global_1205694.f_109 + 1;

	if (Global_1205694.f_109 >= 32)
		Global_1205694.f_109 = 0;

	return;
}

BOOL func_31() // Position - 0x7D2 Hash - 0xE85870F9 ^0x29CD7445
{
	if (Global_1205694.f_107 == 0)
	{
		Global_1205694.f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Global_1205694.f_107, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 2000)
	{
		Global_1205694.f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}

	return false;
}

void func_32() // Position - 0x818 Hash - 0xFE75F722 ^0x777544A
{
	int i;

	if (Global_1205149[PLAYER::PLAYER_ID() /*17*/] == 0)
	{
		Global_1205149[PLAYER::PLAYER_ID() /*17*/].f_16 = 0;
	}
	else
	{
		Global_1205149[PLAYER::PLAYER_ID() /*17*/].f_16 = 0;
	
		for (i = 0; i <= 31; i = i + 1)
		{
			if (Global_1205149[i /*17*/] == Global_1205149[PLAYER::PLAYER_ID() /*17*/])
				Global_1205149[PLAYER::PLAYER_ID() /*17*/].f_16 = Global_1205149[PLAYER::PLAYER_ID() /*17*/].f_16 + 1;
		}
	}

	return;
}

void func_33(int iParam0, BOOL bParam1) // Position - 0x88D Hash - 0x5E0A63B7 ^0x2DBB0128
{
	if (bParam1)
		if (Global_1205694.f_1[iParam0 /*3*/].f_1 == 0)
			if (Global_1205694.f_1[iParam0 /*3*/].f_2 == 0)
				func_34(iParam0, 1);
			else if (Global_1205694.f_1[iParam0 /*3*/] != Global_1205149[iParam0 /*17*/])
				func_34(iParam0, 3);
	else if (Global_1205694.f_1[iParam0 /*3*/].f_1 == 0 && Global_1205694.f_1[iParam0 /*3*/].f_2 != 0 || Global_1205694.f_1[iParam0 /*3*/] != 0)
		func_34(iParam0, 3);

	switch (Global_1205694.f_1[iParam0 /*3*/].f_1)
	{
		case 0:
			break;
	
		case 1:
			Global_1205694.f_1[iParam0 /*3*/] = Global_1205149[iParam0 /*17*/];
		
			if (CREW::NETWORK_CLAN_REQUEST_EMBLEM(Global_1205694.f_1[iParam0 /*3*/]))
				func_34(iParam0, 2);
			else
				func_34(iParam0, 0);
			break;
	
		case 2:
			if (func_35(iParam0))
				func_34(iParam0, 0);
			break;
	
		case 3:
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(Global_1205694.f_1[iParam0 /*3*/]);
			Global_1205694.f_1[iParam0 /*3*/].f_2 = 0;
			Global_1205694.f_1[iParam0 /*3*/] = 0;
			func_34(iParam0, 0);
			break;
	}

	return;
}

void func_34(int iParam0, int iParam1) // Position - 0x9C7 Hash - 0xCF7D517E ^0x2D0D61D9
{
	Global_1205694.f_1[iParam0 /*3*/].f_1 = iParam1;
	return;
}

BOOL func_35(int iParam0) // Position - 0x9DD Hash - 0x80B6435C ^0xA35B3D2
{
	var unk;
	const char* str;

	if (CREW::NETWORK_CLAN_IS_EMBLEM_READY(Global_1205694.f_1[iParam0 /*3*/], &unk))
	{
		str = func_36(unk);
		Global_1205694.f_1[iParam0 /*3*/].f_2 = MISC::GET_HASH_KEY(str);
		return true;
	}

	return false;
}

const char* func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xA1A Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

