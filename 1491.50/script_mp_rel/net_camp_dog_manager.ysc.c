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
	char* sLocal_19 = 0;
	char* sLocal_20 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xA9072AE2 ^0xA9072AE2
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	func_1();

	while (!func_2(false, false))
	{
		func_3(&Global_1147585, &Global_1147594, &Global_1147587, &Global_1147979);
		BUILTIN::WAIT(0);
	}

	func_4(&Global_1147585, &Global_1147594, &Global_1147587);

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}

	func_6();
	return;
}

void func_1() // Position - 0x6E Hash - 0xA4A9024D ^0x24ACEF0B
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

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0xA6 Hash - 0x8CDC02F2 ^0xDB4E8541
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

int func_3(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x186 Hash - 0x5B83F081 ^0x2476352A
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_12(piParam0, anParam1, uParam2);

	func_13(piParam0, anParam1, uParam2, uParam3);
	func_14(piParam0, anParam1, uParam2, uParam3);
	func_15(piParam0, anParam1, uParam2, uParam3);
	return 1;
}

int func_4(int* piParam0, Any anParam1, var uParam2) // Position - 0x1C6 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_5() // Position - 0x1CF Hash - 0x5D34864A ^0x89399C27
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1147587.f_2))
		return;

	if (!Global_1147587.f_3)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1147587.f_2))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1147587.f_2);
	
		Global_1147587.f_3 = 1;
	}

	return;
}

void func_6() // Position - 0x210 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x21C Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_8() // Position - 0x239 Hash - 0x1FABDECD ^0x67C342BC
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
	
		if (func_16() == 0)
			if (func_17())
				func_6();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	return 1;
}

BOOL func_9() // Position - 0x34A Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_10() // Position - 0x378 Hash - 0x45D4C252 ^0xF6102B88
{
	func_18(&Global_1147585);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1147585, 2, 48);
	func_19(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1147585), 2, "g_mpNetCampDogManagerHost");
	func_20(&Global_1147594);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1147594, 385, 49);
	func_21(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1147594[0 /*12*/]), 385, "g_mpNetCampDogManagerPlayer");
	func_22(&Global_1147587);
	return;
}

void func_11(BOOL bParam0) // Position - 0x3D7 Hash - 0x2B211437 ^0xE0D702E
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

void func_12(int* piParam0, Any anParam1, var uParam2) // Position - 0x4A0 Hash - 0xFF699011 ^0xFF699011
{
	int num;

	num = func_23(*piParam0);

	switch (num)
	{
		case 0:
			func_24(piParam0, 1);
			break;
	
		case 1:
			break;
	
		case 2:
			func_24(piParam0, 3);
			break;
	
		case 3:
			break;
	}

	return;
}

int func_13(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x4EC Hash - 0x7558464E ^0x784DE1C8
{
	Player player;
	Player player2;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	player2 = player;
	num = func_25(anParam1->[player2 /*12*/]);

	switch (num)
	{
		case 0:
			func_26(&anParam1->[player2 /*12*/]);
			func_27(&anParam1->[player2 /*12*/]);
			func_28(&anParam1->[player2 /*12*/], 1);
			[[fallthrough]];
	
		case 1:
			num2 = func_29(piParam0, anParam1, uParam2, uParam3);
		
			if (num2 != num)
				func_28(&anParam1->[player2 /*12*/], num2);
			break;
	}

	return 0;
}

int func_14(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x565 Hash - 0x2201CC04 ^0x2201CC04
{
	int num;
	int num2;
	BOOL flag;
	int num3;

	num = 1;
	num2 = func_30(*uParam2);

	switch (num2)
	{
		case 0:
			if (func_31(piParam0, anParam1, uParam2))
				func_32(uParam2, 1);
			break;
	
		case 1:
			flag = true;
		
			if (flag)
				if (!func_33())
					flag = false;
		
			if (flag)
				if (!func_34(uParam2))
					flag = false;
		
			if (flag)
				if (!func_35(piParam0, anParam1, uParam2))
					flag = false;
		
			if (flag)
				func_32(uParam2, 2);
			break;
	
		case 2:
			if (func_36(piParam0, anParam1, uParam2))
				func_32(uParam2, 3);
			break;
	
		case 3:
			if (func_37(piParam0, anParam1, uParam2))
				func_32(uParam2, 4);
			break;
	
		case 4:
			if (func_38(piParam0, anParam1, uParam2))
				func_32(uParam2, 5);
			break;
	
		case 5:
			num3 = func_39(piParam0, anParam1, uParam2);
		
			if (num3 == 1)
				func_32(uParam2, 0);
			else if (num3 == 2)
				func_32(uParam2, 6);
			break;
	
		case 6:
			if (func_40(piParam0, anParam1, uParam2))
				func_32(uParam2, 1);
			break;
	
		case 7:
			break;
	}

	return num;
}

void func_15(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x6A0 Hash - 0xEB7BEC86 ^0x3FF4458B
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -507840394:
				func_41(piParam0, anParam1, uParam2, uParam3, i);
				break;
		}
	}

	return;
}

