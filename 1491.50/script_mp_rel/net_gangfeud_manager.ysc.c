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

void main() // Position - 0x0 Hash - 0xE059F5ED ^0x81F3E60A
{
	int gameTimer;
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	gameTimer = MISC::GET_GAME_TIMER();
	func_1();
	num = MISC::GET_GAME_TIMER() - gameTimer;
	Global_1287192.f_24 = func_2("GFMP", 60, -1, false, false);
	Global_1287192.f_7 = NETWORK::PARTICIPANT_ID_TO_INT();
	Global_1283927[Global_1287192.f_7 /*102*/].f_97 = PLAYER::PLAYER_ID();

	while (!func_3(false, false))
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	func_5();
	return;
}

void func_1() // Position - 0x68 Hash - 0x33395E3F ^0xC21553CF
{
	func_6(32, -1);
	func_7();

	if (func_8())
		func_5();

	func_9();
	func_10(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	return;
}

int func_2(char* sParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x99 Hash - 0x76855D14 ^0xBE9620E
{
	int num;
	BOOL flag;

	num = 0;

	if (iParam1 < 1)
		iParam1 = 10;

	if (!HUD::_DOES_TEXT_BLOCK_EXIST(sParam0))
	{
		num = 0;
		return 0;
	}

	flag = false;

	while (HUD::TEXT_BLOCK_REQUEST(sParam0) == 0 && num < iParam1 && !flag)
	{
		flag = func_3(bParam3, bParam4);
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	flag = func_3(bParam3, bParam4);

	if (flag)
		func_11();

	if (num >= iParam1)
	{
		num = 0;
		return 0;
	}

	num = 0;

	while (!HUD::TEXT_BLOCK_IS_LOADED(sParam0) && num < iParam1 && !flag)
	{
		flag = func_3(bParam3, bParam4);
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	flag = func_3(bParam3, bParam4);

	if (flag)
		func_11();

	if (num >= iParam1)
	{
		num = 0;
		return 0;
	}

	num = 0;
	return 1;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x174 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_4() // Position - 0x254 Hash - 0xC4E9CF0D ^0x8C97B0C0
{
	if (!Global_1287192.f_24)
	{
		Global_1287192.f_24 = func_2("GFMP", 60, -1, false, false);
		return;
	}

	if (func_12(2, 255) || !UNLOCK::UNLOCK_IS_VISIBLE(joaat("FEATURE_POSSE_FEUDS")) || !UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_FEUDS")))
	{
		Global_1287192 = 0;
		return;
	}

	if (!(func_13() && func_14()))
	{
		Global_1287192 = 0;
		return;
	}

	if (!func_15())
	{
		Global_1287192 = 0;
		return;
	}

	Global_1287192 = 1;
	func_16();

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_17();

	func_18();
	return;
}

void func_5() // Position - 0x2ED Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_11();
	return;
}

void func_6(int iParam0, int iParam1) // Position - 0x2F9 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_11();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_7() // Position - 0x316 Hash - 0x1FABDECD ^0x67C342BC
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
			func_11();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_11();
					break;
			
				case 2:
					func_11();
					break;
			
				case 3:
					func_11();
					break;
			
				case 4:
					func_11();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_11();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_11();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_11();
	
		if (func_19() == 0)
			if (func_20())
				func_11();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_11();

	return 1;
}

BOOL func_8() // Position - 0x427 Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_9() // Position - 0x455 Hash - 0xD8EB47C9 ^0x4BD72781
{
	func_21(&Global_1283797);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1283797, 130, 40);
	func_22(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1283797), 130, "g_mpGangfeudHostData");

	if (func_23())
	{
		func_24(&Global_1283927);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283927, 3265, 41);
		func_25(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1283927[0 /*102*/]), 3265, "g_mpGangfeudPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283927, 3265, 41);
		func_25(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1283927[0 /*102*/]), 3265, "g_mpGangfeudPlayerData");
		func_26(&Global_1287192);
	}

	return;
}

void func_10(BOOL bParam0) // Position - 0x4E1 Hash - 0x2B211437 ^0xE0D702E
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
					func_11();
					break;
			
				case 2:
					func_11();
					break;
			
				case 3:
					func_11();
					break;
			
				case 4:
					func_11();
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
			func_11();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_11() // Position - 0x5AA Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_12(int iParam0, int iParam1) // Position - 0x5B6 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_13() // Position - 0x5F2 Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_14() // Position - 0x60E Hash - 0x2C6DE8F6 ^0xAB4AC7E1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

BOOL func_15() // Position - 0x62A Hash - 0x55B91F16 ^0x55B91F16
{
	if (func_27() == 1)
		return false;

	if (func_28())
		return false;

	if (func_30(func_29(), 0, 0))
		return false;

	return true;
}

void func_16() // Position - 0x65B Hash - 0x9A4CE33D ^0xB6044EFC
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i))
		{
			case -507840394:
				func_31(i);
				break;
		}
	}

	return;
}

void func_17() // Position - 0x695 Hash - 0x2E367A9C ^0x2E367A9C
{
	switch (Global_1283797)
	{
		case 0:
			func_32(1);
			break;
	
		case 1:
			func_33();
			break;
	}

	return;
}

void func_18() // Position - 0x6C2 Hash - 0xCC543F62 ^0xB71E4F27
{
	if (Global_1287192.f_7 == -1)
		return;

	func_34(&Global_1283927[Global_1287192.f_7 /*102*/]);

	if (Global_1940252.f_1556 == 1 || Global_1940252.f_1556 == 0 || Global_1940252.f_1556.f_2 == 1)
		func_35();

	func_36();

	if (Global_1287192.f_23 && !func_37(255))
	{
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			func_38("NG_CANNOT_SEND_CHALLENGE", 10000, 0, 0, 0, true);
		else
			func_38("NG_CANNOT_SEND_CHALLENGE_MEMBER", 10000, 0, 0, 0, true);
	
		Global_1287192.f_23 = 0;
	}

	switch (Global_1283927[Global_1295666 /*102*/].f_99)
	{
		case 0:
			if (func_39())
				func_40(1);
			break;
	
		case 1:
			if (func_41())
			{
				if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					func_40(2);
				}
				else
				{
					func_42(&(Global_1287192.f_2), true);
					func_40(3);
				}
			}
			break;
	
		case 2:
			break;
	
		case 3:
			if (!func_43(&(Global_1287192.f_2)))
				func_42(&(Global_1287192.f_2), true);
		
			if (func_44(&(Global_1287192.f_2)) > 60f)
				func_40(1);
			break;
	
		case 4:
			func_45();
			break;
	}

	return;
}

int func_19() // Position - 0x80D Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_20() // Position - 0x81B Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_21(int* piParam0) // Position - 0x829 Hash - 0x4918B04C ^0x4918B04C
{
	*piParam0 = 0;
	return;
}

int func_22(int iParam0, int iParam1, char* sParam2) // Position - 0x835 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

BOOL func_23() // Position - 0x83E Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

void func_24(Any anParam0) // Position - 0x84D Hash - 0x53293105 ^0x53293105
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_46(&anParam0->[i /*102*/]);
	}

	return;
}

int func_25(int iParam0, int iParam1, char* sParam2) // Position - 0x872 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_26(int iParam0) // Position - 0x87B Hash - 0xBA5A1D5A ^0xE74B2BB
{
	iParam0->f_5 = 0;
	return;
}

int func_27() // Position - 0x888 Hash - 0x4228A1C2 ^0x51912A9A
{
	return Global_1572887.f_17;
}

BOOL func_28() // Position - 0x896 Hash - 0x16C45944 ^0x16C45944
{
	return func_48(func_47(0));
}

struct<2> func_29() // Position - 0x8A7 Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_30(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x8C0 Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_49(Global_1051268) && !func_50(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_51(iParam2))
		return true;

	if (iParam3 != 0 && func_12(iParam3, 255))
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

	if (func_52())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_49(Global_1051268))
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

void func_31(int iParam0) // Position - 0x9E9 Hash - 0x46DDB27D ^0xAE4E2A86
{
	struct<12> eventData;

	eventData.f_9 = 255;
	eventData.f_10 = 255;
	eventData.f_11 = 255;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 12))
		return;

	switch (eventData)
	{
		case 30:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				func_53(eventData);
		
			func_54(&eventData);
			break;
	}

	return;
}

void func_32(int iParam0) // Position - 0xA42 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1283797 = iParam0;
	return;
}

void func_33() // Position - 0xA50 Hash - 0xA8B6807 ^0xBE2C4C74
{
	var unk;
	int i;
	int num;

	unk = 32;
	num = GANG::_0x53A94294FDDCF98C(&unk, 1);

	if (num < 2)
		return;

	for (i = 0; i < 1; i = i + 1)
	{
		func_55();
		Global_1287192.f_80 = (Global_1287192.f_80 + 1) % 32;
	}

	return;
}

void func_34(int* piParam0) // Position - 0xA97 Hash - 0x22E3C157 ^0xA14B4760
{
	var unk;

	if (Global_1287192.f_16 != 255 && !PED::IS_PED_HOGTIED(Global_33) && !func_56() || Global_1287192.f_16 != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1287192.f_16))
		Global_1287192.f_16 = 255;

	if (piParam0->f_98 != Global_1295666.f_10)
	{
		piParam0->f_98 = Global_1295666.f_10;
	
		if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295666.f_10) > 1 && !GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_5))
			func_57(piParam0);
		else
			func_58(piParam0);
	}

	if (piParam0->[Global_1287192.f_30 /*3*/].f_1 == -1)
		return;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(piParam0->[Global_1287192.f_30 /*3*/]) || GANG::NETWORK_GET_NUM_GANG_MEMBERS(piParam0->[Global_1287192.f_30 /*3*/]) < 1)
	{
		piParam0->[Global_1287192.f_30 /*3*/].f_2 = -1;
		piParam0->[Global_1287192.f_30 /*3*/].f_1 = -1;
		piParam0->[Global_1287192.f_30 /*3*/] = unk;
	
		if (Global_1287192.f_8 > Global_1287192.f_30)
			Global_1287192.f_8 = Global_1287192.f_30;
	
		return;
	}

	func_59(&piParam0->[Global_1287192.f_30 /*3*/]);
	return;
}

void func_35() // Position - 0xBBB Hash - 0x71C22871 ^0xD5E9FE2D
{
	Player player;
	var unk;

	player = Global_1295666;
	unk = { func_60() };

	if (func_49(unk) && !func_61())
	{
		func_62();
		return;
	}

	if (Global_1283927[player /*102*/].f_99 > 1 || Global_1108965.f_775.f_28 != -1)
		func_62();
	else
		func_63();

	return;
}

void func_36() // Position - 0xC18 Hash - 0x43AC88F8 ^0x67A585C2
{
	Player player;
	var unk;

	player = Global_1295666;

	if (Global_1283927[player /*102*/].f_99 > 1)
	{
		func_64(1);
		return;
	}

	if (Global_1295666.f_17[Global_1295666] == false)
	{
		func_64(1);
		return;
	}

	unk = { func_60() };

	if (!func_61())
	{
		if (func_49(unk))
		{
			func_64(1);
			return;
		}
	
		if (func_49(Global_1056554[player /*491*/].f_2) && func_65(Global_1056554[player /*491*/].f_2))
		{
			func_64(1);
			return;
		}
	}

	if (func_66(&Global_1283927[player /*102*/], 1))
		func_67(1);

	return;
}

