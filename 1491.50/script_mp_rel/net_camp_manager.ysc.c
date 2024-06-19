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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x759849D0 ^0xCD53F69
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

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(&func_15))
	{
		func_5();
		BUILTIN::WAIT(0);
	}

	func_6();
	return;
}

void func_1() // Position - 0x47 Hash - 0xA4A9024D ^0x24ACEF0B
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_7(32, -1);
	func_8();

	if (func_9())
		func_6();

	func_10();
	func_11(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x7F Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_3() // Position - 0x15F Hash - 0xA52D220A ^0xA52D220A
{
	BOOL flag;

	flag = func_12();

	if (func_13())
		func_14();

	func_15(flag);
	return;
}

void func_4() // Position - 0x17E Hash - 0x2C5A4C07 ^0x5344D874
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (MAP::DOES_BLIP_EXIST(func_16(Global_1142424.f_1[i /*63*/].f_5)))
			func_17(&(Global_1142424.f_1[i /*63*/].f_5), false);
	}

	func_18();
	Global_1142424.f_2018 = 0;
	Global_1142424.f_2041 = 0;
	Global_1142424 = 0;
	return;
}

void func_5() // Position - 0x1DA Hash - 0x6995301D ^0xDAF94624
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2055) && !SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2057))
		return;

	if (!Global_1142424.f_2059)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2055))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1142424.f_2055);
	
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2057))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1142424.f_2057);
	
		Global_1142424.f_2059 = 1;
	}

	return;
}

void func_6() // Position - 0x24A Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x256 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_8() // Position - 0x273 Hash - 0x1FABDECD ^0x67C342BC
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
			func_6();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_6();
					break;
			
				case 2:
					func_6();
					break;
			
				case 3:
					func_6();
					break;
			
				case 4:
					func_6();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_6();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_6();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_6();
	
		if (func_19() == 0)
			if (func_20())
				func_6();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	return 1;
}

BOOL func_9() // Position - 0x384 Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_10() // Position - 0x3B2 Hash - 0x71451BB ^0xB57E2AD9
{
	func_21(&Global_1141332);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1141332, 1092, 44);
	func_22(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1141332), 1092, "g_mpHostNetCamp");
	func_23(&Global_1144526);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1144526, 2657, 45);
	func_24(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1144526[0 /*83*/]), 2657, "g_mpPlayerNetCamp");
	func_25(&Global_1142424);
	func_26(&Global_1144485);
	return;
}

void func_11(BOOL bParam0) // Position - 0x41C Hash - 0x2B211437 ^0xE0D702E
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
					func_6();
					break;
			
				case 2:
					func_6();
					break;
			
				case 3:
					func_6();
					break;
			
				case 4:
					func_6();
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
			func_6();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_12() // Position - 0x4E5 Hash - 0xBEDC0000 ^0xBEDC0000
{
	if (func_27())
	{
		func_28(16);
		return 0;
	}

	if (func_29())
	{
		func_28(16);
		return 0;
	}

	if (func_30(16))
	{
		func_28(16);
		return 0;
	}

	func_31(16);
	return 1;
}

BOOL func_13() // Position - 0x532 Hash - 0x70B1C65A ^0x571F41F1
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[9], false))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[9]);
}

void func_14() // Position - 0x564 Hash - 0x88AC00B4 ^0x88AC00B4
{
	switch (Global_1141332.f_1090)
	{
		case 0:
			func_32();
			break;
	
		case 1:
			func_33();
			break;
	
		case 2:
			func_34();
			break;
	}

	return;
}

void func_15(BOOL bParam0) // Position - 0x5A0 Hash - 0xDB67B7E1 ^0xDB67B7E1
{
	switch (Global_1142424)
	{
		case 0:
			func_35();
			break;
	
		case 1:
			func_36();
			break;
	
		case 2:
			func_37(bParam0);
			break;
	}

	Global_1142424.f_2040 = 0;
	return;
}

Blip func_16(Hash hParam0) // Position - 0x5E3 Hash - 0x8A367BBB ^0x8A367BBB
{
	if (hParam0 >= 0 && hParam0 < Global_17088)
		return Global_17088[hParam0];

	return 0;
}

void func_17(Hash hParam0, BOOL bParam1) // Position - 0x608 Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*hParam0 != -1)
	{
		func_38(*hParam0, -1);
		func_39(*hParam0, 0);
		func_40(*hParam0, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_17088[*hParam0]))
		{
			if (bParam1)
				MAP::SET_RADAR_ZOOM(Global_17088[*hParam0]);
		
			MAP::REMOVE_BLIP(&Global_17088[*hParam0]);
		}
	}

	*hParam0 = -1;
	return;
}

void func_18() // Position - 0x65F Hash - 0x1DC43AA6 ^0x12BAF2FE
{
	Player player;
	var unk;

	player = PLAYER::PLAYER_ID();

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[player /*83*/].f_38.f_23.f_1))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144526[player /*83*/].f_38.f_23.f_1);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[player /*83*/].f_38.f_23))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144526[player /*83*/].f_38.f_23);

	Global_1144526[player /*83*/].f_38.f_23.f_1 = unk;
	Global_1144526[player /*83*/].f_38.f_23 = unk;
	return;
}

int func_19() // Position - 0x6D5 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_20() // Position - 0x6E3 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_21(int* piParam0) // Position - 0x6F1 Hash - 0xADEC3E28 ^0x8B1486A5
{
	var unk;
	int i;
	var unk28;
	var unk35;
	var unk36;

	unk.f_9 = 255;
	unk.f_10 = 7;
	unk.f_10.f_1 = 255;
	unk.f_10.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;

	for (i = 0; i <= 31; i = i + 1)
	{
		piParam0->[i /*27*/] = { unk };
	}

	unk28.f_4 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		piParam0->f_865[i /*7*/] = { unk28 };
	}

	piParam0->f_1090 = unk35;
	piParam0->f_1091 = unk36;
	return;
}

int func_22(int iParam0, int iParam1, char* sParam2) // Position - 0x798 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_23(Any anParam0) // Position - 0x7A1 Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_41(&anParam0->[i /*83*/]);
	}

	return;
}

int func_24(int iParam0, int iParam1, char* sParam2) // Position - 0x7C9 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_25(var uParam0) // Position - 0x7D2 Hash - 0x5DAE4514 ^0x69C572F
{
	var unk;
	int i;
	var unk2;
	var unk65;
	var unk66;

	*uParam0 = unk;
	unk2.f_5 = -1;
	unk2.f_6 = -1;
	unk2.f_13 = 7;
	unk2.f_49 = 7;

	for (i = 0; i <= 31; i = i + 1)
	{
		uParam0->f_1[i /*63*/] = { unk2 };
	}

	uParam0->f_2018 = unk65;
	unk66.f_4 = -15;
	uParam0->f_2027 = { unk66 };
	uParam0->f_2019 = 0;
	uParam0->f_2054 = -428030045;

	for (i = 0; i <= 5; i = i + 1)
	{
		uParam0->f_2020[i] = 0;
	}

	uParam0->f_2041 = 0;
	uParam0->f_2042 = 0;
	uParam0->f_2043 = 0;
	uParam0->f_2044 = 0;
	uParam0->f_2049 = 0;
	uParam0->f_2059 = 0;
	uParam0->f_2050 = 0;
	return;
}

void func_26(int* piParam0) // Position - 0x892 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_27() // Position - 0x89A Hash - 0xD2F03408 ^0xD2F03408
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

void func_28(int iParam0) // Position - 0x8AE Hash - 0x2FEF4E69 ^0xBDCE4853
{
	if (func_42(iParam0))
		func_43(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);

	return;
}

BOOL func_29() // Position - 0x8D1 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_44(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

BOOL func_30(int iParam0) // Position - 0x929 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

void func_31(int iParam0) // Position - 0x94A Hash - 0x817C7487 ^0x2C728A2B
{
	if (!func_42(iParam0))
		func_45(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);

	return;
}

void func_32() // Position - 0x96E Hash - 0x6F73E100 ^0x6F73E100
{
	func_46(1);
	return;
}

void func_33() // Position - 0x97B Hash - 0xA6BAE3A3 ^0xA6BAE3A3
{
	if (func_42(1))
		func_46(2);

	return;
}

void func_34() // Position - 0x990 Hash - 0xF8DDFDE8 ^0xF8DDFDE8
{
	int num;
	var unk;

	while (num < 10)
	{
		num = num + 1;
		Global_1142424.f_2044 = Global_1142424.f_2044 + 1;
	
		if (Global_1142424.f_2044 >= 32)
			Global_1142424.f_2044 = 0;
	
		func_47(Global_1142424.f_2044, &unk);
		func_48(Global_1142424.f_2044);
	}

	return;
}

void func_35() // Position - 0x9E4 Hash - 0x9208E5B2 ^0x9208E5B2
{
	if (Global_1141332.f_1090 > 0)
	{
		if (func_49())
		{
			func_50();
			func_51(1);
		}
	}

	return;
}

void func_36() // Position - 0xA07 Hash - 0x93A7A82A ^0x93A7A82A
{
	if (!func_42(1))
	{
		if (func_52())
		{
			func_53();
			func_31(1);
		}
	}
	else if (Global_1141332.f_1090 > 1)
	{
		if (func_54() == 0)
			func_55(1);
	
		func_51(2);
	}

	return;
}

void func_37(BOOL bParam0) // Position - 0xA48 Hash - 0xE91E8923 ^0xE91E8923
{
	int num;

	if (!func_42(64) && func_56())
		func_31(64);

	while (num < 10)
	{
		num = num + 1;
		Global_1142424.f_2043 = Global_1142424.f_2043 + 1;
	
		if (Global_1142424.f_2043 >= 32)
			Global_1142424.f_2043 = 0;
	
		func_57(Global_1142424.f_2043);
	}

	func_58();

	if (bParam0)
	{
		func_59();
		func_60();
		func_61();
		func_62();
	}
	else if (Global_1142424.f_2019 != 1)
	{
		func_63(1);
	}

	return;
}

void func_38(Hash hParam0, int iParam1) // Position - 0xAD4 Hash - 0x3A863EAC ^0xED5F880E
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[hParam0 /*4*/] = iParam1;
		return;
	}

	Global_25038[hParam0 /*4*/] = iParam1;
	return;
}

void func_39(Hash hParam0, int iParam1) // Position - 0xB01 Hash - 0x90093024 ^0x254ECDA0
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[hParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_25038[hParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_40(Hash hParam0, BOOL bParam1) // Position - 0xB32 Hash - 0x90093024 ^0x9EE5286A
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[hParam0 /*4*/].f_2 = bParam1;
		return;
	}

	Global_25038[hParam0 /*4*/].f_2 = bParam1;
	return;
}

void func_41(var uParam0) // Position - 0xB63 Hash - 0x492F636B ^0xC21F65B3
{
	var unk;

	unk = 32;
	unk.f_33.f_3 = -1;
	unk.f_38.f_3 = -1;
	unk.f_38.f_7 = -1;
	unk.f_38.f_25 = -1;
	unk.f_38.f_28.f_1 = 1046181202;
	unk.f_38.f_28.f_2 = 255;
	unk.f_38.f_28.f_3 = -1;
	unk.f_74.f_7 = -1;
	*uParam0 = { unk };
	func_64(&(uParam0->f_38));
	return;
}

BOOL func_42(int iParam0) // Position - 0xBCA Hash - 0x4D892971 ^0xA4BF78E0
{
	return func_65(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

void func_43(int iParam0, int iParam1) // Position - 0xBE4 Hash - 0xF55E891F ^0xF55E891F
{
	func_66(iParam0, iParam1);
	return;
}

BOOL func_44(var uParam0, var uParam1) // Position - 0xBF4 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_67(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_68(uParam0))
		return false;

	return true;
}

void func_45(int iParam0, int iParam1) // Position - 0xC28 Hash - 0xF55E891F ^0xF55E891F
{
	func_69(iParam0, iParam1);
	return;
}

void func_46(int iParam0) // Position - 0xC38 Hash - 0xB3D6FC5E ^0xB3D6FC5E
{
	if (Global_1141332.f_1090 != iParam0)
		Global_1141332.f_1090 = iParam0;

	return;
}

void func_47(int iParam0, var uParam1) // Position - 0xC55 Hash - 0x1553490E ^0x16BA06A2
{
	Player bitIndex;
	int uniqueIntForPlayer;
	Any gangId;
	int numGangMembers;
	var unk;
	int i;
	int num;
	var unk4;
	BOOL flag;
	int num2;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	bitIndex = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bitIndex))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bitIndex))
		return;

	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(bitIndex);

	if (Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_4 != Global_1144526[iParam0 /*83*/].f_33.f_3 && Global_1144526[iParam0 /*83*/].f_33.f_3 != -1)
	{
		func_70(uniqueIntForPlayer, Global_1144526[iParam0 /*83*/].f_33.f_3);
		func_71(uniqueIntForPlayer, Global_1144526[iParam0 /*83*/].f_33);
		func_72(uniqueIntForPlayer, 0);
	}

	gangId = GANG::NETWORK_GET_GANG_ID(bitIndex);
	numGangMembers = GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId);
	unk4 = { Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_1 };
	flag = func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 2);

	switch (Global_1141332.f_865[uniqueIntForPlayer /*7*/])
	{
		case 0:
			Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5 = Global_1144526[iParam0 /*83*/].f_33.f_4;
			flag = func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 2);
		
			if (unk4.f_2 == 0)
			{
				i = func_73(bitIndex);
			
				if (func_74(i))
					if (GANG::NETWORK_IS_GANG_LEADER(bitIndex))
						func_75(i, 3);
			
				if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141332.f_1091), bitIndex))
					SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1141332.f_1091), bitIndex);
			
				func_72(uniqueIntForPlayer, 6);
			}
			else if (unk4.f_2 < 0)
			{
				if (func_76(iParam0))
					func_72(uniqueIntForPlayer, 3);
				else
					func_72(uniqueIntForPlayer, 4);
			}
			else
			{
				if (*uParam1)
					return;
			
				*uParam1 = 1;
				func_77(unk4, &unk);
			
				if (!func_78(unk4, iParam0, unk, numGangMembers, 1, false, flag))
				{
					func_72(uniqueIntForPlayer, 4);
					return;
				}
			
				func_72(uniqueIntForPlayer, 1);
			}
			break;
	
		case 1:
			if (*uParam1)
				return;
		
			*uParam1 = 1;
		
			if (func_65(Global_1144526[iParam0 /*83*/].f_33.f_4, 8))
				func_72(uniqueIntForPlayer, 2);
			break;
	
		case 2:
			if (*uParam1)
				return;
		
			*uParam1 = 1;
			func_77(unk4, &unk);
			i = func_73(bitIndex);
		
			if (func_74(i))
				func_75(i, 3);
		
			num2.f_9 = 255;
			num2.f_10 = 7;
			num2.f_10.f_1 = 255;
			num2.f_10.f_1.f_1 = 255;
			num2.f_10.f_1.f_1.f_1 = 255;
			num2.f_10.f_1.f_1.f_1.f_1 = 255;
			num2.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
			num2.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			num2.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			num2.f_9 = bitIndex;
			num2.f_1 = unk4;
			num2.f_1.f_1 = unk4.f_1;
			num2.f_1.f_2 = unk4.f_2;
			num2.f_20 = { unk };
			num2.f_23.f_1 = Global_1144526[iParam0 /*83*/].f_38.f_23.f_1;
			num2.f_23 = Global_1144526[iParam0 /*83*/].f_38.f_23;
			num2 = 1;
			i = func_79(&num2);
		
			if (!func_74(i))
				return;
		
			if (!func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 4))
				func_80(i, 16);
		
			if (func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 1))
				func_80(i, 512);
		
			func_72(uniqueIntForPlayer, 6);
			break;
	
		case 3:
			i = 0;
		
			for (i = 0; i < 32; i = i + 1)
			{
				if (Global_1141332[i /*27*/].f_9 == bitIndex)
				{
					Global_1141332[i /*27*/].f_1 = Global_1144526[iParam0 /*83*/].f_33;
					break;
				}
			}
		
			func_72(uniqueIntForPlayer, 6);
			break;
	
		case 4:
			if (*uParam1)
				return;
		
			*uParam1 = 1;
			unk4.f_2 = -2;
		
			if (func_81(gangId, &unk4, flag, &num, &(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_6)))
			{
				Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_6 = 0;
				func_71(uniqueIntForPlayer, unk4);
				func_72(uniqueIntForPlayer, 1);
			}
			else if (Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_6 >= 10 || num == 1)
			{
				func_45(&(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5), 16);
				func_72(uniqueIntForPlayer, 5);
			}
			break;
	
		case 5:
			if (*uParam1)
				return;
		
			*uParam1 = 1;
			unk4.f_2 = -1;
		
			if (func_81(gangId, &unk4, flag, &num, &(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_6)))
			{
				Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_6 = 0;
				func_71(uniqueIntForPlayer, unk4);
				func_72(uniqueIntForPlayer, 1);
			}
			else if (Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_6 >= 15 || num == 1)
			{
				func_72(uniqueIntForPlayer, 6);
				func_45(&(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5), 32);
			}
			break;
	
		case 6:
			break;
	}

	return;
}

void func_48(int iParam0) // Position - 0x10FB Hash - 0xCA375B72 ^0xCA375B72
{
	func_82(iParam0);

	if (Global_1141332[iParam0 /*27*/] == 0)
		return;

	if (Global_1141332[iParam0 /*27*/] != 3)
	{
		func_83(iParam0);
		func_84(iParam0);
		func_85(iParam0);
	}

	switch (Global_1141332[iParam0 /*27*/])
	{
		case 1:
			func_86(iParam0);
			break;
	
		case 2:
			func_87(iParam0);
			break;
	
		case 3:
			func_88(iParam0);
			break;
	}

	return;
}

BOOL func_49() // Position - 0x1171 Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

void func_50() // Position - 0x118D Hash - 0xD7187134 ^0x1795EF87
{
	func_64(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_38));
	func_89();
	func_90();
	return;
}

void func_51(int iParam0) // Position - 0x11AD Hash - 0x9A276BC6 ^0x9A276BC6
{
	if (Global_1142424 != iParam0)
		Global_1142424 = iParam0;

	return;
}

BOOL func_52() // Position - 0x11C4 Hash - 0x386240CC ^0xBDA918CF
{
	int i;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1147183.f_361[i]) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1147183.f_361[i]))
			return false;
	}

	return true;
}

void func_53() // Position - 0x120D Hash - 0xCCE1FBF7 ^0xFCC5BB26
{
	int num;
	var unk;
	int num2;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	unk = { func_92(joaat("kit_camp"), func_91(false), joaat("SLOTID_SATCHEL"), true) };
	func_93(unk);
	func_94();
	num2 = func_95(unk, -421952220, true, -1);

	if (num2 == 0)
		num2 = -1867469444;

	func_96(num2, num);
	num2 = func_95(unk, 1231618917, true, -1);

	if (num2 == 0)
		num2 = -144166169;

	func_97(num2, num);
	num2 = func_95(unk, 1043717005, true, -1);

	if (num2 == 0)
		num2 = -811830793;

	func_98(num2, num);
	num2 = func_95(unk, 142663787, true, -1);

	if (num2 == 0)
		num2 = -698168422;

	func_99(num2, num);
	func_100(0, num);
	return;
}

int func_54() // Position - 0x12DE Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1142424.f_2018;
}

void func_55(int iParam0) // Position - 0x12ED Hash - 0xB3D6FC5E ^0xB3D6FC5E
{
	if (Global_1142424.f_2018 != iParam0)
		Global_1142424.f_2018 = iParam0;

	return;
}

BOOL func_56() // Position - 0x130A Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_57(int iParam0) // Position - 0x131E Hash - 0xE42004A4 ^0x56029C6B
{
	BOOL flag;
	BOOL flag2;
	int num;

	flag = func_101(iParam0);
	flag2 = flag && Global_1141332[iParam0 /*27*/].f_1.f_2 != Global_1142424.f_1[iParam0 /*63*/].f_2;
	num = Global_1142424.f_1[iParam0 /*63*/].f_3;

	if (!flag)
	{
		if (num == 0)
		{
			return;
		}
		else if (num == 2 || num == 1)
		{
			func_102(iParam0, Global_1147183.f_9[iParam0 /*10*/].f_2);
			func_103(iParam0, 3);
		}
	}

	if (num == 0 && Global_1141332[iParam0 /*27*/] != 0 || flag2)
	{
		func_104(iParam0, Global_1141332[iParam0 /*27*/].f_1, Global_1141332[iParam0 /*27*/].f_9);
	
		if (func_105(Global_1142424.f_1[iParam0 /*63*/].f_5))
			func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_5), false);
	
		if (func_105(Global_1142424.f_1[iParam0 /*63*/].f_6))
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_6), joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
			func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_6), false);
		}
	
		func_106(&Global_1142424.f_1[iParam0 /*63*/]);
		Global_1142424.f_1[iParam0 /*63*/] = { Global_1141332[iParam0 /*27*/].f_1 };
		func_103(iParam0, 1);
	}

	func_107(iParam0, flag);
	func_108(iParam0, flag);
	func_109(iParam0);

	switch (Global_1142424.f_1[iParam0 /*63*/].f_3)
	{
		case 1:
			func_110(iParam0);
			break;
	
		case 2:
			func_111(iParam0);
			break;
	
		case 3:
			func_112(iParam0);
			break;
	}

	return;
}

void func_58() // Position - 0x14B7 Hash - 0x69C2EB3D ^0xC73BCCCD
{
	int i;
	int num;

	if (func_42(256))
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			if (func_113(i, 1))
			{
				num = 1;
				break;
			}
		}
	
		if (num == 0)
			func_28(256);
	}

	return;
}

void func_59() // Position - 0x14F9 Hash - 0xE885CC17 ^0xE41DC295
{
	Player player;
	int num;
	int uniqueIntForPlayer;
	BOOL flag;
	BOOL flag2;
	var unk;
	var unk4;
	int volumeLockRequestStatus;
	int volumeLockRequestStatus2;
	BOOL flag3;
	int volumeLockRequestStatus3;
	int volumeLockRequestStatus4;

	player = PLAYER::PLAYER_ID();
	func_114(player);
	num = Global_1144526[player /*83*/].f_38.f_3;
	flag = func_74(num);
	flag2 = GANG::NETWORK_IS_GANG_LEADER(player);

	switch (Global_1142424.f_2019)
	{
		case 0:
			if (flag2)
			{
				if (flag)
				{
					func_63(20);
				}
				else
				{
					unk4 = { func_115() };
					func_116(unk4);
				
					if (unk4.f_2 != 0)
					{
						Global_1142424.f_2036 = { unk4 };
						Global_1142424.f_2036.f_3 = 0;
						func_63(5);
					}
					else
					{
						func_63(4);
					}
				}
			}
			else
			{
				func_63(22);
			}
			break;
	
		case 1:
			func_63(0);
			break;
	
		case 2:
			if (!flag)
			{
				if (func_117())
					func_118(0);
			
				func_18();
				Global_1142424.f_2046 = 0;
				func_116(unk4);
				func_119();
				func_120();
				func_121();
				func_63(3);
			}
			break;
	
		case 3:
			if (flag)
			{
				if (flag2)
				{
					func_119();
					func_63(20);
				}
				else
				{
					func_63(21);
				}
			}
			else
			{
				func_63(4);
			}
			break;
	
		case 4:
			if (flag2)
			{
				if (flag)
				{
					func_119();
					func_63(20);
				}
				else if (func_122(32) && !func_123() && !func_124(255) && !ENTITY::IS_ENTITY_DEAD(Global_33))
				{
					func_121();
					func_125(32);
				}
			}
			else if (flag)
			{
				func_63(21);
			}
			break;
	
		case 5:
			if (func_126(Global_1142424.f_2036, Global_1142424.f_2036.f_3))
			{
				if (func_76(player))
					func_63(12);
				else
					func_63(6);
			}
			else
			{
				func_116(unk4);
				func_63(4);
			}
			break;
	
		case 6:
			if (func_76(player))
			{
				func_63(12);
				return;
			}
		
			uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
		
			if (Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_4 == Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_33.f_3)
			{
				if (Global_1142424.f_2049 == 0)
				{
					Global_1142424.f_2049 = MISC::GET_SYSTEM_TIME();
				}
				else if (MISC::GET_SYSTEM_TIME() - Global_1142424.f_2049 > Global_1901671.f_604.f_14)
				{
					Global_1142424.f_2049 = 0;
					func_18();
					func_127();
				}
			}
		
			if (func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 32) && Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_4 == Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_33.f_3)
			{
				Global_1142424.f_2049 = 0;
				func_63(13);
				return;
			}
		
			if (func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 16) && Global_1142424.f_2027.f_5 != 0)
				func_128(0);
		
			if (Global_1141332.f_865[uniqueIntForPlayer /*7*/] != 1)
				return;
		
			if (Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_1.f_2 == 0)
				return;
		
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1))
				return;
		
			if (!func_129())
			{
				Global_1142424.f_2049 = 0;
				func_18();
				func_127();
				return;
			}
		
			unk4 = { Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_1 };
			func_77(unk4, &unk);
			func_130(unk4, unk);
			Global_1142424.f_2049 = 0;
			func_63(7);
			break;
	
		case 7:
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142424.f_2052.f_1))
			{
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
				func_63(6);
				return;
			}
		
			volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142424.f_2052.f_1);
		
			switch (volumeLockRequestStatus)
			{
				case 1:
				case 2:
					break;
			
				case 3:
					func_131(VOLUME::_0x351D71B8B72B858B(Global_1142424.f_2052.f_1));
					func_63(9);
					break;
			
				case 4:
					func_63(8);
					break;
			}
			break;
	
		case 8:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
		
			if (Global_1142424.f_2047 == 0)
			{
				Global_1142424.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
			}
			else if (MISC::GET_GAME_TIMER() - Global_1142424.f_2047 > 2000)
			{
				Global_1142424.f_2047 = 0;
				func_120();
				func_18();
				Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = -2;
				Global_1142424.f_2036 = { Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 };
				func_63(5);
			}
			break;
	
		case 9:
			uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
		
			if (Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_1.f_2 == 0)
				return;
		
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_23))
				return;
		
			if (!func_129())
			{
				func_18();
				func_127();
				return;
			}
		
			unk4 = { Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_1 };
			func_77(unk4, &unk);
			func_132(unk4, unk);
			func_63(10);
			break;
	
		case 10:
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142424.f_2052))
			{
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
				func_63(9);
				return;
			}
		
			volumeLockRequestStatus2 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142424.f_2052);
		
			switch (volumeLockRequestStatus2)
			{
				case 1:
				case 2:
					break;
			
				case 3:
					func_133(VOLUME::_0x351D71B8B72B858B(Global_1142424.f_2052));
					func_134(8);
					func_63(12);
					break;
			
				case 4:
					func_63(11);
					break;
			}
			break;
	
		case 11:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
		
			if (Global_1142424.f_2047 == 0)
			{
				Global_1142424.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
			}
			else if (MISC::GET_GAME_TIMER() - Global_1142424.f_2047 > 2000)
			{
				Global_1142424.f_2047 = 0;
				func_120();
				func_18();
				Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = -2;
				Global_1142424.f_2036 = { Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 };
				func_63(5);
			}
			break;
	
		case 12:
			if (!flag2)
			{
				func_63(21);
				Global_1142424.f_2049 = 0;
				Global_1142424.f_2046 = 0;
			}
			else if (func_135(&flag3))
			{
				Global_1142424.f_2046 = 0;
				Global_1142424.f_2049 = 0;
				func_136();
				func_119();
				func_63(20);
			}
			else if (flag3)
			{
				Global_1142424.f_2046 = 0;
				Global_1142424.f_2049 = 0;
				func_18();
				func_121();
				func_120();
				func_63(4);
			}
			break;
	
		case 13:
			if (!func_123() && CAM::IS_SCREEN_FADED_IN() && !func_124(255))
			{
				func_137("NET_CAMP_HELP_PLACEMENT_FAIL", 10000, 0, 0, 0, true);
				func_128(0);
			
				if (flag)
					func_63(14);
				else
					func_63(4);
			}
			break;
	
		case 14:
			if (flag)
			{
				unk4 = { Global_1141332[Global_1144526[player /*83*/].f_38.f_3 /*27*/].f_1 };
				func_77(unk4, &unk);
				func_130(unk4, unk);
				func_63(15);
			}
			else
			{
				func_127();
			}
			break;
	
		case 15:
			if (!func_129())
			{
				func_127();
				return;
			}
		
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142424.f_2052.f_1))
			{
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
				func_63(14);
				return;
			}
		
			volumeLockRequestStatus3 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142424.f_2052.f_1);
		
			switch (volumeLockRequestStatus3)
			{
				case 1:
				case 2:
					break;
			
				case 3:
					func_131(VOLUME::_0x351D71B8B72B858B(Global_1142424.f_2052.f_1));
					func_63(17);
					break;
			
				case 4:
					func_63(16);
					break;
			}
			break;
	
		case 16:
			if (!func_129())
			{
				func_127();
				return;
			}
		
			if (Global_1142424.f_2047 == 0)
			{
				Global_1142424.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
			}
			else if (MISC::GET_GAME_TIMER() - Global_1142424.f_2047 > 2000)
			{
				Global_1142424.f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
	
		case 17:
			if (flag)
			{
				unk4 = { Global_1141332[Global_1144526[player /*83*/].f_38.f_3 /*27*/].f_1 };
				func_77(unk4, &unk);
				func_132(unk4, unk);
				func_63(18);
			}
			else
			{
				func_127();
			}
			break;
	
		case 18:
			if (!func_129())
			{
				func_127();
				return;
			}
		
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142424.f_2052))
			{
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
				func_63(17);
				return;
			}
		
			volumeLockRequestStatus4 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142424.f_2052);
		
			switch (volumeLockRequestStatus4)
			{
				case 1:
				case 2:
					break;
			
				case 3:
					func_133(VOLUME::_0x351D71B8B72B858B(Global_1142424.f_2052));
					func_134(128);
					func_119();
					func_63(20);
					break;
			
				case 4:
					func_63(19);
					break;
			}
			break;
	
		case 19:
			if (!func_129())
			{
				func_127();
				return;
			}
		
			if (Global_1142424.f_2047 == 0)
			{
				Global_1142424.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142424.f_2046 = Global_1142424.f_2046 + 1;
			}
			else if (MISC::GET_GAME_TIMER() - Global_1142424.f_2047 > 2000)
			{
				Global_1142424.f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
	
		case 20:
			if (!flag)
			{
				if (flag2)
				{
					Global_1142424.f_2036 = { func_115() };
					Global_1142424.f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_63(21);
				}
			}
			else if (flag2)
			{
				if (func_138(Global_1144526[player /*83*/].f_38))
				{
					func_137("GC_CAMP_LOCK", 10000, 0, 0, 0, true);
					func_120();
					Global_1142424.f_2036 = { func_115() };
					Global_1142424.f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_139(num);
				}
			}
			else
			{
				func_63(21);
			}
			break;
	
		case 21:
			if (func_140(num))
			{
				func_119();
				func_63(22);
			}
			break;
	
		case 22:
			if (flag2)
			{
				Global_1142424.f_2036 = { func_115() };
				Global_1142424.f_2036.f_3 = 0;
				func_63(5);
			}
			else
			{
				func_141();
			}
			break;
	}

	return;
}

void func_60() // Position - 0x1F54 Hash - 0x3853A901 ^0xDDB3C24
{
	BOOL flag;
	var unk;

	unk = { func_142() };
	flag = func_44(unk);

	if (flag)
		func_31(1024);
	else
		func_28(1024);

	return;
}

void func_61() // Position - 0x1F84 Hash - 0x7FEC808F ^0xF8B60F54
{
	Hash hash;
	int num;
	int num2;
	int num3;
	var unk;
	var unk18;
	var unk22;
	var unk43;
	var requestId;

	func_143();
	func_144();
	func_145();
	func_146();
	num3 = func_147(Global_1295666.f_149[Global_1295666]);

	if (num3 != 9 && num3 > 0 && GANG::NETWORK_IS_GANG_ID_VALID(Global_1295666.f_10) && !GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
	{
		func_148(false);
		func_149(9);
	}

	switch (num3)
	{
		case 0:
			func_150();
		
			if (func_151(Global_1295666.f_149[Global_1295666]))
				if (func_152())
					func_149(7);
				else
					func_149(2);
			else
				func_149(1);
			break;
	
		case 1:
			if (func_151(Global_1295666.f_149[Global_1295666]))
			{
				func_153(&(Global_1144485.f_15), false);
				func_149(2);
			}
			break;
	
		case 2:
			if (func_154())
				if (!func_155(Global_1295666, 64))
					func_148(true);
			else if (func_155(Global_1295666, 64))
				func_148(false);
		
			if (func_156(PLAYER::PLAYER_ID()) == 0 && !func_155(Global_1295666, 128))
			{
				func_157("TRADER_HALT_REASON_RESUPPLY", joaat("butcher_table_production"));
				func_148(false);
				func_158(8);
				func_149(4);
			}
		
			num = Global_1901671.f_604.f_11 * 60000;
		
			if (func_159(&(Global_1144485.f_15)) && func_160(&(Global_1144485.f_15)) > num)
				if (func_161())
					func_149(3);
			break;
	
		case 3:
			if (func_162(&Global_1144485) == 3)
				func_149(2);
			break;
	
		case 4:
			if (func_155(Global_1295666, 256))
			{
				if (func_155(Global_1295666, 16384))
				{
					if (func_163(&Global_1144485))
						return;
				
					if (!func_152())
					{
						hash = func_164(2128091090, 0, true, -1, true);
					
						if (!func_165(&Global_1144485, 2128091090, 1, true, hash, -1, true))
							return;
					
						Global_1144485.f_39 = func_166(2128091090, hash, false);
					
						if (Global_1144485.f_39 != 0)
						{
							unk.f_7 = -142743235;
							unk.f_16 = -1;
							unk.f_16 = func_167(Global_1144485.f_39);
							func_168(Global_1144485.f_1, unk);
						}
					}
				
					func_169(955, true);
					func_149(5);
				}
				else if (func_155(Global_1295666, 256))
				{
					func_171(func_170(914410532, func_91(true), 1784584921, true, false, false));
					func_172(256);
					func_172(8);
					func_149(2);
				}
			}
			break;
	
		case 5:
			if (func_152())
			{
				unk22 = -1;
				unk22.f_4.f_7 = -142743235;
				unk22.f_4.f_16 = -1;
			
				if (Global_1144485.f_39 != 0 && func_173(Global_1144485.f_1, &unk18))
				{
					func_174(Global_1144485.f_1, &unk22);
					TELEMETRY::_TELEMETRY_COUPON(&unk18, func_175(Global_1144485.f_39), Global_1144485.f_39, unk22.f_4.f_16, 2128091090, func_176(154));
				}
			
				func_153(&(Global_1144485.f_18), false);
				func_149(6);
			}
			break;
	
		case 6:
			num2 = Global_1901671.f_604.f_13 * 60000;
		
			if (func_159(&(Global_1144485.f_18)) && func_160(&(Global_1144485.f_18)) > num2)
				func_149(7);
			break;
	
		case 7:
			if (func_155(Global_1295666, 16384))
				if (func_163(&Global_1144485))
					return;
		
			if (func_159(&(Global_1144485.f_18)))
				func_177(&(Global_1144485.f_18));
		
			hash = func_178(-1364613333, 0, true, -1, true);
		
			if (!func_179(&Global_1144485, -1364613333, 1, 1, true, 0, hash, -1, false))
			{
				func_149(2);
				return;
			}
		
			func_169(956, true);
			func_172(16384);
			func_172(256);
			func_172(8);
			func_149(8);
			break;
	
		case 8:
			if (func_163(&Global_1144485))
				return;
		
			unk43.f_8 = func_180(-1364613333, 770694722);
			unk43.f_6 = func_180(-1364613333, 914410532);
			unk43.f_13 = 1;
			TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(Global_1144485.f_1, &requestId);
			TELEMETRY::_TELEMETRY_ROLE_TRADER(&unk43, &requestId);
			func_171(func_170(914410532, func_91(true), 1784584921, true, false, false));
			func_149(2);
			break;
	
		case 9:
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295666.f_10) && GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				if (func_151(Global_1295666.f_149[Global_1295666]))
					func_149(2);
				else
					func_149(1);
			break;
	}

	return;
}