int func_16() // Position - 0x6E6 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_17() // Position - 0x6F4 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_18(int* piParam0) // Position - 0x702 Hash - 0xF1A400DF ^0x80E0A848
{
	*piParam0 = 0;
	piParam0->f_1 = 0;
	return;
}

int func_19(int iParam0, int iParam1, char* sParam2) // Position - 0x713 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_20(Any anParam0) // Position - 0x71C Hash - 0xB0057B9B ^0xB0057B9B
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		func_26(&anParam0->[i /*12*/]);
	}

	return;
}

int func_21(int iParam0, int iParam1, char* sParam2) // Position - 0x741 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_22(var uParam0) // Position - 0x74A Hash - 0x2C48044C ^0x80B33E89
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	return;
}

var func_23(var uParam0, var uParam1) // Position - 0x76A Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_24(int* piParam0, int iParam1) // Position - 0x774 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*piParam0 = iParam1;
	return;
}

var func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x781 Hash - 0x7048FEE5 ^0x7048FEE5
{
	return uParam0;
}

void func_26(var uParam0) // Position - 0x78B Hash - 0xC27BF39C ^0x81AC1C13
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "", 64);
	uParam0->f_10 = 0;
	return;
}

void func_27(var uParam0) // Position - 0x7AA Hash - 0xADA90F7B ^0xC741EF59
{
	Hash hash;
	Hash hash2;
	var unk;
	BOOL flag;

	hash = func_42();
	hash2 = func_43();
	func_44(uParam0, hash);

	if (func_45(&unk))
	{
		func_46(uParam0, unk);
		func_47(PLAYER::PLAYER_ID(), unk);
	}

	flag = false;

	if (func_48(hash, 0))
		if (hash == hash2)
			flag = true;

	if (flag)
		func_49(uParam0, 0);
	else
		func_50(uParam0, 0);

	return;
}

void func_28(var uParam0, int iParam1) // Position - 0x814 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_29(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0x821 Hash - 0x37FD866A ^0x282E03FD
{
	Player player;
	Player player2;

	player = PLAYER::PLAYER_ID();
	player2 = player;
	func_51(&anParam1->[player2 /*12*/], uParam3);
	func_52(&anParam1->[player2 /*12*/], uParam2);
	func_53(&anParam1->[player2 /*12*/], uParam2);
	return 1;
}

var func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x858 Hash - 0x88B4E915 ^0x88B4E915
{
	return uParam0;
}

BOOL func_31(int* piParam0, Any anParam1, var uParam2) // Position - 0x862 Hash - 0xDD78BA46 ^0x45C723F4
{
	Global_1147587.f_6 = 0;
	return true;
}

void func_32(var uParam0, int iParam1) // Position - 0x872 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_33() // Position - 0x87F Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_34(var uParam0) // Position - 0x888 Hash - 0x6F44A26E ^0x7A3343F7
{
	BOOL num;
	int num2;

	num = 0;

	switch (uParam0->f_5)
	{
		case 1:
			num = 1;
			break;
	}

	num2 = uParam0->f_5;
	num2 = num2 + 1;

	if (num2 >= 10)
		uParam0->f_5 = 0;
	else
		uParam0->f_5 = num2;

	return num;
}