BOOL func_37(int iParam0) // Position - 0xCBE Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_68(1, iParam0);
}

int func_38(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xCCD Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_39() // Position - 0xD08 Hash - 0x5021339 ^0x883A8379
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1287192.f_75))
		Global_1287192.f_75 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-152187458);

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1287192.f_75))
		return false;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1287192.f_75, -761724091, "posse_feud_data/animosity_data(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1287192.f_75, 1456495662, ":value");
	return true;
}

void func_40(int iParam0) // Position - 0xD66 Hash - 0x10BB193C ^0xF0745034
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1283927[player /*102*/].f_99 = iParam0;
	return;
}

BOOL func_41() // Position - 0xD80 Hash - 0xD350573B ^0x566418E3
{
	int num;

	if (Global_1102813.f_26.f_3464.f_5)
	{
		func_69(Global_1220615, 1);
		Global_1287192.f_5 = 0;
		Global_1287192.f_25 = 1;
		num.f_9 = 255;
		num.f_10 = 255;
		num.f_11 = 255;
		num = 30;
		num.f_6 = 0;
		num.f_9 = PLAYER::PLAYER_ID();
		num.f_10 = Global_1287192.f_15;
		num.f_11 = PLAYER::PLAYER_ID();
		num.f_7 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		num.f_8 = GANG::NETWORK_GET_GANG_ID(Global_1287192.f_15);
		func_70(&num);
	}

	return Global_1102813.f_26.f_3464.f_5;
}

void func_42(var uParam0, BOOL bParam1) // Position - 0xE15 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_43(uParam0))
		func_71(uParam0);

	return;
}

BOOL func_43(var uParam0) // Position - 0xE35 Hash - 0x5001E582 ^0x5001E582
{
	return func_72(*uParam0, 1);
}

float func_44(var uParam0) // Position - 0xE45 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_43(uParam0))
		return uParam0->f_1;

	if (func_73(uParam0))
		return uParam0->f_2;

	return func_74() - uParam0->f_1;
}

void func_45() // Position - 0xE7A Hash - 0x6C24F698 ^0x6C24F698
{
	func_75();
	func_76();
	return;
}

void func_46(var uParam0) // Position - 0xE8A Hash - 0x5E8469D ^0x35E0F255
{
	var unk;

	unk = 32;
	unk.f_1.f_1 = -1;
	unk.f_1.f_2 = -1;
	unk.f_1.f_3.f_1 = -1;
	unk.f_1.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	unk.f_97 = 255;
	*uParam0 = { unk };
	return;
}

struct<2> func_47(int iParam0) // Position - 0x106F Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_48(var uParam0, var uParam1) // Position - 0x1083 Hash - 0x213CF43D ^0x213CF43D
{
	return func_77(uParam0, 1, 4);
}

BOOL func_49(var uParam0, var uParam1) // Position - 0x1095 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_78(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_79(uParam0))
		return false;

	return true;
}

BOOL func_50(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x10C9 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_51(int iParam0) // Position - 0x10E4 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_52() // Position - 0x1105 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_49(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

void func_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x115D Hash - 0x99900F48 ^0x3419AB14
{
	switch (uParam0.f_6)
	{
		case 0:
			func_80(&uParam0);
			break;
	
		case 1:
			break;
	
		case 2:
			func_81(&uParam0);
			break;
	
		case 3:
			func_82(&uParam0);
			break;
	}

	return;
}

void func_54(var uParam0) // Position - 0x11A5 Hash - 0xF3EA888F ^0xE02712DB
{
	switch (uParam0->f_6)
	{
		case 0:
			func_83(uParam0);
			break;
	
		case 2:
			func_84(uParam0);
			break;
	
		case 3:
			func_85(uParam0);
			break;
	}

	return;
}

void func_55() // Position - 0x11E4 Hash - 0x316279DC ^0x91951622
{
	if (NETWORK::GET_TIME_DIFFERENCE(Global_1283797.f_1[Global_1287192.f_80 /*4*/].f_3, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 60000)
	{
		Global_1283797.f_1[Global_1287192.f_80 /*4*/].f_1 = 255;
		Global_1283797.f_1[Global_1287192.f_80 /*4*/] = 255;
		return;
	}

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1283797.f_1[Global_1287192.f_80 /*4*/]) && !NETWORK::NETWORK_IS_PLAYER_CONNECTED(Global_1283797.f_1[Global_1287192.f_80 /*4*/]))
	{
		Global_1283797.f_1[Global_1287192.f_80 /*4*/].f_1 = 255;
		Global_1283797.f_1[Global_1287192.f_80 /*4*/] = 255;
		return;
	}

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1283797.f_1[Global_1287192.f_80 /*4*/].f_1) && !NETWORK::NETWORK_IS_PLAYER_CONNECTED(Global_1283797.f_1[Global_1287192.f_80 /*4*/].f_1))
	{
		Global_1283797.f_1[Global_1287192.f_80 /*4*/].f_1 = 255;
		Global_1283797.f_1[Global_1287192.f_80 /*4*/] = 255;
		return;
	}

	return;
}

BOOL func_56() // Position - 0x12D8 Hash - 0x512CD18B ^0x512CD18B
{
	return func_68(1, 255);
}

void func_57(int* piParam0) // Position - 0x12E7 Hash - 0x4372921 ^0xDF5C0A1C
{
	int i;
	int num;
	Player gangLeader;
	int participantIndex;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(gangLeader))
		return;

	participantIndex = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(gangLeader);

	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(participantIndex) || !func_86(participantIndex))
		return;

	num = participantIndex;

	for (i = 0; i <= 31; i = i + 1)
	{
		piParam0->[i /*3*/] = { Global_1283927[num /*102*/][i /*3*/] };
	}

	Global_1287192.f_20 = participantIndex;
	return;
}

void func_58(int* piParam0) // Position - 0x135F Hash - 0xC23259B6 ^0xD4470B1F
{
	int i;
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		piParam0->[i /*3*/] = { unk };
	}

	Global_1287192.f_20 = NETWORK::PARTICIPANT_ID();
	return;
}

void func_59(var uParam0) // Position - 0x139F Hash - 0x6F2A798F ^0xCACF6CD2
{
	int num;

	if (uParam0->f_1 == -1 || uParam0->f_2 == -1)
		return;

	num = (Global_1901671.f_319.f_179 * 1000) - MISC::GET_GAME_TIMER() - uParam0->f_2;

	if (num <= 0)
		uParam0->f_2 = -1;

	return;
}

struct<2> func_60() // Position - 0x13E2 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_47(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_47(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_61() // Position - 0x142D Hash - 0x9134A391 ^0x9134A391
{
	return func_87() != 0 || func_88(1);
}

void func_62() // Position - 0x1446 Hash - 0x83B11E0 ^0xBC19EE0D
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1287192.f_40[i]))
		{
		}
		else if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1287192.f_40[i], func_89(0)))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Global_1287192.f_40[i], func_89(0), false);
		}
	}

	return;
}

void func_63() // Position - 0x14A0 Hash - 0x8156FE79 ^0xED969A6E
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1287192.f_40[i]))
		{
		}
		else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1287192.f_40[i], func_89(0)))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Global_1287192.f_40[i], func_89(0), true);
		}
	}

	return;
}

void func_64(int iParam0) // Position - 0x14FB Hash - 0xDFD55A31 ^0x6889252D
{
	Player player;

	player = Global_1295666;
	func_90(&(Global_1283927[player /*102*/].f_100), iParam0);
	return;
}

BOOL func_65(var uParam0, var uParam1) // Position - 0x1519 Hash - 0x37B45816 ^0x37B45816
{
	int num;

	num = func_91(uParam0);
	return num == 3 || num == 4;
}

BOOL func_66(int* piParam0, int iParam1) // Position - 0x1539 Hash - 0xBD0B8CC9 ^0x937E4AC5
{
	return func_92(piParam0->f_100, iParam1);
}

void func_67(int iParam0) // Position - 0x154B Hash - 0xDFD55A31 ^0x6889252D
{
	Player player;

	player = Global_1295666;
	func_93(&(Global_1283927[player /*102*/].f_100), iParam0);
	return;
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x1569 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_94(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_95())
		return func_94(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_94(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

void func_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x15DD Hash - 0x3F12DC72 ^0x4A6210E1
{
	var unk;

	unk.f_5 = -1;
	unk.f_4 = 7;
	unk.f_5 = { uParam0 };
	unk.f_11 = iParam5;
	func_97(&unk, func_96(0, 8));
	return;
}

void func_70(Any* panParam0) // Position - 0x1612 Hash - 0x9F012960 ^0xEAD33459
{
	var playerBits;

	playerBits = func_96(0, 8);

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&playerBits))
		return;

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 12, 37, &playerBits);
	return;
}

void func_71(var uParam0) // Position - 0x163D Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_98(uParam0, 0f);
	return;
}

BOOL func_72(int iParam0, int iParam1) // Position - 0x164C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_73(var uParam0) // Position - 0x165B Hash - 0x39705408 ^0x39705408
{
	return func_72(*uParam0, 2);
}

float func_74() // Position - 0x166B Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_75() // Position - 0x169D Hash - 0x29F1507 ^0x3F7FACFC
{
	Player player;

	player = Global_1295666;
	Global_1283927[player /*102*/].f_100 = 0;
	return;
}

void func_76() // Position - 0x16B6 Hash - 0xAC7107D9 ^0x7E4BFB7B
{
	var unk;

	Global_1287192.f_79 = 255;
	Global_1287192.f_18 = unk;
	func_40(1);
	return;
}

BOOL func_77(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x16D3 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_49(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_99(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_78(int iParam0) // Position - 0x170E Hash - 0x5000025C ^0x5000025C
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

int func_79(int iParam0) // Position - 0x174D Hash - 0xE34A477A ^0xE34A477A
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

void func_80(Any* panParam0) // Position - 0x17E3 Hash - 0xD65A156E ^0x4ED540CB
{
	var value;
	int i;
	int num;

	if (panParam0->f_4)
		return;

	panParam0->f_4 = 1;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, panParam0->f_9);
	panParam0->f_9 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(panParam0->f_9));
	panParam0->f_10 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(panParam0->f_10));
	num = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1283797.f_1[i /*4*/] == panParam0->f_9 || Global_1283797.f_1[i /*4*/] == panParam0->f_10 && NETWORK::GET_TIME_DIFFERENCE(Global_1283797.f_1[i /*4*/].f_3, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 60000)
		{
			panParam0->f_5 = 0;
			func_100(panParam0, &value);
			return;
		}
	
		if (num == -1)
			if (Global_1283797.f_1[i /*4*/].f_1 == 255 || Global_1283797.f_1[i /*4*/] == 255)
				num = i;
	}

	Global_1283797.f_1[num /*4*/] = panParam0->f_9;
	Global_1283797.f_1[num /*4*/].f_1 = panParam0->f_10;
	Global_1283797.f_1[num /*4*/].f_2 = panParam0->f_11;
	Global_1283797.f_1[num /*4*/].f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	panParam0->f_5 = 1;
	func_100(panParam0, &value);
	return;
}

void func_81(var uParam0) // Position - 0x190C Hash - 0xB2E6A9F6 ^0xF72A7468
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1283797.f_1[i /*4*/] == uParam0->f_9 && Global_1283797.f_1[i /*4*/].f_1 == uParam0->f_10)
		{
			Global_1283797.f_1[i /*4*/].f_1 = 255;
			Global_1283797.f_1[i /*4*/] = 255;
			Global_1283797.f_1[i /*4*/].f_2 = 255;
			return;
		}
	}

	return;
}