void func_62() // Position - 0x2437 Hash - 0xBA0CAA22 ^0x8AEBC1F9
{
	Player gangLeader;

	if (MISC::GET_FRAME_COUNT() % 45 == 0)
	{
		gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
			return;
	
		if (Global_1147183.f_339.f_16 != 0 && Global_1147183.f_339.f_16 != func_181(gangLeader) || Global_1147183.f_339.f_16 == func_182(gangLeader))
		{
			UILOG::_UILOG_REMOVE_ENTRY(7, Global_1147183.f_339.f_16);
			Global_1147183.f_339.f_16 = 0;
		}
		else if (func_183(Global_1147183.f_339.f_18, 2))
		{
			func_184(&(Global_1147183.f_339.f_18), 2);
			func_185();
		}
	}

	return;
}

void func_63(int iParam0) // Position - 0x24DC Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1142424.f_2019 = iParam0;
	return;
}

void func_64(var uParam0) // Position - 0x24ED Hash - 0xDD6FD4B3 ^0x8AC4E7FC
{
	var unk;

	unk.f_3 = -1;
	unk.f_7 = -1;
	unk.f_25 = -1;
	unk.f_28.f_1 = 1046181202;
	unk.f_28.f_2 = 255;
	unk.f_28.f_3 = -1;
	*uParam0 = { unk };
	return;
}

BOOL func_65(int iParam0, int iParam1) // Position - 0x252F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_66(int iParam0, int iParam1) // Position - 0x253E Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_67(int iParam0) // Position - 0x2553 Hash - 0x5000025C ^0x5000025C
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

int func_68(int iParam0) // Position - 0x2592 Hash - 0xE34A477A ^0xE34A477A
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

void func_69(int iParam0, int iParam1) // Position - 0x2628 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_70(int iParam0, int iParam1) // Position - 0x2639 Hash - 0x3E8BDA0C ^0x190DD529
{
	if (Global_1141332.f_865[iParam0 /*7*/].f_4 != iParam1)
		Global_1141332.f_865[iParam0 /*7*/].f_4 = iParam1;

	return;
}

void func_71(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2662 Hash - 0x91975762 ^0xE2FDDE42
{
	Global_1141332.f_865[iParam0 /*7*/].f_1 = { uParam1 };
	return;
}

void func_72(int iParam0, int iParam1) // Position - 0x267D Hash - 0x73604ED5 ^0x73604ED5
{
	if (Global_1141332.f_865[iParam0 /*7*/] != iParam1)
		Global_1141332.f_865[iParam0 /*7*/] = iParam1;

	return;
}

int func_73(Player plParam0) // Position - 0x26A2 Hash - 0xF18C73E3 ^0x1EBDC342
{
	int i;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return -1;

	if (!func_49())
		return -1;

	if (plParam0 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == plParam0)
			return i;
	}

	return -1;
}

BOOL func_74(int iParam0) // Position - 0x2703 Hash - 0xED5061BA ^0xED5061BA
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

void func_75(int iParam0, int iParam1) // Position - 0x2722 Hash - 0x47156557 ^0x47156557
{
	if (!func_74(iParam0))
		return;

	if (Global_1141332[iParam0 /*27*/] != iParam1)
		Global_1141332[iParam0 /*27*/] = iParam1;

	return;
}

BOOL func_76(Player plParam0) // Position - 0x274E Hash - 0xBCBA7442 ^0x7662FC97
{
	Player player;
	int i;

	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == player)
			return Global_1141332[i /*27*/].f_1.f_1 == Global_1144526[plParam0 /*83*/].f_33.f_1;
	}

	return false;
}

BOOL func_77(var uParam0, var uParam1, var uParam2, Vector3* pvParam3) // Position - 0x27B3 Hash - 0x4211EC60 ^0x4B19C06A
{
	var unk;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = 1886596441;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk);
		return true;
	}

	return false;
}

BOOL func_78(var uParam0, var uParam1, var uParam2, Player plParam3, Vector3 vParam4, var uParam5, var uParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x2807 Hash - 0x97E93A22 ^0x8442A47F
{
	Hash unlockHash;

	if (func_42(32))
		if (func_187(uParam0.f_2))
			return true;
		else
			return false;

	if (func_42(64))
	{
		unlockHash = func_188(uParam0);
	
		if (unlockHash == 0)
			return false;
	
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
			return false;
	}

	if (func_189(uParam0, iParam7))
		return false;

	if (!bParam9 && VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam4, Global_1901671.f_604.f_5, false, 0, 0))
		return false;

	if (!bParam9 && VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam4, Global_1901671.f_604.f_4, false, func_190(), 0))
		return false;

	if (bParam10 == false && func_191(vParam4))
		return false;

	if (bParam10 == false && func_192(vParam4, plParam3))
		return false;

	return true;
}

int func_79(var uParam0) // Position - 0x28E6 Hash - 0x95D0E279 ^0xC58B3B0E
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_1.f_2 == 0 || Global_1141332[i /*27*/].f_9 == uParam0->f_9 && uParam0->f_9 != 255)
			break;
	}

	if (i >= 32)
		return -1;

	Global_1141332[i /*27*/] = { *uParam0 };
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1141332.f_1091), Global_1141332[i /*27*/].f_9);
	return i;
}

void func_80(int iParam0, int iParam1) // Position - 0x2968 Hash - 0x12D7F969 ^0x1A676A6F
{
	if (!func_74(iParam0))
		return;

	if (!func_193(iParam0, iParam1))
		func_45(&(Global_1141332[iParam0 /*27*/].f_7), iParam1);

	return;
}

BOOL func_81(Any anParam0, var uParam1, BOOL bParam2, var uParam3, int iParam4) // Position - 0x2999 Hash - 0x9FE098D4 ^0xA5D40050
{
	var unk;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return false;

	unk = { *uParam1 };

	if (func_194(&unk, anParam0, bParam2, uParam3, iParam4))
	{
		*uParam1 = { unk };
		return true;
	}

	return false;
}

void func_82(int iParam0) // Position - 0x29D8 Hash - 0x42349D9E ^0xFB058C58
{
	Player player;

	if (Global_1141332[iParam0 /*27*/] == 0)
		return;

	player = func_195(iParam0, 0);

	if (!func_101(iParam0))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_75(iParam0, 3);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player))
	{
		func_75(iParam0, 3);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_LEADER(player))
		func_75(iParam0, 3);

	return;
}

void func_83(int iParam0) // Position - 0x2A3E Hash - 0xEE9C8F7D ^0x908D6B27
{
	int networkTime;
	int uniqueIntForPlayer;
	Any gangId;
	var value;
	int i;

	networkTime = NETWORK::GET_NETWORK_TIME();

	if (Global_1141332[iParam0 /*27*/].f_26 == 0)
		Global_1141332[iParam0 /*27*/].f_26 = networkTime;
	else if (NETWORK::GET_TIME_DIFFERENCE(Global_1141332[iParam0 /*27*/].f_26, networkTime) > 12000)
		Global_1141332[iParam0 /*27*/].f_26 = networkTime;
	else
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141332[iParam0 /*27*/].f_9))
		return;

	if (func_65(Global_1144526[Global_1141332[iParam0 /*27*/].f_9 /*83*/].f_33.f_4, 128))
	{
		uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1141332[iParam0 /*27*/].f_9);
	
		if (!func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 128))
		{
			Global_1141332[iParam0 /*27*/].f_23.f_1 = Global_1144526[Global_1141332[iParam0 /*27*/].f_9 /*83*/].f_38.f_23.f_1;
			Global_1141332[iParam0 /*27*/].f_23 = Global_1144526[Global_1141332[iParam0 /*27*/].f_9 /*83*/].f_38.f_23;
			Global_1141332[iParam0 /*27*/].f_25 = 0;
			func_45(&(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5), 128);
		}
	}

	gangId = GANG::NETWORK_GET_GANG_ID(Global_1141332[iParam0 /*27*/].f_9);

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))
			if (GANG::NETWORK_GET_GANG_ID(PLAYER::INT_TO_PLAYERINDEX(i)) != gangId)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
	}

	if (value != Global_1141332[iParam0 /*27*/].f_25 && VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141332[iParam0 /*27*/].f_23.f_1) && VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141332[iParam0 /*27*/].f_23))
	{
		Global_1141332[iParam0 /*27*/].f_25 = value;
		VOLUME::_0xEBA87B9273835CF3(Global_1141332[iParam0 /*27*/].f_23.f_1, &value);
		VOLUME::_0xEBA87B9273835CF3(Global_1141332[iParam0 /*27*/].f_23, &value);
	}

	return;
}

void func_84(int iParam0) // Position - 0x2BF5 Hash - 0x478164FF ^0x3B4440F6
{
	Any gangId;
	var memberHandles;
	int gangMembers;
	Player playerFromGamerHandle;
	int i;
	int j;
	int k;
	BOOL flag;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141332[iParam0 /*27*/].f_9))
		return;

	gangId = GANG::NETWORK_GET_GANG_ID(Global_1141332[iParam0 /*27*/].f_9);
	memberHandles = 7;
	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(gangId, &memberHandles);

	if (gangMembers > Global_1141332[iParam0 /*27*/].f_1)
		return;

	for (i = 0; i <= Global_1141332[iParam0 /*27*/].f_1 - 1; i = i + 1)
	{
		if (Global_1141332[iParam0 /*27*/].f_10[i] != 255)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141332[iParam0 /*27*/].f_10[i]))
				Global_1141332[iParam0 /*27*/].f_10[i] = 255;
			else if (GANG::NETWORK_GET_GANG_ID(Global_1141332[iParam0 /*27*/].f_10[i]) != gangId)
				Global_1141332[iParam0 /*27*/].f_10[i] = 255;
		}
		else if (i >= gangMembers)
		{
		}
		else
		{
			for (k = 0; k <= i; k = k + 1)
			{
				if (func_196(memberHandles[k /*2*/]))
				{
					playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[k /*2*/]);
				
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
					{
						flag = true;
					
						for (j = 0; j <= Global_1141332[iParam0 /*27*/].f_1 - 1; j = j + 1)
						{
							if (Global_1141332[iParam0 /*27*/].f_10[j] == playerFromGamerHandle)
							{
								flag = false;
								break;
							}
						}
					}
				}
			
				if (flag == true)
					break;
			}
		
			if (flag)
				Global_1141332[iParam0 /*27*/].f_10[i] = playerFromGamerHandle;
		}
	}

	return;
}

void func_85(int iParam0) // Position - 0x2D5E Hash - 0xE1BE4B7A ^0xE04F3C3A
{
	BOOL flag;
	int num;
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && Global_1144526[i /*83*/].f_70.f_2 != 0 && Global_1144526[i /*83*/].f_70 == iParam0)
		{
			flag = true;
			num = Global_1144526[i /*83*/].f_70.f_2;
			Global_1141332[iParam0 /*27*/].f_18 = Global_1141332[iParam0 /*27*/].f_18 || Global_1144526[i /*83*/].f_70.f_1;
		}
	}

	if (flag)
	{
		if (Global_1141332[iParam0 /*27*/].f_18.f_1 != num)
			Global_1141332[iParam0 /*27*/].f_18.f_1 = num;
	}
	else if (Global_1141332[iParam0 /*27*/].f_18.f_1 != 0)
	{
		Global_1141332[iParam0 /*27*/].f_18.f_1 = 0;
		Global_1141332[iParam0 /*27*/].f_18 = 0;
	}

	return;
}

void func_86(int iParam0) // Position - 0x2E2C Hash - 0xDBF2491E ^0x70E93D78
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, false, 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_198(), iParam0, false, 0))
		func_75(iParam0, 2);

	return;
}

void func_87(int iParam0) // Position - 0x2E5B Hash - 0x31ADD33D ^0x480A0CCA
{
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, false, 0))
		func_75(iParam0, 1);

	return;
}

void func_88(int iParam0) // Position - 0x2E7A Hash - 0x163F14A1 ^0xE9B42635
{
	if (Global_1901671.f_604.f_15)
		func_199(iParam0);

	func_200(&Global_1141332[iParam0 /*27*/]);
	func_75(iParam0, 0);
	return;
}

void func_89() // Position - 0x2EA7 Hash - 0x8FA7CF73 ^0x1D90829D
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1144485.f_40 = 0;
	Global_1144526[player /*83*/].f_74 = Global_1144485.f_32;
	Global_1144526[player /*83*/].f_74.f_1 = Global_1144485.f_33;
	return;
}

void func_90() // Position - 0x2EDE Hash - 0xA74DE52A ^0x4C0F787E
{
	if (func_122(512))
		func_31(65536);
	else if (func_122(256))
		func_31(32768);

	return;
}

struct<4> func_91(BOOL bParam0) // Position - 0x2F0D Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_201(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_92(joaat("character"), func_202(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_92(joaat("character"), func_202(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_92(joaat("character"), func_202(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_92(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x2FAD Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_203(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_201(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2FDE Hash - 0x410761CF ^0xEEF1125A
{
	Hash hash;
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	hash = joaat("upgrade_camp_equipment_fast_travel_map");

	if (func_204(hash, 1))
		Global_1144526[num /*83*/].f_38.f_12.f_3 = hash;

	hash = joaat("upgrade_camp_stew_pot");

	if (func_204(hash, 1))
		Global_1144526[num /*83*/].f_38.f_12.f_1 = hash;

	hash = joaat("upgrade_camp_butcher_table");

	if (func_204(hash, 1))
		Global_1144526[num /*83*/].f_38.f_12 = hash;

	hash = -1396511102;

	if (func_204(hash, 1))
		Global_1144526[num /*83*/].f_38.f_12.f_6 = hash;

	hash = 913131737;

	if (func_204(hash, 1))
		Global_1144526[num /*83*/].f_38.f_12.f_2 = hash;

	hash = joaat("upgrade_camp_delivery_wagon_medium");

	if (func_204(hash, 1))
		Global_1144526[num /*83*/].f_38.f_12.f_2 = hash;

	hash = joaat("upgrade_camp_delivery_wagon_large");

	if (func_204(hash, 1))
		Global_1144526[num /*83*/].f_38.f_12.f_2 = hash;

	return;
}

void func_94() // Position - 0x30D1 Hash - 0x8B5A0D75 ^0xF506C9B7
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (player < 0 || player >= 32)
		return;

	if (func_204(-1577890561, 1))
		if (func_204(joaat("upgrade_camp_music_harmonica_002"), 1))
			Global_1144526[player /*83*/].f_38.f_26 = 11;
		else if (func_204(joaat("upgrade_camp_music_harmonica_001"), 1))
			Global_1144526[player /*83*/].f_38.f_26 = 10;
		else
			Global_1144526[player /*83*/].f_38.f_26 = 9;
	else if (func_204(-342106029, 1))
		if (func_204(joaat("upgrade_camp_music_harmonica_002"), 1))
			Global_1144526[player /*83*/].f_38.f_26 = 8;
		else if (func_204(joaat("upgrade_camp_music_harmonica_001"), 1))
			Global_1144526[player /*83*/].f_38.f_26 = 7;
		else
			Global_1144526[player /*83*/].f_38.f_26 = 6;
	else if (func_204(2113111296, 1))
		if (func_204(joaat("upgrade_camp_music_harmonica_002"), 1))
			Global_1144526[player /*83*/].f_38.f_26 = 5;
		else if (func_204(joaat("upgrade_camp_music_harmonica_001"), 1))
			Global_1144526[player /*83*/].f_38.f_26 = 4;
		else
			Global_1144526[player /*83*/].f_38.f_26 = 3;
	else if (func_204(joaat("upgrade_camp_music_harmonica_002"), 1))
		Global_1144526[player /*83*/].f_38.f_26 = 2;
	else if (func_204(joaat("upgrade_camp_music_harmonica_001"), 1))
		Global_1144526[player /*83*/].f_38.f_26 = 1;
	else
		Global_1144526[player /*83*/].f_38.f_26 = 0;

	return;
}

Hash func_95(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x3244 Hash - 0x67107E64 ^0x67107E64
{
	return func_205(&uParam0, hParam4, bParam5, iParam6);
}

void func_96(int iParam0, int iParam1) // Position - 0x3258 Hash - 0x9928D522 ^0xCD336A1D
{
	if (iParam1 < 0 || iParam1 >= 32)
		return;

	if (Global_1144526[iParam1 /*83*/].f_38.f_12.f_4 != iParam0)
		Global_1144526[iParam1 /*83*/].f_38.f_12.f_4 = iParam0;

	return;
}

void func_97(int iParam0, int iParam1) // Position - 0x3298 Hash - 0x9928D522 ^0x3156997E
{
	if (iParam1 < 0 || iParam1 >= 32)
		return;

	if (Global_1144526[iParam1 /*83*/].f_38.f_12.f_5 != iParam0)
		Global_1144526[iParam1 /*83*/].f_38.f_12.f_5 = iParam0;

	return;
}

void func_98(int iParam0, int iParam1) // Position - 0x32D8 Hash - 0x9928D522 ^0x5F8F381A
{
	if (iParam1 < 0 || iParam1 >= 32)
		return;

	if (Global_1144526[iParam1 /*83*/].f_38.f_12.f_7 != iParam0)
	{
		Global_1144526[iParam1 /*83*/].f_38.f_12.f_7 = iParam0;
	
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
			func_31(8192);
	}

	return;
}

void func_99(int iParam0, int iParam1) // Position - 0x3328 Hash - 0x9928D522 ^0xEBB91C84
{
	if (iParam1 < 0 || iParam1 >= 32)
		return;

	if (Global_1144526[iParam1 /*83*/].f_38.f_12.f_8 != iParam0)
	{
		Global_1144526[iParam1 /*83*/].f_38.f_12.f_8 = iParam0;
	
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
			func_31(8192);
	}

	return;
}

void func_100(int iParam0, int iParam1) // Position - 0x3378 Hash - 0x9928D522 ^0x3C75B2C7
{
	if (iParam1 < 0 || iParam1 >= 32)
		return;

	if (Global_1144526[iParam1 /*83*/].f_38.f_12.f_9 != iParam0)
	{
		Global_1144526[iParam1 /*83*/].f_38.f_12.f_9 = iParam0;
	
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
			func_31(8192);
	}

	return;
}

BOOL func_101(int iParam0) // Position - 0x33C8 Hash - 0x823C633 ^0x823C633
{
	if (!func_74(iParam0))
		return false;

	return Global_1141332[iParam0 /*27*/] != 0 && Global_1141332[iParam0 /*27*/] != 3;
}

void func_102(int iParam0, Player plParam1) // Position - 0x33F7 Hash - 0x9D318184 ^0x5A39A6CC
{
	var unk;
	Any gangId;

	unk.f_2 = 255;
	Global_1147183.f_9[iParam0 /*10*/] = { unk };
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (GANG::NETWORK_IS_GANG_ID_VALID(gangId) && plParam1 == GANG::NETWORK_GET_GANG_LEADER(gangId) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		Global_1147183.f_330.f_3 = { unk.f_4 };

	return;
}

void func_103(int iParam0, int iParam1) // Position - 0x3458 Hash - 0xA095F5F2 ^0x8C68C009
{
	if (!func_74(iParam0))
		return;

	if (Global_1142424.f_1[iParam0 /*63*/].f_3 != iParam1)
		Global_1142424.f_1[iParam0 /*63*/].f_3 = iParam1;

	return;
}

void func_104(int iParam0, var uParam1, var uParam2, var uParam3, Player plParam4) // Position - 0x348C Hash - 0x41ECDA7A ^0x1C304D65
{
	Any gangId;

	Global_1147183.f_9[iParam0 /*10*/].f_7 = { func_206(iParam0) };
	Global_1147183.f_9[iParam0 /*10*/].f_4 = { uParam1 };
	Global_1147183.f_9[iParam0 /*10*/].f_2 = plParam4;
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (GANG::NETWORK_IS_GANG_ID_VALID(gangId) && plParam4 == GANG::NETWORK_GET_GANG_LEADER(gangId) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam4))
	{
		Global_1147183.f_330.f_7 = plParam4;
		Global_1147183.f_330.f_3 = { uParam1 };
	}

	return;
}

BOOL func_105(Hash hParam0) // Position - 0x350E Hash - 0xC62F3EC7 ^0x941BF203
{
	if (hParam0 >= 0 && hParam0 < Global_17088)
		return MAP::DOES_BLIP_EXIST(Global_17088[hParam0]);

	return false;
}

void func_106(var uParam0) // Position - 0x3537 Hash - 0xE8DFF05F ^0xC6A37022
{
	var unk;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_13 = 7;
	unk.f_49 = 7;
	*uParam0 = { unk };
	return;
}

void func_107(int iParam0, BOOL bParam1) // Position - 0x3564 Hash - 0x8F6461D1 ^0xA4A6A380
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	var unk;

	if (!bParam1)
	{
		func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_5), false);
		return;
	}

	if (!func_207(iParam0))
	{
		func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_5), false);
		return;
	}

	if (!func_42(16))
	{
		func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_5), false);
		return;
	}

	num = func_208(iParam0, false);
	num2 = Global_1295666.f_10;
	flag = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && Global_1141332[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID();
	flag2 = !flag && num == num2 && GANG::NETWORK_IS_GANG_LEADER(Global_1141332[iParam0 /*27*/].f_9);
	flag3 = func_105(Global_1142424.f_1[iParam0 /*63*/].f_5);

	if (!flag && !flag2 && BUILTIN::VDIST(Global_34, func_206(iParam0)) > 75f)
	{
		if (flag3)
			func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_5), false);
	
		return;
	}

	flag4 = func_42(1024);
	flag5 = func_209(1);

	if (!flag3)
	{
		if (flag || flag2 && Global_1142424.f_2045 != iParam0 && Global_1142424.f_2045 != -1)
			func_17(&(Global_1142424.f_1[Global_1142424.f_2045 /*63*/].f_5), false);
	
		if (flag || flag2)
			func_210(iParam0);
	
		if (flag4)
			if (flag || flag2)
				if (!flag5)
					return;
			else
				return;
	
		unk = Global_1141332[iParam0 /*27*/].f_1.f_1;
		Global_1142424.f_1[iParam0 /*63*/].f_5 = func_213(func_211(func_206(iParam0), true), func_212(flag || flag2), func_206(iParam0), -1);
	
		if (Global_1142424.f_1[iParam0 /*63*/].f_5 == -1)
			return;
	
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), "NET_CAMP_BLIP_POSSE");
		MAP::SET_BLIP_FLASH_TIMER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), func_212(flag || flag2), func_214(unk, flag || flag2, flag));
	
		if (func_42(512))
		{
			if (flag4 == false)
			{
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_URGENT_ALERT"));
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_VERYHIGH_CATEGORY"));
				Global_1142424.f_1[iParam0 /*63*/].f_62 = MISC::GET_GAME_TIMER();
			}
		
			func_28(512);
		}
	}
	else
	{
		if (Global_1142424.f_2045 == iParam0)
		{
			if (Global_1142424.f_2045 != -1 && !flag && !flag2)
			{
				func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_5), false);
				return;
			}
		}
		else if (Global_1142424.f_2045 != -1 && flag || flag2)
		{
			func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_5), false);
			return;
		}
	
		if (!flag && !flag2)
			if (func_113(iParam0, 2))
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_POSSE_ENEMY_OWNED"));
			else
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_POSSE_NEUTRAL_OWNED"));
	
		if (func_215(iParam0) && !(flag2 || flag) || !flag4)
			MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_MP_WHITE_FLAG"));
		else
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_MP_WHITE_FLAG"));
	
		if (flag4 && !(flag2 || flag) || !flag5)
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_URGENT_ALERT"));
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_VERYHIGH_CATEGORY"));
			Global_1142424.f_1[iParam0 /*63*/].f_62 = 0;
			MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		}
	
		if (Global_1142424.f_1[iParam0 /*63*/].f_62 != 0 && MISC::GET_GAME_TIMER() - Global_1142424.f_1[iParam0 /*63*/].f_62 > 20000)
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_5), joaat("BLIP_MODIFIER_VERYHIGH_CATEGORY"));
			Global_1142424.f_1[iParam0 /*63*/].f_62 = 0;
		}
	}

	return;
}

void func_108(int iParam0, BOOL bParam1) // Position - 0x39E8 Hash - 0xD62F8463 ^0x5308461E
{
	int num;

	if (!bParam1)
		return;

	if (!func_74(iParam0))
		return;

	if (!GANG::_NETWORK_IS_GANG_MEMBER(func_208(iParam0, false), PLAYER::PLAYER_ID()))
		return;

	if (func_216(PLAYER::PLAYER_ID()) == iParam0 && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		num = { func_217(0) };
	
		if (func_44(num))
		{
			if (num == 2 || num == 3 || num == 4 || num == 5 || num == 8 || num == 7 || num == 6)
			{
				if (!func_193(iParam0, 32) && !func_113(iParam0, 4096))
				{
					if (func_113(iParam0, 16))
						func_218(iParam0, 2048);
					else
						func_219(iParam0, 2048);
				
					func_220(iParam0);
					func_218(iParam0, 4096);
				}
			}
		}
		else if (func_193(iParam0, 32))
		{
			if (func_113(iParam0, 4096))
			{
				func_221(iParam0);
				func_219(iParam0, 4096);
			
				if (func_113(iParam0, 2048))
				{
					func_222(iParam0);
					func_219(iParam0, 2048);
				}
			}
		}
	}

	if (func_215(iParam0))
		if (func_122(16))
			func_125(16);
	else if (!func_122(16))
		func_223(16);

	return;
}

void func_109(int iParam0) // Position - 0x3B48 Hash - 0xA9004724 ^0x2C4B2FA7
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	int num3;

	if (!func_105(Global_1142424.f_1[iParam0 /*63*/].f_5))
	{
		if (func_105(Global_1142424.f_1[iParam0 /*63*/].f_6))
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_6), joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
			func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_6), false);
			Global_1142424.f_1[iParam0 /*63*/].f_6 = -1;
		}
	
		return;
	}

	num = func_208(iParam0, false);
	num2 = Global_1295666.f_10;
	flag = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && Global_1141332[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID();
	flag2 = !flag && num == num2 && GANG::NETWORK_IS_GANG_LEADER(Global_1141332[iParam0 /*27*/].f_9);

	if (!flag && !flag2)
	{
		if (func_105(Global_1142424.f_1[iParam0 /*63*/].f_6))
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_6), joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
			func_17(&(Global_1142424.f_1[iParam0 /*63*/].f_6), false);
			Global_1142424.f_1[iParam0 /*63*/].f_6 = -1;
		}
	
		return;
	}

	if (func_105(Global_1142424.f_1[iParam0 /*63*/].f_6))
		return;

	if (func_105(Global_1142424.f_1[Global_1142424.f_2051 /*63*/].f_6))
	{
		MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142424.f_1[Global_1142424.f_2051 /*63*/].f_6), joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
		func_17(&(Global_1142424.f_1[Global_1142424.f_2051 /*63*/].f_6), false);
		Global_1142424.f_1[Global_1142424.f_2051 /*63*/].f_6 = -1;
	}

	num3 = Global_1141332[iParam0 /*27*/].f_1.f_1;
	Global_1142424.f_1[iParam0 /*63*/].f_6 = func_213(func_211(func_206(iParam0), true), 101, func_206(iParam0), -1);

	if (Global_1142424.f_1[iParam0 /*63*/].f_6 == -1 || !func_105(Global_1142424.f_1[iParam0 /*63*/].f_6))
		return;

	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(func_16(Global_1142424.f_1[iParam0 /*63*/].f_6), "NET_CAMP_BLIP_POSSE");
	MAP::SET_BLIP_FLASH_TIMER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_6), func_212(flag || flag2), func_214(num3, flag || flag2, flag));
	MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_6), joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
	MAP::BLIP_ADD_MODIFIER(func_16(Global_1142424.f_1[iParam0 /*63*/].f_6), joaat("BLIP_MODIFIER_HIDDEN"));
	Global_1142424.f_2051 = iParam0;
	return;
}

void func_110(int iParam0) // Position - 0x3DB5 Hash - 0x81E75356 ^0x81E75356
{
	if (!func_12())
		return;

	if (func_42(4))
		return;

	if (!func_224(iParam0, 8))
	{
		func_225(iParam0);
		func_226(iParam0);
		func_227(iParam0);
		func_228(iParam0);
		func_229(iParam0);
		func_230(iParam0);
		func_231(iParam0, 8);
	}

	if (BUILTIN::VDIST(Global_34, func_206(iParam0)) >= Global_1901671.f_604)
		return;

	if (Global_1142424.f_1[iParam0 /*63*/].f_4 == 0)
		func_232(iParam0, 1);

	switch (Global_1142424.f_1[iParam0 /*63*/].f_4)
	{
		case 0:
			func_232(iParam0, 1);
			break;
	
		case 1:
			if (func_233(iParam0))
			{
				func_218(iParam0, 1);
				func_31(256);
				func_232(iParam0, 2);
			}
			break;
	
		case 2:
			if (func_234(iParam0))
				func_232(iParam0, 3);
			break;
	
		case 3:
			func_218(iParam0, 1);
			func_31(256);
			func_103(iParam0, 2);
			break;
	}

	return;
}

void func_111(int iParam0) // Position - 0x3EBF Hash - 0x9BC0DE16 ^0x7DFB4E32
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2055) || Global_1142424.f_2056 != iParam0)
	{
		func_219(iParam0, 1);
		func_219(iParam0, 2);
		func_232(iParam0, 0);
		func_103(iParam0, 1);
	}

	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2057) || Global_1142424.f_2058 != iParam0)
		func_219(iParam0, 1024);

	return;
}

void func_112(int iParam0) // Position - 0x3F2A Hash - 0x734A0ADF ^0x116663D0
{
	if (func_113(iParam0, 1) && SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2055) && Global_1142424.f_2056 == iParam0)
		return;

	func_235(&Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0]);
	func_106(&Global_1142424.f_1[iParam0 /*63*/]);
	func_103(iParam0, 0);
	func_232(iParam0, 0);
	return;
}

BOOL func_113(int iParam0, int iParam1) // Position - 0x3F8C Hash - 0xA07CEC03 ^0x2B036E49
{
	if (!func_74(iParam0))
		return false;

	return func_65(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0], iParam1);
}

void func_114(Player plParam0) // Position - 0x3FB6 Hash - 0x2952174F ^0xF1C61D5F
{
	Any gangId;
	Player gangLeader;
	int num;

	if (MISC::GET_FRAME_COUNT() % 3 != 0)
		return;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
	num = func_236(gangLeader);

	if (num != func_216(PLAYER::PLAYER_ID()))
		func_237(num);

	return;
}

Vector3 func_115() // Position - 0x3FF6 Hash - 0x8FE88B75 ^0xB0248239
{
	var unk;
	var unk4;

	unk4 = { func_238(false) };
	unk4.f_8 != joaat("kit_camp");

	if (unk4.f_17 == 0 && unk4.f_19 == 0 && Global_17418.f_55.f_4.f_2 != 0 && Global_17418.f_55.f_4 >= 4)
	{
		unk = { Global_17418.f_55.f_4 };
	}
	else
	{
		unk = unk4.f_17;
		unk.f_1 = unk4.f_18;
		unk.f_2 = unk4.f_19;
	}

	return unk;
}

void func_116(var uParam0, var uParam1, var uParam2) // Position - 0x4070 Hash - 0x6E8D8587 ^0x86D9DE72
{
	Global_1144526[func_239() /*83*/].f_38 = { uParam0 };
	func_240(uParam0);
	return;
}

BOOL func_117() // Position - 0x4092 Hash - 0x389A6ACA ^0xBF5A6229
{
	return Global_1142424.f_2027.f_7 == 3;
}