BOOL func_35(int* piParam0, Any anParam1, var uParam2) // Position - 0x8CC Hash - 0x4F66CCE2 ^0x32F3A108
{
	var unk;

	if (!func_54(piParam0, anParam1, uParam2, &unk))
		return false;

	uParam2->f_1 = unk;
	return true;
}

BOOL func_36(int* piParam0, Any anParam1, var uParam2) // Position - 0x8EF Hash - 0x41A979C9 ^0x680BC26F
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(func_55()))
		return false;

	SCRIPTS::REQUEST_SCRIPT(func_55());
	return true;
}

BOOL func_37(int* piParam0, Any anParam1, var uParam2) // Position - 0x910 Hash - 0xB2B2A031 ^0x5A29F4CC
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_55()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_55());
		return false;
	}

	return true;
}

BOOL func_38(int* piParam0, Any anParam1, var uParam2) // Position - 0x931 Hash - 0x9B43B75B ^0xC0449503
{
	Player player;
	Player player2;
	struct<3> uniqueIntForPlayer;

	player = uParam2->f_1;
	player2 = player;
	func_56(&uniqueIntForPlayer);
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
	uniqueIntForPlayer.f_1 = player;
	uniqueIntForPlayer.f_2 = anParam1->[player2 /*12*/].f_1;

	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(600) <= 0)
		return false;

	Global_1147587.f_2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_55(), &uniqueIntForPlayer, 3, 600);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_55());
	return true;
}

int func_39(int* piParam0, Any anParam1, var uParam2) // Position - 0x98F Hash - 0xAAD329E ^0xC941350E
{
	Player player;
	int uniqueIntForPlayer;

	player = PLAYER::PLAYER_ID();
	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_55(), uniqueIntForPlayer, true, 0))
		return 1;

	return 0;
}

BOOL func_40(int* piParam0, Any anParam1, var uParam2) // Position - 0x9BA Hash - 0x4A2623DD ^0x4A2623DD
{
	return true;
}

void func_41(int* piParam0, Any anParam1, var uParam2, var uParam3, int iParam4) // Position - 0x9C3 Hash - 0x3B2FFFAD ^0x7762A1D4
{
	struct<4> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam4, &eventData, 4))
		return;

	switch (eventData)
	{
		case 11:
			func_57(iParam4);
			break;
	}

	return;
}

Hash func_42() // Position - 0x9F3 Hash - 0x40EF1B0E ^0xB9C7D795
{
	var unk;
	int num;

	unk = { func_59(joaat("kit_camp"), func_58(false), joaat("SLOTID_SATCHEL"), true) };
	num = func_60(unk, -1911121386, 0, true);
	return num;
}

Hash func_43() // Position - 0xA26 Hash - 0x8674BE58 ^0xBC33B762
{
	var unk;
	int num;

	unk = { func_59(joaat("kit_camp"), func_58(false), joaat("SLOTID_SATCHEL"), true) };
	num = func_61(unk, -1911121386, true, -1);
	return num;
}

void func_44(var uParam0, int iParam1) // Position - 0xA59 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

BOOL func_45(var uParam0) // Position - 0xA67 Hash - 0x10AA5E79 ^0x5201D9C7
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_62(&unk))
		return false;

	*uParam0 = { unk.f_14 };
	return true;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xA99 Hash - 0x1137B908 ^0x28236B56
{
	uParam0->f_2 = { uParam1 };
	return;
}