void func_82(var uParam0) // Position - 0x197A Hash - 0xFBE0A539 ^0x57F39CDF
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1283797.f_1[i /*4*/].f_2 == uParam0->f_10)
		{
			Global_1283797.f_1[i /*4*/].f_1 = 255;
			Global_1283797.f_1[i /*4*/] = 255;
			Global_1283797.f_1[i /*4*/].f_2 = 255;
			return;
		}
	}

	return;
}

void func_83(var uParam0) // Position - 0x19D3 Hash - 0x18FF515D ^0x58BF645E
{
	if (!uParam0->f_4)
		return;

	if (!uParam0->f_5)
	{
		Global_1287192.f_23 = 1;
		Global_1287192.f_25 = 1;
		func_101(&Global_1220615);
		func_40(1);
		return;
	}

	func_102(uParam0);
	return;
}

void func_84(var uParam0) // Position - 0x1A12 Hash - 0xF350D417 ^0xE12A1032
{
	if (uParam0->f_9 == PLAYER::PLAYER_ID())
		Global_1287192.f_27 = 1;

	return;
}

void func_85(var uParam0) // Position - 0x1A2C Hash - 0xFCDE1DF2 ^0x6518CFD3
{
	if (uParam0->f_10 == PLAYER::PLAYER_ID())
		func_40(1);

	return;
}

BOOL func_86(int iParam0) // Position - 0x1A44 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_103(iParam0);
}

int func_87() // Position - 0x1A52 Hash - 0x4228A1C2 ^0x6C90BC6E
{
	return Global_1300387.f_150;
}

BOOL func_88(int iParam0) // Position - 0x1A60 Hash - 0x4C0C4814 ^0x6A6FE668
{
	return Global_1300387.f_288.f_2 && iParam0 != false;
}

char* func_89(int iParam0) // Position - 0x1A76 Hash - 0xE9B066BB ^0xE79FE2F8
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
	
		case 1:
			return "dynamic_list_item_visible";
	
		case 2:
			return "dynamic_list_item_main_color";
	
		case 3:
			return "dynamic_list_item_secondary_color";
	
		case 4:
			return "dynamic_list_item_tertiary_color";
	
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
	
		case 6:
			return "dynamic_list_item_main_img_texture";
	
		case 7:
			return "dynamic_list_item_main_img_visible";
	
		case 8:
			return "dynamic_list_item_main_img_enabled";
	
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
	
		case 10:
			return "dynamic_list_item_status_icon_texture";
	
		case 11:
			return "dynamic_list_item_status_icon_visible";
	
		case 12:
			return "dynamic_list_item_deco_texture_dic";
	
		case 13:
			return "dynamic_list_item_deco__texture";
	
		case 14:
			return "dynamic_list_item_deco_visible";
	
		case 15:
			return "dynamic_list_item_raw_text_entry";
	
		case 16:
			return "dynamic_list_item_text_label_entry";
	
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
	
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
	
		case 19:
			return "dynamic_list_item_secondary_text_visible";
	
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
	
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
	
		case 22:
			return "dynamic_list_item_end_img_texture";
	
		case 23:
			return "dynamic_list_item_end_img_visible";
	
		case 24:
			return "dynamic_list_item_end_img_left_texture_dic";
	
		case 25:
			return "dynamic_list_item_end_img_left_texture";
	
		case 26:
			return "dynamic_list_item_end_img_left_visible";
	
		case 27:
			return "dynamic_list_item_corner_end_img_texture_dic";
	
		case 28:
			return "dynamic_list_item_corner_end_img_texture";
	
		case 29:
			return "dynamic_list_item_corner_end_img_visible";
	
		case 30:
			return "dynamic_list_item_entry_player_index";
	
		case 31:
			return "dynamic_list_item_entry_friend_index";
	
		case 32:
			return "dynamic_list_item_player_gamer_handle";
	
		case 33:
			return "dynamic_list_item_option_stepper_visible";
	
		case 34:
			return "dynamic_list_item_option_stepper_text_enabled";
	
		case 35:
			return "dynamic_list_item_option_stepper_items";
	
		case 36:
			return "dynamic_list_item_option_stepper_current_hash";
	
		case 37:
			return "dynamic_list_item_option_stepper_current_index";
	
		case 38:
			return "dynamic_list_item_option_stepper_max_index";
	
		case 39:
			return "dynamic_list_item_left_chevron_enabled";
	
		case 40:
			return "dynamic_list_item_right_chevron_enabled";
	
		case 41:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
	
		case 42:
			return "dynamic_list_item_main_fill_maximum";
	
		case 43:
			return "dynamic_list_item_main_fill_value";
	
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
	
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
	
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
	
		case 47:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
	
		case 48:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
	
		case 49:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
	
		case 50:
			return "dynamic_list_item_extra_img_texture_one_dic";
	
		case 51:
			return "dynamic_list_item_extra_img_one_texture";
	
		case 52:
			return "dynamic_list_item_extra_img_one_visible";
	
		case 53:
			return "dynamic_list_item_extra_int_field_one_value";
	
		case 54:
			return "dynamic_list_item_extra_int_field_two_value";
	
		case 55:
			return "dynamic_list_item_extra_vector_field_one_value";
	
		case 56:
			return "dynamic_list_item_extra_bool_field_one_value";
	
		case 57:
			return "dynamic_list_item_link";
	
		case 58:
			return "dynamic_list_item_event_channel_hash";
	
		case 59:
			return "dynamic_list_item_focus_hash";
	
		case 60:
			return "dynamic_list_item_select_hash";
	
		case 61:
			return "dynamic_list_item_prompt_text";
	
		case 62:
			return "dynamic_list_item_prompt_text_raw";
	
		case 63:
			return "dynamic_list_item_prompt_enabled";
	
		case 64:
			return "dynamic_list_item_prompt_visible";
	
		case 68:
			return "dynamic_list_item_prompt_option_text";
	
		case 69:
			return "dynamic_list_item_prompt_option_enabled";
	
		case 70:
			return "dynamic_list_item_prompt_option_visible";
	
		case 71:
			return "dynamic_list_item_prompt_option_select_hash";
	
		case 72:
			return "dynamic_list_item_prompt_toggle_text";
	
		case 73:
			return "dynamic_list_item_prompt_toggle_enabled";
	
		case 74:
			return "dynamic_list_item_prompt_toggle_visible";
	
		case 75:
			return "dynamic_list_item_prompt_toggle_select_hash";
	
		case 76:
			return "dynamic_list_item_prompt_r3_text";
	
		case 77:
			return "dynamic_list_item_prompt_r3_enabled";
	
		case 78:
			return "dynamic_list_item_prompt_r3_visible";
	
		case 79:
			return "dynamic_list_item_select_r3_select_hash";
	
		case 80:
			return "dynamic_list_item_prompt_dpad_left_right_text";
	
		case 81:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
	
		case 82:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
	
		case 83:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
	
		case 84:
			return "mount_collection_index";
	
		case 85:
			return "dynamic_list_item_rename_prompt_enabled";
	
		case 86:
			return "dynamic_list_item_rename_prompt_visible";
	
		case 87:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
	
		case 88:
			return "invite_unique_id";
	
		case 89:
			return "invite_tracked";
	
		case 90:
			return "invite_processed";
	
		case 91:
			return "invite_script_type";
	
		case 92:
			return "invite_gang_id";
	
		case 93:
			return "invite_expiration_time";
	
		case 94:
			return "invite_filter_type";
	
		case 95:
			return "invite_feed_message_id";
	
		case 96:
			return "invite_all_enabled";
	
		case 97:
			return "invite_all_visible";
	
		case 98:
			return "dynamic_list_item_overlay_tick_visible";
	
		case 99:
			return "dynamic_list_item_overlay_time_visible";
	
		case 100:
			return "dynamic_list_item_overlay_new_visible";
	
		default:
		
	}

	return "null";
}

void func_90(var uParam0, int iParam1) // Position - 0x1F80 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_91(var uParam0, var uParam1) // Position - 0x1F91 Hash - 0xA6DDAF91 ^0xF19E68CE
{
	int num;

	if (!func_49(uParam0))
		return -1;

	num = func_104(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x1FCC Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_93(var uParam0, int iParam1) // Position - 0x1FDB Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_94(Any* panParam0, int iParam1, int iParam2) // Position - 0x1FF0 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_95() // Position - 0x2027 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

var func_96(int iParam0, int iParam1) // Position - 0x2036 Hash - 0x42C305C ^0x81DF2F42
{
	return func_105(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_97(Any* panParam0, var uParam1) // Position - 0x2054 Hash - 0x9BA65439 ^0xA285F708
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 187;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 12, 25, &uParam1);
	return;
}

void func_98(var uParam0, float fParam1) // Position - 0x208B Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_74() - fParam1;
	func_106(uParam0, 1);
	func_107(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_99(int iParam0, var uParam1) // Position - 0x20B1 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_108(iParam0);

	return -1;
}

void func_100(Any* panParam0, int* piParam1) // Position - 0x20CB Hash - 0xB0200632 ^0xBEADFD2C
{
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 12, 37, piParam1);
	return;
}

void func_101(var uParam0) // Position - 0x20E0 Hash - 0x4C964388 ^0xC63C9320
{
	var unk;

	if (*uParam0 == -1)
	{
		func_109(uParam0, false);
		return;
	}

	unk.f_5 = -1;
	unk.f_4 = 3;
	unk.f_5 = { *uParam0 };
	func_97(&unk, func_96(0, 8));
	func_110(0);
	func_109(uParam0, false);
	return;
}

void func_102(var uParam0) // Position - 0x212C Hash - 0x6CB85CC0 ^0x35F79278
{
	int num;
	int num2;
	var unk;

	switch (Global_1287192.f_28)
	{
		case 1:
			func_111(uParam0->f_10, Global_1901671.f_319.f_180);
			func_112(uParam0->f_10);
			Global_1287192.f_5 = 0;
			func_113();
			return;
	
		case 4:
			num = 1;
			num2 = 4;
			break;
	
		case 5:
			num = 2;
			num2 = 5;
			break;
	}

	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		func_114(num, uParam0->f_8, Global_1901671.f_319.f_180);
		func_115(uParam0->f_8);
		func_116();
		func_113();
	}
	else
	{
		unk.f_4 = num2;
		unk.f_5 = uParam0->f_8;
		unk.f_1 = PLAYER::PLAYER_ID();
		unk.f_9 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10));
		func_117(&unk, GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10));
		func_115(uParam0->f_8);
		func_113();
	}

	return;
}

BOOL func_103(int iParam0) // Position - 0x2200 Hash - 0xDF9A73A6 ^0xA4A39714
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		return 0;

	return 1;
}