void func_118(int iParam0) // Position - 0x40A5 Hash - 0xC421D95B ^0x6C3664BD
{
	Global_1142424.f_2027.f_7 = iParam0;
	return;
}

void func_119() // Position - 0x40B8 Hash - 0xBE918508 ^0x38FE0FB4
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1144526[player /*83*/].f_38.f_7 = -1;
	Global_1144526[player /*83*/].f_38.f_8 = { 0f, 0f, 0f };
	return;
}

void func_120() // Position - 0x40E4 Hash - 0xD794FEAA ^0xF554BA93
{
	if (func_65(Global_1147183.f_8, 2))
		func_43(&(Global_1147183.f_8), 2);

	return;
}

void func_121() // Position - 0x4105 Hash - 0xFF593DAD ^0xC2BC6968
{
	if (Global_1147183.f_382 < 3 && func_42(64) && !func_123())
	{
		func_137("NET_CAMP_HELP_NO_CAMP", 10000, 0, 0, 0, true);
		Global_1147183.f_382 = Global_1147183.f_382 + 1;
	}

	return;
}

BOOL func_122(int iParam0) // Position - 0x414D Hash - 0xA059D395 ^0xAFACF28D
{
	return func_65(Global_1147183.f_8, iParam0);
}

BOOL func_123() // Position - 0x4161 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_124(int iParam0) // Position - 0x4181 Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_241(1, iParam0);
}

void func_125(int iParam0) // Position - 0x4190 Hash - 0x44C39101 ^0x6523B470
{
	func_43(&(Global_1147183.f_8), iParam0);
	return;
}

BOOL func_126(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x41A4 Hash - 0x981BFA8C ^0x6A4DE2FC
{
	BOOL num;
	var unk;

	unk = { uParam0 };

	if (func_49() && func_42(64) && func_242(0, 1))
	{
		if (unk.f_2 != 0)
		{
			if (func_243())
			{
				if (func_244(unk, 1))
					num = 1;
			}
			else
			{
				!func_245(Global_1295666.f_10);
			
				if (bParam3)
				{
					if (!func_246(unk, 1))
					{
						num = 0;
					}
					else if (func_244(unk, 0))
					{
						num = 1;
						func_128(1);
					}
				}
				else if (func_244(unk, 0))
				{
					num = 1;
				}
			}
		}
	}

	return num;
}

int func_127() // Position - 0x4240 Hash - 0x2C32A2F7 ^0x67555A7A
{
	var unk;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return 0;

	func_63(2);
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = 0;
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_247();
	func_248(unk);
	return 1;
}

void func_128(int iParam0) // Position - 0x4290 Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1142424.f_2027.f_5 = iParam0;
	return;
}

BOOL func_129() // Position - 0x42A3 Hash - 0xF190944A ^0xF190944A
{
	return Global_1142424.f_2046 < 10;
}

void func_130(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x42B5 Hash - 0x445E4A96 ^0xA9E8B94F
{
	var args;

	args = { uParam3 };
	args.f_4 = Global_1901671.f_604.f_5;
	args.f_5 = 544;
	args.f_6 = func_249();
	args.f_7 = func_188(uParam0);
	Global_1142424.f_2052.f_1 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args);
	return;
}

void func_131(int iParam0) // Position - 0x42FC Hash - 0xC1C28A11 ^0x5910A772
{
	if (Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1 != iParam0)
		Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1 = iParam0;

	return;
}

void func_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x432B Hash - 0xB9DAB398 ^0x6B5B6B51
{
	var args;

	args = { uParam3 + { 1f, 0f, 0f } };
	args.f_4 = Global_1901671.f_604.f_4;
	args.f_5 = 552;
	args.f_6 = func_190();
	args.f_7 = func_188(uParam0);
	Global_1142424.f_2052 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args);
	return;
}

void func_133(int iParam0) // Position - 0x4374 Hash - 0xC24A8C03 ^0xBB27A0D6
{
	if (Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_23 != iParam0)
		Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_23 = iParam0;

	return;
}

void func_134(int iParam0) // Position - 0x439F Hash - 0x30E4961A ^0x49018482
{
	func_45(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
	return;
}

BOOL func_135(var uParam0) // Position - 0x43BB Hash - 0x53804F69 ^0x4509E6AA
{
	Player player;
	int uniqueIntForPlayer;
	int num;
	int num2;
	var unk3;
	int num3;
	int num4;

	player = PLAYER::PLAYER_ID();
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);

	if (Global_1142424.f_2049 == 0)
	{
		Global_1142424.f_2049 = MISC::GET_SYSTEM_TIME();
	}
	else if (MISC::GET_SYSTEM_TIME() - Global_1142424.f_2049 > Global_1901671.f_604.f_14)
	{
		*uParam0 = 1;
		Global_1142424.f_2049 = 0;
		return false;
	}

	if (Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_4 != Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3)
		return false;

	if (func_65(Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_5, 32))
	{
		*uParam0 = 1;
		Global_1142424.f_2049 = 0;
		return false;
	}

	if (Global_1141332.f_865[uniqueIntForPlayer /*7*/] != 6)
		return false;

	num = func_236(player);

	if (func_74(num))
	{
		num2 = { Global_1141332[num /*27*/].f_1 };
		unk3 = { func_206(num) };
		func_116(num2);
		func_250(unk3);
		num3 = func_211(unk3, true);
		func_251(num3);
		func_248(num2);
		TELEMETRY::_TELEMETRY_NET_CAMP(num2, num2.f_2, num2.f_1, func_252(PLAYER::NETWORK_PLAYER_ID_TO_INT()), unk3);
	
		if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_253(Global_1295666.f_10, num2);
			POSSE::_0xC08AFF658B2E51DA(&num4);
		
			if (num4 != 0)
			{
				Global_1203952.f_14.f_2 = num4;
				Global_1203952.f_14.f_4 = Global_1295666.f_10;
				Global_1203952.f_14.f_7 = num2;
				Global_1203952.f_14.f_8 = num2.f_1;
				Global_1203952.f_1 = 10;
			}
		}
	
		if (func_42(64))
			if (Global_1142424.f_2027.f_4 == -15)
				Global_1142424.f_2027.f_4 = func_254();
	
		func_237(num);
		return true;
	}

	return false;
}

void func_136() // Position - 0x4573 Hash - 0x2F718BB7 ^0xAF3117C9
{
	if (!func_65(Global_1147183.f_8, 2))
		func_45(&(Global_1147183.f_8), 2);

	return;
}

int func_137(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x4595 Hash - 0x8EBD6187 ^0x42F0F0AC
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
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

BOOL func_138(var uParam0, var uParam1, var uParam2) // Position - 0x45D0 Hash - 0xE35602AD ^0xEAB55957
{
	Hash unlockHash;

	if (!func_42(64))
		return false;

	unlockHash = func_188(uParam0);

	if (unlockHash != 0 && !UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		return true;

	return false;
}

void func_139(int iParam0) // Position - 0x460B Hash - 0x13A74488 ^0x6651F82
{
	if (iParam0 < 0 || iParam0 >= 32 || Global_1141332[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
		return;

	if (Global_1144526[func_239() /*83*/].f_38.f_2 != Global_1141332[iParam0 /*27*/].f_1.f_2)
		func_116(Global_1141332[iParam0 /*27*/].f_1);

	func_255();
	func_256(iParam0);
	func_257(iParam0, Global_1141332[iParam0 /*27*/].f_1);
	func_258(iParam0);
	func_259(iParam0);
	return;
}

BOOL func_140(int iParam0) // Position - 0x4692 Hash - 0x62005F7B ^0x51F5752F
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	func_18();

	if (Global_1141332[iParam0 /*27*/].f_9 == 255)
		return false;

	if (Global_1141332[iParam0 /*27*/].f_9 != GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		return false;

	unk = { Global_1141332[iParam0 /*27*/].f_1 };
	func_116(unk);
	func_31(4096);

	if (func_117())
		func_118(0);

	func_120();
	return true;
}

void func_141() // Position - 0x4714 Hash - 0x2018CD2C ^0x62F56E9A
{
	Player gangLeader;
	Player player;
	Player player2;
	int num;
	const char* str;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		player = gangLeader;
		player2 = PLAYER::PLAYER_ID();
	
		if (player < 32 && player >= 0 && player2 < 32 && player2 >= 0 && Global_1144526[player2 /*83*/].f_38.f_2 != Global_1144526[player /*83*/].f_38.f_2 || Global_1144526[player2 /*83*/].f_38 != Global_1144526[player /*83*/].f_38)
			func_116(Global_1144526[player /*83*/].f_38);
	}

	if (func_42(4096) && !func_260() && CAM::IS_SCREEN_FADED_IN() && !func_124(255))
	{
		num = func_216(PLAYER::PLAYER_ID());
	
		if (func_74(num))
		{
			if (func_105(Global_1142424.f_1[num /*63*/].f_5) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141332[num /*27*/].f_9))
			{
				str = MISC::VAR_STRING(10, "GC_CAMP_MERGE", func_262(func_261(Global_1141332[num /*27*/].f_9), joaat("color_posse_ally")), func_16(Global_1142424.f_1[num /*63*/].f_5));
				UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, true);
				Global_1147183.f_375 = func_137(str, 10000, 0, 0, 0, true);
				Global_1147183.f_376 = Global_1295666.f_10;
				func_28(4096);
			}
		}
	}

	func_255();
	return;
}

struct<2> func_142() // Position - 0x487D Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_217(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_217(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

void func_143() // Position - 0x48C8 Hash - 0x398389BB ^0x92425A0E
{
	Hash num;

	if (Global_1144485.f_40 == 0)
	{
		Global_1144485.f_40 = Global_1144485.f_40 + 1;
	}
	else if (Global_1144485.f_40 >= 60)
	{
		Global_1144485.f_40 = 0;
		return;
	}
	else
	{
		Global_1144485.f_40 = Global_1144485.f_40 + 1;
		return;
	}

	if (func_263())
		if (!func_155(Global_1295666, 1))
			func_158(1);
	else if (func_155(Global_1295666, 1))
		func_172(1);

	func_264(func_170(770694722, func_91(true), 1784584921, true, false, false));
	func_265(func_170(-735397297, func_91(true), 1784584921, true, false, false));
	func_171(func_170(914410532, func_91(true), 1784584921, true, false, false));

	if (func_266() == joaat("upgrade_camp_delivery_wagon_large"))
		num = 100;
	else if (func_266() == joaat("upgrade_camp_delivery_wagon_medium"))
		num = 50;
	else
		num = 25;

	func_267(num);
	return;
}

void func_144() // Position - 0x49BF Hash - 0xC001CB38 ^0x8F90A3D9
{
	int num;
	int num2;
	int num3;
	Player gangLeader;
	int num4;
	int num5;
	int value;
	Hash hash;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_21))
		return;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	num4 = func_268(gangLeader);
	num5 = func_269(gangLeader);
	value = 0;

	if (Global_1940252.f_11588 != 0)
		hash = func_270(Global_1940252.f_11588);

	if (func_271(hash))
	{
		value = func_180(hash, 770694722);
	
		if (func_272(Global_1940252.f_11588, 1064293907))
			if (func_273())
				value = BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * 1.25f);
		else if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(Global_1940252.f_11588, 268435456) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(Global_1940252.f_11588, 134217728) || func_272(Global_1940252.f_11588, 1888974372))
			value = BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * 0.4f);
		else
			value = BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * 0.6f);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_23))
		if (func_274(29) && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("satchel")) && Global_1940252.f_41.f_203 > 0)
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_23, value + num4);
		else
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_23, 0);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_22))
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_22, num4);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_24))
	{
		num = func_275(gangLeader);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_24, num);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_26))
	{
		if (func_183(Global_1147183.f_339.f_18, 1))
		{
			num2 = func_276(gangLeader);
			func_184(&(Global_1147183.f_339.f_18), 1);
		}
		else
		{
			num2 = func_277(gangLeader);
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_26, num2);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_27))
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_27, num5);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_28))
	{
		num = func_278(gangLeader);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_28, num);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_29))
	{
		num3 = func_279(gangLeader);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144485.f_29, num3);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_31))
		if (func_155(gangLeader, 32) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("satchel")))
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1144485.f_31, true);
		else
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1144485.f_31, false);

	return;
}

void func_145() // Position - 0x4C37 Hash - 0xA44448FD ^0xC533D22
{
	if (func_280())
	{
		if (!func_155(Global_1295666, 4096))
		{
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_GOLD_CURRENCY_CHANGE"));
			HUD::_ENABLE_HUD_CONTEXT(-782493871);
			func_158(4096);
		}
	}
	else if (func_155(Global_1295666, 4096))
	{
		HUD::_DISABLE_HUD_CONTEXT(-782493871);
		func_172(4096);
	}

	return;
}

void func_146() // Position - 0x4C8F Hash - 0xAD0A9860 ^0xA7B341EF
{
	var unk;
	var unk5;
	var value;
	int num;
	Player player;
	int i;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) || !GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10))
		return;

	if (Global_1144485.f_34 != 255)
	{
		num = Global_1144485.f_34;
	
		if (num >= 0 && num < 32 && Global_1144526[num /*83*/].f_74.f_6 > 0 && Global_1144526[num /*83*/].f_74.f_7 == Global_1144485.f_37 && Global_1144485.f_37 != -1)
			return;
		else
			Global_1144485.f_34 = 255;
	}

	if (!func_281(true))
		return;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && GANG::_NETWORK_IS_IN_MY_GANG(player))
		{
			if (Global_1144526[i /*83*/].f_74.f_8 != 0 && Global_1144526[i /*83*/].f_74.f_6 > 0)
			{
				if (func_282(&unk, Global_1144526[i /*83*/].f_74.f_8, Global_1144526[i /*83*/].f_74.f_6, false))
				{
					SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
					Global_1144485.f_34 = player;
					Global_1144485.f_37 = Global_1144526[i /*83*/].f_74.f_7;
					func_283(19, unk5, value);
				}
			
				break;
			}
		}
	}

	return;
}

int func_147(Player plParam0) // Position - 0x4DD3 Hash - 0x30F0A76E ^0x27A9FCCC
{
	int num;
	Player player;

	num = -1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return num;

	player = plParam0;
	return Global_1144526[player /*83*/].f_74.f_1;
}

void func_148(BOOL bParam0) // Position - 0x4DFD Hash - 0x69EE8ED6 ^0xDC21CEF9
{
	if (bParam0)
	{
		func_284(&(Global_1144485.f_15));
		func_158(64);
	}
	else
	{
		func_177(&(Global_1144485.f_15));
		func_172(64);
	}

	return;
}

void func_149(int iParam0) // Position - 0x4E2D Hash - 0x5D23B6D2 ^0xFA33CF63
{
	Global_1144526[Global_1295666 /*83*/].f_74.f_1 = iParam0;
	Global_1144485.f_33 = Global_1144526[Global_1295666 /*83*/].f_74.f_1;
	return;
}

void func_150() // Position - 0x4E59 Hash - 0xD3B8251C ^0x4D0A086D
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Player gangLeader;
	Hash hash4;
	Hash hash5;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	hash4 = func_268(gangLeader);
	hash5 = func_269(gangLeader);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_21))
		Global_1144485.f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Trader_ProgressBars");

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_22))
		Global_1144485.f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderMaterialsValue", hash4);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_23))
		Global_1144485.f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderMaterialsDeltaValue", 0);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_25))
		Global_1144485.f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderMaterialsMaximum", Global_1901671.f_604.f_9);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_24))
	{
		hash = func_275(gangLeader);
		Global_1144485.f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderMaterialsColorID", hash);
	}

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_26))
	{
		hash2 = func_277(gangLeader);
		Global_1144485.f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "ProductionOperational", hash2);
	}

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_27))
		Global_1144485.f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderGoodsValue", hash5);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_30))
		Global_1144485.f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderGoodsMaximum", Global_1901671.f_604.f_10);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_28))
	{
		hash = func_278(gangLeader);
		Global_1144485.f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderGoodsColorID", hash);
	}

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_29))
	{
		hash3 = func_279(gangLeader);
		Global_1144485.f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144485.f_21, "TraderGoodsThresholdValue", hash3);
	}

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144485.f_31))
		Global_1144485.f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1144485.f_21, "TraderGoodsShowCash", false);

	return;
}

BOOL func_151(Player plParam0) // Position - 0x5039 Hash - 0xB411A53F ^0xBC859B3B
{
	return NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && func_155(plParam0, 1);
}

BOOL func_152() // Position - 0x5053 Hash - 0x11039CF6 ^0xA87115C2
{
	Hash hash;

	hash = func_178(-1364613333, 0, true, -1, true);

	if (hash == 0)
		return false;

	return func_285(-1364613333, hash, false);
}

void func_153(var uParam0, BOOL bParam1) // Position - 0x5080 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_159(uParam0))
		func_284(uParam0);

	return;
}

BOOL func_154() // Position - 0x50A0 Hash - 0x5A026425 ^0xD8400EED
{
	int num;

	if (!func_286())
		func_158(4);
	else
		func_172(4);

	if (func_268(PLAYER::PLAYER_ID()) < 200)
	{
		if (!func_155(Global_1295666, 2))
		{
			func_157("TRADER_HALT_REASON_MATERIALS_EMPTY", joaat("butcher_table_raw_materials"));
			func_158(2);
		}
	}
	else
	{
		func_172(2);
	}

	if (func_269(PLAYER::PLAYER_ID()) >= Global_1901671.f_604.f_10)
	{
		if (!func_155(Global_1295666, 128))
		{
			func_157("TRADER_HALT_REASON_SELL_GOODS", joaat("butcher_table_goods"));
			func_158(128);
		}
	}
	else
	{
		func_172(128);
	}

	num = func_216(PLAYER::PLAYER_ID());

	if (func_193(num, 512))
	{
		if (!func_155(Global_1295666, 16))
		{
			func_157("TRADER_HALT_REASON_CRIPPS_INJURED", joaat("butcher_table_production"));
			func_158(16);
		}
	}
	else
	{
		func_172(16);
	}

	if (func_155(Global_1295666, 4) || func_155(Global_1295666, 2) || func_155(Global_1295666, 128) || func_155(Global_1295666, 16))
		return false;

	return true;
}

BOOL func_155(Player plParam0, int iParam1) // Position - 0x51AF Hash - 0x30041406 ^0xDA91DCEC
{
	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	return func_65(Global_1144526[plParam0 /*83*/].f_74, iParam1);
}

int func_156(Player plParam0) // Position - 0x51DD Hash - 0xF9EEB380 ^0x9D4F7552
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	player = plParam0;
	return Global_1144526[player /*83*/].f_74.f_5;
}

void func_157(char* sParam0, int iParam1) // Position - 0x5203 Hash - 0x75E56D75 ^0xE6B12468
{
	int num;

	if (!func_287())
		return;

	num.f_8 = joaat("COLOR_WHITE");
	num.f_11 = joaat("COLOR_WHITE");
	num.f_12 = 8000;
	num.f_13 = 1511356879;
	num.f_15 = joaat("player_menu");
	num.f_21 = 1;
	num = 5;
	num.f_2 = MISC::VAR_STRING(2, "TRADER_CRIPPS_TITLE");
	num.f_3 = MISC::VAR_STRING(2, sParam0);
	num.f_7 = iParam1;
	num.f_6 = joaat("toasts_mp_generic");
	num.f_8 = joaat("COLOR_WHITE");
	num.f_4 = "TRADER_HOLD_INPUT_FOR_CAMP";
	num.f_18 = 0;
	num.f_17 = 0;
	num.f_13 = 863036578;
	num.f_16 = 0;
	num.f_14 = 0;
	func_288(&num);
	return;
}

void func_158(int iParam0) // Position - 0x52AE Hash - 0x3FDAEC5F ^0xDBF653EA
{
	if (!func_65(Global_1144526[Global_1295666 /*83*/].f_74, iParam0))
	{
		func_45(&(Global_1144526[Global_1295666 /*83*/].f_74), iParam0);
		Global_1144485.f_32 = Global_1144526[Global_1295666 /*83*/].f_74;
	}

	return;
}

BOOL func_159(var uParam0) // Position - 0x52F0 Hash - 0x5001E582 ^0x5001E582
{
	return func_289(*uParam0, 1);
}

int func_160(var uParam0) // Position - 0x5300 Hash - 0xCB0C9F2B ^0x95CAE221
{
	if (!func_159(uParam0))
		return 0;

	if (func_290(uParam0))
		return uParam0->f_2;

	return func_291(uParam0->f_1);
}

BOOL func_161() // Position - 0x5331 Hash - 0xDE99EE95 ^0xCF671D33
{
	if (func_165(&Global_1144485, -735397297, 1, true, -489628648, -1, true))
	{
		if (func_163(&Global_1144485))
		{
			TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(Global_1144485.f_1, joaat("st_camp_butchertable"), joaat("shop_camp_butchertable"));
			func_153(&(Global_1144485.f_15), true);
			return true;
		}
	}

	return false;
}

int func_162(int* piParam0) // Position - 0x5381 Hash - 0xAC4ACAD7 ^0x53A8C861
{
	return func_292(piParam0->f_1);
}

BOOL func_163(int* piParam0) // Position - 0x5391 Hash - 0xF95E1119 ^0x322602AD
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_162(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

Hash func_164(Hash hParam0, Hash hParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x53C3 Hash - 0xCDB1D438 ^0x68DA4897
{
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (!func_203(hParam0, 0))
		return 0;

	if (func_293(hParam0) || func_272(hParam0, 1077060302))
		return func_178(func_294(hParam0, false), hParam1, bParam2, iParam3, func_295(hParam0));

	if (func_296(hParam0, bParam4) || func_297(hParam0))
	{
		hParam1 = 997808187;
	}
	else if (func_295(hParam0) && func_298(hParam0, &hash) || func_299(hParam0, &hash))
	{
		hParam1 = hash;
	}
	else
	{
		flag = func_300(hParam0, -570078785);
		flag2 = func_300(hParam0, -915411861);
	
		if (flag && !flag2)
			hParam1 = -570078785;
		else if (flag2 && flag)
			if (func_301())
				hParam1 = -570078785;
			else
				hParam1 = -915411861;
		else if (flag2)
			hParam1 = -915411861;
		else if (func_302(15) && func_300(hParam0, 369710026))
			hParam1 = 369710026;
		else
			hParam1 = 0;
	}

	if (hParam1 == 0 && bParam2)
		return -915411861;

	return hParam1;
}

BOOL func_165(int* piParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x54FF Hash - 0x95A0423E ^0x64659D01
{
	var unk;
	var unk18;
	Hash hash;

	func_303(&hParam1);

	if (func_293(hParam1))
		return func_179(piParam0, func_294(hParam1, true), 1, 1, bParam3, 0, hParam4, iParam5, func_295(hParam1));
	else if (hParam1 == 757274294)
		return func_179(piParam0, 1776861510, 1, 1, bParam3, 0, -570078785, iParam5, func_295(hParam1));

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk18 = { func_304(hParam1, true, 1) };

	if (func_305(hParam1, &hash))
		return func_179(piParam0, hash, iParam2, 1, bParam3, 0, 0, iParam5, false);

	if (func_306(hParam1))
		if (!func_307(piParam0, hParam1, unk18, iParam2, &unk, hParam4, iParam5, bParam3))
			return false;
	else if (!func_308(piParam0, hParam1, unk18, unk18.f_4, iParam2, &unk, bParam3, hParam4, iParam5, bParam6))
		return false;

	func_309(unk);
	return true;
}

int func_166(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x55FA Hash - 0x9CDB9FC2 ^0x9CDB9FC2
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_310(hParam0, hParam1, &unk, &num, true, false))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (func_311(unk[i /*2*/]))
			return unk[i /*2*/];
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

int func_167(Hash hParam0) // Position - 0x5664 Hash - 0xF26C980E ^0xAF65CF6E
{
	int num;
	var unk;
	var unk6;

	num = -1;

	if (!func_311(hParam0))
		return num;

	num = 74330131;
	unk = { func_304(hParam0, false, 0) };
	unk6 = { func_92(hParam0, unk, unk.f_4, false) };

	if (!func_312(&unk6))
		return -1;

	if (func_313(unk6))
		num = 90473367;

	return num;
}

void func_168(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x56C6 Hash - 0x4EE39F09 ^0x4C62B7DF
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

void func_169(int iParam0, BOOL bParam1) // Position - 0x5744 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_314(iParam0, &num, &num2);

	if (!func_315(iParam0, num, num2, bParam1))
		return;

	func_316(num, num2);
	return;
}

Hash func_170(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x5771 Hash - 0xC754D793 ^0x26C4E67C
{
	Hash inventoryItemCountWithGuid;
	var guid;

	if (!func_203(hParam0, 0))
		return 0;

	if (!bParam7 && func_317(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_92(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_201(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_201(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

void func_171(Hash hParam0) // Position - 0x57F0 Hash - 0xAAA55583 ^0x32878D3
{
	if (Global_1144526[Global_1295666 /*83*/].f_74.f_5 != hParam0)
		Global_1144526[Global_1295666 /*83*/].f_74.f_5 = hParam0;

	return;
}

void func_172(int iParam0) // Position - 0x581B Hash - 0xB00ACB4 ^0xD363716B
{
	if (func_65(Global_1144526[Global_1295666 /*83*/].f_74, iParam0))
	{
		func_43(&(Global_1144526[Global_1295666 /*83*/].f_74), iParam0);
		Global_1144485.f_32 = Global_1144526[Global_1295666 /*83*/].f_74;
	}

	return;
}

BOOL func_173(int iParam0, Any* panParam1) // Position - 0x585C Hash - 0x813C595 ^0xD1040CA0
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(iParam0, panParam1))
		return true;

	return false;
}

int func_174(int iParam0, var uParam1) // Position - 0x5874 Hash - 0x3981A86B ^0xEC8B4F83
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			*uParam1 = { Global_1292143.f_20.f_1[i /*21*/] };
			return 1;
		}
	}

	return 0;
}

int func_175(Hash hParam0) // Position - 0x58C7 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_318(hParam0);
}

int func_176(int iParam0) // Position - 0x58D5 Hash - 0xB8EC44B7 ^0x241D648F
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_post_office");
	
		case 2:
			return joaat("shop_asb_train_station");
	
		case 3:
			return 548657065;
	
		case 4:
			return 243086140;
	
		case 5:
			return joaat("shop_blk_bank");
	
		case 6:
			return joaat("shop_blk_general_store");
	
		case 7:
			return joaat("shop_blk_gunsmith");
	
		case 8:
			return joaat("shop_blk_barber");
	
		case 9:
			return joaat("shop_blk_butcher");
	
		case 10:
			return joaat("shop_blk_bartender");
	
		case 11:
			return joaat("SHOP_BLK_PIANIST");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
	
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
	
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
	
		case 19:
			return joaat("shop_blk_tailor");
	
		case 20:
			return joaat("shop_moonshine_still");
	
		case 21:
			return joaat("shop_moonshine_still");
	
		case 22:
			return joaat("shop_emr_fence");
	
		case 23:
			return joaat("shop_emr_general_store");
	
		case 24:
			return joaat("shop_emr_post_office");
	
		case 25:
			return joaat("shop_emr_train_station");
	
		case 26:
			return joaat("shop_lag_bait_store");
	
		case 27:
			return joaat("shop_rgg_post_office");
	
		case 28:
			return joaat("shop_rgg_train_station");
	
		case 29:
			return joaat("shop_rho_bank");
	
		case 30:
			return joaat("shop_rho_butcher");
	
		case 31:
			return joaat("shop_rho_fence");
	
		case 32:
			return joaat("shop_moonshine_still");
	
		case 33:
			return joaat("shop_rho_general_store");
	
		case 34:
			return joaat("shop_rho_gunsmith");
	
		case 35:
			return joaat("shop_rho_post_office");
	
		case 36:
			return joaat("shop_rho_bartender");
	
		case 37:
			return joaat("SHOP_RHO_PIANIST");
	
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
	
		case 39:
			return joaat("shop_rho_train_station");
	
		case 40:
			return -305029900;
	
		case 41:
			return joaat("shop_scm_horse_shop");
	
		case 42:
			return joaat("shop_sdn_bank");
	
		case 43:
			return joaat("shop_sdn_barber");
	
		case 44:
			return joaat("shop_sdn_butcher");
	
		case 45:
			return joaat("shop_sdn_doctor");
	
		case 46:
			return joaat("shop_sdn_fence");
	
		case 47:
			return joaat("shop_moonshine_still");
	
		case 48:
			return joaat("shop_sdn_general_store");
	
		case 49:
			return joaat("shop_sdn_gunsmith");
	
		case 50:
			return joaat("shop_sdn_horse_shop");
	
		case 51:
			return joaat("shop_sdn_post_office");
	
		case 52:
			return joaat("shop_sdn_train_station");
	
		case 53:
			return joaat("shop_sdn_tailor");
	
		case 54:
			return joaat("shop_sdn_bartender");
	
		case 55:
			return joaat("SHOP_SDN_PIANIST");
	
		case 56:
			return joaat("shop_sdn_bartender_slum");
	
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
	
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
	
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
	
		case 60:
			return joaat("shop_sdn_photo_studio");
	
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
	
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
	
		case 63:
			return joaat("shop_sdn_trapper");
	
		case 64:
			return 878376253;
	
		case 65:
			return 1388932648;
	
		case 66:
			return -2076086367;
	
		case 67:
			return 1529797091;
	
		case 68:
			return joaat("shop_str_butcher");
	
		case 69:
			return joaat("shop_str_general_store");
	
		case 70:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 71:
			return joaat("shop_str_horse_shop");
	
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
	
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
	
		case 74:
			return joaat("shop_str_post_office");
	
		case 75:
			return joaat("shop_str_bartender");
	
		case 76:
			return 1008537949;
	
		case 77:
			return joaat("shop_val_bank");
	
		case 78:
			return joaat("shop_val_barber");
	
		case 79:
			return joaat("shop_val_bartender");
	
		case 80:
			return joaat("SHOP_VAL_PIANIST");
	
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 82:
			return joaat("shop_val_butcher");
	
		case 83:
			return joaat("shop_val_doctor");
	
		case 84:
			return joaat("shop_val_general_store");
	
		case 85:
			return joaat("shop_val_gunsmith");
	
		case 86:
			return joaat("shop_val_horse_shop");
	
		case 87:
			return joaat("shop_val_post_office");
	
		case 88:
			return joaat("shop_val_train_station");
	
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
	
		case 90:
			return joaat("shop_val_hotel");
	
		case 91:
			return joaat("shop_val_bartender_slum");
	
		case 92:
			return joaat("shop_moonshine_still");
	
		case 93:
			return joaat("SHOP_VAN_FENCE");
	
		case 94:
			return joaat("shop_van_bartender");
	
		case 95:
			return joaat("SHOP_VAN_PIANIST");
	
		case 96:
			return joaat("shop_van_horse_shop");
	
		case 97:
			return joaat("shop_van_train_station");
	
		case 98:
			return joaat("shop_van_post_office");
	
		case 99:
			return joaat("shop_wal_general_store");
	
		case 100:
			return joaat("shop_wal_train_station");
	
		case 101:
			return joaat("shop_wal_post_office");
	
		case 102:
			return joaat("shop_tbl_general_store");
	
		case 103:
			return joaat("shop_tbl_gunsmith");
	
		case 104:
			return joaat("shop_tbl_butcher");
	
		case 105:
			return joaat("shop_tbl_bartender");
	
		case 106:
			return joaat("SHOP_TBL_PIANIST");
	
		case 107:
			return joaat("shop_tbl_horse_shop");
	
		case 108:
			return joaat("shop_amd_general_store");
	
		case 109:
			return joaat("shop_amd_honor_mp");
	
		case 110:
			return joaat("shop_amd_bartender");
	
		case 111:
			return joaat("shop_amd_post_office");
	
		case 112:
			return joaat("shop_amd_train_station");
	
		case 113:
			return joaat("shop_roj_honor_mp");
	
		case 114:
			return joaat("shop_boj_honor_mp");
	
		case 115:
			return joaat("shop_moonshine_still");
	
		case 116:
			return joaat("shop_ryc_fence");
	
		case 117:
			return joaat("shop_ben_post_office");
	
		case 118:
			return joaat("shop_ben_train_station");
	
		case 119:
			return joaat("shop_dynamic");
	
		case 120:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_val_coach");
	
		case 122:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 123:
			return joaat("shop_blk_coach");
	
		case 124:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 125:
			return joaat("shop_sdn_coach");
	
		case 126:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 127:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 128:
			return joaat("shop_van_coach");
	
		case 129:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 130:
			return joaat("shop_thl_fence");
	
		case 131:
			return joaat("shop_moonshine_still");
	
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
	
		case 133:
			return joaat("shop_wilderness_supplies");
	
		case 134:
			return -765151559;
	
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
	
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
	
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
	
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
	
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
	
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
	
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
	
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
	
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
	
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
	
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
	
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
	
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
	
		case 148:
			return 1239556700;
	
		case 149:
			return 1968750441;
	
		case 150:
			return 317019665;
	
		case 151:
			return 1421441577;
	
		case 152:
			return joaat("shop_anywhere_handheld");
	
		case 153:
			return joaat("shop_camp_lockbox");
	
		case 154:
			return joaat("shop_camp_butchertable");
	
		case 155:
			return joaat("shop_bvh_doctor");
	
		case 156:
			return joaat("shop_bvh_general_store");
	
		case 157:
			return joaat("shop_bvh_gunsmith");
	
		case 158:
			return joaat("shop_bvh_horse_trainer");
	
		case 159:
			return joaat("shop_clm_doctor");
	
		case 160:
			return joaat("shop_clm_general_store");
	
		case 161:
			return joaat("shop_clm_gunsmith");
	
		case 162:
			return joaat("shop_clm_horse_trainer");
	
		case 163:
			return joaat("shop_clm_horse_fence");
	
		case 164:
			return joaat("shop_hso_doctor");
	
		case 165:
			return joaat("shop_hso_general_store");
	
		case 166:
			return joaat("shop_hso_gunsmith");
	
		case 167:
			return joaat("shop_hso_horse_trainer");
	
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 172:
			return joaat("shop_shb_doctor");
	
		case 173:
			return joaat("shop_shb_general_store");
	
		case 174:
			return joaat("shop_shb_gunsmith");
	
		case 175:
			return joaat("shop_shb_horse_trainer");
	
		case 176:
			return joaat("shop_weapon_mod_store");
	
		case 177:
			return joaat("shop_clothing");
	
		case 178:
			return joaat("shop_camp_shaving");
	
		case 179:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

void func_177(var uParam0) // Position - 0x62BD Hash - 0x46B3830A ^0x717D457A
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

Hash func_178(Hash hParam0, Hash hParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x62D3 Hash - 0x6E5FA253 ^0x344F4256
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_319(hParam0))
		return 0;

	flag = func_183(iParam3, 2);
	flag2 = func_320(hParam0, -570078785, flag);
	flag3 = func_320(hParam0, -915411861, flag);

	if (func_320(hParam0, 997808187, flag))
		hParam1 = 997808187;
	else if (bParam4 && func_321(hParam0, &num) || func_322(hParam0, &num))
		hParam1 = num;
	else if (flag2 && !flag3)
		hParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_301())
			hParam1 = -570078785;
		else
			hParam1 = -915411861;
	else if (flag3)
		hParam1 = -915411861;
	else if (func_302(15) && func_320(hParam0, 369710026, flag))
		hParam1 = 369710026;

	if (hParam1 == 0 && bParam2)
		return -915411861;

	return hParam1;
}

BOOL func_179(int* piParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4, int iParam5, Hash hParam6, int iParam7, BOOL bParam8) // Position - 0x63D8 Hash - 0xC3DA6F9B ^0xD9610032
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_9 = iParam2;
	unk.f_10 = iParam3;
	unk.f_14 = iParam5;

	if (!func_323(piParam0, hParam1, &unk, bParam4, hParam6, iParam7, bParam8))
		return 0;

	func_324(unk);
	return 1;
}

int func_180(Hash hParam0, Hash hParam1) // Position - 0x642B Hash - 0xC99DAA1A ^0x34467B57
{
	int i;
	Hash outData;
	int awardItemCount;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(hParam0))
		return 0;

	if (!func_203(hParam1, 0))
		return 0;

	awardItemCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(hParam0);

	for (i = 0; i < awardItemCount; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(hParam0, i, &outData))
		{
		}
		else if (outData == hParam1)
		{
			return outData.f_1;
		}
	}

	return 0;
}