void func_47(Player plParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAAD Hash - 0xE3ABC128 ^0xAC99DA4E
{
	var unk;

	unk.f_4 = 1;
	unk.f_8 = { uParam1 };
	unk.f_7 = plParam0;
	func_64(unk, func_63(0, 8));
	return;
}

BOOL func_48(Hash hParam0, int iParam1) // Position - 0xADC Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_49(var uParam0, int iParam1) // Position - 0xAF6 Hash - 0xEBCD29B7 ^0x3AC2C218
{
	if (func_65(uParam0->f_10, iParam1))
		return;

	func_66(&(uParam0->f_10), iParam1);
	return;
}

void func_50(var uParam0, int iParam1) // Position - 0xB18 Hash - 0xF7F8434D ^0x28715C47
{
	if (!func_65(uParam0->f_10, iParam1))
		return;

	func_67(&(uParam0->f_10), iParam1);
	return;
}

void func_51(var uParam0, var uParam1) // Position - 0xB3B Hash - 0x36899786 ^0x36899786
{
	BOOL flag;
	BOOL flag2;

	flag = func_68(uParam0, 1);
	flag2 = func_69(uParam1, 0);

	if (flag != flag2)
		if (flag2)
			func_49(uParam0, 1);
		else
			func_50(uParam0, 1);

	return;
}

void func_52(var uParam0, var uParam1) // Position - 0xB72 Hash - 0x989FFF0C ^0x989FFF0C
{
	if (!func_70(uParam1, 0))
		return;

	func_27(uParam0);
	func_71(uParam1, 0);
	return;
}

void func_53(var uParam0, var uParam1) // Position - 0xB95 Hash - 0xFA5AF580 ^0x1A668F4C
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	num = func_72(joaat("CAMP_RAID"), PLAYER::PLAYER_ID(), false, true);

	if (!func_73(num))
	{
		func_50(uParam0, 2);
		func_50(uParam0, 3);
		func_50(uParam0, 4);
		return;
	}

	flag = func_74(num, 1);
	flag2 = func_75(num, 16, 255);
	flag3 = func_75(num, 32, 255);

	if (flag && !flag2)
		func_49(uParam0, 2);
	else
		func_50(uParam0, 2);

	if (flag && flag2 || flag3)
		func_49(uParam0, 4);
	else
		func_50(uParam0, 4);

	if (!flag)
		func_50(uParam0, 3);

	return;
}

BOOL func_54(int* piParam0, Any anParam1, var uParam2, var uParam3) // Position - 0xC3F Hash - 0x64C6171D ^0x4D4413CE
{
	Player playerIndex;
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!func_76(i, false, true))
		{
		}
		else
		{
			player = PLAYER::INT_TO_PARTICIPANTINDEX(i);
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);
		
			if (!GANG::NETWORK_IS_GANG_LEADER(playerIndex))
			{
			}
			else if (!func_77(piParam0, anParam1, uParam2, playerIndex))
			{
			}
			else
			{
				*uParam3 = playerIndex;
				return true;
			}
		}
	}

	return false;
}

char* func_55() // Position - 0xCA3 Hash - 0xA6FAF69C ^0xA6FAF69C
{
	return "net_camp_dog";
}

void func_56(var uParam0) // Position - 0xCAE Hash - 0xFFF0AFAB ^0x7D65898B
{
	*uParam0 = -1;
	uParam0->f_1 = 255;
	uParam0->f_2 = 0;
	return;
}

void func_57(int iParam0) // Position - 0xCC5 Hash - 0xDF08D802 ^0x7FC1486C
{
	struct<20> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 20))
		return;

	switch (eventData.f_4)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	}

	return;
}

struct<4> func_58(BOOL bParam0) // Position - 0xD04 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_78(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_59(joaat("character"), func_79(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_59(joaat("character"), func_79(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_59(joaat("character"), func_79(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_59(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xDA4 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_48(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_78(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_60(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xDD5 Hash - 0x6EEC8CD6 ^0xB0AA3BF0
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_80(uParam0, hParam4, &unk, iParam5, bParam6))
		return unk.f_4;

	return 0;
}