int func_104(var uParam0, var uParam1) // Position - 0x2221 Hash - 0x2B1F0751 ^0xFAA335B4
{
	var unk;
	var unk4;
	int num;
	int num2;
	int num3;

	if (Global_1072759.f_19487 <= 0)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_118(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_118(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

var func_105(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x22C8 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_119() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_120());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_120());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_120());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_121(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_122(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_123(i) != 1)
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
					if (!func_124(player2))
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

void func_106(var uParam0, int iParam1) // Position - 0x265B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_107(var uParam0, int iParam1) // Position - 0x266C Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_108(var uParam0, var uParam1) // Position - 0x2681 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_118(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_109(var uParam0, BOOL bParam1) // Position - 0x26AD Hash - 0x5C83F5A3 ^0x5C83F5A3
{
	var unk;

	unk = -1;
	*uParam0 = { unk };

	if (bParam1)
		func_110(0);

	return;
}

void func_110(int iParam0) // Position - 0x26CE Hash - 0x29A8F290 ^0x3CE58891
{
	Global_1220316.f_211 = iParam0;
	return;
}

void func_111(Player plParam0, var uParam1) // Position - 0x26DE Hash - 0x87784C2F ^0xD6A43839
{
	var unk;
	var value;
	int num;
	var unk33;
	int uniqueIntForPlayer;

	if (!func_125(3))
		return;

	unk.f_8 = -1;
	unk.f_8.f_1 = -1;
	unk.f_4 = 1;
	num.f_12 = -1;
	num.f_12.f_1 = -1;
	num.f_14 = 255;
	num.f_15 = 255;
	unk33 = { 0f, 0f, 0f };
	unk.f_5 = 3;
	unk.f_10 = uParam1;
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10));
	num.f_4 = 85;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam0);
	num = 1;
	num.f_1 = PLAYER::PLAYER_ID();
	num.f_14 = PLAYER::PLAYER_ID();
	num.f_15 = plParam0;
	num.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	num.f_6 = uParam1;
	num.f_9 = uniqueIntForPlayer;
	num.f_16 = Global_1295666.f_10;
	func_128(func_127(1, func_126(0)), unk33, 0f, 0, 0, value, num);
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, PLAYER::PLAYER_ID());
	unk.f_6 = PLAYER::PLAYER_ID();
	unk.f_8 = { func_127(1, func_126(0)) };
	unk.f_7 = value;
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(plParam0);
	unk.f_1 = plParam0;
	unk.f_13 = 1;
	unk.f_12 = uniqueIntForPlayer;
	func_129(&unk, &value);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	func_130();
	return;
}

void func_112(Player plParam0) // Position - 0x280D Hash - 0xF94CD74F ^0xB2757C0
{
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(plParam0))
		return;

	Global_1287192.f_79 = plParam0;
	Global_1287192.f_18 = GANG::NETWORK_GET_GANG_ID(plParam0);
	func_40(2);
	return;
}

void func_113() // Position - 0x283B Hash - 0x391C11EC ^0x57F327C1
{
	switch (Global_1287192.f_28)
	{
		case 1:
			TELEMETRY::_TELEMETRY_PARLEY_FEUD(1403358139, PLAYER::PLAYER_ID(), Global_1287192.f_15, func_131(Global_1287192.f_18), 0);
			break;
	
		case 4:
			TELEMETRY::_TELEMETRY_PARLEY_FEUD(-1522841992, PLAYER::PLAYER_ID(), Global_1287192.f_15, func_131(Global_1287192.f_18), 0);
			break;
	
		case 5:
			TELEMETRY::_TELEMETRY_PARLEY_FEUD(2112282570, PLAYER::PLAYER_ID(), Global_1287192.f_15, func_131(Global_1287192.f_18), 0);
			break;
	}

	return;
}

void func_114(int iParam0, Any anParam1, var uParam2) // Position - 0x28C4 Hash - 0xD381C5B7 ^0xA7DA309C
{
	var unk;
	var unk15;
	var value;
	int num;
	var unk35;
	int uniqueIntForPlayer;

	if (anParam1 == Global_1295666.f_10)
		return;

	if (!func_125(iParam0))
		return;

	unk.f_8 = -1;
	unk.f_8.f_1 = -1;
	unk.f_4 = 1;
	unk.f_5 = -1;
	unk15 = -1;
	unk15.f_1 = -1;
	num.f_12 = -1;
	num.f_12.f_1 = -1;
	num.f_14 = 255;
	num.f_15 = 255;
	unk35 = { 0f, 0f, 0f };
	unk.f_5 = iParam0;
	unk.f_10 = uParam2;
	unk.f_11 = Global_1295666.f_10;
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10));

	switch (iParam0)
	{
		case 1:
			unk15 = { func_127(4, func_126(0)) };
			num.f_4 = 81;
			break;
	
		case 2:
			unk15 = { func_127(5, func_126(0)) };
			num.f_4 = 80;
			break;
	}

	func_132(&value, anParam1, true);
	num = 1;
	num.f_1 = PLAYER::PLAYER_ID();
	num.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	num.f_6 = uParam2;
	num.f_9 = uniqueIntForPlayer;
	num.f_16 = Global_1295666.f_10;

	if (unk.f_5 == -1)
		return;

	if (!func_133(unk.f_5))
		return;

	if (!func_134(anParam1))
		return;

	func_128(unk15, unk35, 0f, 0, 0, value, num);
	func_132(&value, anParam1, false);

	switch (iParam0)
	{
		case 1:
			num.f_4 = 83;
			break;
	
		case 2:
			num.f_4 = 84;
			break;
	}

	num.f_7 = anParam1;
	num = 0;
	func_135(num, value, false, false);
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);
	func_136(unk.f_5, &value);

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&value))
		return;

	unk.f_6 = PLAYER::PLAYER_ID();
	unk.f_8 = { unk15 };
	unk.f_7 = value;
	unk.f_11 = anParam1;
	unk.f_13 = 1;
	unk.f_12 = uniqueIntForPlayer;
	func_129(&unk, &value);
	func_135(num, value, false, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	func_130();
	return;
}

void func_115(Any anParam0) // Position - 0x2ABE Hash - 0x896F5B08 ^0xF4F144A1
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return;

	Global_1287192.f_18 = anParam0;
	func_40(2);
	return;
}

void func_116() // Position - 0x2AE0 Hash - 0x97822302 ^0x97822302
{
	func_137(16);
	func_137(17);
	return;
}

void func_117(Any* panParam0, Player plParam1) // Position - 0x2AF4 Hash - 0x91EFB49B ^0x23093BD6
{
	var value;

	*panParam0 = 22;
	panParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 11, 6, &value);
	return;
}

BOOL func_118(int iParam0, var uParam1, Any* panParam2) // Position - 0x2B26 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_49(iParam0))
		return false;

	func_138(panParam2);

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

int func_119() // Position - 0x2C31 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_120() // Position - 0x2C3F Hash - 0x306ACA3A ^0x75D9364B
{
	return "unnamed";
}

BOOL func_121(int iParam0) // Position - 0x2C4B Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_122(int iParam0) // Position - 0x2CDA Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_68(36, iParam0);
}

int func_123(int iParam0) // Position - 0x2CF8 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_124(Player plParam0) // Position - 0x2D43 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_139(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_140(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_125(int iParam0) // Position - 0x2D88 Hash - 0x18EC39D2 ^0x18EC39D2
{
	if (func_141(func_47(0)) == 5)
		return false;

	if (func_141(func_47(0)) == 3)
		if (!func_61())
			return false;

	if (func_141(func_47(0)) == 4)
		return false;

	if (func_142())
		return false;

	if (func_143())
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	if (Global_1295666.f_16 - Global_1108965.f_775.f_5[iParam0] < 180 && func_144(iParam0, GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
		return false;

	if (iParam0 == 3 && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

int func_126(int iParam0) // Position - 0x2E3C Hash - 0x8405F095 ^0x8405F095
{
	int num;

	num = iParam0;

	if (!func_145(num))
		return -1;

	return num;
}

struct<2> func_127(int iParam0, int iParam1) // Position - 0x2E58 Hash - 0x5B8D772A ^0x5B8D772A
{
	int num;
	int num2;

	num = iParam0;
	num2 = iParam1;

	if (num < 0 || num >= 7 || num2 < 0 || num2 >= 16)
		return func_29();

	return func_146(Global_1108965.f_654.f_1[iParam0 /*17*/][iParam1], 3);
}

void func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27) // Position - 0x2EAB Hash - 0x83F75F08 ^0xF1751B99
{
	var eventData;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam8))
		return;

	eventData.f_12 = -1;
	eventData.f_12.f_1 = -1;
	eventData.f_14 = 255;
	eventData.f_15 = 255;
	eventData.f_19 = -1;
	eventData.f_19.f_1 = -1;
	eventData = { uParam9 };
	eventData.f_19 = { uParam0 };
	eventData.f_21 = { uParam2 };
	eventData.f_24 = fParam5;
	eventData.f_26 = iParam7;
	eventData.f_25 = iParam6;
	eventData.f_1 = PLAYER::GET_PLAYER_INDEX();
	eventData.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 27, 39, &uParam8);
	return;
}

void func_129(Any* panParam0, int* piParam1) // Position - 0x2F3C Hash - 0x2CD07D06 ^0xD0A18556
{
	*panParam0 = 29;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 14, 38, piParam1);
	return;
}

void func_130() // Position - 0x2F56 Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_147(false);
	return;
}

int func_131(var uParam0) // Position - 0x2F63 Hash - 0xEBAC137 ^0xA0B71017
{
	int num;
	int num2;

	num = Global_1287192.f_20;
	num2 = 0;
	Global_1283927[num /*102*/].f_97 != GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);
	Global_1287192.f_12 = Global_1287192.f_12;

	while (Global_1287192.f_12 <= 31)
	{
		if (Global_1283927[num /*102*/][Global_1287192.f_12 /*3*/] != uParam0)
		{
		}
		else
		{
			num2 = num2 + Global_1283927[num /*102*/][Global_1287192.f_12 /*3*/].f_1;
		}
	
		Global_1287192.f_12 = Global_1287192.f_12 + 1;
	}

	return num2;
}

void func_132(Any* panParam0, Any anParam1, BOOL bParam2) // Position - 0x2FE6 Hash - 0xF8DBF86 ^0xF4ADC5B4
{
	int i;
	BOOL flag;
	Player bitIndex;

	i = 0;
	flag = false;

	for (i = 0; i < 32; i = i + 1)
	{
		bitIndex = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(bitIndex) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(bitIndex))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(bitIndex) != anParam1)
		{
		}
		else
		{
			if (bParam2)
			{
				if (!GANG::NETWORK_IS_GANG_LEADER(bitIndex))
				{
				}
				else
				{
					flag = true;
					SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(panParam0, bitIndex);
				}
			}
		
			flag = true;
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(panParam0, bitIndex);
		}
	}

	if (!flag)
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(panParam0);

	return;
}

BOOL func_133(int iParam0) // Position - 0x3060 Hash - 0xA946505F ^0x78B50DC2
{
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (!func_148(iParam0))
		return false;

	if (!func_125(iParam0))
		return false;

	if (func_149(PLAYER::PLAYER_ID(), true, true) && !func_150(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
	
		case 4:
		case 5:
			return func_151(iParam0);
	
		case 6:
			return func_152();
	
		case 7:
			return func_153();
	
		case 8:
		case 9:
		case 10:
			return func_154(iParam0);
	
		default:
		
	}

	return false;
}

BOOL func_134(Any anParam0) // Position - 0x3120 Hash - 0x426411CB ^0x3FAE589F
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return false;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(anParam0) == 0)
		return false;

	return true;
}