Hash func_181(Player plParam0) // Position - 0x648B Hash - 0x444BF7D7 ^0x8FDBB14C
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1144526[plParam0 /*83*/].f_38.f_28;
}

Hash func_182(Player plParam0) // Position - 0x64B5 Hash - 0xA9CB276 ^0xD5300595
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1144526[plParam0 /*83*/].f_38.f_28.f_1;
}

BOOL func_183(int iParam0, int iParam1) // Position - 0x64E1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_184(int iParam0, int iParam1) // Position - 0x64F0 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_185() // Position - 0x6505 Hash - 0xC940893F ^0x57B15B41
{
	int num;
	int num2;
	var unk;
	int i;
	Hash hash;
	const char* str;
	int num3;
	BOOL flag;
	const char* str2;

	if (Global_1147183.f_339.f_16 == 0 || !UILOG::_UILOG_IS_ENTRY_REGISTERED(7, Global_1147183.f_339.f_16))
	{
		Global_1147183.f_339.f_16 = 0;
		return;
	}

	unk = 15;
	func_310(Global_1147183.f_339.f_16, Global_1147183.f_339.f_17, &unk, &num, true, false);

	for (i = 0; i < num; i = i + 1)
	{
		if (i >= 15)
			break;
	
		hash = unk[i /*2*/];
	
		if (func_203(hash, 0))
		{
			num3 = func_325(hash, false, false, false);
			str = MISC::VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", num3, unk[i /*2*/].f_1, MISC::VAR_STRING(0, hash));
			flag = func_204(hash, unk[i /*2*/].f_1);
		
			if (flag)
				num2 = num2 + 1;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, Global_1147183.f_339.f_16, hash, str, flag, true, true);
		}
	}

	str2 = MISC::VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", num2, num);
	UILOG::_0x763637F9B838B0A7(7, Global_1147183.f_339.f_16, str2);
	return;
}

BOOL func_186(Any* panParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6607 Hash - 0xB6837E65 ^0x89A4EFE4
{
	int fileHandle;

	if (uParam1.f_1 == 0)
		return false;

	fileHandle = func_326(uParam1.f_1);

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	*panParam0 = fileHandle;
	panParam0->f_2 = -80782076;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
		return false;

	return true;
}

BOOL func_187(int iParam0) // Position - 0x6661 Hash - 0xE68B8D2 ^0xE68B8D2
{
	int i;

	for (i = 0; i <= 5; i = i + 1)
	{
		if (Global_1142424.f_2020[i] == iParam0)
			return true;
	}

	return false;
}

Hash func_188(var uParam0, var uParam1, var uParam2) // Position - 0x6690 Hash - 0xAF70538B ^0xB9C3FCB7
{
	var unk;
	int num;

	if (!func_186(&unk, uParam0))
		return 0;

	unk.f_2 = 1462115960;
	unk.f_3 = uParam0.f_2;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 759645552;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	}

	return num;
}

BOOL func_189(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x66DC Hash - 0xEC0F6471 ^0xEC0F6471
{
	int num;

	num = uParam0;
	return iParam3 > num;
}

int func_190() // Position - 0x66F1 Hash - 0x9F572D68 ^0xA5BB6706
{
	return -1635525483;
}

BOOL func_191(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x66FE Hash - 0x6AD1C8E7 ^0x5D0B8410
{
	int i;
	Player player;
	Ped playerPed;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (func_327(player) == 4)
			{
			}
			else if (BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)) < Global_1901671.f_604)
			{
				return true;
			}
		}
	}

	return false;
}

BOOL func_192(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x675F Hash - 0xF2E4870E ^0x9DA1FC79
{
	int i;
	float num;
	Vector3 vector;
	int num2;

	if (_IS_NULL_VECTOR(vParam0))
		return true;

	if (iParam3 >= 0 && iParam3 < 32)
		num2 = Global_1144526[iParam3 /*83*/].f_33.f_3;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(Global_1141332[i /*27*/].f_20))
		{
			num = BUILTIN::VDIST(Global_1141332[i /*27*/].f_20, vParam0);
		
			if (num <= Global_1901671.f_604.f_3)
				return true;
		}
	
		if (Global_1141332.f_865[i /*7*/].f_4 != num2 && Global_1141332.f_865[i /*7*/].f_1.f_2 > 0 || Global_1141332.f_865[i /*7*/].f_1.f_2 < -2 && Global_1141332.f_865[i /*7*/] != -1 && Global_1141332.f_865[i /*7*/] != 6)
		{
			if (func_77(Global_1141332.f_865[i /*7*/].f_1, &vector) && !_IS_NULL_VECTOR(vector))
			{
				num = BUILTIN::VDIST(vector, vParam0);
			
				if (num <= Global_1901671.f_604.f_3)
					return true;
			}
		}
	}

	return false;
}

BOOL func_193(int iParam0, int iParam1) // Position - 0x6893 Hash - 0x3879E6F ^0xF8F6AC53
{
	if (!func_74(iParam0))
		return false;

	return func_65(Global_1141332[iParam0 /*27*/].f_7, iParam1);
}

BOOL func_194(var uParam0, Any anParam1, BOOL bParam2, var uParam3, int iParam4) // Position - 0x68B9 Hash - 0x3B2A325A ^0x5D73C4ED
{
	int numGangMembers;
	var unk;
	int randomIntInRange;
	BOOL num;
	Player gangLeader;

	numGangMembers = GANG::NETWORK_GET_NUM_GANG_MEMBERS(anParam1);
	unk = 50;

	if (*uParam0 < 4)
		*uParam0 = 4;
	else if (*uParam0 > 7)
		*uParam0 = 7;

	if (uParam0->f_2 == -2)
	{
		func_329(anParam1, *uParam0, uParam0->f_1, &unk, bParam2);
		uParam0->f_2 = func_330(&unk);
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		uParam0->f_1 = func_331(randomIntInRange, 1);
		func_329(anParam1, *uParam0, uParam0->f_1, &unk, bParam2);
		uParam0->f_2 = func_330(&unk);
	}

	*uParam3 = 0;
	num = 0;
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(anParam1);

	if (func_332(*uParam0, gangLeader, numGangMembers, bParam2))
		num = 1;
	else
		*iParam4 = *iParam4 + 1;

	return num;
}

Player func_195(int iParam0, int iParam1) // Position - 0x696F Hash - 0xFAD8B9B ^0xBBD39F74
{
	if (!func_74(iParam0))
	{
		iParam1 == 0;
		return 255;
	}

	return Global_1141332[iParam0 /*27*/].f_9;
}

BOOL func_196(var uParam0, var uParam1) // Position - 0x6996 Hash - 0x1E89677A ^0x2EE31D84
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

char* func_197() // Position - 0x69A4 Hash - 0x306ACA3A ^0x2B43730B
{
	return "net_camp";
}

char* func_198() // Position - 0x69B0 Hash - 0x306ACA3A ^0xC65B31B
{
	return "gfh_campworks";
}

void func_199(int iParam0) // Position - 0x69BC Hash - 0x46D59 ^0x4BAED643
{
	var unk;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141332[iParam0 /*27*/].f_9) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Global_1141332[iParam0 /*27*/].f_9) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Global_1141332[iParam0 /*27*/].f_9)))
	{
		Global_1141332[iParam0 /*27*/].f_23.f_1 = unk;
		Global_1141332[iParam0 /*27*/].f_23 = unk;
		return;
	}

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141332[iParam0 /*27*/].f_23.f_1))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1141332[iParam0 /*27*/].f_23.f_1);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141332[iParam0 /*27*/].f_23))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1141332[iParam0 /*27*/].f_23);

	Global_1141332[iParam0 /*27*/].f_23.f_1 = unk;
	Global_1141332[iParam0 /*27*/].f_23 = unk;
	return;
}

void func_200(int iParam0) // Position - 0x6A78 Hash - 0xADEC3E28 ^0x8B1486A5
{
	var unk;

	unk.f_9 = 255;
	unk.f_10 = 7;
	unk.f_10.f_1 = 255;
	unk.f_10.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	*iParam0 = { unk };
	return;
}

int func_201(BOOL bParam0) // Position - 0x6ACF Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_19() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_202() // Position - 0x6B10 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_203(Hash hParam0, int iParam1) // Position - 0x6B1C Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_204(Hash hParam0, int iParam1) // Position - 0x6B36 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_203(hParam0, 0))
		return false;

	num = func_333(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_335(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_334(hParam0, 1))
				return false;
			break;
	}

	return func_325(hParam0, false, false, false) >= iParam1;
}

int func_205(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x6BB9 Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_336(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

Vector3 func_206(int iParam0) // Position - 0x6BE7 Hash - 0xD853D669 ^0x22A7A43A
{
	if (!func_74(iParam0))
		return 0f, 0f, 0f;

	return Global_1141332[iParam0 /*27*/].f_20;
}

BOOL func_207(int iParam0) // Position - 0x6C0B Hash - 0x707AF47E ^0x707AF47E
{
	return !func_113(iParam0, 8);
}

int func_208(int iParam0, BOOL bParam1) // Position - 0x6C1C Hash - 0x2205EBDB ^0x393B34CC
{
	if (!func_74(iParam0))
	{
		!bParam1;
		return 0;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141332[iParam0 /*27*/].f_9))
	{
		!bParam1;
		return 0;
	}

	return GANG::NETWORK_GET_GANG_ID(Global_1141332[iParam0 /*27*/].f_9);
}

BOOL func_209(int iParam0) // Position - 0x6C62 Hash - 0xC86BC762 ^0xC86BC762
{
	return func_65(Global_1142424.f_2040, iParam0);
}

void func_210(int iParam0) // Position - 0x6C77 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1142424.f_2045 = iParam0;
	return;
}

int func_211(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x6C88 Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_337();

	if (func_338(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_339(vParam0, bParam3);
}

int func_212(BOOL bParam0) // Position - 0x6CD6 Hash - 0xA76EF84A ^0xA76EF84A
{
	if (bParam0)
		return 98;

	return 97;
}

Hash func_213(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x6CED Hash - 0x59B5D00 ^0x59B5D00
{
	Hash i;
	Hash hash;
	BOOL flag;

	if (iParam1 == 0)
		return -1;

	if (_IS_NULL_VECTOR(uParam2))
		return -1;

	hash = -1;
	flag = func_340(uParam2);

	for (i = 0; i < Global_17088; i = i + 1)
	{
		if (func_341(i) == 0 && hash == -1)
			hash = i;
		else if (func_341(i) == iParam1 && func_342(i) == iParam0 && flag == func_343(i))
			return i;
	}

	if (hash > -1 && hash < 250)
	{
		func_38(hash, iParam0);
		func_39(hash, iParam1);
		func_40(hash, flag);
		func_344(hash, iParam5);
		func_345(hash);
		MAP::SET_BLIP_FLASH_TIMER(Global_17088[hash], iParam1, func_346(iParam0, false));
		return hash;
	}

	return -1;
}

Hash func_214(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6DC8 Hash - 0xD47369EE ^0xB12DFF24
{
	switch (iParam0)
	{
		case joaat("hennigans_stead_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_HENNIGANS");
			
				return joaat("POSSE_MEMBER_CAMP_HENNIGANS");
			}
		
			return joaat("POSSE_RIVAL_CAMP_HENNIGANS");
	
		case joaat("rio_bravo_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_RIOBRAVO");
			
				return joaat("POSSE_MEMBER_CAMP_RIOBRAVO");
			}
		
			return joaat("POSSE_RIVAL_CAMP_RIOBRAVO");
	
		case joaat("roanoke_ridge_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_ROANOKE");
			
				return joaat("POSSE_MEMBER_CAMP_ROANOKE");
			}
		
			return joaat("POSSE_RIVAL_CAMP_ROANOKE");
	
		case joaat("great_plains_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_GREATPLAINS");
			
				return joaat("POSSE_MEMBER_CAMP_GREATPLAINS");
			}
		
			return joaat("POSSE_RIVAL_CAMP_GREATPLAINS");
	
		case joaat("cumberland_forest_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_CUMBERLAND");
			
				return joaat("POSSE_MEMBER_CAMP_CUMBERLAND");
			}
		
			return joaat("POSSE_RIVAL_CAMP_CUMBERLAND");
	
		case joaat("tall_trees_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_TALLTREES");
			
				return joaat("POSSE_MEMBER_CAMP_SCARLETT");
			}
		
			return joaat("POSSE_RIVAL_CAMP_SCARLETT");
	
		case joaat("cholla_springs_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_CHOLLASPRINGS");
			
				return joaat("POSSE_MEMBER_CAMP_CHOLLASPRINGS");
			}
		
			return joaat("POSSE_RIVAL_CAMP_CHOLLASPRINGS");
	
		case joaat("grizzlies_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_GRIZZLIES");
			
				return joaat("POSSE_MEMBER_CAMP_GRIZZLIES");
			}
		
			return joaat("POSSE_RIVAL_CAMP_GRIZZLIES");
	
		case joaat("gaptooth_ridge_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_GAPTOOTH");
			
				return joaat("POSSE_MEMBER_CAMP_GAPTOOTH");
			}
		
			return joaat("POSSE_RIVAL_CAMP_GAPTOOTH");
	
		case joaat("bayou_nawas_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_BAYOU");
			
				return joaat("POSSE_MEMBER_CAMP_BAYOU");
			}
		
			return joaat("POSSE_RIVAL_CAMP_BAYOU");
	
		case joaat("scarlett_meadows_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_SCARLETT");
			
				return joaat("POSSE_MEMBER_CAMP_SCARLETT");
			}
		
			return joaat("POSSE_RIVAL_CAMP_SCARLETT");
	
		case joaat("heartland_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_HEARTLANDS");
			
				return joaat("POSSE_MEMBER_CAMP_HEARTLANDS");
			}
		
			return joaat("POSSE_RIVAL_CAMP_HEARTLANDS");
	
		case joaat("big_valley_camp"):
			if (bParam1)
			{
				if (bParam2)
					return joaat("POSSE_LEADER_CAMP_BIGVALLEY");
			
				return joaat("POSSE_MEMBER_CAMP_BIGVALLEY");
			}
		
			return joaat("POSSE_RIVAL_CAMP_BIGVALLEY");
	
		default:
		
	}

	return 0;
}

BOOL func_215(int iParam0) // Position - 0x6FE1 Hash - 0x95949A ^0x95949A
{
	return func_193(iParam0, 16) && !func_193(iParam0, 32);
}

int func_216(Player plParam0) // Position - 0x6FFF Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

struct<2> func_217(int iParam0) // Position - 0x702F Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_218(int iParam0, int iParam1) // Position - 0x7043 Hash - 0x7866E12A ^0x7F5F164B
{
	if (!func_74(iParam0))
		return;

	if (!func_113(iParam0, iParam1))
		func_45(&Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0], iParam1);

	return;
}

void func_219(int iParam0, int iParam1) // Position - 0x7078 Hash - 0x14B9393E ^0x80A920B0
{
	if (!func_74(iParam0))
		return;

	if (func_113(iParam0, iParam1))
		func_43(&Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0], iParam1);

	return;
}

void func_220(int iParam0) // Position - 0x70AC Hash - 0xEEF1DF33 ^0xEEF1DF33
{
	if (!func_74(iParam0))
		return;

	func_347(iParam0, true);
	return;
}

void func_221(int iParam0) // Position - 0x70C8 Hash - 0x53B9F48A ^0x53B9F48A
{
	if (!func_74(iParam0))
		return;

	func_347(iParam0, false);
	return;
}

void func_222(int iParam0) // Position - 0x70E4 Hash - 0xDAB8E220 ^0x16F67260
{
	var unk;

	func_125(8);
	func_223(4);
	unk.f_8 = iParam0;
	func_283(3, unk, func_348(0, 8));
	return;
}

void func_223(int iParam0) // Position - 0x710E Hash - 0x44C39101 ^0x6523B470
{
	func_45(&(Global_1147183.f_8), iParam0);
	return;
}

BOOL func_224(int iParam0, int iParam1) // Position - 0x7122 Hash - 0x5B66226C ^0x8345862F
{
	if (!func_74(iParam0))
		return false;

	return func_65(Global_1142424.f_1[iParam0 /*63*/].f_61, iParam1);
}

void func_225(int iParam0) // Position - 0x714A Hash - 0x27D54C69 ^0xA7DAFA15
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	unk = { Global_1141332[iParam0 /*27*/].f_1 };
	!func_349(unk, &(Global_1142424.f_1[iParam0 /*63*/].f_7), &(Global_1142424.f_1[iParam0 /*63*/].f_47));
	!func_350(unk, &(Global_1142424.f_1[iParam0 /*63*/].f_10), &(Global_1142424.f_1[iParam0 /*63*/].f_48));
	return;
}

void func_226(int iParam0) // Position - 0x71BF Hash - 0x90D50EB8 ^0xFAD1B95A
{
	var unk;
	int i;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	unk = { Global_1141332[iParam0 /*27*/].f_1 };

	for (i = 0; i <= 6; i = i + 1)
	{
		!func_351(unk, i, &Global_1142424.f_1[iParam0 /*63*/].f_13[i /*3*/], &Global_1142424.f_1[iParam0 /*63*/].f_49[i]);
	}

	return;
}

void func_227(int iParam0) // Position - 0x722C Hash - 0x27D54C69 ^0xA7DAFA15
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	unk = { Global_1141332[iParam0 /*27*/].f_1 };
	!func_352(unk, &(Global_1142424.f_1[iParam0 /*63*/].f_35), &(Global_1142424.f_1[iParam0 /*63*/].f_57));
	return;
}

void func_228(int iParam0) // Position - 0x727D Hash - 0x27D54C69 ^0xA7DAFA15
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	unk = { Global_1141332[iParam0 /*27*/].f_1 };
	!func_353(unk, &(Global_1142424.f_1[iParam0 /*63*/].f_38), &(Global_1142424.f_1[iParam0 /*63*/].f_58));
	return;
}

void func_229(int iParam0) // Position - 0x72CE Hash - 0x27D54C69 ^0xA7DAFA15
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	unk = { Global_1141332[iParam0 /*27*/].f_1 };
	!func_354(unk, &(Global_1142424.f_1[iParam0 /*63*/].f_41), &(Global_1142424.f_1[iParam0 /*63*/].f_59));
	return;
}

void func_230(int iParam0) // Position - 0x731F Hash - 0x27D54C69 ^0xA7DAFA15
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	unk = { Global_1141332[iParam0 /*27*/].f_1 };
	!func_355(unk, &(Global_1142424.f_1[iParam0 /*63*/].f_44), &(Global_1142424.f_1[iParam0 /*63*/].f_60));
	return;
}

void func_231(int iParam0, int iParam1) // Position - 0x7370 Hash - 0x244DB961 ^0xDFDF891F
{
	if (!func_74(iParam0))
		return;

	if (!func_65(Global_1142424.f_1[iParam0 /*63*/].f_61, iParam1))
		func_45(&(Global_1142424.f_1[iParam0 /*63*/].f_61), iParam1);

	return;
}

void func_232(int iParam0, int iParam1) // Position - 0x73AD Hash - 0x1A020288 ^0x11EA518A
{
	if (func_74(iParam0))
		Global_1142424.f_1[iParam0 /*63*/].f_4 = iParam1;

	return;
}

BOOL func_233(int iParam0) // Position - 0x73CC Hash - 0xBDEEF039 ^0x75FE32C1
{
	struct<4> args;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, true, 0))
		return true;

	if (SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2055) || SCRIPTS::IS_THREAD_ACTIVE(Global_1142424.f_2055, false))
		return false;

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6700) <= 0)
		return false;

	args.f_3 = iParam0;
	args = { func_356(iParam0) };
	SCRIPTS::REQUEST_SCRIPT(func_197());

	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_197()))
		return false;

	Global_1142424.f_2055 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_197(), &args, 4, 6700);
	Global_1142424.f_2056 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_197());
	return true;
}

BOOL func_234(int iParam0) // Position - 0x7469 Hash - 0x6D364142 ^0x8DBDA7DB
{
	struct<4> args;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_198(), iParam0, true, 0))
		return true;

	if (SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2057) || SCRIPTS::IS_THREAD_ACTIVE(Global_1142424.f_2057, false))
		return false;

	args.f_3 = iParam0;
	args = { func_356(iParam0) };

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(3081) <= 0)
		return false;

	SCRIPTS::REQUEST_SCRIPT(func_198());

	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_198()))
		return false;

	Global_1142424.f_2057 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_198(), &args, 4, 3081);
	Global_1142424.f_2058 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_198());
	return true;
}

void func_235(int iParam0) // Position - 0x7506 Hash - 0xC8446C5 ^0xC8446C5
{
	var unk;

	*iParam0 = unk;
	return;
}

int func_236(Player plParam0) // Position - 0x7513 Hash - 0xC91C7790 ^0xF91500D
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -1;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141332.f_1091), plParam0))
		return -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == plParam0 && Global_1141332[i /*27*/] != 3)
			return i;
	}

	return -1;
}

void func_237(int iParam0) // Position - 0x7576 Hash - 0x73FA2F26 ^0x304B7F5E
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1144526[player /*83*/].f_38.f_3 = iParam0;
	return;
}

struct<20> func_238(BOOL bParam0) // Position - 0x7592 Hash - 0x8A06BFA3 ^0xAF9813C9
{
	var unk;
	var guid;
	var unk24;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	guid = { func_92(joaat("kit_camp"), func_91(true), joaat("SLOTID_SATCHEL"), true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return unk;

	unk24.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(true), &guid, &unk24, 17, 1))
		return unk;

	unk = { func_357(&unk24, bParam0) };
	unk.f_18 = unk24.f_15;
	unk.f_19 = unk24.f_16;
	unk.f_17 = unk24.f_14;
	return unk;
}

int func_239() // Position - 0x762E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_240(var uParam0, var uParam1, var uParam2) // Position - 0x763D Hash - 0x41EEC091 ^0x13C46985
{
	int i;
	Hash hash;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_1556.f_44.f_66, func_358(uParam0.f_1, false));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_1556.f_44.f_67, MISC::VAR_STRING(2, "NM_CAMP_SIZE_VALUE", uParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_1556.f_44.f_68, func_359(uParam0));

	for (i = 0; i < 13; i = i + 1)
	{
		hash = DATABINDING::_DATABINDING_READ_HASH(Global_1940252.f_1556.f_2385.f_50[i /*27*/]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_2385.f_50[i /*27*/].f_1.f_22, hash == uParam0.f_1);
	}

	return;
}

BOOL func_241(int iParam0, Player plParam1) // Position - 0x76D4 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (plParam1 == 255)
		return func_360(&(Global_1102813.f_4), num, 5);

	if (plParam1 == func_239())
		return func_360(&(Global_1102813.f_4), num, 5);

	if (plParam1 < 0 || plParam1 >= 32)
		return false;

	if (Global_1295666.f_17[plParam1])
		return func_360(&(Global_1101558[plParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_242(int iParam0, int iParam1) // Position - 0x7748 Hash - 0x5D65A4D7 ^0x7C5646CA
{
	Any gangId;

	if (!func_361() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_42(16))
		return false;

	if (func_56())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_362())
		return false;

	if (func_30(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_65(Global_1147183.f_8, 1))
		return false;

	if (func_363())
		return false;

	return true;
}

BOOL func_243() // Position - 0x7808 Hash - 0x8B32B075 ^0x56754651
{
	return func_65(Global_1147183.f_8, 2);
}

BOOL func_244(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x781B Hash - 0xF13F8B12 ^0xF2C3F8F6
{
	if (iParam0 < 4)
		iParam0 = 4;

	if (!func_242(0, 1))
		return false;

	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { iParam0 };
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_247();

	if (iParam3 == 1)
	{
		func_134(2);
	}
	else
	{
		Global_1147183.f_330.f_6 = 1;
		func_364(2);
	}

	if (!func_76(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_364(8);
		func_18();
	}

	if (!func_122(4) && func_122(8) || func_122(16))
		func_134(4);
	else
		func_364(4);

	if (func_65(Global_1147183.f_8, 1))
		func_134(1);
	else
		func_364(1);

	func_63(6);
	return true;
}

BOOL func_245(Any anParam0) // Position - 0x78E8 Hash - 0x1BED13A8 ^0xB3AE4D14
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
			unk = { func_365(gangLeader) };
		
			for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
			{
				if (POSSE::_0xC084FF658B2E81DA(&unk, i, &num2) && num2 != 0 && num2.f_9 == 1)
					return true;
			}
		}
	}

	return false;
}

BOOL func_246(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x7974 Hash - 0x810597D8 ^0x9CF66DAB
{
	if (func_366())
		return false;

	if (func_367(uParam0.f_1, uParam0))
		return false;

	if (!func_242(iParam3, 1))
		return false;

	if (func_117())
		return false;

	if (func_42(64))
		if (!func_369(func_368(uParam0), 1, 59806960))
			return false;

	return true;
}

void func_247() // Position - 0x79D4 Hash - 0x4A56EA1C ^0xCB0E5F03
{
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
	return;
}

void func_248(int iParam0, var uParam1, var uParam2) // Position - 0x79EB Hash - 0xD63D8AB6 ^0x8D81051C
{
	int num;

	Global_17418.f_55.f_4 = iParam0;
	Global_17418.f_55.f_4.f_1 = iParam0.f_1;
	Global_17418.f_55.f_4.f_2 = iParam0.f_2;

	if (!func_204(joaat("kit_camp"), 1))
		return;

	if (iParam0.f_2 != 0 && iParam0 > 0)
	{
		num = { func_115() };
	
		if (num.f_2 == iParam0.f_2 && num.f_1 == iParam0.f_1 && num == iParam0)
			return;
	
		func_370(iParam0, true) == -1;
	}

	return;
}

int func_249() // Position - 0x7A75 Hash - 0x9F572D68 ^0x7E329834
{
	return -1727708451;
}

void func_250(var uParam0, var uParam1, var uParam2) // Position - 0x7A82 Hash - 0xA0BB07E3 ^0x5E5DD8AC
{
	Global_1144526[func_239() /*83*/].f_38.f_4 = { uParam0 };
	return;
}

void func_251(int iParam0) // Position - 0x7A9E Hash - 0xA3B4FA66 ^0xC2C3DCF
{
	Global_1144526[func_239() /*83*/].f_38.f_11 = iParam0;
	return;
}

int func_252(int iParam0) // Position - 0x7AB6 Hash - 0xA9CB276 ^0x6748D4BB
{
	if (iParam0 < 0 || iParam0 >= 32)
		return 0;

	return Global_1144526[iParam0 /*83*/].f_38.f_12.f_10;
}

void func_253(Any anParam0, int iParam1) // Position - 0x7AE2 Hash - 0xEA023AFE ^0xD31D93C6
{
	if (iParam1 > 7)
		return;

	if (GANG::NETWORK_IS_GANG_ID_VALID(anParam0) && GANG::NETWORK_IS_GANG_ACTIVE(anParam0) && GANG::NETWORK_GET_GANG_LEADER(anParam0) == PLAYER::PLAYER_ID())
	{
		if (GANG::_NETWORK_GET_GANG_SIZE(anParam0) == iParam1)
			return;
	
		GANG::_NETWORK_SET_GANG_SIZE(iParam1);
	}

	return;
}

int func_254() // Position - 0x7B2F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_255() // Position - 0x7B3B Hash - 0xE9860721 ^0xB6B78082
{
	Player player;
	int num;
	int i;
	BOOL flag;

	if (Global_1142424.f_2048 < 10)
	{
		Global_1142424.f_2048 = Global_1142424.f_2048 + 1;
	}
	else
	{
		Global_1142424.f_2048 = 0;
		player = PLAYER::PLAYER_ID();
		num = func_216(player);
	
		if (num >= 0 && num <= 31)
		{
			i = 0;
		
			for (i = 0; i < Global_1144526[player /*83*/].f_38; i = i + 1)
			{
				if (Global_1141332[num /*27*/].f_10[i] == player)
				{
					flag = true;
					break;
				}
			}
		
			if (flag)
			{
				if (i != Global_1144526[player /*83*/].f_38.f_7)
				{
					func_371(i, Global_1142424.f_1[num /*63*/].f_13[i /*3*/]);
					func_31(16384);
				}
				else if (func_42(8192))
				{
					func_371(i, Global_1142424.f_1[num /*63*/].f_13[i /*3*/]);
					func_31(16384);
					func_28(8192);
				}
			}
		}
	}

	return;
}

void func_256(int iParam0) // Position - 0x7C28 Hash - 0x7B0B0304 ^0xC6DFEFCC
{
	int num;
	Hash hash;

	if (Global_1142424.f_2027.f_5 == 0)
		return;

	if (!func_42(64))
		if (Global_1142424.f_2027.f_5 != 0)
			func_128(0);
	else if (func_74(iParam0))
		num = { Global_1141332[iParam0 /*27*/].f_1 };
	else if (Global_1142424.f_2027.f_5 != 0)
		func_128(0);

	switch (Global_1142424.f_2027.f_5)
	{
		case 1:
			hash = func_368(num);
		
			if (!func_369(hash, 1, 59806960))
			{
				func_127();
				func_128(0);
			}
			else
			{
				func_128(2);
			}
			break;
	
		case 2:
			hash = func_368(num);
		
			if (!func_372(Global_1142424.f_2027.f_6))
			{
				Global_1142424.f_2027.f_6 = func_373(hash, "NET_CAMP_PC", 1, true, false, 59806960);
				func_128(3);
			}
			break;
	
		case 3:
			if (!func_372(Global_1142424.f_2027.f_6))
			{
				func_374(iParam0);
				func_128(0);
			}
			break;
	}

	return;
}

void func_257(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x7D36 Hash - 0x9B8595CE ^0xCB89C7E7
{
	Hash hash;
	int num;

	if (func_241(146, PLAYER::PLAYER_ID()))
		return;

	num = func_254();

	switch (Global_1142424.f_2027.f_7)
	{
		case 0:
			if (!func_42(64))
			{
				func_118(4);
				return;
			}
		
			if (Global_1141332[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID() && Global_1142424.f_2027.f_4 != -15)
				if (func_375(num) != func_375(Global_1142424.f_2027.f_4))
					if (func_376(num) >= func_376(Global_1142424.f_2027.f_4))
						func_118(1);
			break;
	
		case 1:
			hash = func_377(iParam1);
		
			if (func_369(hash, 1, 59806960))
			{
				if (!func_372(Global_1142424.f_2027.f_8))
				{
					func_382(&(Global_1142424.f_2027.f_4), func_378(num), func_379(num), func_376(num), func_375(num), func_380(num), func_381(num));
					Global_1142424.f_2027.f_8 = func_373(hash, "NET_CAMP_DC", 1, true, false, 59806960);
					func_118(2);
				}
			}
			else
			{
				func_137("NET_CAMP_DF", 10000, 0, 0, 0, true);
				func_118(3);
			}
			break;
	
		case 2:
			if (!func_372(Global_1142424.f_2027.f_8))
				func_118(0);
			break;
	
		case 3:
			hash = func_377(iParam1);
		
			if (func_369(hash, 1, 59806960) && !func_372(Global_1142424.f_2027.f_8))
				func_118(1);
			break;
	
		case 4:
			if (func_42(64))
			{
				Global_1142424.f_2027.f_4 = num;
				func_118(0);
			}
			break;
	}

	return;
}

void func_258(int iParam0) // Position - 0x7EE6 Hash - 0x2542B8C4 ^0x86023E2C
{
	int num;
	var outTime;
	Player player;
	int num2;
	var timeToAdd;
	var unk13;
	int num3;
	int endRange;
	int randomIntInRange;
	int num4;

	if (Global_1141332[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
		return;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (Global_1144526[num /*83*/].f_38.f_28 != Global_1147183.f_339)
		Global_1144526[num /*83*/].f_38.f_28 = Global_1147183.f_339;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);

	if (MISC::GET_FRAME_COUNT() % 60 == 0)
	{
		player = func_383();
		num2 = func_384();
	
		if (player != 255)
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) || GANG::NETWORK_GET_GANG_ID(player) != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) || num2 != -1 && MISC::GET_GAME_TIMER() - num2 > 5000)
				func_385(PLAYER::PLAYER_ID(), true);
	}

	if (Global_1147183.f_339.f_2 != -1 && !func_386(outTime, Global_1147183.f_339.f_2))
		return;

	timeToAdd.f_3 = 2;
	timeToAdd.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&outTime, &timeToAdd, &outTime);
	Global_1147183.f_339.f_2 = { outTime };
	unk13 = { func_387(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, -2011345500, 0) };

	if (func_388(unk13, &num3, &endRange, 0))
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
		num4 = func_389(randomIntInRange, num3);
	
		if (num4 == func_181(num))
		{
			randomIntInRange = func_390(0, endRange, randomIntInRange);
			num4 = func_389(randomIntInRange, num3);
		}
	
		func_391(num, num4);
		func_392(num3);
	}

	return;
}

void func_259(int iParam0) // Position - 0x8057 Hash - 0x1D20F79D ^0x87D215F
{
	int num;
	var outTime;

	if (Global_1141332[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
		return;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (Global_1144526[num /*83*/].f_38.f_28.f_1 != Global_1147183.f_339.f_1)
		Global_1144526[num /*83*/].f_38.f_28.f_1 = Global_1147183.f_339.f_1;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);

	if (Global_1147183.f_339.f_9 == -1 || !func_386(outTime, Global_1147183.f_339.f_9))
		return;

	Global_1147183.f_339.f_9 = -1;
	Global_1144526[num /*83*/].f_38.f_28.f_1 = 1046181202;
	Global_1147183.f_339.f_1 = 1046181202;
	return;
}

BOOL func_260() // Position - 0x8106 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

char* func_261(Player plParam0) // Position - 0x8115 Hash - 0x86775D95 ^0x73217E5B
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return "";

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return "";

	player = plParam0;

	if (player < 0 || player >= 32)
		return "";

	return func_393(player);
}

const char* func_262(char* sParam0, int iParam1) // Position - 0x815F Hash - 0x7FAD1594 ^0x5C844E77
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_394(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

BOOL func_263() // Position - 0x819D Hash - 0x37148BE7 ^0x6951DC25
{
	return func_204(joaat("upgrade_camp_butcher_table"), 1);
}

void func_264(int iParam0) // Position - 0x81AF Hash - 0x9674E10C ^0x81955E53
{
	if (iParam0 < 0)
		iParam0 = 0;

	if (iParam0 > Global_1901671.f_604.f_9)
		iParam0 = Global_1901671.f_604.f_9;

	if (Global_1144526[Global_1295666 /*83*/].f_74.f_2 != iParam0)
		Global_1144526[Global_1295666 /*83*/].f_74.f_2 = iParam0;

	return;
}

void func_265(int iParam0) // Position - 0x81FC Hash - 0x9674E10C ^0x80EF8998
{
	if (iParam0 < 0)
		iParam0 = 0;

	if (iParam0 > Global_1901671.f_604.f_10)
		iParam0 = Global_1901671.f_604.f_10;

	if (Global_1144526[Global_1295666 /*83*/].f_74.f_3 != iParam0)
		Global_1144526[Global_1295666 /*83*/].f_74.f_3 = iParam0;

	return;
}

int func_266() // Position - 0x8249 Hash - 0xEEF12F17 ^0x69F9B9D0
{
	int num;
	Any gangId;
	Player gangLeader;
	Player player;

	num = 0;

	if (func_204(joaat("upgrade_camp_delivery_wagon_large"), 1))
		num = joaat("upgrade_camp_delivery_wagon_large");
	else if (func_204(joaat("upgrade_camp_delivery_wagon_medium"), 1))
		num = joaat("upgrade_camp_delivery_wagon_medium");
	else if (func_204(913131737, 1))
		num = 913131737;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (GANG::NETWORK_IS_GANG_ID_VALID(gangId))
	{
		if (GANG::NETWORK_IS_GANG_ACTIVE(gangId))
		{
			gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
		
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
			{
				player = gangLeader;
				num = Global_1144526[player /*83*/].f_38.f_12.f_2;
			}
		}
	}

	return num;
}

void func_267(int iParam0) // Position - 0x82D9 Hash - 0xFB7D7CC7 ^0x8AA51D4F
{
	if (iParam0 < 0 || iParam0 > Global_1901671.f_604.f_10)
		iParam0 = 0;

	if (Global_1144526[Global_1295666 /*83*/].f_74.f_4 != iParam0)
		Global_1144526[Global_1295666 /*83*/].f_74.f_4 = iParam0;

	return;
}

Hash func_268(Player plParam0) // Position - 0x8320 Hash - 0xF9EEB380 ^0x96CF7295
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	player = plParam0;
	return Global_1144526[player /*83*/].f_74.f_2;
}

Hash func_269(Player plParam0) // Position - 0x8346 Hash - 0xF9EEB380 ^0x832725B8
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	player = plParam0;
	return Global_1144526[player /*83*/].f_74.f_3;
}

