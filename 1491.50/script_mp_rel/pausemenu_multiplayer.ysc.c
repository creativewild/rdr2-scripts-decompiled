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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x778C7901 ^0x52AB028B
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	switch (iScriptParam_0)
	{
		case 2:
			if (iScriptParam_0.f_1 == joaat("launchMp") || iScriptParam_0.f_1 == joaat("SwitchToFreemode"))
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
					return;
			
				CAM::DO_SCREEN_FADE_OUT(0);
				func_1();
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (iScriptParam_0.f_1 == joaat("launchSp"))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_2();
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (iScriptParam_0.f_1 == joaat("LaunchMissionCreator"))
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
					return;
			
				if (func_3())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					HUD::SET_FRONTEND_ACTIVE(false);
				}
			}
			break;
	
		default:
			break;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xA2 Hash - 0x836F68C0 ^0x59762EE2
{
	func_4(68);
	func_5();
	func_6(joaat("freeroam"), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_7(3);
	return;
}

void func_2() // Position - 0xCC Hash - 0x39B9F209 ^0xB89408E8
{
	func_4(4);
	func_5();
	func_7(2);
	func_6(joaat("single_player"), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
}

BOOL func_3() // Position - 0xF5 Hash - 0x63B74B97 ^0x23A6C13E
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
		{
			NETWORK::NETWORK_SHOW_PSN_UGC_RESTRICTION();
			return false;
		}
	}

	func_4(68);
	func_5();
	func_6(joaat("MISSION_CREATOR"), joaat("shift_f"), 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_7(3);
	return true;
}

void func_4(int iParam0) // Position - 0x13C Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_5() // Position - 0x153 Hash - 0xAFCBF874 ^0xD0F8E2BC
{
	int i;

	i = 0;

	for (i = 0; i <= 2; i = i + 1)
	{
		Global_1572887.f_300.f_1[i] = 0;
	}

	return;
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x17E Hash - 0x95C5F600 ^0x95C5F600
{
	Global_1572887.f_300 = iParam0;

	if (iParam1 != 0)
		func_8(iParam1);

	if (iParam2 != 0)
		func_8(iParam2);

	if (iParam3 != 0)
		func_8(iParam3);

	if (iParam4 != 0)
		func_8(iParam4);

	if (iParam5 != 0)
		func_8(iParam5);

	if (iParam6 != 0)
		func_8(iParam6);

	if (iParam7 != 0)
		func_8(iParam7);

	if (iParam8 != 0)
		func_8(iParam8);

	if (iParam9 != 0)
		func_8(iParam9);

	if (iParam10 != 0)
		func_8(iParam10);

	func_9();
	return;
}

void func_7(int iParam0) // Position - 0x20B Hash - 0x2BE23AD4 ^0x369A49EF
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

void func_8(int iParam0) // Position - 0x224 Hash - 0xB98AC481 ^0x257100BA
{
	func_11(&(Global_1572887.f_300.f_1), func_10(iParam0), 3);
	return;
}

void func_9() // Position - 0x241 Hash - 0x1F2F5346 ^0xBC215150
{
	int i;

	i = 0;

	for (i = 0; i <= 32; i = i + 1)
	{
		func_12(i);
	}

	Global_1572887.f_300.f_5 != -1;
	Global_1572887.f_300.f_10 != 0;
	Global_1572887.f_300.f_6 != -1;
	Global_1572887.f_300.f_7 != -1;
	Global_1572887.f_300.f_8 != -1;
	Global_1572887.f_300.f_16 != -1;
	Global_1572887.f_300.f_9 != 0;
	Global_1572887.f_300.f_15 != 0;
	return;
}

int func_10(int iParam0) // Position - 0x2D0 Hash - 0x23A3E1FF ^0x23A3E1FF
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case joaat("trade_7"):
			num = 26;
			break;
	
		case joaat("follow_invite"):
			num = 3;
			break;
	
		case joaat("COUPON"):
			num = 29;
			break;
	
		case joaat("random_poker"):
			num = 15;
			break;
	
		case joaat("last_mission"):
			num = 14;
			break;
	
		case -1480790826:
			num = 4;
			break;
	
		case -1369260209:
			num = 28;
			break;
	
		case joaat("last_region"):
			num = 12;
			break;
	
		case joaat("cchar"):
			num = 16;
			break;
	
		case -283069378:
			num = 19;
			break;
	
		case joaat("open_posse"):
			num = 9;
			break;
	
		case joaat("NEW_GAME"):
			num = 1;
			break;
	
		case joaat("last_location"):
			num = 13;
			break;
	
		case joaat("random_region"):
			num = 11;
			break;
	
		case 0:
			num = 0;
			break;
	
		case joaat("trade_1"):
			num = 20;
			break;
	
		case 413241879:
			num = 31;
			break;
	
		case joaat("trade_2"):
			num = 21;
			break;
	
		case joaat("trade_6"):
			num = 25;
			break;
	
		case joaat("bg_custom_3"):
			num = 8;
			break;
	
		case joaat("trade_3"):
			num = 22;
			break;
	
		case 928971890:
			num = 32;
			break;
	
		case joaat("bg_custom_2"):
			num = 7;
			break;
	
		case joaat("trade_4"):
			num = 23;
			break;
	
		case joaat("intro_not_done"):
			num = 2;
			break;
	
		case 1449824096:
			num = 27;
			break;
	
		case joaat("bg_custom_1"):
			num = 6;
			break;
	
		case joaat("shift_f"):
			num = 5;
			break;
	
		case joaat("trade_5"):
			num = 24;
			break;
	
		case 1735278055:
			num = 18;
			break;
	
		case joaat("near_posse"):
			num = 10;
			break;
	
		case joaat("hub"):
			num = 30;
			break;
	
		case joaat("camp"):
			num = 17;
			break;
	}

	return num;
}

BOOL func_11(Any* panParam0, int iParam1, int iParam2) // Position - 0x48A Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::SET_BIT(&panParam0->[num], offset);
	return !isBitSet;
}

BOOL func_12(int iParam0) // Position - 0x4BD Hash - 0xE816C85D ^0xF6665C91
{
	return func_13(&(Global_1572887.f_300.f_1), iParam0, 3);
}

BOOL func_13(Any* panParam0, int iParam1, int iParam2) // Position - 0x4D5 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