void func_135(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x3145 Hash - 0x60237433 ^0x1CACDDD0
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam20)
	{
		if (iParam0.f_18)
		{
			if (bParam21)
			{
				unk.f_12 = -1;
				unk.f_12.f_1 = -1;
				unk.f_14 = 255;
				unk.f_15 = 255;
				unk.f_20 = -1;
				unk = { iParam0 };
				unk.f_19 = uParam19;
				unk.f_20 = iParam0.f_2;
				func_155(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_136(var uParam0, Any* panParam1) // Position - 0x31DF Hash - 0x6D001E64 ^0x6D001E64
{
	func_156(panParam1, true);
	return;
}

void func_137(int iParam0) // Position - 0x31EE Hash - 0xD51A7F81 ^0xFC6AE357
{
	int i;
	Hash hash;
	int num;

	for (i = 0; i < 30; i = i + 1)
	{
		hash = { Global_1940252.f_245.f_14[i /*43*/] };
		num = DATABINDING::DATABINDING_READ_INT(hash.f_30);
	
		if (iParam0 == num)
			func_157(hash);
	}

	return;
}

void func_138(Any* panParam0) // Position - 0x3234 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_139(Player plParam0) // Position - 0x324A Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_140(Player plParam0) // Position - 0x3267 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_158(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_159(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

int func_141(int iParam0, var uParam1) // Position - 0x32EA Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

BOOL func_142() // Position - 0x32F4 Hash - 0xA5A53F42 ^0x62B332A8
{
	return func_92(Global_1572887.f_8, 1);
}

BOOL func_143() // Position - 0x3307 Hash - 0xD2F03408 ^0xD2F03408
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_144(int iParam0, BOOL bParam1) // Position - 0x331B Hash - 0xD180D3 ^0xD180D3
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			return false;
	
		case 2:
			return false;
	
		case 3:
			return false;
	
		case 4:
			return bParam1;
	
		case 5:
			return bParam1;
	
		case 6:
			return bParam1;
	
		case 7:
			return bParam1;
	
		case 8:
			return bParam1;
	
		case 9:
			return bParam1;
	
		case 10:
			return bParam1;
	
		default:
		
	}

	return false;
}

BOOL func_145(int iParam0) // Position - 0x33A1 Hash - 0x1A4A2DED ^0x1A4A2DED
{
	if (iParam0 < 0 || iParam0 > 15)
		return false;

	return true;
}

struct<2> func_146(var uParam0, int iParam1) // Position - 0x33C0 Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_160(uParam0, &(Global_1072759.f_573), func_79(iParam1));
			break;
	
		case 3:
			num.f_1 = func_160(uParam0, &(Global_1072759.f_573.f_602), func_79(iParam1));
			break;
	
		case 4:
			num.f_1 = func_160(uParam0, &(Global_1072759.f_573.f_2104), func_79(iParam1));
			break;
	
		case 5:
			num.f_1 = func_160(uParam0, &(Global_1072759.f_573.f_12606), func_79(iParam1));
			break;
	
		case 6:
			num.f_1 = func_160(uParam0, &(Global_1072759.f_573.f_12908), func_79(iParam1));
			break;
	
		case 7:
			num.f_1 = func_160(uParam0, &(Global_1072759.f_573.f_15910), func_79(iParam1));
			break;
	
		case 8:
			num.f_1 = func_160(uParam0, &(Global_1072759.f_573.f_16512), func_79(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_29();

	return num;
}

void func_147(BOOL bParam0) // Position - 0x34E6 Hash - 0x8B79F219 ^0x8B79F219
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

BOOL func_148(int iParam0) // Position - 0x351D Hash - 0x44E53744 ^0x3CE15FD2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_VERSUS")))
		return false;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("NET_IN_WORLD_DM_0")) && UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_FEUDS"));
	
		case 6:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("IMPROMPTU_RACE_0"));
	
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_149(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x35A9 Hash - 0x15E0EAC1 ^0x8D0C1A49
{
	Player player;

	if (!Global_1149432.f_5568)
		return false;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641.f_2 == 2 || bParam1 && Global_17418.f_2641.f_2 == 1 || bParam2 && Global_17418.f_2641.f_2 == 3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	return Global_1101558[player /*38*/].f_33 == 2 || bParam1 && Global_1101558[player /*38*/].f_33 == 1 || bParam2 && Global_1101558[player /*38*/].f_33 == 3;
}

BOOL func_150(int iParam0) // Position - 0x3672 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 8:
		case 9:
		case 10:
			return true;
	}

	return false;
}

BOOL func_151(int iParam0) // Position - 0x36B4 Hash - 0x6CFBB801 ^0xAB0F8C1C
{
	var outPosition;
	int numGangMembers;

	if (!func_161(Global_1295666.f_10))
		return 0;

	if (func_162())
		return 0;

	if (!func_163())
	{
		func_164();
		return 0;
	}

	if (func_165(PLAYER::PLAYER_ID(), true, false, true))
		return 0;

	if (func_166())
	{
		func_164();
		return 0;
	}

	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_34, false, &outPosition, 16))
	{
		func_164();
		return 0;
	}

	numGangMembers = GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	switch (iParam0)
	{
		case 4:
			if (numGangMembers > 2 && func_167(true, 3))
				return 1;
			break;
	
		case 5:
			if (numGangMembers > 1 && func_167(true, 2))
				return 1;
			break;
	}

	return 0;
}

BOOL func_152() // Position - 0x3779 Hash - 0x143944E5 ^0xB2B5B0EE
{
	if (!func_161(Global_1295666.f_10))
		return 0;

	if (func_162())
		return 0;

	if (func_165(PLAYER::PLAYER_ID(), true, false, true))
		return 0;

	if (!func_168())
		return 0;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
		return 1;

	if (!func_167(true, 2))
		return 0;

	return 0;
}

BOOL func_153() // Position - 0x37DF Hash - 0x7A8444E5 ^0xFDE7569E
{
	if (!func_170(func_169(7)))
		return 0;

	if (GANG::_0x2F7EB8B6F6AFE79C(1) < 2)
		return 0;

	return 1;
}

BOOL func_154(int iParam0) // Position - 0x3806 Hash - 0x47183497 ^0xFB151E1D
{
	int i;
	int num;
	Player player;

	if (iParam0 == 8)
		func_171(&(Global_1108965.f_775), 1);

	if (!func_170(func_169(iParam0)))
		return 0;

	if (!func_161(Global_1295666.f_10))
		return 0;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) < 2)
		return 0;

	if (!func_167(true, 2))
		return 0;

	if (iParam0 == 8)
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) || !GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, player))
			{
			}
			else
			{
				if (func_92(Global_1206166[i /*10*/].f_9, 1))
					num = num + 1;
			
				if (num > 1)
					break;
			}
		}
	
		if (num < 2)
		{
			func_172(&(Global_1108965.f_775), 1);
			return 0;
		}
	
		func_171(&(Global_1108965.f_775), 1);
	}

	return 1;
}

int func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x38FA Hash - 0xDF93FBF9 ^0x193910B6
{
	if (!func_173(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_156(Any* panParam0, BOOL bParam1) // Position - 0x392A Hash - 0xB4352E64 ^0x7D61E184
{
	Any gangId;
	Player bitIndex;
	int i;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	for (i = 0; i < 32; i = i + 1)
	{
		bitIndex = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(bitIndex) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(bitIndex))
		{
		}
		else if (!bParam1 && GANG::NETWORK_IS_GANG_LEADER(bitIndex))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(bitIndex) != gangId)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(panParam0, bitIndex);
		}
	}

	return;
}

void func_157(Hash hParam0) // Position - 0x399B Hash - 0xC24E3D06 ^0xEBE6E2EE
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940252.f_245.f_5, hParam0);
	func_174(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_175(Global_1940252.f_245.f_1306 - 1);
	return;
}

void func_158(Player plParam0) // Position - 0x39D9 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_159(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_159(Player plParam0) // Position - 0x3A45 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

int func_160(var uParam0, var uParam1, int iParam2) // Position - 0x3A80 Hash - 0x3B53E80C ^0x3B53E80C
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = iParam2 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (uParam1->[num3 /*3*/] > uParam0)
			num2 = num3 - 1;
		else if (uParam1->[num3 /*3*/] < uParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_161(Any anParam0) // Position - 0x3AD5 Hash - 0x1BED13A8 ^0xB3AE4D14
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
			unk = { func_176(gangLeader) };
		
			for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
			{
				if (POSSE::_0xC084FF658B2E81DA(&unk, i, &num2) && num2 != 0 && num2.f_9 == 1)
					return true;
			}
		}
	}

	return false;
}

BOOL func_162() // Position - 0x3B61 Hash - 0x7A39A90A ^0x7A39A90A
{
	if (func_49(func_47(0)) && !func_61())
		return true;

	return false;
}

BOOL func_163() // Position - 0x3B84 Hash - 0x4520338F ^0x4520338F
{
	return func_177(Global_34) != -1;
}

void func_164() // Position - 0x3B97 Hash - 0x3870270F ^0xCBB32D07
{
	char* string1;

	string1 = func_178(Global_1108965.f_775.f_27);
	Global_1108965.f_775.f_18 = 0;

	if (!MISC::ARE_STRINGS_EQUAL(string1, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1940252.f_1556.f_44.f_5)))
		func_179(string1, joaat("COLOR_WHITE"));

	return;
}

BOOL func_165(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3BDC Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_180(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

BOOL func_166() // Position - 0x3D11 Hash - 0x2A86EE88 ^0x425352A7
{
	Ped ped;

	if (PED::IS_PED_IN_ANY_BOAT(Global_33))
		return true;

	ped = func_181(Global_33);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (PED::IS_PED_SWIMMING(ped))
			return true;

	return PED::IS_PED_SWIMMING(Global_33);
}

BOOL func_167(BOOL bParam0, int iParam1) // Position - 0x3D4D Hash - 0x69A0F107 ^0xEFB1A84D
{
	int i;
	int num;
	Player player;

	i = 0;
	num = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			if (func_182(player) && func_49(Global_1056554[i /*491*/].f_2) || !func_49(Global_1056554[i /*491*/].f_2))
			{
				if (bParam0 && !GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, player))
				{
				}
				else
				{
					num = num + 1;
				
					if (num >= iParam1)
						return true;
				}
			}
		
			if (num >= iParam1)
				return true;
		}
	}

	return false;
}