int func_61(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0xE05 Hash - 0x67107E64 ^0x67107E64
{
	return func_81(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_62(Any* panParam0) // Position - 0xE19 Hash - 0xC68F5518 ^0xC7C61EDF
{
	Hash hash;
	var guid;
	var guid2;
	int inventoryId;
	var guid3;
	var src;

	hash = func_43();

	if (!func_48(hash, 0))
		return false;

	guid = { func_58(true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return false;

	guid2 = { func_59(joaat("kit_camp"), guid, joaat("SLOTID_SATCHEL"), true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid2))
		return false;

	inventoryId = func_78(true);
	guid3 = { func_59(hash, guid2, -1911121386, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid2))
		return false;

	src.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, &guid3, &src, 22, 1))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 22);
	return true;
}

var func_63(int iParam0, int iParam1) // Position - 0xECA Hash - 0x42C305C ^0x81DF2F42
{
	return func_82(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0xEE8 Hash - 0xA0DD1698 ^0x9BD6D427
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam20))
		return;

	iParam0 = 11;
	iParam0.f_1 = player;
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 20, 6, &uParam20);
	return;
}

BOOL func_65(int iParam0, int iParam1) // Position - 0xF22 Hash - 0x2ACCF512 ^0x4D8BE70B
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_66(int* piParam0, int iParam1) // Position - 0xF32 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_67(int* piParam0, int iParam1) // Position - 0xF42 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

BOOL func_68(var uParam0, int iParam1) // Position - 0xF52 Hash - 0xC98CF668 ^0xD8A4AC39
{
	if (func_65(uParam0->f_10, iParam1))
		return 1;

	return 0;
}

int func_69(var uParam0, int iParam1) // Position - 0xF6C Hash - 0x30A206FC ^0x30A206FC
{
	if (func_65(*uParam0, iParam1))
		return 1;

	return 0;
}

BOOL func_70(var uParam0, int iParam1) // Position - 0xF85 Hash - 0xC98CF668 ^0x9841AD81
{
	if (func_65(uParam0->f_4, iParam1))
		return true;

	return false;
}

void func_71(var uParam0, int iParam1) // Position - 0xF9F Hash - 0xF7F8434D ^0x4B295032
{
	if (!func_65(uParam0->f_4, iParam1))
		return;

	func_67(&(uParam0->f_4), iParam1);
	return;
}

int func_72(int iParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFC2 Hash - 0xD7066F9C ^0x260786A3
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return -1;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1235687[i /*697*/].f_571 != iParam0)
		{
		}
		else if (bParam2 && !func_75(i, 32, plParam1))
		{
		}
		else if (bParam3 && Global_1225099[i /*28*/].f_15 != plParam1)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

BOOL func_73(int iParam0) // Position - 0x1037 Hash - 0x3927FA65 ^0x3927FA65
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x104D Hash - 0xE4660E4F ^0xE4660E4F
{
	return func_83(iParam0) && func_84(Global_1235687[iParam0 /*697*/].f_568, iParam1);
}

BOOL func_75(int iParam0, int iParam1, Player plParam2) // Position - 0x1072 Hash - 0x97EE87D3 ^0x486EE39E
{
	if (plParam2 == 255)
		plParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_83(iParam0) && func_84(Global_1225687[plParam2 /*303*/][iParam0 /*23*/].f_19, iParam1);
}

BOOL func_76(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10A7 Hash - 0x3B886383 ^0x7FC1F470
{
	Player player;
	Player playerIndex;

	player = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);

	if (player != 255)
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(player))
			return false;

	playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);

	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerIndex))
		return false;

	if (bParam1 && PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	return true;
}