Hash func_270(Hash hParam0) // Position - 0x836C Hash - 0xB8EC44B7 ^0x3F989E4C
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 362062697;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1622797153;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 251523924;
	
		case -2102079544:
			return 2068018854;
	
		case -2092697195:
			return -1884018016;
	
		case joaat("provision_pelican_feather"):
			return 74265533;
	
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return 1828340319;
	
		case joaat("provision_beaver_fur"):
			return -1583116953;
	
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 1606360364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return -523607607;
	
		case -2043601589:
			return 2049850175;
	
		case -2040849706:
			return 2129552482;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -409309194;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -795926005;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 117556329;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 195131818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1766735806;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -179784009;
	
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return -202898890;
	
		case -1946740647:
			return 700750583;
	
		case -1932727774:
			return -1655807359;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1521192478;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 117556329;
	
		case -1924159110:
			return 2065655105;
	
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1273558742;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 708951363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 489332694;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -48308129;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2032362047;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1608525320;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -2084641708;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 439094686;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 727714355;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -972505668;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -252750557;
	
		case joaat("provision_deer_hide"):
			return -1334624683;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1699761828;
	
		case -1821314478:
			return 683975656;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1521192478;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -549843543;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1467162138;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 708951363;
	
		case -1787430524:
			return -605083879;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1445465787;
	
		case joaat("PROVISION_WOLF_HEART"):
			return -742266708;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 1176634776;
	
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 1854095100;
	
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -1508151163;
	
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return 144513283;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -1517999735;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 2103138183;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -352732121;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -729503995;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1684561350;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1925097470;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 2032362047;
	
		case -1638839614:
			return 865783200;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 709722347;
	
		case -1624242931:
			return -1797419634;
	
		case -1621144167:
			return 1825917101;
	
		case joaat("provision_buffalo_horn"):
			return 970250315;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -252750557;
	
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return -885435577;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -557557374;
	
		case -1572330336:
			return 751785819;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -1583116953;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -855155400;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 711086189;
	
		case -1548204069:
			return -1885772129;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -1028335922;
	
		case joaat("provision_fish_muskie"):
			return 998459086;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1662628197;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -2084641708;
	
		case joaat("provision_fish_bluegill_legendary"):
			return -1900245017;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1882667332;
	
		case -1475338121:
			return 2068018854;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1743453709;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -71380070;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -68530554;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 513869240;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1743453709;
	
		case -1434083213:
			return -99694979;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1925097470;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 1943206759;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 340488205;
	
		case joaat("provision_vulture_feather"):
			return 753992067;
	
		case joaat("provision_bear_claw"):
			return -1749311280;
	
		case joaat("provision_javelina_skin"):
			return 344414895;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 1943206759;
	
		case -1378208045:
			return -672378045;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1466769106;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -348997013;
	
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 2118150058;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1260301848;
	
		case joaat("provision_sheep_wool"):
			return -1896091463;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 727714355;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 128689452;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -158140634;
	
		case -1283104686:
			return -1156529631;
	
		case -1282621313:
			return -393778206;
	
		case -1262044528:
			return -1798573899;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -795926005;
	
		case -1249752300:
			return -1395009678;
	
		case -1243878166:
			return 2068018854;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -185670568;
	
		case joaat("PROVISION_LOON_FEATHER"):
			return 1324361660;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -234392368;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -409309194;
	
		case -1220574585:
			return -1836028969;
	
		case -1218522879:
			return -618837959;
	
		case -1195518864:
			return -183098420;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -549843543;
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1389099466;
	
		case -1182590809:
			return 1590950150;
	
		case joaat("provision_raven_feather"):
			return -1777044066;
	
		case joaat("provision_raccoon_fur"):
			return 212330241;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return -2083991045;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 2032362047;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 1871609823;
	
		case -1087205695:
			return -700390032;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1552076723;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 621465116;
	
		case joaat("provision_owl_feather"):
			return -1114206422;
	
		case joaat("provision_bull_horns"):
			return 913562114;
	
		case -1061362634:
			return 1303473658;
	
		case -1061253029:
			return 1593945350;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 556997951;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -1334624683;
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1634769991;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1517999735;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 714611525;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 1272884971;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1125378664;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 251523924;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -1028335922;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -795926005;
	
		case -963027403:
			return 872099605;
	
		case joaat("PROVISION_CONDOR_FEATHER"):
			return -324172879;
	
		case -940052481:
			return -633621963;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 2084847747;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1445465787;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 513869240;
	
		case joaat("provision_rabbit_pelt_pristine"):
			return 172698521;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 469453151;
	
		case -907373381:
			return 2094711074;
	
		case -906131571:
			return 878987858;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -1910050550;
	
		case joaat("PROVISION_ROBIN_FEATHER"):
			return -862133853;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -334414989;
	
		case joaat("provision_squirrel_pelt"):
			return -885435577;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -409309194;
	
		case -885592109:
			return -1170632889;
	
		case joaat("provision_boar_tusk"):
			return 1234479911;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -2079514583;
	
		case joaat("provision_buck_fur"):
			return 1069834732;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 2145928766;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1699761828;
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -2054061821;
	
		case -857265622:
			return -932263476;
	
		case joaat("provision_fish_lake_sturgeon"):
			return 49841414;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 547453549;
	
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1322026128;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 340488205;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -557557374;
	
		case joaat("provision_booby_feather"):
			return -427774472;
	
		case -827518870:
			return -330669109;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 714611525;
	
		case joaat("provision_alligator_skin"):
			return 709722347;
	
		case joaat("provision_bat_wing"):
			return -591134272;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 711086189;
	
		case joaat("provision_muskrat_fur"):
			return -1273558742;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 362062697;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -179784009;
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -276530555;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 1069834732;
	
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return -1687205102;
	
		case -675142890:
			return 1144711679;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -185670568;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 547453549;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -1334624683;
	
		case joaat("PROVISION_TURKEY_FEATHER"):
			return -977684174;
	
		case -634716689:
			return -427089681;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -71380070;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 195131818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -549843543;
	
		case -591844128:
			return 708589058;
	
		case joaat("provision_buffalo_fur"):
			return -1508151163;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 1662628197;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 714611525;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 513869240;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1699761828;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -1260301848;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -600158588;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -348997013;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -482152318;
	
		case joaat("provision_ram_hide"):
			return 1995645004;
	
		case joaat("provision_opossum_fur_pristine"):
			return -401745683;
	
		case joaat("provision_badger_pelt"):
			return -78603574;
	
		case joaat("provision_badger_pelt_pristine"):
			return -78603574;
	
		case -420237085:
			return 115722091;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 621465116;
	
		case joaat("provision_rat_fur"):
			return -555536739;
	
		case joaat("provision_elk_antlers"):
			return -276530555;
	
		case joaat("provision_panther_fur"):
			return -2096730839;
	
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -555536739;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 469453151;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -158140634;
	
		case joaat("provision_bull_hide"):
			return 854098596;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1656226638;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -329015022;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1871609823;
	
		case -308200059:
			return -853038002;
	
		case joaat("provision_raccoon_fur_pristine"):
			return 212330241;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -71380070;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -482152318;
	
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -555536739;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -729503995;
	
		case -260181673:
			return 732434481;
	
		case -251416414:
			return -364133422;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -600158588;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 195131818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 128689452;
	
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -1508151163;
	
		case -229670230:
			return 1438015400;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return -817814915;
	
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -1875079046;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 1272884971;
	
		default:
		
	}

	return 0;
}

BOOL func_271(Hash hParam0) // Position - 0x9DE7 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_272(Hash hParam0, Hash hParam1) // Position - 0x9DF3 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_203(hParam0, 0))
		return func_396(func_395(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_273() // Position - 0x9E34 Hash - 0xB6E09ED8 ^0xA943D439
{
	return Global_1156111.f_21645[64 /*209*/].f_208;
}

BOOL func_274(int iParam0) // Position - 0x9E49 Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_397())
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

Hash func_275(Player plParam0) // Position - 0x9E69 Hash - 0xC22E6E16 ^0xE184A354
{
	int num;

	num = func_268(plParam0);

	if (num < 2500)
		return 0;
	else
		return 1;

	return 1;
}

int func_276(Player plParam0) // Position - 0x9E8D Hash - 0x445878FD ^0xC78B78D0
{
	Player player;

	player = plParam0;

	if (player < 0 || player >= 32)
		return 2;

	return func_398(Global_1144526[player /*83*/].f_38.f_28.f_1);
}

Hash func_277(Player plParam0) // Position - 0x9EC1 Hash - 0x136A4D0 ^0x136A4D0
{
	if (func_155(plParam0, 64))
		return 1;
	else
		return 0;

	return 0;
}

Hash func_278(Player plParam0) // Position - 0x9EE0 Hash - 0x83EE5966 ^0x83EE5966
{
	int num;

	num = func_269(plParam0);

	if (num == 0)
		return 0;
	else
		return 1;

	return 0;
}

Hash func_279(Player plParam0) // Position - 0x9F02 Hash - 0xF9EEB380 ^0x6BACE541
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0;

	player = plParam0;
	return Global_1144526[player /*83*/].f_74.f_4;
}

BOOL func_280() // Position - 0x9F28 Hash - 0x4141E963 ^0x5488E424
{
	var unk;
	var unk4;

	if (func_399(11, func_216(PLAYER::PLAYER_ID()), &unk, &unk4, 0))
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
			if (func_400(Global_33, unk, true) > 9f)
				return false;

	if (HUD::IS_HUD_HIDDEN())
		return false;

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (func_401())
		return false;

	if (func_402())
		return false;

	if (func_155(Global_1295666, 8192) == false)
		return false;

	return true;
}

BOOL func_281(BOOL bParam0) // Position - 0x9FA9 Hash - 0x337008A1 ^0x237E825
{
	if (bParam0)
		if (Global_1142424.f_2050 == 0 || MISC::GET_SYSTEM_TIME() - Global_1142424.f_2050 >= 1000)
			return true;
		else
			return false;

	if (Global_1142424.f_2050 == 0)
		Global_1142424.f_2050 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1142424.f_2050 >= 1000)
		Global_1142424.f_2050 = MISC::GET_SYSTEM_TIME();
	else
		return false;

	return true;
}

BOOL func_282(Any anParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0xA021 Hash - 0x6856B546 ^0xF26E4D04
{
	Hash hash;
	char* str;
	var unk3;
	int num;
	var unk16;
	int num2;

	if (func_203(hParam1, 0))
		if (func_272(hParam1, 173360570) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam1, 4))
			func_158(-2147483648);

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (bParam3)
			func_403(hParam1, iParam2);
	
		func_404(hParam1, iParam2);
		return true;
	}

	hash = func_270(hParam1);

	if (hash == 0)
		return false;

	if (!func_405(hParam1, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		str = "TRANSACTION_CAMP_GANG";
		str.f_1 = "ITEMTYPE_TEXTURES";
	}

	func_406(MISC::VAR_STRING(2, "TRANSACTION_DONATED"), str.f_1, MISC::GET_HASH_KEY(str), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	unk3.f_1 = 11;

	if (func_272(hParam1, 1064293907) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam1, 1073741824) || func_272(hParam1, -1257428961) || func_272(hParam1, 173360570))
		if (func_273())
			func_407(&unk3, 1417019613);
	else if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam1, 268435456) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam1, 134217728) || func_272(hParam1, 1888974372))
		func_407(&unk3, -688057837);
	else
		func_407(&unk3, 25550726);

	num = iParam2;

	if (num > 10)
	{
		unk16 = { unk3 };
		func_407(&unk16, 964458272);
	
		while (num > 10)
		{
			if (!func_408(hash, anParam0, &unk16, 0, 255, 0, false))
				return false;
		
			num = num - 10;
		}
	}

	num2 = 0;

	switch (num)
	{
		case 2:
			num2 = 1206214767;
			break;
	
		case 3:
			num2 = 1048858029;
			break;
	
		case 4:
			num2 = 2003386234;
			break;
	
		case 5:
			num2 = 1510933702;
			break;
	
		case 6:
			num2 = -712967248;
			break;
	
		case 7:
			num2 = -1206075160;
			break;
	
		case 8:
			num2 = -246762689;
			break;
	
		case 9:
			num2 = -414474431;
			break;
	
		case 10:
			num2 = 964458272;
			break;
	}

	if (num2 != 0)
		func_407(&unk3, num2);

	if (!func_408(hash, anParam0, &unk3, 0, 255, 0, false))
		return false;

	if (bParam3)
		func_403(hParam1, iParam2);

	return true;
}

void func_283(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0xA2AB Hash - 0xE9C78D03 ^0xA59196A5
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam15))
		return;

	if (!func_281(false))
		return;

	iParam1 = 10;
	iParam1.f_1 = PLAYER::PLAYER_ID();
	iParam1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iParam1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam1, 14, 6, &uParam15);
	return;
}

void func_284(var uParam0) // Position - 0xA2F3 Hash - 0x879B7DAC ^0x879B7DAC
{
	func_409(uParam0, 0);
	return;
}

BOOL func_285(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xA302 Hash - 0x2EE9CE5C ^0x2EE9CE5C
{
	var unk;

	return func_410(hParam0, hParam1, &unk, bParam2, false);
}

BOOL func_286() // Position - 0xA317 Hash - 0x20AD0BB5 ^0x9CCBC3DB
{
	if (GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
		return true;

	return false;
}

BOOL func_287() // Position - 0xA337 Hash - 0x4BD40F7 ^0x2D063BA0
{
	if (HUD::IS_HUD_HIDDEN())
		return false;

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (func_401())
		return false;

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("trader")))
		return false;

	if (Global_1072759.f_28761)
		return false;

	if (Global_1572887.f_10)
		return false;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1324907014))
		return false;

	if (func_411())
		return false;

	return true;
}