BOOL func_168() // Position - 0x3DF3 Hash - 0xA65E80A9 ^0x78D8508A
{
	float waypointCoords;
	int i;
	Player player;
	var unk3;

	waypointCoords = { MAP::_GET_WAYPOINT_COORDS() };
	func_42(&(Global_1108965.f_775.f_36), true);
	Global_1108965.f_775.f_20 = 0;

	if (Global_1108965.f_775.f_27 == -1)
		return false;

	if (_IS_NULL_VECTOR(waypointCoords))
	{
		func_164();
		return false;
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) || !GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, player))
		{
		}
		else if (player == PLAYER::PLAYER_ID() && func_184(waypointCoords, Global_34) <= 150f * 2f)
		{
			Global_1108965.f_775.f_20 = 1;
			func_164();
			return false;
		}
		else if (func_184(waypointCoords, func_185(player)) <= 150f)
		{
			Global_1108965.f_775.f_20 = 1;
			func_164();
			return false;
		}
	}

	waypointCoords.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(waypointCoords, waypointCoords.f_1);
	STREAMING::REQUEST_COLLISION_AT_COORD(waypointCoords);

	if (ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(waypointCoords) && func_186(&waypointCoords, 9999f))
	{
	}
	else
	{
		Global_1108965.f_775.f_4 = Global_1108965.f_775.f_4 + 1;
	
		if (Global_1108965.f_775.f_4 > 15)
		{
			Global_1108965.f_775.f_24 = { 0f, 0f, 0f };
			Global_1108965.f_775.f_4 = 0;
			func_164();
		}
	
		return false;
	}

	PATHFIND::_0xCF213A5FC3ABFC08(waypointCoords, waypointCoords.f_1, 50f * 2f);
	unk3 = { 50f, 50f, 50f };

	if (!PATHFIND::IS_NAVMESH_LOADED_IN_AREA(waypointCoords - unk3, waypointCoords + unk3))
	{
		Global_1108965.f_775.f_4 = Global_1108965.f_775.f_4 + 1;
	
		if (Global_1108965.f_775.f_4 > 15)
		{
			Global_1108965.f_775.f_24 = { 0f, 0f, 0f };
			Global_1108965.f_775.f_4 = 0;
			func_164();
		}
	
		return false;
	}

	Global_1108965.f_775.f_4 = 0;

	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(waypointCoords, false, &(Global_1108965.f_775.f_24), 16))
	{
		Global_1108965.f_775.f_24 = { 0f, 0f, 0f };
		func_164();
		return false;
	}

	func_164();
	return true;
}

int func_169(int iParam0) // Position - 0x401D Hash - 0x7D5AE8EE ^0x7D5AE8EE
{
	switch (iParam0)
	{
		case 7:
			return 18;
	
		case 8:
			return 16;
	
		case 9:
			return 17;
	
		case 10:
			return 15;
	
		default:
		
	}

	return -1;
}

BOOL func_170(int iParam0) // Position - 0x405A Hash - 0x3DB29098 ^0xBA01CCA3
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	var unk;

	if (func_162())
		return false;

	num = -1;
	num2 = func_187(iParam0, PLAYER::PLAYER_ID(), &num);

	if (num2 != 0)
		return false;

	num3 = 0;

	if (!func_188(iParam0))
	{
		num4 = func_190(func_189(iParam0));
	
		if (num4 == -1)
			return false;
	
		num3 = num4 - 2;
		num3 = func_191(iParam0, num3);
	}
	else
	{
		num3 = func_192(iParam0, Global_34);
		num2 = func_193(iParam0, num3);
	
		if (num2 != 0)
			return false;
	}

	num5 = func_194(iParam0, num3);
	num2 = func_195(num5);

	if (num2 != 0)
		return false;

	unk = { func_196(iParam0, num3, num5) };
	num2 = func_197(unk);

	if (num2 != 0)
		return false;

	return true;
}

void func_171(var uParam0, int iParam1) // Position - 0x411E Hash - 0xB021E4E ^0xB021E4E
{
	if (!func_92(*uParam0, iParam1))
		return;

	func_93(uParam0, iParam1);
	return;
}

void func_172(var uParam0, int iParam1) // Position - 0x413E Hash - 0x6CD81C56 ^0x6CD81C56
{
	if (func_92(*uParam0, iParam1))
		return;

	func_90(uParam0, iParam1);
	return;
}

BOOL func_173(var uParam0) // Position - 0x415D Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

void func_174(Hash hParam0) // Position - 0x4172 Hash - 0x87385CBF ^0x5933D7D7
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, func_89(95));

	if (func_198(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

void func_175(int iParam0) // Position - 0x419B Hash - 0xA39B24D5 ^0x7EB85553
{
	Global_1940252.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940252.f_245.f_1306), 0));
	return;
}

struct<2> func_176(Player plParam0) // Position - 0x41CC Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

int func_177(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x41E0 Hash - 0x56F0811C ^0x278FB5A
{
	return func_199(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

char* func_178(int iParam0) // Position - 0x41F6 Hash - 0x5B9FC840 ^0x7D64CA29
{
	var dst;
	var unk55;
	int num;
	var outPosition;
	char* str;

	if (iParam0 == -1)
		return "";

	dst.f_33 = 7;
	dst.f_51 = -1;
	MISC::COPY_SCRIPT_STRUCT(&dst, &(Global_1940252.f_1556.f_149.f_2), 55);

	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(dst.f_29)) && NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1295666.f_1)) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(dst.f_29), &(Global_1295666.f_1)))
	{
		if (dst.f_3)
		{
			POSSE::_0xC08AFF658B2E51DA(&unk55);
		
			if (unk55 != dst.f_2)
				return MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
		}
		else if (GANG::NETWORK_IS_GANG_ID_VALID(dst.f_1) && !GANG::NETWORK_IS_GANG_ACTIVE(dst.f_1))
		{
			return MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
		}
	}

	if (!func_161(Global_1295666.f_10) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return MISC::VAR_STRING(2, "POSSE_VERSUS_LEADER_FAIL_FOOTER");

	if (Global_1295666.f_16 - Global_1108965.f_775.f_5[iParam0] < 180 && func_200(iParam0) && func_201(iParam0))
	{
		num = 180 - Global_1295666.f_16 - Global_1108965.f_775.f_5[iParam0];
		return MISC::VAR_STRING(10, "POSSE_VERSUS_TIMER_FOOTER", func_203(func_202(num * 1000, false, 0, false, false, false), joaat("COLOR_PURE_WHITE")));
	}

	switch (iParam0)
	{
		case 4:
			if (!func_204(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 2)
				str = "PV_TEAM_INFIGHTING_TOO_FEW";
			else if (!func_205(true, 2))
				str = "PV_TEAM_INFIGHTING_TOO_FEW_AVAILABLE";
			else if (func_165(PLAYER::PLAYER_ID(), true, false, true))
				str = "PV_FAIL_WANTED_FOOTER";
			else if (func_206())
				str = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			else if (!func_207())
				str = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			else if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_34, false, &outPosition, 16))
				str = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			else if (func_149(PLAYER::PLAYER_ID(), false, true))
				str = "PV_GENERIC_FAIL_PASSIVE";
			else
				str = "POSSE_VERSUS_INFIGHTING_FOOTER";
			break;
	
		case 5:
			if (!func_204(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
				str = "PV_INFIGHTING_TOO_FEW";
			else if (!func_205(true, 2))
				str = "PV_INFIGHTING_TOO_FEW_AVAILABLE";
			else if (func_165(PLAYER::PLAYER_ID(), true, false, true))
				str = "PV_FAIL_WANTED_FOOTER";
			else if (func_206())
				str = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			else if (!func_207())
				str = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			else if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_34, false, &outPosition, 16))
				str = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			else if (func_149(PLAYER::PLAYER_ID(), false, true))
				str = "PV_GENERIC_FAIL_PASSIVE";
			else
				str = "POSSE_VERSUS_FFA_INFIGHTING_FOOTER";
			break;
	
		case 6:
			if (!func_204(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
				str = "PV_IMPROPMTU_RACE_TOO_FEW";
			else if (!func_205(true, 2))
				str = "PV_IMPROPMTU_RACE_TOO_FEW_AVAILABLE";
			else if (func_165(PLAYER::PLAYER_ID(), true, false, true))
				str = "PV_FAIL_WANTED_FOOTER";
			else if (_IS_NULL_VECTOR(MAP::_GET_WAYPOINT_COORDS()))
				str = "POSSE_VERSUS_RACE_NO_WAYPOINT_FOOTER";
			else if (Global_1108965.f_775.f_20 && func_210(&(Global_1108965.f_775.f_36)) < 1000)
				str = "POSSE_VERSUS_RACE_TOO_CLOSE_FOOTER";
			else if (_IS_NULL_VECTOR(Global_1108965.f_775.f_24) && func_210(&(Global_1108965.f_775.f_36)) < 1000)
				str = "POSSE_VERSUS_RACE_BAD_POSITION_FOOTER";
			else
				str = "POSSE_VERSUS_RACE_FOOTER";
			break;
	
		case 7:
			if (!func_204(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
				str = "PV_HTPL_TOO_FEW";
			else if (!func_205(true, 2))
				str = "PV_HTPL_TOO_FEW_AVAILABLE";
			else if (GANG::_0x2F7EB8B6F6AFE79C(1) < 2)
				str = "PV_FAIL_NO_OTHER_POSSE_FOOTER";
			else if (func_165(PLAYER::PLAYER_ID(), true, false, true))
				str = "PV_FAIL_WANTED_FOOTER";
			else if (!func_209(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (func_149(PLAYER::PLAYER_ID(), false, true))
				str = "PV_GENERIC_FAIL_PASSIVE";
			else
				str = "POSSE_VERSUS_HUNT_THE_POSSE_LEADER_DESC";
			break;
	
		case 8:
			if (!func_204(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
				str = "PV_BIGGEST_FISH_TOO_FEW";
			else if (!func_205(true, 2))
				str = "PV_BIGGEST_FISH_TOO_FEW_AVAILABLE";
			else if (func_165(PLAYER::PLAYER_ID(), true, false, true))
				str = "PV_FAIL_WANTED_FOOTER";
			else if (func_208(&(Global_1108965.f_775), 1))
				str = "PV_BIGGEST_FISH_FAIL_NO_RODS";
			else
				str = "POSSE_VERSUS_BIGGEST_FISH_FOOTER";
			break;
	
		case 9:
			if (!func_204(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
				str = "PV_FLYING_BIRD_TOO_FEW";
			else if (!func_205(true, 2))
				str = "PV_FLYING_BIRD_TOO_FEW_AVAILABLE";
			else if (func_165(PLAYER::PLAYER_ID(), true, false, true))
				str = "PV_FAIL_WANTED_FOOTER";
			else
				str = "POSSE_VERSUS_FLYING_BIRD_FOOTER";
			break;
	
		case 10:
			if (!func_204(iParam0))
				str = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
				str = "PV_HERB_HUNT_TOO_FEW";
			else if (!func_205(true, 2))
				str = "PV_HERB_HUNT_TOO_FEW_AVAILABLE";
			else if (func_165(PLAYER::PLAYER_ID(), true, false, true))
				str = "PV_FAIL_WANTED_FOOTER";
			else
				str = "POSSE_VERSUS_HERB_HUNT_FOOTER";
			break;
	
		default:
			str = "NET_POSSE_VERSUS_CONTENT_TYPE_FOOTER_INVALID";
			break;
	}

	return MISC::VAR_STRING(2, str);
}

void func_179(char* sParam0, Hash hParam1) // Position - 0x477C Hash - 0xE39206D5 ^0xE69609B1
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_1556.f_44.f_5, sParam0);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940252.f_1556.f_44.f_6))
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_1556.f_44.f_6, hParam1);

	return;
}

BOOL func_180(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x47B8 Hash - 0xC9655EC3 ^0xE7BDB885
{
	if (Global_1940199.f_12)
		if (bParam2 || Global_1940199.f_13 > 0 || Global_1940199.f_11 > 0)
			return 1;
	else if (bParam1 && !(Global_1940199.f_9 == 1370593166))
		return 0;

	if (Global_1940199.f_14 > 0 || bParam2 && Global_1940199.f_14 > -1)
		return 1;

	if (bParam0)
		if (Global_1940199.f_7)
			if (bParam2 || Global_1940199.f_15 > 0)
				return 1;

	return 0;
}

Ped func_181(Ped pedParam0) // Position - 0x4856 Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

BOOL func_182(Player plParam0) // Position - 0x4872 Hash - 0xBB4E2106 ^0x5AF0D921
{
	int num;
	Player player;
	int num2;

	if (plParam0 == 0)
		plParam0 = PLAYER::GET_PLAYER_INDEX();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (!func_49(Global_1056554[player /*491*/].f_2))
		return false;

	num = func_108(Global_1056554[player /*491*/].f_2);
	num2 = func_141(Global_1056554[player /*491*/].f_2);

	switch (num2)
	{
		case 3:
			switch (num)
			{
				case 30:
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4909 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_184(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4933 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

Vector3 func_185(Player plParam0) // Position - 0x4951 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL func_186(var uParam0, float fParam1) // Position - 0x4965 Hash - 0x68ED3666 ^0xD16E7DA4
{
	Vector3 vector;
	var groundZ;

	vector = { *uParam0 };
	vector.f_2 = vector.f_2 + fParam1;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false))
	{
		uParam0->f_2 = groundZ;
		return true;
	}

	return false;
}

int func_187(int iParam0, Player plParam1, var uParam2) // Position - 0x4999 Hash - 0xD17880D9 ^0xC8F6AA49
{
	Any gangId;
	int num;
	int num2;
	int num3;
	var unk;
	int num4;

	if (plParam1 == 255)
		return 1;

	if (iParam0 == -1)
		return 3;

	if (func_211(iParam0) == joaat("posse_versus"))
	{
		if (func_212(plParam1, true))
			return 9;
	
		gangId = GANG::NETWORK_GET_GANG_ID(plParam1);
	
		if (!GANG::NETWORK_IS_GANG_ID_VALID(gangId))
			return 7;
	
		if (!func_161(gangId))
			return 8;
	
		num = 2;
	
		if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId) < num)
			return 10;
	
		if (func_165(plParam1, true, false, true))
			return 17;
	}

	*uParam2 = func_190(Global_1206497.f_1[iParam0 /*4*/]);

	if (*uParam2 == -1)
		return 12;

	if (Global_1205938.f_1[*uParam2 /*26*/].f_1 != -1)
		return 13;

	num2 = 0;
	num3 = 24;

	if (func_213(&unk, iParam0))
	{
		func_214(unk, -1068020191, &num2, false);
		func_214(unk, 796959411, &num3, false);
	}

	num4 = func_216(func_215());

	if (num2 < num3)
		if (num4 < num2 || num4 >= num3)
			return 11;
	else if (num4 >= num3 && num4 < num2)
		return 11;

	return 0;
}

BOOL func_188(int iParam0) // Position - 0x4AC7 Hash - 0x339D45CE ^0x339D45CE
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return false;
	
		default:
		
	}

	return true;
}

int func_189(int iParam0) // Position - 0x4AEE Hash - 0xF3E1A6C ^0x8F1B7C64
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return joaat("posse_versus");
	
		default:
		
	}

	return joaat("standard");
}

int func_190(int iParam0) // Position - 0x4B1D Hash - 0x1C727479 ^0x1C727479
{
	int num;
	int num2;
	int i;

	switch (iParam0)
	{
		case joaat("standard"):
			num = 0;
			num2 = 0;
			break;
	
		case joaat("posse_versus"):
			num = 2;
			num2 = 7;
			break;
	
		case joaat("themed"):
			num = 1;
			num2 = 1;
			break;
	}

	for (i = num; i <= num2; i = i + 1)
	{
		if (Global_1205938.f_1[i /*26*/] == 0)
			return i;
	}

	return -1;
}

int func_191(int iParam0, int iParam1) // Position - 0x4B82 Hash - 0x447A5A6E ^0x270D1ADF
{
	var unk;
	var unk6;
	int num;

	if (func_213(&unk, iParam0) && func_217(&unk))
	{
		unk6 = { unk };
	
		if (func_218(&unk6, iParam1))
		{
			num = 0;
			func_219(unk6, -1378896287, &num, true);
			return num;
		}
	}

	return 0;
}

int func_192(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x4BCD Hash - 0x90D55BFA ^0xB75D84E2
{
	int num;
	Any any;
	var unk5;
	int numChildren;
	Vector3 vector;
	float num2;
	float num3;
	float num4;
	float num5;
	var value;
	int num6;
	int i;
	Player player;
	int j;

	num = 0;

	if (func_213(&any, iParam0) && func_217(&any))
	{
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
		num5 = 999999.9f;
	
		for (j = 0; j <= numChildren - 1; j = j + 1)
		{
			unk5 = { any };
		
			if (func_218(&unk5, j))
			{
				num6 = 0;
				func_219(unk5, -1378896287, &num6, true);
			
				if (func_220(iParam0, num6) == -1 && func_193(iParam0, num6) == 0)
				{
					func_221(unk5, 2060397848, &vector, true);
				
					if (_IS_NULL_VECTOR(vector))
						num3 = 0f;
					else
						num3 = BUILTIN::VDIST(vParam1, vector);
				
					num2 = func_222(iParam0, num6);
					num4 = 0f;
				
					if (num3 > num2)
						num4 = num4 + ((num3 - num2) * 0.01f);
				
					value = func_105(vector, 0f, 0f, 0f, num2, num2, num2, joaat("volSphere"), true, 8);
				
					for (i = 0; i <= 31; i = i + 1)
					{
						if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&value, i))
						{
							player = PLAYER::INT_TO_PLAYERINDEX(i);
						
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) && !GANG::_NETWORK_IS_GANG_MEMBER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), player))
								num4 = num4 + 1f;
						}
					}
				
					if (num4 < num5)
					{
						num5 = num4;
						num = num6;
					}
				}
			}
		}
	}

	return num;
}