BOOL func_77(int* piParam0, Any anParam1, var uParam2, Player plParam3) // Position - 0x10FE Hash - 0x852B688 ^0x852B688
{
	Player player;
	Hash hash;
	int uniqueIntForPlayer;
	Player player2;
	Ped playerPed;
	Player player3;
	Vector3 entityCoords;
	BOOL flag;
	var unk3;
	Vector3 vector;
	var unk6;
	BOOL flag2;

	player = plParam3;
	hash = _STOPWATCH_IS_INITIALIZED(&anParam1->[player /*12*/]);

	if (!func_48(hash, 0))
		return false;

	if (!func_68(&anParam1->[player /*12*/], 0))
		return false;

	if (func_68(&anParam1->[player /*12*/], 1))
		return false;

	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(plParam3);

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_55(), uniqueIntForPlayer, true, 0))
		return false;

	player2 = PLAYER::PLAYER_ID();
	playerPed = PLAYER::GET_PLAYER_PED(player2);
	player3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	flag = false;

	if (func_68(&anParam1->[player /*12*/], 2) && !func_68(&anParam1->[player /*12*/], 3))
		flag = true;

	if (flag)
	{
		if (player == player3)
			flag = true;
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(plParam3, func_55(), uniqueIntForPlayer))
			flag = true;
	}
	else
	{
		flag2 = func_86(plParam3, &unk3, &vector, &unk6);
	
		if (!flag2)
			return false;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vector, true) > 100f)
			return false;
	}

	return true;
}

int func_78(BOOL bParam0) // Position - 0x1204 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_16() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_79() // Position - 0x1245 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_80(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x1251 Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_78(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

int func_81(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x128B Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_87(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

var func_82(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x12B9 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_88() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_89());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_89());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_89());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_90(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_91(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_92(i) != 1)
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
					if (!func_93(player2))
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

BOOL func_83(int iParam0) // Position - 0x164C Hash - 0x3927FA65 ^0x3927FA65
{
	return iParam0 >= 0 && iParam0 <= 12;
}

BOOL func_84(int iParam0, int iParam1) // Position - 0x1662 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x1671 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

BOOL func_86(Player plParam0, var uParam1, var uParam2, var uParam3) // Position - 0x167D Hash - 0x519EAD10 ^0xFFB1C14B
{
	int scenario;

	if (!func_94(plParam0, &scenario))
		return 0;

	!TASK::DOES_SCENARIO_POINT_EXIST(scenario);
	*uParam1 = scenario;
	*uParam2 = { TASK::_GET_SCENARIO_POINT_COORDS(*uParam1, true) };
	*uParam3 = TASK::_GET_SCENARIO_POINT_HEADING(*uParam1, true);
	return 1;
}

BOOL func_87(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x16BC Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_78(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_95(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

int func_88() // Position - 0x170A Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_89() // Position - 0x1718 Hash - 0xEA6CF054 ^0xEA6CF054
{
	return "unnamed";
}

BOOL func_90(int iParam0) // Position - 0x1723 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_91(int iParam0) // Position - 0x17B2 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_96(36, iParam0);
}

int func_92(int iParam0) // Position - 0x17D0 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_93(Player plParam0) // Position - 0x181B Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_97(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_98(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_94(Player plParam0, var uParam1) // Position - 0x1860 Hash - 0xE96DBA82 ^0xE74ABC65
{
	Vector3 vector;
	int scenario;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	if (!func_99(plParam0, &vector))
		return false;

	if (_IS_NULL_VECTOR(vector))
		return false;

	scenario = TASK::FIND_SCENARIO_OF_TYPE_HASH(vector, joaat("world_animal_dog_player_tent_tg"), 5.5f, 0, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
	{
		*uParam1 = scenario;
		return true;
	}

	return false;
}

BOOL func_95(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x18BE Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_78(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return false;

	return true;
}

BOOL func_96(int iParam0, int iParam1) // Position - 0x18F8 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_101(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_102())
		return func_101(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_101(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_97(Player plParam0) // Position - 0x196C Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_98(Player plParam0) // Position - 0x1989 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_103(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_104(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_99(Player plParam0, var uParam1) // Position - 0x1A0C Hash - 0x5A82B82E ^0xF82DF9B6
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;
	*uParam1 = { Global_1144526[player /*83*/].f_38.f_8 };
	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1A39 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_101(Any* panParam0, int iParam1, int iParam2) // Position - 0x1A63 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_102() // Position - 0x1A9A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_103(Player plParam0) // Position - 0x1AA9 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_104(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_104(Player plParam0) // Position - 0x1B15 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