int func_288(var uParam0) // Position - 0xA3A8 Hash - 0x50876869 ^0x5DFBFB88
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
		return 0;
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
		return 0;
	else if (uParam0->f_6 == 0)
		return 0;
	else if (uParam0->f_7 == 0)
		return 0;

	if (uParam0->f_13 == 778915895)
		if (Global_1896762.f_354)
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		else
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_ACCEPT_INVITE");

	if (*uParam0 == 5)
		return func_413(func_412(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_412(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 6)
		return func_414(func_412(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_412(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 1)
		return func_415(func_412(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_412(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 3)
		return func_416(func_412(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_412(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 2)
		return func_417(func_412(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_412(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 4)
		return func_418(func_412(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_412(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 0)
		return func_419(func_412(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_412(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);

	return 0;
}

BOOL func_289(int iParam0, int iParam1) // Position - 0xA68A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_290(var uParam0) // Position - 0xA699 Hash - 0x39705408 ^0x39705408
{
	return func_289(*uParam0, 2);
}

int func_291(int iParam0) // Position - 0xA6A9 Hash - 0xFDA007B9 ^0xE83F4FF2
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_292(int iParam0) // Position - 0xA6BB Hash - 0xA7E21081 ^0xBD28E742
{
	int num;
	int status;

	num = func_420(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_421(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_421(iParam0, 4, 0, 0);
		}
	}

	return num;
}

BOOL func_293(Hash hParam0) // Position - 0xA745 Hash - 0x672E565C ^0xD531C7FC
{
	if (func_272(hParam0, 75135761))
		return true;

	return false;
}

Hash func_294(Hash hParam0, BOOL bParam1) // Position - 0xA760 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_203(hParam0, 0))
		return func_422(func_395(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

BOOL func_295(Hash hParam0) // Position - 0xA7B8 Hash - 0x2B509D4D ^0xA4E04F4
{
	if (!func_56() && func_423())
		return true;

	return func_272(hParam0, 1435272033);
}

BOOL func_296(Hash hParam0, BOOL bParam1) // Position - 0xA7E0 Hash - 0x76235AAD ^0x7A815ACE
{
	return func_300(hParam0, 997808187) && !func_424(hParam0, 997808187, bParam1);
}

BOOL func_297(Hash hParam0) // Position - 0xA806 Hash - 0x29993813 ^0xB7E34A5B
{
	Hash hash;

	hash = func_294(hParam0, true);

	if (hash != 0 && func_320(hash, 997808187, false))
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1831140953))
			return 1;

	return 0;
}

BOOL func_298(Hash hParam0, var uParam1) // Position - 0xA840 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_425(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_299(Hash hParam0, var uParam1) // Position - 0xA857 Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_426(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_300(Hash hParam0, Hash hParam1) // Position - 0xA86F Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_203(hParam0, 0))
		return false;

	if (func_293(hParam0) || func_272(hParam0, 1077060302))
		return func_320(func_294(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

BOOL func_301() // Position - 0xA8BB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22477;
}

BOOL func_302(int iParam0) // Position - 0xA8CA Hash - 0x16518DC6 ^0xD6363784
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_427(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

int func_303(var uParam0) // Position - 0xA905 Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_203(*uParam0, 0))
		return 0;

	if (!func_428(*uParam0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			break;
	
		default:
			return 0;
	}

	return 1;
}

struct<5> func_304(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xA98F Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_91(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_333(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_435(hParam0, -1823706425))
			{
				unk = { func_92(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_435(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_92(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_92(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_435(hParam0, -1653629781))
			{
				unk = { func_92(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_433(bParam1) };
		
			switch (func_434(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_92(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_429(bParam1) };
		
			if (iParam2 && func_430(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_431(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_431(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_432(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_436(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_435(hParam0, -1653629781))
			{
				unk = { func_92(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

BOOL func_305(Hash hParam0, var uParam1) // Position - 0xAD03 Hash - 0x66B62864 ^0x763539BD
{
	Hash hash;
	var unk;

	*uParam1 = 0;

	if (!func_203(hParam0, 0))
		return false;

	if (!func_272(hParam0, 1077060302))
		if (func_437(hParam0))
			return false;

	if (func_272(hParam0, 81450561) || func_272(hParam0, 1342455455))
		return false;

	if (func_293(hParam0))
		return false;

	hash = func_294(hParam0, true);

	if (hash == 0)
		return false;

	if (!func_320(hash, -570078785, false))
		return false;

	if (Global_1915656.f_22504.f_2 == 1)
	{
		unk = { func_304(hParam0, false, 0) };
	
		if (unk.f_4 == joaat("SLOTID_SATCHEL"))
			return false;
	}

	*uParam1 = hash;
	return true;
}

BOOL func_306(Hash hParam0) // Position - 0xADC0 Hash - 0xD47FBCD ^0x4CD11E28
{
	return func_272(hParam0, 1166200945);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_307(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, Hash hParam8, int iParam9, BOOL bParam10) // Position - 0xADD3 Hash - 0x72556179 ^0x72556179
{
	BOOL flag;
	var unk;
	BOOL flag2;
	BOOL flag3;
	Hash weaponHash;
	int num;
	Hash hash;
	var unk18;
	var unk23;
	var unk27;
	var unk31;
	Hash hash2;
	Hash hash3;
	var unk35;
	int i;
	Hash weapontypeSlot;

	if (!func_203(hParam1, 0))
		return false;

	if (!func_438(piParam0, false))
		return false;

	if (hParam8 == 0)
		hParam8 = func_164(hParam1, hParam8, true, -1, true);

	flag = false;

	if (func_302(15))
		flag = true;

	func_184(&iParam9, 32);
	func_184(&iParam9, 64);
	func_184(&iParam9, 4);
	func_184(&iParam9, 128);

	if (iParam6 < 1)
		iParam6 = 1;

	if (!func_439(piParam0, hParam1, uParam2, joaat("SLOTID_NONE"), hParam8, iParam6, iParam9, true))
		return false;

	unk = { func_440(hParam1, uParam2, joaat("SLOTID_SATCHEL"), iParam6, false) };
	unk.f_13 = hParam8;
	unk.f_12 = 1248274121;
	*uParam7 = { unk };

	if (!func_441(piParam0, joaat("use")))
		return false;

	flag2 = false;
	flag3 = false;
	weaponHash = Global_1915656.f_20241.f_49;
	num = Global_1915656.f_20241.f_50;
	unk35.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < 16; i = i + 1)
	{
		if (!func_203(Global_1051832.f_47[i], 0))
		{
		}
		else if (!func_442(Global_1051832.f_47[i], weaponHash, &hash, &unk27, &unk18, true, num))
		{
		}
		else
		{
			unk23 = { func_92(Global_1051832.f_47[i], unk27, hash, false) };
		
			if (func_443(Global_1051832.f_47[i]))
			{
				if (!func_431(Global_1051832.f_47[i], &unk27, hash, false, false))
				{
					if (!Global_1051832.f_47.f_17[i])
					{
					}
					else if (func_444(Global_1051832.f_47[i]))
					{
					}
					else
					{
						hash3 = hParam8;
					
						if (func_300(Global_1051832.f_47[i], 997808187))
							hash3 = 997808187;
					
						if (flag && hash3 != 997808187)
						{
							if (!func_445(piParam0, Global_1051832.f_47[i], unk27, hash, 1, &unk, false, hash3, iParam9, true))
							{
								flag2 = false;
								break;
							}
						
							flag3 = true;
						}
						else if (!flag || hash3 == 997808187)
						{
							if (!func_446(piParam0, Global_1051832.f_47[i], unk27, hash, !flag, &unk, false, hash3, 0, iParam9, false))
							{
								flag2 = false;
								break;
							}
						
							flag3 = true;
						}
						else
						{
							flag2 = false;
							break;
						}
					
						flag2 = true;
						goto 0x32F;
					}
				}
			
				if (!flag)
				{
					if (!Global_1051832.f_47.f_17[i])
					{
						hash2 = func_95(unk27, hash, false, -1);
					
						if (!func_203(hash2, 0))
						{
						}
						else
						{
							unk31 = { func_92(hash2, unk31, hash, false) };
						
							if (!func_447(unk31, Global_1051832.f_47.f_17[i], false))
							{
								!func_436(unk31, &unk35, true, false, -1);
							
								if (unk35.f_10 == Global_1051832.f_47.f_17[i])
								{
									flag2 = true;
								}
								else
								{
									flag2 = false;
									break;
								}
							}
							else
							{
								flag2 = true;
							}
						
							goto 0x32F;
						}
					}
				
					!func_436(unk23, &unk35, true, false, -1);
				
					if (unk35.f_10 != Global_1051832.f_47.f_17[i])
					{
						if (!func_447(unk23, true, false))
						{
							flag2 = false;
							break;
						}
					}
					else
					{
						flag2 = true;
					}
				}
			}
		}
	}

	if (!flag2)
	{
		func_448(piParam0);
		return false;
	}

	if (flag3)
	{
		if (bParam10 && !func_449(piParam0))
		{
			return false;
		}
		else
		{
			weapontypeSlot = WEAPON::_GET_WEAPONTYPE_SLOT(weaponHash);
		
			if (!MISC::IS_BIT_SET(Global_1051832.f_4481[func_450(weapontypeSlot, 1) / 32], func_450(weapontypeSlot, 1) % 32))
			{
				func_452(func_451(joaat("updated"), joaat("weapon_customization")), 1);
				MISC::SET_BIT(&Global_1051832.f_4481[func_450(weapontypeSlot, 1) / 32], func_450(weapontypeSlot, 1) % 32);
			}
		}
	}

	return true;
}

BOOL func_308(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, BOOL bParam12) // Position - 0xB1A0 Hash - 0x5E4BFA38 ^0x5E4BFA38
{
	var unk;
	var unk18;

	if (!func_438(piParam0, false))
		return false;

	if (hParam10 == 0)
		hParam10 = func_164(hParam1, hParam10, true, iParam11, true);

	if (!func_439(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, iParam11, bParam12))
		return false;

	unk = { func_440(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (func_333(hParam1) == joaat("CLOTHING"))
	{
		unk18.f_9 = 1;
		unk18.f_11 = joaat("SLOTID_NONE");
		unk18 = { unk };
	
		if (!func_453(piParam0, unk18, 2113164098, bParam9, -1))
			return false;
	}
	else if (!func_454(piParam0, unk, 2113164098, bParam9, iParam11))
	{
		return false;
	}

	return true;
}

void func_309(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0xB27F Hash - 0x4E412338 ^0xBA865F21
{
	Hash item;
	Hash hash;
	Hash item2;

	item = uParam0.f_8;
	hash = uParam0.f_13;

	if (func_455(item, joaat("currency_gold_bar"), hash, true, false) > 0)
	{
		func_456("gold_spend", "Gold_Spend_Sounds", true);
	}
	else if (INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(item, 0))
	{
		item2 = func_457(item, 0);
	
		if (!AUDIO::_IS_SCRIPTED_AUDIO_CUSTOM(item2, joaat("hud_shop_soundset")))
			AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		else
			AUDIO::_PLAY_SOUND_FROM_ITEM(item2, joaat("hud_shop_soundset"), 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_310(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB306 Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_203(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_458(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_311(Hash hParam0) // Position - 0xB396 Hash - 0xB0090776 ^0x189C4477
{
	if (func_434(hParam0) == -126813555 || func_434(hParam0) == 1946043663)
		return true;

	return false;
}

BOOL func_312(Any* panParam0) // Position - 0xB3C4 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_313(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xB3FA Hash - 0x8B86113C ^0x8B86113C
{
	if (!func_312(&uParam0))
		return false;

	if (func_459(&uParam0))
		return false;

	return func_461(func_460(uParam0));
}

void func_314(int iParam0, var uParam1, var uParam2) // Position - 0xB429 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_315(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xB445 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_462(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_463(iParam0))
		return false;

	if (func_464(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_465(iParam0, 1) || func_466(32768))
		if (!func_465(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_467())
		return false;

	return true;
}

void func_316(int iParam0, int iParam1) // Position - 0xB4E7 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

int func_317(Hash hParam0, Hash hParam1) // Position - 0xB50B Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_468(func_395(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_318(Hash hParam0) // Position - 0xB537 Hash - 0xEFDB1B2D ^0xA7F8FFFB
{
	if (!func_311(hParam0))
		return 0;

	if (func_469(hParam0))
		return -1957466003;

	if (func_272(hParam0, -1457263561))
		return -84670860;

	if (func_272(hParam0, -732976331))
		return -700121520;

	if (func_272(hParam0, 1495098826))
		return 917298505;

	if (func_272(hParam0, 2088554948))
		return -1638586319;

	return 176863985;
}

BOOL func_319(Hash hParam0) // Position - 0xB5CA Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

BOOL func_320(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xB5E2 Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_319(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_470(hParam0, hParam1);

	return true;
}

BOOL func_321(Hash hParam0, var uParam1) // Position - 0xB61A Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_471(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_322(Hash hParam0, var uParam1) // Position - 0xB631 Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_472(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_323(int* piParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xB649 Hash - 0x9D321287 ^0x9D321287
{
	if (!func_438(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_178(hParam1, 0, true, iParam5, bParam6);

	if (!func_473(hParam1, hParam4, iParam5))
		return false;

	uParam2->f_17 = hParam1;
	uParam2->f_8 = hParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = hParam4;
	uParam2->f_12 = 1248274121;

	if (!func_474(piParam0, *uParam2, 541670136, bParam3))
		return false;

	if (COLLECTION::_0x9ADEE485726025D4(hParam1) != 0)
	{
		Global_1292143.f_20.f_422 != -1;
		Global_1292143.f_20.f_422.f_1 = hParam1;
		Global_1292143.f_20.f_422 = piParam0->f_1;
	}

	return true;
}

void func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0xB6F2 Hash - 0x483DB7AC ^0x50D9D93A
{
	Hash hash;
	Hash hash2;

	hash = uParam0.f_17;
	hash2 = uParam0.f_13;

	if (func_475(hash, joaat("currency_gold_bar"), hash2, false, true) > 0)
		func_456("gold_spend", "Gold_Spend_Sounds", true);
	else
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);

	return;
}

int func_325(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB737 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_203(hParam0, 0))
		return 0;

	num = func_333(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_476(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_477(hParam0, false);
	}

	if (func_317(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_201(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_478(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_201(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_326(int iParam0) // Position - 0xB7F9 Hash - 0xC3245347 ^0xC3245347
{
	int num;
	int num2;

	switch (iParam0)
	{
		case joaat("hennigans_stead_camp"):
		case joaat("rio_bravo_camp"):
		case joaat("roanoke_ridge_camp"):
		case joaat("great_plains_camp"):
		case joaat("cumberland_forest_camp"):
		case joaat("tall_trees_camp"):
		case joaat("cholla_springs_camp"):
		case joaat("grizzlies_camp"):
		case joaat("gaptooth_ridge_camp"):
		case joaat("bayou_nawas_camp"):
		case joaat("scarlett_meadows_camp"):
		case joaat("heartland_camp"):
		case joaat("big_valley_camp"):
			num = func_479(iParam0, 1);
			return Global_1147183.f_361[num];
	
		default:
		
	}

	return num2;
}

int func_327(Player plParam0) // Position - 0xB870 Hash - 0xCAA14173 ^0xCAA14173
{
	if (plParam0 >= 0)
		return Global_1056554[plParam0 /*491*/];

	return -1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xB88B Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

// Unhandled jump detected. Output should be considered invalid
void func_329(Any anParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xB8B5 Hash - 0xC798A36A ^0x5F5881CA
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	float num6;
	float num7;
	float num8;
	float num9;
	Vector3 entityCoords;
	Vector3 vector;
	var memberHandles;
	int gangMembers;
	Player gangLeader;
	Player playerFromGamerHandle;
	int num10;
	int i;
	int j;

	unk = uParam1;
	unk.f_1 = uParam2;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return;

	num = -999;
	num2 = 100;
	num3 = 200;
	num4 = 100;
	num5 = 50;
	num6 = 800f;
	num7 = 1400f;
	num8 = 2000f;
	memberHandles = 7;
	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(anParam0, &memberHandles);
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(anParam0);
	num10 = func_480(unk);

	for (i = 0; i <= num10 - 1; i = i + 1)
	{
		uParam3->[i /*4*/].f_1 = uParam1;
		uParam3->[i /*4*/].f_1.f_1 = uParam2;
		uParam3->[i /*4*/].f_1.f_2 = func_481(i, unk);
	
		if (func_332(uParam3->[i /*4*/].f_1, gangLeader, gangMembers, bParam4))
		{
			uParam3->[i /*4*/] = uParam3->[i /*4*/] + num2;
		
			if (!func_77(uParam3->[i /*4*/].f_1, &vector))
			{
			}
			else
			{
				for (j = 0; j <= gangMembers - 1; j = j + 1)
				{
					playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[j /*2*/]);
				
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(playerFromGamerHandle), false, false) };
						num9 = BUILTIN::VDIST(entityCoords, vector);
					
						if (num9 < num6)
							uParam3->[i /*4*/] = uParam3->[i /*4*/] + num3;
						else if (num9 < num7)
							uParam3->[i /*4*/] = uParam3->[i /*4*/] + num4;
						else if (num9 < num8)
							uParam3->[i /*4*/] = uParam3->[i /*4*/] + num5;
					}
				}
			
				goto 0x178;
			}
		}
	
		uParam3->[i /*4*/] = num;
	}

	return;
}

int func_330(Any* panParam0) // Position - 0xBA39 Hash - 0x326BF869 ^0xC53EE2CF
{
	int num;
	int i;
	int endRange;
	int num2;

	NETWORK::_0x7E300B5B86AB1D1A(panParam0, *panParam0, 4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	num2 = panParam0->[0 /*4*/];

	if (num2 <= 0)
		return 0;

	for (i = 0; i <= *panParam0 - 1; i = i + 1)
	{
		if (panParam0->[i /*4*/] == num2)
			endRange = i;
		else
			break;
	}

	if (endRange > 0)
		i = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	else
		i = 0;

	num = panParam0->[i /*4*/].f_1.f_2;
	return num;
}

int func_331(int iParam0, int iParam1) // Position - 0xBAB6 Hash - 0xE1D12727 ^0x33010DFD
{
	switch (iParam0)
	{
		case 0:
			return joaat("grizzlies_camp");
	
		case 1:
			return joaat("bayou_nawas_camp");
	
		case 2:
			return joaat("big_valley_camp");
	
		case 3:
			return joaat("cholla_springs_camp");
	
		case 4:
			return joaat("cumberland_forest_camp");
	
		case 5:
			return joaat("gaptooth_ridge_camp");
	
		case 6:
			return joaat("great_plains_camp");
	
		case 7:
			return joaat("heartland_camp");
	
		case 8:
			return joaat("hennigans_stead_camp");
	
		case 9:
			return joaat("rio_bravo_camp");
	
		case 10:
			return joaat("roanoke_ridge_camp");
	
		case 11:
			return joaat("scarlett_meadows_camp");
	
		case 12:
			return joaat("tall_trees_camp");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_332(var uParam0, var uParam1, var uParam2, Player plParam3, int iParam4, BOOL bParam5) // Position - 0xBB8B Hash - 0xC21A30BD ^0x8D2A0107
{
	var unk;

	if (uParam0.f_2 == 0)
		return false;

	if (!func_77(uParam0, &unk))
		return false;

	if (func_78(uParam0, plParam3, unk, iParam4, 1, false, bParam5))
		return true;

	return false;
}

int func_333(Hash hParam0) // Position - 0xBBCD Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_203(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_334(Hash hParam0, int iParam1) // Position - 0xBBF8 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_203(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_476(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_482("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_483(&unk, i, num, num2))
			{
			}
			else if (!func_484(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_485(num);
				return true;
			}
		}
	
		func_485(num);
	}

	return false;
}

BOOL func_335(Hash hParam0) // Position - 0xBCA0 Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_203(hParam0, 0))
		return false;

	num = func_434(hParam0);

	switch (num)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num2 = func_486(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_487(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_488(hParam0);
	num3 = func_487(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

BOOL func_336(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0xBD5C Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_201(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_489(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

int func_337() // Position - 0xBDAA Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_338(int iParam0) // Position - 0xBDB8 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_339(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xBDCE Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_490(vParam0);
	num2 = -1;

	if (Global_1893594[num] > 0)
	{
		num3 = Global_1893594[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1892777[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[num4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

BOOL func_340(float fParam0, var uParam1, var uParam2) // Position - 0xBE85 Hash - 0xEEEBBA53 ^0xA3D9EE1A
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

int func_341(Hash hParam0) // Position - 0xBEDA Hash - 0x9D68FB33 ^0x2BCFA651
{
	if (Global_1572887.f_14 == -1)
		return Global_38.f_3655[hParam0 /*4*/].f_1;

	return Global_25038[hParam0 /*4*/].f_1;
}

int func_342(Hash hParam0) // Position - 0xBF04 Hash - 0x28677675 ^0x176BFB62
{
	if (Global_1572887.f_14 == -1)
		return Global_38.f_3655[hParam0 /*4*/];

	return Global_25038[hParam0 /*4*/];
}

BOOL func_343(Hash hParam0) // Position - 0xBF2A Hash - 0x9D68FB33 ^0x43A1D70F
{
	if (Global_1572887.f_14 == -1)
		return Global_38.f_3655[hParam0 /*4*/].f_2;

	return Global_25038[hParam0 /*4*/].f_2;
}

void func_344(Hash hParam0, int iParam1) // Position - 0xBF54 Hash - 0x90093024 ^0x3AD29928
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[hParam0 /*4*/].f_3 = iParam1;
		return;
	}

	Global_25038[hParam0 /*4*/].f_3 = iParam1;
	return;
}

void func_345(Hash hParam0) // Position - 0xBF85 Hash - 0xA6792A4E ^0x5B64C5B6
{
	Vector3 vector;

	vector = { func_491(func_343(hParam0)) };
	Global_17088[hParam0] = MAP::BLIP_ADD_FOR_COORDS(func_492(func_341(hParam0)), vector);
	MAP::SET_BLIP_SPRITE(Global_17088[hParam0], func_493(func_341(hParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_17088[hParam0], func_341(hParam0), hParam0);
	return;
}

Hash func_346(int iParam0, BOOL bParam1) // Position - 0xBFDD Hash - 0xEA82FE59 ^0xEA82FE59
{
	switch (iParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_old_man_jones");
	
		case 30:
			return joaat("region_bgv_watsonscabin");
	
		case 31:
			return joaat("region_blu_canebreak_manor");
	
		case 32:
			return joaat("region_blu_copperhead");
	
		case 33:
			return joaat("region_blu_sisika");
	
		case 34:
			return joaat("region_blu_travelling_salesman");
	
		case 35:
			return joaat("region_cml_bacchusbridge");
	
		case 36:
			return joaat("region_cml_dino_lady");
	
		case 37:
			return joaat("region_cml_oldfortwallace");
	
		case 38:
			return joaat("region_cml_sixpointcabin");
	
		case 39:
			return joaat("region_grt_beechers");
	
		case 40:
			return joaat("region_grt_blackwater");
	
		case 41:
			return joaat("region_grt_quakers_cove");
	
		case 42:
			return joaat("region_grz_adlerranch");
	
		case 43:
			return joaat("region_grz_dead_rival");
	
		case 44:
			return joaat("region_grz_chezporter");
	
		case 45:
			return joaat("region_grz_colter");
	
		case 46:
			return joaat("region_grz_frozen_explorer");
	
		case 47:
			return joaat("region_grz_millesani_claim");
	
		case 48:
			return joaat("region_grz_mountain_man");
	
		case 49:
			return joaat("region_grz_mount_hagen_peak");
	
		case 50:
			return joaat("region_grz_starving_children");
	
		case 51:
			return joaat("region_grz_tempest_rim");
	
		case 52:
			return joaat("region_grz_wintermining_town");
	
		case 53:
			return joaat("region_grz_calumetravine");
	
		case 54:
			return joaat("region_gre_civil_war_bride");
	
		case 55:
			return joaat("region_grz_cohutta");
	
		case 56:
			return joaat("region_grz_cotorra_springs");
	
		case 57:
			return joaat("region_grz_gunfight");
	
		case 58:
			return joaat("region_grz_theloft");
	
		case 59:
			return joaat("region_gre_veteran");
	
		case 60:
			return joaat("region_grz_wapiti");
	
		case 61:
			return joaat("region_grz_travelling_salesman");
	
		case 62:
			return joaat("region_gua_aguasdulces");
	
		case 63:
			return joaat("region_gua_camp");
	
		case 64:
			return joaat("region_gua_cincotorres");
	
		case 65:
			return joaat("region_gua_lacapilla");
	
		case 66:
			return joaat("region_gua_manicato");
	
		case 67:
			return joaat("region_hrt_abandoned_mill");
	
		case 68:
			return joaat("region_roa_beechers_c");
	
		case 69:
			return joaat("region_hrt_carmodydell");
	
		case 70:
			return joaat("region_hrt_cornwallkerosene");
	
		case 71:
			return joaat("region_hrt_crop_farm");
	
		case 72:
			return joaat("region_hrt_cumberlandfalls");
	
		case 73:
			return joaat("region_hrt_downsranch");
	
		case 74:
			return joaat("region_hrt_emeraldranch");
	
		case 75:
			return joaat("region_hrt_grangers_hoggery");
	
		case 76:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 77:
			return joaat("region_hrt_larnedsod");
	
		case 78:
			return joaat("region_hrt_loony_cult");
	
		case 79:
			return joaat("region_hrt_luckyscabin");
	
		case 80:
			return joaat("region_hrt_swansons_station");
	
		case 81:
			return joaat("region_hrt_valentine");
	
		case 82:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 83:
			return joaat("region_roa_annesburg");
	
		case 84:
			return joaat("region_roa_beaverhollow");
	
		case 85:
			return joaat("region_roa_black_balsam_rise");
	
		case 86:
			return joaat("region_roa_brandywine_drop");
	
		case 87:
			return joaat("region_roa_butchercreek");
	
		case 88:
			return joaat("region_roa_doverhill");
	
		case 89:
			return joaat("region_roa_happy_family");
	
		case 90:
			return joaat("region_roa_isolationist");
	
		case 91:
			return joaat("region_roa_macleanshouse");
	
		case 92:
			return joaat("region_roa_mossy_flats");
	
		case 93:
			return joaat("region_roa_roanoke_valley");
	
		case 94:
			return joaat("region_roa_rockyseven");
	
		case 95:
			return joaat("region_roa_trapper");
	
		case 96:
			return joaat("region_roa_old_man_jones");
	
		case 97:
			return joaat("region_roa_vanhornmansion");
	
		case 98:
			return joaat("region_roa_vanhornpost");
	
		case 99:
			return joaat("region_scm_braithwaitemanor");
	
		case 100:
			return joaat("region_scm_bulgerglade");
	
		case 101:
			return joaat("region_scm_caligahall");
	
		case 102:
			return joaat("region_scm_catfishjacksons");
	
		case 103:
			return joaat("region_scm_clemenscove");
	
		case 104:
			return joaat("region_scm_clemenspoint");
	
		case 105:
			return joaat("region_scm_compsons_stead");
	
		case 106:
			return joaat("region_scm_dairy_farm");
	
		case 107:
			return joaat("region_scm_horse_shop");
	
		case 108:
			return joaat("region_scm_lonniesshack");
	
		case 109:
			return joaat("region_scm_love_triangle");
	
		case 110:
			return joaat("region_scm_radleys_pasture");
	
		case 111:
			return joaat("region_scm_rhodes");
	
		case 112:
			return joaat("region_scm_slave_pen");
	
		case 113:
			return joaat("region_tal_aurora_basin");
	
		case 114:
			return joaat("region_tal_dead_settler");
	
		case 115:
			return joaat("region_tal_cochinay");
	
		case 116:
			return joaat("region_tal_manzanitapost");
	
		case 117:
			return joaat("region_tal_pacificunionrr");
	
		case 118:
			return joaat("region_tal_tannersreach");
	
		case 119:
			return joaat("region_tal_trapper");
	
		case 120:
			return joaat("region_gap_gaptooth_breach");
	
		case 121:
			return joaat("region_gap_tumbleweed");
	
		case 122:
			return joaat("region_gap_rathskeller_fork");
	
		case 123:
			return joaat("region_rio_benedict_point");
	
		case 124:
			return joaat("region_rio_fort_mercer");
	
		case 125:
			return joaat("region_rio_plain_view");
	
		case 126:
			return joaat("region_rio_travelling_salesman");
	
		case 127:
			return joaat("region_cho_armadillo");
	
		case 128:
			return joaat("region_cho_coots_chapel");
	
		case 129:
			return joaat("region_cho_don_julio_house");
	
		case 130:
			return joaat("region_cho_rileys_charge");
	
		case 131:
			return joaat("region_cho_ridgewood_farm");
	
		case 132:
			return joaat("region_cho_twin_rocks");
	
		case 133:
			return joaat("region_cho_travelling_salesman");
	
		case 134:
			return 1869665995;
	
		case 135:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 136:
			return joaat("region_hen_thieves_landing");
	
		case 137:
			return joaat("region_hen_travelling_salesman");
	
		case 138:
			return -1573562784;
	
		case 139:
			return joaat("region_centralunionrr");
	
		default:
		
	}

	if (bParam1)
		return joaat("Wilderness");

	return 0;
}

void func_347(int iParam0, BOOL bParam1) // Position - 0xC7BE Hash - 0xA603C3A3 ^0x82AB3473
{
	var unk;
	int num;

	unk.f_8 = iParam0;

	if (bParam1)
		num = 5;
	else
		num = 6;

	func_283(num, unk, func_348(0, 8));
	return;
}

var func_348(int iParam0, int iParam1) // Position - 0xC7EC Hash - 0x42C305C ^0x81DF2F42
{
	return func_494(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

BOOL func_349(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0xC80A Hash - 0xC2F100FF ^0x27003175
{
	var unk;
	var unk6;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = -238050295;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk6.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk6);
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk6);
		return true;
	}

	return false;
}

BOOL func_350(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0xC880 Hash - 0xC2F100FF ^0x65B7E847
{
	var unk;
	var unk6;
	var outPosition;
	int i;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = -402732872;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk.f_2 = -1420258246;
	
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk))
			return false;
	
		for (i = 0; i <= 50; i = i + 1)
		{
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(*pvParam3, i, &outPosition, 17, 1077936128, 0))
			{
				*pfParam4 = func_495(*pvParam3, outPosition, 1);
				return true;
			}
		}
	
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk6);
	}

	return false;
}

BOOL func_351(var uParam0, var uParam1, var uParam2, int iParam3, Vector3* pvParam4, float* pfParam5) // Position - 0xC937 Hash - 0xAB322D92 ^0xF16C8A60
{
	var unk;
	var unk6;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = -1763127828;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = iParam3;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk6.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam4, &unk6);
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam5, &unk6);
		return true;
	}

	return false;
}

BOOL func_352(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0xC9AE Hash - 0xC2F100FF ^0x9CCBF3E2
{
	var unk;
	var unk6;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = 952598509;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk6.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk6);
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk6);
		return true;
	}

	return false;
}

BOOL func_353(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0xCA24 Hash - 0xC2F100FF ^0x947C8D42
{
	var unk;
	var unk6;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = -466985247;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk6.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk6);
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk6);
		return true;
	}

	return false;
}

BOOL func_354(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0xCA9A Hash - 0xC2F100FF ^0xB51A29A
{
	var unk;
	var unk6;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = -1629816098;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk6.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk6);
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk6);
		return true;
	}

	return false;
}

BOOL func_355(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0xCB10 Hash - 0xC2F100FF ^0xE7F7CB3
{
	var unk;
	var unk6;

	if (!func_186(&unk, uParam0))
		return false;

	unk.f_2 = 1078091189;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk6.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk6);
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk6);
		return true;
	}

	return false;
}

Vector3 func_356(int iParam0) // Position - 0xCB86 Hash - 0x8AE4EC3E ^0x22A8CF8
{
	var unk;

	if (!func_74(iParam0))
		return unk;

	return Global_1141332[iParam0 /*27*/].f_1;
}

struct<17> func_357(var uParam0, BOOL bParam1) // Position - 0xCBAB Hash - 0x76921103 ^0xA9DF955B
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;

	if (bParam1)
	{
		unk.f_15 = func_317(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_202() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

// Unhandled jump detected. Output should be considered invalid
char* func_358(int iParam0, BOOL bParam1) // Position - 0xCC2C Hash - 0x7198990B ^0xA52DFA59
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case joaat("hennigans_stead_camp"):
				return "GC_HENNIGANS_STEAD_DIST";
		
			case joaat("rio_bravo_camp"):
				return "GC_RIO_BRAVO_DIST";
		
			case joaat("roanoke_ridge_camp"):
				return "GC_ROANOKE_RIDGE_DIST";
		
			case joaat("great_plains_camp"):
				return "GC_GREAT_PLAINS_DIST";
		
			case joaat("cumberland_forest_camp"):
				return "GC_CUMBERLAND_FOREST_DIST";
		
			case joaat("tall_trees_camp"):
				return "GC_TALL_TREES_DIST";
		
			case joaat("cholla_springs_camp"):
				return "GC_CHOLLA_SPRINGS_DIST";
		
			case joaat("grizzlies_camp"):
				return "GC_GRIZZLIES_DIST";
		
			case joaat("gaptooth_ridge_camp"):
				return "GC_GAPTOOTH_RIDGE_DIST";
		
			case joaat("bayou_nawas_camp"):
				return "GC_BAYOU_DIST";
		
			case joaat("scarlett_meadows_camp"):
				return "GC_SCARLETT_MEADOWS_DIST";
		
			case joaat("heartland_camp"):
				return "GC_HEARTLANDS_DIST";
		
			case joaat("big_valley_camp"):
				return "GC_BIG_VALLEY_DIST";
		
			default:
				goto 0x16F;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("hennigans_stead_camp"):
				return "HEN";
		
			case joaat("rio_bravo_camp"):
				return "RIO";
		
			case joaat("roanoke_ridge_camp"):
				return "ROA";
		
			case joaat("great_plains_camp"):
				return "GRT";
		
			case joaat("cumberland_forest_camp"):
				return "CML";
		
			case joaat("tall_trees_camp"):
				return "TAL";
		
			case joaat("cholla_springs_camp"):
				return "CHO";
		
			case joaat("grizzlies_camp"):
				return "GRIZZLIES_DIST";
		
			case joaat("gaptooth_ridge_camp"):
				return "GAP";
		
			case joaat("bayou_nawas_camp"):
				return "BAY";
		
			case joaat("scarlett_meadows_camp"):
				return "SCM";
		
			case joaat("heartland_camp"):
				return "HRT";
		
			case joaat("big_valley_camp"):
				return "BGV";
		
			default:
			
		}
	}

	return "NM_GC_TEXT_CAMP_NONE";
}

int func_359(var uParam0) // Position - 0xCDA2 Hash - 0xF3F58BC9 ^0xC07B4C59
{
	Hash hash;
	int num;

	hash = func_377(uParam0);

	if (!func_203(hash, 0))
		return 0;

	num = func_496(hash, false, 59806960);
	return num;
}

BOOL func_360(Any* panParam0, int iParam1, int iParam2) // Position - 0xCDD1 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_361() // Position - 0xCE08 Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_362() // Position - 0xCE24 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_42(2);
}

BOOL func_363() // Position - 0xCE32 Hash - 0x1BB0EADA ^0xDD84C79B
{
	int num;

	num = func_216(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_65(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_364(int iParam0) // Position - 0xCE74 Hash - 0x30E4961A ^0x49018482
{
	func_43(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
	return;
}

struct<2> func_365(Player plParam0) // Position - 0xCE90 Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_366() // Position - 0xCEA4 Hash - 0x46F62AC ^0x46F62AC
{
	BOOL flag;

	flag = Global_1142424.f_2019 == 2 || Global_1142424.f_2019 >= 6 && Global_1142424.f_2019 <= 11 || Global_1142424.f_2019 == 12 || Global_1142424.f_2019 >= 13 && Global_1142424.f_2019 <= 19;
	return flag;
}

BOOL func_367(var uParam0, var uParam1) // Position - 0xCF06 Hash - 0x14EF6550 ^0xA9BA1407
{
	Any gangId;
	var unk;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	unk = { func_356(func_497(gangId)) };
	return unk.f_1 == uParam0 && uParam1 == unk;
}

Hash func_368(int iParam0) // Position - 0xCF37 Hash - 0xD511B5FE ^0x6B21A881
{
	switch (iParam0)
	{
		case 4:
			return joaat("FEE_CAMP_PLACEMENT_SMALL");
	
		case 7:
			return joaat("FEE_CAMP_PLACEMENT_LARGE");
	
		default:
		
	}

	return 0;
}

BOOL func_369(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xCF64 Hash - 0x314C46E8 ^0x314C46E8
{
	int num;
	BOOL flag;

	num = func_496(hParam0, false, hParam2) * iParam1;
	flag = false;
	num == 0;

	if (num >= 0)
		flag = func_498(num);

	return flag;
}

int func_370(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xCF93 Hash - 0x73DB954 ^0x69F7E99B
{
	int num;
	var unk;

	num = -1;
	unk = { func_238(false) };
	unk.f_18 = uParam0.f_1;
	unk.f_19 = uParam0.f_2;
	unk.f_17 = uParam0;
	num = func_499(joaat("UPDATE"), &unk, bParam3);
	num == -1;
	return num;
}

void func_371(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xCFD5 Hash - 0x19E7EE37 ^0x9B77615C
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1144526[player /*83*/].f_38.f_7 = iParam0;
	Global_1144526[player /*83*/].f_38.f_8 = { uParam1 };
	return;
}

BOOL func_372(int iParam0) // Position - 0xD003 Hash - 0x2597F7C7 ^0x2597F7C7
{
	int num;

	num = func_420(iParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

int func_373(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0xD029 Hash - 0x8994BB7F ^0xDE1269F5
{
	int cashBalance;
	int goldBarBalance;
	var unk;
	int num;
	int num2;
	int i;
	var unk32;
	int num3;
	var unk49;

	if (!func_203(hParam0, 0))
		return -1;

	if (func_333(hParam0) != joaat("fee"))
		return -1;

	if (func_500())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_501(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_501(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_310(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_325(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_502(false))
	{
		if (cashBalance > 0)
		{
			func_503(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_503(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_504(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_503(unk[i /*2*/], num2, -142743235, 0, false);
			}
		}
	
		return -1;
	}

	unk32.f_9 = 1;
	unk32.f_11 = joaat("SLOTID_NONE");
	unk32.f_8 = hParam0;
	unk32.f_9 = iParam2;
	unk32.f_13 = hParam5;
	unk32.f_12 = -142743235;
	num3 = func_505(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_168(num3, unk49);
	}

	return num3;
}

void func_374(int iParam0) // Position - 0xD219 Hash - 0x9084DE63 ^0xD225B1D2
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 32)
		return;

	unk.f_5 = { Global_1141332[iParam0 /*27*/].f_1 };
	func_283(11, unk, func_506(GANG::NETWORK_GET_GANG_ID(Global_1141332[iParam0 /*27*/].f_9)));
	return;
}

int func_375(int iParam0) // Position - 0xD264 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_376(int iParam0) // Position - 0xD277 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

Hash func_377(int iParam0) // Position - 0xD28A Hash - 0xD511B5FE ^0xB19E7CDC
{
	switch (iParam0)
	{
		case 4:
			return joaat("FEE_CAMP_DAILY_SMALL");
	
		case 7:
			return joaat("FEE_CAMP_DAILY_LARGE");
	
		default:
		
	}

	return 0;
}

int func_378(int iParam0) // Position - 0xD2B7 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_379(int iParam0) // Position - 0xD2C9 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_380(int iParam0) // Position - 0xD2DB Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_381(int iParam0) // Position - 0xD2EE Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

void func_382(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xD313 Hash - 0xA65AB937 ^0xA65AB937
{
	func_508(iParam0, iParam6);
	func_509(iParam0, iParam5);
	func_510(iParam0, iParam4);
	func_511(iParam0, iParam3);
	func_512(iParam0, iParam2);
	func_513(iParam0, iParam1);
	return;
}

Player func_383() // Position - 0xD34B Hash - 0xC931529D ^0x9BAFB5AF
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return Global_1144526[gangLeader /*83*/].f_38.f_28.f_2;

	return 255;
}

int func_384() // Position - 0xD37D Hash - 0x1A2BE8FA ^0xAF16DEE8
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return Global_1144526[gangLeader /*83*/].f_38.f_28.f_3;

	return -1;
}

void func_385(Player plParam0, BOOL bParam1) // Position - 0xD3AE Hash - 0x62CDA5 ^0x8AD58E5C
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1144526[gangLeader /*83*/].f_38.f_28.f_2) || Global_1144526[gangLeader /*83*/].f_38.f_28.f_2 == plParam0 || bParam1)
		{
			Global_1144526[gangLeader /*83*/].f_38.f_28.f_2 = 255;
			Global_1144526[gangLeader /*83*/].f_38.f_28.f_3 = -1;
		}
	}

	return;
}

BOOL func_386(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xD421 Hash - 0x92B3979B ^0xC243B97B
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

struct<10> func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xD509 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_388(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0xD5DD Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_389(int iParam0, int iParam1) // Position - 0xD5FE Hash - 0x3644D28E ^0x6DB2088F
{
	int outKey;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	outKey = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &outKey))
		return 0;

	return outKey;
}

int func_390(int iParam0, int iParam1, int iParam2) // Position - 0xD641 Hash - 0xC76BC009 ^0xD35219B8
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);

	if (randomIntInRange == iParam2)
	{
		if (func_514())
			randomIntInRange = randomIntInRange - 1;
		else
			randomIntInRange = randomIntInRange + 1;
	
		if (randomIntInRange < iParam0)
			randomIntInRange = iParam0;
		else if (randomIntInRange >= iParam1)
			randomIntInRange = iParam1 - 1;
	
		if (randomIntInRange == iParam0 && iParam0 == iParam2)
			randomIntInRange = randomIntInRange + 1;
		else if (randomIntInRange == iParam1 - 1 && iParam1 - 1 == iParam2)
			randomIntInRange = randomIntInRange - 1;
	
		if (randomIntInRange < iParam0 || randomIntInRange >= iParam1)
			randomIntInRange = func_514() ? iParam0 : iParam1 - 1;
	}

	return randomIntInRange;
}

void func_391(int iParam0, int iParam1) // Position - 0xD6E7 Hash - 0xC723DDD8 ^0x830E85D7
{
	if (iParam0 < 0 || iParam0 >= 32)
		return;

	Global_1144526[iParam0 /*83*/].f_38.f_28 = iParam1;
	Global_1147183.f_339 = iParam1;
	return;
}

int func_392(int iParam0) // Position - 0xD71B Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

char* func_393(Player plParam0) // Position - 0xD73C Hash - 0x7CA4F669 ^0xB281CC11
{
	const char* str;

	if (Global_1901671.f_51.f_29)
		if (!NETWORK::_0xDBDF80673BBA3D65(1))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));

	if (plParam0 == 255)
		if (func_241(40, plParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (plParam0 < 0 || plParam0 >= 32)
		return "";

	str = "";

	if (!Global_1295666.f_17[plParam0])
		return str;

	if (func_241(40, plParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[plParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[plParam0 /*38*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1295666.f_149[plParam0]);
}

const char* func_394(const char* sParam0, int iParam1) // Position - 0xD811 Hash - 0x9E99F03 ^0x2BBD7C3E
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

Hash func_395(Hash hParam0) // Position - 0xD82B Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_396(Hash hParam0, Hash hParam1) // Position - 0xD835 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_468(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_397() // Position - 0xD86B Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

int func_398(Hash hParam0) // Position - 0xD889 Hash - 0xDD76E4D6 ^0x21C88004
{
	if (!func_203(hParam0, 0))
		return 2;

	switch (hParam0)
	{
		case -1612693182:
			return 4;
	
		case -1171462349:
			return 6;
	
		case 1046181202:
			return 2;
	
		case 1689071181:
			return 5;
	
		case 1856073229:
			return 3;
	
		default:
		
	}

	if (func_272(hParam0, -2011345500))
		return 7;

	return 2;
}

BOOL func_399(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4) // Position - 0xD8F0 Hash - 0x8728EDD5 ^0x962956D9
{
	if (!func_74(iParam1))
		return false;

	switch (iParam0)
	{
		case 1:
			*uParam2 = { Global_1141332[iParam1 /*27*/].f_20 };
			*uParam3 = 0f;
			break;
	
		case 7:
			*uParam2 = { Global_1142424.f_1[iParam1 /*63*/].f_38 };
			*uParam3 = Global_1142424.f_1[iParam1 /*63*/].f_58;
			break;
	
		case 9:
			*uParam2 = { Global_1142424.f_1[iParam1 /*63*/].f_41 };
			*uParam3 = Global_1142424.f_1[iParam1 /*63*/].f_59;
			break;
	
		case 10:
			if (iParam4 < 0 || iParam4 >= 7)
				return false;
		
			*uParam2 = { Global_1142424.f_1[iParam1 /*63*/].f_13[iParam4 /*3*/] };
			*uParam3 = Global_1142424.f_1[iParam1 /*63*/].f_49[iParam4];
			break;
	
		case 11:
			*uParam2 = { Global_1142424.f_1[iParam1 /*63*/].f_44 };
			*uParam3 = Global_1142424.f_1[iParam1 /*63*/].f_60;
			break;
	
		case 13:
			*uParam2 = { Global_1142424.f_1[iParam1 /*63*/].f_35 };
			*uParam3 = Global_1142424.f_1[iParam1 /*63*/].f_57;
			break;
	
		case 14:
			*uParam2 = { Global_1142424.f_1[iParam1 /*63*/].f_7 };
			*uParam3 = Global_1142424.f_1[iParam1 /*63*/].f_47;
			break;
	
		case 15:
			*uParam2 = { Global_1142424.f_1[iParam1 /*63*/].f_10 };
			*uParam3 = Global_1142424.f_1[iParam1 /*63*/].f_47;
			break;
	
		default:
			return false;
	}

	return true;
}

float func_400(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xDA76 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_515(entityCoords, vParam1);
}

BOOL func_401() // Position - 0xDAC6 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_402() // Position - 0xDAE2 Hash - 0x35A4808D ^0x2E720068
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0;
}

int func_403(Hash hParam0, int iParam1) // Position - 0xDAF5 Hash - 0xBF7C616B ^0x65313C6E
{
	int num;
	int num2;
	var unk;
	var unk14;

	num2 = iParam1;
	iParam1 == 1;

	if (func_272(hParam0, -753854379))
		num = -1900508329;
	else
		num = -1463094839;

	unk.f_1 = 11;

	while (num2 > 10)
	{
		func_407(&unk, 964458272);
	
		if (!func_516(num, &unk, 0, 255, 0, false))
			return 0;
	
		num2 = num2 - 10;
	}

	unk14.f_1 = 11;

	switch (num2)
	{
		case 2:
			func_407(&unk14, 1206214767);
			break;
	
		case 3:
			func_407(&unk14, 1048858029);
			break;
	
		case 4:
			func_407(&unk14, 2003386234);
			break;
	
		case 5:
			func_407(&unk14, 1510933702);
			break;
	
		case 6:
			func_407(&unk14, -712967248);
			break;
	
		case 7:
			func_407(&unk14, -1206075160);
			break;
	
		case 8:
			func_407(&unk14, -246762689);
			break;
	
		case 9:
			func_407(&unk14, -414474431);
			break;
	
		case 10:
			func_407(&unk14, 964458272);
			break;
	}

	if (!func_516(num, &unk14, 0, 255, 0, false))
		return 0;

	return 1;
}

int func_404(Hash hParam0, int iParam1) // Position - 0xDC3D Hash - 0xF85B546C ^0xD42977AC
{
	if (Global_1144526[Global_1295666 /*83*/].f_74.f_8 != 0)
		return 0;

	Global_1144526[Global_1295666 /*83*/].f_74.f_8 = hParam0;
	Global_1144526[Global_1295666 /*83*/].f_74.f_6 = iParam1;
	Global_1144526[Global_1295666 /*83*/].f_74.f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	return 1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_405(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xDC93 Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

int func_406(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xDD86 Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_517(sParam0, sParam1, hParam2);
	return num2;
}

void func_407(int iParam0, int iParam1) // Position - 0xDDE9 Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

BOOL func_408(Hash hParam0, Any anParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0xDE19 Hash - 0x6004306F ^0xA72108A2
{
	var unk;

	unk.f_1 = 10;
	return func_518(hParam0, anParam1, iParam2, &unk, iParam3, iParam4, iParam5, bParam6);
}

void func_409(var uParam0, int iParam1) // Position - 0xDE3F Hash - 0x49A512C1 ^0x5081D805
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_519(uParam0, 1);
	func_520(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

BOOL func_410(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDE7B Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_521(hParam0, hParam1, &unk, &num, false, true))
		return 0;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_498(unk[i /*2*/].f_1))
				return 0;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_522(unk[i /*2*/].f_1))
				return 0;
		}
		else
		{
			num2 = func_523(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_524(unk[i /*2*/], num2);
			else
				num4 = func_325(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return 0;
			}
		}
	}

	return 1;
}

BOOL func_411() // Position - 0xDF82 Hash - 0x4ADE0BCB ^0x4ADE0BCB
{
	int num;

	num = { func_217(0) };

	if (func_44(num))
		if (num == 2 || num == 3 || num == 4 || num == 5 || num == 7)
			return true;

	return false;
}

const char* func_412(var uParam0, int iParam1) // Position - 0xDFD2 Hash - 0xB0CFF0C3 ^0xE7BB423
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_394(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_413(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14, var uParam15, var uParam16) // Position - 0xE008 Hash - 0xB09C796D ^0x553C8588
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam8;
	unk.f_1 = uParam9;
	unk.f_2 = uParam10;
	unk.f_3 = iParam12;
	unk.f_9 = uParam4;
	unk.f_9.f_1 = uParam5;
	unk.f_9.f_2 = uParam6;
	unk.f_9.f_3 = uParam7;
	unk.f_4.f_2 = uParam15;
	unk14.f_7 = 1;
	unk14 = uParam11;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_7 = uParam16;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam13, bParam14);
	return num;
}

int func_414(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19) // Position - 0xE095 Hash - 0x4A9388DC ^0x75B98721
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam11;
	unk.f_1 = uParam12;
	unk.f_2 = uParam13;
	unk.f_3 = iParam15;
	unk.f_9 = uParam7;
	unk.f_9.f_1 = uParam8;
	unk.f_9.f_2 = uParam9;
	unk.f_9.f_3 = uParam10;
	unk.f_4.f_2 = uParam18;
	unk14.f_9 = 1;
	unk14 = uParam14;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_6 = uParam4;
	unk14.f_7 = uParam5;
	unk14.f_8 = uParam6;
	unk14.f_9 = uParam19;
	num = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&unk, &unk14, iParam16, iParam17);
	return num;
}

int func_415(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0xE134 Hash - 0x51CE9407 ^0x19439D00
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam7;
	unk.f_1 = uParam8;
	unk.f_2 = uParam9;
	unk.f_3 = iParam11;
	unk.f_4 = uParam4;
	unk.f_4.f_1 = uParam6;
	unk.f_4.f_2 = uParam5;
	unk14.f_7 = 1;
	unk14 = uParam10;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam12, bParam13);
	return num;
}

int func_416(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16) // Position - 0xE1B0 Hash - 0xA374F5D ^0x1F00546A
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam10;
	unk.f_1 = uParam11;
	unk.f_2 = uParam12;
	unk.f_3 = iParam14;
	unk.f_4 = uParam7;
	unk.f_4.f_1 = uParam9;
	unk.f_4.f_2 = uParam8;
	unk14.f_9 = 1;
	unk14 = uParam13;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_6 = uParam4;
	unk14.f_7 = uParam5;
	unk14.f_8 = uParam6;
	unk14.f_9 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&unk, &unk14, iParam15, iParam16);
	return num;
}

int func_417(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14) // Position - 0xE23E Hash - 0xFAE6004A ^0xD53CD0F0
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam8;
	unk.f_1 = uParam9;
	unk.f_2 = uParam10;
	unk.f_3 = iParam12;
	unk.f_4 = uParam5;
	unk.f_4.f_1 = uParam7;
	unk.f_4.f_2 = uParam6;
	unk14.f_7 = 1;
	unk14 = uParam11;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_6 = uParam4;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam13, bParam14);
	return num;
}

int func_418(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14) // Position - 0xE2C0 Hash - 0xFAE6004A ^0xD53CD0F0
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam8;
	unk.f_1 = uParam9;
	unk.f_2 = uParam10;
	unk.f_3 = iParam12;
	unk.f_4 = uParam5;
	unk.f_4.f_1 = uParam7;
	unk.f_4.f_2 = uParam6;
	unk14.f_7 = 1;
	unk14 = uParam11;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = uParam2;
	unk14.f_4 = uParam3;
	unk14.f_5 = uParam4;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_RANKUP_TOAST(&unk, &unk14, iParam13, iParam14);
	return num;
}

int func_419(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xE33D Hash - 0xB88D7AA5 ^0x36259347
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam4;
	unk.f_1 = uParam5;
	unk.f_2 = uParam6;
	unk.f_3 = iParam8;
	unk14.f_7 = 1;
	unk14 = uParam7;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = uParam2;
	unk14.f_5 = uParam3;
	unk14.f_7 = 1;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam9, bParam10);
	return num;
}

int func_420(int iParam0) // Position - 0xE3A3 Hash - 0xD52E0195 ^0x6C5F51BC
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

void func_421(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE3EF Hash - 0x3169A239 ^0x47E831EC
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_525(iParam0, iParam1, iParam2, iParam3);
	return;
}

Hash func_422(Hash hParam0, BOOL bParam1) // Position - 0xE48D Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_468(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_423() // Position - 0xE4C6 Hash - 0x16C45944 ^0x16C45944
{
	return func_526(func_217(0));
}

BOOL func_424(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xE4D7 Hash - 0x1244E24C ^0xA4727049
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_203(hParam0, 0))
		return func_527(func_395(hParam0), hParam1, bParam2);

	if (func_293(hParam0) || func_272(hParam0, 1077060302))
		return func_470(func_294(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_19() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_528(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

Hash func_425(Hash hParam0, BOOL bParam1) // Position - 0xE59C Hash - 0x1EB0D738 ^0x1EB0D738
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_529(i, true, false);
	
		if (!func_310(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_530(unk[j /*2*/]))
				{
					if (!bParam1 || func_325(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_426(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE62F Hash - 0x147A7BD8 ^0x147A7BD8
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_529(i, false, true);
	
		if (!func_310(hParam0, hash3, &unk3, &num, true, false))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_469(unk3[j /*2*/]))
				{
					if (!bParam1 || func_325(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

BOOL func_427(BOOL bParam0) // Position - 0xE78E Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_428(Hash hParam0) // Position - 0xE7BE Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_272(hParam0, 1279601681);
}

struct<4> func_429(BOOL bParam0) // Position - 0xE7D1 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_201(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_92(923904168, func_91(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_92(923904168, func_91(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_92(923904168, func_91(bParam0), -740156546, false);
}

int func_430(Hash hParam0, BOOL bParam1) // Position - 0xE872 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_434(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_531();
		else
			return 1;

	return 0;
}

BOOL func_431(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE8A9 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_170(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_432(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xE8C4 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_532(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_433(BOOL bParam0) // Position - 0xE8E5 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_201(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_92(271701509, func_91(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_92(271701509, func_91(bParam0), 12999093, false);
}

Hash func_434(Hash hParam0) // Position - 0xE94F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_203(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_435(Hash hParam0, Hash hParam1) // Position - 0xE97A Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_434(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_533(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_436(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0xE9E7 Hash - 0x113CD144 ^0x113CD144
{
	return func_489(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_437(Hash hParam0) // Position - 0xE9FD Hash - 0xBF9BC979 ^0x2C23A458
{
	BOOL flag;
	Hash weaponUnlock;

	if (hParam0 == 0)
		return false;

	flag = false;

	if (func_19() == -1)
	{
		if (func_534(hParam0))
		{
			weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);
			flag = UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock);
		}
		else
		{
			return true;
		}
	}
	else
	{
		flag = UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	}

	return flag;
}

BOOL func_438(int* piParam0, BOOL bParam1) // Position - 0xEA47 Hash - 0x7D3BA1EA ^0x8B940399
{
	if (!bParam1)
		if (func_163(piParam0))
			return false;

	if (func_535(&(piParam0->f_6)))
		if (NETWORK::_0xE10F2D7715ABABEC(&(piParam0->f_6)))
			return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("Sell")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
		return false;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return false;

	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
		return false;

	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
		return false;

	return true;
}

BOOL func_439(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0xEAE3 Hash - 0xCDB04DC0 ^0xCDB04DC0
{
	Hash hash;

	if (func_536(hParam1))
	{
		hash = func_395(hParam1);
		return func_537(piParam0, hash, hParam7, iParam8, iParam9);
	}

	if (func_183(iParam9, 32))
		if (!func_538(hParam1, uParam2, hParam6))
			return false;

	if (!func_539(hParam1, hParam7, iParam9))
		return false;

	if (func_183(iParam9, 4))
		if (!func_540(piParam0, hParam1, uParam2, hParam6, hParam7, iParam8, false, bParam10))
			return false;

	if (func_183(iParam9, 8))
		return func_541(piParam0, hParam1, hParam7, iParam8);

	return true;
}

struct<17> func_440(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0xEB80 Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_92(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_317(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_202() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_441(int* piParam0, Hash hParam1) // Position - 0xEBFA Hash - 0x8927A1A4 ^0x3C5C8B8F
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_442(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0xEC18 Hash - 0x47A4DDC0 ^0xD98F8579
{
	int i;
	Hash category;
	Hash outSlotId;
	int hasSlotCount;
	var outInventoryItem;
	var unk16;
	int inventoryId;
	int childrenCount;
	int j;
	var unk30;
	var parentGuid;

	if (hParam0 != 0 && hParam1 != 0)
	{
		category = func_434(hParam1);
		hasSlotCount = func_542(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (func_533(hParam0, category, outSlotId))
				{
					*uParam4 = { func_304(hParam1, false, 0) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_92(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_201(false);
			unk30 = { func_304(hParam1, false, 0) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_92(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_434(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (func_533(hParam0, category, outSlotId))
							{
								if (func_543(parentGuid, outInventoryItem.f_9, &unk16, false, -1))
								{
									uParam4->f_4 = outInventoryItem.f_9;
									*uParam4 = { outInventoryItem.f_5 };
									*uParam3 = { unk16 };
									*uParam2 = outSlotId;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}

	*uParam2 = 0;
	return false;
}

BOOL func_443(Hash hParam0) // Position - 0xED98 Hash - 0x76026CA6 ^0xBFB83A0
{
	int num;

	num = func_333(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration"))
		return true;

	return false;
}

BOOL func_444(Hash hParam0) // Position - 0xEDC6 Hash - 0xD47FBCD ^0x782829D6
{
	return func_272(hParam0, 1282106666);
}

BOOL func_445(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, BOOL bParam12) // Position - 0xEDD9 Hash - 0xB722E8D ^0xB722E8D
{
	var unk;

	if (!func_438(piParam0, false))
		return false;

	if (!func_439(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, iParam11, bParam12))
		return false;

	unk = { func_440(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (!func_544(piParam0, &unk, 2113164098, bParam9, iParam11))
		return false;

	return true;
}

BOOL func_446(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, BOOL bParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, int iParam12, BOOL bParam13) // Position - 0xEE56 Hash - 0x7358E338 ^0x7358E338
{
	var unk;

	if (!func_438(piParam0, false))
		return false;

	if (hParam10 == 0)
		hParam10 = func_164(hParam1, hParam10, true, iParam12, true);

	if (!func_545(piParam0, hParam1, uParam2, hParam6, hParam10, iParam12))
		return false;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_8 = hParam1;
	unk.f_9 = 1;
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	unk.f_4 = { uParam2 };
	unk.f_11 = hParam6;
	unk.f_10 = bParam7;
	unk.f_14 = iParam11;

	if (bParam13)
	{
		unk.f_15 = func_317(hParam1, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_202() };
			unk.f_11 = 0;
		}
	}

	*uParam8 = { unk };

	if (!func_454(piParam0, unk, 2113164098, bParam9, iParam12))
		return false;

	return true;
}

BOOL func_447(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xEF36 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_502(false))
		return func_546(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_436(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_201(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

void func_448(int* piParam0) // Position - 0xEFAA Hash - 0x5C1070C8 ^0x6E5D9A2A
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_421(*piParam0, 4, 0, 0);
	}

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return;
}

BOOL func_449(int* piParam0) // Position - 0xEFDE Hash - 0x7EABA512 ^0xD3B85449
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_421(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_421(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_421(*piParam0, 2, 0, 0);
		return false;
	}

	func_421(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

int func_450(Hash hParam0, int iParam1) // Position - 0xF07B Hash - 0xC7686194 ^0xC7686194
{
	switch (hParam0)
	{
		case -2141145462:
			return 54;
	
		case -2139497371:
			return 79;
	
		case -2073547330:
			return 51;
	
		case -2066076661:
			return 101;
	
		case -2048056274:
			return 28;
	
		case -2038873145:
			return 57;
	
		case -1988984077:
			return 45;
	
		case -1976230089:
			return 71;
	
		case -1948083328:
			return 116;
	
		case -1915486054:
			return 39;
	
		case -1914604474:
			return 61;
	
		case -1894256235:
			return 11;
	
		case -1882615108:
			return 83;
	
		case -1879729569:
			return 7;
	
		case -1827447245:
			return 25;
	
		case -1816811601:
			return 78;
	
		case -1812870325:
			return 107;
	
		case -1672929718:
			return 110;
	
		case -1604265010:
			return 24;
	
		case -1549775456:
			return 23;
	
		case -1533288167:
			return 86;
	
		case -1461871483:
			return 75;
	
		case -1327698122:
			return 58;
	
		case -1309844859:
			return 81;
	
		case -1271310569:
			return 74;
	
		case -1239377811:
			return 76;
	
		case -1221836150:
			return 95;
	
		case -1190908814:
			return 47;
	
		case -1169075737:
			return 50;
	
		case -1157194180:
			return 37;
	
		case -1151085798:
			return 38;
	
		case -1019271530:
			return 17;
	
		case -944178516:
			return 33;
	
		case -937655290:
			return 60;
	
		case -936508922:
			return 109;
	
		case -907971236:
			return 72;
	
		case -875426853:
			return 5;
	
		case -863017340:
			return 99;
	
		case -835345303:
			return 64;
	
		case -832908671:
			return 55;
	
		case -759061492:
			return 26;
	
		case -692335380:
			return 90;
	
		case -675093902:
			return 3;
	
		case -638835602:
			return 2;
	
		case -596510485:
			return 103;
	
		case -585098035:
			return 53;
	
		case -520556863:
			return 92;
	
		case -378561682:
			return 67;
	
		case -377574959:
			return 40;
	
		case -367868014:
			return 22;
	
		case -353010695:
			return 89;
	
		case -350556716:
			return 88;
	
		case -102827824:
			return 41;
	
		case -102545856:
			return 82;
	
		case -82191741:
			return 94;
	
		case 0:
			return 119;
	
		case 7562841:
			return 112;
	
		case 41932468:
			return 42;
	
		case 72801698:
			return 85;
	
		case 104820669:
			return 84;
	
		case 175025255:
			return 100;
	
		case 205166155:
			return 62;
	
		case 214785091:
			return 49;
	
		case 229544920:
			return 96;
	
		case 253727941:
			return 73;
	
		case 266787856:
			return 98;
	
		case 358997942:
			return 70;
	
		case 530671939:
			return 21;
	
		case 558731558:
			return 65;
	
		case 693005399:
			return 14;
	
		case 709801630:
			return 105;
	
		case 713508039:
			return 93;
	
		case 744226541:
			return 20;
	
		case 745945503:
			return 102;
	
		case 757105507:
			return 6;
	
		case 787316203:
			return 8;
	
		case 790678034:
			return 15;
	
		case 805845691:
			return 48;
	
		case 911414965:
			return 31;
	
		case 978801228:
			return 80;
	
		case 992695664:
			return 59;
	
		case 1062881804:
			return 32;
	
		case 1105471824:
			return 27;
	
		case 1128086492:
			return 115;
	
		case 1131758526:
			return 69;
	
		case 1139025222:
			return 114;
	
		case 1183803081:
			return 18;
	
		case 1190538002:
			return 106;
	
		case 1250977037:
			return 113;
	
		case 1261138928:
			return 10;
	
		case 1261539922:
			return 46;
	
		case 1285391378:
			return 13;
	
		case 1306457250:
			return 68;
	
		case 1314299724:
			return 118;
	
		case 1338756401:
			return 19;
	
		case 1400887301:
			return 34;
	
		case 1423490462:
			return 97;
	
		case 1437199060:
			return 43;
	
		case 1440632655:
			return 36;
	
		case 1472024063:
			return 52;
	
		case 1504223919:
			return 91;
	
		case 1562378696:
			return 111;
	
		case 1639899405:
			return 77;
	
		case 1706052688:
			return 12;
	
		case 1741725206:
			return 29;
	
		case 1747661667:
			return 1;
	
		case 1753192824:
			return 108;
	
		case 1780028424:
			return 63;
	
		case 1848029806:
			return 4;
	
		case 1865339861:
			return 35;
	
		case 1901448492:
			return 30;
	
		case 1921351553:
			return 66;
	
		case 1961205920:
			return 56;
	
		case 1985273028:
			return 44;
	
		case joaat("SLOT_UNARMED"):
			return 117;
	
		case 1995043222:
			return 104;
	
		case 2031132011:
			return 16;
	
		case 2041846130:
			return 87;
	
		case 2069893421:
			return 0;
	
		case 2129028479:
			return 9;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

struct<2> func_451(int iParam0, int iParam1) // Position - 0xF5BC Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_452(var uParam0, var uParam1, int iParam2) // Position - 0xF5D2 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_453(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20, int iParam21) // Position - 0xF5EF Hash - 0x27F47D9F ^0x50F07084
{
	if (hParam19 != 2113164098 && hParam19 != joaat("Sell") && hParam19 != joaat("UPDATE"))
		return false;

	if (!func_547(hParam19, &uParam1, iParam21))
		return false;

	if (!func_548(piParam0, hParam19))
		return false;

	if (func_549(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_550(piParam0, bParam20);
}

BOOL func_454(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, Hash hParam18, BOOL bParam19, int iParam20) // Position - 0xF65F Hash - 0x41A6941 ^0x70576B24
{
	if (hParam18 != 2113164098 && hParam18 != joaat("Sell") && hParam18 != joaat("UPDATE") && hParam18 != joaat("use") && hParam18 != joaat("spend"))
		return false;

	if (!func_547(hParam18, &uParam1, iParam20))
		return false;

	if (!func_548(piParam0, hParam18))
		return false;

	if (func_551(*piParam0, hParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_550(piParam0, bParam19);
}

int func_455(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF6E9 Hash - 0x89D1598B ^0xCCC7E0FA
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (func_293(hParam0) || func_272(hParam0, 1077060302))
		return func_475(func_294(hParam0, false), iParam1, hParam2, bParam4, true);

	if (!func_310(hParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam4;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam4;
	return 0;
}

void func_456(char* sParam0, char* sParam1, BOOL bParam2) // Position - 0xF784 Hash - 0xC649C280 ^0xBF0E7B5A
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, bParam2);
		Global_1958642[Global_1958642.f_25] = soundId;
		Global_1958642.f_25 = (Global_1958642.f_25 + 1) % 24;
	}

	return;
}

Hash func_457(Hash hParam0, int iParam1) // Position - 0xF7C3 Hash - 0x420155F1 ^0x713AD4BE
{
	if (!func_203(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(hParam0, iParam1))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_SOUND(hParam0, iParam1);
}

void func_458(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xF7F2 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_434(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_459(Any* panParam0) // Position - 0xF9C8 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_312(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

int func_460(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xF9E4 Hash - 0x8F656380 ^0x6EA8E62C
{
	if (!func_312(&uParam0))
		return 0;

	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

BOOL func_461(int iParam0) // Position - 0xFA00 Hash - 0xEDFD4796 ^0x397F66B9
{
	if (iParam0 <= 0)
		return false;

	return NETWORK::GET_CLOUD_TIME_AS_INT() + func_552() > iParam0;
}

BOOL func_462(int iParam0, int iParam1) // Position - 0xFA1E Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_463(int iParam0) // Position - 0xFA36 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_465(iParam0, 4))
		return false;

	return true;
}

BOOL func_464(int iParam0) // Position - 0xFA4D Hash - 0x7F4C96B ^0x650690F6
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_465(int iParam0, int iParam1) // Position - 0xFB19 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_466(int iParam0) // Position - 0xFB32 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_467() // Position - 0xFB45 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_56())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_468(Hash hParam0, int iParam1) // Position - 0xFB60 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_469(Hash hParam0) // Position - 0xFB7A Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_434(hParam0) == -126813555;
}

BOOL func_470(Hash hParam0, Hash hParam1) // Position - 0xFB8E Hash - 0x86D562BB ^0xB258F193
{
	var outData;
	int outUnk;
	Hash unlockHash;
	int num;
	int i;
	int j;

	outData = 10;
	outData.f_1.f_4 = 15;
	outData.f_1.f_36 = 10;
	outData.f_1.f_47.f_4 = 15;
	outData.f_1.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(hParam0, &outData, &outUnk, 10) || outUnk == 0)
		return false;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == hParam1)
		{
			num = outData[i /*47*/].f_35;
		
			for (j = 0; j < num; j = j + 1)
			{
				unlockHash = outData[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

Hash func_471(Hash hParam0, BOOL bParam1) // Position - 0xFCD7 Hash - 0x73CC7FFA ^0x73CC7FFA
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_529(i, true, false);
	
		if (!func_521(hParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_530(unk[j /*2*/]))
				{
					if (!bParam1 || func_325(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_472(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFD6A Hash - 0x2596799 ^0x2596799
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_529(i, false, true);
	
		if (!func_521(hParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_469(unk3[j /*2*/]))
				{
					if (!bParam1 || func_325(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

BOOL func_473(Hash hParam0, Hash hParam1, int iParam2) // Position - 0xFEC9 Hash - 0x67DCAB3C ^0x67DCAB3C
{
	if (hParam0 == 0)
		return false;

	if (!func_320(hParam0, hParam1, false))
		return false;

	if (func_183(iParam2, 2))
		if (func_470(hParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return false;

	if (func_183(iParam2, 8))
		return func_553(hParam0, hParam1);

	return true;
}

BOOL func_474(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20) // Position - 0xFF29 Hash - 0xCC3F3D79 ^0x430250A2
{
	if (hParam19 != 541670136)
		return false;

	if (!func_554(uParam1))
		return false;

	if (!func_548(piParam0, hParam19))
		return false;

	if (func_555(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_550(piParam0, bParam20);
}

int func_475(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xFF7D Hash - 0x1EBCD943 ^0x1EBCD943
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_521(hParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

Hash func_476(Hash hParam0, int iParam1) // Position - 0xFFE9 Hash - 0x77A7298F ^0x7645532C
{
	int num;
	var unk;
	Hash hash;

	if (!func_203(hParam0, 0))
		return 0;

	num = func_333(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_272(hParam0, 1399091007))
	{
		func_556(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_477(Hash hParam0, BOOL bParam1) // Position - 0x10064 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_557(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_558(&unk, func_429(false));

	if (!func_559(&unk, &num, &num2, false))
		return 0;

	func_485(num);
	return num2;
}

struct<4> func_478(Hash hParam0, BOOL bParam1) // Position - 0x100C3 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_304(hParam0, bParam1, 0) };
	return func_92(hParam0, unk, unk.f_4, bParam1);
}

int func_479(int iParam0, int iParam1) // Position - 0x100E8 Hash - 0xAC085F26 ^0xAC085F26
{
	switch (iParam0)
	{
		case joaat("hennigans_stead_camp"):
			return 8;
	
		case joaat("rio_bravo_camp"):
			return 9;
	
		case joaat("roanoke_ridge_camp"):
			return 10;
	
		case joaat("great_plains_camp"):
			return 6;
	
		case joaat("cumberland_forest_camp"):
			return 4;
	
		case joaat("tall_trees_camp"):
			return 12;
	
		case joaat("cholla_springs_camp"):
			return 3;
	
		case joaat("grizzlies_camp"):
			return 0;
	
		case joaat("gaptooth_ridge_camp"):
			return 5;
	
		case joaat("bayou_nawas_camp"):
			return 1;
	
		case joaat("scarlett_meadows_camp"):
			return 11;
	
		case joaat("heartland_camp"):
			return 7;
	
		case joaat("big_valley_camp"):
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_480(var uParam0, var uParam1, var uParam2) // Position - 0x10190 Hash - 0x83D2D68D ^0x30F75DA
{
	var unk;
	int numNodes;

	if (!func_186(&unk, uParam0))
		return 0;

	unk.f_2 = -265879762;
	unk.f_3 = 0;
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
	return numNodes;
}

int func_481(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x101C2 Hash - 0x12E5A787 ^0x3FADD01E
{
	int num;
	int num2;
	var unk;

	num = 0;

	if (!func_186(&unk, uParam1))
		return 0;

	unk.f_2 = -265879762;
	unk.f_3 = iParam0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 536676462;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num2, &unk))
			num = num2;
	}

	num == 0;
	return num;
}

BOOL func_482(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x1021B Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_201(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_483(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x10242 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_484(Hash hParam0) // Position - 0x1027D Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_485(int iParam0) // Position - 0x10298 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_486(Hash hParam0) // Position - 0x102B9 Hash - 0xB8EC44B7 ^0x72487142
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_487(var uParam0, int iParam1) // Position - 0x1039C Hash - 0x6AC2726E ^0xDB215040
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_488(Hash hParam0) // Position - 0x103D9 Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_434(hParam0);

	switch (num)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

BOOL func_489(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x10446 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_201(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_490(var uParam0, var uParam1, var uParam2) // Position - 0x10480 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_560(uParam0, 0f, 0f, 0, 2);
	return func_560(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

Vector3 func_491(BOOL bParam0) // Position - 0x104BB Hash - 0xAC89079C ^0xF0D7C0AA
{
	float num;
	int value;
	int value2;

	value = bParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(bParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (bParam0 & 1073741824 == 0)
		num = num * -1f;

	if (bParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

Hash func_492(int iParam0) // Position - 0x10517 Hash - 0xB8EC44B7 ^0x72448428
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 46:
		case 57:
		case 58:
		case 59:
		case 67:
		case 68:
		case 69:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 47:
		case 48:
		case 50:
		case 51:
		case 52:
		case 53:
		case 99:
			return joaat("BLIP_STYLE_SHOP");
	
		case 45:
			return -1923570663;
	
		case 49:
			return -691985497;
	
		case 54:
		case 55:
		case 56:
			return joaat("BLIP_STYLE_PROPERTY");
	
		case 60:
		case 97:
			return joaat("BLIP_STYLE_CAMP");
	
		case 61:
		case 62:
		case 63:
		case 64:
			return joaat("BLIP_STYLE_EVENT_AREA");
	
		case 65:
			return joaat("BLIP_STYLE_MP_HIDEOUT");
	
		case 66:
			return joaat("BLIP_STYLE_RCM");
	
		case 71:
			return joaat("BLIP_STYLE_TOWN");
	
		case 98:
			return 776060936;
	
		case 101:
			return joaat("BLIP_STYLE_TOWN");
	
		default:
		
	}

	return 0;
}

eBlipSprite func_493(int iParam0) // Position - 0x1074F Hash - 0xBA965109 ^0x9E3CAF65
{
	switch (iParam0)
	{
		case 1:
			return joaat("blip_mg_blackjack");
	
		case 2:
			return joaat("blip_mg_dominoes");
	
		case 3:
			return joaat("blip_mg_poker");
	
		case 4:
			return joaat("blip_mg_five_finger_fillet");
	
		case 5:
			return joaat("blip_summer_cow");
	
		case 6:
			return joaat("blip_summer_horse");
	
		case 7:
			return joaat("blip_fence_building");
	
		case 8:
			return joaat("blip_mg_dominoes_all3s");
	
		case 9:
			return joaat("blip_mg_dominoes_all5s");
	
		case 10:
			return joaat("blip_mg_dominoes_draw");
	
		case 11:
			return joaat("blip_mg_five_finger_fillet_burnout");
	
		case 12:
			return joaat("blip_mg_five_finger_fillet_guts");
	
		case 13:
			return joaat("blip_ambient_herd");
	
		case 14:
			return joaat("blip_proc_loanshark");
	
		case 16:
			return joaat("blip_proc_bounty_poster");
	
		case 17:
			return joaat("blip_ambient_coach");
	
		case 18:
			return joaat("blip_ambient_train");
	
		case 19:
			return joaat("blip_ambient_riverboat");
	
		case 20:
			return joaat("blip_shop_store");
	
		case 21:
			return joaat("blip_shop_shady_store");
	
		case 22:
			return joaat("blip_ambient_quartermaster");
	
		case 23:
			return joaat("blip_shop_gunsmith");
	
		case 24:
			return joaat("blip_shop_coach_fencing");
	
		case 25:
			return joaat("blip_shop_doctor");
	
		case 26:
			return joaat("blip_shop_tailor");
	
		case 27:
			return joaat("blip_saloon");
	
		case 28:
			return joaat("blip_shop_blacksmith");
	
		case 29:
			return joaat("blip_shop_trainer");
	
		case 30:
			return joaat("blip_shop_train");
	
		case 31:
			return joaat("blip_shop_barber");
	
		case 32:
			return joaat("blip_shop_butcher");
	
		case 33:
			return joaat("blip_post_office");
	
		case 34:
			return joaat("blip_post_office_rec");
	
		case 35:
			return joaat("blip_shop_tackle");
	
		case 36:
			return joaat("blip_shop_animal_trapper");
	
		case 37:
			return joaat("blip_shop_horse");
	
		case 38:
			return joaat("blip_shop_horse_fencing");
	
		case 39:
			return joaat("blip_shop_horse_saddle");
	
		case 40:
			return joaat("blip_hotel_bed");
	
		case 41:
			return joaat("blip_photo_studio");
	
		case 42:
			return joaat("blip_ambient_law");
	
		case 43:
			return joaat("blip_mp_ordered_item");
	
		case 44:
			return joaat("blip_mp_butcher_table");
	
		case 45:
			return joaat("blip_shop_honor");
	
		case 46:
			return joaat("blip_ambient_theatre");
	
		case 47:
			return joaat("blip_ambient_quartermaster");
	
		case 48:
			return joaat("blip_mp_travelling_saleswoman");
	
		case 49:
			return joaat("blip_business_moonshine");
	
		case 50:
			return joaat("blip_moonshine_still");
	
		case 51:
			return -1017650267;
	
		case 52:
			return joaat("blip_shop_wardrobe");
	
		case 53:
			return joaat("blip_stable");
	
		case 54:
			return joaat("blip_proc_home");
	
		case 55:
			return joaat("blip_proc_home_locked");
	
		case 56:
			return joaat("blip_proc_home");
	
		case 57:
			return joaat("blip_ambient_telegraph");
	
		case 58:
			return joaat("blip_ambient_coach_taxi");
	
		case 59:
			return joaat("blip_ambient_theatre");
	
		case 60:
			return joaat("blip_region_caravan");
	
		case 61:
			return joaat("blip_event_appleseed");
	
		case 62:
			return joaat("blip_event_castor");
	
		case 63:
			return joaat("blip_event_railroad_camp");
	
		case 64:
			return joaat("blip_event_riggs_camp");
	
		case 65:
			return joaat("blip_region_hideout");
	
		case 66:
			return joaat("blip_proc_home");
	
		case 67:
			return joaat("blip_mg_fishing");
	
		case 68:
			return joaat("blip_ambient_theatre");
	
		case 69:
			return joaat("blip_ambient_theatre");
	
		case 71:
			return joaat("blip_town");
	
		case 97:
			return joaat("blip_camp");
	
		case 98:
			return joaat("blip_camp");
	
		case 99:
			return joaat("blip_grub");
	
		case 101:
			return joaat("blip_town");
	
		default:
			break;
	}

	return BLIP_HIGHER;
}

var func_494(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x10C3C Hash - 0x63C3F71D ^0x3019B977
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

	if (func_561() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_562());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_562());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_562());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_563(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_564(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_565(i) != 1)
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
					if (!func_566(player2))
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

float func_495(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x10FCF Hash - 0x9F66817B ^0xCA5C01B6
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

int func_496(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0x11034 Hash - 0x7D4A7F9 ^0x7D4A7F9
{
	if (!func_203(hParam0, 0))
		return 0;

	return func_501(hParam0, hParam2, true, bParam1, true, 0);
}

int func_497(Any anParam0) // Position - 0x11058 Hash - 0x76E7BE82 ^0xFEC3730C
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return -1;

	if (anParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
		return func_216(PLAYER::PLAYER_ID());

	return func_236(GANG::NETWORK_GET_GANG_LEADER(anParam0));
}

BOOL func_498(int iParam0) // Position - 0x11090 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_19() == 0)
		return func_567(iParam0);

	return iParam0 <= func_568();
}

int func_499(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x110BD Hash - 0x96C86EC7 ^0x4A9351FF
{
	int num;

	if (hParam0 != joaat("UPDATE"))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_570(func_569(num, hParam0, panParam1), num, panParam1);
	else
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 20), num, panParam1);

	return -1;
}

BOOL func_500() // Position - 0x1111B Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

// Unhandled jump detected. Output should be considered invalid
int func_501(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x11137 Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_300(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_293(hParam0) || func_272(hParam0, 1077060302))
		return func_572(func_294(hParam0, false), hParam1, bParam3, true);

	if (!func_310(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_502(BOOL bParam0) // Position - 0x11227 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_19() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_201(bParam0));
}

BOOL func_503(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x11245 Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_203(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_317(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_573(hParam0, iParam1, iParam2, iParam3, bParam4);

	unk = { func_304(hParam0, bParam4, 0) };
	unk6 = { func_92(hParam0, unk, unk.f_4, bParam4) };
	return func_574(hParam0, &unk6, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_504(Hash hParam0) // Position - 0x112BD Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_505(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x112EA Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_575(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_570(func_551(num, hParam0, panParam1), num, panParam1);
	else
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

var func_506(Any anParam0) // Position - 0x11354 Hash - 0x17E198BB ^0x87862F46
{
	var memberHandles;
	var value;
	int gangMembers;
	int i;
	Player playerFromGamerHandle;

	memberHandles = 7;
	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(anParam0, &memberHandles);

	if (gangMembers == 0)
		return value;

	i = 0;

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, playerFromGamerHandle);
	}

	return value;
}

var func_507(BOOL bParam0, var uParam1, var uParam2) // Position - 0x113AD Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_508(int iParam0, int iParam1) // Position - 0x113C4 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*iParam0 = *iParam0 - *iParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*iParam0 = *iParam0 | -2147483648;
	}
	else
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*iParam0 = *iParam0 - *iParam0 & -2147483648;
	}

	return;
}

void func_509(int iParam0, int iParam1) // Position - 0x1144A Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_510(int iParam0, int iParam1) // Position - 0x11486 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_380(*iParam0);
	num2 = func_381(*iParam0);

	if (iParam1 < 1 || iParam1 > func_576(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_511(int iParam0, int iParam1) // Position - 0x114D9 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_512(int iParam0, int iParam1) // Position - 0x11514 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_513(int iParam0, int iParam1) // Position - 0x1154D Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_514() // Position - 0x11585 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

float func_515(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x115A6 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_516(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x115C4 Hash - 0x8F78F78D ^0x786F6689
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	return func_518(iParam0, &unk, iParam1, &unk5, iParam2, iParam3, iParam4, bParam5);
}

void func_517(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x115EA Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_518(Hash hParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1161B Hash - 0x72C1A759 ^0xD848AFAA
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_407(iParam2, -372840566);

	SECURE_STORE(&unk, hParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_577(anParam1, hParam0, unk2);
	return 1;
}

void func_519(var uParam0, int iParam1) // Position - 0x116FC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_520(var uParam0, int iParam1) // Position - 0x1170D Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_521(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x11722 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_319(hParam0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_578(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_522(int iParam0) // Position - 0x117B1 Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_523(int iParam0, Hash hParam1) // Position - 0x117D4 Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_272(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_524(Hash hParam0, int iParam1) // Position - 0x117F9 Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_203(hParam0, 0))
		return 0;

	unk = { func_91(false) };
	unk.f_4 = func_579(iParam1);
	guid = { func_92(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_201(false), &guid, false);
	return inventoryItemCountWithGuid;
}

void func_525(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11854 Hash - 0xBC161045 ^0xD3B33F74
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_580(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

BOOL func_526(var uParam0, var uParam1) // Position - 0x11930 Hash - 0x1268D0E3 ^0x1268D0E3
{
	return func_581(uParam0, 5, 8);
}

BOOL func_527(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x11943 Hash - 0x5E278D9E ^0x9ED660B8
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_468(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_19() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_582(hParam0, hParam1, &unk, &num) || num < 1)
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return 1;
		}
	}

	return 0;
}

BOOL func_528(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x119D1 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_203(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	if (outData.f_35 > 10)
		outData.f_35 = 10;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

Hash func_529(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11A55 Hash - 0xC67FD48A ^0x72A5971A
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_530(Hash hParam0) // Position - 0x11AF1 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_434(hParam0) == 1946043663;
}

int func_531() // Position - 0x11B05 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_583(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_532(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x11B22 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_201(false);
	*panParam1 = { func_92(hParam0, func_429(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_533(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x11B67 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_534(Hash hParam0) // Position - 0x11B9A Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_333(hParam0) == joaat("WEAPON");
}

BOOL func_535(Any anParam0) // Position - 0x11BAE Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_536(Hash hParam0) // Position - 0x11BF4 Hash - 0xA7C375F ^0xA7C375F
{
	Hash hash;

	hash = func_395(hParam0);

	if (func_468(hash, 2))
		return true;

	return false;
}

BOOL func_537(int* piParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x11C13 Hash - 0x48FFE57F ^0x48FFE57F
{
	int num;
	var unk;
	var unk2;
	int i;
	var unk4;
	Hash hash;
	var unk85;
	var unk89;

	if (!func_468(hParam1, 2))
		return 0;

	unk2 = 1;
	unk4 = 16;
	func_584(hParam1, &unk2, &unk, &unk4, &num);

	if (func_183(iParam4, 8) && !func_585(hParam1, hParam2, iParam3))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk4[i /*5*/].f_1 == joaat("SLOTID_NONE"))
		{
			hash = unk4[i /*5*/];
		
			if (func_183(iParam4, 4))
				if (!func_540(piParam0, hash, unk85, unk89, hParam2, iParam3 * unk4[i /*5*/].f_4, true, true))
					return 0;
		}
	}

	return 1;
}

BOOL func_538(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x11CBE Hash - 0x7947EF49 ^0x975F946
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_436(uParam1, &unk, true, false, -1))
		return false;

	if (!func_533(hParam0, func_434(unk.f_4), hParam5))
		return false;

	return true;
}

BOOL func_539(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x11D0F Hash - 0xAE4FAB93 ^0xAE4FAB93
{
	if (func_183(iParam2, 1))
		if (!func_437(hParam0))
			return false;

	if (func_183(iParam2, 2))
		if (func_424(hParam0, hParam1, true))
			return false;

	return true;
}

BOOL func_540(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x11D4A Hash - 0xFE04F182 ^0x2B0693EE
{
	var unk;
	Hash hash;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2))
		return false;

	unk.f_4 = hParam6;
	unk = { uParam2 };
	hash = func_170(hParam1, uParam2, hParam6, true, !bParam10, false);
	num = func_586(hParam1, &unk, !bParam10, true);

	if (bParam9)
		num2 = 1;
	else
		func_587(hParam1, hParam7, &num2, false);

	num3 = func_588(piParam0, hParam1) * num2;
	num3 > 0;

	if (num >= 0)
	{
		num4 = num - (hash + num3);
		num5 = iParam8 * num2;
	
		if (num5 > num)
			num5 = num;
	
		if (num4 <= 0)
			return false;
		else if (num5 - num4 >= num2)
			return false;
	}

	return true;
}

BOOL func_541(int* piParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x11E01 Hash - 0xB3A38359 ^0x1BC7DBE9
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;
	var unk3;

	if (func_589(hParam1, true) && !func_590(hParam1, true))
	{
		if (Global_1915656.f_20644)
			func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
	
		return 0;
	}

	if (hParam2 == -570078785)
	{
		num = func_501(hParam1, -570078785, true, false, true, 0);
		num == 0;
		num2 = num * iParam3;
	
		if (!func_522(num2 + func_592(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", num2 / 100));
		
			return 0;
		}
	}
	else if (hParam2 == -915411861)
	{
		num3 = func_501(hParam1, -915411861, true, false, true, 0);
		num3 == 0;
		num4 = num3 * iParam3;
	
		if (!func_498(num4 + func_592(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_591("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam2 == 997808187)
	{
		return 1;
	}

	if (func_468(func_395(hParam1), 2))
		if (!func_593(func_395(hParam1), iParam3, hParam2, &unk, true))
			return 0;
	else if (func_203(hParam1, 0))
		if (!func_594(hParam1, iParam3, hParam2, &unk, &unk3, false, true, false))
			return 0;

	return 1;
}

int func_542(Hash hParam0) // Position - 0x11F49 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_203(hParam0, 0))
		return 0;

	category = func_434(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_543(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x11F78 Hash - 0x113CD144 ^0x113CD144
{
	return func_336(&uParam0, hParam4, panParam5, bParam6, iParam7);
}

BOOL func_544(int* piParam0, Any* panParam1, Hash hParam2, BOOL bParam3, int iParam4) // Position - 0x11F8E Hash - 0x3AC44E6C ^0xC544632E
{
	var unk;
	int num;

	unk = 15;

	if (!func_310(panParam1->f_8, panParam1->f_13, &unk, &num, true, false))
		return false;

	switch (num)
	{
		case 1:
			return func_595(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 2:
			return func_596(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 3:
			return func_597(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 4:
			return func_598(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 5:
			return func_599(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 6:
			return func_600(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 7:
			return func_601(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 8:
			return func_602(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 9:
			return func_603(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 10:
			return func_604(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 11:
			return func_605(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 12:
			return func_606(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 13:
			return func_607(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 14:
			return func_608(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 15:
			return func_609(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		default:
		
	}

	return false;
}

BOOL func_545(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8) // Position - 0x12136 Hash - 0x2426DBFB ^0x2426DBFB
{
	if (!func_439(piParam0, hParam1, uParam2, hParam6, hParam7, 1, iParam8, true))
		return false;

	if (func_183(iParam8, 4) && func_431(hParam1, &uParam2, hParam6, true, false))
		return false;

	return true;
}

int func_546(Any* panParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1217A Hash - 0x85BC54D5 ^0xA60D4F06
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk70;
	var unk88;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_436(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == bParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_333(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_610(*panParam0, true, false) };
		unk15.f_10 = bParam1;
		num = func_611(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_612(*panParam0, true, false) };
		unk44.f_10 = bParam1;
		num = func_613(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_614(*panParam0, true, false) };
		unk70.f_10 = bParam1;
		num = func_615(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_357(&unk, false) };
		unk88.f_10 = bParam1;
		num = func_505(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_547(Hash hParam0, Any* panParam1, int iParam2) // Position - 0x122BD Hash - 0xF56A9866 ^0x83AC84D6
{
	if (panParam1->f_9 < 1)
		return false;

	if (!func_203(panParam1->f_8, 0) && !func_468(func_395(panParam1->f_8), 2))
		return false;

	if (func_183(iParam2, 128))
		if (!func_468(func_395(panParam1->f_8), 2))
			if (func_434(panParam1->f_8) == 0)
				return false;

	if (func_183(iParam2, 16))
		if (!func_575(hParam0, panParam1))
			return false;

	return true;
}

BOOL func_548(int* piParam0, Hash hParam1) // Position - 0x1233D Hash - 0x8DE7BD5B ^0x83B9042B
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_441(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_449(piParam0))
			return false;
	
		if (!func_441(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_549(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x123A0 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_550(int* piParam0, BOOL bParam1) // Position - 0x123B7 Hash - 0x5B4FA9A9 ^0x92224A48
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_449(piParam0);

	return true;
}

BOOL func_551(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x123D8 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_552() // Position - 0x123EF Hash - 0xD8853F79 ^0x219536E8
{
	int value;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
		return 604800;

	value = 604800;

	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &value))
		return 604800;

	return value;
}

BOOL func_553(Hash hParam0, Hash hParam1) // Position - 0x12433 Hash - 0xB71B0B73 ^0x69D8FE5C
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_572(hParam0, -570078785, false, true);
		num == 0;
	
		if (!func_522(num))
		{
			if (Global_1915656.f_20644)
				func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_616(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_572(hParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_498(num2))
		{
			if (Global_1915656.f_20644)
				func_591("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_410(hParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_554(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x124ED Hash - 0x195DA727 ^0x43C01C6A
{
	if (!func_319(uParam0.f_17))
		return false;

	return true;
}

BOOL func_555(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x12506 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

void func_556(Hash hParam0, var uParam1, var uParam2) // Position - 0x1251D Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_557(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x12729 Hash - 0x90CCF0F4 ^0xA5F3D799
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

void func_558(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x12807 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_559(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x12822 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_201(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_560(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x12847 Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

int func_561() // Position - 0x1288F Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_562() // Position - 0x1289D Hash - 0x306ACA3A ^0xF0A54113
{
	return "unnamed";
}

BOOL func_563(int iParam0) // Position - 0x128A9 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_564(int iParam0) // Position - 0x12938 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_241(36, iParam0);
}

int func_565(int iParam0) // Position - 0x12956 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_566(Player plParam0) // Position - 0x129A1 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_617(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_618(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_567(int iParam0) // Position - 0x129E6 Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_568() // Position - 0x12A09 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_19() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_569(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x12A24 Hash - 0xCB22F679 ^0xC265E6B6
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 20, panParam2, 0);
}

int func_570(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x12A3B Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_421(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_421(iParam1, 2, 0, 0);
	return -1;
}

int func_571(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x12A84 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_421(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_572(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12AA0 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_521(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

BOOL func_573(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x12B34 Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_619(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_317(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_502(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_620(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_621(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_505(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_168(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_201(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_574(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x12C4C Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_619(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_436(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_502(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_19() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_505(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_168(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_201(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_575(Hash hParam0, Any* panParam1) // Position - 0x12D6A Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_622(panParam1->f_8, hParam0, num, 2048) || func_622(panParam1->f_8, hParam0, num, 32768) || func_622(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_622(panParam1->f_8, hParam0, num, 4) || func_622(panParam1->f_8, hParam0, num, 256) || func_622(panParam1->f_8, hParam0, num, 65536) || func_622(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_622(panParam1->f_8, hParam0, num, 1) || func_622(panParam1->f_8, hParam0, num, 8) || func_622(panParam1->f_8, hParam0, num, 65536) || func_622(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_622(panParam1->f_8, hParam0, num, 1) || func_622(panParam1->f_8, hParam0, num, 16) || func_622(panParam1->f_8, hParam0, num, 2) || func_622(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_622(panParam1->f_8, hParam0, num, 8) || func_622(panParam1->f_8, hParam0, num, 4096) || func_622(panParam1->f_8, hParam0, num, 256) || func_622(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

int func_576(int iParam0, int iParam1) // Position - 0x12F40 Hash - 0x893AC59E ^0x893AC59E
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

void func_577(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x12FDA Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_535(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

void func_578(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x13095 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_434(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_579(int iParam0) // Position - 0x1326B Hash - 0xF00685F3 ^0x39EB3A7D
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

void func_580(int iParam0) // Position - 0x1329C Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_623(&(iParam0->f_4));
	return;
}

BOOL func_581(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x132BF Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_44(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_624(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_582(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x132FA Hash - 0x8EAA10FC ^0x9E3F883B
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_468(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_625(hParam0, hParam1, &unk))
		return false;

	if (unk.f_35 > 10)
		unk.f_35 = 10;

	*uParam3 = unk.f_35;

	for (i = 0; i < unk.f_35; i = i + 1)
	{
		uParam2->[i] = unk.f_36[i];
	}

	return true;
}

int func_583(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1337E Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_626(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_201(bParam1), hParam0, bParam3);
}

int func_584(Hash hParam0, Any anParam1, var uParam2, var uParam3, var uParam4) // Position - 0x133B1 Hash - 0xBDBB6885 ^0xBDBB6885
{
	Hash key;
	Hash outData;
	int i;
	int j;
	int num;

	if (!func_468(hParam0, 2))
		return 0;

	if (*uParam2 > *anParam1)
		return 0;

	for (i = 0; i < *anParam1; i = i + 1)
	{
	}

	num = ITEMDATABASE::_0x799FCD53358ED5FA(hParam0, anParam1);

	for (j = 0; j < num; j = j + 1)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(hParam0, anParam1, j, &key))
		{
			if (anParam1->[0] == 0)
			{
				anParam1->[0] = key;
			}
			else
			{
				*uParam2 = *uParam2 + 1;
				anParam1->[*uParam2] = key;
			}
		
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(key, &outData))
			{
				if (func_203(outData, 0))
				{
					if (*uParam4 >= 0 && *uParam4 < *uParam3)
					{
						uParam3->[*uParam4 /*5*/] = { key };
						*uParam4 = *uParam4 + 1;
					}
					else
					{
						return 0;
					}
				}
			}
		
			anParam1->[*uParam2] = 0;
		
			if (*uParam2 > 0)
				*uParam2 = *uParam2 - 1;
		}
	}

	return 1;
}

BOOL func_585(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x13496 Hash - 0x35FADD37 ^0x52F2BABB
{
	var unk;
	var unk48;

	unk.f_4 = 15;
	unk.f_36 = 10;
	func_625(hParam0, hParam1, &unk);

	if (hParam1 == -570078785)
	{
		unk.f_3 == 0;
	
		if (!func_522(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_616(unk.f_3 * iParam2)));
		
			return false;
		}
	}
	else if (hParam1 == -915411861)
	{
		unk.f_3 == 0;
	
		if (!func_498(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_591("SHOP_H_TOO_POOR");
		
			return false;
		}
	}
	else if (hParam1 == 997808187)
	{
		return true;
	}

	if (!func_593(hParam0, iParam2, hParam1, &unk48, true))
		return false;

	return true;
}

int func_586(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13562 Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_203(hParam0, 0))
	{
		if (func_468(func_395(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_333(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_317(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_201(bParam3), hParam0);
}

BOOL func_587(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x135D6 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_203(hParam0, 0) && !func_468(func_395(hParam0), 2))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return false;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return true;
}

int func_588(int* piParam0, Hash hParam1) // Position - 0x13635 Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (itemInfo.f_8 != hParam1)
			{
			}
			else
			{
				num = num + itemInfo.f_9;
			}
		}
	}

	return num;
}

BOOL func_589(Hash hParam0, BOOL bParam1) // Position - 0x1369F Hash - 0xAB149130 ^0xE03110FF
{
	if (!func_272(hParam0, 947377998))
		return false;

	if (bParam1)
	{
		if (func_272(hParam0, -1090933859))
			return func_294(hParam0, true) != 0;
	
		if (func_424(hParam0, -915411861, false) || func_424(hParam0, 600942249, false) || func_424(hParam0, -570078785, false))
			return true;
		else
			return false;
	}

	return true;
}

BOOL func_590(Hash hParam0, BOOL bParam1) // Position - 0x13718 Hash - 0x40576C2F ^0xED1B83AA
{
	Hash hash;
	var unk;

	hash = func_627(hParam0, true);

	if (hash == 0)
		return false;

	if (func_470(hash, -2141192156))
		return false;

	if (bParam1)
		if (!func_410(hash, -2141192156, &unk, false, false))
			return false;

	return true;
}

void func_591(const char* sParam0) // Position - 0x13762 Hash - 0x6D26E8EF ^0x36AA660D
{
	Global_1915656.f_22470 = func_137(sParam0, 10000, 0, 0, 0, true);
	return;
}

int func_592(int* piParam0, Hash hParam1) // Position - 0x1377E Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (hParam1 != itemInfo.f_13)
			{
			}
			else
			{
				num = num + (func_501(itemInfo.f_8, hParam1, true, false, true, 0) * itemInfo.f_9);
			}
		}
	}

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_593(Hash hParam0, int iParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x137F7 Hash - 0xC79E0D58 ^0xC79E0D58
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;

	unk = 15;

	if (!func_628(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam4 && func_502(false) && !func_500();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_498(num2))
			goto 0xD9;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_522(num2))
		{
		}
		else
		{
			num3 = func_325(unk[i /*2*/], false, !flag, false);
		
			if (num3 >= num2)
			{
			}
			else
			{
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_594(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x138DD Hash - 0x9BC46265 ^0xEE2DD19E
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	int num4;
	int num5;
	Entity entity;
	int num6;
	int num7;

	if (func_293(hParam0) || func_272(hParam0, 1077060302))
		return func_410(func_294(hParam0, true), hParam2, uParam3, true, false);

	unk = 15;

	if (!func_310(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam6 && func_502(false) && !func_500();
	num5 = -1;

	if (Global_1915656.f_20638)
		num5 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && bParam7 || func_498(num2))
			goto 0x1F3;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && bParam7 || func_522(num2))
		{
		}
		else
		{
			num4 = func_523(num5, unk[i /*2*/]);
		
			if (num4 != 0)
			{
				bParam5 = false;
				num3 = func_524(unk[i /*2*/], num4);
			}
			else
			{
				num3 = func_325(unk[i /*2*/], false, !flag, true);
			}
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_629(unk[i /*2*/]) || func_630(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num6 = func_631(7, unk[i /*2*/], &entity);
					
						num7 = func_632(unk[i /*2*/], num4);
					
						if (num3 + num6 + num7 >= num2)
							if (num3 + num7 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x1E3;
					}
				
					if (bParam5 && num3 + func_633(7, unk[i /*2*/]) + func_634(unk[i /*2*/]) >= num2)
					{
					}
					else
					{
						*uParam3 = { unk[i /*2*/] };
						return false;
					}
				}
			
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_595(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13ADD Hash - 0x6C19C4AE ^0xD83B353E
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4, iParam5);
}

BOOL func_596(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13B0B Hash - 0x8B27BE2E ^0xAADA8B60
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_597(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13B42 Hash - 0xD4CDEBBB ^0xBF2724AE
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_598(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13B82 Hash - 0xD685F3D ^0x43E0AB59
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_599(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13BCB Hash - 0xDF565364 ^0x91E17214
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_600(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13C1D Hash - 0x34514D80 ^0x4B6EF0F8
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_601(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13C78 Hash - 0xCAE539AC ^0xECCA6C83
{
	int num;

	num = 7;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_602(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13CDC Hash - 0x56AD96CC ^0x971EFE86
{
	int num;

	num = 8;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_603(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13D4A Hash - 0x1B3CBC5E ^0x508721F5
{
	int num;

	num = 9;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_604(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13DC1 Hash - 0xA29DCDA ^0xEDD5D2BE
{
	int num;

	num = 10;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_605(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13E41 Hash - 0x4B3D6141 ^0xF7C4BBFB
{
	int num;

	num = 11;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_606(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13ECA Hash - 0xCE26321D ^0xE0369832
{
	int num;

	num = 12;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_607(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13F5C Hash - 0x72FA62DD ^0x50977A79
{
	int num;

	num = 13;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_608(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13FF7 Hash - 0xB39F7595 ^0x47C6E99
{
	int num;

	num = 14;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_609(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1409D Hash - 0x9E474A42 ^0x2D85E611
{
	int num;

	num = 15;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

struct<29> func_610(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1414A Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_357(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_611(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x141E5 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_575(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_570(func_636(num, hParam0, panParam1), num, panParam1);
	else
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_612(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1424F Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_357(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_613(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x142D2 Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_570(func_637(num, hParam0, panParam1), num, panParam1);
	else
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_614(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x14322 Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_357(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_615(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x14397 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_575(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_570(func_549(num, hParam0, panParam1), num, panParam1);
	else
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

int func_616(int iParam0) // Position - 0x14401 Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

BOOL func_617(Player plParam0) // Position - 0x1440E Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_618(Player plParam0) // Position - 0x1442B Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_638(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_639(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_619(Hash hParam0) // Position - 0x144AE Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_620(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x144C4 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_317(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_640(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_621(Hash hParam0, var uParam1) // Position - 0x14531 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_92(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

BOOL func_622(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x14584 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_65(iParam2, iParam3))
		return true;

	return false;
}

void func_623(var uParam0) // Position - 0x1459C Hash - 0x58FD8C3D ^0x7E71AD66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

int func_624(int iParam0, var uParam1) // Position - 0x145F7 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_641(iParam0);

	return -1;
}

BOOL func_625(Hash hParam0, Hash hParam1, Any anParam2) // Position - 0x14611 Hash - 0x29542237 ^0x85ED2DB5
{
	int i;
	int num;

	num = ITEMDATABASE::_0x7A35A72A692BE9DB(hParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(hParam0, i, anParam2) && *anParam2 == hParam1)
			return true;
	}

	return false;
}

BOOL func_626(Hash hParam0) // Position - 0x14651 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

Hash func_627(Hash hParam0, BOOL bParam1) // Position - 0x1465F Hash - 0xA9E35D6B ^0xBA3EB97
{
	if (!func_589(hParam0, bParam1))
		return 0;

	if (hParam0 == joaat("document_pamphlet_tracking_arrow"))
		return func_294(joaat("ammo_arrow_tracking"), true);
	else if (hParam0 == joaat("document_pamphlet_poison_bottle"))
		return func_294(joaat("ammo_poisonbottle"), true);
	else if (hParam0 == 318000298)
		return func_294(-1939515319, true);
	else if (hParam0 == -1771777013)
		return func_294(-1903059161, true);
	else if (hParam0 == 375366730)
		return func_294(-252071901, true);
	else if (hParam0 == -1309887827)
		return func_294(-611782825, true);

	return func_294(hParam0, true);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_628(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x14717 Hash - 0x583856CF ^0xF105F8D9
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_468(hParam0, 2))
		return false;

	*uParam3 = ITEMDATABASE::_0x388088BFF3681189(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_642(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_629(Hash hParam0) // Position - 0x147A7 Hash - 0x7A41F8FA ^0x4ED5CABB
{
	if (!func_203(hParam0, 0))
		return false;

	if (func_272(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_630(hParam0);
}

BOOL func_630(Hash hParam0) // Position - 0x147D6 Hash - 0x1FFCC90D ^0xF5D25358
{
	if (!func_203(hParam0, 0))
		return 0;

	if (func_272(hParam0, -839724752))
		return 1;

	return 0;
}

int func_631(int iParam0, Hash hParam1, var uParam2) // Position - 0x14800 Hash - 0xFBFC702 ^0xFBFC702
{
	Ped ped;
	ItemSet itemset;
	int itemsetSize;
	var unk;
	int num;
	int i;
	Entity entityFromItem;
	int j;
	Hash hash;

	iParam0 = func_643(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_203(hParam1, 0))
		return 0;

	if (!func_644(iParam0))
		return 0;

	ped = func_645(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_1 = 10;
	unk.f_12 = 10;
	num = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!func_646(entityFromItem))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), true, true, ENTITY::GET_ENTITY_MODEL(entityFromItem), &unk, 0);
		
			for (j = 0; j < 10; j = j + 1)
			{
				hash = unk.f_1[j];
			
				if (hash == hParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
						*uParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				
					num = num + 1;
				}
			}
		}
	}

	if (ITEMSET::IS_ITEMSET_VALID(itemset))
		ITEMSET::DESTROY_ITEMSET(itemset);

	return num;
}

int func_632(Hash hParam0, int iParam1) // Position - 0x1492D Hash - 0x7A47071E ^0x7A47071E
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	Hash hash;
	int i;
	Hash hash2;
	int num5;

	if (!func_203(hParam0, 0))
		return 0;

	if (!func_629(hParam0) && !func_630(hParam0))
		return 0;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	num4 = func_647(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_387(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_388(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_389(i, num2);
		
			if (func_203(hash, 0) && hParam0 != hash)
			{
				hash2 = func_648(hash);
			
				if (hash2 != 0)
				{
					num5 = func_524(hash, iParam1);
				
					if (num5 > 0)
						num = num + (num5 * func_650(hash2, func_649(hash), hParam0));
				}
			}
		}
	
		func_392(num2);
	}

	return num;
}

int func_633(int iParam0, Hash hParam1) // Position - 0x14A4A Hash - 0x9B281D8A ^0x9B281D8A
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_643(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_203(hParam1, 0))
		return 0;

	if (!func_644(iParam0))
		return 0;

	horse = func_645(iParam0);
	hash = hParam1;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return 0;

	if (PED::IS_PED_INJURED(horse))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(horse))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (PED::_GET_PELT_FROM_HORSE(horse, i) != hash)
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_634(Hash hParam0) // Position - 0x14AE8 Hash - 0x3CFC8FF5 ^0xC9DF94B0
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_203(hParam0, 0))
		return 0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			if (hParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(firstEntityPedIsCarrying))
				num = num + 1;
	}

	return num;
}

BOOL func_635(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x14B3A Hash - 0x40864787 ^0xC8FD8850
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_651(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1 * panParam1->f_9, &panParam5->[i /*42*/]))
			return false;
	}

	return func_652(piParam0, panParam1, panParam5, hParam2, bParam6, iParam7);
}

BOOL func_636(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x14BB7 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_637(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x14BCE Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

void func_638(Player plParam0) // Position - 0x14BE5 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_639(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_639(Player plParam0) // Position - 0x14C51 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_640(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x14C8C Hash - 0x8E6DB586 ^0xC3CF8308
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_459(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_202() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

int func_641(var uParam0, var uParam1) // Position - 0x14DA3 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_653(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_642(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x14DCF Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ACQUIRE_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_434(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_643(int iParam0) // Position - 0x14FA5 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_644(int iParam0) // Position - 0x14FBE Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_643(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

Ped func_645(int iParam0) // Position - 0x14FF6 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_643(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_646(Entity eParam0) // Position - 0x15022 Hash - 0xF5A7D53A ^0xBECE42FF
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (!ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex))
		return false;

	if (FLOCK::_GET_ANIMAL_RARITY(pedIndexFromEntityIndex) == 2)
		return false;

	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(eParam0))
		return false;

	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(eParam0))
		return false;

	return true;
}

int func_647(Hash hParam0, int iParam1) // Position - 0x15085 Hash - 0x7A1C2599 ^0xFF9B5634
{
	var outData;
	int outIndex;
	int i;

	outData = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
				return outData[i /*2*/];
		}
	}

	return 0;
}

Hash func_648(Hash hParam0) // Position - 0x150CF Hash - 0x5FB59AC3 ^0xF8EA047B
{
	int num;

	num = 0;

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			num = joaat("a_c_toad_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			num = joaat("a_c_bluejay_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			num = joaat("A_C_Pigeon");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			num = joaat("a_c_cardinal_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			num = joaat("a_c_carolinaparakeet_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			num = joaat("a_c_rat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			num = joaat("a_c_crow_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			num = joaat("a_c_crab_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			num = joaat("a_c_frogbull_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			num = joaat("a_c_sparrow_01");
			break;
	
		case joaat("provision_fish_chain_pickerel_poor"):
		case joaat("provision_fish_chain_pickerel"):
			num = joaat("a_c_fishchainpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			num = joaat("a_c_quail_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			num = joaat("a_c_chipmunk_01");
			break;
	
		case joaat("provision_fish_muskie"):
		case joaat("provision_fish_muskie_poor"):
			num = joaat("a_c_fishmuskie_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			num = joaat("a_c_oriole_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			num = joaat("a_c_bat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			num = joaat("a_c_woodpecker_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			num = joaat("a_c_cedarwaxwing_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			num = joaat("a_c_robin_01");
			break;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
		case joaat("provision_fish_smallmouth_bass"):
			num = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
	
		case joaat("provision_fish_perch_poor"):
		case joaat("provision_fish_perch"):
			num = joaat("a_c_fishperch_01_sm");
			break;
	
		case joaat("provision_fish_lake_sturgeon"):
		case joaat("provision_fish_lake_sturgeon_poor"):
			num = joaat("a_c_fishlakesturgeon_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			num = joaat("a_c_songbird_01");
			break;
	
		case joaat("provision_fish_bluegill_poor"):
		case joaat("provision_fish_bluegill"):
			num = joaat("a_c_fishbluegil_01_sm");
			break;
	
		case joaat("provision_fish_largemouth_bass"):
		case joaat("provision_fish_largemouth_bass_poor"):
			num = joaat("a_c_fishlargemouthbass_01_ms");
			break;
	
		case joaat("provision_fish_northern_pike"):
		case joaat("provision_fish_northern_pike_poor"):
			num = joaat("a_c_fishnorthernpike_01_lg");
			break;
	
		case joaat("provision_fish_bullhead_catfish"):
		case joaat("provision_fish_bullhead_catfish_poor"):
			num = joaat("a_c_fishbullheadcat_01_sm");
			break;
	
		case joaat("provision_fish_redfin_pickerel_poor"):
		case joaat("provision_fish_redfin_pickerel"):
			num = joaat("a_c_fishredfinpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			num = joaat("a_c_squirrel_01");
			break;
	
		case joaat("provision_fish_sockeye_salmon_poor"):
		case joaat("provision_fish_sockeye_salmon"):
			num = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
	
		case joaat("provision_fish_rock_bass_poor"):
		case joaat("provision_fish_rock_bass"):
			num = joaat("a_c_fishrockbass_01_sm");
			break;
	
		case joaat("provision_fish_steelhead_trout_poor"):
		case joaat("provision_fish_steelhead_trout"):
			num = joaat("a_c_fishrainbowtrout_01_ms");
			break;
	
		case joaat("provision_fish_channel_catfish_poor"):
		case joaat("provision_fish_channel_catfish"):
			num = joaat("a_c_fishchannelcatfish_01_lg");
			break;
	
		case joaat("provision_fish_longnose_gar_poor"):
		case joaat("provision_fish_longnose_gar"):
			num = joaat("a_c_fishlongnosegar_01_lg");
			break;
	}

	return num;
}

int func_649(Hash hParam0) // Position - 0x15441 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_272(hParam0, 1064293907))
		return 2;
	else if (func_272(hParam0, -1218707194))
		return 1;
	else if (func_272(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_650(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x15486 Hash - 0x97BDF54F ^0xE45E1733
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_203(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

BOOL func_651(Hash hParam0, int iParam1, var uParam2) // Position - 0x154DA Hash - 0x373A2E12 ^0xF0869689
{
	var unk;
	int num;
	int num2;
	var unk6;
	int num3;
	int i;

	*uParam2 = hParam0;

	if (func_427(false))
	{
		num = func_523(func_654(), hParam0);
	
		if (num != 0)
		{
			unk = { func_91(true) };
			unk.f_4 = func_579(num);
			uParam2->f_1[0 /*4*/] = { func_92(hParam0, unk, unk.f_4, true) };
		
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
				return true;
		}
	}

	num2 = func_317(hParam0, joaat("DEFAULT"));

	if (num2 != 0)
	{
		unk6 = 10;
	
		if (!func_620(&unk6, &num3, hParam0, num2, iParam1, true) || num3 < 1)
			return false;
	
		for (i = 0; i < num3; i = i + 1)
		{
			uParam2->f_1[i /*4*/] = { func_92(hParam0, unk6[i /*6*/], unk6[i /*6*/].f_4, true) };
		
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[i /*4*/]))
				return false;
		}
	
		return true;
	}

	unk = { func_304(hParam0, true, 0) };
	uParam2->f_1[0 /*4*/] = { func_92(hParam0, unk, unk.f_4, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
		return false;

	return true;
}

BOOL func_652(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4, int iParam5) // Position - 0x155FC Hash - 0xA8760DB6 ^0xC89F5487
{
	if (hParam3 != 2113164098 && hParam3 != joaat("Sell") && hParam3 != joaat("use"))
		return false;

	if (!func_547(hParam3, panParam1, iParam5))
		return false;

	if (!func_548(piParam0, hParam3))
		return false;

	if (func_655(*piParam0, hParam3, panParam1, panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_550(piParam0, bParam4);
}

BOOL func_653(int iParam0, var uParam1, Any* panParam2) // Position - 0x1566E Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_44(iParam0))
		return false;

	func_656(panParam2);

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

int func_654() // Position - 0x15779 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20241;
}

BOOL func_655(int iParam0, Hash hParam1, Any* panParam2, Any* panParam3) // Position - 0x15788 Hash - 0xA2FF6405 ^0x9144FDD7
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam3, *panParam3);
}

void func_656(Any* panParam0) // Position - 0x157A1 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