int func_193(int iParam0, int iParam1) // Position - 0x4D24 Hash - 0xA30DD1FB ^0x99496526
{
	Vector3 vector;

	if (iParam1 == 0)
		return 4;

	if (func_211(iParam0) == joaat("posse_versus"))
	{
		vector = { func_223(iParam0, iParam1) };
	
		if (!_IS_NULL_VECTOR(vector) && VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 100f, 0, 0, 0) || VOLUME::_0xAA9EE2AAFC717623(vector, 0, 0, 0))
			return 16;
	}

	return 0;
}

int func_194(int iParam0, int iParam1) // Position - 0x4D88 Hash - 0xC74F208 ^0x7D5C475D
{
	int num;
	Any any;
	Any numChildren;
	int num2;

	num = 0;

	if (func_213(&any, iParam0) && func_217(&any) && func_224(&any, iParam1) && func_225(&any))
	{
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
		num2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % numChildren;
	
		if (func_226(&any, num2))
			func_219(any, -1378896287, &num, true);
	}

	return num;
}

int func_195(int iParam0) // Position - 0x4DF9 Hash - 0x99302E3E ^0x99302E3E
{
	if (iParam0 == 0)
		return 5;

	return 0;
}

struct<2> func_196(int iParam0, int iParam1, int iParam2) // Position - 0x4E0C Hash - 0xE85DEB43 ^0xBF29510B
{
	var unk;
	var unk6;
	var unk7;

	if (func_213(&unk, iParam0) && func_217(&unk) && func_224(&unk, iParam1) && func_225(&unk) && func_227(&unk, iParam2))
	{
		func_219(unk, -605149915, &unk6, true);
	
		if (func_228(6, unk6, &unk7))
			return func_146(unk7.f_3, 6);
	}

	return func_29();
}

int func_197(var uParam0, var uParam1) // Position - 0x4E7C Hash - 0xC6213AD ^0xC6213AD
{
	if (!func_49(uParam0))
	{
		func_230(func_229(uParam0), 8, 6, 255);
		return 6;
	}
	else if (func_231(uParam0) != -1)
	{
		func_230(func_229(uParam0), 8, 14, 255);
		return 14;
	}
	else if (!func_232(uParam0))
	{
		func_230(func_229(uParam0), 8, 21, 255);
		return 21;
	}
	else if (!func_233(uParam0))
	{
		func_230(func_229(uParam0), 8, 22, 255);
		return 22;
	}
	else if (func_142())
	{
		func_230(func_229(uParam0), 8, 15, 255);
		return 15;
	}

	return 0;
}

BOOL func_198(int iParam0) // Position - 0x4F31 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

int func_199(Hash hParam0) // Position - 0x4F3D Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_200(int iParam0) // Position - 0x4FF7 Hash - 0x9A8C8B29 ^0x9A8C8B29
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			return false;
	
		case 2:
			return false;
	
		case 3:
			return false;
	
		case 4:
			return true;
	
		case 5:
			return true;
	
		case 6:
			return true;
	
		case 7:
			return true;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_201(int iParam0) // Position - 0x5076 Hash - 0x124985AC ^0x5F78AF4B
{
	switch (iParam0)
	{
		case 4:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 2;
	
		case 5:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
	
		case 6:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
	
		case 7:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
	
		case 8:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
	
		case 9:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
	
		case 10:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
	
		default:
		
	}

	return true;
}

char* func_202(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x512C Hash - 0x5916B209 ^0x53F131E9
{
	var text;
	float value;
	int num;
	int num2;
	int num3;
	var text2;
	int num4;
	int lengthOfLiteralString;

	TEXT_LABEL_ASSIGN_STRING(&text, "", 32);

	if (bParam3)
	{
		if (iParam0 != 0)
		{
			TEXT_LABEL_APPEND_STRING(&text, "+", 32);
			iParam0 = iParam0 * -1;
		}
		else
		{
			return "";
		}
	}

	value = (float)iParam0 / 1000f;

	if (bParam5)
		num = BUILTIN::CEIL(value);
	else
		num = BUILTIN::FLOOR(value);

	num2 = func_234(num / 60, 0, 180);
	num3 = func_234(num % 60, 0, 60);

	if (num2 <= 9)
		TEXT_LABEL_APPEND_STRING(&text, "0", 32);

	TEXT_LABEL_APPEND_INT(&text, num2, 32);

	if (num3 <= 9)
		TEXT_LABEL_APPEND_STRING(&text, ":0", 32);
	else
		TEXT_LABEL_APPEND_STRING(&text, ":", 32);

	TEXT_LABEL_APPEND_INT(&text, num3, 32);

	if (bParam1)
	{
		TEXT_LABEL_APPEND_STRING(&text, ".", 32);
		num4 = iParam0 % 1000;
	
		if (num4 < 10)
			TEXT_LABEL_APPEND_STRING(&text2, "00", 8);
		else if (num4 < 100)
			TEXT_LABEL_APPEND_STRING(&text2, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&text2, num4, 8);
	
		if (iParam2 > 3 || iParam2 < 1)
			iParam2 = 3;
	
		lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(&text2);
	
		if (iParam2 > lengthOfLiteralString)
			iParam2 = lengthOfLiteralString;
	
		TEXT_LABEL_ASSIGN_STRING(&text2, HUD::_GET_TEXT_SUBSTRING_2(&text2, iParam2), 8);
		TEXT_LABEL_APPEND_STRING(&text, &text2, 32);
	}

	if (!bParam4)
		TEXT_LABEL_APPEND_STRING(&text, " ", 32);

	return HUD::_GET_TEXT_SUBSTRING_2(&text, HUD::GET_LENGTH_OF_LITERAL_STRING(&text));
}

const char* func_203(char* sParam0, int iParam1) // Position - 0x5262 Hash - 0xB0CFF0C3 ^0x1AE105F9
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_235(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_204(int iParam0) // Position - 0x5298 Hash - 0xE6D79239 ^0x14ED6401
{
	if (func_49(func_47(0)) || Global_1108965.f_775.f_28 != -1)
		return false;

	if (func_236(PLAYER::PLAYER_ID(), 1))
		return false;

	if (!func_237(iParam0))
		return false;

	return true;
}

BOOL func_205(BOOL bParam0, int iParam1) // Position - 0x52E0 Hash - 0x8060FD82 ^0xC0F5E57C
{
	int i;
	int num;
	Player player;

	i = 0;
	num = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			if (!func_49(Global_1056554[i /*491*/].f_2))
			{
				if (bParam0 && !GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, player))
				{
				}
				else
				{
					num = num + 1;
				
					if (num >= iParam1)
						return true;
				}
			}
		
			if (num >= iParam1)
				return true;
		}
	}

	return false;
}

BOOL func_206() // Position - 0x5364 Hash - 0x2A86EE88 ^0x425352A7
{
	Ped ped;

	if (PED::IS_PED_IN_ANY_BOAT(Global_33))
		return true;

	ped = func_181(Global_33);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (PED::IS_PED_SWIMMING(ped))
			return true;

	return PED::IS_PED_SWIMMING(Global_33);
}

BOOL func_207() // Position - 0x53A0 Hash - 0x4520338F ^0x4520338F
{
	return func_177(Global_34) != -1;
}

BOOL func_208(var uParam0, int iParam1) // Position - 0x53B3 Hash - 0x320397CF ^0x320397CF
{
	return func_92(*uParam0, iParam1);
}

BOOL func_209(int iParam0) // Position - 0x53C4 Hash - 0x867FB6AD ^0x927DD217
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	var unk;

	switch (iParam0)
	{
		case 7:
			num = 18;
			break;
	
		case 8:
			num = 16;
			break;
	
		case 9:
			num = 17;
			break;
	
		case 10:
			num = 15;
			break;
	
		default:
			return true;
	}

	num2 = -1;
	num3 = func_187(num, PLAYER::PLAYER_ID(), &num2);

	if (num3 != 0)
		return false;

	num4 = func_192(num, Global_34);
	num3 = func_193(num, num4);

	if (num3 != 0)
		return false;

	num5 = func_194(num, num4);
	num3 = func_195(num5);

	if (num3 != 0)
		return false;

	unk = { func_196(num, num4, num5) };
	num3 = func_197(unk);

	if (num3 != 0)
		return false;

	return true;
}

int func_210(var uParam0) // Position - 0x5487 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_43(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_73(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_238() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

int func_211(int iParam0) // Position - 0x54DA Hash - 0x220835E3 ^0xD3CA642C
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

BOOL func_212(Player plParam0, BOOL bParam1) // Position - 0x54F6 Hash - 0x5FD9694A ^0x8A2402F0
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 != -1 && func_239(i, 64, player))
				if (bParam1)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return true;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return true;
		}
	}

	return false;
}

BOOL func_213(Any* panParam0, int iParam1) // Position - 0x556A Hash - 0x923307EB ^0xCB9659A0
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206497.f_455))
		return false;

	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1093317127;
	panParam0->f_3 = func_240(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_214(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x55AC Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

int func_215() // Position - 0x55D2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

int func_216(int iParam0) // Position - 0x55DE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_217(Any* panParam0) // Position - 0x55F1 Hash - 0xECAE432B ^0x7E3263BA
{
	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1782115362;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_218(Any* panParam0, int iParam1) // Position - 0x5616 Hash - 0x5E449B87 ^0xD7F51783
{
	panParam0->f_2 = 1574313466;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x5637 Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return 1;
	}
	else
	{
		bParam7;
	}

	return 0;
}

int func_220(int iParam0, int iParam1) // Position - 0x5667 Hash - 0xAFC21E33 ^0xC959DC0B
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (Global_1205938.f_1[i /*26*/].f_1 == iParam0 && Global_1205938.f_1[i /*26*/].f_2 == iParam1)
			return i;
	}

	return -1;
}

int func_221(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0x56AD Hash - 0x75EEBFEF ^0x20737992
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

float func_222(int iParam0, int iParam1) // Position - 0x56D3 Hash - 0xEDC94CE6 ^0xA4439EA4
{
	float num;
	var unk;

	num = 200f;

	if (func_213(&unk, iParam0) && func_217(&unk) && func_224(&unk, iParam1))
		func_241(unk, 1168414437, &num, false);

	return num;
}

Vector3 func_223(int iParam0, int iParam1) // Position - 0x5718 Hash - 0xDC069CBE ^0x231A2372
{
	var unk;
	var unk4;

	if (func_213(&unk4, iParam0) && func_217(&unk4) && func_224(&unk4, iParam1))
		func_221(unk4, 2060397848, &unk, false);

	return unk;
}

BOOL func_224(Any* panParam0, int iParam1) // Position - 0x5758 Hash - 0x5E449B87 ^0xA45EA367
{
	panParam0->f_2 = 454625570;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_225(Any* panParam0) // Position - 0x5779 Hash - 0x424BB8C9 ^0x61C1F918
{
	panParam0->f_2 = -310067910;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_226(Any* panParam0, int iParam1) // Position - 0x5794 Hash - 0x5E449B87 ^0x52070773
{
	panParam0->f_2 = 1481789088;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_227(Any* panParam0, int iParam1) // Position - 0x57B5 Hash - 0x5E449B87 ^0x9CEAF780
{
	panParam0->f_2 = -1739269194;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_228(int iParam0, var uParam1, var uParam2) // Position - 0x57D6 Hash - 0x75EF2F01 ^0x75EF2F01
{
	var unk;

	if (!func_242(iParam0))
		return false;

	if (func_243(iParam0, uParam1, &unk))
		func_244(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

Hash func_229(var uParam0, var uParam1) // Position - 0x580B Hash - 0x10103901 ^0xC90ADDEF
{
	Hash num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_118(uParam0, &num))
		return num;

	return 0;
}

void func_230(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5835 Hash - 0x9F673585 ^0x14A8C14E
{
	Player player;
	int num;
	int num2;

	if (iParam3 == 255)
		player = PLAYER::PLAYER_ID();

	num2 = func_245(iParam1);
	num = iParam2;
	num2 && num != false;
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(hParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player), false, false), num2 || num);
	return;
}

int func_231(var uParam0, var uParam1) // Position - 0x5877 Hash - 0xBC93F8EB ^0x994E7FF6
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_50(Global_1205938.f_1[i /*26*/].f_5, uParam0))
			return i;
	}

	return -1;
}

BOOL func_232(var uParam0, var uParam1) // Position - 0x58B0 Hash - 0x8531A89A ^0x2C81CB96
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_229(uParam0));
}

BOOL func_233(var uParam0, var uParam1) // Position - 0x58C4 Hash - 0x8531A89A ^0xC8990837
{
	return UNLOCK::UNLOCK_IS_VISIBLE(func_229(uParam0));
}

int func_234(int iParam0, int iParam1, int iParam2) // Position - 0x58D8 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

const char* func_235(const char* sParam0, int iParam1) // Position - 0x58FD Hash - 0x9E99F03 ^0xE17BE27F
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_236(Player plParam0, int iParam1) // Position - 0x5917 Hash - 0x6C1FDCCC ^0xBC4A67DB
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return func_246(Global_1297600[player /*87*/].f_86, iParam1);

	return false;
}

BOOL func_237(int iParam0) // Position - 0x594B Hash - 0x44E53744 ^0x3CE15FD2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_VERSUS")))
		return false;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("NET_IN_WORLD_DM_0")) && UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_FEUDS"));
	
		case 6:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("IMPROMPTU_RACE_0"));
	
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
	
		default:
		
	}

	return false;
}

int func_238() // Position - 0x59D7 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_239(int iParam0, int iParam1, Player plParam2) // Position - 0x59F5 Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_246(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

int func_240(int iParam0) // Position - 0x5A0F Hash - 0xB8EC44B7 ^0xABFEE883
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARCHERY");
	
		case 1:
			return joaat("CHALLENGES");
	
		case 2:
			return joaat("DEAD_DROP");
	
		case 3:
			return joaat("GOLDEN_HAT");
	
		case 4:
			return joaat("HOT_PROPERTY");
	
		case 5:
			return joaat("KING_OF_THE_CASTLE");
	
		case 6:
			return joaat("KING_OF_THE_RAILS");
	
		case 7:
			return -142235487;
	
		case 8:
			return joaat("ESCAPED_CONVICTS");
	
		case 9:
			return joaat("ROUND_UP");
	
		case 10:
			return joaat("SUPPLY_TRAIN");
	
		case 11:
			return joaat("WRECKAGE");
	
		case 12:
			return joaat("CONDOR_EGG");
	
		case 13:
			return -27117790;
	
		case 14:
			return 1653867545;
	
		case 15:
			return joaat("PV_CHALLENGE_HERBALIST");
	
		case 16:
			return joaat("PV_CHALLENGE_BIGGEST_FISH");
	
		case 17:
			return joaat("PV_CHALLENGE_FLYING_BIRD");
	
		case 18:
			return joaat("HUNT_THE_POSSE_LEADER");
	
		default:
		
	}

	return 0;
}

int func_241(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float* pfParam6, BOOL bParam7) // Position - 0x5B2A Hash - 0x75EEBFEF ^0x896914A8
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_242(int iParam0) // Position - 0x5B50 Hash - 0x5000025C ^0x5000025C
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

BOOL func_243(int iParam0, var uParam1, Any* panParam2) // Position - 0x5B8F Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_247(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_244(int iParam0, Any* panParam1, var uParam2) // Position - 0x5BC3 Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_248(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_249(num);
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
			uParam2->f_5 = func_250(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_251(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_252(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_253(num);
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

int func_245(int iParam0) // Position - 0x5E1E Hash - 0xC02FF737 ^0x133962DF
{
	switch (iParam0)
	{
		case 0:
			return -2147483648;
	
		case 1:
			return 1073741824;
	
		case 2:
			return 1610612736;
	
		case 3:
			return 1879048192;
	
		case 4:
			return 2013265920;
	
		case 5:
			return 805306368;
	
		case 6:
			return 268435456;
	
		case 7:
			return 939524096;
	
		case 8:
			return 134217728;
	
		default:
		
	}

	return 0;
}

BOOL func_246(int iParam0, int iParam1) // Position - 0x5EAD Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_247(int iParam0) // Position - 0x5EBC Hash - 0x5FB59AC3 ^0xE293EFF
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

int func_248(int iParam0, var uParam1) // Position - 0x6031 Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_254(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_249(int iParam0) // Position - 0x604E Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_250(int iParam0) // Position - 0x61A4 Hash - 0xCBE7BE7C ^0xCBE7BE7C
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

int func_251(int iParam0) // Position - 0x61FB Hash - 0x2A2D8996 ^0x2A2D8996
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

int func_252(int iParam0) // Position - 0x62D5 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_253(int iParam0) // Position - 0x636D Hash - 0xD7A7D6 ^0xD7A7D6
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

BOOL func_254(int iParam0, var uParam1, var uParam2) // Position - 0x6517 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_255(iParam0, uParam1, &unk))
		func_256(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_255(int iParam0, var uParam1, Any* panParam2) // Position - 0x653E Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_247(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_256(Any* panParam0, int iParam1, var uParam2) // Position - 0x6572 Hash - 0x59F43AD2 ^0xB9A366FE
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

