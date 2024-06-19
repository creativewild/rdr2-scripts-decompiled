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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	char* sLocal_28 = 0;
	char* sLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE90EE919 ^0x9AB09591
{
	int gameTimer;
	int cloudTimeAsInt;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_28 = "props_misc@campfires@5_logs";
	sLocal_29 = "Script_PropCampfire";
	uLocal_31 = uLocal_31;
	func_1("START THREAD");
	gameTimer = MISC::GET_GAME_TIMER();
	func_2();
	func_3();
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - before");

	if (func_4(33554432))
	{
		func_5(33554432);
		func_6();
	}

	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - after");
	func_1("Main loop start");

	if (!func_7(false, false))
	{
		func_8();
		func_9();
	}

	while (!func_7(false, false))
	{
		func_10();
	
		switch (func_11(PLAYER::PLAYER_ID()))
		{
			case 0:
				if (func_12() > 0)
				{
					if (func_13() && func_14())
					{
						func_15();
					}
					else if (Global_1572887.f_72.f_9 == -1 && Global_1572887.f_72.f_13 != 3)
					{
						func_16();
					}
					else if (Global_1572887.f_72.f_9 == -1 && Global_1572887.f_72.f_13 == 3)
					{
						func_15();
					}
					else if (func_17())
					{
						func_16();
					}
					else if (!func_18(Global_1572887.f_72.f_11))
					{
						func_15();
					}
					else
					{
						switch (func_19(Global_1572887.f_72.f_11))
						{
							case joaat("mpfbla"):
							case joaat("mpcval"):
							case joaat("mpibla"):
							case joaat("mpfval"):
							case joaat("mpiol2"):
							case joaat("mpcrho"):
							case joaat("mpfol2"):
							case joaat("mpirho"):
							case joaat("mpival"):
							case joaat("mpfrho"):
							case joaat("mpcol2"):
							case joaat("mpcbla"):
								func_16();
								break;
						
							default:
								func_15();
								break;
						}
					}
				
					func_20(true);
				
					if (!func_21())
						func_22(1);
					else
						func_22(2);
				}
				break;
		
			case 1:
				if (func_23() != joaat("freeroam"))
				{
				}
				else
				{
					func_24();
				}
			
				func_22(2);
				break;
		
			case 2:
				if (func_25())
					func_22(3);
				break;
		
			case 3:
				if (func_21())
				{
					func_22(8);
				}
				else if (func_23() == joaat("Series") && !func_21())
				{
					func_22(7);
				}
				else if (!func_26())
				{
					func_22(7);
				}
				else if (func_27(joaat("trade_2")))
				{
					cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
					STATS::_0x218F7710A139D012();
					func_22(5);
				}
				else
				{
					func_22(4);
				}
				break;
		
			case 4:
				switch (func_28(uLocal_32))
				{
					case 0:
						break;
				
					case 1:
						break;
				
					case 2:
						break;
				
					case 3:
						func_22(6);
						break;
				
					case 4:
						func_29(32);
						break;
				
					case 5:
						func_22(6);
						break;
				}
				break;
		
			case 5:
				if (func_30() != -1)
					func_22(7);
			
				if (cloudTimeAsInt - NETWORK::GET_CLOUD_TIME_AS_INT() > 60)
					func_22(7);
				break;
		
			case 6:
				if (func_13())
					if (func_31())
						func_22(7);
				else
					func_22(7);
				break;
		
			case 7:
				func_32();
				func_22(8);
				break;
		
			case 8:
				func_33();
				func_34();
				func_35();
				func_36(true);
				func_37(&(Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_204.f_10), 1);
				func_22(9);
				break;
		
			case 9:
				func_38(&uLocal_30);
				func_39();
				func_40();
				break;
		
			case 10:
				func_41();
				func_42();
			
				if (NETWORK::NETWORK_CAN_SESSION_END() && NETWORK::NETWORK_IS_SESSION_STARTED())
				{
					PLAYER::FORCE_CLEANUP(523);
					NETWORK::NETWORK_SESSION_LEAVE_SESSION();
				}
				break;
		
			default:
				break;
		}
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_12())
			{
				case 0:
					func_43(9);
					break;
			
				case 9:
					func_44();
					func_45("MP_GAME_STATE_MAIN_UPDATE", 8);
					break;
			
				case 10:
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_41();
	func_42();
	func_46();

	while (func_47())
	{
		BUILTIN::WAIT(0);
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	func_48();
	return;
}

void func_1(char* sParam0) // Position - 0x3F9 Hash - 0xFB58C8E6 ^0xE1B59648
{
	int systemTime;
	int frameCount;

	systemTime = MISC::GET_SYSTEM_TIME();
	frameCount = MISC::GET_FRAME_COUNT();
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::GET_SYSTEM_TIME();
	return;
}

void func_2() // Position - 0x421 Hash - 0x7905AE7F ^0x5E073DC5
{
	SCRIPTS::REQUEST_SCRIPT("net_train_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fme_manager");
	SCRIPTS::REQUEST_SCRIPT("net_gangfeud_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ugc_global_loader");
	SCRIPTS::REQUEST_SCRIPT("net_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_camp_dog_manager");
	SCRIPTS::REQUEST_SCRIPT("net_player_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ace_thread_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fetch_manager");
	SCRIPTS::REQUEST_SCRIPT("net_crew_manager");
	SCRIPTS::REQUEST_SCRIPT("net_beat_manager");
	SCRIPTS::REQUEST_SCRIPT("net_scan_manager");
	return;
}

void func_3() // Position - 0x485 Hash - 0x8467C40D ^0xAE01245D
{
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - start");
	func_49();
	func_50();
	func_51();
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_52();
	func_53();
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - before");
	func_54();
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - after");
	func_55(false);
	func_1("WAIT_FOR_FIRST_NETWORK_BROADCAST");
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();

	if (!func_21())
		func_56();

	func_22(0);
	func_57();
	Global_1051645.f_13 = 0;
	func_58();
	Global_1051608.f_36 = 0;
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - end");
	return;
}

BOOL func_4(int iParam0) // Position - 0x50E Hash - 0xA1D29AFD ^0x462299BE
{
	return Global_1572887.f_72.f_15 && iParam0 != false;
}

void func_5(int iParam0) // Position - 0x523 Hash - 0x3BF5B800 ^0xE68B156
{
	func_59(&(Global_1572887.f_72.f_15), iParam0);
	return;
}

void func_6() // Position - 0x539 Hash - 0x53CFC0EB ^0xB2572CB4
{
	Player player;

	if (func_60() == -1)
		return;

	player = Global_1295666;

	if (func_61(Global_1572887.f_8, 1))
		func_37(&(Global_1056554[player /*491*/].f_204.f_10), 4);
	else
		func_59(&(Global_1056554[player /*491*/].f_204.f_10), 4);

	Global_1056554[player /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[player /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[player /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[player /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[player /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[player /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[player /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;

	if (func_4(1024))
		func_37(&(Global_1056554[player /*491*/].f_204.f_10), 2);
	else
		func_59(&(Global_1056554[player /*491*/].f_204.f_10), 2);

	return;
}

BOOL func_7(BOOL bParam0, BOOL bParam1) // Position - 0x64E Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_8() // Position - 0x72E Hash - 0x7F00A60F ^0x8E8A87DA
{
	func_62();
	func_63(-1, false, true);
	func_64();

	if (func_27(joaat("bg_custom_1")) || func_27(joaat("bg_custom_2")) || func_27(joaat("bg_custom_3")))
		Global_1102813.f_3969.f_5 = 1;

	return;
}

void func_9() // Position - 0x77A Hash - 0x7DAFB40F ^0x3B373E3D
{
	Global_1072759.f_4 = 1;
	Global_1051645.f_42 = MISC::GET_GAME_TIMER() - Global_1051645.f_40;
	return;
}

void func_10() // Position - 0x79A Hash - 0x389FEB16 ^0x55BEE73C
{
	func_65();

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/] < 8)
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);

	func_62();
	func_66();
	return;
}

int func_11(Player plParam0) // Position - 0x7CE Hash - 0xCAA14173 ^0xCAA14173
{
	if (plParam0 >= 0)
		return Global_1056554[plParam0 /*491*/];

	return -1;
}

int func_12() // Position - 0x7E9 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1072758;
}

BOOL func_13() // Position - 0x7F5 Hash - 0x7CC17417 ^0xCBE61A74
{
	return Global_1572887.f_196 > 0;
}

BOOL func_14() // Position - 0x805 Hash - 0x87248DDD ^0xE9A540DC
{
	int num;
	Player player;
	Player player2;

	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_3.f_1 = -1;
	num = { func_67() };
	player = func_68();

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		player2 = player;
		num.f_10 = func_69(player2);
		num = func_70(player2);
		num.f_1 = func_71(player2);
		num.f_2 = func_72(player2);
		num.f_3 = { func_73(player2) };
	}

	if (num.f_3 == 6)
		return 0;

	if (!func_61(num.f_10, 4))
		return 0;

	switch (num)
	{
		case 0:
			if (num.f_1 >= 34 && num.f_1 <= 42)
				return 0;
			break;
	
		case 2:
			if (func_74(player, 4096))
				return 0;
			break;
	}

	return 1;
}

void func_15() // Position - 0x8DA Hash - 0xD4ABC353 ^0x9FEAE9DA
{
	Global_1051645.f_15 = 1;
	return;
}

void func_16() // Position - 0x8E9 Hash - 0x54676713 ^0x34D421CB
{
	Global_1051645.f_15 = 0;
	return;
}

BOOL func_17() // Position - 0x8F8 Hash - 0x47D626CF ^0x5FEDB532
{
	if (func_75() != 0)
		return false;

	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
		return false;

	return true;
}

BOOL func_18(var uParam0, var uParam1) // Position - 0x92E Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_76(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_77(uParam0))
		return false;

	return true;
}

Hash func_19(var uParam0, var uParam1) // Position - 0x962 Hash - 0x10103901 ^0xC90ADDEF
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_78(uParam0, &num))
		return num;

	return 0;
}

void func_20(BOOL bParam0) // Position - 0x98C Hash - 0xCBA7396E ^0x1F8C56C
{
	if (func_79())
	{
		if (!Global_1051645.f_15 || Global_1048577 || Global_1048581 && !Global_1049295 && func_26())
		{
			func_80();
			func_81(bParam0);
			func_82(16);
		}
		else if (Global_1049295)
		{
			if (func_83(15))
			{
				func_82(15);
				func_84(16);
			}
		}
	}
	else
	{
		func_86(func_85() && func_83(16));
	
		if (func_83(16))
			func_82(16);
	}

	return;
}

BOOL func_21() // Position - 0xA20 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

void func_22(int iParam0) // Position - 0xA2F Hash - 0x29C1589C ^0x5FAE1DA4
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255 || num >= 32)
	{
	}
	else
	{
		Global_1056554[num /*491*/] = iParam0;
		Global_1056554[num /*491*/].f_1 = Global_1056554[num /*491*/].f_1 + 1;
		func_1(func_87(Global_1056554[num /*491*/]));
	}

	return;
}

int func_23() // Position - 0xA87 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1572887.f_300;
}

void func_24() // Position - 0xA96 Hash - 0x7BA20553 ^0x9284A206
{
	if (!Global_1572887.f_7)
	{
		Global_1572887.f_7 = 1;
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_START();
	}

	return;
}

BOOL func_25() // Position - 0xAB3 Hash - 0xC4AED09C ^0x17D45AE2
{
	BOOL flag;

	flag = false;

	if (func_88(true))
	{
		if (func_89("net_train_manager", 3, 1024))
			func_37(&(Global_1051645.f_13), 1);
	
		flag = true;
	}

	if (func_88(2))
	{
		if (func_89("net_fme_manager", 4, 1024))
			func_37(&(Global_1051645.f_13), 2);
	
		flag = true;
	}

	if (func_88(32))
	{
		if (func_89("net_gangfeud_manager", 8, 1024))
			func_37(&(Global_1051645.f_13), 32);
	
		flag = true;
	}

	if (func_88(4))
	{
		if (func_89("net_ugc_global_loader", 5, 3088))
			func_37(&(Global_1051645.f_13), 4);
	
		flag = true;
	}

	if (func_88(64))
	{
		if (func_89("net_camp_manager", 9, 1024))
			func_37(&(Global_1051645.f_13), 64);
	
		flag = true;
	}

	if (func_88(128))
	{
		if (func_89("net_camp_dog_manager", 10, 1024))
			func_37(&(Global_1051645.f_13), 128);
	
		flag = true;
	}

	if (func_88(16384))
	{
		if (func_89("net_player_camp_manager", 11, 1024))
			func_37(&(Global_1051645.f_13), 16384);
	
		flag = true;
	}

	if (func_88(256))
	{
		if (func_89("net_ace_thread_manager", 12, 1024))
			func_37(&(Global_1051645.f_13), 256);
	
		flag = true;
	}

	if (func_88(512))
	{
		if (func_89("net_fetch_manager", 13, FRIEND))
			func_37(&(Global_1051645.f_13), 512);
	
		flag = true;
	}

	if (func_88(1024))
	{
		if (func_89("net_crew_manager", 14, 1024))
			func_37(&(Global_1051645.f_13), 1024);
	
		flag = true;
	}

	if (func_88(2048))
	{
		if (func_89("net_beat_manager", 15, 3500))
			func_37(&(Global_1051645.f_13), 2048);
	
		flag = true;
	}

	if (func_88(4096))
	{
		if (func_89("net_scan_manager", 16, MINI))
			func_37(&(Global_1051645.f_13), 4096);
	
		flag = true;
	}

	if (func_88(8192))
	{
		if (func_89("net_moonshine_manager", 17, 1024))
			func_37(&(Global_1051645.f_13), 8192);
	
		flag = true;
	}

	if (func_88(32768))
	{
		if (func_89("flow_controller", 19, 1024))
			func_37(&(Global_1051645.f_13), 32768);
	
		flag = true;
	}

	if (func_88(65536))
	{
		if (func_89("net_stable_manager", 18, 1024))
			func_37(&(Global_1051645.f_13), 65536);
	
		flag = true;
	}

	if (flag)
		return false;

	return true;
}

BOOL func_26() // Position - 0xD29 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_27(int iParam0) // Position - 0xD3D Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_91(func_90(iParam0));
}

int func_28(var uParam0) // Position - 0xD4F Hash - 0x119D8C8B ^0xE0B28F6B
{
	int uniqueIntForPlayer;
	var unk;

	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());

	switch (Global_1142424.f_2018)
	{
		case 1:
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
				break;
		
			unk = { func_92() };
		
			if (unk.f_2 != 0)
			{
				if (func_93(64))
					unk.f_2 = -2;
			
				if (func_94(Global_1295666.f_10))
					func_95(unk);
				else
					func_95(unk);
			
				func_96(2);
			}
			else
			{
				func_96(4);
			}
			break;
	
		case 2:
			if (Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 != -1 && Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_4 == Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 && Global_1141332.f_865[uniqueIntForPlayer /*7*/] == 6)
			{
				func_96(3);
				return 3;
			}
			break;
	
		case 4:
			func_96(3);
			break;
	}

	if (Global_1142424.f_2041 == 0)
		Global_1142424.f_2041 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1142424.f_2041 >= Global_1901671.f_604.f_2)
		return 5;

	return func_97();
}

void func_29(int iParam0) // Position - 0xE75 Hash - 0x44C39101 ^0x6523B470
{
	func_98(&(Global_1147183.f_8), iParam0);
	return;
}

int func_30() // Position - 0xE89 Hash - 0xB3A0750F ^0xA3ADCADC
{
	int scheduleLocation;
	int num;

	if (STATS::_0x3AEABAE3F3C7600C() && STATS::_0xA2E2BEA4E83F6270(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS")) > 0)
		STATS::_0xB5E2EDA2135E0FA1(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS"), 0, &scheduleLocation);
	else
		return -1;

	if (scheduleLocation == 0)
		return -1;

	num = func_99(scheduleLocation);

	if (num < 0 || num >= 12)
		return -1;

	return 135 + num;
}

BOOL func_31() // Position - 0xEE9 Hash - 0x4EFD03C ^0x3614657
{
	return Global_1572887.f_196 > 19;
}

void func_32() // Position - 0xEFA Hash - 0xD8F03999 ^0x93C9DE37
{
	float num;
	var unk;
	float num2;

	num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
	func_100(0);
	Global_1102813.f_3594 = 1;

	if (_IS_NULL_VECTOR(Global_17418.f_55.f_1) || func_102(Global_17418.f_55.f_1) == -1 || func_102(Global_17418.f_55.f_1) == 8 || func_103(Global_17418.f_55) == 8)
	{
		if (!func_104(&(Global_17418.f_55.f_1), &num))
		{
			Global_17418.f_55.f_1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
			num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
		}
	
		Global_17418.f_55 = func_105(Global_17418.f_55.f_1, true);
	}

	if (func_23() == joaat("Series"))
	{
		func_106(true);
		func_107(true);
		func_108(122, false);
	}
	else if (func_26())
	{
		func_109(true, 1);
	
		if (NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING() || func_13())
		{
			func_110(64);
			func_110(256);
		}
		else if (Global_1572887.f_300.f_6 != -1)
		{
			func_108(Global_1572887.f_300.f_6, false);
			func_111();
		}
		else if (Global_1572887.f_300.f_7 != -1)
		{
			func_108(Global_1102813.f_25, false);
			func_111();
		}
		else if (Global_1572887.f_300.f_8 != -1)
		{
			func_108(Global_1102813.f_25, false);
			func_111();
		}
		else if (func_27(joaat("bg_custom_1")) || func_27(joaat("bg_custom_2")) || func_27(joaat("bg_custom_3")))
		{
			func_112(&(Global_1102813.f_3969.f_6), &(Global_1102813.f_3969.f_36), 1, true, 1);
		
			if (Global_1102813.f_3969.f_45)
				func_113();
		
			if (Global_1102813.f_3969.f_46)
				func_114(true, false);
		
			Global_1102813.f_3969.f_5 = 0;
			Global_1102813.f_3969 = 0;
		}
		else if (func_27(joaat("COUPON")))
		{
			func_115(true);
			func_116();
			func_109(false, -1);
			func_117(false);
		}
		else if (func_27(joaat("hub")))
		{
			func_118(true);
			func_116();
			func_109(false, -1);
			func_117(false);
		}
		else if (func_27(413241879))
		{
			func_119(true);
			func_116();
			func_109(false, -1);
			func_117(false);
		}
		else if (func_27(928971890))
		{
			func_120(true);
			func_116();
			func_109(false, -1);
			func_117(false);
		}
		else if (func_27(joaat("camp")))
		{
			func_116();
			func_109(false, -1);
			func_117(false);
		}
		else if (func_27(1735278055))
		{
			func_121();
			func_109(false, -1);
			func_117(false);
		}
		else if (func_27(-283069378))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
			unk.f_17.f_6 = { func_124() };
			unk.f_17 = { 30f, 30f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("random_region")))
		{
			func_108(Global_1102813.f_25, false);
			func_111();
		}
		else if (func_27(joaat("last_region")))
		{
			func_108(Global_17418.f_55, false);
			func_111();
		}
		else if (func_27(joaat("last_location")))
		{
			func_126(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
			func_111();
		}
		else if (func_27(joaat("open_posse")) && func_127())
		{
			func_128();
		}
		else if (func_27(joaat("near_posse")) && func_127())
		{
			func_128();
		}
		else if (func_27(joaat("last_mission")))
		{
			if (BUILTIN::VDIST(func_129(1), 0f, 0f, 0f) < 2f)
			{
				func_126(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
			}
			else
			{
				func_122(&unk);
				func_123(&num2);
				unk.f_17.f_9 = joaat("volSphere");
				unk.f_17.f_6 = { func_129(1) };
				unk.f_17 = { 30f, 30f, 50f };
				unk.f_16 = 1;
				unk.f_6 = { unk.f_17 };
				unk.f_6 = { 1.5f, 1.5f, 5f };
				unk.f_1 = { unk.f_17.f_6 };
				unk.f_5 = 2;
				num2.f_5 = 1;
			
				if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
				{
					num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
				}
			
				func_112(&unk, &num2, 1, true, 1);
				func_113();
			}
		}
		else if (func_27(joaat("random_poker")))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
			unk.f_17.f_6 = { func_130(Global_17418.f_55.f_1, -471827042) };
			unk.f_17 = { 30f, 30f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("trade_1")))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_131(3, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -1723.0731f, -430.4347f, 151.0119f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("trade_2")))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_131(4, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -1723.0731f, -430.4347f, 151.0119f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("trade_3")))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (NETWORK::_0xD7D0DF27CB1765B5(1))
			{
				unk.f_17.f_6 = { Global_1102813.f_4076 };
			}
			else if (func_131(2, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("trade_4")))
		{
			func_122(&unk);
		
			if (func_131(5, &(unk.f_17.f_6)))
			{
				func_123(&num2);
				unk.f_17.f_9 = joaat("volSphere");
				unk.f_17 = { 50f, 50f, 30f };
				unk.f_16 = 1;
				unk.f_6 = { unk.f_17 };
				unk.f_6 = { 1.5f, 1.5f, 5f };
				unk.f_1 = { unk.f_17.f_6 };
				unk.f_5 = 2;
				num2.f_5 = 1;
			
				if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
				{
					num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
				}
			
				func_112(&unk, &num2, 1, true, 1);
				func_113();
			}
			else
			{
				func_122(&unk);
				func_126(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
				func_111();
				func_132(904, true);
			}
		}
		else if (func_27(joaat("trade_5")))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_131(6, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("trade_6")))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_131(7, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("trade_7")))
		{
			func_122(&unk);
			func_123(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_131(8, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_125(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_112(&unk, &num2, 1, true, 1);
			func_113();
		}
		else if (func_27(joaat("cchar")))
		{
			func_106(true);
			func_133(true);
			func_134(-561.4f, -3782.6f, 237.6f, 166.8f, true);
			Global_1072759.f_28760 = Global_1072759.f_28760 | 1;
		}
		else
		{
			func_126(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
		}
	
		Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 = 1;
	}
	else if (!func_135())
	{
		func_106(true);
		func_133(true);
		func_126(func_136(33, true), 0f, -1082130432, -1082130432, true, 1, 1);
	}
	else if (!func_137())
	{
		func_106(true);
		func_133(true);
		func_116();
	}
	else
	{
		func_106(true);
		func_133(true);
		func_126(func_136(func_138(Global_1072759.f_28295.f_2), true), 0f, -1082130432, -1082130432, true, 1, 1);
	}

	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_482 = NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1);
	return;
}

void func_33() // Position - 0x1C9C Hash - 0x28C7D3B6 ^0xC3609903
{
	func_139();
	func_140();
	NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT(true);

	if (func_21())
		return;

	if (func_141())
		return;

	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	func_142(-1);
	func_143();
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
	func_144(3);
	func_145();
	func_146();
	func_147();
	func_148();
	SCRIPTS::_0x11B0A0B282FA9B10(true);
	SCRIPTS::_0x6F700A4BF7C3331B(true);
	SCRIPTS::_0xF9E951A1E5517C06();
	STATS::_0x218F7710A139D012();
	func_149();
	func_150();
	Global_1072759.f_21626.f_262 = 1;
	Global_1572887.f_72.f_70 = 0;
	Global_1149432.f_5568 = 1;
	func_151(false);
	NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(func_152(PLAYER::PLAYER_ID(), false, true));
	func_153(1, 6);
	return;
}

void func_34() // Position - 0x1D43 Hash - 0x874FAAC3 ^0x874FAAC3
{
	if (func_141())
		return;

	if (func_21())
		return;

	if (func_60() != 0)
		return;

	func_154();
	func_155();
	return;
}

void func_35() // Position - 0x1D72 Hash - 0xC42E8925 ^0xBB4E78C5
{
	if (!Global_1572887.f_10)
		return;

	NETWORK::_0x2CD41AC000E6F611();
	Global_1572887.f_10 = 0;
	return;
}

void func_36(BOOL bParam0) // Position - 0x1D92 Hash - 0x690E6520 ^0x22CE8B66
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
	return;
}

void func_37(BOOL bParam0, BOOL bParam1) // Position - 0x1DA0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || bParam1;
	return;
}

void func_38(var uParam0) // Position - 0x1DB1 Hash - 0x3A4E6EB4 ^0x232FF4D4
{
	var unk;

	if (*uParam0)
		return;

	if (func_156(255) != 1)
		return;

	if (func_21())
		return;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_4 = 0;
	func_158(unk, func_157(3, 8), false, false);
	*uParam0 = 1;
	return;
}

void func_39() // Position - 0x1E13 Hash - 0x869DEF2E ^0x869DEF2E
{
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
	return;
}

void func_40() // Position - 0x1E4F Hash - 0x3A6081BA ^0xEA886F62
{
	if (func_60() != 0)
		return;

	switch (Global_1051608.f_36)
	{
		case 0:
			break;
	
		case 1:
			func_172();
			break;
	}

	Global_1051608.f_36 = Global_1051608.f_36 + 1;

	if (Global_1051608.f_36 >= 3)
		Global_1051608.f_36 = 0;

	func_173();
	func_174();
	func_175();
	func_176();
	func_177();
	func_178();
	func_159();
	func_179();
	func_180();
	return;
}

void func_41() // Position - 0x1EC7 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_181();
	return;
}

void func_42() // Position - 0x1ED3 Hash - 0xFC27E050 ^0xFC27E050
{
	func_182();
	func_49();
	func_50();
	func_51();
	return;
}

void func_43(int* piParam0) // Position - 0x1EEB Hash - 0x1FE2725C ^0xB1EE297D
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		Global_1072758 = piParam0;

	return;
}

void func_44() // Position - 0x1F03 Hash - 0x493A5CF1 ^0xE530BD44
{
	Global_1295299 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_183();
	func_184();
	return;
}

void func_45(char* sParam0, int iParam1) // Position - 0x1F1B Hash - 0xC224A5DC ^0x9A475DA2
{
	iParam1 = iParam1;
	sParam0 = sParam0;
	!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	return;
}

void func_46() // Position - 0x1F33 Hash - 0x67647E7 ^0x9953980A
{
	func_49();
	func_50();
	func_51();
	func_185();
	func_16();

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		func_186();

	func_187();
	return;
}

BOOL func_47() // Position - 0x1F68 Hash - 0xFA006792 ^0x84D9E31A
{
	int i;
	BOOL num;

	num = 0;

	for (i = 0; i < 20; i = i + 1)
	{
		if (i != 0)
			if (Global_1051645.f_16[i] != 0)
				if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
					num = 1;
	}

	return num;
}

void func_48() // Position - 0x1FB0 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_49() // Position - 0x1FBC Hash - 0x54676713 ^0xB539148
{
	Global_1072759.f_5 = 0;
	return;
}

void func_50() // Position - 0x1FCB Hash - 0x54676713 ^0xF19D400B
{
	Global_1072759.f_4 = 0;
	return;
}

void func_51() // Position - 0x1FDA Hash - 0x54676713 ^0xBC1A12C
{
	Global_1072759.f_3 = 0;
	return;
}

int func_52() // Position - 0x1FE9 Hash - 0x1FABDECD ^0x67C342BC
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
			func_48();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_48();
					break;
			
				case 2:
					func_48();
					break;
			
				case 3:
					func_48();
					break;
			
				case 4:
					func_48();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_48();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_48();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_48();
	
		if (func_60() == 0)
			if (func_188())
				func_48();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_48();

	return 1;
}

BOOL func_53() // Position - 0x20FA Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_54() // Position - 0x2128 Hash - 0x79C41AD5 ^0x68A1F23D
{
	BOOL flag;

	Global_1072759.f_13 = 0;
	flag = false;

	while (!func_7(false, false) && !flag)
	{
		switch (Global_1072759.f_13)
		{
			case 0:
				func_189(&Global_1072758);
				NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1072758, 1, 82);
				func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1072758), 1, "g_mpHostData");
			
				if (func_21())
				{
					Global_1072267 = { Global_1056554[func_191() /*491*/] };
					func_192(&Global_1056554);
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056554, 15713, 83);
					func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1056554[0 /*491*/]), 15713, "g_mpPlayerData");
					Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/] = { Global_1072267 };
				}
				else
				{
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056554, 15713, 83);
					func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1056554[0 /*491*/]), 15713, "g_mpPlayerData");
				}
			
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 1:
				func_194();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 2:
				func_195();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 3:
				func_196();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 4:
				func_197();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 5:
				func_198();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 6:
				func_199();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 7:
				func_200();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 8:
				func_201();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 9:
				func_202();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 10:
				func_203();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 11:
				func_204();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 12:
				func_205();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 13:
				flag = true;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_206();
	return;
}

void func_55(BOOL bParam0) // Position - 0x237A Hash - 0x2B211437 ^0xE0D702E
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
					func_48();
					break;
			
				case 2:
					func_48();
					break;
			
				case 3:
					func_48();
					break;
			
				case 4:
					func_48();
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
			func_48();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_56() // Position - 0x2445 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_207();
	return;
}

void func_57() // Position - 0x2451 Hash - 0x98788C99 ^0x565DA17A
{
	int i;

	i = 0;

	for (i = 0; i <= 9; i = i + 1)
	{
		Global_1072759.f_23.f_5[i /*30*/] = 0;
	}

	Global_1072759.f_23 = 0;
	return;
}

void func_58() // Position - 0x2483 Hash - 0x1EE6315 ^0xE01AE40C
{
	int num;
	int i;
	BOOL flag;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	for (i = 0; i <= 17; i = i + 1)
	{
		flag = Global_1072759.f_19585[i];
		Global_1072759.f_19585[i] = Global_38.f_118[i];
		Global_1056554[num /*491*/].f_443[i] = Global_38.f_118[i];
		Global_1056554[num /*491*/].f_443.f_19[i] = -1;
		func_208(i, flag, num);
	}

	func_209(num, Global_1072759.f_19585.f_21);
	Global_1072759.f_19585.f_21 = 0;
	return;
}

void func_59(BOOL bParam0, BOOL bParam1) // Position - 0x251E Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && bParam1;
	return;
}

int func_60() // Position - 0x2533 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_61(BOOL bParam0, BOOL bParam1) // Position - 0x2541 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && bParam1 != false;
}

void func_62() // Position - 0x2550 Hash - 0xE5760B55 ^0xF4B5ED4F
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	if (Global_1102813.f_3672 != num)
		Global_1102813.f_3672 = num;

	return;
}

int func_63(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x257D Hash - 0xD6FB736C ^0xE38EFEFE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == iParam0 && !bParam2)
		return 1;

	if (!(iParam0 >= -1 && iParam0 <= 7))
		return 0;

	PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), iParam0, bParam1);

	if (!bParam1)
		func_210();

	return 1;
}

void func_64() // Position - 0x25D7 Hash - 0x91C67C66 ^0xFF374C74
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	func_211(&(Global_1295299.f_25), true, true);
	func_211(&(Global_1295299.f_26), true, true);

	if (num != 255)
		Global_1295232[num /*2*/] = false;

	func_212(1);
	return;
}

void func_65() // Position - 0x2612 Hash - 0x3932D0A1 ^0x75694C31
{
	Global_1051645.f_38 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	return;
}

void func_66() // Position - 0x2624 Hash - 0xE83F6B45 ^0xA6A82381
{
	BOOL flag;
	int num;
	int num2;
	var unk;
	var unk36;
	int i;
	int num3;
	int j;
	int num4;
	BOOL flag2;
	var unk217;
	int k;
	var unk225;
	var unk255;

	flag = false;
	num = 12;

	if (func_213(&num))
		flag = true;

	while (num != 12)
	{
		if (func_213(&num))
			flag = true;
	}

	if (Global_1051645.f_45.f_1)
	{
		num2 = 0;
	
		if (func_214(&num2))
			flag = true;
	
		while (num2 != 0)
		{
			if (func_214(&num2))
				flag = true;
		}
	
		Global_1051645.f_45.f_1 = 0;
	}
	else if (func_214(&(Global_1051645.f_45)))
	{
		flag = true;
	}

	unk = { Global_1051645.f_45 };
	unk36 = 12;
	unk36.f_1.f_4 = 10;
	unk36.f_1.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;

	for (i = 0; i < 12; i = i + 1)
	{
		unk36[i /*15*/] = 15;
	}

	num3 = 0;
	num4 = 0;
	flag2 = true;

	if (unk.f_2[0] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 0;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_216(func_215(0));
		num3 = num3 + 1;
	}

	if (unk.f_2[1] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 1;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
	
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2055) && SCRIPTS::IS_THREAD_ACTIVE(Global_1142424.f_2055, false) && Global_1142424.f_2056 != -1)
			unk36[num3 /*15*/].f_4[0] = MISC::_GET_STRING_FROM_VECTOR(Global_1141332[Global_1142424.f_2056 /*27*/].f_20);
		else if (func_217(16))
			unk36[num3 /*15*/].f_4[0] = func_219(func_218(PLAYER::PLAYER_ID(), true));
	
		num3 = num3 + 1;
	}

	if (unk.f_2[2] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 2;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		j = 0;
		num4 = func_220() - 1;
	
		for (j = 0; j <= num4; j = j + 1)
		{
			unk217 = { Global_1051645.f_80[j /*10*/] };
			TEXT_LABEL_APPEND_STRING(&unk217, " ", 64);
			TEXT_LABEL_APPEND_INT(&unk217, Global_1051645.f_80[j /*10*/].f_9, 64);
			unk36[num3 /*15*/].f_4[j] = func_221(unk217);
		}
	
		num3 = num3 + 1;
	}

	if (unk.f_2[3] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 3;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_223(func_222(255));
		num3 = num3 + 1;
	}

	if (unk.f_2[4] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 4;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_224()))
			if (func_225())
				unk36[num3 /*15*/].f_4[0] = func_226();
		else
			unk36[num3 /*15*/].f_4[0] = func_224();
	
		num3 = num3 + 1;
	}

	if (unk.f_2[6] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 6;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		j = 0;
	
		if (func_227(0, Global_1295666))
		{
			unk36[num3 /*15*/].f_4[j] = func_228(0);
			j = j + 1;
		}
	
		if (func_227(1, Global_1295666))
		{
			unk36[num3 /*15*/].f_4[j] = func_228(1);
			j = j + 1;
		}
	
		if (func_227(2, Global_1295666))
		{
			unk36[num3 /*15*/].f_4[j] = func_228(2);
			j = j + 1;
		}
	
		num3 = num3 + 1;
	}

	if (unk.f_2[7] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 7;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_229();
		num3 = num3 + 1;
	}

	if (unk.f_2[8] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 8;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		j = 0;
		unk225.f_3 = -1;
		unk225.f_3.f_1 = -1;
		unk225.f_11.f_12 = -1;
		unk225.f_11.f_12.f_1 = -1;
		unk225.f_11.f_14 = 255;
		unk225.f_11.f_15 = 255;
	
		for (k = 0; k < 10; k = k + 1)
		{
			if (j >= 10)
				break;
		
			unk225 = { func_230(k) };
		
			if (!func_231(&unk225))
			{
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk255, "Invite - ", 64);
				TEXT_LABEL_APPEND_INT(&unk255, k, 64);
				unk36[num3 /*15*/].f_4[j] = func_221(unk255);
				j = j + 1;
			}
		}
	
		num3 = num3 + 1;
	}

	if (unk.f_2[9] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 9;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = "Matchmaking Hack";
		num3 = num3 + 1;
	}

	if (unk.f_2[10] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 10;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_232(PLAYER::PLAYER_ID());
		num3 = num3 + 1;
	}

	if (unk.f_2[11] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 11;
		unk36[num3 /*15*/].f_1 = { func_233() };
		unk36[num3 /*15*/].f_4[0] = func_234();
		num3 = num3 + 1;
	}

	if (unk.f_2[12] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 12;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		num3 = num3 + 1;
	}

	if (unk.f_2[13] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 13;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		num3 = num3 + 1;
	}

	if (unk.f_2[14] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 14;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		num3 = num3 + 1;
	}

	if (!flag2)
	{
		if (NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE() || flag)
			NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(false, &unk36, num3);
	
		if (unk.f_2[12] || unk.f_2[13] || unk.f_2[14] || unk.f_2[0])
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
				NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(false);
		else if (!NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
			NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(true);
	}
	else
	{
		if (!NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE())
			NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(true, &unk36, -1);
	
		if (!NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
			NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(true);
	}

	return;
}

struct<11> func_67() // Position - 0x2D3F Hash - 0x8EB3ADE0 ^0xEA215297
{
	return Global_1572887.f_196.f_30;
}

Player func_68() // Position - 0x2D52 Hash - 0xA1DBD1D9 ^0x234104B6
{
	return Global_1572887.f_196.f_41;
}

int func_69(Player plParam0) // Position - 0x2D62 Hash - 0xD56839EF ^0x7C431705
{
	return Global_1056554[plParam0 /*491*/].f_204.f_10;
}

var func_70(Player plParam0) // Position - 0x2D77 Hash - 0xAB6BAF6E ^0x47DE14CE
{
	return Global_1056554[plParam0 /*491*/].f_204;
}

var func_71(Player plParam0) // Position - 0x2D8A Hash - 0xD56839EF ^0x3AC64263
{
	return Global_1056554[plParam0 /*491*/].f_204.f_1;
}

var func_72(Player plParam0) // Position - 0x2D9F Hash - 0xD56839EF ^0x58980B9F
{
	return Global_1056554[plParam0 /*491*/].f_204.f_2;
}

struct<2> func_73(Player plParam0) // Position - 0x2DB4 Hash - 0xB4EADE72 ^0xAAB7109F
{
	return Global_1056554[plParam0 /*491*/].f_204.f_3;
}

BOOL func_74(Player plParam0, int iParam1) // Position - 0x2DCB Hash - 0xC87751BB ^0x1676535F
{
	return Global_263042[plParam0 /*65*/].f_63 && iParam1 != false;
}

int func_75() // Position - 0x2DE2 Hash - 0x4228A1C2 ^0xC61894FA
{
	return Global_1572887.f_72;
}

BOOL func_76(int iParam0) // Position - 0x2DF0 Hash - 0x5000025C ^0x5000025C
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

int func_77(int iParam0) // Position - 0x2E2F Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_78(int iParam0, var uParam1, Any* panParam2) // Position - 0x2EC5 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_18(iParam0))
		return false;

	func_235(panParam2);

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

BOOL func_79() // Position - 0x2FD0 Hash - 0xB04742BC ^0xA3AB29FF
{
	int num;

	if (Global_1901671.f_45.f_2 == 1788394582)
	{
		num = Global_1295666.f_16;
	
		if (num > Global_1901671.f_45.f_3 && num < Global_1901671.f_45.f_4)
			return true;
	}

	return false;
}

void func_80() // Position - 0x3013 Hash - 0x98EB8C9 ^0xE9DABBBA
{
	int weather;
	int num;

	if (!func_83(1))
		return;

	MISC::_GET_FORCED_WEATHER(&weather, &num);

	if (weather != 0 || num != 0)
		if (Global_1295666.f_16 % 239 != 0)
			return;

	func_237(func_236(), func_85());
	return;
}

void func_81(BOOL bParam0) // Position - 0x305F Hash - 0x51236C15 ^0xC2D7FBDB
{
	Hash hash;

	if (!func_79())
		return;

	if (func_238() || func_239())
	{
		if (!func_83(1) || bParam0)
		{
			hash = joaat("SNOWLIGHT");
		
			if (func_238())
				hash = joaat("snow");
		
			func_237(hash, func_85());
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true, true);
			POPULATION::_0xEC116EDB683AD479(true);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_reduceGlobalTemperature");
			func_84(1);
		}
	
		if (func_85() || bParam0)
		{
			if (func_238())
			{
				if (!func_83(4))
				{
					GRAPHICS::_SET_SNOW_COVERAGE_TYPE(3);
					func_84(4);
					func_82(2);
				}
			}
			else if (!func_83(2))
			{
				GRAPHICS::_SET_SNOW_COVERAGE_TYPE(2);
				func_84(2);
				func_82(4);
			}
		}
	}

	if (func_240())
	{
		if (!func_83(8) && !STREAMING::IS_LOAD_SCENE_ACTIVE() && !func_241(-1562607865) || bParam0)
		{
			func_242(-1562607865);
			func_84(8);
		}
	}

	return;
}

void func_82(int iParam0) // Position - 0x315C Hash - 0xDD4F2B2E ^0xB155D908
{
	Global_1939596.f_84 = Global_1939596.f_84 - Global_1939596.f_84 && iParam0;
	return;
}

BOOL func_83(int iParam0) // Position - 0x317A Hash - 0xC67CC87B ^0x6084FDC8
{
	return Global_1939596.f_84 && iParam0 != false;
}

void func_84(int iParam0) // Position - 0x318D Hash - 0x3410C012 ^0xF7C8FC4A
{
	Global_1939596.f_84 = Global_1939596.f_84 || iParam0;
	return;
}

BOOL func_85() // Position - 0x31A4 Hash - 0x4C81F065 ^0x1BF1B9CD
{
	return SCRIPTS::IS_LOADING_SCREEN_VISIBLE() || CAM::IS_SCREEN_FADED_OUT();
}

void func_86(BOOL bParam0) // Position - 0x31BA Hash - 0xBFD29FE0 ^0x68AC9E2C
{
	if (func_83(1) || bParam0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true);
		POPULATION::_0xEC116EDB683AD479(false);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_82(1);
	}

	if (func_83(6) && func_85() || bParam0)
	{
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		func_82(2);
		func_82(4);
	}

	if (func_83(8) && !STREAMING::IS_LOAD_SCENE_ACTIVE() && !func_241(-1562607865) || bParam0)
	{
		func_243(-1562607865);
		func_82(8);
	}

	return;
}

char* func_87(int iParam0) // Position - 0x324E Hash - 0xC83EA529 ^0x4A8E707A
{
	char* str;

	str = 0;

	switch (iParam0)
	{
		case -1:
			str = "MP_GAME_STATE_INVALID";
			break;
	
		case 0:
			str = "MP_GAME_STATE_GAME_INIT";
			break;
	
		case 1:
			str = "MP_GAME_STATE_LOAD_INIT_THREADS";
			break;
	
		case 2:
			str = "MP_GAME_STATE_LOAD_MAIN_THREADS";
			break;
	
		case 3:
			str = "MP_GAME_STATE_ROUTE_TRANSITION";
			break;
	
		case 4:
			str = "MP_GAME_STATE_CREATE_PLAYER_CAMP";
			break;
	
		case 5:
			str = "MP_GAME_STATE_VERIFY_MADAM_NAZAR";
			break;
	
		case 6:
			str = "MP_GAME_STATE_CHECK_FOR_INVITE";
			break;
	
		case 7:
			str = "MP_GAME_STATE_SPAWN_PLAYER";
			break;
	
		case 8:
			str = "MP_GAME_STATE_MAIN_UPDATE_FIRST_FRAME";
			break;
	
		case 9:
			str = "MP_GAME_STATE_MAIN_UPDATE";
			break;
	
		case 10:
			str = "MP_GAME_STATE_END";
			break;
	
		case 11:
			str = "MP_GAME_STATE_ALL_LEAVE";
			break;
	}

	return str;
}

BOOL func_88(BOOL bParam0) // Position - 0x3325 Hash - 0x943401FB ^0xF629E537
{
	if (Global_1051645.f_15 && func_61(Global_1051645.f_14, bParam0))
		return false;

	if (func_61(Global_1051645.f_13, bParam0))
		return false;

	return true;
}

BOOL func_89(char* sParam0, int iParam1, eStackSize essParam2) // Position - 0x335F Hash - 0xE7554F13 ^0x8C5CBE9D
{
	SCRIPTS::REQUEST_SCRIPT(sParam0);

	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(essParam2) > 0)
	{
		Global_1051645.f_16[iParam1] = SCRIPTS::START_NEW_SCRIPT(sParam0, essParam2);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return true;
	}

	return false;
}

int func_90(int iParam0) // Position - 0x33A0 Hash - 0x23A3E1FF ^0x23A3E1FF
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

BOOL func_91(int iParam0) // Position - 0x355A Hash - 0xE816C85D ^0xF6665C91
{
	return func_244(&(Global_1572887.f_300.f_1), iParam0, 3);
}

Vector3 func_92() // Position - 0x3572 Hash - 0x8FE88B75 ^0xB0248239
{
	var unk;
	var unk4;

	unk4 = { func_245(false) };
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

BOOL func_93(int iParam0) // Position - 0x35EC Hash - 0x4D892971 ^0xA4BF78E0
{
	return func_246(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

BOOL func_94(int iParam0) // Position - 0x3606 Hash - 0x1BED13A8 ^0xB3AE4D14
{
	Player gangLeader;
	int num;
	var unk;
	int num2;
	int i;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
		return false;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(iParam0);

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
			unk = { func_247(gangLeader) };
		
			for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
			{
				if (POSSE::_0xC084FF658B2E81DA(&unk, i, &num2) && num2 != 0 && num2.f_9 == 1)
					return true;
			}
		}
	}

	return false;
}

int func_95(var uParam0, var uParam1, var uParam2) // Position - 0x3692 Hash - 0xB9B544DC ^0xB9B544DC
{
	if (!func_248(uParam0, 0))
		return 0;

	func_249(64);
	return 1;
}

void func_96(int iParam0) // Position - 0x36B2 Hash - 0xB3D6FC5E ^0xB3D6FC5E
{
	if (Global_1142424.f_2018 != iParam0)
		Global_1142424.f_2018 = iParam0;

	return;
}

int func_97() // Position - 0x36CF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1142424.f_2018;
}

void func_98(int iParam0, int iParam1) // Position - 0x36DE Hash - 0xF55E891F ^0xF55E891F
{
	func_250(iParam0, iParam1);
	return;
}

int func_99(int iParam0) // Position - 0x36EE Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case joaat("MPSW_LOCATION_09"):
			return 9;
	
		case joaat("MPSW_LOCATION_04"):
			return 4;
	
		case joaat("MPSW_LOCATION_03"):
			return 3;
	
		case joaat("MPSW_LOCATION_06"):
			return 6;
	
		case joaat("MPSW_LOCATION_02"):
			return 2;
	
		case joaat("MPSW_LOCATION_08"):
			return 8;
	
		case joaat("MPSW_LOCATION_01"):
			return 1;
	
		case joaat("MPSW_LOCATION_07"):
			return 7;
	
		case joaat("MPSW_LOCATION_11"):
			return 11;
	
		case joaat("MPSW_LOCATION_10"):
			return 10;
	
		case joaat("MPSW_LOCATION_00"):
			return 0;
	
		case joaat("MPSW_LOCATION_05"):
			return 5;
	
		default:
		
	}

	return 0;
}

void func_100(int iParam0) // Position - 0x377B Hash - 0x9158DA74 ^0xFB81B348
{
	int frameCount;
	int systemTime;

	frameCount = MISC::GET_FRAME_COUNT();
	systemTime = MISC::GET_SYSTEM_TIME();
	Global_1102813 = iParam0;
	Global_1102813.f_3571 = systemTime;
	Global_1102813.f_3572 = frameCount;
	Global_1102813.f_3573 = 0;
	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x37AF Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_102(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x37D9 Hash - 0x56F0811C ^0x278FB5A
{
	return func_251(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_103(int iParam0) // Position - 0x37EF Hash - 0x4D13899D ^0x4D13899D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 122)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

BOOL func_104(Vector3* pvParam0, float* pfParam1) // Position - 0x38EB Hash - 0xC5FD8AED ^0x880F8832
{
	Hash hash;
	int endRange;
	int randomIntInRange;

	hash = Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	endRange = func_252(hash);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_253(hash, randomIntInRange, pvParam0, pfParam1))
			return true;
	}

	return false;
}

int func_105(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x393B Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_254();

	if (func_255(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_256(vParam0, bParam3);
}

void func_106(BOOL bParam0) // Position - 0x3989 Hash - 0x19F9ED95 ^0x19F9ED95
{
	if (!bParam0)
		func_257(18);
	else
		func_258(18);

	return;
}

void func_107(BOOL bParam0) // Position - 0x39A8 Hash - 0x7AFD0A2B ^0x7AFD0A2B
{
	if (!bParam0)
		func_257(24);
	else
		func_258(24);

	return;
}

void func_108(int iParam0, BOOL bParam1) // Position - 0x39C7 Hash - 0x6D3AA84D ^0x7CCF062C
{
	var unk;
	float num;

	if (!func_104(&(num.f_6), &num))
	{
		num.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
	}

	num.f_5 = 1;
	func_258(92);

	if (func_259(iParam0, &unk))
	{
		func_112(&unk, &num, 1, true, 1);
	
		if (bParam1)
			func_257(0);
	
		return;
	}

	func_126(num.f_6, num, -1082130432, -1082130432, true, 1, 1);

	if (bParam1)
		func_257(0);

	return;
}

void func_109(BOOL bParam0, int iParam1) // Position - 0x3A5C Hash - 0xC3F3A4BB ^0xC3F3A4BB
{
	if (bParam0)
	{
		if (iParam1 != -1)
			Global_1102813.f_3799 = 0;
		else
			Global_1102813.f_3799 = 1;
	
		func_258(62);
		Global_1102813.f_3798 = iParam1;
	}
	else
	{
		func_257(62);
	}

	return;
}

void func_110(int iParam0) // Position - 0x3A9C Hash - 0x3BF5B800 ^0x32EAF33F
{
	func_37(&(Global_1572887.f_196.f_43), iParam0);
	return;
}

void func_111() // Position - 0x3AB2 Hash - 0x7F4D66ED ^0x7F4D66ED
{
	func_258(94);
	return;
}

void func_112(var uParam0, var uParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x3AC1 Hash - 0x44776CA5 ^0xEB2B4E9
{
	if (func_156(255) == 4)
		return;

	if (bParam3)
	{
		if (_IS_NULL_VECTOR(uParam0->f_17.f_6))
			return;
	
		if (BUILTIN::VMAG(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_1 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_2 = Global_1901671.f_51.f_1;
		}
	}

	if (_IS_NULL_VECTOR(uParam1->f_6))
		return;

	if (uParam0->f_16)
	{
		if (BUILTIN::VMAG(uParam0->f_6) < 1f)
			return;
	
		if (BUILTIN::VMAG(uParam0->f_17) < BUILTIN::VMAG(uParam0->f_6))
			uParam0->f_16 = 0;
	}

	func_258(0);
	func_258(3);
	Global_1102813.f_3909 = iParam2;
	Global_1102813.f_3910 = bParam3;
	Global_1102813.f_3911 = iParam4;
	func_122(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = { *uParam0 };
	func_123(&(Global_1102813.f_3878));
	Global_1102813.f_3878 = { *uParam1 };
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_260(Global_1102813.f_3839, 36);
	func_261(Global_1102813.f_3878, 36);
	return;
}

void func_113() // Position - 0x3BF9 Hash - 0x7A10C1CB ^0x7A10C1CB
{
	func_258(93);
	func_258(92);
	return;
}

void func_114(BOOL bParam0, BOOL bParam1) // Position - 0x3C0F Hash - 0x225FDE2E ^0x225FDE2E
{
	if (bParam0)
	{
		func_258(70);
	
		if (bParam1)
			func_258(73);
	}
	else
	{
		func_257(70);
		func_257(73);
	}

	return;
}

void func_115(BOOL bParam0) // Position - 0x3C40 Hash - 0x4B870FCE ^0x4B870FCE
{
	if (bParam0)
		func_258(52);
	else
		func_257(52);

	return;
}

void func_116() // Position - 0x3C5E Hash - 0xA7E8CBCB ^0xA7E8CBCB
{
	func_262(true);
	func_263(true, true);
	return;
}

void func_117(BOOL bParam0) // Position - 0x3C71 Hash - 0xA5FB2466 ^0xA5FB2466
{
	if (bParam0)
		func_258(60);
	else
		func_257(60);

	return;
}

void func_118(BOOL bParam0) // Position - 0x3C8F Hash - 0x7E75D93D ^0x7E75D93D
{
	if (bParam0)
		func_258(54);
	else
		func_257(54);

	return;
}

void func_119(BOOL bParam0) // Position - 0x3CAD Hash - 0xBD433807 ^0xBD433807
{
	if (bParam0)
		func_258(56);
	else
		func_257(56);

	return;
}

void func_120(BOOL bParam0) // Position - 0x3CCB Hash - 0xE77257BF ^0xE77257BF
{
	if (bParam0)
		func_258(58);
	else
		func_257(58);

	return;
}

void func_121() // Position - 0x3CE9 Hash - 0xA7E8CBCB ^0xA7E8CBCB
{
	func_264(true);
	func_263(true, true);
	return;
}

void func_122(var uParam0) // Position - 0x3CFC Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_123(float* pfParam0) // Position - 0x3D0E Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*pfParam0 = { unk };
	return;
}

Vector3 func_124() // Position - 0x3D20 Hash - 0xD83014AE ^0x1B05CA78
{
	int num;

	num = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 4;

	switch (num)
	{
		case 0:
			return 1879.3817f, 274.6259f, 76.1829f;
	
		case 1:
			return -2360.78f, -1590.05f, 151.962f;
	
		case 2:
			return 1121.74f, -1315.53f, 64.3595f;
	
		case 3:
			return -3424.42f, -3298.08f, -6.87744f;
	
		default:
		
	}

	return 1879.3817f, 274.6259f, 76.1829f;
}

BOOL func_125(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0x3DAC Hash - 0x483BEF08 ^0xE7718810
{
	Hash hash;
	int endRange;
	int randomIntInRange;

	hash = Global_1072759.f_23824.f_383[func_265(uParam0) /*272*/];
	endRange = func_252(hash);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_253(hash, randomIntInRange, pvParam3, pfParam4))
			return true;
	}

	return false;
}

void func_126(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0x3DFD Hash - 0x5601A1E5 ^0x8BAC6603
{
	var entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	num = fParam3;

	if (!func_125(Global_1295666.f_12, &entityCoords, &num))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		num = fParam3;
	}

	func_266(uParam0, fParam3, entityCoords, num, iParam4, iParam5, bParam6, iParam7, iParam8, 1);
	return;
}

BOOL func_127() // Position - 0x3E58 Hash - 0x772B5EA3 ^0xCEB50BE8
{
	Any gangId;
	Player gangLeader;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (!GANG::NETWORK_IS_GANG_ACTIVE(gangId))
		return 0;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(gangLeader)))
		return 0;

	if (gangLeader == PLAYER::PLAYER_ID())
		return 0;

	return 1;
}

void func_128() // Position - 0x3EAE Hash - 0x119646A1 ^0xD6F89DCA
{
	Ped playerPed;
	var unk;
	var unk31;

	playerPed = PLAYER::GET_PLAYER_PED(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	unk.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	unk.f_17 = { 25f, 25f, 25f };
	unk.f_17.f_9 = joaat("volSphere");
	unk.f_4 = playerPed;
	unk.f_5 = 3;
	func_104(&(unk31.f_6), &unk31);
	unk31.f_5 = 1;
	func_112(&unk, &unk31, 1, true, 1);

	if (PED::IS_PED_ON_MOUNT(playerPed))
		func_114(true, false);

	return;
}

Vector3 func_129(int iParam0) // Position - 0x3F2D Hash - 0xA278FAE3 ^0xA278FAE3
{
	switch (iParam0)
	{
		case 1:
			return Global_17418.f_2964[1 /*3*/];
	
		default:
		
	}

	return func_267();
}

Vector3 func_130(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x3F55 Hash - 0xB949235F ^0xBE0377DF
{
	int num;
	int i;
	int num2;
	int num3;
	float distanceBetweenCoords;
	var unk;
	var unk17;

	if (iParam3 == 0)
		return 0f, 0f, 0f;

	num3 = -1;
	unk = 5;

	if (iParam3 == -471827042)
	{
		for (i = 0; i <= 4; i = i + 1)
		{
			num = i;
			unk17 = { func_268(num) };
			unk[i /*3*/] = { unk17.f_5 };
			num2 = num2 + 1;
		}
	}
	else
	{
		return 0f, 0f, 0f;
	}

	if (!(num2 == 0))
	{
		for (i = 0; i <= num2 - 1; i = i + 1)
		{
			if (num3 == -1)
			{
				num3 = i;
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, unk[i /*3*/], true);
			}
			else if (distanceBetweenCoords > MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, unk[i /*3*/], true))
			{
				num3 = i;
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, unk[i /*3*/], true);
			}
		}
	
		return unk[num3 /*3*/];
	}

	return 0f, 0f, 0f;
}

BOOL func_131(int iParam0, var uParam1) // Position - 0x4037 Hash - 0x17D56828 ^0x17D56828
{
	var unk;
	int num;
	var unk4;
	var unk7;

	*uParam1 = { func_267() };

	switch (iParam0)
	{
		case 1:
			*uParam1 = { -870.1846f, -1276.6202f, 42.2367f };
			break;
	
		case 2:
		case 7:
			*uParam1 = { 1352.9501f, -1306.3589f, 75.9113f };
			break;
	
		case 3:
			unk = { func_92() };
		
			switch (unk.f_1)
			{
				case joaat("hennigans_stead_camp"):
				case joaat("rio_bravo_camp"):
				case joaat("great_plains_camp"):
				case joaat("tall_trees_camp"):
				case joaat("cholla_springs_camp"):
				case joaat("gaptooth_ridge_camp"):
					*uParam1 = { -3678.34f, -2623.56f, -14.24f };
					break;
			
				case joaat("roanoke_ridge_camp"):
				case joaat("bayou_nawas_camp"):
				case joaat("scarlett_meadows_camp"):
					*uParam1 = { 2822.76f, -1313f, 46.34f };
					break;
			
				case joaat("cumberland_forest_camp"):
				case joaat("grizzlies_camp"):
				case joaat("heartland_camp"):
				case joaat("big_valley_camp"):
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
			
				default:
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
			}
			break;
	
		case 4:
			num = func_30();
		
			if (num != -1)
				if (func_269(num, &unk4, &unk7))
					*uParam1 = { unk4 };
			break;
	
		case 5:
			if (func_270())
				*uParam1 = { 1440.1381f, 369.3305f, 88.016f };
			break;
	
		case 6:
			*uParam1 = { -1789.9717f, -372.0744f, 158.8352f };
			break;
	
		case 8:
			*uParam1 = { 2521.1f, -1241f, 51f };
			break;
	}

	return !_IS_NULL_VECTOR(*uParam1);
}

void func_132(int iParam0, BOOL bParam1) // Position - 0x41DC Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_271(iParam0, &num, &num2);

	if (!func_272(iParam0, num, num2, bParam1))
		return;

	func_273(num, num2);
	return;
}

void func_133(BOOL bParam0) // Position - 0x4209 Hash - 0xAC467A14 ^0xAC467A14
{
	if (!bParam0)
		func_257(20);
	else
		func_258(20);

	return;
}

void func_134(float fParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x4228 Hash - 0x920DE2C2 ^0x920DE2C2
{
	if (func_274(fParam0, fParam3))
		func_263(true, bParam4);

	return;
}

BOOL func_135() // Position - 0x4244 Hash - 0x428A4018 ^0xF7397FF3
{
	int i;

	for (i = 1; i <= 4; i = i + 1)
	{
		if (Global_1149432.f_4920[i /*3*/].f_1 && !Global_1149432.f_4920[i /*3*/].f_2)
			return true;
	}

	return false;
}

Vector3 func_136(int iParam0, BOOL bParam1) // Position - 0x4286 Hash - 0x5496E9AE ^0x5143DC2
{
	Vector3 volumeCoords;
	var groundZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_255(iParam0))
		return volumeCoords;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
	{
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };
	
		if (bParam1)
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(volumeCoords, &groundZ, false))
				volumeCoords.f_2 = groundZ;
	}

	return volumeCoords;
}

BOOL func_137() // Position - 0x42E6 Hash - 0xC49AD108 ^0x6E55167C
{
	int i;

	for (i = 9; i <= 12; i = i + 1)
	{
		if (Global_1149432.f_4920[i /*3*/].f_1 && !Global_1149432.f_4920[i /*3*/].f_2)
			return true;
	}

	return false;
}

int func_138(int iParam0) // Position - 0x432A Hash - 0xA2B327E0 ^0xA2B327E0
{
	switch (iParam0)
	{
		case 0:
			return 111;
	
		case 1:
			return 81;
	
		case 2:
			return 40;
	
		case 3:
			return 121;
	
		default:
		
	}

	return 111;
}

void func_139() // Position - 0x4368 Hash - 0x7DAFB40F ^0x79013779
{
	Global_1072759.f_5 = 1;
	Global_1051645.f_43 = MISC::GET_GAME_TIMER() - Global_1051645.f_40;
	return;
}

void func_140() // Position - 0x4388 Hash - 0xB90DF9BD ^0xE8BB4E92
{
	func_275(256);
	return;
}

BOOL func_141() // Position - 0x4397 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_142(int iParam0) // Position - 0x43A0 Hash - 0x29A8F290 ^0x5829049F
{
	Global_1896646.f_41 = iParam0;
	return;
}

void func_143() // Position - 0x43B0 Hash - 0xFC27E050 ^0xFC27E050
{
	func_276();
	func_277();
	func_278();
	func_279();
	return;
}

void func_144(int iParam0) // Position - 0x43C8 Hash - 0x2EDDC601 ^0x8923AAAC
{
	Any itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956875.f_5.f_7))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956875.f_5.f_7) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956875.f_5.f_7, iParam0);
	
		if (itemContextByIndex == Global_1956875.f_5.f_14[iParam0 /*102*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956875.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956875.f_5.f_14[iParam0 /*102*/]);
	return;
}

void func_145() // Position - 0x4436 Hash - 0xAB1BD3 ^0xA5909627
{
	int i;

	func_280();

	for (i = 0; i < 2; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_281(i)))
			STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_281(i)));
	}

	return;
}

void func_146() // Position - 0x4470 Hash - 0xE34D4134 ^0x5FE18AF0
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
	return;
}

void func_147() // Position - 0x447D Hash - 0x7E23F1CF ^0x732B5D0B
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(4);
	return;
}

void func_148() // Position - 0x448A Hash - 0x336A20AE ^0xD48B6AD
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
	return;
}

void func_149() // Position - 0x4497 Hash - 0xDE0E22FA ^0x4FF24409
{
	int num;
	int i;
	var unk;

	num = func_282();
	i = func_283();
	unk = 7;
	unk.f_1 = 10;
	unk.f_1.f_11 = 10;
	unk.f_1.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;

	while (i > 0)
	{
		i = i - 1;
		func_284(&num, 0, 0, 0, 1, 0, 0);
	}

	for (i = 0; i < 7; i = i + 1)
	{
		Global_1296539.f_34[i /*10*/] = { func_285(num, i, &unk) };
		func_286(&num, 0, 0, 0, 1, 0, 0, false);
	}

	return;
}

void func_150() // Position - 0x4528 Hash - 0x1C2B1265 ^0x359C0C23
{
	LAW::CLEAR_WANTED_SCORE(PLAYER::PLAYER_ID());
	LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
	return;
}

void func_151(BOOL bParam0) // Position - 0x453C Hash - 0x70C50693 ^0xA00A0BE9
{
	Blip mainPlayerBlipId;

	mainPlayerBlipId = MAP::GET_MAIN_PLAYER_BLIP_ID();

	if (func_287(PLAYER::PLAYER_ID(), true) && !bParam0)
	{
		MAP::BLIP_ADD_MODIFIER(mainPlayerBlipId, joaat("BLIP_MODIFIER_LOCAL_PLAYER_HOSTILITY_HIGH"));
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, joaat("BLIP_MODIFIER_LOCAL_PLAYER_HOSTILITY_MEDIUM"));
	}
	else if (func_288(PLAYER::PLAYER_ID(), true) && !bParam0)
	{
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, joaat("BLIP_MODIFIER_LOCAL_PLAYER_HOSTILITY_HIGH"));
		MAP::BLIP_ADD_MODIFIER(mainPlayerBlipId, joaat("BLIP_MODIFIER_LOCAL_PLAYER_HOSTILITY_MEDIUM"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, joaat("BLIP_MODIFIER_LOCAL_PLAYER_HOSTILITY_HIGH"));
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, joaat("BLIP_MODIFIER_LOCAL_PLAYER_HOSTILITY_MEDIUM"));
	}

	return;
}

BOOL func_152(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x45C0 Hash - 0x15E0EAC1 ^0x8D0C1A49
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

void func_153(int iParam0, int iParam1) // Position - 0x4689 Hash - 0x70415BCC ^0x47BB622A
{
	Global_1051829.f_1;
	Global_1051829.f_1 = iParam0;

	if (!func_289(iParam1))
		return;

	Global_1051829.f_2 = 0;
	Global_1051829 = Global_1901671.f_45;
	SCRIPTS::_BG_RELOAD_ALL_BACKGROUND_SCRIPTS();

	if (!Global_1051829.f_1)
		func_290("BGS_CONFIRM", 15000, 0, 0, 0, true);

	Global_1051829.f_1 = 0;
	return;
}

void func_154() // Position - 0x46E5 Hash - 0xE65A9CE8 ^0xE65A9CE8
{
	Global_1072759.f_23824.f_383.f_4084 = -1;
	Global_1072759.f_23824 = 1;
	return;
}

void func_155() // Position - 0x4703 Hash - 0x6B862AAB ^0x6F88E843
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false));
	return;
}

int func_156(int iParam0) // Position - 0x4716 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

var func_157(int iParam0, int iParam1) // Position - 0x4761 Hash - 0x42C305C ^0x81DF2F42
{
	return func_291(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_158(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x477F Hash - 0x60237433 ^0x1CACDDD0
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
				func_292(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 7, &uParam19);
	return;
}

void func_159() // Position - 0x4819 Hash - 0x992214AE ^0x4F668A46
{
	var unk;

	unk = { func_215(0) };

	if (func_18(unk))
		Global_1056554[Global_1295666 /*491*/].f_2 = { func_215(0) };
	else
		func_293(&(Global_1056554[Global_1295666 /*491*/].f_2));

	return;
}

void func_160() // Position - 0x485D Hash - 0x9325BF69 ^0x1BE97FD3
{
	var gamerHandle;

	if (!func_294())
		return;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle);

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&gamerHandle))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1155150[PLAYER::PLAYER_ID() /*30*/].f_1)) || !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1155150[PLAYER::PLAYER_ID() /*30*/].f_1), &gamerHandle))
		MISC::COPY_SCRIPT_STRUCT(&(Global_1155150[PLAYER::PLAYER_ID() /*30*/].f_1), &gamerHandle, 2);

	return;
}

void func_161() // Position - 0x48D2 Hash - 0x55DE8154 ^0xDE2F0E4A
{
	Global_1155150[Global_1295666 /*30*/] = NETWORK::_NETWORK_GET_RANK();
	return;
}

void func_162() // Position - 0x48E8 Hash - 0x56C5A1F3 ^0x7FF3B341
{
	Player i;

	if (!Global_1572887.f_10)
		return;

	Global_1289608[Global_1295666] = Global_1072759.f_21353.f_1[Global_1295666 /*8*/].f_7;
	Global_1056554[Global_1295666 /*491*/].f_10 = Global_1072759.f_21353.f_259;
	Global_1056554[Global_1295666 /*491*/].f_9 = Global_1072759.f_21353.f_258;
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_259));

	for (i = 0; i < 32; i = i + 1)
	{
		if (i == Global_1295666)
		{
		}
		else if (!Global_1295666.f_17[i])
		{
		}
		else if (func_295(Global_1295666.f_149[i], false))
		{
			if (func_246(Global_1289608[i], 16))
				SCRIPTS::_0xFFDDF802279BE128(&(Global_1056554[i /*491*/].f_9), &(Global_1072759.f_21353.f_259), &(Global_1072759.f_21353.f_259));
		}
	}

	return;
}

void func_163() // Position - 0x49CA Hash - 0x5CA37896 ^0xB451D987
{
	BOOL flag;

	flag = { func_230(0) };

	if (flag)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), flag.f_11.f_2) > Global_1901671.f_2.f_25)
		{
			func_296();
			func_297(&flag);
		}
	}

	func_298();
	func_300((func_299() + 1) % 10);
	func_301();
	return;
}

void func_164() // Position - 0x4A37 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_165() // Position - 0x4A3F Hash - 0xDBE4CB96 ^0xECB532B3
{
	if (!func_61(Global_1572887.f_8, 1073741824))
		return;

	func_59(&(Global_1572887.f_8), 1073741824);

	if (func_302())
		if (func_17())
			func_303();
		else if (func_75() == 3)
			func_304();
		else
			func_305();
	else
		func_306();

	return;
}

void func_166() // Position - 0x4A9B Hash - 0xC5CE179 ^0xC5CE179
{
	func_307();

	if (!func_289(9))
		return;

	func_153(0, 6);
	return;
}

void func_167() // Position - 0x4ABA Hash - 0x1FC9551D ^0x34C86E29
{
	Global_1295299 = NETWORK::GET_NETWORK_TIME();

	switch (Global_1295299.f_1)
	{
		case 0:
			func_308();
			break;
	
		case 1:
			func_309();
			break;
	
		case 2:
			func_310();
			break;
	
		case 3:
			func_311();
			break;
	
		case 4:
			func_312();
			break;
	
		case 5:
			func_313();
			break;
	
		case 6:
			func_314();
			break;
	}

	Global_1295299.f_27 = Global_1295299;
	return;
}

void func_168() // Position - 0x4B3B Hash - 0x81C9751F ^0xEE688FD4
{
	if (Global_1102813.f_26.f_3345)
		if (func_315())
			Global_1102813.f_26.f_3345 = 0;

	if (Global_1102813.f_26.f_3346)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
		{
			ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
		}
	
		Global_1102813.f_26.f_3346 = 0;
	}

	if (Global_1102813.f_26.f_3347)
	{
		if (!func_316())
		{
			func_317();
			Global_1102813.f_26.f_3347 = 0;
		}
	}

	return;
}

void func_169() // Position - 0x4BE4 Hash - 0x95BB61A6 ^0xF9ABA93F
{
	int i;
	int ptfxHandle;
	int num;
	int num2;
	int boneIndex;
	BOOL flag;

	for (i = 0; i < 10; i = i + 1)
	{
		ptfxHandle = Global_1203871[i /*8*/];
	
		if (Global_1203871[i /*8*/].f_6)
		{
			num = Global_1203871[i /*8*/].f_1;
			num2 = Global_1203871[i /*8*/].f_2;
			boneIndex = Global_1203871[i /*8*/].f_3;
			flag = Global_1203871[i /*8*/].f_4;
		
			if (num2 != 0)
				GRAPHICS::USE_PARTICLE_FX_ASSET(func_281(num2));
		
			if (Global_1203871[i /*8*/].f_3 >= 0)
				if (!flag)
					ptfxHandle = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_318(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, boneIndex, 1065353216, false, false, false);
				else
					ptfxHandle = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_318(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, boneIndex, 1065353216, false, false, false);
			else if (!flag)
				ptfxHandle = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(func_318(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, false, false, false);
			else
				ptfxHandle = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(func_318(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, false, false, false);
		
			Global_1203871[i /*8*/] = ptfxHandle;
			Global_1203871[i /*8*/].f_6 = 0;
		}
		else if (Global_1203871[i /*8*/].f_7)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(ptfxHandle))
				GRAPHICS::REMOVE_PARTICLE_FX(ptfxHandle, false);
		
			Global_1203871[i /*8*/].f_7 = 0;
		}
	}

	return;
}

void func_170() // Position - 0x4D31 Hash - 0xB508545E ^0xB508545E
{
	int num;
	var unk;
	int num2;
	int num3;
	var statId;
	int num4;

	func_319();

	switch (func_320())
	{
		case 0:
			if (!func_321())
				break;
		
			if (!func_322())
				break;
		
			func_323(1);
			break;
	
		case 1:
			if (!func_324())
				break;
		
			func_325();
			func_326();
			func_327();
			func_323(2);
			break;
	
		case 2:
			func_328(2);
			break;
	
		default:
			break;
	}

	num = func_329();

	if (func_330(num))
		func_331(13);

	switch (num)
	{
		case 0:
			if (!Global_1048577)
				break;
		
			func_331(1);
			break;
	
		case 1:
			if (Global_1295666 < 0 || Global_1295666 >= 32)
				break;
		
			if (func_332(Global_1295666) == false)
			{
				if (func_18(func_215(0)))
					func_331(2);
			
				break;
			}
		
			func_331(2);
			break;
	
		case 2:
			if (Global_1295666 < 0 || Global_1295666 >= 32)
				break;
		
			func_333(func_332(Global_1295666));
		
			if (func_334(func_332(Global_1295666)))
			{
				func_331(3);
			}
			else
			{
				func_335(1);
				func_331(4);
			}
			break;
	
		case 3:
			func_337(func_336());
			func_331(6);
			break;
	
		case 4:
			if (!func_18(func_215(0)))
				break;
		
			func_331(5);
			break;
	
		case 5:
			if (func_18(func_215(0)))
				break;
		
			func_331(15);
			break;
	
		case 6:
			if (!func_338(1))
				break;
		
			if (func_338(4))
				func_331(8);
			else
				func_331(7);
			break;
	
		case 7:
			func_331(9);
			break;
	
		case 8:
			func_339(4);
			func_331(9);
			break;
	
		case 9:
			if (!func_338(2))
				break;
		
			if (func_338(8))
				func_331(11);
			else
				func_331(10);
			break;
	
		case 10:
			switch (func_340(PLAYER::PLAYER_ID()))
			{
				case 2:
				case 15:
					func_331(11);
					break;
			
				case 10:
					func_341(4);
					func_331(12);
					break;
			
				default:
					break;
			}
			break;
	
		case 11:
			func_342();
			func_331(13);
			break;
	
		case 12:
			func_339(2);
			func_331(6);
			break;
	
		case 13:
			if (func_74(PLAYER::PLAYER_ID(), 1024))
			{
				func_331(0);
				break;
			}
		
			if (!CAM::IS_SCREEN_FADED_IN())
				break;
		
			if (func_343())
				break;
		
			if (Global_1048577)
				break;
		
			if (Global_1048584)
				break;
		
			num2 = func_345(func_344(0));
		
			switch (num2)
			{
				case 9:
					unk = { func_347(func_346(0)) };
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_348(unk)))
						AUDIO::PREPARE_MUSIC_EVENT(func_348(unk));
					break;
			}
		
			func_331(14);
			break;
	
		case 14:
			num2 = func_345(func_344(0));
		
			switch (num2)
			{
				case 9:
					if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
						if (UNLOCK::UNLOCK_IS_UNLOCKED(-319651633))
							func_349(joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON"));
						else if (func_218(PLAYER::PLAYER_ID(), true) != -1)
							func_350(2048);
						else
							func_349(joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM"));
				
					unk = { func_347(func_346(0)) };
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_348(unk)))
						AUDIO::TRIGGER_MUSIC_EVENT(func_348(unk));
					break;
			
				case 12:
					num3 = -1;
					num3.f_1 = -1;
					num3.f_2 = -1;
					num3 = func_346(0);
					num3.f_1 = func_351(0);
					num3.f_2 = func_352(0);
				
					if (func_352(0) == 2 && func_338(8))
					{
						statId = { func_353(func_346(0), func_351(0), 2006315537, 0) };
					
						if (STATS::STAT_ID_IS_VALID(&statId))
						{
							STATS::STAT_ID_GET_INT(&statId, &num4);
						
							if (num4 <= 0)
							{
								func_349(1057717540);
								func_354(&num3);
							}
						}
					}
					else
					{
						func_349(1209208750);
						func_354(&num3);
					}
					break;
			}
		
			func_331(15);
			break;
	
		case 15:
			func_355();
			func_356();
			func_331(0);
			break;
	
		default:
			break;
	}

	return;
}

void func_171() // Position - 0x518B Hash - 0xD9A8D6EE ^0x14484B57
{
	int i;
	Player player;

	switch (Global_1901671)
	{
		case 0:
			if (func_357())
				return;
		
			if (!func_358())
				return;
		
			for (i = 0; i <= 32; i = i + 1)
			{
				player = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (player == PLAYER::PLAYER_ID())
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
				{
				}
				else if (Global_1072759.f_28766[i])
				{
				}
				else if (Global_1056554[i /*491*/].f_484 == 0)
				{
				}
				else
				{
					Global_1072759.f_28766[i] = true;
				
					if (Global_1056554[i /*491*/].f_484 == Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_484)
					{
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
						Global_1901671 = 1;
					}
				}
			}
			break;
	
		case 1:
			if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
				return;
		
			func_359();
			Global_1901671 = 2;
			break;
	
		case 2:
			if (func_357())
				return;
		
			Global_1901671 = 0;
			Global_1056554[i /*491*/].f_485 = NETWORK::GET_CLOUD_TIME_AS_INT();
			Global_1056554[i /*491*/].f_484 = NETWORK::NETWORK_GET_TUNABLE_CLOUD_CRC();
			break;
	}

	return;
}

void func_172() // Position - 0x52A9 Hash - 0x5C945E8A ^0x5C945E8A
{
	switch (func_360())
	{
		case -1:
			break;
	
		case 0:
			break;
	
		case 1:
			func_361();
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	return;
}

void func_173() // Position - 0x52E6 Hash - 0x5E434623 ^0xC2D24355
{
	Global_1108965.f_34.f_612 = (Global_1108965.f_34.f_612 + 1) % 32;
	return;
}

void func_174() // Position - 0x5305 Hash - 0xCC0C0786 ^0xC2E438B4
{
	int num;
	int num2;

	if (func_60() != 0)
		return;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	if (func_362() || Global_1048585)
		func_363();

	num2 = Global_1072759.f_19585.f_21;
	Global_1056554[num /*491*/].f_443[num2] = Global_38.f_118[num2];

	if (func_364(num2, num))
	{
		Global_1072759.f_19585.f_21 = Global_1072759.f_19585.f_21 + 1;
	
		if (Global_1072759.f_19585.f_21 > 17)
			Global_1072759.f_19585.f_21 = 0;
	
		func_209(num, Global_1072759.f_19585.f_21);
	}

	func_365();
	return;
}

void func_175() // Position - 0x53AB Hash - 0x1C871F8A ^0xB1406390
{
	int num;
	Player gangLeader;
	int num2;

	num = Global_1072759.f_28295.f_1 + 1;

	if (num > 25)
		num = 0;

	Global_1072759.f_28295.f_1 = num;

	if (func_366(Global_1835011[num /*72*/].f_32))
		return;

	func_367();

	if (Global_1149432.f_4920[num /*3*/].f_2)
	{
		if (!func_368(num, PLAYER::GET_PLAYER_INDEX()))
			func_369();
	
		func_370(num);
	}
	else
	{
		func_371(num);
	}

	if (Global_1835011[num /*72*/].f_3 == 0)
		return;

	if (!func_18(Global_1835011[num /*72*/].f_1))
		return;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	num2 = func_372(Global_1835011[num /*72*/].f_1);

	if (!func_368(num, gangLeader))
	{
		if (num2 == 1)
		{
			func_373(num, -1, false, false, true, 0, 0);
			return;
		}
	
		return;
	}

	switch (num2)
	{
		case 1:
		case 2:
			return;
	
		case 3:
		case 4:
			return;
	
		default:
		
	}

	func_374(Global_1835011[num /*72*/].f_1);
	return;
}

void func_176() // Position - 0x54CC Hash - 0x684E00C6 ^0x684E00C6
{
	int num;
	int num2;
	float num3;
	var unk;

	if (Global_1295849.f_540)
		return;

	func_375();
	num = func_376();

	if (num > 0 && num < 7)
		if (func_377(4))
			if (!Global_1048577)
				func_378(12);
		else if (Global_1048577)
			func_379(4);

	if (func_380())
	{
		if (num > 0 && num < 12 && func_381())
		{
			func_382(1);
			func_383();
		}
	}

	switch (num)
	{
		case 0:
			if (!Global_1048577)
				break;
		
			if (Global_1295666 < 0 || Global_1295666 >= 32)
				break;
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1295666.f_11)))
				break;
		
			if (func_332(Global_1295666.f_11) != false)
			{
				func_384();
				func_378(3);
			}
			break;
	
		case 3:
			if (!func_385(PLAYER::PLAYER_ID(), 1))
				break;
		
			if (func_380())
				func_378(4);
			else
				func_378(6);
			break;
	
		case 4:
			if (func_386())
			{
				func_350(8192);
				func_387(false, -1, false, true);
				func_388(1);
				func_378(12);
				break;
			}
		
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
			{
				if (!BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE(&(Global_1295849.f_492.f_6), func_390(func_389()), func_392(func_391())))
				{
					func_378(6);
					break;
				}
			}
			else
			{
				if (BOUNTY::_0x86EC5F83867C4B70(&unk))
				{
					BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
					break;
				}
			
				if (!BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION(&(Global_1295849.f_492.f_6), func_390(func_389()), func_392(func_391())))
				{
					func_378(6);
					break;
				}
			}
		
			func_393(MISC::GET_GAME_TIMER());
			func_379(1);
			func_378(5);
			break;
	
		case 5:
			if (func_377(536870912))
			{
				func_393(MISC::GET_GAME_TIMER());
				func_382(4);
				func_378(6);
				func_394();
			}
			else if (func_377(1073741824))
			{
				func_378(6);
				func_394();
			}
			else if (func_377(268435456))
			{
				func_378(6);
				func_394();
			}
			break;
	
		case 6:
			if (func_395(4))
				func_379(8);
		
			if (!func_396())
				break;
		
			func_378(8);
			break;
	
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
				break;
		
			if (func_343())
				break;
		
			if (Global_1048577)
				break;
		
			if (Global_1048584)
				break;
		
			func_378(10);
			break;
	
		case 8:
			if (func_377(8))
			{
				func_398(func_397());
				func_401(func_400(joaat("currency_gold_bar"), func_399(true), joaat("SLOTID_SATCHEL"), true, false, false));
				func_403(func_402(0));
				func_404(func_402(7));
				func_405();
				BOUNTY::_BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION(&(Global_1295849.f_492.f_6), &(Global_1295849.f_492.f_16.f_1));
				func_379(32);
				func_393(MISC::GET_GAME_TIMER());
				func_379(2);
				func_378(9);
			}
			else
			{
				func_378(12);
			}
			break;
	
		case 9:
			if (func_377(1879048192))
			{
				func_378(7);
				func_406();
				func_394();
				BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
			}
			break;
	
		case 10:
			if (!func_407())
			{
				if (func_377(32))
				{
					func_408();
					func_409(32);
				}
			}
		
			num2 = func_397() - func_410();
		
			if (num2 > 0)
				func_411(MISC::VAR_STRING(2, "FEED_MONEY_EARN", num2), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		
			num2 = func_400(joaat("currency_gold_bar"), func_399(true), joaat("SLOTID_SATCHEL"), true, false, false) - func_412();
		
			if (num2 > 0)
			{
				num3 = (float)func_413(num2) + ((float)func_414(num2, true) * (1f / 100f));
				func_411(MISC::VAR_STRING(6, "SHOP_GOLD_PRICE_READ", num3), "ITEMTYPE_TEXTURES", joaat("itemtype_gold"), 0, joaat("color_cash_gold"), 0, 0, 0, true);
			}
		
			num2 = func_402(0) - func_415();
		
			if (num2 > 0)
				func_411(MISC::VAR_STRING(2, "PLAYER_RPG_XP_GAIN", num2), "itemtype_textures", joaat("transaction_xp"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
		
			num2 = func_402(7) - func_416();
		
			if (num2 > 0)
				func_411(MISC::VAR_STRING(2, "NET_TRADE_BOUNTY_HUNTER_XP", num2), "itemtype_textures", joaat("transaction_xp"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
		
			if (func_391() != 0)
			{
				func_378(12);
				break;
			}
		
			if (func_417() == 4)
				func_418(1);
			else if (func_417() < 4 && func_377(16))
				func_418(2);
		
			func_418(4);
			func_378(12);
			break;
	
		case 12:
			BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
			func_419();
			func_420();
			func_421();
			func_378(13);
			break;
	
		case 13:
			if (func_395(1))
				break;
		
			func_378(0);
			break;
	
		default:
			break;
	}

	return;
}

void func_177() // Position - 0x59A0 Hash - 0xF82B03DA ^0xF82B03DA
{
	switch (Global_1940252.f_11600)
	{
		case 0:
			func_422();
			func_423(-1);
			break;
	
		case 2:
			func_424(Global_1940252.f_11606);
			func_425();
			break;
	
		case 3:
			func_422();
			Global_1940252.f_11600 = -1;
			break;
	}

	return;
}

void func_178() // Position - 0x59F4 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_426();
	return;
}

void func_179() // Position - 0x5A00 Hash - 0xACF7FEA9 ^0x2E365802
{
	int i;
	int value;
	Player player;
	Player player2;

	player = PLAYER::PLAYER_ID();
	value = func_427();

	switch (func_428(value))
	{
		case 0:
			func_429();
			break;
	
		case 1:
			break;
	
		case 2:
			func_430();
			break;
	
		case 3:
			func_431();
			break;
	
		default:
			break;
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		value = i;
		player2 = PLAYER::INT_TO_PLAYERINDEX(value);
	
		if (player2 == player)
		{
			func_432((value + 1) % 32);
		}
		else
		{
			switch (func_428(value))
			{
				case 0:
					break;
			
				case 1:
					func_433();
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			
				default:
					break;
			}
		}
	}

	func_432((value + 1) % 32);
	return;
}

void func_180() // Position - 0x5AC9 Hash - 0xA6893CA9 ^0xCEFDD757
{
	if (func_362())
		return;

	if (Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] != Global_1220826.f_1.f_8 || Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 != Global_1220826.f_1.f_9)
	{
		Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = Global_1220826.f_1.f_8;
		Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 = Global_1220826.f_1.f_9;
	}

	if (Global_1220826.f_1200 >= 32)
		Global_1220826.f_1200 = 0;

	func_434(Global_1220826.f_1200);
	Global_1220826.f_1200 = Global_1220826.f_1200 + 1;
	return;
}

void func_181() // Position - 0x5B61 Hash - 0x95A06623 ^0x95A06623
{
	Player i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_435(i);
	}

	return;
}

void func_182() // Position - 0x5B82 Hash - 0x57AC5C91 ^0x424596DC
{
	func_436();
	func_317();
	Global_1102813.f_26.f_3347 = 0;
	Global_1102813.f_26.f_3345 = 0;
	return;
}

void func_183() // Position - 0x5BA6 Hash - 0x2A6C7A76 ^0xD9A0DE05
{
	func_437(Global_1295299.f_31, Global_1295299.f_32);
	Global_1295299.f_31 = Global_1295299.f_31 + 1;

	if (Global_1295299.f_31 >= 1)
	{
		Global_1295299.f_31 = 0;
		Global_1295299.f_32 = Global_1295299.f_32 + 1;
		Global_1295299.f_32 = Global_1295299.f_32 % 32;
	}

	return;
}

void func_184() // Position - 0x5BFA Hash - 0xB426B16C ^0x80A5E882
{
	Global_1295299.f_33 = Global_1295299.f_33 + 1;

	if (Global_1295299.f_33 >= Global_1295205.f_22)
	{
		Global_1295299.f_33 = 0;
		Global_1295299.f_34 = Global_1295299.f_34 + 1;
		Global_1295299.f_34 = Global_1295299.f_34 % 32;
	}

	if (Global_1295299.f_33 >= Global_1295205.f_22)
		return;

	switch (Global_1295205.f_3[Global_1295299.f_33 /*6*/].f_1)
	{
		case 0:
			func_438(&Global_1295205.f_3[Global_1295299.f_33 /*6*/]);
			break;
	
		case 1:
			func_439(&Global_1295205.f_3[Global_1295299.f_33 /*6*/]);
			break;
	
		case 2:
			func_440(&Global_1295205.f_3[Global_1295299.f_33 /*6*/], Global_1295299.f_33);
			break;
	}

	return;
}

void func_185() // Position - 0x5CC2 Hash - 0x73D57B67 ^0x4EC556FA
{
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_train_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fme_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fme_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_gangfeud_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_gangfeud_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_global_loader"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_global_loader");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_dog_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_dog_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_player_camp_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_player_camp_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ace_thread_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ace_thread_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fetch_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fetch_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_crew_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_crew_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_beat_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_beat_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_scan_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_scan_manager");

	return;
}

void func_186() // Position - 0x5DA6 Hash - 0xB90DF9BD ^0xE8BB4E92
{
	func_441(256);
	return;
}

void func_187() // Position - 0x5DB5 Hash - 0xFBC312A2 ^0xA0C0F725
{
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_10));
	return;
}

BOOL func_188() // Position - 0x5DCE Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_189(int* piParam0) // Position - 0x5DDC Hash - 0xC8446C5 ^0xC8446C5
{
	var unk;

	*piParam0 = unk;
	return;
}

int func_190(int iParam0, int iParam1, char* sParam2) // Position - 0x5DE9 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

int func_191() // Position - 0x5DF2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_192(Any anParam0) // Position - 0x5E01 Hash - 0xDA2CB872 ^0xDA2CB872
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_442(&anParam0->[i /*491*/]);
	}

	return;
}

int func_193(int iParam0, int iParam1, char* sParam2) // Position - 0x5E2A Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_194() // Position - 0x5E33 Hash - 0xDAA12826 ^0x1491FC4D
{
	if (func_21())
	{
		Global_1102775 = { Global_1101558[func_191() /*38*/] };
		func_443(&Global_1101558);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1101558, 1217, 72);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1101558[0 /*38*/]), 1217, "g_mpPlayerStatusSyncData");
		Global_1101558[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*38*/] = { Global_1102775 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1101558, 1217, 72);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1101558[0 /*38*/]), 1217, "g_mpPlayerStatusSyncData");
	}

	return;
}

void func_195() // Position - 0x5EBD Hash - 0xDE0302A4 ^0xF7CBB609
{
	if (func_21())
	{
		func_444(&Global_1155150);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1155150, 961, 67);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1155150[0 /*30*/]), 961, "g_mpPlayerPersona");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1155150, 961, 67);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1155150[0 /*30*/]), 961, "g_mpPlayerPersona");
	}

	func_161();
	func_160();
	return;
}

void func_196() // Position - 0x5F27 Hash - 0xBCC2DE6B ^0xE693E519
{
	func_445(&Global_1107816);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1107816, 33, 51);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1107816), 33, "g_mpHostJobData.sGangImpromptuRaceData");

	if (func_21())
	{
		Global_1110230 = { Global_1109780[func_191() /*6*/] };
		func_446(&Global_1109780);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109780, 193, 52);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
		Global_1109780[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/] = { Global_1110230 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109780, 193, 52);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
	}

	return;
}

void func_197() // Position - 0x5FCD Hash - 0xE38B3C52 ^0x491D3B85
{
	func_447(&Global_1206954);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1206954, 385, 46);
	func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1206954[0 /*12*/]), 385, "g_mpSessionManagerPlayerData");
	func_207();
	return;
}

void func_198() // Position - 0x6005 Hash - 0x7BC17842 ^0xEE2DCCDF
{
	func_448(&Global_1283549);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1283549, 181, 44);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1283549), 181, "g_mpShopManagerHostData");

	if (func_21())
	{
		Global_1283795 = { Global_1283730[func_191() /*2*/] };
		func_449(&Global_1283730);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283730, 65, 45);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1283730[0 /*2*/]), 65, "g_mpShopManagerPlayerData");
		Global_1283730[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1283795 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283730, 65, 45);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1283730[0 /*2*/]), 65, "g_mpShopManagerPlayerData");
	}

	return;
}

void func_199() // Position - 0x60AB Hash - 0x5F872EB0 ^0x50F07D97
{
	if (func_21())
	{
		Global_1289641 = Global_1289608[Global_1102813.f_3672];
		func_450(&Global_1289608);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289608, 33, 4);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1289608[0]), 33, "g_mpPlayerNetHudData");
		Global_1289608[PLAYER::NETWORK_PLAYER_ID_TO_INT()] = Global_1289641;
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289608, 33, 4);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1289608[0]), 33, "g_mpPlayerNetHudData");
	}

	return;
}

void func_200() // Position - 0x6126 Hash - 0xC8181AAF ^0xDC54935E
{
	func_451(&(Global_1107816.f_33));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_33), 717, 75);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_33)), 717, "g_mpHostJobData.sGunForHireMissionData");
	func_452(&(Global_1107816.f_750));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_750), 2, 76);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_750)), 2, "g_mpHostJobData.sGunForHireLocationGiverData");

	if (func_21())
	{
		func_453(&Global_1138673[func_191() /*56*/]);
		func_454(&Global_1138673);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138673, 1793, 77);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1138673[0 /*56*/]), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		func_455(&Global_1140466[func_191() /*8*/]);
		func_456(&Global_1140466);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1140466, 257, 78);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1140466[0 /*8*/]), 257, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138673, 1793, 77);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1138673[0 /*56*/]), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1140466, 257, 78);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1140466[0 /*8*/]), 257, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}

	func_457(1);
	func_458();
	func_459();
	func_460(4);
	return;
}

void func_201() // Position - 0x6263 Hash - 0x55552106 ^0xDA1B949E
{
	func_461(&(Global_1107816.f_752));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_752), 397, 30);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_752)), 397, "g_mpHostJobData.sPosseVersusData");

	if (func_21())
	{
		Global_1110230.f_6 = { Global_1109780.f_193[func_191() /*8*/] };
		func_462(&(Global_1109780.f_193));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109780.f_193), 257, 31);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780.f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
		Global_1109780.f_193[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/] = { Global_1110230.f_6 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109780.f_193), 257, 31);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780.f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
	}

	return;
}

void func_202() // Position - 0x6331 Hash - 0xDB777B9A ^0x3E17A5B6
{
	func_463(&Global_1295205);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1295205, 27, 68);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1295205), 27, "g_mpStoryCoopTransitionHostData");

	if (func_21())
	{
		Global_1295297 = { Global_1295232[func_191() /*2*/] };
		func_464(&Global_1295232[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1295232, 65, 69);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1295232[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
		Global_1295232[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1295297 };
	}
	else
	{
		func_465(&Global_1295299);
		func_466(&Global_1295232);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1295232, 65, 69);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1295232[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
	}

	return;
}

void func_203() // Position - 0x63ED Hash - 0x8F798E2C ^0x1E219F98
{
	func_467();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1220761, 65, 79);
	func_193(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1220761[0 /*2*/]), 65, "g_mpAbandonedLootPlayerData");
	return;
}

void func_204() // Position - 0x641A Hash - 0xDC783A4 ^0x63F115AF
{
	if (func_21())
	{
		Global_1289418 = { Global_1287273[func_191() /*67*/] };
		func_468(&Global_1287273);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1287273, 2145, 11);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1287273[0 /*67*/]), 2145, "g_mpParleyPlayerData");
		Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/] = { Global_1289418 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1287273, 2145, 11);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1287273[0 /*67*/]), 2145, "g_mpParleyPlayerData");
	}

	return;
}

void func_205() // Position - 0x64A4 Hash - 0xBD7EC9BB ^0x2DEDF366
{
	if (func_21())
	{
		func_469(&Global_1222034[func_191() /*9*/]);
		func_470(&Global_1222034);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1222034, 289, 27);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1222034[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1222034, 289, 27);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1222034[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}

	return;
}

void func_206() // Position - 0x6514 Hash - 0x7DAFB40F ^0xF4A1967F
{
	Global_1072759.f_3 = 1;
	Global_1051645.f_41 = MISC::GET_GAME_TIMER() - Global_1051645.f_40;
	return;
}

void func_207() // Position - 0x6534 Hash - 0xE9B8D5CA ^0x8F470134
{
	Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/] = false;
	Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/].f_2 = 0;
	Global_1207339.f_1 = 0;
	Global_1207339.f_1.f_1 = 1;
	return;
}

void func_208(int iParam0, BOOL bParam1, int iParam2) // Position - 0x6564 Hash - 0x664740AD ^0x69C0D2E5
{
	int i;
	int num;
	int num2;

	num2 = func_471(iParam0);

	if (num2 != -1)
	{
		for (i = num2; i <= 31; i = i + 1)
		{
			num = (iParam0 * 31) + i;
		
			if (num >= 545)
				break;
		
			if (MISC::IS_BIT_SET(bParam1, i) && !func_472(num))
				MISC::SET_BIT(&Global_1056554[iParam2 /*491*/].f_443[iParam0], i);
		}
	
		Global_1072759.f_19585[iParam0] = Global_1072759.f_19585[iParam0] || Global_1056554[iParam2 /*491*/].f_443[iParam0];
	}

	return;
}

void func_209(int iParam0, int iParam1) // Position - 0x65F6 Hash - 0x32854D19 ^0x859A0961
{
	Global_1072759.f_19585.f_19 = 0;
	Global_1072759.f_19585.f_20 = Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1];
	Global_1072759.f_19585.f_22 = 0;
	Global_1072759.f_19585.f_23 = 0;
	return;
}

void func_210() // Position - 0x6637 Hash - 0x9C93871D ^0xAEC34FB6
{
	Hash relationshipGroup;
	int playerTeam;

	playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	switch (playerTeam)
	{
		case -1:
			relationshipGroup = func_473(PLAYER::NETWORK_PLAYER_ID_TO_INT());
			break;
	
		case 0:
			relationshipGroup = joaat("rel_gt_team_0");
			break;
	
		case 1:
			relationshipGroup = joaat("rel_gt_team_1");
			break;
	
		case 2:
			relationshipGroup = joaat("rel_gt_team_2");
			break;
	
		case 3:
			relationshipGroup = joaat("rel_gt_team_3");
			break;
	
		case 4:
			relationshipGroup = joaat("rel_gt_team_4");
			break;
	
		case 5:
			relationshipGroup = joaat("rel_gt_team_5");
			break;
	
		case 6:
			relationshipGroup = joaat("rel_gt_team_6");
			break;
	
		case 7:
			relationshipGroup = joaat("rel_gt_team_7");
			break;
	
		case 8:
			relationshipGroup = joaat("rel_player_cop");
			break;
	
		default:
			return;
	}

	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), relationshipGroup);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), func_474());

	return;
}

void func_211(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x672D Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_475(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_476(*iParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_477(num);
	*iParam0 = 0;
	return;
}

void func_212(int iParam0) // Position - 0x6781 Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1295299.f_1 = iParam0;
	return;
}

BOOL func_213(var uParam0) // Position - 0x6791 Hash - 0xE3D31A2A ^0xE3D31A2A
{
	BOOL flag;
	int num;
	BOOL flag2;

	switch (*uParam0)
	{
		case 12:
			flag = !func_478(255);
			num = 13;
			break;
	
		case 13:
			flag = !func_135();
			num = 14;
			break;
	
		case 14:
			flag = !func_479();
			num = 12;
			break;
	}

	flag2 = Global_1051645.f_45.f_2[*uParam0] != flag;
	Global_1051645.f_45.f_2[*uParam0] = flag;
	*uParam0 = num;
	return flag2;
}

BOOL func_214(var uParam0) // Position - 0x6808 Hash - 0x605DA4F ^0xB8CE66F
{
	BOOL flag;
	int num;
	BOOL flag2;

	switch (*uParam0)
	{
		case 0:
			flag = !(Global_1207339.f_1 & 3 != 0) && func_480();
			num = 4;
			break;
	
		case 1:
			flag = !(Global_1207339.f_1 & 16 != 0) && func_486() || func_487() || !(Global_1207339.f_1 & 512 != 0) && func_217(16);
			num = 10;
			break;
	
		case 2:
			flag = !(Global_1207339.f_1 & 3 != 0) && func_485();
			num = 1;
			break;
	
		case 4:
			flag = NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_225();
			num = 6;
			break;
	
		case 6:
			flag = !(Global_1207339.f_1 & 64 != 0) && func_481(PLAYER::NETWORK_PLAYER_ID_TO_INT());
			num = 7;
			break;
	
		case 7:
			flag = func_482(255);
			num = 8;
			break;
	
		case 8:
			flag = func_483() > 0;
			num = 9;
			break;
	
		case 9:
			flag = func_484() != 1;
			num = 2;
			break;
	
		case 10:
			flag = func_488();
			num = 11;
			break;
	
		case 11:
			flag = func_489();
			num = 0;
			break;
	}

	flag2 = Global_1051645.f_45.f_2[*uParam0] != flag;
	Global_1051645.f_45.f_2[*uParam0] = flag;
	*uParam0 = num;
	return flag2;
}

struct<2> func_215(int iParam0) // Position - 0x6977 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

char* func_216(var uParam0, var uParam1) // Position - 0x698B Hash - 0xECAE7740 ^0xE033976D
{
	var text;
	var unk16;

	TEXT_LABEL_ASSIGN_STRING(&text, "(", 128);
	TEXT_LABEL_APPEND_STRING(&text, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(uParam0), 128);
	TEXT_LABEL_APPEND_STRING(&text, ",", 128);
	TEXT_LABEL_APPEND_INT(&text, uParam0.f_1, 128);
	TEXT_LABEL_APPEND_STRING(&text, ")", 128);

	if (func_18(uParam0))
	{
		TEXT_LABEL_APPEND_STRING(&text, "|", 128);
		TEXT_LABEL_ASSIGN_STRING(&unk16, "", 128);
		TEXT_LABEL_ASSIGN_INT(&unk16, func_19(uParam0), 128);
		TEXT_LABEL_APPEND_STRING(&text, &unk16, 128);
	}

	return HUD::_GET_TEXT_SUBSTRING_2(&text, HUD::GET_LENGTH_OF_LITERAL_STRING(&text));
}

BOOL func_217(int iParam0) // Position - 0x69F6 Hash - 0xA059D395 ^0x45A0DB8D
{
	return func_246(Global_1297441.f_157, iParam0);
}

int func_218(Player plParam0, BOOL bParam1) // Position - 0x6A0A Hash - 0x60D6421F ^0x107E8E35
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/].f_5.f_12;
}

const char* func_219(int iParam0) // Position - 0x6A31 Hash - 0xCCEDF737 ^0x2075CB05
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_220() // Position - 0x6A44 Hash - 0xA1DBD1D9 ^0x98898A57
{
	return Global_1051645.f_80.f_102;
}

const char* func_221(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6A54 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_222(int iParam0) // Position - 0x6A68 Hash - 0x93799708 ^0x6F90D72E
{
	if (iParam0 == 255)
		return Global_1102813.f_10;

	return Global_1101558[iParam0 /*38*/].f_10;
}

char* func_223(int iParam0) // Position - 0x6A8A Hash - 0x5FF3687D ^0x9D0EE387
{
	if (!func_255(iParam0))
		return "Wilderness";

	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
	
		case 1:
			return "MacombsEnd";
	
		case 2:
			return "MerkinsWaller";
	
		case 3:
			return "Lagras";
	
		case 4:
			return "Lakay";
	
		case 5:
			return "SaintDenis";
	
		case 6:
			return "OrangePlantation";
	
		case 7:
			return "SerialKiller";
	
		case 8:
			return "Serendipity";
	
		case 9:
			return "ShadyBelle";
	
		case 10:
			return "SiltwaterStrand";
	
		case 11:
			return "AppleseedTimberCo";
	
		case 12:
			return "BerylsDream";
	
		case 13:
			return "BigValleyTrapper";
	
		case 14:
			return "DakotaRiverTrapper";
	
		case 15:
			return "FortRiggsHoldingCamp";
	
		case 16:
			return "HangingDogRanch";
	
		case 17:
			return "LoneMuleStead";
	
		case 18:
			return "MissingHusband";
	
		case 19:
			return "MontoRest";
	
		case 20:
			return "OwanjilaDam";
	
		case 21:
			return "PaintedSky";
	
		case 22:
			return "PronghornRanch";
	
		case 23:
			return "RiggsStation";
	
		case 24:
			return "BigvalleyShack";
	
		case 25:
			return "ShepherdsRise";
	
		case 26:
			return "Strawberry";
	
		case 27:
			return "ValleyView";
	
		case 28:
			return "WallaceStation";
	
		case 29:
			return "BigValleyOldManJones";
	
		case 30:
			return "WatsonsCabin";
	
		case 31:
			return "Canebreak Manor";
	
		case 32:
			return "Copperhead";
	
		case 33:
			return "SisikaPenitentiary";
	
		case 34:
			return "BluewaterTravelSales";
	
		case 35:
			return "BacchuBridge";
	
		case 36:
			return "DinoLady";
	
		case 37:
			return "OldFortWallace";
	
		case 38:
			return "SixPointCabin";
	
		case 39:
			return "BeechersHope";
	
		case 40:
			return "Blackwater";
	
		case 41:
			return "QuakersCove";
	
		case 42:
			return "AdlerRanch";
	
		case 43:
			return "DeadRival";
	
		case 44:
			return "ChezPorter";
	
		case 45:
			return "Colter";
	
		case 46:
			return "FrozenExplorer";
	
		case 47:
			return "MillesaniClaim";
	
		case 48:
			return "MountainMan";
	
		case 49:
			return "MountHagenPeak";
	
		case 50:
			return "StarvingChildren";
	
		case 51:
			return "TempestRim";
	
		case 52:
			return "WinterMiningTown";
	
		case 53:
			return "CalumetRavine";
	
		case 54:
			return "CivilWarBride";
	
		case 55:
			return "Cohutta";
	
		case 56:
			return "CotorraSprings";
	
		case 57:
			return "GunFight";
	
		case 58:
			return "TheLoft";
	
		case 59:
			return "Veteran";
	
		case 60:
			return "Wapiti";
	
		case 61:
			return "GrizzliesTravelSales";
	
		case 62:
			return "AguasDulces";
	
		case 63:
			return "GuarmaCamp";
	
		case 64:
			return "CincoTorres";
	
		case 65:
			return "LaCapilla";
	
		case 66:
			return "Manicato";
	
		case 67:
			return "Abandoned Mill";
	
		case 68:
			return "BeechersC";
	
		case 69:
			return "CarmodyDell";
	
		case 70:
			return "CornwallKerosene";
	
		case 71:
			return "CropFarm";
	
		case 72:
			return "CumberlandFalls";
	
		case 73:
			return "DownsRanch";
	
		case 74:
			return "EmeraldRanch";
	
		case 75:
			return "GrangersHoggery";
	
		case 76:
			return "HorseshoeOverlook";
	
		case 77:
			return "LarnedSod";
	
		case 78:
			return "LoonyCult";
	
		case 79:
			return "LuckysCabin";
	
		case 80:
			return "SwansonsStation";
	
		case 81:
			return "Valentine";
	
		case 82:
			return "AberdeenPigFarm";
	
		case 83:
			return "Annesburg";
	
		case 84:
			return "BeaverHollow";
	
		case 85:
			return "BlackBalsamRise";
	
		case 86:
			return "BrandywineDrop";
	
		case 87:
			return "ButcherCreek";
	
		case 88:
			return "Doverhill";
	
		case 89:
			return "HappyFamily";
	
		case 90:
			return "Isolationist";
	
		case 91:
			return "MacLeansHouse";
	
		case 92:
			return "MossyFlats";
	
		case 93:
			return "RoanokeValley";
	
		case 94:
			return "RockySeven";
	
		case 95:
			return "RoanokeTrapper";
	
		case 96:
			return "RoanokeOldManJones";
	
		case 97:
			return "VanHornMansion";
	
		case 98:
			return "VanHornTradingPost";
	
		case 99:
			return "BraithewaiteManor";
	
		case 100:
			return "BulgerGlade";
	
		case 101:
			return "CaligaHall";
	
		case 102:
			return "CatfishJacksons";
	
		case 103:
			return "ClemensCove";
	
		case 104:
			return "ClemensPoint";
	
		case 105:
			return "CompsonsStead";
	
		case 106:
			return "Dairy Farm";
	
		case 107:
			return "ScarletMeadowsHorseShop";
	
		case 108:
			return "LonniesShack";
	
		case 109:
			return "LoveTriangle";
	
		case 110:
			return "Radleys Pasture";
	
		case 111:
			return "Rhodes";
	
		case 112:
			return "SlavePen";
	
		case 113:
			return "AuroraBasinShack";
	
		case 114:
			return "DeadSettler";
	
		case 115:
			return "Cochinay";
	
		case 116:
			return "ManzanitaPost";
	
		case 117:
			return "PacificUnionRailroad";
	
		case 118:
			return "TannersReach";
	
		case 119:
			return "TallTreesTrapper";
	
		case 120:
			return "Gaptooth Breach";
	
		case 121:
			return "Tumbleweed";
	
		case 122:
			return "Rathskeller Fork";
	
		case 123:
			return "BenedictPoint";
	
		case 124:
			return "FortMercer";
	
		case 125:
			return "Plainview";
	
		case 126:
			return "RioBravoTravelSales";
	
		case 127:
			return "Armadillo" /*Armadillo Ave*/;
	
		case 128:
			return "CootsChapel";
	
		case 129:
			return "DonJulioHouse";
	
		case 130:
			return "RileysCharge";
	
		case 131:
			return "RidgewoodFarm";
	
		case 132:
			return "TwinRocks";
	
		case 133:
			return "ChollaTravelSales";
	
		case 134:
			return "ChollaTrapper";
	
		case 135:
			return "MacFarlanesRanch";
	
		case 136:
			return "ThievesLanding";
	
		case 137:
			return "HenniganTravelSales";
	
		case 138:
			return "HenniganHarriet";
	
		case 139:
			return "CentralUnionRRCamp";
	
		default:
		
	}

	return "Wilderness";
}

const char* func_224() // Position - 0x71CB Hash - 0xDD1D4534 ^0x2F62D502
{
	if (func_491())
		return HUD::_GET_TEXT_SUBSTRING_2(&Global_26575, HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_26575));

	return "";
}

BOOL func_225() // Position - 0x71EF Hash - 0x1C7F4317 ^0xE59B745B
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_492(i))
		{
		}
		else if (!func_493(i))
		{
		}
		else if (func_494(&Global_1291943.f_22[i /*11*/]))
		{
			return true;
		}
	}

	return false;
}

var func_226() // Position - 0x723A Hash - 0x693A589E ^0x156977E3
{
	var unk;
	Hash i;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "[", 128);
	num = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_492(i))
		{
		}
		else if (!func_493(i))
		{
		}
		else if (!func_494(&Global_1291943.f_22[i /*11*/]))
		{
		}
		else
		{
			if (num > 0)
				TEXT_LABEL_APPEND_STRING(&unk, ",", 128);
		
			TEXT_LABEL_APPEND_STRING(&unk, "'", 128);
			TEXT_LABEL_APPEND_INT(&unk, Global_1291943.f_22[i /*11*/].f_1, 128);
			TEXT_LABEL_APPEND_STRING(&unk, "'", 128);
			num = num + 1;
		}
	}

	if (num <= 0)
		TEXT_LABEL_ASSIGN_STRING(&unk, "[NONE]", 128);
	else
		TEXT_LABEL_APPEND_STRING(&unk, "]", 128);

	return func_495(&unk);
}

BOOL func_227(int iParam0, Player plParam1) // Position - 0x72E2 Hash - 0x9A5DBFF2 ^0x7DF6ADFD
{
	return NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(plParam1)) && func_496(iParam0, 4, plParam1);
}

char* func_228(int iParam0) // Position - 0x7302 Hash - 0x21CE226B ^0xACEA3F2B
{
	switch (iParam0)
	{
		case 0:
			return "Primary";
	
		case 1:
			return "Secondary";
	
		case 2:
			return "Trolley";
	
		default:
		
	}

	return "undefined";
}

const char* func_229() // Position - 0x733D Hash - 0x80C60C9D ^0x7BA97DE1
{
	return HUD::_GET_TEXT_SUBSTRING_2(&(Global_263042[Global_1295666 /*65*/].f_1.f_22), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_263042[Global_1295666 /*65*/].f_1.f_22)));
}

struct<30> func_230(int iParam0) // Position - 0x7369 Hash - 0x97E27647 ^0xAF18D335
{
	var unk;

	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_11.f_12 = -1;
	unk.f_11.f_12.f_1 = -1;
	unk.f_11.f_14 = 255;
	unk.f_11.f_15 = 255;

	if (Global_1072759.f_23 > 0)
		return Global_1072759.f_23.f_5[iParam0 /*30*/];

	return unk;
}

BOOL func_231(var uParam0) // Position - 0x73C3 Hash - 0x3F8EEF15 ^0x7E657C27
{
	if (!*uParam0)
		return false;

	switch (uParam0->f_11.f_4)
	{
		case 68:
		case 72:
		case 74:
		case 75:
			return true;
	
		default:
		
	}

	return false;
}

char* func_232(Player plParam0) // Position - 0x73FF Hash - 0xB089F755 ^0x4C16F6FF
{
	int num;
	var unk;
	int i;

	num = func_497(plParam0);

	if (!func_498(num))
		return "NoSlot";

	unk = -1;
	unk.f_1 = -1;

	for (i = 0; i < 32; i = i + 1)
	{
		unk = { func_499(i) };
	
		if (func_18(unk))
			break;
	}

	return func_216(unk);
}

Vector3 func_233() // Position - 0x7460 Hash - 0x7755F386 ^0x7755F386
{
	if (Global_1235687.f_9478 == -1)
		return 0f, 0f, 0f;

	return Global_1235687[Global_1235687.f_9478 /*697*/].f_614;
}

const char* func_234() // Position - 0x748C Hash - 0x24735FE1 ^0xA23EE9C6
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "DynamicNearby", 64);
	return func_500(unk);
}

void func_235(Any* panParam0) // Position - 0x74A5 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

Hash func_236() // Position - 0x74BB Hash - 0xB4E9148F ^0x133B1652
{
	int num;

	if (Global_1295666.f_16 < 79)
		return joaat("SNOWLIGHT");

	num = ((Global_1295666.f_16 % 79) * 100) / 79;

	if (func_238())
	{
		switch (Global_1939596.f_85)
		{
			case joaat("snow"):
				if (num < 10)
					return joaat("BLIZZARD");
				else if (num < 55)
					return joaat("snow");
				else
					return joaat("SNOWLIGHT");
				break;
		
			case joaat("SNOWLIGHT"):
				if (num < 50)
					return joaat("snow");
				else
					return joaat("SNOWLIGHT");
				break;
		
			case joaat("BLIZZARD"):
				if (num < 5)
					return joaat("whiteout");
				else if (num < 25)
					return joaat("BLIZZARD");
				else
					return joaat("snow");
				break;
		
			case joaat("whiteout"):
				if (num < 10)
					return joaat("whiteout");
				else
					return joaat("BLIZZARD");
				break;
		}
	}
	else
	{
		switch (Global_1939596.f_85)
		{
			case joaat("Fog"):
			case joaat("highpressure"):
			case joaat("clouds"):
			case joaat("Misty"):
			case joaat("SUNNY"):
				if (num < 25)
					return joaat("SNOWLIGHT");
				else if (num < 39)
					return joaat("Misty");
				else if (num < 45)
					return joaat("Fog");
				else if (num < 53)
					return joaat("highpressure");
				else if (num < 75)
					return joaat("SUNNY");
				else
					return joaat("clouds");
				break;
		
			case joaat("snow"):
				if (num < 3)
					return joaat("BLIZZARD");
				else if (num < 55)
					return joaat("snow");
				else
					return joaat("SNOWLIGHT");
				break;
		
			case joaat("SNOWLIGHT"):
				if (num < 22)
					return joaat("SNOWLIGHT");
				else if (num < 44)
					return joaat("snow");
				else
					return joaat("clouds");
				break;
		
			case joaat("BLIZZARD"):
				if (num < 2)
					return joaat("whiteout");
				else if (num < 25)
					return joaat("BLIZZARD");
				else
					return joaat("snow");
				break;
		
			case joaat("whiteout"):
				if (num < 10)
					return joaat("whiteout");
				else
					return joaat("BLIZZARD");
				break;
		}
	}

	return joaat("SNOWLIGHT");
}

void func_237(Hash hParam0, BOOL bParam1) // Position - 0x76FF Hash - 0x26232C4D ^0x250DF5D3
{
	if (bParam1)
	{
		MISC::SET_WEATHER_TYPE(hParam0, true, true, false, 0, false);
	}
	else
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::SET_WEATHER_TYPE(hParam0, true, true, true, 119f, false);
	}

	Global_1939596.f_85 = hParam0;
	return;
}

BOOL func_238() // Position - 0x7735 Hash - 0x8BA9D5C4 ^0xABEB6EC
{
	if (!func_79())
		return false;

	return func_246(Global_1901671.f_45.f_5, 32);
}

BOOL func_239() // Position - 0x7757 Hash - 0x815169AE ^0xEADC6071
{
	if (!func_79())
		return false;

	return func_246(Global_1901671.f_45.f_5, 2);
}

BOOL func_240() // Position - 0x7778 Hash - 0x93DD49B3 ^0xF454E6DD
{
	if (!func_79())
		return false;

	return func_246(Global_1901671.f_45.f_5, 64);
}

BOOL func_241(Hash hParam0) // Position - 0x779A Hash - 0xBB272513 ^0x1053F3D3
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(hParam0, Global_34);
}

void func_242(Hash hParam0) // Position - 0x77B8 Hash - 0xC4CA1F1E ^0xEF996C60
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_501(hParam0);

	return;
}

void func_243(Hash hParam0) // Position - 0x77D1 Hash - 0x6C79B149 ^0x6F4E7B45
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_502(hParam0);

	return;
}

BOOL func_244(int* piParam0, int iParam1, int iParam2) // Position - 0x77E9 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

struct<20> func_245(BOOL bParam0) // Position - 0x7820 Hash - 0x8A06BFA3 ^0xAF9813C9
{
	var unk;
	var guid;
	var unk24;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	guid = { func_503(joaat("kit_camp"), func_399(true), joaat("SLOTID_SATCHEL"), true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return unk;

	unk24.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_504(true), &guid, &unk24, 17, 1))
		return unk;

	unk = { func_505(&unk24, bParam0) };
	unk.f_18 = unk24.f_15;
	unk.f_19 = unk24.f_16;
	unk.f_17 = unk24.f_14;
	return unk;
}

BOOL func_246(int iParam0, int iParam1) // Position - 0x78BC Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

struct<2> func_247(Player plParam0) // Position - 0x78CB Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_248(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x78DF Hash - 0xF13F8B12 ^0xF2C3F8F6
{
	if (iParam0 < 4)
		iParam0 = 4;

	if (!func_506(0, 1))
		return false;

	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { iParam0 };
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_507();

	if (iParam3 == 1)
	{
		func_249(2);
	}
	else
	{
		Global_1147183.f_330.f_6 = 1;
		func_508(2);
	}

	if (!func_509(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_508(8);
		func_510();
	}

	if (!func_511(4) && func_511(8) || func_511(16))
		func_249(4);
	else
		func_508(4);

	if (func_246(Global_1147183.f_8, 1))
		func_249(1);
	else
		func_508(1);

	func_512(6);
	return true;
}

void func_249(int iParam0) // Position - 0x79AC Hash - 0x30E4961A ^0x49018482
{
	func_98(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
	return;
}

void func_250(int iParam0, int iParam1) // Position - 0x79C8 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_251(Hash hParam0) // Position - 0x79D9 Hash - 0x50573299 ^0x50573299
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

int func_252(Hash hParam0) // Position - 0x7A93 Hash - 0x3E188C09 ^0xE1858C33
{
	var unk;

	unk = Global_1072759.f_23824.f_383.f_4085;
	unk.f_2 = 1593794963;
	unk.f_3 = hParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
}

BOOL func_253(Hash hParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x7ABF Hash - 0x68F7D788 ^0x69007BD0
{
	var unk;

	unk = Global_1072759.f_23824.f_383.f_4085;
	unk.f_2 = 160165798;
	unk.f_3 = hParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 1576253240;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam2, &unk);
		unk.f_2 = -55481687;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam3, &unk);
		return true;
	}

	return false;
}

int func_254() // Position - 0x7B21 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_255(int iParam0) // Position - 0x7B2F Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_256(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x7B45 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_513(vParam0);
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

int func_257(int iParam0) // Position - 0x7BFC Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_514(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_258(int iParam0) // Position - 0x7C19 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_515(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

BOOL func_259(int iParam0, var uParam1) // Position - 0x7C36 Hash - 0x5A40BE11 ^0xF4B2DB49
{
	var groundZ;
	float volumeScale;
	float num;

	if (!func_255(iParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
		return false;

	uParam1->f_17.f_6 = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &groundZ, false))
		uParam1->f_17.f_6.f_2 = groundZ;

	uParam1->f_17 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_1 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_2 = Global_1901671.f_51.f_1;
	volumeScale = { VOLUME::GET_VOLUME_SCALE(Global_1887363[iParam0 /*36*/].f_4) };
	num = (volumeScale + volumeScale.f_1 + volumeScale.f_2) * 0.3333f;

	if (num < Global_1901671.f_51)
		num = Global_1901671.f_51;

	if (num > Global_1901671.f_51.f_1)
		num = Global_1901671.f_51.f_1;

	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = num;
	uParam1->f_17.f_1 = num;
	uParam1->f_17.f_2 = num;
	uParam1->f_17.f_9 = joaat("volSphere");
	return true;
}

void func_260(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x7D3B Hash - 0x63EE9672 ^0xDAC9325D
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

void func_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x7D91 Hash - 0x6DF4F0B2 ^0x7B946ED1
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

void func_262(BOOL bParam0) // Position - 0x7DBE Hash - 0xDA5ECDC7 ^0xDA5ECDC7
{
	if (!bParam0)
	{
		func_257(5);
	}
	else
	{
		if (func_156(255) == 4)
			return;
	
		func_258(5);
	}

	return;
}

void func_263(BOOL bParam0, BOOL bParam1) // Position - 0x7DE8 Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_156(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_257(0);
	}
	else
	{
		if (bParam1)
			func_516(0, false, 0, true);
	
		func_258(0);
		func_122(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_123(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_260(Global_1102813.f_3839, 36);
	func_261(Global_1102813.f_3878, 36);
	return;
}

void func_264(BOOL bParam0) // Position - 0x7F33 Hash - 0xAA8556B4 ^0xAA8556B4
{
	if (!bParam0)
	{
		func_257(6);
	}
	else
	{
		if (func_156(255) == 4)
			return;
	
		func_258(6);
	}

	return;
}

int func_265(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x7F5D Hash - 0xF4EF07E4 ^0xE86AE8EB
{
	int i;
	int num;
	float num2;
	float num3;

	i = 0;
	num = -1;
	num2 = 0f;

	for (i = 0; i <= 14; i = i + 1)
	{
		num3 = BUILTIN::VDIST(vParam0, Global_1072759.f_23824.f_383[i /*272*/].f_2);
	
		if (num3 < num2 || num == -1)
		{
			num = i;
			num2 = num3;
		}
	}

	return num;
}

void func_266(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13) // Position - 0x7FBA Hash - 0xFDA035EC ^0xBE010CED
{
	if (func_156(255) == 4)
		return;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	if (iParam8 < 0f && iParam9 < 0f)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (iParam8 == 0f && iParam9 == 0f)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (iParam9 < iParam8)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (bParam10)
		func_516(0, false, 0, true);

	func_258(0);
	func_258(3);
	Global_1102813.f_3909 = iParam11;
	Global_1102813.f_3910 = iParam12;
	Global_1102813.f_3911 = iParam13;
	func_122(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { uParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { iParam9, iParam9, iParam9 };
	Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");

	if (iParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { iParam8, iParam8, iParam8 };
		Global_1102813.f_3839.f_6.f_9 = joaat("volSphere");
	}

	func_123(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { uParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_260(Global_1102813.f_3839, 36);
	func_261(Global_1102813.f_3878, 36);
	return;
}

Vector3 func_267() // Position - 0x8190 Hash - 0xA9B5EBA8 ^0xA9B5EBA8
{
	return 0f, 0f, 0f;
}

struct<10> func_268(int iParam0) // Position - 0x819B Hash - 0xE84A1043 ^0xDDB967F0
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	func_518(func_517(iParam0), &unk);
	return unk;
}

BOOL func_269(int iParam0, Vector3* pvParam1, var uParam2) // Position - 0x81C8 Hash - 0x9317D957 ^0x2E2C651A
{
	int num;
	float num2;

	num = Global_1072759.f_28418[48 /*4*/].f_3;
	num.f_2 = -738708473;
	num.f_3 = func_519(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return false;

	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam1, &num);
	num2 = 0f;
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num2, &num);
	uParam2->f_2 = num2;
	return true;
}

BOOL func_270() // Position - 0x824A Hash - 0x4FCF7B68 ^0x4F2218ED
{
	int num;

	num = func_520(-2104202019, 120471651);

	if (num > 0)
		return true;

	if (!UNLOCK::UNLOCK_IS_VISIBLE(-1348352077))
		return false;

	return true;
}

void func_271(int iParam0, var uParam1, var uParam2) // Position - 0x827E Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_272(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x829A Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_521(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_522(iParam0))
		return false;

	if (func_523(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_524(iParam0, 1) || func_525(32768))
		if (!func_524(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_526())
		return false;

	return true;
}

void func_273(int iParam0, int iParam1) // Position - 0x833C Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_274(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x8360 Hash - 0x7393B760 ^0x7393B760
{
	if (_IS_NULL_VECTOR(uParam0))
		return false;

	if (func_156(255) == 4)
		return false;

	func_527(4, 255);
	func_258(4);
	func_528(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { uParam0 };
	Global_1102813.f_3869 = fParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_529(Global_1102813.f_3869, 36);
	return true;
}

void func_275(BOOL bParam0) // Position - 0x83E7 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

void func_276() // Position - 0x83FF Hash - 0x28BFBD88 ^0x28BFBD88
{
	func_530();
	func_531();
	func_532();
	func_533();
	func_534();
	return;
}

void func_277() // Position - 0x841B Hash - 0xC505EA2E ^0x38A5BAD8
{
	int i;
	var name;
	int j;

	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("dewclm_nav_camp_00"))
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("dewclm_nav_camp_00");

	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("shb_nav_camp_00"))
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("shb_nav_camp_00");

	for (i = 0; i < 9; i = i + 1)
	{
		for (j = 0; j <= 2; j = j + 1)
		{
			if (func_535(i, j))
			{
				name = { func_536(i, j) };
			
				if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(&name))
					PATHFIND::_NAVMESH_DEACTIVATE_SWAP(&name);
			}
		}
	}

	return;
}

void func_278() // Position - 0x8498 Hash - 0x436FF24F ^0x5E728080
{
	var unk;
	int i;

	unk = 3;
	unk[0] = 67198036;
	unk[1] = -1656481590;
	unk[2] = -1670262487;

	for (i = 0; i < 3; i = i + 1)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(unk[i]))
			func_502(unk[i]);
	}

	return;
}

void func_279() // Position - 0x84ED Hash - 0x51500BAF ^0x51500BAF
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_538(i, func_537(i), false, false);
	}

	return;
}

void func_280() // Position - 0x8516 Hash - 0x4FD1DDCD ^0xD53563E9
{
	int i;
	int ptfxHandle;

	for (i = 0; i < 10; i = i + 1)
	{
		ptfxHandle = Global_1203871[i /*8*/];
	
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(ptfxHandle))
			GRAPHICS::REMOVE_PARTICLE_FX(ptfxHandle, false);
	}

	return;
}

char* func_281(int iParam0) // Position - 0x854B Hash - 0xDEB3DA4B ^0x23482CE3
{
	switch (iParam0)
	{
		case 1:
			return "scr_deadeye";
	
		default:
		
	}

	return "";
}

int func_282() // Position - 0x856C Hash - 0x9BA7A639 ^0xD1BC473B
{
	var unk;
	int year;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	func_539(&unk, year.f_5);
	func_540(&unk, year.f_4);
	func_541(&unk, year.f_3);
	func_542(&unk, year.f_2);
	func_543(&unk, year.f_1 - 1);
	func_544(&unk, year - 100);
	return unk;
}

int func_283() // Position - 0x85CF Hash - 0xFF728524 ^0x2F89AEA2
{
	int year;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	num = year.f_2;
	num2 = year.f_1;
	num3 = year;

	if (num2 <= 2)
	{
		num2 = num2 + 12;
		num3 = num3 - 1;
	}

	num4 = num3 % 100;
	num5 = num3 / 100;
	num6 = num + ((13 * (num2 + 1)) / 5) + num4 + (num4 / 4) + (num5 / 4) + (5 * num5);
	num7 = (num6 + 6) % 7;
	return num7;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x864B Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_545(*uParam0);
	i = func_546(*uParam0);
	j = func_547(*uParam0);
	k = func_548(*uParam0);
	l = func_549(*uParam0);
	m = func_550(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_551(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_552(uParam0, m, l, k, j, i, num);
	return;
}

struct<10> func_285(int iParam0, int iParam1, var uParam2) // Position - 0x87BE Hash - 0x73682B50 ^0x73682B50
{
	int num;
	var unk10;
	var unk11;
	var unk12;

	func_553(iParam0, iParam1, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 0, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 1, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 2, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 3, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 4, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 5, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 6, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 7, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 8, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 9, &unk10, &unk11, &unk12);
	num = func_555(uParam2->[iParam1 /*11*/][0]);
	num.f_1 = func_556(uParam2->[iParam1 /*11*/][1]);
	num.f_8 = func_557(uParam2->[iParam1 /*11*/][2]);
	num.f_3 = func_558(uParam2->[iParam1 /*11*/][3]);
	num.f_6 = func_559(uParam2->[iParam1 /*11*/][4]);
	num.f_7 = func_560(uParam2->[iParam1 /*11*/][5]);
	num.f_4 = func_561(uParam2->[iParam1 /*11*/][6]);
	num.f_5 = func_562(uParam2->[iParam1 /*11*/][7]);
	num.f_2 = func_563(uParam2->[iParam1 /*11*/][8]);
	num.f_9 = func_564(uParam2->[iParam1 /*11*/][9]);
	return num;
}

void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x891B Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_545(*uParam0);
	i = func_546(*uParam0);
	num2 = func_547(*uParam0);
	j = func_548(*uParam0);
	k = func_549(*uParam0);
	l = func_550(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_551(i, num); num2 > m; m = func_551(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_552(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_287(Player plParam0, BOOL bParam1) // Position - 0x8AA3 Hash - 0xDEB0E8D3 ^0xDEB0E8D3
{
	return func_565(plParam0, bParam1) >= 4;
}

BOOL func_288(Player plParam0, BOOL bParam1) // Position - 0x8AB5 Hash - 0x284FA97F ^0x284FA97F
{
	return func_565(plParam0, bParam1) >= 2 && func_565(plParam0, bParam1) < 4;
}

BOOL func_289(int iParam0) // Position - 0x8AD6 Hash - 0x45394D65 ^0x5F281872
{
	int num;

	if (Global_1051829.f_1)
		return true;

	if (Global_1901671.f_45.f_1 == 0)
		return false;

	if (Global_1901671.f_45 == 0)
		return false;

	if (Global_1051829 != Global_1901671.f_45)
	{
		num = NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901671.f_45.f_1;
	
		if (num > 0)
			return true;
	}

	return false;
}

int func_290(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x8B30 Hash - 0x8EBD6187 ^0x42F0F0AC
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

var func_291(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x8B6B Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	int num;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_566() != 0)
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
	num = Global_1295666.f_10;
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_567());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_567());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_567());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_568(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_569(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_156(i) != 1)
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
					if (GANG::NETWORK_GET_GANG_ID(player2) != num)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_570(player2))
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

int func_292(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x8EFE Hash - 0xDF93FBF9 ^0x193910B6
{
	if (!func_571(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_293(int iParam0) // Position - 0x8F2E Hash - 0xA48990DD ^0x470FECFD
{
	*iParam0 = -1;
	iParam0->f_1 = -1;
	return;
}

BOOL func_294() // Position - 0x8F3F Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_295(Player plParam0, BOOL bParam1) // Position - 0x8F5B Hash - 0xF0471E4C ^0xFE2D6C4D
{
	Player bitIndex;
	int playerTeam;
	int playerTeam2;

	if (plParam0 == 255)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (plParam0 == Global_1295666.f_5)
		return true;

	bitIndex = plParam0;

	if (!Global_1295666.f_17[bitIndex])
		return false;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex))
			return true;
	}

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), bitIndex))
		return true;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), bitIndex))
		return false;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_1295666.f_5);
	playerTeam2 = PLAYER::GET_PLAYER_TEAM(plParam0);

	if (playerTeam != -1 && playerTeam2 != -1 && playerTeam == playerTeam2)
		return true;
	else if (GANG::_NETWORK_IS_IN_MY_GANG(plParam0))
		return true;

	return false;
}

struct<30> func_296() // Position - 0x905D Hash - 0x44893C4D ^0x466335B7
{
	var unk;
	var unk5;
	int i;

	unk5.f_3 = -1;
	unk5.f_3.f_1 = -1;
	unk5.f_11.f_12 = -1;
	unk5.f_11.f_12.f_1 = -1;
	unk5.f_11.f_14 = 255;
	unk5.f_11.f_15 = 255;
	unk5.f_11.f_1 = 255;
	unk5.f_11.f_2 = unk.f_2;
	func_293(&(unk5.f_3));

	if (Global_1072759.f_23 > 0)
	{
		Global_1072759.f_23 = Global_1072759.f_23 - 1;
	
		if (func_572() == Global_1072759.f_23)
			func_573();
	
		unk5 = { Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] };
		Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] = 0;
	}

	i = 0;

	for (i = 0; i <= 8; i = i + 1)
	{
		if (func_572() == i + 1)
			func_574(i);
	
		Global_1072759.f_23.f_5[i /*30*/] = { Global_1072759.f_23.f_5[i + 1 /*30*/] };
		Global_1072759.f_23.f_5[i + 1 /*30*/] = 0;
	}

	return unk5;
}

void func_297(var uParam0) // Position - 0x915D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_298() // Position - 0x9165 Hash - 0x1F6F885F ^0x1F6F885F
{
	BOOL flag;

	flag = { func_230(func_299()) };

	if (!flag)
		return;

	return;
}

int func_299() // Position - 0x9183 Hash - 0xA1DBD1D9 ^0x901B3F0B
{
	return Global_1072759.f_23.f_1;
}

void func_300(int iParam0) // Position - 0x9193 Hash - 0x42868A8 ^0x1E45A688
{
	Global_1072759.f_23.f_1 = iParam0;
	return;
}

void func_301() // Position - 0x91A5 Hash - 0x64464D9E ^0x6E14F1
{
	if (func_572() == -1)
		return;

	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_1072759.f_23.f_2.f_2) > Global_1901671.f_2.f_25 / 2)
	{
		func_573();
		return;
	}

	return;
}

BOOL func_302() // Position - 0x91DE Hash - 0xA5A53F42 ^0x62B332A8
{
	return func_61(Global_1572887.f_8, true);
}

void func_303() // Position - 0x91F1 Hash - 0x4A5AAA06 ^0xD8B3650A
{
	func_575(true);
	func_575(2);
	func_575(4);
	func_575(8);
	func_575(16);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(4096);
	func_575(8192);
	return;
}

void func_304() // Position - 0x9237 Hash - 0x7E9DE6B3 ^0xAE4AEE77
{
	func_575(true);
	func_575(2);
	func_575(4);
	func_575(8);
	func_575(16);
	func_575(64);
	func_575(128);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(4096);
	return;
}

void func_305() // Position - 0x9282 Hash - 0x6DF97400 ^0xD25508F1
{
	func_575(true);
	func_575(2);
	func_575(8);
	func_575(16);
	func_575(64);
	func_575(128);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(2048);
	func_575(4096);
	func_575(8192);
	return;
}

void func_306() // Position - 0x92D6 Hash - 0x69383BAA ^0xF223509D
{
	func_576(true);
	func_576(2);
	func_576(4);
	func_576(8);
	func_576(16);
	func_576(32);
	func_576(64);
	func_576(128);
	func_576(256);
	func_576(512);
	func_576(1024);
	func_576(2048);
	func_576(4096);
	func_576(8192);
	return;
}

void func_307() // Position - 0x9335 Hash - 0x95ABB58 ^0x17807133
{
	int num;

	if (Global_1901671.f_45.f_1 == 0)
		return;

	if (Global_1901671.f_45 == 0)
		return;

	num = NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901671.f_45.f_1;

	if (num < func_577(1))
		func_578(true, 1022);
	else if (num < func_577(2))
		func_578(2, 1020);
	else if (num < func_577(4))
		func_578(4, 1016);
	else if (num < func_577(8))
		func_578(8, 1008);
	else if (num < func_577(16))
		func_578(16, 992);
	else if (num < func_577(32))
		func_578(32, 960);
	else if (num < func_577(64))
		func_578(64, 896);
	else if (num < func_577(128))
		func_578(128, 768);
	else if (num < func_577(256))
		func_578(256, 512);
	else if (num < func_577(512))
		func_578(512, 512);

	return;
}

void func_308() // Position - 0x9449 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_64();
	return;
}

void func_309() // Position - 0x9455 Hash - 0x87E8B06F ^0x87E8B06F
{
	if (!func_579(1, Global_1295666))
		return;

	if (func_579(2, 255))
	{
		func_580(8);
		func_212(3);
	}
	else
	{
		func_212(2);
	}

	return;
}

void func_310() // Position - 0x948A Hash - 0xCAAFEFE ^0xA7FF9469
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), Global_1295666))
	{
		func_211(&(Global_1295299.f_25), true, true);
		func_211(&(Global_1295299.f_26), true, true);
		func_212(3);
		return;
	}

	if (!func_579(true, Global_1295666))
	{
		func_212(0);
		return;
	}

	if (func_579(8, 255))
	{
		func_211(&(Global_1295299.f_25), true, true);
	
		if (!func_475(Global_1295299.f_26))
			Global_1295299.f_26 = func_581("STORY_COOP_TRANSITION_CANCEL", joaat("INPUT_CONTEXT_B"), 2, 0, 1, 4, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	
		if (func_582(Global_1295299.f_26, true))
			func_583(8);
	
		return;
	}

	func_211(&(Global_1295299.f_26), true, true);

	if (!func_584(Global_1295666))
		return;

	if (!func_475(Global_1295299.f_25))
		Global_1295299.f_25 = func_581("STORY_COOP_TRANSITION_CONFIRM", joaat("INPUT_CONTEXT_X"), 2, 0, 1, 4, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);

	if (func_582(Global_1295299.f_25, true))
		func_580(8);

	return;
}

void func_311() // Position - 0x95A4 Hash - 0x619B77BD ^0x221B36BD
{
	int i;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), Global_1295666))
	{
		if (!func_579(true, Global_1295666))
		{
			func_212(0);
			return;
		}
	
		return;
	}

	Global_1295299.f_28 = -1;

	for (i = 0; i < Global_1295205.f_22; i = i + 1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_3[i /*6*/].f_2), Global_1295666))
		{
			Global_1295299.f_28 = i;
			break;
		}
	}

	if (Global_1295299.f_28 == -1)
		return;

	func_212(4);
	return;
}

void func_312() // Position - 0x9628 Hash - 0x85A0B152 ^0x70977939
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_OUT(2000);
	
		return;
	}

	func_580(16);
	func_585(0);
	func_212(5);
	return;
}

void func_313() // Position - 0x965A Hash - 0x791150E4 ^0x1E1F7F4F
{
	if (Global_1295205.f_3[Global_1295299.f_28 /*6*/].f_1 >= 2)
	{
		func_212(6);
		return;
	}

	switch (Global_1295299.f_29)
	{
		case 0:
			if (Global_1295205.f_3[Global_1295299.f_28 /*6*/].f_3 != Global_1295666.f_5)
				return;
		
			if (Global_1295299.f_30 >= 15)
			{
				func_580(64);
				return;
			}
		
			if (!NETWORK::NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(&(Global_1295205.f_3[Global_1295299.f_28 /*6*/].f_2)))
				return;
		
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
		
			if (!NETWORK::NETWORK_AUTO_SESSION_SPLIT_SESSION(1, 32, 0, -1))
				return;
		
			func_585(1);
			break;
	
		case 1:
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT())
				return;
		
			if (!NETWORK::_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL())
			{
				Global_1295299.f_30 = Global_1295299.f_30 + 1;
				func_585(0);
				return;
			}
		
			if (!NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
			{
				Global_1295299.f_30 = Global_1295299.f_30 + 1;
				func_585(0);
				return;
			}
		
			if (!NETWORK::_0x0B6B4507AC5EA8B8())
				if (!NETWORK::NETWORK_IS_RESETTING_POPULATION())
					NETWORK::NETWORK_RESET_POPULATION(false, 0);
		
			func_585(2);
			break;
	
		case 2:
			func_580(32);
			break;
	}

	return;
}

void func_314() // Position - 0x9772 Hash - 0x16DC6441 ^0x5E5B6204
{
	int bitIndex;

	bitIndex = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (bitIndex == 255)
		return;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), bitIndex))
	{
		func_64();
		return;
	}

	func_580(128);
	return;
}

BOOL func_315() // Position - 0x97A7 Hash - 0xB7996D3E ^0x20B95A42
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
	{
		ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1102813.f_26.f_3344, false);
		ENTITY::SET_ENTITY_COLLISION(Global_1102813.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102813.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_1102813.f_26.f_3344, true);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1102813.f_26.f_3344, true);
		NETWORK::SET_NETWORK_ID_STOP_CLONING(NETWORK::PED_TO_NET(Global_1102813.f_26.f_3344), true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 301, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 277, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 417, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 394, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102813.f_26.f_3344, true);
		TASK::TASK_PLAY_ANIM(Global_1102813.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1090519040, -1056964608, -1, 0, 0, false, 0, false, 0, false);
		Global_1102813.f_26.f_3357 = { Global_1102813.f_26.f_3354 };
		return true;
	}

	STREAMING::REQUEST_MODEL(joaat("a_c_owl_01"), false);

	if (!STREAMING::HAS_MODEL_LOADED(joaat("a_c_owl_01")))
		return false;

	STREAMING::REQUEST_ANIM_DICT("CREATURES_BIRD@OWL@NORMAL@DEAD");

	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_BIRD@OWL@NORMAL@DEAD"))
		return false;

	if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false));
	else
		return false;

	PED::_0xC6136B40FFFB778B(true);
	Global_1102813.f_26.f_3344 = PED::CREATE_PED(joaat("a_c_owl_01"), Global_1102813.f_26.f_3348, 0f, true, false, true, false);
	ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
	ENTITY::SET_ENTITY_VISIBLE(Global_1102813.f_26.f_3344, false);
	ENTITY::SET_ENTITY_COLLISION(Global_1102813.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102813.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_1102813.f_26.f_3344, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_1102813.f_26.f_3344, true);
	NETWORK::SET_NETWORK_ID_STOP_CLONING(NETWORK::PED_TO_NET(Global_1102813.f_26.f_3344), true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 301, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 277, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 417, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 394, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 253, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102813.f_26.f_3344, true);
	TASK::TASK_PLAY_ANIM(Global_1102813.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1000f, -1056964608, -1, 1, 0, false, 0, false, 0, false);
	Global_1102813.f_26.f_3357 = { Global_1102813.f_26.f_3354 };
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
	PED::_0xC6136B40FFFB778B(false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_1102813.f_26.f_3344, "Hide_and_Mute_Entity_group", 0);
	AUDIO::START_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	return true;
}

BOOL func_316() // Position - 0x9ABF Hash - 0x347A6F12 ^0x29DDD6A1
{
	if (Global_1102813.f_26.f_3337 == 9)
		return false;

	if (Global_1102813.f_26.f_3337 == 10)
		return false;

	if (Global_1102813.f_26.f_3337 == 11)
		return false;

	if (func_586(2048))
		return true;

	if (func_587(1))
		return true;

	if (Global_1102813.f_26.f_3337 != 0)
		return true;

	return false;
}

void func_317() // Position - 0x9B29 Hash - 0x44AD41D4 ^0xB5B76AC5
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
		return;

	AUDIO::STOP_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	PED::DELETE_PED(&(Global_1102813.f_26.f_3344));
	Global_1102813.f_26.f_3345 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
	return;
}

char* func_318(int iParam0) // Position - 0x9B6D Hash - 0xF7EB2862 ^0x9A158FBD
{
	switch (iParam0)
	{
		case 0:
			return "scr_de_slippery_haze_head";
	
		case 1:
			return "scr_de_slippery_haze_torso";
	
		case 2:
			return "scr_de_slippery_haze_limb";
	
		case 3:
			return "scr_de_recuperate_wisps";
	
		case 4:
			return "scr_de_steady_smoke_torso";
	
		default:
		
	}

	return "";
}

void func_319() // Position - 0x9BC2 Hash - 0x1A0C1F44 ^0x585C35F9
{
	int num;
	int i;
	int j;
	int num2;

	if (!CAM::IS_SCREEN_FADED_IN() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	func_588();
	func_589();

	if (func_590() != 0)
	{
		if (!func_592(func_591()))
		{
			num2 = func_593(func_590());
		
			if (func_594() < num2)
			{
				if (!func_595())
				{
					func_597(func_596());
					return;
				}
			}
			else
			{
				func_598(func_590());
				func_599();
				func_600(0);
			}
		}
		else
		{
			func_600(func_594() + 1);
			func_597(0);
			func_601();
		}
	}
	else
	{
		for (i = 0; i <= 0; i = i + 1)
		{
			if (func_602(i) == 0)
			{
			}
			else
			{
				for (j = 0; j <= 31; j = j + 1)
				{
					num = func_603((i * 32) + j, 1);
				
					if (!func_604(num))
					{
					}
					else
					{
						func_605(num);
						break;
					}
				}
			
				if (func_590() != 0)
					break;
			}
		}
	}

	return;
}

int func_320() // Position - 0x9CB4 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1296390;
}

BOOL func_321() // Position - 0x9CC0 Hash - 0xA63C5C4B ^0x7E30838B
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[29 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[29 /*4*/].f_3))
		return false;

	return true;
}

BOOL func_322() // Position - 0x9CFB Hash - 0xB7EEFDFC ^0x41BD315C
{
	int i;
	int num;
	int j;
	int num2;
	BOOL flag;
	var unk;
	int num3;

	num3 = -1;
	num3.f_1 = -1;
	num3.f_2 = -1;
	num3.f_4 = -1;
	num3.f_5 = -1;
	num = func_606();

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num3.f_3 = 1;
		num3 = i;
		flag = func_607(&num3);
		num2 = func_608(i);
	
		for (j = 0; j <= num2 - 1; j = j + 1)
		{
			unk = { func_609(i, j) };
			func_610(&unk, flag);
		}
	}

	return true;
}

void func_323(int iParam0) // Position - 0x9D82 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1296390 = iParam0;
	return;
}

BOOL func_324() // Position - 0x9D90 Hash - 0x814C4090 ^0x814C4090
{
	int i;
	var unk;

	for (i = 0; i <= 4; i = i + 1)
	{
		func_611(i, &unk);
	
		if (func_612(&unk))
			return false;
	}

	return true;
}

// Unhandled jump detected. Output should be considered invalid
void func_325() // Position - 0x9DC0 Hash - 0xAA3749B1 ^0x36612E44
{
	int i;
	int num;
	int j;
	int num2;
	int k;
	int num3;
	int num4;
	int num5;
	int num6;
	BOOL flag;
	BOOL flag2;

	num = func_606();

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num4 = i;
		num2 = func_613(num4);
		flag2 = false;
	
		if (func_614(num4) > 0)
		{
			if (func_615(num4, -1260493738))
			{
			}
			else
			{
				for (j = 0; j <= num2 - 1; j = j + 1)
				{
					num5 = j;
					num3 = func_616(num4, num5);
					flag = false;
				
					for (k = 0; k <= num3 - 1; k = k + 1)
					{
						num6 = k;
					
						if (!func_617(num4, num5, num6, 3))
						{
						}
						else
						{
							func_618(num4, num5, k);
							flag = true;
							break;
						}
					}
				
					if (num3 <= 0)
						func_618(num4, num5, -1);
					else if (!flag)
						func_618(num4, num5, 15);
				
					if (k == 0 && flag && !flag2)
					{
						func_619(num4, j);
						flag2 = true;
					}
				}
			
				if (num2 <= 0)
					func_619(num4, -1);
				else if (!flag2)
					func_619(num4, 15);
			}
		}
	
		j = 0;
	
		if (j <= num2 - 1)
		{
			num5 = j;
			num3 = func_616(num4, num5);
			flag = false;
			k = 0;
		
			if (k <= num3 - 1)
			{
				num6 = k;
			
				if (!func_617(num4, num5, num6, 3))
				{
				}
				else
				{
					func_618(num4, num5, k);
					flag = true;
					goto 0x99;
				}
			
				k = k + 1;
			}
		
			if (num3 <= 0)
				func_618(num4, num5, -1);
			else if (!flag)
				func_618(num4, num5, 15);
		
			if (k == 0 && flag && !flag2)
			{
				func_619(num4, j);
				flag2 = true;
			}
		
			j = j + 1;
		}
	
		if (num2 <= 0)
			func_619(num4, -1);
		else if (!flag2)
			func_619(num4, 15);
	}

	return;
}

void func_326() // Position - 0x9ECF Hash - 0xF5829B2C ^0xF5829B2C
{
	int i;
	int num;
	int j;
	int num2;
	int num3;
	Hash hash;
	int num4;
	int num5;
	var unk;
	BOOL flag;
	int num6;

	num = func_606();
	func_620(num);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num4 = i;
		num2 = func_613(num4);
		func_621(num4, num2);
		num3 = func_622(num4);
		func_623(num4, num3);
		unk = { func_624(num4, joaat("cooldown_start")) };
		func_625(num4, unk);
		flag = func_626(num4);
		func_627(num4, flag);
		num6 = func_628(num4, 0);
		func_629(num4, num6);
	
		for (j = 0; j <= num2 - 1; j = j + 1)
		{
			num5 = j;
			hash = func_630(num4, num5);
			func_631(num4, num5, hash);
		}
	}

	return;
}

void func_327() // Position - 0x9F83 Hash - 0x9703231D ^0x9703231D
{
	int i;
	int num;

	for (i = 0; i <= func_632() - 1; i = i + 1)
	{
		num = num + func_633(i);
	}

	func_634();
	func_328(num);
	return;
}

void func_328(int iParam0) // Position - 0x9FB7 Hash - 0xB161C9FC ^0x20E1C567
{
	int i;
	int numGangMembers;
	Hash missionId;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	Player player;
	Player gangLeader;
	Any gangId;
	int replayState;
	int num6;
	var statId;
	Hash category;

	player = PLAYER::PLAYER_ID();
	gangId = GANG::NETWORK_GET_GANG_ID(player);
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
	numGangMembers = GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId);
	flag = player == gangLeader && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(player);
	num3 = Global_1295666.f_16;

	for (i = 0; i <= iParam0 - 1; i = i + 1)
	{
		num4 = func_635();
	
		if (!func_636(num4))
		{
		}
		else
		{
			num5 = func_637();
			missionId = func_638(num4, num5);
			num = func_639(num4);
			statId = { func_640(num4) };
			STATS::STAT_ID_GET_INT(&statId, &num2);
		
			if (func_636(num4))
			{
				if (MISSIONDATA::MISSIONDATA_IS_VALID(missionId))
				{
					replayState = MISSIONDATA::MISSIONDATA_GET_REPLAY_STATE(missionId);
					num6 = func_641(num4);
					category = func_642(num4);
				
					if (func_343() || Global_1048577 || Global_1048584)
						if (replayState != 2)
							MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 2);
					else if (flag)
						if (numGangMembers <= 4)
							if (num2 == 0 || num2 + num <= num3)
								if (num6 == 15)
									if (replayState != 0)
										MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 0);
								else if (num6 > num5)
									if (replayState != 0)
										MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 0);
								else if (replayState != 3)
									MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 3);
							else if (replayState != 1)
								MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 1);
						else if (replayState != 2)
							MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 2);
					else if (replayState != 6)
						MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 6);
				}
			
				if (num6 == 15)
					if (MISSIONDATA::_MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(category))
						MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(category, false);
				else if (!MISSIONDATA::_MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(category))
					MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(category, true);
			}
			else
			{
				num5 = func_633(num4) - 1;
			}
		
			num5 = (num5 + 1) % func_633(num4);
			func_643(num5);
		
			if (num5 == 0)
			{
				num4 = (num4 + 1) % func_632();
				func_644(num4);
			}
		}
	}

	return;
}

var func_329() // Position - 0xA19A Hash - 0x4228A1C2 ^0x266C7521
{
	return Global_1296390.f_58;
}

BOOL func_330(int iParam0) // Position - 0xA1A8 Hash - 0xCB1EF70 ^0xCB1EF70
{
	if (Global_1048577)
		return false;

	switch (iParam0)
	{
		case 0:
		case 13:
		case 14:
		case 15:
			return false;
	
		default:
		
	}

	return true;
}

void func_331(int iParam0) // Position - 0xA1E0 Hash - 0x29A8F290 ^0xFC2F5696
{
	Global_1296390.f_58 = iParam0;
	return;
}

BOOL func_332(Player plParam0) // Position - 0xA1F0 Hash - 0xD56839EF ^0xA0159113
{
	return Global_1056554[plParam0 /*491*/].f_204.f_9;
}

void func_333(int iParam0) // Position - 0xA205 Hash - 0x42868A8 ^0xBEE4EBB5
{
	Global_1296390.f_58.f_1 = iParam0;
	return;
}

BOOL func_334(BOOL bParam0) // Position - 0xA217 Hash - 0x9E97CA6F ^0x49926729
{
	int num;

	num = { func_645(bParam0) };

	if (num.f_3 != 1)
		return false;

	return func_646(num, num.f_1) != 0;
}

void func_335(int iParam0) // Position - 0xA241 Hash - 0xBC17E13A ^0x2BB0F3F0
{
	Global_1296390.f_58.f_1.f_2 = Global_1296390.f_58.f_1.f_2 || iParam0;
	return;
}

BOOL func_336() // Position - 0xA260 Hash - 0xA1DBD1D9 ^0x85182996
{
	return Global_1296390.f_58.f_1;
}

int func_337(BOOL bParam0) // Position - 0xA270 Hash - 0x7CEAE53E ^0x28BCCFAE
{
	var unk;
	int num;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam0) };
	num = func_646(unk.f_3, unk.f_3.f_1);

	if (num == 0)
		return 0;

	unk = { func_647(num, 7) };
	unk.f_2 = MISC::GET_GAME_TIMER();

	if (!func_18(unk))
		return 0;

	func_648(0, &unk);
	return 1;
}

BOOL func_338(int iParam0) // Position - 0xA300 Hash - 0x7602256A ^0xA829A494
{
	return Global_1296390.f_58.f_1.f_1 && iParam0 != false;
}

void func_339(int iParam0) // Position - 0xA317 Hash - 0x9469E520 ^0x7356B40D
{
	Global_1296390.f_58.f_1.f_1 = Global_1296390.f_58.f_1.f_1 - Global_1296390.f_58.f_1.f_1 && iParam0;
	return;
}

int func_340(Player plParam0) // Position - 0xA341 Hash - 0x87F65B8F ^0xF97DC292
{
	if (plParam0 == 255)
		plParam0 = Global_1295666.f_5;

	return Global_263042[plParam0 /*65*/];
}

void func_341(int iParam0) // Position - 0xA360 Hash - 0xBC17E13A ^0x13B3E5C1
{
	Global_1296390.f_58.f_1.f_1 = Global_1296390.f_58.f_1.f_1 || iParam0;
	return;
}

void func_342() // Position - 0xA37F Hash - 0xA73156D2 ^0xA73156D2
{
	BOOL flag;

	flag = func_336();
	func_649(flag);
	return;
}

BOOL func_343() // Position - 0xA393 Hash - 0xA3BE243F ^0x24B01457
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

struct<2> func_344(int iParam0) // Position - 0xA3A8 Hash - 0x2B54F3FE ^0x113F336
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/];
}

int func_345(var uParam0, var uParam1) // Position - 0xA3BE Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_78(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_346(int iParam0) // Position - 0xA3EA Hash - 0xA67D24A0 ^0xA32F42B6
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/].f_3;
}

struct<8> func_347(int iParam0) // Position - 0xA400 Hash - 0x3466D9C3 ^0x3466D9C3
{
	var unk;
	var unk6;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 58, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 59, 0, 0, 1))
		return unk6;

	return func_652(&unk, 67, 1);
}

const char* func_348(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xA497 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_349(int iParam0) // Position - 0xA4AB Hash - 0xE8BF7CF7 ^0x19BF1220
{
	func_515(&(Global_1296390.f_50.f_3), func_653(iParam0, 1), 1);
	return;
}

void func_350(BOOL bParam0) // Position - 0xA4C8 Hash - 0x3BF5B800 ^0x153609DB
{
	func_37(&(Global_1572887.f_72.f_16), bParam0);
	return;
}

int func_351(int iParam0) // Position - 0xA4DE Hash - 0xA9BCF77C ^0xC64DCE0F
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_1;
}

int func_352(int iParam0) // Position - 0xA4F6 Hash - 0xA9BCF77C ^0x5133F8ED
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_2;
}

struct<2> func_353(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA50E Hash - 0xB20EFEC4 ^0xB20EFEC4
{
	var unk;
	var unk6;
	int num;
	int num2;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 20, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return unk6;

	if (!func_651(&unk, 36, 0, 0, iParam3))
		return unk6;

	if (!func_651(&unk, 37, iParam2, 0, iParam3))
		return unk6;

	num = func_654(&unk);
	num2 = func_655(&unk);
	return func_656(num, num2);
}

void func_354(Any* panParam0) // Position - 0xA5DE Hash - 0xE3573609 ^0x64759315
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1296390.f_50.f_5), panParam0, 3);
	return;
}

void func_355() // Position - 0xA5F5 Hash - 0x9156739A ^0x9DED5BE9
{
	var unk;

	unk = { func_657(0) };

	if (func_658(1))
		return;

	unk.f_2 = MISC::GET_GAME_TIMER();

	if (func_338(8))
		unk.f_9 = 0;
	else
		unk.f_9 = 1;

	func_659(0);
	func_648(1, &unk);
	return;
}

void func_356() // Position - 0xA63C Hash - 0x41B82C9D ^0x209AE0E2
{
	var src;

	MISC::COPY_SCRIPT_STRUCT(&(Global_1296390.f_58.f_1), &src, 3);
	return;
}

BOOL func_357() // Position - 0xA653 Hash - 0x6FFF6C76 ^0x72E8ABF3
{
	return Global_1901671.f_1 != -1;
}

BOOL func_358() // Position - 0xA663 Hash - 0xED6CFD06 ^0x7D3F1902
{
	if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
	{
		func_660();
		return false;
	}

	return true;
}

void func_359() // Position - 0xA67B Hash - 0xBAC16685 ^0x9C862E1F
{
	Global_1572887.f_9 = 0;
	func_660();
	return;
}

int func_360() // Position - 0xA68E Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_661();
}

void func_361() // Position - 0xA69A Hash - 0x8597569 ^0x5107C633
{
	func_663(func_662(1));
	func_664(Global_1107816.f_33[func_662(2) /*16*/].f_1, -1);

	if (NETWORK::NETWORK_IS_HOST())
		func_665();

	if (func_666())
	{
		func_667(&(Global_1107816.f_33.f_513), &(Global_1110244.f_10));
		func_668(func_662(0));
		func_669(func_662(3));
		func_670(func_662(0));
		func_671();
	}

	func_672();
	func_673();
	func_674();
	func_675();
	func_676();
	func_677();
	func_678();
	func_679();
	func_680();
	func_681();
	func_682();

	if (Global_1110244.f_15)
	{
		func_683();
		Global_1110244.f_15 = 0;
	}

	func_684();
	return;
}

BOOL func_362() // Position - 0xA748 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_18(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

void func_363() // Position - 0xA7A0 Hash - 0xEAC9E6CA ^0xFB0F8F54
{
	BOOL flag;

	Global_1072759.f_19585.f_24 = 1;

	if (Global_1072759.f_19585.f_25 != -1)
		flag = true;

	Global_1072759.f_19585.f_25 = MISC::GET_FRAME_COUNT();

	if (!flag)
		func_685();

	return;
}

BOOL func_364(int iParam0, int iParam1) // Position - 0xA7D9 Hash - 0x4A9988FF ^0x481909D2
{
	BOOL num;

	if (!func_686(iParam0))
		return true;

	switch (Global_1072759.f_19585.f_23)
	{
		case 0:
			func_687(iParam0, &num);
			break;
	
		case 1:
			func_688(iParam1, iParam0);
			break;
	
		case 2:
			Global_1072759.f_19585[iParam0] = func_689(Global_1072759.f_19585.f_19, Global_1072759.f_19585.f_20);
			num = 1;
			break;
	}

	return num;
}

void func_365() // Position - 0xA84F Hash - 0xCBE03E74 ^0xDD45745D
{
	if (Global_1072759.f_19585.f_25 == MISC::GET_FRAME_COUNT())
		return;

	if (Global_1072759.f_19585.f_24)
	{
		Global_1072759.f_19585.f_24 = 0;
	}
	else if (Global_1072759.f_19585.f_25 != -1)
	{
		Global_1072759.f_19585.f_25 = -1;
		func_685();
	}

	return;
}

BOOL func_366(int iParam0) // Position - 0xA89E Hash - 0x9D85B1F9 ^0x4FF7BC5B
{
	int i;

	if (!func_690(iParam0))
		return false;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1292143.f_459.f_44[i /*30*/] == iParam0)
			return true;
	}

	return false;
}

void func_367() // Position - 0xA8DE Hash - 0x76B33CA5 ^0xFC041FB4
{
	int gangId;

	gangId = GANG::NETWORK_GET_GANG_ID(Global_1295666.f_5);

	if (Global_1295666.f_10 != gangId)
		Global_1295666.f_10 = gangId;

	if (Global_1072759.f_28295 != Global_1295666.f_10)
		Global_1072759.f_28295 = Global_1295666.f_10;

	return;
}

BOOL func_368(int iParam0, Player plParam1) // Position - 0xA922 Hash - 0xF0F37DB8 ^0xC8497B94
{
	if (!func_691(iParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(plParam1))
		return false;

	return MISC::_IS_BIT_FLAG_SET(&(Global_1056554[plParam1 /*491*/].f_15.f_21), iParam0);
}

void func_369() // Position - 0xA966 Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_1960746 = false;
	return;
}

void func_370(int iParam0) // Position - 0xA973 Hash - 0x91DB074B ^0x3E98C597
{
	Player playerIndex;

	if (!func_691(iParam0))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndex) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerIndex))
		return;

	if (func_368(iParam0, playerIndex))
		return;

	MISC::_SET_BIT_FLAG(&(Global_1056554[playerIndex /*491*/].f_15.f_21), iParam0);
	return;
}

void func_371(int iParam0) // Position - 0xA9C9 Hash - 0x612C484F ^0xE721B942
{
	Player playerIndex;

	if (!func_691(iParam0))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndex) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerIndex))
		return;

	if (!func_368(iParam0, playerIndex))
		return;

	MISC::_CLEAR_BIT_FLAG(&(Global_1056554[playerIndex /*491*/].f_15.f_21), iParam0);
	return;
}

int func_372(var uParam0, var uParam1) // Position - 0xAA20 Hash - 0xA6DDAF91 ^0xF19E68CE
{
	int num;

	if (!func_18(uParam0))
		return -1;

	num = func_692(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

void func_373(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, int iParam6) // Position - 0xAA5B Hash - 0x880AF98 ^0x212D2624
{
	var unk;

	if (!func_693(iParam1))
	{
		iParam1 = func_695(func_694(iParam0));
	
		if (!func_693(iParam1))
			return;
	}

	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*72*/].f_28));
		Global_1835011[iParam0 /*72*/].f_66 = 0;
	}
	else if (bParam2 && !Global_26688)
	{
		func_696(iParam0, iParam5, iParam1);
	}

	if (func_697(iParam1, 48))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));

	unk = { Global_1835011[iParam0 /*72*/].f_13 };

	if (bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&unk) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_17, false))
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*72*/].f_17);

	if (bParam4)
		func_698(Global_1835011[iParam0 /*72*/].f_1);
	else
		func_699(iParam1, 3831);

	Global_1835011[iParam0 /*72*/].f_71 = 0;
	return;
}

int func_374(var uParam0, var uParam1) // Position - 0xAB59 Hash - 0xCB3E635A ^0xCB3E635A
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 == 15)
		return -1;

	if (!func_700(uParam0))
		return -1;

	num2 = func_695(uParam0);

	if (num2 >= 0)
	{
		func_701(uParam0, true);
		return num2;
	}
	else
	{
		num = Global_1900530;
		Global_1900531[num /*2*/] = { uParam0 };
		Global_1900562[num /*2*/] = { unk };
		func_701(uParam0, true);
		Global_1900530 = Global_1900530 + 1;
	
		if (Global_1900530 > 15)
			Global_1900530 = 15;
	
		return num;
	}

	return -1;
}

void func_375() // Position - 0xABE9 Hash - 0x6BB990A0 ^0xEAF86165
{
	int num;
	Blip blip;

	num = func_702();

	if (num == 0)
	{
		func_703();
	}
	else
	{
		if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1) == num)
			return;
	
		blip = func_704();
	
		if (MAP::DOES_BLIP_EXIST(blip))
		{
			MAP::REMOVE_BLIP(&blip);
			func_705(0);
		}
	
		func_706(0);
	}

	return;
}

int func_376() // Position - 0xAC30 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1295849.f_492;
}

BOOL func_377(int iParam0) // Position - 0xAC3F Hash - 0x4C0C4814 ^0xC3E37BC1
{
	return Global_1295849.f_492.f_1 && iParam0 != false;
}

void func_378(int iParam0) // Position - 0xAC55 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1295849.f_492 = iParam0;
	return;
}

void func_379(int iParam0) // Position - 0xAC66 Hash - 0x22CDC537 ^0x12C5A8FA
{
	Global_1295849.f_492.f_1 = Global_1295849.f_492.f_1 || iParam0;
	return;
}

BOOL func_380() // Position - 0xAC83 Hash - 0x3AFAA4E1 ^0x8C4E5F7B
{
	return func_707() == PLAYER::PLAYER_ID();
}

BOOL func_381() // Position - 0xAC94 Hash - 0x9EB60A74 ^0x9EB60A74
{
	int num;
	int num2;
	Hash unlockHash;
	Hash unlockHash2;

	num = func_389();

	if (num == -1)
		return false;

	if (func_708() == 14)
		return false;

	if (func_417() == 6)
		return false;

	num2 = func_391();

	if (num2 == -1)
		return false;

	unlockHash = func_709(num, num2);

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		return false;

	if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
		return false;

	unlockHash2 = func_711(func_710(num, num2));

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash2))
		return false;

	if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash2))
		return false;

	return true;
}

void func_382(int iParam0) // Position - 0xAD26 Hash - 0xF956B488 ^0x517F9708
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	if (func_707() != player)
		return;

	Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436 = Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436 || iParam0;
	return;
}

void func_383() // Position - 0xAD6C Hash - 0xDE60F89E ^0xD8C3420
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	func_712(func_389());
	func_713(func_708());
	func_714(func_417());
	func_715(func_391());
	return;
}

void func_384() // Position - 0xADA7 Hash - 0xA5863234 ^0x578D559A
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return;

	func_717(func_716(gangLeader));
	func_719(func_718(gangLeader));
	func_721(func_720(gangLeader));
	func_723(func_722(gangLeader));
	return;
}

BOOL func_385(Player plParam0, int iParam1) // Position - 0xADF2 Hash - 0x113A6492 ^0x5D0EA1B
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	return Global_1056554[plParam0 /*491*/].f_436.f_1 && iParam1 != false;
}

BOOL func_386() // Position - 0xAE1B Hash - 0xB545EA59 ^0x2EF0AEE1
{
	int num;

	if (!BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(&num))
		return true;

	return Global_1295666.f_16 < num;
}

void func_387(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAE3A Hash - 0xAB481073 ^0xA2A5684
{
	if (bParam0)
	{
		func_724(1);
		Global_1072759.f_28644.f_8 = iParam1;
	}
	else
	{
		func_724(2);
	
		if (bParam2)
			func_724(4);
		else
			func_725(4);
	
		if (bParam3)
			func_724(256);
		else
			func_725(256);
	}

	return;
}

void func_388(int iParam0) // Position - 0xAE87 Hash - 0xAEC38FB1 ^0xAEC38FB1
{
	func_726(0, 0, iParam0, 129, -1, false, -1);
	return;
}

int func_389() // Position - 0xAE9C Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1295849.f_492.f_2;
}

int func_390(int iParam0) // Position - 0xAEAD Hash - 0x7647021A ^0xE19CB89E
{
	return Global_1295849[iParam0 /*37*/].f_8;
}

int func_391() // Position - 0xAEBF Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1295849.f_492.f_5;
}

int func_392(int iParam0) // Position - 0xAED0 Hash - 0x8BF4E2FD ^0x8BF4E2FD
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		default:
		
	}

	return 0;
}

void func_393(int iParam0) // Position - 0xAEF8 Hash - 0xC421D95B ^0xA01E003E
{
	Global_1295849.f_492.f_10 = iParam0;
	return;
}

void func_394() // Position - 0xAF0B Hash - 0x2F11689E ^0xBF93EABC
{
	var src;

	func_409(536870912);
	func_409(1073741824);
	func_409(268435456);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295849.f_492.f_6), &src, 4);
	return;
}

BOOL func_395(int iParam0) // Position - 0xAF3E Hash - 0xEED96FA6 ^0xF61A763F
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return false;

	return Global_1056554[gangLeader /*491*/].f_436 && iParam0 != false;
}

BOOL func_396() // Position - 0xAF73 Hash - 0x8190E5D8 ^0x6449D34A
{
	return Global_1295849.f_492.f_29;
}

int func_397() // Position - 0xAF84 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_60() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_398(int iParam0) // Position - 0xAF9F Hash - 0xC421D95B ^0x1B3F7DAD
{
	Global_1295849.f_492.f_14 = iParam0;
	return;
}

struct<4> func_399(BOOL bParam0) // Position - 0xAFB2 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_504(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_503(joaat("character"), func_727(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_503(joaat("character"), func_727(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_503(joaat("character"), func_727(), joaat("SLOTID_NONE"), bParam0);
}

Hash func_400(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xB052 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_728(hParam0, 0))
		return 0;

	if (!bParam7 && func_729(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_503(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_504(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_504(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

void func_401(int iParam0) // Position - 0xB0D1 Hash - 0xC421D95B ^0xF1287820
{
	Global_1295849.f_492.f_15 = iParam0;
	return;
}

Hash func_402(int iParam0) // Position - 0xB0E4 Hash - 0x83F584D2 ^0x83F584D2
{
	Hash hash;

	if (!func_730(iParam0))
		return 0;

	hash = func_731(iParam0);

	if (hash != -1)
		return hash;
	else
		return func_732(iParam0, false);

	return 0;
}

void func_403(Hash hParam0) // Position - 0xB11B Hash - 0xC421D95B ^0x51113BDB
{
	Global_1295849.f_492.f_12 = hParam0;
	return;
}

void func_404(Hash hParam0) // Position - 0xB12E Hash - 0xC421D95B ^0x5D194E7
{
	Global_1295849.f_492.f_13 = hParam0;
	return;
}

void func_405() // Position - 0xB141 Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1913444 = true;
	return;
}

void func_406() // Position - 0xB14E Hash - 0x88854710 ^0x73F82609
{
	var src;

	src.f_1 = 11;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295849.f_492.f_16), &src, 13);
	return;
}

BOOL func_407() // Position - 0xB171 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_408() // Position - 0xB17E Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_1913444 = false;
	return;
}

void func_409(int iParam0) // Position - 0xB18B Hash - 0xD03086C1 ^0xB56D4E94
{
	Global_1295849.f_492.f_1 = Global_1295849.f_492.f_1 - Global_1295849.f_492.f_1 && iParam0;
	return;
}

var func_410() // Position - 0xB1B2 Hash - 0x8190E5D8 ^0xEBABC495
{
	return Global_1295849.f_492.f_14;
}

int func_411(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xB1C3 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_733(sParam0, sParam1, hParam2);
	return num2;
}

var func_412() // Position - 0xB226 Hash - 0x8190E5D8 ^0xF39029B9
{
	return Global_1295849.f_492.f_15;
}

int func_413(int iParam0) // Position - 0xB237 Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

int func_414(int iParam0, BOOL bParam1) // Position - 0xB244 Hash - 0x100A047F ^0x100A047F
{
	if (bParam1)
		return (iParam0 % 100) / 1;

	return iParam0 / 1;
}

var func_415() // Position - 0xB262 Hash - 0x8190E5D8 ^0x30F61237
{
	return Global_1295849.f_492.f_12;
}

var func_416() // Position - 0xB273 Hash - 0x8190E5D8 ^0x8470E5CA
{
	return Global_1295849.f_492.f_13;
}

int func_417() // Position - 0xB284 Hash - 0x8190E5D8 ^0x856627E0
{
	return Global_1295849.f_492.f_4;
}

void func_418(int iParam0) // Position - 0xB295 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1295849.f_537 = Global_1295849.f_537 || iParam0;
	return;
}

void func_419() // Position - 0xB2AE Hash - 0x45FAF8F ^0x6B95E54
{
	int num;
	int num2;

	if (func_707() == PLAYER::PLAYER_ID())
		num = 0;
	else
		num = 1;

	num2 = func_391();

	if (num2 == -1)
		return;

	func_734(num, num2, func_389());
	func_735(num, num2, MISC::GET_GAME_TIMER());
	func_736(num, num2, func_417());
	return;
}

void func_420() // Position - 0xB2FD Hash - 0x8394907D ^0xDDB74B23
{
	int src;

	src.f_2 = -1;
	src.f_3 = 14;
	src.f_4 = 6;
	src.f_5 = -1;
	src.f_16.f_1 = 11;
	src = func_376();
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295849.f_492), &src, 30);
	return;
}

void func_421() // Position - 0xB341 Hash - 0xD1726C8E ^0xDBE55A6
{
	var src;

	src.f_2 = -1;
	src.f_3 = 14;
	src.f_4 = 6;
	src.f_5 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436), &src, 7);
	return;
}

void func_422() // Position - 0xB37A Hash - 0x1022FB40 ^0xF24A21FD
{
	Hash hash;
	int num;

	hash = func_737();

	if (hash == 0)
		return;

	num = func_738(hash);

	if (func_739())
		return;

	func_740(Global_265213.f_107995.f_14228[num], 0, 255, 0, false);
	return;
}

void func_423(int iParam0) // Position - 0xB3BD Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11600 = iParam0;
	return;
}

void func_424(int iParam0) // Position - 0xB3CE Hash - 0x56AD9FF4 ^0xA40C32B7
{
	int num;
	int i;

	num = func_738(func_737());

	for (i = 0; i < 31; i = i + 1)
	{
		if (Global_265213.f_107995.f_1028[num /*194*/][i /*6*/] == Global_265213.f_122484.f_80.f_12)
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_740(Global_265213.f_107995.f_1028[num /*194*/][i /*6*/].f_3, 0, 255, 0, false);
			break;
	
		case 1:
			func_740(Global_265213.f_107995.f_1028[num /*194*/][i /*6*/].f_4, 0, 255, 0, false);
			break;
	}

	return;
}

void func_425() // Position - 0xB474 Hash - 0xB50FF53D ^0xB50FF53D
{
	func_423(3);
	return;
}

void func_426() // Position - 0xB481 Hash - 0x3A40D40 ^0x4134CD9D
{
	Global_1207339.f_1 = 0;

	if (Global_1295666.f_17[0])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[0 /*12*/];

	if (Global_1295666.f_17[1])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[1 /*12*/];

	if (Global_1295666.f_17[2])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[2 /*12*/];

	if (Global_1295666.f_17[3])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[3 /*12*/];

	if (Global_1295666.f_17[4])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[4 /*12*/];

	if (Global_1295666.f_17[5])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[5 /*12*/];

	if (Global_1295666.f_17[6])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[6 /*12*/];

	if (Global_1295666.f_17[7])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[7 /*12*/];

	if (Global_1295666.f_17[8])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[8 /*12*/];

	if (Global_1295666.f_17[9])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[9 /*12*/];

	if (Global_1295666.f_17[10])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[10 /*12*/];

	if (Global_1295666.f_17[11])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[11 /*12*/];

	if (Global_1295666.f_17[12])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[12 /*12*/];

	if (Global_1295666.f_17[13])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[13 /*12*/];

	if (Global_1295666.f_17[14])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[14 /*12*/];

	if (Global_1295666.f_17[15])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[15 /*12*/];

	if (Global_1295666.f_17[16])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[16 /*12*/];

	if (Global_1295666.f_17[17])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[17 /*12*/];

	if (Global_1295666.f_17[18])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[18 /*12*/];

	if (Global_1295666.f_17[19])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[19 /*12*/];

	if (Global_1295666.f_17[20])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[20 /*12*/];

	if (Global_1295666.f_17[21])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[21 /*12*/];

	if (Global_1295666.f_17[22])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[22 /*12*/];

	if (Global_1295666.f_17[23])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[23 /*12*/];

	if (Global_1295666.f_17[24])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[24 /*12*/];

	if (Global_1295666.f_17[25])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[25 /*12*/];

	if (Global_1295666.f_17[26])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[26 /*12*/];

	if (Global_1295666.f_17[27])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[27 /*12*/];

	if (Global_1295666.f_17[28])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[28 /*12*/];

	if (Global_1295666.f_17[29])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[29 /*12*/];

	if (Global_1295666.f_17[30])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[30 /*12*/];

	if (Global_1295666.f_17[31])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[31 /*12*/];

	if (!Global_1207339)
	{
		if (func_741(8192))
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
		else
			POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
	
		Global_1207339 = true;
	}

	return;
}

int func_427() // Position - 0xB8E3 Hash - 0x4228A1C2 ^0x9FF552F1
{
	return Global_1300387.f_155;
}

int func_428(int iParam0) // Position - 0xB8F1 Hash - 0xC57D6AF8 ^0xB39C7602
{
	return Global_1300387.f_155.f_4[iParam0 /*4*/];
}

void func_429() // Position - 0xB905 Hash - 0xEBE51662 ^0xCFCD5BC4
{
	int value;
	Player player;
	Ped playerPed;
	Ped playerPed2;
	float num;

	value = func_427();
	player = PLAYER::INT_TO_PLAYERINDEX(value);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	if (!func_742(player, 2))
		return;

	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return;

	playerPed2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed2))
		return;

	num = func_743(ENTITY::GET_ENTITY_COORDS(playerPed, true, false), ENTITY::GET_ENTITY_COORDS(playerPed2, true, false));

	if (num > func_744())
	{
		func_745(value, 2);
	}
	else
	{
		func_746(value, NETWORK::GET_NETWORK_TIME_ACCURATE());
		func_745(value, 1);
	}

	return;
}

void func_430() // Position - 0xB9AA Hash - 0xADF51C73 ^0xDA4785C1
{
	int value;
	Player player;
	Ped playerPed;
	Ped playerPed2;
	float num;

	value = func_427();
	player = PLAYER::INT_TO_PLAYERINDEX(value);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
	{
		func_747(value);
		func_745(value, 0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_747(value);
		func_745(value, 0);
		return;
	}

	if (!func_742(player, 2))
	{
		func_747(value);
		func_745(value, 0);
		return;
	}

	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		func_747(value);
		func_745(value, 0);
		return;
	}

	playerPed2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed2))
		return;

	num = func_743(ENTITY::GET_ENTITY_COORDS(playerPed, true, false), ENTITY::GET_ENTITY_COORDS(playerPed2, true, false));

	if (num > func_744())
		return;

	func_746(value, NETWORK::GET_NETWORK_TIME_ACCURATE());
	func_745(value, 1);
	return;
}

void func_431() // Position - 0xBA7C Hash - 0xADF51C73 ^0xDA4785C1
{
	int value;
	Player player;

	value = func_427();
	player = PLAYER::INT_TO_PLAYERINDEX(value);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
	{
		func_747(value);
		func_745(value, 0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_747(value);
		func_745(value, 0);
		return;
	}

	if (!func_742(player, 2))
	{
		func_747(value);
		func_745(value, 0);
		return;
	}

	return;
}

void func_432(int iParam0) // Position - 0xBAE1 Hash - 0x29A8F290 ^0xF7CB0102
{
	Global_1300387.f_155 = iParam0;
	return;
}

void func_433() // Position - 0xBAF1 Hash - 0x724A53F1 ^0xEEF20AC1
{
	int value;
	int alphaLevel;
	int timeDifference;
	int timeDifference2;
	int timeDifference3;
	int value2;
	Player player;
	int timeA;
	int networkTimeAccurate;
	int timeA2;
	Ped playerPed;
	Hash entityModel;
	float num;
	float num2;

	value = func_427();
	player = PLAYER::INT_TO_PLAYERINDEX(value);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
	{
		func_747(value);
		func_745(value, 0);
		func_748(player);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_747(value);
		func_745(value, 0);
		func_748(player);
		return;
	}

	if (!func_742(player, 2))
	{
		func_747(value);
		func_745(value, 0);
		func_748(player);
		return;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
	timeA = func_749(player);
	timeA2 = func_750(value);
	timeDifference = NETWORK::GET_TIME_DIFFERENCE(timeA, networkTimeAccurate);
	timeDifference2 = NETWORK::GET_TIME_DIFFERENCE(timeA2, networkTimeAccurate);
	timeDifference3 = NETWORK::GET_TIME_DIFFERENCE(timeA, timeA2);
	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		func_747(value);
		func_745(value, 0);
		func_748(player);
		return;
	}

	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);

	if (entityModel != joaat("mp_male") && entityModel != joaat("mp_female"))
	{
		value2 = func_752(func_751() - timeDifference3, 1, func_751());
		num = BUILTIN::TO_FLOAT(timeDifference2) / BUILTIN::TO_FLOAT(value2);
		num2 = func_753(num, 0f, 1f);
		alphaLevel = BUILTIN::FLOOR(func_754(48f, 255f, 1f - num2));
		ENTITY::SET_ENTITY_ALPHA(playerPed, alphaLevel, false);
		func_755(player, alphaLevel);
		func_756(player);
	}

	NETWORK::NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(playerPed, false);

	if (timeDifference > func_751())
	{
		func_745(value, 3);
		func_748(player);
	}

	return;
}

void func_434(Player plParam0) // Position - 0xBC5E Hash - 0xC718E7BD ^0x4805CE23
{
	Player player;
	int* p_num;
	int num;

	if (plParam0 == Global_1295666)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_435(plParam0);
		return;
	}

	p_num = Global_1220761[plParam0 /*2*/];
	num = Global_1220761[plParam0 /*2*/].f_1;

	if (p_num == -1 || num == -1)
	{
		func_435(plParam0);
		return;
	}

	if (p_num == Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] && num == Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1)
	{
		func_435(plParam0);
		return;
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1220826.f_48[p_num /*21*/][num /*4*/]))
	{
		func_435(plParam0);
		return;
	}

	if (BUILTIN::VDIST(Global_34, Global_1220826.f_48[p_num /*21*/][num /*4*/].f_1) > 100f)
	{
		func_435(plParam0);
		return;
	}

	func_757(plParam0, p_num, num);
	return;
}

void func_435(Player plParam0) // Position - 0xBD3F Hash - 0x52060BE4 ^0xDF27CBB
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1220826.f_1099[plParam0 /*3*/]))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1220826.f_1099[plParam0 /*3*/], false);

	return;
}

void func_436() // Position - 0xBD69 Hash - 0xF56BD86E ^0x7DC99794
{
	Global_1102813.f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3347 = 1;
	return;
}

void func_437(int iParam0, Player plParam1) // Position - 0xBD97 Hash - 0x6624B09D ^0x8EA5E405
{
	if (func_758(plParam1, iParam0))
	{
		if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&Global_1295205.f_23[iParam0 /*3*/]))
		{
			Global_1295205.f_23[iParam0 /*3*/].f_1 = Global_1295299;
			Global_1295205.f_23[iParam0 /*3*/].f_2 = 4000;
		}
		else if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&Global_1295205.f_23[iParam0 /*3*/], plParam1))
		{
			Global_1295205.f_23[iParam0 /*3*/].f_1 = Global_1295299;
			Global_1295205.f_23[iParam0 /*3*/].f_2 = Global_1295205.f_23[iParam0 /*3*/].f_2 + 2000;
		
			if (Global_1295205.f_23[iParam0 /*3*/].f_2 > 5000)
				Global_1295205.f_23[iParam0 /*3*/].f_2 = 5000;
		}
	
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&Global_1295205.f_23[iParam0 /*3*/], plParam1);
	}
	else
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&Global_1295205.f_23[iParam0 /*3*/], plParam1);
	}

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&Global_1295205.f_23[iParam0 /*3*/]))
		return;

	switch (iParam0)
	{
		case 0:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_1295205.f_23[iParam0 /*3*/].f_1, Global_1295299)) < Global_1295205.f_23[iParam0 /*3*/].f_2)
				return;
			break;
	}

	if (!func_759(Global_1295205.f_23[iParam0 /*3*/], iParam0))
		return;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&Global_1295205.f_23[iParam0 /*3*/]);
	return;
}

void func_438(int iParam0) // Position - 0xBED6 Hash - 0x8D58E778 ^0xE839D70B
{
	Player player;

	player = PLAYER::INT_TO_PLAYERINDEX(Global_1295299.f_34);

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(iParam0->f_2)))
	{
		func_760(iParam0, 2);
		return;
	}

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(iParam0->f_2), Global_1295299.f_34))
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(player))
			func_761(iParam0, player, Global_1295299.f_34);
		else if (func_579(16, Global_1295299.f_34))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(iParam0->f_4), Global_1295299.f_34);

	if (SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_4)) < SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_2)))
		return;

	func_760(iParam0, 1);
	return;
}

void func_439(int iParam0) // Position - 0xBF66 Hash - 0xA50168D4 ^0xB739EAD
{
	Player i;
	Player player;
	Player player2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0->f_3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0->f_3))
	{
		iParam0->f_3 = 255;
	
		for (i = 0; i < 32; i = i + 1)
		{
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(iParam0->f_2), i))
			{
			}
			else
			{
				player = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(player))
				{
					func_761(iParam0, player, i);
				}
				else if (func_579(64, i))
				{
				}
				else
				{
					iParam0->f_3 = PLAYER::INT_TO_PLAYERINDEX(i);
					break;
				}
			}
		}
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0->f_3))
			func_760(iParam0, 2);
	
		return;
	}

	player2 = iParam0->f_3;

	if (func_579(64, player2))
	{
		iParam0->f_3 = 255;
		return;
	}

	if (!func_579(32, player2))
		return;

	func_760(iParam0, 2);
	return;
}

void func_440(int iParam0, int iParam1) // Position - 0xC033 Hash - 0xEAA9C111 ^0xBB295163
{
	Player player;

	player = PLAYER::INT_TO_PLAYERINDEX(Global_1295299.f_34);

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(iParam0->f_2), Global_1295299.f_34))
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(player))
			func_761(iParam0, player, Global_1295299.f_34);
		else if (func_579(128, Global_1295299.f_34))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(iParam0->f_5), Global_1295299.f_34);

	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(iParam0->f_2)))
		if (SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_5)) < SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_2)))
			return;

	func_762(iParam1);
	return;
}

void func_441(BOOL bParam0) // Position - 0xC0BA Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1893611 = Global_1893611 || bParam0;
	return;
}

void func_442(var uParam0) // Position - 0xC0CD Hash - 0xB468659B ^0x2A580C2B
{
	var unk;
	int i;

	unk.f_2 = -1;
	unk.f_2.f_1 = -1;
	unk.f_2.f_5 = 255;
	unk.f_11 = 3;
	unk.f_15 = -1;
	unk.f_15.f_1 = 10;
	unk.f_15.f_13 = 7;
	unk.f_15.f_21 = 2;
	unk.f_42.f_1 = 10;
	unk.f_42.f_1.f_1.f_1 = -1;
	unk.f_42.f_1.f_1.f_2 = -1;
	unk.f_42.f_1.f_1.f_3 = 7;
	unk.f_42.f_1.f_1.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_204.f_1 = -1;
	unk.f_204.f_2 = -1;
	unk.f_204.f_3 = -1;
	unk.f_204.f_3.f_1 = -1;
	unk.f_204.f_11 = 4;
	unk.f_204.f_36 = 32;
	unk.f_204.f_36.f_193 = 2147483647;
	unk.f_436.f_2 = -1;
	unk.f_436.f_3 = 14;
	unk.f_436.f_4 = 6;
	unk.f_436.f_5 = -1;
	unk.f_443 = 18;
	unk.f_443.f_19 = 18;
	unk.f_486 = 4;

	for (i = 0; i < 7; i = i + 1)
	{
		unk.f_15.f_13[i] = 255;
	}

	*uParam0 = { unk };
	func_763(&(uParam0->f_15));
	func_764(&(uParam0->f_42));
	return;
}

void func_443(Any anParam0) // Position - 0xC2D1 Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_765(&anParam0->[i /*38*/]);
	}

	return;
}

void func_444(Any anParam0) // Position - 0xC2F9 Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_766(&anParam0->[i /*30*/]);
	}

	return;
}

void func_445(int* piParam0) // Position - 0xC321 Hash - 0x86069A4B ^0x35382DB
{
	var unk;
	int i;

	unk = 10;
	unk.f_11 = 10;
	unk.f_22 = 10;
	*piParam0 = { unk };

	for (i = 0; i < 10; i = i + 1)
	{
		piParam0->f_11[i] = 0;
		piParam0->[i] = 0;
		piParam0->f_22[i] = 255;
	}

	return;
}

void func_446(Any anParam0) // Position - 0xC376 Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_767(&anParam0->[i /*6*/]);
	}

	return;
}

void func_447(Any anParam0) // Position - 0xC39E Hash - 0xD1960D27 ^0x24A7738A
{
	var unk;
	int i;

	unk.f_1 = 1;
	unk.f_2.f_1 = 1;
	unk.f_4 = 7;
	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		anParam0->[i /*12*/] = { unk };
	}

	return;
}

void func_448(int* piParam0) // Position - 0xC3E5 Hash - 0xB7F91E59 ^0xB7F91E59
{
	var unk;

	unk = 180;
	*piParam0 = { unk };
	return;
}

void func_449(Any anParam0) // Position - 0xC3FF Hash - 0x71AB7447 ^0x71AB7447
{
	var unk;
	int i;

	unk = -1;

	for (i = 0; i < 32; i = i + 1)
	{
		anParam0->[i /*2*/] = { unk };
	}

	return;
}

void func_450(Any anParam0) // Position - 0xC42D Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_768(&anParam0->[i]);
	}

	return;
}

void func_451(int* piParam0) // Position - 0xC455 Hash - 0xF3DC7C0B ^0x4845170
{
	var unk;

	unk = 32;
	unk.f_1.f_1 = -1;
	unk.f_1.f_2 = -1;
	unk.f_1.f_3 = -1;
	unk.f_1.f_3.f_1 = -1;
	unk.f_1.f_3.f_2 = -1;
	unk.f_1.f_3.f_3 = -1;
	unk.f_1.f_3.f_5 = -1;
	unk.f_1.f_3.f_5.f_1 = -1;
	unk.f_1.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_1 = -1;
	unk.f_1.f_16.f_2 = -1;
	unk.f_1.f_16.f_3 = -1;
	unk.f_1.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_513.f_2 = 5;
	unk.f_513.f_3 = 5;
	unk.f_513.f_3.f_1 = -1;
	unk.f_513.f_3.f_1.f_1 = -1;
	unk.f_513.f_3.f_1.f_2 = -1;
	unk.f_513.f_3.f_1.f_3 = 255;
	unk.f_513.f_3.f_1.f_4 = -1;
	unk.f_513.f_3.f_1.f_5 = -1;
	unk.f_513.f_3.f_1.f_6 = -1;
	unk.f_513.f_3.f_1.f_8 = 2;
	unk.f_513.f_3.f_1.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*piParam0 = { unk };
	return;
}

void func_452(int* piParam0) // Position - 0xCFC8 Hash - 0xCDEF5D36 ^0xCDEF5D36
{
	var unk;

	*piParam0 = { unk };
	return;
}

void func_453(int iParam0) // Position - 0xCFD8 Hash - 0x5B38FA11 ^0x821C75A0
{
	var unk;

	unk = -1;
	unk.f_1 = 32;
	unk.f_35 = 2;
	unk.f_38 = 3;
	unk.f_43 = 2;
	unk.f_49 = 3;
	*iParam0 = { unk };
	return;
}

void func_454(Any anParam0) // Position - 0xD01A Hash - 0x53293105 ^0x53293105
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_453(&anParam0->[i /*56*/]);
	}

	return;
}

void func_455(Any* panParam0) // Position - 0xD03F Hash - 0xCFFB7AAF ^0xC8FE1BF6
{
	var unk;

	unk = 2;
	unk.f_3 = 4;
	*panParam0 = { unk };
	return;
}

void func_456(Any anParam0) // Position - 0xD060 Hash - 0x53293105 ^0x53293105
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_455(&anParam0->[i /*8*/]);
	}

	return;
}

void func_457(int iParam0) // Position - 0xD085 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1107816.f_750 = iParam0;
	return;
}

void func_458() // Position - 0xD096 Hash - 0x45AAEB1F ^0xE77D1A
{
	Global_1107816.f_750.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return;
}

void func_459() // Position - 0xD0AB Hash - 0xF5429487 ^0x911ECCFB
{
	Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_49.f_4 = 1;
	return;
}

void func_460(int iParam0) // Position - 0xD0C2 Hash - 0x22CDC537 ^0x2ED81983
{
	Global_1110244.f_4607.f_2 = Global_1110244.f_4607.f_2 || iParam0;
	return;
}

void func_461(int* piParam0) // Position - 0xD0DF Hash - 0xC663DF0F ^0xE85199F
{
	var unk;

	unk = 32;
	unk.f_1 = -1;
	unk.f_1.f_2 = -1;
	unk.f_1.f_2.f_1 = -1;
	unk.f_1.f_2.f_1.f_1 = -1;
	unk.f_1.f_2.f_3 = -1;
	unk.f_1.f_6 = -1;
	unk.f_1.f_6.f_2 = -1;
	unk.f_1.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_193.f_2 = 5;
	unk.f_193.f_3 = 5;
	unk.f_193.f_3.f_1 = -1;
	unk.f_193.f_3.f_1.f_1 = -1;
	unk.f_193.f_3.f_1.f_2 = -1;
	unk.f_193.f_3.f_1.f_3 = 255;
	unk.f_193.f_3.f_1.f_4 = -1;
	unk.f_193.f_3.f_1.f_5 = -1;
	unk.f_193.f_3.f_1.f_6 = -1;
	unk.f_193.f_3.f_1.f_8 = 2;
	unk.f_193.f_3.f_1.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*piParam0 = { unk };
	return;
}

void func_462(Any anParam0) // Position - 0xD891 Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_769(&anParam0->[i /*8*/]);
	}

	return;
}

void func_463(int* piParam0) // Position - 0xD8B9 Hash - 0x4A91D73B ^0x8261AE16
{
	var unk;

	unk.f_3 = 3;
	unk.f_3.f_1 = -1;
	unk.f_3.f_1.f_3 = 255;
	unk.f_3.f_1.f_6 = -1;
	unk.f_3.f_1.f_6.f_3 = 255;
	unk.f_3.f_1.f_6.f_6 = -1;
	unk.f_3.f_1.f_6.f_6.f_3 = 255;
	unk.f_23 = 1;
	*piParam0 = { unk };
	return;
}

void func_464(BOOL bParam0) // Position - 0xD905 Hash - 0x76AD2C5F ^0x100D506B
{
	var unk;

	unk.f_1 = -1;
	*bParam0 = { unk };
	return;
}

void func_465(int iParam0) // Position - 0xD91E Hash - 0xF37C066C ^0x81ECA6D9
{
	var unk;

	unk.f_3.f_3 = -1;
	unk.f_3.f_3.f_1 = -1;
	unk.f_3.f_5 = 1;
	unk.f_3.f_6 = 7;
	unk.f_28 = -1;
	*iParam0 = { unk };
	return;
}

void func_466(Any anParam0) // Position - 0xD957 Hash - 0x7D3EE57A ^0x7D3EE57A
{
	int i;

	for (i = 0; i < *anParam0; i = i + 1)
	{
		func_464(&anParam0->[i /*2*/]);
	}

	return;
}

void func_467() // Position - 0xD97D Hash - 0xB32E3D0E ^0xB32E3D0E
{
	func_770(&Global_1220761);
	return;
}

void func_468(Any anParam0) // Position - 0xD98D Hash - 0xE9078634 ^0xE9078634
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_771(&anParam0->[i /*67*/]);
	}

	return;
}

void func_469(int iParam0) // Position - 0xD9B5 Hash - 0x5866CE71 ^0x89D2A153
{
	var src;

	src = -1;
	src.f_1 = -1;
	src.f_2 = -1;
	src.f_8 = -1082130432;
	MISC::COPY_SCRIPT_STRUCT(iParam0, &src, 9);
	return;
}

void func_470(Any anParam0) // Position - 0xD9E4 Hash - 0x53293105 ^0x53293105
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_469(&anParam0->[i /*9*/]);
	}

	return;
}

int func_471(int iParam0) // Position - 0xDA09 Hash - 0xE2DD0A52 ^0x7D9DDD04
{
	if (!func_686(iParam0))
		return -1;

	if (func_772(iParam0) >= 336)
		return 0;

	return 30 - func_773(iParam0) - 336;
}

BOOL func_472(int iParam0) // Position - 0xDA3C Hash - 0x6164076E ^0xE811B5EA
{
	int num;
	Hash hash;

	num = func_774(iParam0, 1);

	if (num == -1)
		return true;

	if (Global_1072759.f_19585.f_24 && !func_775(num))
		return true;

	switch (num)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
		case -2141419899:
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
		case -1939389836:
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
		case -1808329564:
		case -1753769127:
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
		case -1556041029:
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
		case -1387772214:
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
		case -1181950077:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
		case -1095341658:
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
		case -947815572:
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
		case -489737721:
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
		case -102827640:
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
		case 16844748:
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
		case 831940854:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
		case 943561238:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
		case 1248935549:
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
		case 1421300489:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			hash = func_780(num);
		
			if (hash != -1554566073)
				if (!func_778(hash, 1120403456, 1133084672))
					return false;
			else
				return BUILTIN::VDIST(Global_34, func_781(num)) > 100f;
			break;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			if (!func_778(joaat("mp001_reg_bgv0_mp_thehunt_clue01"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK")) && func_777(-763.5972f, -1263.0526f, 43.02452f, 100f))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			if (!func_778(joaat("mp004_campdef_radleys"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			if (!func_778(568096966, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			if (!func_778(406701199, 1120403456, 1133084672))
				return false;
			break;
	
		case -1608141409:
			if (!func_778(joaat("gang_lemoyne_scm010"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (func_777(347.239f, 1490.71f, 178.557f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			if (!func_778(967935536, 1120403456, 1133084672))
				return false;
			break;
	
		case -1344601768:
			if (!func_778(728379187, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			if (!func_778(joaat("mp001_mp_hid_rocky_seven"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			if (!func_778(-1974746920, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			if (!func_778(1171226610, 1120403456, 1133084672))
				return false;
			break;
	
		case -1209597203:
			if (!func_778(895825612, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_bluewater_marsh"):
			if (!func_778(joaat("mp004_campdef_bluewater"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK")) && func_777(-763.5972f, -1263.0526f, 43.02452f, 100f))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_gaptooth_ridge"):
			if (!func_778(joaat("mp004_campdef_gap_ridge"), 1120403456, 1133084672))
				return false;
			break;
	
		case -925071604:
			if (!func_778(joaat("gang_lemoyne_scm017"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			if (!func_778(joaat("mp001_min_hid_rattlesnakehollow"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			if (!func_778(1256749990, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			if (!func_778(-1226747327, 1120403456, 1133084672) || !func_778(-141795616, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_tall_trees"):
			if (!func_778(18369533, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			if (!func_778(-773956478, 1120403456, 1133084672))
				return false;
			break;
	
		case -812641169:
			if (!func_778(joaat("gang_lemoyne_scm003"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			if (!func_778(joaat("mp001_mp_intro_gang_rhodes4"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			if (!func_778(-1615749463, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			if (!func_778(joaat("mp001_mp_hid_fortriggs"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK")) && func_777(-1811.4957f, -352.16083f, 160.48477f, 100f))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_gaptooth_breach"):
			if (!func_778(joaat("mp004_campdef_gap_breach"), 1120403456, 1133084672))
				return false;
			break;
	
		case -554519756:
			if (!func_778(joaat("gang_lemoyne_scm005"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			if (!func_778(joaat("mp004_campdef_grt_plains"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			if (!func_778(joaat("mp001_mp_jessicacamp_blackwater"), 1120403456, 1133084672))
				return false;
			break;
	
		case -460024530:
			if (!func_778(1092530042, 1120403456, 1133084672))
				return false;
			break;
	
		case -396624371:
			if (!func_778(-361709910, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_hennigans_stead"):
			if (!func_778(joaat("mp004_campdef_hennigans"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			if (!func_778(joaat("mp001_min_hid_repentance"), 1120403456, 1133084672))
				return false;
			break;
	
		case -311373772:
			if (!func_778(joaat("gang_lemoyne_scm013"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK")) && func_777(-272.96442f, 810.0542f, 118.38353f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK")) && func_777(-272.96442f, 810.0542f, 118.38353f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			if (!func_778(joaat("mp001_mp_hid_farmhouse"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_COLTER"):
			if (!func_778(1975720265, 1120403456, 1133084672))
				return false;
			break;
	
		case 61537448:
			if (!func_778(joaat("gang_lemoyne_scm015"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_new_hanover"):
			if (!func_778(joaat("mp004_campdef_new_hanover"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			if (!func_778(joaat("mp001_mp_intro_gang_tumbleweed1"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			if (!func_778(joaat("dis_hrt_animaldig"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			if (!func_778(joaat("mp001_mp_jessicacamp_tumbleweed"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK")) && func_777(2499.0457f, -1307.856f, 47.95675f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			if (!func_778(joaat("mp004_campdef_heartlands"), 1120403456, 1133084672))
				return false;
			break;
	
		case 526003171:
			if (!func_778(-2074957003, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			if (!func_778(508578717, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK")) && func_777(2499.0457f, -1307.856f, 47.95675f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			if (!func_778(joaat("mp001_min_hid_gaptooth"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_two_rocks"):
			if (!func_778(joaat("mp004_campdef_bgv_two_rocks"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			if (!func_778(-522767301, 1120403456, 1133084672))
				return false;
			break;
	
		case 865557632:
			if (!func_778(joaat("gang_lemoyne_scm006"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_cholla_springs"):
			if (!func_778(-1207218596, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			if (!func_778(476687617, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			if (!func_778(-1323334072, 1120403456, 1133084672))
				return false;
			break;
	
		case 929582877:
			if (!func_778(joaat("mp001_min_hid_mantecafalls"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK")) && func_777(-1811.4957f, -352.16083f, 160.48477f, 100f))
				return false;
			break;
	
		case 1112996351:
			if (!func_778(joaat("gang_lemoyne_scm007"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			if (!func_778(joaat("mp001_mp_hid_talltrees"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			if (!func_778(joaat("mp001_mp_intro_gang_blackwater3"), 1120403456, 1133084672))
				return false;
			break;
	
		case 1195508693:
			if (!func_778(joaat("gang_lemoyne_scm019"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			if (!func_778(joaat("mp001_mp_hid_lakay"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_little_creek"):
			if (!func_778(joaat("mp004_campdef_little_creek"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			if (!func_778(joaat("mp001_mp_hid_beaverhollow"), 1120403456, 1133084672))
				return false;
			else if (func_779())
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			if (!func_778(-1151968796, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			if (!func_778(joaat("mp001_mp_jessicacamp_val"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_rio_bravo"):
			if (!func_778(-116967529, 1120403456, 1133084672))
				return false;
			break;
	
		case 1698972798:
			if (!func_778(joaat("mp001_mp_hid_mossyflats"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			if (!func_778(771896020, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			if (!func_778(joaat("mp001_mp_intro_gang_valentine2"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			if (!func_778(joaat("mp004_campdef_hrt_hilltop"), 1120403456, 1133084672))
				return false;
			break;
	
		case 1881028477:
			if (!func_778(-2103414139, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			if (!func_778(-848533860, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			if (!func_778(1883767827, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			if (!func_778(joaat("mp001_mp_jessicacamp_rhodes"), 1120403456, 1133084672))
				return false;
			break;
	}

	return true;
}

Hash func_473(int iParam0) // Position - 0xE992 Hash - 0x3D71560C ^0xB409A17A
{
	if (iParam0 == 255)
		iParam0 = func_191();

	if (iParam0 < 0 || iParam0 >= 32)
		return joaat("REL_NO_RELATIONSHIP");

	return func_782(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1295666.f_149[iParam0]));
}

Hash func_474() // Position - 0xE9D3 Hash - 0xDED80B4D ^0xFA5A2121
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

BOOL func_475(int iParam0) // Position - 0xE9E3 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

int func_476(int iParam0) // Position - 0xEA22 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_477(int iParam0) // Position - 0xEA2C Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_783(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1951910[iParam0 /*23*/].f_3);

	Global_1951910[iParam0 /*23*/].f_4 = 0;
	Global_1951910[iParam0 /*23*/] = 1;
	Global_1951910[iParam0 /*23*/].f_16 = 0;
	Global_1951910[iParam0 /*23*/].f_1 = 0;
	Global_1951910[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_9 = 0f;
	Global_1951910[iParam0 /*23*/].f_10 = 0;
	Global_1951910[iParam0 /*23*/].f_11 = 0;
	Global_1951910[iParam0 /*23*/].f_2 = 1;
	Global_1951910[iParam0 /*23*/].f_15 = -1f;
	return;
}

BOOL func_478(int iParam0) // Position - 0xEADF Hash - 0x50498403 ^0x8EA1BFF8
{
	if (iParam0 == 255)
		return Global_1102813.f_16;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return Global_1101558[iParam0 /*38*/].f_16;
}

BOOL func_479() // Position - 0xEB17 Hash - 0x2C6DE8F6 ^0xAB4AC7E1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

BOOL func_480() // Position - 0xEB33 Hash - 0x4228A1C2 ^0x52905D8B
{
	return Global_1900460.f_67;
}

BOOL func_481(int iParam0) // Position - 0xEB41 Hash - 0xBD15BF1C ^0xBD15BF1C
{
	return func_227(0, iParam0) || func_227(1, iParam0) || func_227(2, iParam0);
}

BOOL func_482(Player plParam0) // Position - 0xEB6A Hash - 0xBDFDE4E0 ^0x7F9F742C
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		plParam0 = PLAYER::PLAYER_ID();

	player = plParam0;

	if (func_340(plParam0) > 2)
		return 1;

	if (Global_263042[player /*65*/].f_1.f_11 != 0)
		return 1;

	if (Global_263042[player /*65*/].f_1 != 255)
		return 1;

	if (Global_263042[player /*65*/].f_1.f_13 != 2147483647)
		return 1;

	return 0;
}

int func_483() // Position - 0xEBD4 Hash - 0xC17B0E5B ^0x60380B73
{
	int num;
	int i;
	var unk;

	num = 0;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_11.f_12 = -1;
	unk.f_11.f_12.f_1 = -1;
	unk.f_11.f_14 = 255;
	unk.f_11.f_15 = 255;

	for (i = 0; i < Global_1072759.f_23; i = i + 1)
	{
		unk = { func_230(i) };
	
		if (!func_231(&unk))
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_484() // Position - 0xEC47 Hash - 0xA1DBD1D9 ^0xDE9D17B
{
	return Global_1572887.f_72.f_40;
}

BOOL func_485() // Position - 0xEC57 Hash - 0x68125E14 ^0x9778413E
{
	return Global_1051645.f_80.f_102 > 0;
}

BOOL func_486() // Position - 0xEC69 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_1142424.f_2042 > 0;
}

BOOL func_487() // Position - 0xEC7A Hash - 0x96106D3A ^0xF8AAF03
{
	int i;

	for (i = 0; i < Global_1148185; i = i + 1)
	{
		if (Global_1148185[i /*10*/].f_4 && !_IS_NULL_VECTOR(Global_1148185[i /*10*/]) && BUILTIN::VDIST(Global_1148185[i /*10*/], Global_34) <= 30f)
			return 1;
	}

	return 0;
}

BOOL func_488() // Position - 0xECDB Hash - 0x78E7FC2E ^0x327D9770
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1107816.f_33[i /*16*/] != 0)
			if (GANG::NETWORK_IS_GANG_IN_SESSION(Global_1107816.f_33[i /*16*/]))
				if (Global_1107816.f_33[i /*16*/] == Global_1295666.f_10)
					if (func_18(Global_1107816.f_33[i /*16*/].f_3.f_5))
						return 1;
	}

	return 0;
}

BOOL func_489() // Position - 0xED44 Hash - 0xC2ABD0AE ^0xC2ABD0AE
{
	return Global_1235687.f_9478 != -1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xED55 Hash - 0xA17D549C ^0xE6D0E7C1
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
	
		case 3:
			return "Proc";
	
		case 4:
			return "Fetch";
	
		case 5:
			return "Mini";
	
		case 6:
			return "FMA";
	
		case 7:
			return "UGC";
	
		case 8:
			return "Beat";
	
		default:
		
	}

	return "Unknown";
}

BOOL func_491() // Position - 0xEDC4 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_492(Hash hParam0) // Position - 0xEDE0 Hash - 0x68EEA5A8 ^0x68EEA5A8
{
	if (hParam0 <= 0 || hParam0 >= 10)
		return false;

	return true;
}

BOOL func_493(Hash hParam0) // Position - 0xEDFF Hash - 0xA3093881 ^0xA3093881
{
	if (hParam0 == 0)
		return false;

	return Global_1291943[hParam0] == hParam0;
}

BOOL func_494(var uParam0) // Position - 0xEE1C Hash - 0x871B9467 ^0x3F74E1F9
{
	if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_3))
		if (SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_3, false))
			return true;

	return false;
}

char* func_495(const char* sParam0) // Position - 0xEE40 Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

BOOL func_496(int iParam0, int iParam1, int iParam2) // Position - 0xEE4A Hash - 0x84CE151D ^0x84CE151D
{
	if (iParam2 < 0 || iParam2 >= 32)
		return false;

	return func_246(Global_1148618[iParam2 /*13*/][iParam0 /*4*/], iParam1);
}

int func_497(Player plParam0) // Position - 0xEE7A Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1138673[plParam0 /*56*/];
}

BOOL func_498(int iParam0) // Position - 0xEE8A Hash - 0xB95B8D72 ^0xB95B8D72
{
	return iParam0 >= 0 && iParam0 < 32;
}

struct<2> func_499(int iParam0) // Position - 0xEEA0 Hash - 0xB4ABE93A ^0xB25C7BF2
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_5;
}

const char* func_500(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xEEB8 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_501(Hash hParam0) // Position - 0xEECC Hash - 0x4D60F41E ^0xCD4529DF
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_784())
		return 0;

	STREAMING::REQUEST_IPL_HASH(hParam0);
	return 0;
}

int func_502(Hash hParam0) // Position - 0xEEF3 Hash - 0xC7B42F6B ^0x68D64A95
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_784())
		return 0;

	STREAMING::REMOVE_IPL_HASH(hParam0);
	return 0;
}

struct<4> func_503(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xEF1B Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_728(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_504(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_504(BOOL bParam0) // Position - 0xEF4C Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_60() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<17> func_505(var uParam0, BOOL bParam1) // Position - 0xEF8D Hash - 0x76921103 ^0xA9DF955B
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
		unk.f_15 = func_729(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_727() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_506(int iParam0, int iParam1) // Position - 0xF00E Hash - 0x5D65A4D7 ^0x7C5646CA
{
	Any gangId;

	if (!func_294() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_93(16))
		return false;

	if (func_26())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_785())
		return false;

	if (func_741(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_246(Global_1147183.f_8, 1))
		return false;

	if (func_786())
		return false;

	return true;
}

void func_507() // Position - 0xF0CE Hash - 0x4A56EA1C ^0xCB0E5F03
{
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
	return;
}

void func_508(int iParam0) // Position - 0xF0E5 Hash - 0x30E4961A ^0x49018482
{
	func_787(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
	return;
}

BOOL func_509(int iParam0) // Position - 0xF101 Hash - 0xBCBA7442 ^0x7662FC97
{
	Player player;
	int i;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == player)
			return Global_1141332[i /*27*/].f_1.f_1 == Global_1144526[iParam0 /*83*/].f_33.f_1;
	}

	return false;
}

void func_510() // Position - 0xF166 Hash - 0x1DC43AA6 ^0x12BAF2FE
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

BOOL func_511(int iParam0) // Position - 0xF1DC Hash - 0xA059D395 ^0xAFACF28D
{
	return func_246(Global_1147183.f_8, iParam0);
}

void func_512(int iParam0) // Position - 0xF1F0 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1142424.f_2019 = iParam0;
	return;
}

int func_513(var uParam0, var uParam1, var uParam2) // Position - 0xF201 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_788(uParam0, 0f, 0f, 0, 2);
	return func_788(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

BOOL func_514(int* piParam0, int iParam1, int iParam2) // Position - 0xF23C Hash - 0x8AC008A3 ^0x375BADC3
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

BOOL func_515(int* piParam0, int iParam1, int iParam2) // Position - 0xF26E Hash - 0xA8F08582 ^0x9810C45C
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

void func_516(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xF2A1 Hash - 0x79169E9C ^0xA3FE4569
{
	func_789(iParam0);

	if (!func_587(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_586(128) && !func_790(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_791() == 4)
		func_257(18);

	func_792(1024);
	return;
}

int func_517(int iParam0) // Position - 0xF303 Hash - 0x5078D77F ^0x5078D77F
{
	switch (iParam0)
	{
		case 0:
			return 9;
	
		case 1:
			return 10;
	
		case 2:
			return 11;
	
		case 3:
			return 12;
	
		case 4:
			return 13;
	
		default:
		
	}

	return -1;
}

int func_518(int iParam0, var uParam1) // Position - 0xF34B Hash - 0x737271FB ^0x72FE4025
{
	*uParam1 = iParam0;

	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.2848f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.5615f, -1372.1733f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.5818f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.0842f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.0048f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.7432f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1826.2151f, -433.9676f, 159.73857f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.884895f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 2946.4443f, 500.1154f, 45.539986f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.5474f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.2505f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.3945f, -2913.7637f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		default:
		
	}

	return 0;
}

int func_519(int iParam0) // Position - 0xF753 Hash - 0xB8EC44B7 ^0x241D648F
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

int func_520(int iParam0, int iParam1) // Position - 0x1013C Hash - 0xBEF58E44 ^0x9B835991
{
	var unk;
	var statId;

	statId = { func_656(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

BOOL func_521(int iParam0, int iParam1) // Position - 0x1015B Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_522(int iParam0) // Position - 0x10173 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_524(iParam0, 4))
		return false;

	return true;
}

BOOL func_523(int iParam0) // Position - 0x1018A Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_524(int iParam0, int iParam1) // Position - 0x10256 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_525(int iParam0) // Position - 0x1026F Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_526() // Position - 0x10282 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_26())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_527(int iParam0, int iParam1) // Position - 0x1029D Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_244(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_191())
		return func_244(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_244(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

void func_528(var uParam0) // Position - 0x10311 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_529(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x10323 Hash - 0x6DF4F0B2 ^0x7B946ED1
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

void func_530() // Position - 0x10350 Hash - 0xB233E26A ^0xE6258EBD
{
	func_793(-1687561002);
	func_793(1957225320);
	func_793(-860696938);
	func_793(-1971474291);
	func_793(-1425946870);
	func_793(-1114426126);
	func_793(-316909020);
	func_793(-1962893335);
	func_793(1351589798);
	func_793(300868838);
	func_793(-1788578071);
	func_793(1157066259);
	func_793(1475953931);
	func_793(2022451711);
	func_793(joaat("hso_p_camp_02"));
	func_793(-1177590512);
	func_793(-1611076340);
	func_794(joaat("vegmods_hso_pearson_wagon"));
	return;
}

void func_531() // Position - 0x103FA Hash - 0xB233E26A ^0x96352FCD
{
	func_793(1209017192);
	func_793(-2143243848);
	func_793(510052409);
	func_793(-644575724);
	func_793(291770965);
	func_793(1700661865);
	func_793(1070723367);
	func_793(1261237250);
	func_793(-109425099);
	func_793(1402472902);
	func_793(joaat("dewclm_p_camp_02"));
	func_793(-1458944281);
	func_793(2108368013);
	func_794(joaat("dewclm_p_camp_02"));
	func_794(joaat("cle_upg_campfire_rug_cow"));
	return;
}

void func_532() // Position - 0x10489 Hash - 0x7B8A0507 ^0x5F5A0DAA
{
	func_793(-1232260252);
	func_793(1404611977);
	func_793(-1395712024);
	return;
}

void func_533() // Position - 0x104AC Hash - 0xEA78F009 ^0x2DE9D98C
{
	func_793(joaat("shb_p_camp_02"));
	func_793(557551306);
	func_793(-412827149);
	func_794(joaat("dewclm_p_camp_02"));
	func_794(joaat("shb_p_camp_02"));
	return;
}

void func_534() // Position - 0x104E1 Hash - 0x9B238F53 ^0x47E32863
{
	func_793(531106429);
	func_793(1069611813);
	func_793(1102643191);
	func_793(44502487);
	func_793(-1869016398);
	func_793(806681228);
	func_793(1311984381);
	func_793(-1162254606);
	return;
}

BOOL func_535(int iParam0, int iParam1) // Position - 0x10531 Hash - 0xA10C37F5 ^0xA10C37F5
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
	
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}

	return true;
}

struct<8> func_536(int iParam0, int iParam1) // Position - 0x105A3 Hash - 0xE251EBAD ^0xDBFA8C07
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_795(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_nav_camp_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_796(iParam1), 64);
	return unk;
}

int func_537(int iParam0) // Position - 0x105CC Hash - 0x91EFC65E ^0x91EFC65E
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 45;
	
		case 1:
			return 76;
	
		case 2:
			return 104;
	
		case 3:
			return 9;
	
		case 4:
			return 63;
	
		case 5:
			return 4;
	
		case 6:
			return 84;
	
		case 7:
			return 22;
	
		case 8:
			return 39;
	
		default:
		
	}

	iParam0 != -1;
	return -1;
}

void func_538(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1064F Hash - 0xBD917892 ^0xBD917892
{
	int i;
	int j;

	for (i = 0; i < 27; i = i + 1)
	{
		for (j = 0; j < 6; j = j + 1)
		{
			func_797(iParam1, i, j, bParam2, bParam3);
		}
	}

	return;
}

void func_539(var uParam0, int iParam1) // Position - 0x1068A Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_540(var uParam0, int iParam1) // Position - 0x106C2 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_541(var uParam0, int iParam1) // Position - 0x106FB Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_542(var uParam0, int iParam1) // Position - 0x10736 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_546(*uParam0);
	num2 = func_545(*uParam0);

	if (iParam1 < 1 || iParam1 > func_551(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_543(var uParam0, int iParam1) // Position - 0x10789 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_544(var uParam0, int iParam1) // Position - 0x107C5 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

int func_545(int iParam0) // Position - 0x1084B Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_546(int iParam0) // Position - 0x10870 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_547(int iParam0) // Position - 0x10883 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_548(int iParam0) // Position - 0x10896 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_549(int iParam0) // Position - 0x108A9 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_550(int iParam0) // Position - 0x108BB Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_551(int iParam0, int iParam1) // Position - 0x108CD Hash - 0x893AC59E ^0x893AC59E
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

void func_552(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x10967 Hash - 0xA65AB937 ^0xA65AB937
{
	func_544(uParam0, iParam6);
	func_543(uParam0, iParam5);
	func_542(uParam0, iParam4);
	func_541(uParam0, iParam3);
	func_540(uParam0, iParam2);
	func_539(uParam0, iParam1);
	return;
}

void func_553(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1099F Hash - 0x3E8D6C14 ^0x3E8D6C14
{
	*uParam2 = func_545(iParam0) + func_546(iParam0) + func_547(iParam0);
	*uParam3 = iParam1;
	*uParam4 = func_547(iParam0);
	return;
}

void func_554(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5) // Position - 0x109CC Hash - 0xC50FB50 ^0xC50FB50
{
	int num;

	num = func_799(uParam3, uParam4, uParam5) % 6;

	if (0 == iParam1)
	{
		num = num % 3;
	}
	else
	{
		if (6 == iParam1)
			num = (num % 3) + 3;
	
		if (num == uParam0->[iParam1 - 1 /*11*/][iParam2])
		{
			num = (num + 1) % 6;
		
			if (6 == iParam1 && num < 3)
				num = 3;
		}
	}

	uParam0->[iParam1 /*11*/][iParam2] = num;
	return;
}

int func_555(int iParam0) // Position - 0x10A37 Hash - 0x20BBE585 ^0x84A606C2
{
	switch (iParam0)
	{
		case 0:
			return 262189671;
	
		case 1:
			return -1865796416;
	
		case 2:
			return -2102912900;
	
		case 3:
			return -1471781960;
	
		case 4:
			return -1711487195;
	
		case 5:
			return 1532840411;
	
		default:
		
	}

	return 262189671;
}

int func_556(int iParam0) // Position - 0x10AA0 Hash - 0x20BBE585 ^0x1F9FEDB1
{
	switch (iParam0)
	{
		case 0:
			return -1859451998;
	
		case 1:
			return 467802382;
	
		case 2:
			return 212892331;
	
		case 3:
			return -137539355;
	
		case 4:
			return -366824048;
	
		case 5:
			return -1952384882;
	
		default:
		
	}

	return -1859451998;
}

int func_557(int iParam0) // Position - 0x10B09 Hash - 0x20BBE585 ^0x84ED3FA5
{
	switch (iParam0)
	{
		case 0:
			return 1381272898;
	
		case 1:
			return 1539809320;
	
		case 2:
			return -2102137352;
	
		case 3:
			return 199098446;
	
		case 4:
			return 1462376165;
	
		case 5:
			return 1885620569;
	
		default:
		
	}

	return 1381272898;
}

int func_558(int iParam0) // Position - 0x10B72 Hash - 0x20BBE585 ^0xB6EE7ADF
{
	switch (iParam0)
	{
		case 0:
			return -1285238734;
	
		case 1:
			return -888012916;
	
		case 2:
			return -1211213567;
	
		case 3:
			return -1116052391;
	
		case 4:
			return 1314063884;
	
		case 5:
			return 1644572018;
	
		default:
		
	}

	return -1285238734;
}

int func_559(int iParam0) // Position - 0x10BDB Hash - 0x20BBE585 ^0xC4CF3B6A
{
	switch (iParam0)
	{
		case 0:
			return 1561655701;
	
		case 1:
			return 1218924734;
	
		case 2:
			return 1516368947;
	
		case 3:
			return 1984048115;
	
		case 4:
			return -2013016202;
	
		case 5:
			return -1745916083;
	
		default:
		
	}

	return 1561655701;
}

int func_560(int iParam0) // Position - 0x10C44 Hash - 0x20BBE585 ^0x67190263
{
	switch (iParam0)
	{
		case 0:
			return 40018245;
	
		case 1:
			return -1586372771;
	
		case 2:
			return -1356105008;
	
		case 3:
			return -1175547818;
	
		case 4:
			return -877579301;
	
		case 5:
			return 1138992134;
	
		default:
		
	}

	return 40018245;
}

int func_561(int iParam0) // Position - 0x10CAD Hash - 0x20BBE585 ^0x7A9E954E
{
	switch (iParam0)
	{
		case 0:
			return -158969429;
	
		case 1:
			return 147060262;
	
		case 2:
			return -486692198;
	
		case 3:
			return 886099519;
	
		case 4:
			return -1789128804;
	
		case 5:
			return -1617026016;
	
		default:
		
	}

	return -158969429;
}

int func_562(int iParam0) // Position - 0x10D16 Hash - 0x20BBE585 ^0x8F2621B5
{
	switch (iParam0)
	{
		case 0:
			return -1414390857;
	
		case 1:
			return -490927668;
	
		case 2:
			return 345304443;
	
		case 3:
			return -564887297;
	
		case 4:
			return 267084844;
	
		case 5:
			return 1120782832;
	
		default:
		
	}

	return -1414390857;
}

int func_563(int iParam0) // Position - 0x10D7F Hash - 0x20BBE585 ^0xD33D7F32
{
	switch (iParam0)
	{
		case 0:
			return -112719434;
	
		case 1:
			return 1796697427;
	
		case 2:
			return -1827848894;
	
		case 3:
			return 1960444124;
	
		case 4:
			return -1311048995;
	
		case 5:
			return -1542168752;
	
		default:
		
	}

	return -112719434;
}

int func_564(int iParam0) // Position - 0x10DE8 Hash - 0x20BBE585 ^0x597C8B95
{
	switch (iParam0)
	{
		case 0:
			return 346286482;
	
		case 1:
			return 82987567;
	
		case 2:
			return -145707284;
	
		case 3:
			return 1940236180;
	
		case 4:
			return 1558018564;
	
		case 5:
			return 1310186617;
	
		default:
		
	}

	return 346286482;
}

int func_565(Player plParam0, BOOL bParam1) // Position - 0x10E51 Hash - 0xDE20C6F0 ^0x6B00893C
{
	int num;
	int num2;
	int num3;
	Player player;

	num = BUILTIN::FLOOR(func_800(plParam0, bParam1));

	if (bParam1)
	{
		player = plParam0;
	
		if (player < 0 || player >= 32)
			num3 = 0;
		else
			num3 = BUILTIN::FLOOR(Global_1101558[player /*38*/].f_18);
	
		if (num3 > num)
			num2 = num3;
		else
			num2 = num;
	}
	else
	{
		num2 = num;
	}

	if (num2 < Global_1901671.f_740.f_31)
		return 0;

	if (num2 < Global_1901671.f_740.f_32)
		return 1;

	if (num2 < Global_1901671.f_740.f_33)
		return 2;

	if (num2 < Global_1901671.f_740.f_34)
		return 3;

	if (num2 < Global_1901671.f_740.f_35)
		return 4;

	if (num2 < Global_1901671.f_740.f_36)
		return 5;

	return 6;
}

int func_566() // Position - 0x10F1E Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_567() // Position - 0x10F2C Hash - 0x306ACA3A ^0x5D78E815
{
	return "unnamed";
}

BOOL func_568(int iParam0) // Position - 0x10F38 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_569(int iParam0) // Position - 0x10FC7 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_527(36, iParam0);
}

BOOL func_570(Player plParam0) // Position - 0x10FE5 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_801(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_802(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_571(var uParam0) // Position - 0x1102A Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

int func_572() // Position - 0x1103F Hash - 0xA1DBD1D9 ^0xCF2553AC
{
	return Global_1072759.f_23.f_2;
}

void func_573() // Position - 0x1104F Hash - 0xABBE1B7C ^0x3A74940B
{
	var unk;

	if (func_572() == -1)
		return;

	func_803(Global_1072759.f_23.f_2.f_1);
	unk = -1;
	Global_1072759.f_23.f_2 = { unk };
	return;
}

void func_574(int iParam0) // Position - 0x11085 Hash - 0x42868A8 ^0x4E2329D2
{
	Global_1072759.f_23.f_2 = iParam0;
	return;
}

void func_575(BOOL bParam0) // Position - 0x11097 Hash - 0x4AA352AD ^0x63EEDA34
{
	if (!Global_1072759.f_3)
		return;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (!func_61(Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0))
	{
		func_37(&Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0);
		Global_1051645.f_45.f_1 = 1;
	}

	return;
}

void func_576(BOOL bParam0) // Position - 0x110E4 Hash - 0xE58669C1 ^0x11EB80B6
{
	if (!Global_1072759.f_3)
		return;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (func_61(Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0))
	{
		func_59(&Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0);
		Global_1051645.f_45.f_1 = 1;
	}

	return;
}

int func_577(int iParam0) // Position - 0x11130 Hash - 0x22812BF9 ^0x1572DB53
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 60;
	
		case 2:
			return 300;
	
		case 4:
			return 600;
	
		case 8:
			return 1800;
	
		case 16:
			return 3600;
	
		case 32:
			return 7200;
	
		case 64:
			return 10800;
	
		case 128:
			return 14400;
	
		case 256:
			return 18000;
	
		case 512:
			return 21600;
	
		default:
		
	}

	return 0;
}

void func_578(BOOL bParam0, BOOL bParam1) // Position - 0x111C2 Hash - 0xB7D9A3CB ^0xCDAF217F
{
	if (func_61(Global_1051829.f_2, bParam0))
		return;

	func_37(&(Global_1051829.f_2), bParam0 || bParam1);
	return;
}

BOOL func_579(BOOL bParam0, Player plParam1) // Position - 0x111EB Hash - 0x28283238 ^0x1A4D4A94
{
	if (plParam1 == 255)
		plParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (plParam1 < 0 || plParam1 >= 32)
		return false;

	return Global_1295232[plParam1 /*2*/] && bParam0 != false;
}

void func_580(BOOL bParam0) // Position - 0x11223 Hash - 0xC6E41C9D ^0x6C5FDD7A
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	Global_1295232[num /*2*/] = Global_1295232[num /*2*/] || bParam0;
	return;
}

int func_581(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, int iParam11) // Position - 0x1124E Hash - 0x7D233416 ^0xA5F2EB21
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_804(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_805(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, iParam11);
		return num;
	}

	return 0;
}

BOOL func_582(int iParam0, BOOL bParam1) // Position - 0x112D7 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_475(iParam0))
		return false;

	num = func_476(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_583(BOOL bParam0) // Position - 0x113D1 Hash - 0x13E1F704 ^0x3B54FA2
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	Global_1295232[num /*2*/] = Global_1295232[num /*2*/] - Global_1295232[num /*2*/] && bParam0;
	return;
}

BOOL func_584(Player plParam0) // Position - 0x11405 Hash - 0x1A148EFF ^0x3EFEB944
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), plParam0))
		return false;

	return true;
}

void func_585(int iParam0) // Position - 0x11421 Hash - 0x29A8F290 ^0xBEB3FD43
{
	Global_1295299.f_29 = iParam0;
	return;
}

BOOL func_586(BOOL bParam0) // Position - 0x11431 Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_587(int iParam0) // Position - 0x11446 Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

void func_588() // Position - 0x1145B Hash - 0x7597B86A ^0x7597B86A
{
	int num;

	if (!func_806(2))
		return;

	if (func_807())
		return;

	if (func_346(0) != -1)
		return;

	num = func_346(1);

	if (num != -1 && !func_808(num))
	{
		func_809(2);
		func_349(joaat("HELP_TEXT_COOP_COOLDOWN_DONE"));
	}

	return;
}

void func_589() // Position - 0x114AD Hash - 0x1349526C ^0x3F77E5B6
{
	int num;

	if (!func_604(1209208750) && !func_604(1057717540))
		return;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	func_810(&num);

	if (num == -1)
	{
		func_598(1209208750);
		func_598(1057717540);
		func_601();
		return;
	}

	if (num.f_1 == -1)
	{
		func_598(1209208750);
		func_598(1057717540);
		func_601();
		return;
	}

	if (func_604(1209208750))
		if (!func_811(1209208750))
			func_598(1209208750);

	if (func_604(1057717540))
		if (!func_811(1057717540))
			func_598(1057717540);

	if (!func_604(1209208750) && !func_604(1057717540))
		func_601();

	return;
}

int func_590() // Position - 0x11591 Hash - 0x4228A1C2 ^0xECB8BF6D
{
	return Global_1296390.f_50;
}

var func_591() // Position - 0x1159F Hash - 0xA1DBD1D9 ^0x8C443CFF
{
	return Global_1296390.f_50.f_1;
}

BOOL func_592(int iParam0) // Position - 0x115AF Hash - 0x8D762076 ^0x83679673
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage == 0)
		return false;

	return currentMessage == iParam0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

int func_593(int iParam0) // Position - 0x115DA Hash - 0x9FCA14E7 ^0x9FCA14E7
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 16, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 43, iParam0, 0, 1))
		return 0;

	return func_812(&unk, 7);
}

int func_594() // Position - 0x11631 Hash - 0xA1DBD1D9 ^0xEC58BF4D
{
	return Global_1296390.f_50.f_2;
}

BOOL func_595() // Position - 0x11641 Hash - 0xC131FBEB ^0x955222E7
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

int func_596() // Position - 0x11661 Hash - 0xEE5AA853 ^0x93A0E772
{
	 Var0;
	int num;
	Hash hash;
	const char* str;
	int num2;
	var statId;
	int num3;

	num2 = -1;
	num2.f_1 = -1;
	num2.f_2 = -1;
	Var0 = func_813(func_590(), func_594());

	switch (func_590())
	{
		case 1057717540:
			func_810(&num2);
		
			if (num2.f_1 == -1)
				return 0;
		
			if (num2 == -1)
				return 0;
		
			num = func_814(func_630(num2, num2.f_1));
		
			if (num == -1)
				return 0;
		
			hash = func_815(num2, num2.f_1, joaat("Help"));
			str = MISC::VAR_STRING(8, Var0, MISC::VAR_STRING(0, func_816(hash, false)));
			break;
	
		case 1209208750:
			func_810(&num2);
		
			if (num2.f_1 == -1)
				return 0;
		
			if (num2 == -1)
				return 0;
		
			num = func_814(func_630(num2, num2.f_1));
		
			if (num == -1)
				return 0;
		
			hash = func_815(num2, num2.f_1, joaat("Help"));
			str = MISC::VAR_STRING(168, Var0, func_817(&(Global_265213.f_4[num /*46*/].f_7), joaat("COLOR_PURE_WHITE")), MISC::VAR_STRING(0, -494160487), MISC::VAR_STRING(0, func_816(hash, false)));
			break;
	
		default:
			str = MISC::VAR_STRING(0, Var0);
			break;
	}

	num3 = func_290(str, 10000, 0, 0, 0, true);

	if (num3 != 0)
	{
		switch (func_590())
		{
			case 1057717540:
				func_810(&num2);
				statId = { func_353(num2, num2.f_1, 2006315537, 1) };
				STATS::_STAT_ID_INCREMENT_INT(&statId, 1);
				break;
		}
	}

	return num3;
}

void func_597(int iParam0) // Position - 0x117D6 Hash - 0x42868A8 ^0xB74B0E35
{
	Global_1296390.f_50.f_1 = iParam0;
	return;
}

void func_598(int iParam0) // Position - 0x117E8 Hash - 0xE8BF7CF7 ^0x19BF1220
{
	func_514(&(Global_1296390.f_50.f_3), func_653(iParam0, 1), 1);
	return;
}

void func_599() // Position - 0x11805 Hash - 0x2FFF7C6F ^0xEA94C050
{
	var unk;

	Global_1296390.f_50 = unk;
	return;
}

void func_600(int iParam0) // Position - 0x11815 Hash - 0x42868A8 ^0xEE3D26F3
{
	Global_1296390.f_50.f_2 = iParam0;
	return;
}

void func_601() // Position - 0x11827 Hash - 0xF9B242E7 ^0x57CACC0F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	func_354(&unk);
	return;
}

int func_602(int iParam0) // Position - 0x11848 Hash - 0xC57D6AF8 ^0x894D72
{
	return Global_1296390.f_50.f_3[iParam0];
}

int func_603(int iParam0, int iParam1) // Position - 0x1185C Hash - 0x30C95D55 ^0x735B1ADB
{
	switch (iParam0)
	{
		case 0:
			return joaat("HELP_TEXT_WAIT_FOR_POSSE_LEADER");
	
		case 1:
			return joaat("HELP_TEXT_POST_COOP_MISSION_1");
	
		case 2:
			return joaat("HELP_TEXT_POST_COOP_MISSION_5");
	
		case 3:
			return joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM");
	
		case 4:
			return joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON");
	
		case 5:
			return joaat("HELP_TEXT_BLOCK_ACCEPT_POSSE_TOO_LARGE");
	
		case 6:
			return joaat("HELP_TEXT_COOP_COOLDOWN_DONE");
	
		case 7:
			return 1057717540;
	
		case 8:
			return 1209208750;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_604(int iParam0) // Position - 0x118F9 Hash - 0xDFAD290E ^0xC29EFECB
{
	return func_244(&(Global_1296390.f_50.f_3), func_653(iParam0, 1), 1);
}

void func_605(int iParam0) // Position - 0x11915 Hash - 0x29A8F290 ^0x4990D7A9
{
	Global_1296390.f_50 = iParam0;
	return;
}

int func_606() // Position - 0x11925 Hash - 0xC78C3990 ^0xC78C3990
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	return func_812(&unk, 0);
}

BOOL func_607(var uParam0) // Position - 0x11968 Hash - 0xCC493CB ^0xEC477C41
{
	int i;
	BOOL value;
	int bitShift;
	int num;
	int bitShift2;
	BOOL value2;
	int num2;

	bitShift2 = 32 - func_818();

	for (i = 5 - 1; i >= 0; i = i + -1)
	{
		num2 = i;
		bitShift = func_819(uParam0->f_3, num2, true);
	
		if (bitShift == -1)
		{
		}
		else
		{
			if (i != 5 - 1)
			{
				value = BUILTIN::SHIFT_LEFT(value, bitShift);
				num = num + bitShift;
			
				if (num > 32)
					return false;
			}
		
			value = value || func_820(uParam0->f_3, num2, uParam0);
		}
	}

	if (uParam0->f_3 == 0)
		return false;

	value2 = uParam0->f_3;
	value2 = BUILTIN::SHIFT_LEFT(value2, bitShift2);
	value = value || value2;
	return value;
}

int func_608(int iParam0) // Position - 0x11A01 Hash - 0x908F10F4 ^0x908F10F4
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 38, 0, 0, 0))
		return 0;

	return func_812(&unk, 8);
}

struct<4> func_609(int iParam0, int iParam1) // Position - 0x11A6C Hash - 0xD4BF3EFF ^0xD4BF3EFF
{
	var unk;
	var unk6;
	int num;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 38, 0, 0, 0))
		return unk6;

	if (!func_651(&unk, 39, iParam1, 0, 1))
		return unk6;

	num = func_821(&unk);
	return func_822(num);
}

void func_610(var uParam0, BOOL bParam1) // Position - 0x11B03 Hash - 0x62D002DA ^0x62D002DA
{
	int num;
	var unk;

	if (!func_823(uParam0, bParam1))
		return;

	num = func_824();

	if (num == -1)
		return;

	if (!func_825(*uParam0, &unk, 1, 255, 0, false))
		return;

	func_826(num, &unk, bParam1, uParam0->f_3);
	return;
}

void func_611(int iParam0, Any* panParam1) // Position - 0x11B4C Hash - 0x91FD8639 ^0xE4BA592F
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &Global_1296390.f_118[iParam0 /*6*/], 4);
	return;
}

BOOL func_612(Any anParam0) // Position - 0x11B65 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_613(int iParam0) // Position - 0x11BAB Hash - 0x908F10F4 ^0x908F10F4
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	return func_812(&unk, 1);
}

int func_614(int iParam0) // Position - 0x11C15 Hash - 0x908F10F4 ^0x908F10F4
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 31, 0, 0, 0))
		return 0;

	return func_812(&unk, 5);
}

BOOL func_615(int iParam0, int iParam1) // Position - 0x11C7F Hash - 0x7CCE0ED5 ^0x7CCE0ED5
{
	var unk;

	if (!func_650(&unk))
		return false;

	if (!func_651(&unk, 13, 0, 0, 1))
		return false;

	if (!func_651(&unk, 17, 0, 0, 1))
		return false;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return false;

	if (!func_651(&unk, 31, 0, 0, 1))
		return false;

	if (!func_651(&unk, 35, iParam1, 0, 0))
		return false;

	return true;
}

int func_616(int iParam0, int iParam1) // Position - 0x11CF7 Hash - 0x7CCE0ED5 ^0x7CCE0ED5
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 0))
		return 0;

	return func_812(&unk, 2);
}

BOOL func_617(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11D88 Hash - 0xFA15049F ^0xFA15049F
{
	var unk;
	var unk8;
	var unk13;
	int i;
	int num;

	if (!func_650(&unk8))
		return false;

	if (!func_651(&unk8, 13, 0, 0, 1))
		return false;

	if (!func_651(&unk8, 17, 0, 0, 1))
		return false;

	if (!func_651(&unk8, 19, iParam0, 0, 1))
		return false;

	if (!func_651(&unk8, 20, 0, 0, 1))
		return false;

	if (!func_651(&unk8, 23, iParam1, 0, 1))
		return false;

	if (!func_651(&unk8, 45, 0, 0, 0))
	{
		if (func_651(&unk8, 24, 0, 0, 0))
		{
			if (!func_651(&unk8, 25, iParam2, 0, 1))
				return false;
		
			if (!func_651(&unk8, 45, 0, 0, 1))
				return false;
		}
		else
		{
			return false;
		}
	}

	unk13 = unk8.f_1;
	num = func_812(&unk8, 9);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk8.f_1 = unk13;
	
		if (!func_651(&unk8, 46, i, 0, 1))
			return false;
	
		unk = { func_827(unk8) };
	
		if (!func_828(&unk, iParam3))
			return false;
	}

	return true;
}

void func_618(int iParam0, int iParam1, int iParam2) // Position - 0x11EA6 Hash - 0x6EC6EB5A ^0xC9C55141
{
	Global_1296390.f_83[iParam0 /*17*/].f_1[iParam1] = iParam2;
	return;
}

void func_619(int iParam0, int iParam1) // Position - 0x11EC0 Hash - 0x39E5F791 ^0x8F202FB2
{
	Global_1296390.f_83[iParam0 /*17*/] = iParam1;
	return;
}

void func_620(int iParam0) // Position - 0x11ED4 Hash - 0x42868A8 ^0xB68CB3C3
{
	Global_1296390.f_2.f_45 = iParam0;
	return;
}

void func_621(int iParam0, int iParam1) // Position - 0x11EE6 Hash - 0xCF7D517E ^0x4E4306EF
{
	Global_1296390.f_2[iParam0 /*22*/].f_16 = iParam1;
	return;
}

int func_622(int iParam0) // Position - 0x11EFC Hash - 0xC871A9CC ^0x1D8076C6
{
	var unk;

	if (!func_829(&unk, iParam0, joaat("COOLDOWN_DURATION")))
		return 0;

	return func_830(&unk);
}

void func_623(int iParam0, int iParam1) // Position - 0x11F1F Hash - 0xCF7D517E ^0x19C9B321
{
	Global_1296390.f_2[iParam0 /*22*/].f_17 = iParam1;
	return;
}

struct<2> func_624(int iParam0, int iParam1) // Position - 0x11F35 Hash - 0xFD668896 ^0xFD668896
{
	var unk;
	var unk6;
	int num;
	int num2;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 36, 0, 0, 0))
		return unk6;

	if (!func_651(&unk, 37, iParam1, 0, 0))
		return unk6;

	num = func_654(&unk);
	num2 = func_655(&unk);
	return func_656(num, num2);
}

void func_625(int iParam0, var uParam1, var uParam2) // Position - 0x11FD6 Hash - 0x5FA7A46E ^0x48DA38A2
{
	Global_1296390.f_2[iParam0 /*22*/].f_18 = { uParam1 };
	return;
}

BOOL func_626(int iParam0) // Position - 0x11FF0 Hash - 0x526C3C16 ^0x526C3C16
{
	return func_628(iParam0, 0) != 0;
}

void func_627(int iParam0, BOOL bParam1) // Position - 0x12001 Hash - 0xCF7D517E ^0x600A9D89
{
	Global_1296390.f_2[iParam0 /*22*/].f_20 = bParam1;
	return;
}

int func_628(int iParam0, int iParam1) // Position - 0x12017 Hash - 0x7CCE0ED5 ^0x7CCE0ED5
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	return func_831(&unk, iParam1);
}

void func_629(int iParam0, int iParam1) // Position - 0x1206F Hash - 0xCF7D517E ^0xB935164A
{
	Global_1296390.f_2[iParam0 /*22*/].f_21 = iParam1;
	return;
}

Hash func_630(int iParam0, int iParam1) // Position - 0x12085 Hash - 0x7CCE0ED5 ^0x7CCE0ED5
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	return func_832(&unk);
}

void func_631(int iParam0, int iParam1, Hash hParam2) // Position - 0x12102 Hash - 0x510D2CDE ^0x1E84F734
{
	Global_1296390.f_2[iParam0 /*22*/][iParam1] = hParam2;
	return;
}

int func_632() // Position - 0x1211A Hash - 0xA1DBD1D9 ^0xB70487D1
{
	return Global_1296390.f_2.f_45;
}

int func_633(int iParam0) // Position - 0x1212A Hash - 0x1B04F1B9 ^0x274CFF93
{
	return Global_1296390.f_2[iParam0 /*22*/].f_16;
}

void func_634() // Position - 0x1213E Hash - 0xE56E9EA2 ^0xE56E9EA2
{
	int i;
	int num;
	int j;
	int num2;
	Hash missionId;
	int num3;
	int num4;
	int num5;
	int rating;

	num = func_606();

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num3 = i;
		num2 = func_613(num3);
	
		for (j = 0; j <= num2 - 1; j = j + 1)
		{
			num4 = j;
			num5 = func_833(num3, num4);
		
			switch (num5)
			{
				case -1:
					rating = 0;
					break;
			
				case 0:
					rating = 0;
					break;
			
				case 15:
					rating = 5;
					break;
			
				default:
					switch (num5)
					{
						case 1:
							rating = 3;
							break;
					
						case 2:
							rating = 4;
							break;
					
						default:
							rating = 0;
							break;
					}
					break;
			}
		
			if (rating == 0)
			{
			}
			else
			{
				missionId = func_630(num3, num4);
				MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(missionId, rating);
			}
		}
	}

	return;
}

int func_635() // Position - 0x12200 Hash - 0x4228A1C2 ^0x453FDFA0
{
	return Global_1296390.f_48;
}

BOOL func_636(int iParam0) // Position - 0x1220E Hash - 0x1B04F1B9 ^0xF157842E
{
	return Global_1296390.f_2[iParam0 /*22*/].f_20;
}

int func_637() // Position - 0x12222 Hash - 0xA1DBD1D9 ^0xE3A76BD3
{
	return Global_1296390.f_48.f_1;
}

Hash func_638(int iParam0, int iParam1) // Position - 0x12232 Hash - 0xE2CBAAA9 ^0x99410DBF
{
	return Global_1296390.f_2[iParam0 /*22*/][iParam1];
}

int func_639(int iParam0) // Position - 0x12248 Hash - 0x74ACC26A ^0x4512AED0
{
	return Global_1296390.f_2[iParam0 /*22*/].f_17 * 60;
}

struct<2> func_640(int iParam0) // Position - 0x1225E Hash - 0x6A8249B9 ^0xFFD629B0
{
	return Global_1296390.f_2[iParam0 /*22*/].f_18;
}

int func_641(int iParam0) // Position - 0x12274 Hash - 0x6AA34421 ^0x958CDD88
{
	return Global_1296390.f_83[iParam0 /*17*/];
}

Hash func_642(int iParam0) // Position - 0x12286 Hash - 0x1B04F1B9 ^0x580BADD2
{
	return Global_1296390.f_2[iParam0 /*22*/].f_21;
}

void func_643(int iParam0) // Position - 0x1229A Hash - 0x42868A8 ^0xE1558962
{
	Global_1296390.f_48.f_1 = iParam0;
	return;
}

void func_644(int iParam0) // Position - 0x122AC Hash - 0x29A8F290 ^0x246DB031
{
	Global_1296390.f_48 = iParam0;
	return;
}

struct<6> func_645(BOOL bParam0) // Position - 0x122BC Hash - 0xE2766E44 ^0x27DA940F
{
	var unk;
	int i;
	int bitShift;
	BOOL value;
	int num;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_3 = func_834(bParam0);

	if (unk.f_3 == 0)
		return unk;

	value = bParam0;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		num = i;
		bitShift = func_819(unk.f_3, num, true);
	
		if (bitShift == -1)
		{
		}
		else
		{
			func_835(unk.f_3, num, &unk, value);
			value = BUILTIN::SHIFT_RIGHT(value, bitShift);
		}
	}

	return unk;
}

int func_646(int iParam0, int iParam1) // Position - 0x1234C Hash - 0x7CCE0ED5 ^0x7CCE0ED5
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	return func_836(&unk);
}

struct<2> func_647(Hash hParam0, int iParam1) // Position - 0x123C9 Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573), func_77(iParam1));
			break;
	
		case 3:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_602), func_77(iParam1));
			break;
	
		case 4:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_2104), func_77(iParam1));
			break;
	
		case 5:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_12606), func_77(iParam1));
			break;
	
		case 6:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_12908), func_77(iParam1));
			break;
	
		case 7:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_15910), func_77(iParam1));
			break;
	
		case 8:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_16512), func_77(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_838();

	return num;
}

void func_648(int iParam0, var uParam1) // Position - 0x124EF Hash - 0xD085827E ^0x75DE977B
{
	func_839(iParam0, uParam1->f_3.f_2);
	func_840(iParam0, uParam1->f_3.f_4);
	func_841(iParam0, uParam1->f_3.f_5);
	func_842(iParam0, uParam1->f_3);
	func_843(iParam0, uParam1->f_3.f_1);
	func_844(iParam0, *uParam1);
	func_845(iParam0, uParam1->f_2);
	func_846(iParam0, uParam1->f_9);
	return;
}

void func_649(BOOL bParam0) // Position - 0x1254F Hash - 0x8E8E8EBD ^0xF0A8F718
{
	int i;
	int num;
	var unk;
	var unk5;
	var unk11;
	var unk16;

	unk16 = -1;
	unk16.f_1 = -1;
	unk16.f_3 = -1;
	unk16.f_3.f_1 = -1;
	unk16.f_3.f_2 = -1;
	unk16.f_3.f_4 = -1;
	unk16.f_3.f_5 = -1;
	unk16.f_9 = -1;
	unk16.f_3 = { func_645(bParam0) };
	num = func_847(unk16.f_3, unk16.f_3.f_1, unk16.f_3.f_2);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk5 = { func_848(unk16, i) };
		func_849(&unk5, bParam0);
	}

	num = func_850(unk16.f_3, unk16.f_3.f_1, unk16.f_3.f_2);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk11 = { func_851(&unk16, i) };
		func_852(&unk11, bParam0);
	}

	num = func_853(unk16.f_3, unk16.f_3.f_1, unk16.f_3.f_2);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk = { func_854(unk16, i) };
		func_610(&unk, bParam0);
	}

	return;
}

BOOL func_650(Any* panParam0) // Position - 0x1265D Hash - 0x699E87E5 ^0x2F91F009
{
	int fileHandle;
	var src;

	fileHandle = Global_1072759.f_28418[29 /*4*/].f_3;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_651(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1269F Hash - 0xA342F830 ^0xBDC6E0EB
{
	var unk;

	unk = panParam0->f_1;
	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

struct<8> func_652(Any* panParam0, int iParam1, int iParam2) // Position - 0x126D8 Hash - 0x1E611575 ^0x844B49DF
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, panParam0);
	return unk;
}

int func_653(int iParam0, int iParam1) // Position - 0x126F7 Hash - 0x3077EE41 ^0x3077EE41
{
	switch (iParam0)
	{
		case joaat("HELP_TEXT_POST_COOP_MISSION_1"):
			return 1;
	
		case joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM"):
			return 3;
	
		case joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON"):
			return 4;
	
		case joaat("HELP_TEXT_POST_COOP_MISSION_5"):
			return 2;
	
		case joaat("HELP_TEXT_WAIT_FOR_POSSE_LEADER"):
			return 0;
	
		case joaat("HELP_TEXT_BLOCK_ACCEPT_POSSE_TOO_LARGE"):
			return 5;
	
		case joaat("HELP_TEXT_COOP_COOLDOWN_DONE"):
			return 6;
	
		case 1057717540:
			return 7;
	
		case 1209208750:
			return 8;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_654(Any* panParam0) // Position - 0x12773 Hash - 0xEA479EC ^0xEA479EC
{
	return func_855(panParam0, 77, 1);
}

int func_655(Any* panParam0) // Position - 0x12784 Hash - 0x8F656B4A ^0x8F656B4A
{
	return func_855(panParam0, 78, 1);
}

struct<2> func_656(int iParam0, int iParam1) // Position - 0x12795 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

struct<10> func_657(int iParam0) // Position - 0x127AB Hash - 0xD9E1B67B ^0x4E37172E
{
	var dst;

	dst = -1;
	dst.f_1 = -1;
	dst.f_3 = -1;
	dst.f_3.f_1 = -1;
	dst.f_3.f_2 = -1;
	dst.f_3.f_4 = -1;
	dst.f_3.f_5 = -1;
	dst.f_9 = -1;
	MISC::COPY_SCRIPT_STRUCT(&dst, &Global_1296390.f_58.f_4[iParam0 /*10*/], 10);
	return dst;
}

BOOL func_658(int iParam0) // Position - 0x12803 Hash - 0x7602256A ^0xFAC10F87
{
	return Global_1296390.f_58.f_1.f_2 && iParam0 != false;
}

void func_659(int iParam0) // Position - 0x1281A Hash - 0xC630F097 ^0x1CD9F8F5
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	func_648(iParam0, &unk);
	return;
}

void func_660() // Position - 0x12861 Hash - 0x7A7B15A5 ^0x5CD02123
{
	if (Global_1901671.f_1 == 0)
		return;

	Global_1901671.f_1 = 0;
	return;
}

var func_661() // Position - 0x1287D Hash - 0x4228A1C2 ^0xE93D75E0
{
	return Global_1110244.f_21;
}

int func_662(int iParam0) // Position - 0x1288B Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1110244[iParam0];
}

void func_663(int iParam0) // Position - 0x1289B Hash - 0x5F473EE4 ^0xC5AC6333
{
	if (Global_1110244.f_17)
		func_856(iParam0);
	else
		func_857(iParam0);

	return;
}

void func_664(int iParam0, int iParam1) // Position - 0x128BB Hash - 0x306BB537 ^0x857945B4
{
	BOOL flag;
	int num;

	if (iParam0 == -1)
		return;

	if (!func_858(iParam0, 1))
		return;

	flag = func_859();
	func_860(iParam0);

	if (iParam1 == -1)
	{
		num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;
	
		if (num > 1)
			num = 1;
	
		for (iParam1 = 0; iParam1 < num; iParam1 = iParam1 + 1)
		{
			func_861(iParam0, iParam1, flag);
		}
	}
	else
	{
		func_861(iParam0, iParam1, flag);
	}

	if (flag)
		func_862(iParam0);

	return;
}

void func_665() // Position - 0x1293B Hash - 0xCE32A1DA ^0x222465E2
{
	int sessionFlags;
	int num;
	int gangId;
	int i;
	Player player;
	int gangId2;

	if (!NETWORK::NETWORK_IS_HOST())
		return;

	if (Global_1140723.f_44)
	{
		sessionFlags = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
		num = 9;
		gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	
		if (sessionFlags && num != false && !func_863())
		{
			for (i = 0; i <= 31; i = i + 1)
			{
				player = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (player == PLAYER::PLAYER_ID() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(player) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player))
				{
				}
				else
				{
					gangId2 = GANG::NETWORK_GET_GANG_ID(player);
				
					if (gangId2 != gangId || gangId2 == 0 && gangId == 0)
					{
						func_864();
						return;
					}
				}
			}
		}
	}

	return;
}

BOOL func_666() // Position - 0x129EB Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_865();
}

void func_667(var uParam0, var uParam1) // Position - 0x129F7 Hash - 0x1EFD718A ^0xE92AD62F
{
	int num;
	var unk;

	if (*uParam0 == 0)
		return;

	*uParam1 = *uParam1 + 1;

	if (*uParam1 >= *uParam0)
		*uParam1 = 0;

	num = (uParam0->f_1 + *uParam1) % uParam0->f_2;
	unk = -1;
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

	if (uParam0->f_3[num /*40*/].f_2 != -1)
	{
		unk = { func_866(&(Global_1207480.f_28), uParam0->f_3[num /*40*/]) };
		func_867(unk, uParam0, &uParam0->f_3[num /*40*/]);
	}

	return;
}

void func_668(int iParam0) // Position - 0x12B09 Hash - 0xC8D91F29 ^0xC6F5FC72
{
	int gangId;
	var unk;
	int num;

	gangId = func_868(iParam0);

	if (gangId == 0)
		return;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(gangId))
	{
		unk = -1;
		unk.f_1 = -1;
		unk.f_3 = -1;
		unk.f_4 = -1;
		unk.f_5 = -1;
		unk.f_6 = -1;
		unk.f_6.f_1 = -1;
		unk.f_9 = 2;
		unk = { func_499(iParam0) };
	
		if (func_18(unk))
		{
			num = func_869(&unk);
		
			if (num != func_870(iParam0))
				if (func_871(num))
					func_872(iParam0, num);
		}
	
		func_873(iParam0);
	}

	return;
}

void func_669(int iParam0) // Position - 0x12BA0 Hash - 0x93A4CA81 ^0xE1A61A3D
{
	Player player;
	int num;
	int i;
	int num2;
	int gangId;
	int gangId2;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	num = func_874(player, -1);
	gangId = GANG::NETWORK_GET_GANG_ID(player);

	if (func_498(num))
		if (func_868(num) == gangId)
			return;

	num2 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		gangId2 = func_868(i);
	
		if (func_875(i) != -1)
		{
		}
		else
		{
			if (gangId2 == 0)
			{
				num2 = i;
				break;
			}
		
			if (!GANG::NETWORK_IS_GANG_IN_SESSION(gangId2))
			{
				num2 = i;
				break;
			}
		
			if (gangId2 == gangId)
				return;
		}
	}

	if (num2 == -1)
		return;

	func_876(num2, gangId);
	return;
}

void func_670(int iParam0) // Position - 0x12C49 Hash - 0x8C085FCB ^0x8C085FCB
{
	var unk;
	BOOL flag;

	switch (func_875(iParam0))
	{
		case -1:
			flag = func_877(iParam0, &unk);
			break;
	
		case 0:
			flag = func_878(iParam0, &unk);
			break;
	
		case 1:
			flag = func_879(iParam0, &unk);
			break;
	
		case 2:
			flag = func_880(iParam0, &unk);
			break;
	
		case 3:
			flag = func_881(iParam0, &unk);
			break;
	
		case 4:
			flag = func_882(iParam0, &unk);
			break;
	
		case 5:
			flag = func_883(iParam0, &unk);
			break;
	
		case 6:
			flag = func_884(iParam0, &unk);
			break;
	
		case 7:
			flag = func_885(iParam0, &unk);
			break;
	
		case 8:
			flag = func_887(iParam0, &unk);
			break;
	
		case 9:
			flag = func_886(iParam0, &unk);
			break;
	
		default:
			break;
	}

	if (flag)
		func_889(iParam0, unk, func_888(iParam0));

	return;
}

void func_671() // Position - 0x12D44 Hash - 0x7A1A5EDB ^0x7A1A5EDB
{
	func_890(3, (func_662(3) + 1) % 32);
	func_890(0, (func_662(0) + 1) % 32);
	return;
}

void func_672() // Position - 0x12D6A Hash - 0x5CA44044 ^0xDB18CAEF
{
	int num;
	var unk;
	var unk14;

	num = func_874(PLAYER::PLAYER_ID(), -1);

	if (!func_498(num))
		return;

	unk = { func_891(num) };

	if (!func_892(unk.f_5, unk.f_3))
		return;

	unk14 = -1;
	unk14.f_1 = -1;
	unk14.f_3 = -1;
	unk14 = { unk.f_5 };

	if (func_18(unk.f_5))
	{
		unk14.f_3 = unk.f_3;
		unk14.f_2 = func_19(unk.f_5);
	}
	else
	{
		unk14.f_3 = -1;
		unk14.f_2 = 0;
	}

	func_893(&unk14);
	return;
}

void func_673() // Position - 0x12DFF Hash - 0x7761E2CD ^0x960CB14D
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();
	flag3 = func_894(player, 1);
	flag4 = func_894(player, 2);
	flag = func_894(player, 4);
	flag2 = func_894(player, 8);
	flag5 = func_894(player, 32);
	flag6 = func_18(func_895()) && !func_18(func_896());
	flag8 = func_897() == 1;
	flag7 = func_898() >= 24 || func_898() == 0;

	if (func_899() != GANG::NETWORK_GET_GANG_ID(player) && func_900() == 4 || flag5 && !func_901(255))
	{
		if (flag5)
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				CAM::DO_SCREEN_FADE_IN(2000);
	
		func_902();
		return;
	}

	if (flag5)
	{
		if (func_903() == 0 && !flag || flag2)
		{
			if (CAM::IS_SCREEN_FADED_IN() && !func_901(255))
			{
				func_904(4);
				func_904(8);
				func_904(32);
				func_905(0);
				func_906(func_838());
			}
		}
	}

	if (func_907() == -1 && !flag6 && flag8 && flag7 || !flag8)
	{
		if (flag3)
			func_902();
	
		return;
	}

	num = func_874(player, -1);

	if (!func_498(num))
		return;

	if (!flag6 && flag8 && flag7 || !flag8 && func_899() != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) && flag4 && !flag && func_900() != 2)
	{
		func_902();
		return;
	}

	if (!flag3)
		return;

	if (!flag6 && func_900() != 4)
		if (func_907() != 4)
			return;

	if (!flag4)
	{
		switch (func_907())
		{
			case 4:
				!AUDIO::_IS_ANY_CONVERSATION_PLAYING(false);
				break;
		
			default:
				func_908(2);
				break;
		}
	
		return;
	}

	if (!flag2)
		return;

	func_902();
	return;
}

void func_674() // Position - 0x1300D Hash - 0xC7C417CC ^0xC7C417CC
{
	int num;

	num = func_662(4);

	if (func_909(num))
		func_910(num);
	else
		func_911(num);

	return;
}

void func_675() // Position - 0x13034 Hash - 0x1E1E04F0 ^0x1E1E04F0
{
	int num;
	int num2;

	num = func_662(5);
	num2 = num;

	if (func_912(num2))
		func_913(num2);
	else
		func_914(num2);

	return;
}

void func_676() // Position - 0x1305F Hash - 0x4D5EF12B ^0x4D5EF12B
{
	if (func_915(255))
		func_916(1);
	else
		func_916(2);

	return;
}

void func_677() // Position - 0x1307D Hash - 0x94D3B131 ^0x55F14481
{
	Player gangLeader;
	int gameTimer;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	if (!func_917(gangLeader, 1024))
		return;

	if (func_18(func_895()))
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (func_918(131072))
		if (gameTimer - func_919() < Global_1901671.f_319.f_40)
			return;

	func_920(gangLeader);
	func_921(gameTimer);
	func_922(131072);
	return;
}

void func_678() // Position - 0x13106 Hash - 0xE0F63BD3 ^0xB939A4EE
{
	int num;
	var unk;

	if (!func_923())
		return;

	if (GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) != func_924())
	{
		func_925();
		return;
	}

	num = func_926(func_924());

	if (num == -1)
		return;

	if (!func_927(num))
		return;

	if (func_875(num) != 0)
		return;

	if (!func_929(func_928(), func_499(num)) && func_18(func_499(num)))
	{
		func_925();
		return;
	}

	if (func_930(num, 2))
	{
		func_925();
		return;
	}

	unk.f_1 = -1;
	func_931(&unk);
	func_936(func_932(), func_933(), func_934(), func_935(), func_928(), unk, 1);
	func_925();
	return;
}

void func_679() // Position - 0x131C5 Hash - 0x7A41680B ^0xB9EDE261
{
	var unk;
	Player gangLeader;

	unk = 3;
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_937(gangLeader, &unk);
	
		if (unk.f_4)
			func_938(&unk);
	}

	if (func_939(2))
	{
		func_940(&unk);
		func_941(&unk);
		func_942(2);
	}

	return;
}

void func_680() // Position - 0x1322A Hash - 0x574D6BC6 ^0xC867EB0F
{
	var unk;
	Player gangLeader;

	unk = 2;
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_943(gangLeader, &unk);
	
		if (unk.f_3)
			func_944(&unk);
	}

	if (func_939(4))
	{
		func_945(&unk);
		func_946(&unk);
		func_942(4);
	}

	return;
}

void func_681() // Position - 0x1328F Hash - 0x8A77DE09 ^0xBFBBBAD9
{
	var unk;
	var unk6;
	int i;
	int j;

	unk = 3;
	unk6 = 3;

	if (PLAYER::PLAYER_ID() == Global_1102813.f_3674)
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1102813.f_3675[i]))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1102813.f_3675[i]))
			{
			}
			else
			{
				func_947(Global_1102813.f_3675[i], &unk6);
			
				if (!unk6.f_4)
				{
				}
				else
				{
					for (j = 0; j <= 2; j = j + 1)
					{
						unk[j] = unk[j] || unk6[j];
					}
				}
			}
		}
	
		unk.f_4 = 1;
	}

	func_948(&unk);
	return;
}

void func_682() // Position - 0x1333D Hash - 0x12C2BF2E ^0x1443E100
{
	int num;
	int i;
	BOOL flag;
	Player player;

	num = func_662(6);
	player = PLAYER::PLAYER_ID();

	for (i = 0; i <= 3; i = i + 1)
	{
		if (num == func_949(i))
		{
			if (func_950(i) != 0)
				flag = true;
		}
		else
		{
		}
	}

	if (!flag)
	{
		if (func_951(player, num))
		{
			func_952(num);
			return;
		}
	}

	return;
}

int func_683() // Position - 0x1339C Hash - 0x95C6ADE9 ^0x85910829
{
	if (!func_953())
		return 0;

	Global_1203952.f_399.f_4 = 0;
	return 1;
}

void func_684() // Position - 0x133BB Hash - 0x96AFF85C ^0x96AFF85C
{
	func_890(1, (func_662(1) + 1) % 32);
	func_890(2, (func_662(2) + 1) % 32);
	func_890(4, (func_662(4) + 1) % 36);
	func_890(5, (func_662(5) + 1) % 104);
	func_890(6, (func_662(6) + 1) % 62);
	return;
}

void func_685() // Position - 0x1340E Hash - 0xBDEB204E ^0xBDEB204E
{
	Global_1939596 = 3;
	Global_1939596.f_289 = 1;
	return;
}

BOOL func_686(int iParam0) // Position - 0x13423 Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_773(iParam0);

	if (num < 336)
		return false;

	return true;
}

void func_687(int iParam0, var uParam1) // Position - 0x13440 Hash - 0xDFDCC705 ^0x29551CBB
{
	int num;
	int i;
	Player player;

	num = Global_1072759.f_19585.f_20;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_11(player) != 9)
		{
		}
		else
		{
			Global_1072759.f_19585.f_19 = Global_1072759.f_19585.f_19 || Global_1056554[i /*491*/].f_443[iParam0];
			Global_1072759.f_19585.f_20 = Global_1072759.f_19585.f_20 && Global_1056554[i /*491*/].f_443.f_19[iParam0];
		}
	}

	func_954(iParam0);

	if (Global_1072759.f_19585.f_19 == Global_1072759.f_19585[iParam0] && num == Global_1072759.f_19585.f_20)
		*uParam1 = 1;
	else
		Global_1072759.f_19585.f_23 = 1;

	return;
}

void func_688(int iParam0, int iParam1) // Position - 0x13511 Hash - 0x2E296BF8 ^0xD6F8DE14
{
	BOOL flag;
	int i;
	int offset;
	int num;

	for (i = 0; i <= 31; i = i + 1)
	{
		offset = Global_1072759.f_19585.f_22 + i;
	
		if (offset > 31)
		{
			flag = true;
			break;
		}
	
		if (MISC::IS_BIT_SET(Global_1056554[iParam0 /*491*/].f_443[iParam1], offset))
		{
			MISC::CLEAR_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
		}
		else if (!MISC::IS_BIT_SET(Global_1072759.f_19585[iParam1], offset))
		{
			MISC::SET_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
		}
		else
		{
			num = (iParam1 * 31) + offset;
		
			if (num > 544)
			{
				flag = true;
				break;
			}
		
			if (func_472(num))
				MISC::SET_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
			else
				MISC::CLEAR_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
		}
	}

	Global_1072759.f_19585.f_22 = offset + 1;

	if (flag || offset == 31)
	{
		if (Global_1072759.f_19585.f_20 != Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1])
			Global_1072759.f_19585.f_20 = Global_1072759.f_19585.f_20 && Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1];
	
		Global_1072759.f_19585.f_23 = 2;
	}

	return;
}

BOOL func_689(BOOL bParam0, int iParam1) // Position - 0x13668 Hash - 0x3B8D2168 ^0x4C23CD8B
{
	var address;
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (MISC::IS_BIT_SET(bParam0, i))
			MISC::SET_BIT(&address, i);
		else if (!MISC::IS_BIT_SET(iParam1, i))
			MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_690(int iParam0) // Position - 0x136AF Hash - 0x1D686BE7 ^0x2CC3BF74
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
		return false;

	return true;
}

BOOL func_691(int iParam0) // Position - 0x136D1 Hash - 0x83C2A288 ^0x83C2A288
{
	int num;

	num = iParam0;
	return num >= 0 && num < 64;
}

int func_692(var uParam0, var uParam1) // Position - 0x136EB Hash - 0x2B1F0751 ^0xFAA335B4
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

	if (!func_78(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_78(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_693(int iParam0) // Position - 0x13792 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

struct<2> func_694(int iParam0) // Position - 0x137B1 Hash - 0xB40CEF65 ^0x4D71D9AE
{
	if (!func_955(iParam0))
		return func_838();

	return Global_1835011[iParam0 /*72*/].f_1;
}

int func_695(var uParam0, var uParam1) // Position - 0x137D6 Hash - 0x3BE504D9 ^0x3BE504D9
{
	int i;

	if (Global_1900530 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1900530 - 1; i = i + 1)
	{
		if (func_929(Global_1900531[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_696(int iParam0, int iParam1, int iParam2) // Position - 0x1381F Hash - 0xF23FC0C8 ^0xA8769202
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Vector3 vector;

	if (func_525(32768))
		return 0;

	num = func_60();

	if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 512) && !func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		if (func_957())
			return 0;

	if (Global_1835011[iParam0 /*72*/].f_67)
		return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		flag3 = Global_1835011[iParam0 /*72*/].f_66;
	
		if (func_958(iParam0, num))
		{
			vector = { func_959(iParam0) };
			Global_1835011[iParam0 /*72*/].f_65 = VOLUME::CREATE_VOLUME_SPHERE(vector, 0f, 0f, 0f, 19f, 19f, 19f);
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1835011[iParam0 /*72*/].f_65))
				Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_VOLUME(joaat("BLIP_STYLE_MISSION"), Global_1835011[iParam0 /*72*/].f_65);
		}
		else if (flag3)
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_960(iParam0));
		}
		else
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_961(iParam0));
		}
	
		Global_1835011[iParam0 /*72*/].f_29 = joaat("BLIP_STYLE_MISSION");
		flag = true;
	
		if (iParam2 != -1)
			if (flag2)
				func_962(iParam2, 4194304);
			else
				func_699(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*72*/].f_28, 72, Global_1835011[iParam0 /*72*/].f_3);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
		return 0;

	func_963(iParam0);

	if (flag)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*72*/].f_28, Global_1835011[iParam0 /*72*/].f_27, true);
	
		if (num != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[iParam0 /*72*/].f_28, &(Global_1835011[iParam0 /*72*/].f_42));
	
		if (!func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_964(&(Global_1835011[iParam0 /*72*/].f_30), 1024);
		}
	
		if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 524288))
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_OBJECTIVE"));
	
		if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1048576))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_FORCE_GPS"));
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
	}

	return 1;
}

BOOL func_697(int iParam0, int iParam1) // Position - 0x13A8F Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_693(iParam0) && Global_1900562[iParam0 /*2*/].f_1 && iParam1 != false;
}

void func_698(var uParam0, var uParam1) // Position - 0x13AB1 Hash - 0xEDDB2A63 ^0xEDDB2A63
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 <= 0)
		return;

	if (!func_18(uParam0))
		return;

	if (func_965(uParam0))
		func_966(uParam0, false, -1, 0, false);

	num = func_695(uParam0);

	if (num < 0)
		return;

	num2 = num;

	if (Global_1900530 > 1)
	{
		Global_1900531[num2 /*2*/] = { Global_1900531[Global_1900530 - 1 /*2*/] };
		Global_1900562[num2 /*2*/] = { Global_1900562[Global_1900530 - 1 /*2*/] };
		func_293(&Global_1900531[Global_1900530 - 1 /*2*/]);
		Global_1900562[Global_1900530 - 1 /*2*/] = { unk };
	}
	else
	{
		func_293(&Global_1900531[num2 /*2*/]);
		Global_1900562[num2 /*2*/] = { unk };
	}

	Global_1900530 = Global_1900530 - 1;

	if (Global_1900530 < 0)
		Global_1900530 = 0;

	return;
}

void func_699(int iParam0, int iParam1) // Position - 0x13B8F Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_693(iParam0))
		return;

	Global_1900562[iParam0 /*2*/].f_1 = Global_1900562[iParam0 /*2*/].f_1 - Global_1900562[iParam0 /*2*/].f_1 && iParam1;
	return;
}

BOOL func_700(var uParam0, var uParam1) // Position - 0x13BC6 Hash - 0x1D4F04C9 ^0x1D4F04C9
{
	return func_372(uParam0) == 0;
}

void func_701(var uParam0, var uParam1, BOOL bParam2) // Position - 0x13BD8 Hash - 0xB3DEB41D ^0xB3DEB41D
{
	if (!func_18(uParam0))
		return;

	if (!func_700(uParam0))
		return;

	if (bParam2)
		func_967(uParam0);

	func_968(uParam0, 1);
	bParam2 = bParam2;
	return;
}

int func_702() // Position - 0x13C18 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1295849.f_537.f_1;
}

void func_703() // Position - 0x13C29 Hash - 0xCA3B7737 ^0xED60591
{
	int i;
	int num;
	int num2;

	if (!func_969())
		return;

	if (!func_970())
		return;

	for (i = 0; i <= 31; i = i + 1)
	{
		num = BUILTIN::SHIFT_LEFT(1, i);
		num2 = num;
	
		if (!func_971(num2))
		{
		}
		else if (!func_972(num2))
		{
		}
		else
		{
			func_973(num2);
			break;
		}
	}

	return;
}

Blip func_704() // Position - 0x13C8A Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1295849.f_537.f_2;
}

void func_705(Blip blParam0) // Position - 0x13C9B Hash - 0xC421D95B ^0x56CEE285
{
	Global_1295849.f_537.f_2 = blParam0;
	return;
}

void func_706(int iParam0) // Position - 0x13CAE Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1295849.f_537.f_1 = iParam0;
	return;
}

Player func_707() // Position - 0x13CC1 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3674;
}

int func_708() // Position - 0x13CD0 Hash - 0x8190E5D8 ^0xE7A7AFC8
{
	return Global_1295849.f_492.f_3;
}

Hash func_709(int iParam0, int iParam1) // Position - 0x13CE1 Hash - 0x6B0810CC ^0x6B0810CC
{
	return Global_1295849[iParam0 /*37*/][iParam1];
}

int func_710(int iParam0, int iParam1) // Position - 0x13CF5 Hash - 0x5F264DA7 ^0x59C2B7F8
{
	return Global_1295849[iParam0 /*37*/].f_3[iParam1];
}

Hash func_711(int iParam0) // Position - 0x13D0B Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1295849.f_482[iParam0];
}

void func_712(int iParam0) // Position - 0x13D1E Hash - 0x6914223B ^0xAEAE9123
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_1 = iParam0;
	func_607(&unk);
	return;
}

void func_713(int iParam0) // Position - 0x13D4A Hash - 0x6914223B ^0xAD6EA163
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_4 = iParam0;
	func_607(&unk);
	return;
}

void func_714(int iParam0) // Position - 0x13D76 Hash - 0x6914223B ^0x68A6664E
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_2 = iParam0;
	func_607(&unk);
	return;
}

void func_715(int iParam0) // Position - 0x13DA2 Hash - 0x6914223B ^0x7126FFD6
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_5 = iParam0;
	func_607(&unk);
	return;
}

var func_716(Player plParam0) // Position - 0x13DCE Hash - 0x930ADDC9 ^0xFD5EDF81
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_1;
}

void func_717(var uParam0) // Position - 0x13DEF Hash - 0xC421D95B ^0x56CEE285
{
	Global_1295849.f_492.f_2 = uParam0;
	return;
}

var func_718(Player plParam0) // Position - 0x13E02 Hash - 0x930ADDC9 ^0x859E6B29
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_4;
}

void func_719(var uParam0) // Position - 0x13E23 Hash - 0xC421D95B ^0xE72F24A4
{
	Global_1295849.f_492.f_3 = uParam0;
	return;
}

var func_720(Player plParam0) // Position - 0x13E36 Hash - 0x930ADDC9 ^0x212CF586
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_2;
}

void func_721(var uParam0) // Position - 0x13E57 Hash - 0xC421D95B ^0x2F16990E
{
	Global_1295849.f_492.f_4 = uParam0;
	return;
}

var func_722(Player plParam0) // Position - 0x13E6A Hash - 0x930ADDC9 ^0x6492445E
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_5;
}

void func_723(var uParam0) // Position - 0x13E8B Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1295849.f_492.f_5 = uParam0;
	return;
}

void func_724(int iParam0) // Position - 0x13E9E Hash - 0xF983FBAA ^0xBA86423C
{
	func_98(&(Global_1072759.f_28644.f_8.f_1), iParam0);
	return;
}

void func_725(int iParam0) // Position - 0x13EB7 Hash - 0x6002C9BC ^0x65CE3FF0
{
	if (func_974(iParam0))
		func_787(&(Global_1072759.f_28644.f_8.f_1), iParam0);

	return;
}

void func_726(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, Hash hParam6) // Position - 0x13ED9 Hash - 0xC6B85CA9 ^0xFDB1962
{
	Hash hashOfThisScriptName;

	if (Global_1051194)
		return;

	Global_1051194.f_2 = iParam0;
	Global_1051194.f_3 = iParam1;
	Global_1051194.f_4 = iParam2;
	Global_1051194.f_6 = iParam3;
	Global_1051194.f_5 = iParam4;

	if (!bParam5)
		hashOfThisScriptName = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	else
		hashOfThisScriptName = hParam6;

	Global_1051194.f_1 = hashOfThisScriptName;
	Global_1051194 = true;
	return;
}

struct<4> func_727() // Position - 0x13F33 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_728(Hash hParam0, int iParam1) // Position - 0x13F3F Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_729(Hash hParam0, Hash hParam1) // Position - 0x13F59 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_976(func_975(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_730(int iParam0) // Position - 0x13F85 Hash - 0xEDE8ECF3 ^0xEDE8ECF3
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

Hash func_731(int iParam0) // Position - 0x13FA4 Hash - 0xC3A4C269 ^0xC3A4C269
{
	if (!func_730(iParam0))
		return 0;

	return Global_1292143.f_2986[iParam0];
}

Hash func_732(int iParam0, BOOL bParam1) // Position - 0x13FC5 Hash - 0xAE8B7FA5 ^0xAE8B7FA5
{
	Hash hash;
	Hash xp;

	if (!func_730(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_977(iParam0);
	
		if (func_728(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_978(255);
			else
				xp = func_400(hash, func_399(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_3024[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		hash = func_979(iParam0);
	
		if (func_728(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_400(hash, func_399(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_2986[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_733(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x14084 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

void func_734(int iParam0, int iParam1, int iParam2) // Position - 0x140B5 Hash - 0x979CB0CE ^0x6BCD0423
{
	Global_1295849.f_522[iParam0 /*7*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

void func_735(int iParam0, int iParam1, int iParam2) // Position - 0x140D0 Hash - 0x2B63783F ^0x2B63783F
{
	Global_1295849.f_522[iParam0 /*7*/][iParam1 /*3*/] = iParam2;
	return;
}

void func_736(int iParam0, int iParam1, int iParam2) // Position - 0x140E9 Hash - 0x979CB0CE ^0x5BC9AADF
{
	Global_1295849.f_522[iParam0 /*7*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

Hash func_737() // Position - 0x14104 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1940252.f_11605;
}

int func_738(Hash hParam0) // Position - 0x14113 Hash - 0xC765AA15 ^0x4A8005DD
{
	int i;

	for (i = 0; i < 64; i = i + 1)
	{
		if (hParam0 == Global_265213.f_107995.f_13575[i])
			return i;
	}

	return -1;
}

BOOL func_739() // Position - 0x14149 Hash - 0x2AEF46B6 ^0x7B27BAED
{
	Hash outData;
	var unk3;
	int num;

	num = func_738(func_737());
	!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(Global_265213.f_107995.f_14228[num], 0, &outData);
	unk3 = { func_980(outData, true) };

	if (func_981(outData, false, true, false) > 0 && func_982(unk3) - Global_1295666.f_16 > 0)
		return true;

	return false;
}

BOOL func_740(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x141AA Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_983(hParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_741(int iParam0) // Position - 0x141DA Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_742(Player plParam0, int iParam1) // Position - 0x141FB Hash - 0x2AB8C6B6 ^0xC4BE9FAE
{
	return Global_1101558[plParam0 /*38*/].f_36.f_1 && iParam1 != false;
}

float func_743(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x14214 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_744() // Position - 0x14232 Hash - 0x22FB54B8 ^0x22FB54B8
{
	return 100f;
}

void func_745(int iParam0, int iParam1) // Position - 0x1423F Hash - 0x9DC90D4D ^0xC19463B7
{
	Global_1300387.f_155.f_4[iParam0 /*4*/] = iParam1;
	return;
}

void func_746(int iParam0, int iParam1) // Position - 0x14255 Hash - 0xC17A19F5 ^0xA7C32AA6
{
	Global_1300387.f_155.f_4[iParam0 /*4*/].f_3 = iParam1;
	return;
}

void func_747(int iParam0) // Position - 0x1426D Hash - 0xE95A09CB ^0xE95A09CB
{
	func_984(iParam0);
	func_985(iParam0);
	func_746(iParam0, 0);
	return;
}

void func_748(Player plParam0) // Position - 0x14288 Hash - 0xA59C02F4 ^0x24A39C38
{
	Hash i;
	Player player;
	int num;
	Hash entityModel;
	Ped playerPed;
	var unk;

	unk = -1;
	unk.f_9 = -1082130432;
	func_986(plParam0);
	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
	num = func_987(entityModel);
	player = plParam0;

	if (func_988() <= 0)
	{
		if (func_989(1))
		{
			GRAPHICS::DISABLE_ENTITYMASK();
			func_990(1);
		}
	
		if (func_989(2))
		{
			for (i = 0; i <= num - 1; i = i + 1)
			{
				if (func_991(player, i))
				{
				}
				else if (!func_992(entityModel, i, &unk))
				{
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_STOP(&(unk.f_1));
				}
			}
		
			func_990(2);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(playerPed))
		GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(playerPed);

	return;
}

int func_749(Player plParam0) // Position - 0x14334 Hash - 0x7647021A ^0x84857E63
{
	return Global_1101558[plParam0 /*38*/].f_36;
}

int func_750(int iParam0) // Position - 0x14346 Hash - 0xA67D24A0 ^0xD0F4C38C
{
	return Global_1300387.f_155.f_4[iParam0 /*4*/].f_3;
}

int func_751() // Position - 0x1435C Hash - 0x729E933 ^0x8666B1E3
{
	return 3000;
}

int func_752(int iParam0, int iParam1, int iParam2) // Position - 0x14367 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

float func_753(float fParam0, float fParam1, float fParam2) // Position - 0x1438C Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

float func_754(float fParam0, float fParam1, float fParam2) // Position - 0x143B3 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

void func_755(Player plParam0, int iParam1) // Position - 0x143C8 Hash - 0x45796AC7 ^0x1870452D
{
	Hash i;
	Player player;
	int num;
	Hash entityModel;
	Ped playerPed;
	var effectName;

	effectName.f_26 = -1;
	effectName.f_27 = -1082130432;
	effectName.f_28 = -1;
	effectName.f_29 = -1;
	effectName.f_30 = -1;
	effectName.f_31 = -1;
	effectName.f_32 = -1;
	player = plParam0;
	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
	num = func_993(entityModel);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (func_994(player, i))
		{
		}
		else if (!func_995(entityModel, i, &effectName))
		{
		}
		else
		{
			if (effectName.f_33 & 64 != 0)
			{
				if (iParam1 > effectName.f_32)
				{
				}
				else
				{
					STREAMING::REQUEST_NAMED_PTFX_ASSET(effectName.f_16);
				
					if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(effectName.f_16))
					{
					}
					else
					{
						GRAPHICS::USE_PARTICLE_FX_ASSET(&(effectName.f_8));
					
						if (effectName.f_33 & 8 != 0)
							GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(BUILTIN::TO_FLOAT(effectName.f_28), BUILTIN::TO_FLOAT(effectName.f_30), BUILTIN::TO_FLOAT(effectName.f_29));
					
						if (effectName.f_33 & 16 != 0)
							GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(BUILTIN::TO_FLOAT(effectName.f_31));
					
						if (effectName.f_33 & 32 != 0)
							GRAPHICS::_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(effectName.f_23);
					
						GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(&effectName, playerPed, effectName.f_17, effectName.f_20, effectName.f_26, effectName.f_27, effectName.f_33 & 1 != 0, effectName.f_33 & 2 != 0, effectName.f_33 & 4 != 0);
						func_996(player, i);
					}
				}
			}
		
			STREAMING::REQUEST_NAMED_PTFX_ASSET(effectName.f_16);
		
			if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(effectName.f_16))
			{
			}
			else
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(&(effectName.f_8));
			
				if (effectName.f_33 & 8 != 0)
					GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(BUILTIN::TO_FLOAT(effectName.f_28), BUILTIN::TO_FLOAT(effectName.f_30), BUILTIN::TO_FLOAT(effectName.f_29));
			
				if (effectName.f_33 & 16 != 0)
					GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(BUILTIN::TO_FLOAT(effectName.f_31));
			
				if (effectName.f_33 & 32 != 0)
					GRAPHICS::_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(effectName.f_23);
			
				GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(&effectName, playerPed, effectName.f_17, effectName.f_20, effectName.f_26, effectName.f_27, effectName.f_33 & 1 != 0, effectName.f_33 & 2 != 0, effectName.f_33 & 4 != 0);
				func_996(player, i);
			}
		}
	}

	return;
}

void func_756(Player plParam0) // Position - 0x14517 Hash - 0x3692349A ^0x5202A945
{
	Hash i;
	Player player;
	int num;
	Hash entityModel;
	Ped playerPed;
	int mask;

	mask = -1;
	mask.f_9 = -1082130432;
	func_997(plParam0);

	if (!func_989(1))
	{
		GRAPHICS::ENABLE_ENTITYMASK();
		func_998(1);
	}

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
	num = func_987(entityModel);
	player = plParam0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (func_991(player, i))
		{
		}
		else if (!func_992(entityModel, i, &mask))
		{
		}
		else
		{
			GRAPHICS::ANIMPOSTFX_PLAY(&(mask.f_1));
			GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY(playerPed, mask, mask.f_9);
			func_999(player, i);
			func_998(2);
		}
	}

	return;
}

void func_757(Player plParam0, int* piParam1, int iParam2) // Position - 0x145B9 Hash - 0x56665EAE ^0x219EDAE9
{
	float num;
	var unk3;

	if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1220826.f_1099[plParam0 /*3*/]) || Global_1220826.f_1099[plParam0 /*3*/].f_1 != piParam1 || Global_1220826.f_1099[plParam0 /*3*/].f_2 != iParam2)
	{
		func_435(plParam0);
		num = { Global_1220826.f_48[piParam1 /*21*/][iParam2 /*4*/].f_1 };
		unk3 = { 2f, 2f, 2f };
		Global_1220826.f_1099[plParam0 /*3*/] = PED::ADD_SCENARIO_BLOCKING_AREA(num - unk3, num.f_1 - unk3.f_1, num.f_2 - unk3.f_2, num + unk3, num.f_1 + unk3.f_1, num.f_2 + unk3.f_2, false, 16);
		Global_1220826.f_1099[plParam0 /*3*/].f_1 = piParam1;
		Global_1220826.f_1099[plParam0 /*3*/].f_2 = iParam2;
	}

	return;
}

BOOL func_758(Player plParam0, int iParam1) // Position - 0x14681 Hash - 0x98C31982 ^0xEFC58C46
{
	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	if (Global_1295232[plParam0 /*2*/].f_1 != iParam1)
		return false;

	if (!func_579(true, plParam0))
		return false;

	if (!func_579(8, plParam0))
		return false;

	if (!func_579(4, plParam0))
		return false;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), plParam0))
		return false;

	return true;
}

BOOL func_759(int* piParam0, int iParam1) // Position - 0x146F4 Hash - 0xD4062234 ^0x6F18FDE1
{
	Player i;
	var unk;

	if (Global_1295205.f_22 >= 3)
		return false;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&piParam0, i))
		{
		}
		else if (!func_758(i, iParam1))
		{
			SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&piParam0, i);
		}
	}

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&piParam0))
		return true;

	func_1000(&Global_1295205.f_3[Global_1295205.f_22 /*6*/]);
	Global_1295205.f_3[Global_1295205.f_22 /*6*/] = iParam1;
	Global_1295205.f_3[Global_1295205.f_22 /*6*/].f_2 = piParam0;
	SCRIPTS::_0xFFDDF802279BE128(&(Global_1295205.f_2), &(Global_1295205.f_3[Global_1295205.f_22 /*6*/].f_2), &unk);
	Global_1295205.f_2 = unk;
	Global_1295205.f_22 = Global_1295205.f_22 + 1;
	return true;
}

void func_760(int iParam0, int iParam1) // Position - 0x147B5 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	iParam0->f_1 = iParam1;
	return;
}

void func_761(int iParam0, Player plParam1, Player plParam2) // Position - 0x147C3 Hash - 0xBE3C6A01 ^0x8C178DCF
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1295205.f_2), plParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(iParam0->f_2), plParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(iParam0->f_4), plParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(iParam0->f_5), plParam2);

	if (iParam0->f_3 == plParam1)
		iParam0->f_3 = 255;

	return;
}

void func_762(int iParam0) // Position - 0x14804 Hash - 0xD1E7BC25 ^0xF871A8A4
{
	int blockOfPlayerBits;
	int blockOfPlayerBits2;
	int blockOfPlayerBits3;
	int blockOfPlayerBits4;

	if (iParam0 < 0 || iParam0 >= 3)
		return;

	if (Global_1295205.f_22 <= 0)
		return;

	blockOfPlayerBits = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 0);
	blockOfPlayerBits2 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 1);
	blockOfPlayerBits3 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_3[iParam0 /*6*/].f_2), 0);
	blockOfPlayerBits4 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_3[iParam0 /*6*/].f_2), 1);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 0, blockOfPlayerBits - blockOfPlayerBits3);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 1, blockOfPlayerBits2 - blockOfPlayerBits4);
	Global_1295205.f_22 = Global_1295205.f_22 - 1;
	Global_1295205.f_3[iParam0 /*6*/] = { Global_1295205.f_3[Global_1295205.f_22 /*6*/] };
	func_1000(&Global_1295205.f_3[Global_1295205.f_22 /*6*/]);
	return;
}

void func_763(var uParam0) // Position - 0x148C9 Hash - 0x4882C255 ^0x99BD0D69
{
	var unk;
	int i;

	unk = -1;
	unk.f_1 = 10;
	unk.f_13 = 7;
	unk.f_21 = 2;
	*uParam0 = { unk };

	for (i = 0; i <= 6; i = i + 1)
	{
		uParam0->f_13[i] = 255;
	}

	return;
}

void func_764(var uParam0) // Position - 0x14911 Hash - 0xAB798457 ^0xEF187362
{
	var unk;
	int i;
	int j;

	unk.f_1 = 10;
	unk.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_2 = -1;
	unk.f_1.f_1.f_3 = 7;
	unk.f_1.f_1.f_11 = 2;
	unk.f_1.f_1.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	*uParam0 = { unk };

	for (j = 0; j < 10; j = j + 1)
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			uParam0->f_1[j /*16*/].f_3[i] = 255;
		}
	}

	return;
}

void func_765(var uParam0) // Position - 0x14A6A Hash - 0xBFB1A7EF ^0x4E7BD403
{
	var unk;

	unk.f_4 = 5;
	unk.f_19 = 255;
	*uParam0 = { unk };
	return;
}

void func_766(var uParam0) // Position - 0x14A8E Hash - 0x25759D70 ^0x5BB44B89
{
	var unk;

	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_5 = 4;
	unk.f_5.f_1.f_1 = -1;
	unk.f_5.f_1.f_3.f_1 = -1;
	unk.f_5.f_1.f_3.f_3.f_1 = -1;
	unk.f_5.f_1.f_3.f_3.f_3.f_1 = -1;
	*uParam0 = { unk };
	return;
}

void func_767(var uParam0) // Position - 0x14ADD Hash - 0xDD3D4259 ^0x525E5B3B
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = 255;
	*uParam0 = { unk };
	return;
}

void func_768(var uParam0) // Position - 0x14AFD Hash - 0xC8446C5 ^0xC8446C5
{
	var unk;

	*uParam0 = unk;
	return;
}

void func_769(var uParam0) // Position - 0x14B0A Hash - 0x884A9D12 ^0xB8E83984
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_2.f_1 = -1;
	unk.f_2.f_1.f_1 = -1;
	unk.f_2.f_3 = -1;
	unk.f_6 = -1;
	*uParam0 = { unk };
	return;
}

void func_770(Any anParam0) // Position - 0x14B4B Hash - 0x64EF9177 ^0x1D53E350
{
	var unk;
	int i;

	unk = -1;
	unk.f_1 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		anParam0->[i /*2*/] = { unk };
	}

	return;
}

void func_771(var uParam0) // Position - 0x14B7F Hash - 0x256161C5 ^0x950D9B38
{
	var unk;

	unk = 32;
	unk.f_1 = 255;
	unk.f_1.f_2 = 255;
	unk.f_1.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	*uParam0 = { unk };
	return;
}

int func_772(int iParam0) // Position - 0x14C7D Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

int func_773(int iParam0) // Position - 0x14C89 Hash - 0x3620388 ^0x3620388
{
	return func_772(iParam0) + 30;
}

int func_774(int iParam0, int iParam1) // Position - 0x14C99 Hash - 0xEF886020 ^0x33F0D9E7
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return 0;
	
		case 2:
			return 473295046;
	
		case 3:
			return -1738165526;
	
		case 4:
			return -699277634;
	
		case 5:
			return 1497516462;
	
		case 6:
			return 2016141805;
	
		case 7:
			return 1010885152;
	
		case 8:
			return -502324015;
	
		case 9:
			return 1607768502;
	
		case 10:
			return -1852605133;
	
		case 11:
			return -129643890;
	
		case 12:
			return -1433686245;
	
		case 13:
			return -1711895055;
	
		case 14:
			return 192515737;
	
		case 15:
			return 426191476;
	
		case 16:
			return 187862543;
	
		case 17:
			return 417081698;
	
		case 18:
			return 791041526;
	
		case 19:
			return 965986934;
	
		case 20:
			return 1350371763;
	
		case 21:
			return -1257057567;
	
		case 22:
			return -1419919497;
	
		case 23:
			return -1718674470;
	
		case 24:
			return -35658630;
	
		case 25:
			return -2069570138;
	
		case 26:
			return -1838712533;
	
		case 27:
			return 1140218954;
	
		case 28:
			return -108307814;
	
		case 29:
			return -1123615607;
	
		case 30:
			return -261141318;
	
		case 31:
			return 440043364;
	
		case 32:
			return -1425209566;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_775(int iParam0) // Position - 0x16A7C Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

BOOL func_776(int iParam0) // Position - 0x16A93 Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_1001(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_686(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_775(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

BOOL func_777(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x16B12 Hash - 0xBF20CE6 ^0x9D356A93
{
	return BUILTIN::VDIST(Global_34, fParam0) < fParam3;
}

BOOL func_778(Hash hParam0, int iParam1, int iParam2) // Position - 0x16B2A Hash - 0x3A030522 ^0x229B4D5B
{
	Vector3 position;
	float radius;
	float num;

	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return true;

	if (!STREAMING::_GET_IPL_BOUNDING_SPHERE(hParam0, &position, &radius))
		return false;

	num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), position);

	if (num <= iParam1)
		return false;

	if (num > iParam2)
		return true;

	if (CAM::IS_SPHERE_VISIBLE(position, radius))
		return false;

	return true;
}

BOOL func_779() // Position - 0x16B8F Hash - 0xF6E201AC ^0x30BD5B4C
{
	Interior interiorFromEntity;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33);
	
		if (interiorFromEntity != 0 && INTERIOR::_GET_INTERIOR_MINIMAP_HASH(interiorFromEntity) == joaat("bea_01_int"))
			return true;
	}

	return false;
}

Hash func_780(int iParam0) // Position - 0x16BD4 Hash - 0xB8EC44B7 ^0xA80CB9D4
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 696753474;
	
		case -2141419899:
			return 87946549;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 1106131202;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 806606916;
	
		case -1939389836:
			return 1916363327;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return -270131786;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 1657354548;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 1497923922;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return -199228359;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 879263546;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return -590242693;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return -1954638951;
	
		case -1808329564:
			return -864071044;
	
		case -1753769127:
			return -1423344014;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 474786474;
	
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return -894288155;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 2001473838;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 1303507358;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return -476328287;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return -394475958;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return -1939338394;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 908136834;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 1364667248;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return -1871896679;
	
		case -1556041029:
			return -751879320;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return -387074757;
	
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 54505570;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return -2144326250;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 1277031798;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 2137579614;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 1307857318;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 1812712970;
	
		case -1387772214:
			return 42616763;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return -1815797865;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return -860360254;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 1673216541;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return -378666035;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return -657334314;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return -583431154;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 120604643;
	
		case -1181950077:
			return -1862782800;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return -1279448947;
	
		case -1095341658:
			return -948864541;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 2127497940;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return -1818498296;
	
		case -947815572:
			return 1437809535;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return -216811017;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return -1819679999;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 1551178888;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 30280292;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return -1643311717;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 999671710;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 1199250380;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return -1645569664;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 834697453;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return -25254585;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return -1431123016;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 1303859698;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return -1428524966;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return -1211924901;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return -1754697240;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return -2122265662;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return -1774606389;
	
		case -489737721:
			return 1748373207;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 1419259602;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return -1058872649;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 2088585697;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 242017654;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 405359977;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return -1765524972;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return -536919806;
	
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 584821987;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return -510114122;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return -313167137;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 120283199;
	
		case -102827640:
			return -736226816;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 1216579993;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 11141848;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return -519371139;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return -14824697;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return -2001856298;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 1991561012;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return -2025289364;
	
		case 16844748:
			return 104172940;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 1292550073;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return -1244697162;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return -1353663029;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 1857676106;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return -46828581;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 568859874;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return -284530484;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 574916087;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 1951742298;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return -1508001532;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 1673463331;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 1628921491;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return -233702408;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 536560689;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 1098358070;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 1117275649;
	
		case 831940854:
			return -2054468361;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return -946682429;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return -1858229297;
	
		case 943561238:
			return 1532789536;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 1665904081;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return -1279389329;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 743168245;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return -1623539657;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 67603480;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return -1448418975;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 492662035;
	
		case 1248935549:
			return 815958096;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 1793712122;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 1108419054;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return -1051551519;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 353008762;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return -1358954864;
	
		case 1421300489:
			return 1083754485;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return -847027479;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return -2145807603;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return -680105331;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 616635225;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 1283630779;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return -973153750;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return -2143372379;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 1093030199;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 1779169712;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return -252982535;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return -409479737;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 1425800019;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 1096335200;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 1803637785;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 1510796294;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 131702782;
	
		default:
		
	}

	return -1554566073;
}

Vector3 func_781(int iParam0) // Position - 0x1733C Hash - 0xF6858EF6 ^0xF6858EF6
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return -329.744f, -151.659f, 50.562f;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return -1519.495f, 740.865f, 124.87f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_782(int iParam0) // Position - 0x1737F Hash - 0xB8EC44B7 ^0xBB161953
{
	switch (iParam0)
	{
		case 0:
			return joaat("rel_player_0");
	
		case 1:
			return joaat("rel_player_1");
	
		case 2:
			return joaat("rel_player_2");
	
		case 3:
			return joaat("rel_player_3");
	
		case 4:
			return joaat("rel_player_4");
	
		case 5:
			return joaat("rel_player_5");
	
		case 6:
			return joaat("rel_player_6");
	
		case 7:
			return joaat("rel_player_7");
	
		case 8:
			return joaat("rel_player_8");
	
		case 9:
			return joaat("rel_player_9");
	
		case 10:
			return joaat("rel_player_10");
	
		case 11:
			return joaat("rel_player_11");
	
		case 12:
			return joaat("rel_player_12");
	
		case 13:
			return joaat("rel_player_13");
	
		case 14:
			return joaat("rel_player_14");
	
		case 15:
			return joaat("rel_player_15");
	
		case 16:
			return joaat("rel_player_16");
	
		case 17:
			return joaat("rel_player_17");
	
		case 18:
			return joaat("rel_player_18");
	
		case 19:
			return joaat("rel_player_19");
	
		case 20:
			return joaat("rel_player_20");
	
		case 21:
			return joaat("rel_player_21");
	
		case 22:
			return joaat("rel_player_22");
	
		case 23:
			return joaat("rel_player_23");
	
		case 24:
			return joaat("rel_player_24");
	
		case 25:
			return joaat("rel_player_25");
	
		case 26:
			return joaat("rel_player_26");
	
		case 27:
			return joaat("rel_player_27");
	
		case 28:
			return joaat("rel_player_28");
	
		case 29:
			return joaat("rel_player_29");
	
		case 30:
			return joaat("rel_player_30");
	
		case 31:
			return joaat("rel_player_31");
	
		default:
		
	}

	return joaat("REL_NO_RELATIONSHIP");
}

BOOL func_783(int iParam0) // Position - 0x17554 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_804(iParam0, 2);
}

BOOL func_784() // Position - 0x17563 Hash - 0x4C1900E6 ^0x4C1900E6
{
	return func_791() == 4;
}

BOOL func_785() // Position - 0x17571 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_93(2);
}

BOOL func_786() // Position - 0x1757F Hash - 0x1BB0EADA ^0xDD84C79B
{
	int num;

	num = func_1002(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_246(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_787(int iParam0, int iParam1) // Position - 0x175C1 Hash - 0xF55E891F ^0xF55E891F
{
	func_1003(iParam0, iParam1);
	return;
}

int func_788(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x175D1 Hash - 0xA452440E ^0xD3F785A1
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

void func_789(int iParam0) // Position - 0x17619 Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_790(int iParam0) // Position - 0x1762B Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_791() // Position - 0x17659 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_792(BOOL bParam0) // Position - 0x1768C Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_1004(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

void func_793(Hash hParam0) // Position - 0x176B3 Hash - 0x6C79B149 ^0x6F4E7B45
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_502(hParam0);

	return;
}

void func_794(Hash hParam0) // Position - 0x176CB Hash - 0x7DD010A2 ^0x18DACB50
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(hParam0))
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(hParam0);

	return;
}

char* func_795(int iParam0) // Position - 0x176E2 Hash - 0xC02DE48C ^0xB3B92ADB
{
	if (iParam0 == 2)
		return "dewclm";

	if (iParam0 == 4)
		return "gua";

	return func_495(&(Global_1887363[func_537(iParam0) /*36*/].f_23));
}

char* func_796(int iParam0) // Position - 0x17716 Hash - 0x74299257 ^0x789183C5
{
	switch (iParam0)
	{
		case 0:
			return "setup";
	
		case 1:
			return "running";
	
		case 2:
			if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_teardown"))
				PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_teardown");
		
			if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_finale1"))
				PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_finale1");
		
			return "teardown";
	}

	return "";
}

void func_797(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1777C Hash - 0x4B472117 ^0x55F27670
{
	var scenarioGroup;
	var scenarioGroup2;

	TEXT_LABEL_COPY(&scenarioGroup, { Global_1887363[iParam0 /*36*/].f_23 }, 8);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, "_", 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam1), 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, "_", 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(iParam2), 64);
	scenarioGroup2 = { scenarioGroup };
	TEXT_LABEL_APPEND_STRING(&scenarioGroup2, "_setup", 64);

	if (TASK::DOES_SCENARIO_GROUP_EXIST(&scenarioGroup2))
		TASK::SET_SCENARIO_GROUP_ENABLED(&scenarioGroup2, bParam4);
	else if (bParam4)
		bParam3 = true;

	if (TASK::DOES_SCENARIO_GROUP_EXIST(&scenarioGroup))
		TASK::SET_SCENARIO_GROUP_ENABLED(&scenarioGroup, bParam3);

	return;
}

var func_798(BOOL bParam0, var uParam1, var uParam2) // Position - 0x177F7 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_799(var uParam0, var uParam1, var uParam2) // Position - 0x1780E Hash - 0x83FF3716 ^0x7C6FECDF
{
	float num;

	*uParam0 = (171 * *uParam0) % 30269;
	*uParam1 = (172 * *uParam1) % 30307;
	*uParam2 = (170 * *uParam2) % 30323;
	num = (BUILTIN::TO_FLOAT(*uParam0) / 30269f) + (BUILTIN::TO_FLOAT(*uParam1) / 30307f) + (BUILTIN::TO_FLOAT(*uParam2) / 30323f);
	*uParam0 = 0 == *uParam0 ? 171 : *uParam0;
	*uParam1 = 0 == *uParam1 ? 172 : *uParam1;
	*uParam2 = 0 == *uParam2 ? 170 : *uParam2;
	return BUILTIN::ROUND(1000f * num);
}

float func_800(Player plParam0, BOOL bParam1) // Position - 0x178A7 Hash - 0x41550721 ^0x79E4DF3F
{
	Player player;

	if (!Global_1149432.f_5568)
		return 0f;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0f;

	player = plParam0;

	if (player < 0 || player >= 32)
		return 0f;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(plParam0)) > 1 && bParam1 && Global_1101558[player /*38*/].f_18 >= Global_1101558[player /*38*/].f_30)
		return Global_1101558[player /*38*/].f_18;

	return Global_1101558[player /*38*/].f_30;
}

BOOL func_801(Player plParam0) // Position - 0x17947 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_802(Player plParam0) // Position - 0x17964 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_1007(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_1008(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_803(Hash hParam0) // Position - 0x179E7 Hash - 0xC24E3D06 ^0xEBE6E2EE
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940252.f_245.f_5, hParam0);
	func_1009(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_1010(Global_1940252.f_245.f_1306 - 1);
	return;
}

BOOL func_804(int iParam0, int iParam1) // Position - 0x17A25 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_805(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x17A46 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = volParam11;
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_5 = iParam12;
	Global_1951910[iParam0 /*23*/].f_1 = 2;
	Global_1951910[iParam0 /*23*/].f_17 = -1;
	Global_1951910[iParam0 /*23*/].f_18 = iParam16;
	Global_1951910[iParam0 /*23*/].f_19 = iParam15;
	Global_1951910[iParam0 /*23*/].f_20 = bParam25;
	Global_1951910[iParam0 /*23*/].f_22 = 0f;

	if (bParam25)
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	else
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();

	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1951910[iParam0 /*23*/].f_3 = prompt;
	func_1011(iParam0, true);
	func_1012(iParam0, true);
	func_1013(iParam0, 128);
	return;
}

BOOL func_806(int iParam0) // Position - 0x17D60 Hash - 0xC67CC87B ^0x88ADC254
{
	return Global_1296390.f_1 && iParam0 != false;
}

BOOL func_807() // Position - 0x17D73 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1048577;
}

BOOL func_808(int iParam0) // Position - 0x17D7F Hash - 0x687E50F ^0x39037DDC
{
	int num;
	int num2;
	int num3;
	var statId;

	num = Global_1295666.f_16;
	num2 = func_639(iParam0);
	statId = { func_640(iParam0) };
	STATS::STAT_ID_GET_INT(&statId, &num3);

	if (num3 == 0 || num3 + num2 > num)
		return true;

	return false;
}

void func_809(int iParam0) // Position - 0x17DC4 Hash - 0xDD4F2B2E ^0xD0245AFE
{
	Global_1296390.f_1 = Global_1296390.f_1 - Global_1296390.f_1 && iParam0;
	return;
}

void func_810(Any* panParam0) // Position - 0x17DE2 Hash - 0x491F67DC ^0x510618B1
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &(Global_1296390.f_50.f_5), 3);
	return;
}

BOOL func_811(int iParam0) // Position - 0x17DF9 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_1014(iParam0);
}

int func_812(Any anParam0, int iParam1) // Position - 0x17E07 Hash - 0xF6C122AF ^0xA6A67C2F
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

 func_813(int iParam0, int iParam1) // Position - 0x17E1B Hash - 0x44A1060A ^0x44A1060A
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 16, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 43, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 44, iParam1, 0, 1))
		return 0;

	return func_1015(&unk);
}

int func_814(Hash hParam0) // Position - 0x17E85 Hash - 0x8346A4A6 ^0xDC0CE5A2
{
	int i;

	for (i = 0; i < Global_265213.f_2; i = i + 1)
	{
		if (Global_265213.f_57505[i /*8*/] != hParam0 && Global_265213.f_4[i /*46*/].f_23 != hParam0)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

Hash func_815(int iParam0, int iParam1, int iParam2) // Position - 0x17ED4 Hash - 0x4F2308C0 ^0x4F2308C0
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 65, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 66, iParam2, 0, 1))
		return 0;

	return func_1016(&unk);
}

Hash func_816(Hash hParam0, BOOL bParam1) // Position - 0x17F78 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_728(hParam0, 0))
		return 0;

	hash = func_1017(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

const char* func_817(var uParam0, int iParam1) // Position - 0x17FA6 Hash - 0xB0CFF0C3 ^0xF2D64C9D
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_1018(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_818() // Position - 0x17FDC Hash - 0x8AB1ABA0 ^0xC9CC0E1
{
	return BUILTIN::FLOOR(func_1020(2f, BUILTIN::TO_FLOAT(func_1019() - 1))) + 1;
}

int func_819(var uParam0, int iParam1, BOOL bParam2) // Position - 0x17FF9 Hash - 0x5CD3029A ^0xA75D0219
{
	int num;
	int num2;

	num = bParam2 ? 1 : 0;
	num2 = func_1021(uParam0, iParam1);

	if (num2 == 0)
		return 0;

	return BUILTIN::FLOOR(func_1020(2f, BUILTIN::TO_FLOAT(num2 - 1))) + num + 1;
}

BOOL func_820(var uParam0, int iParam1, var uParam2) // Position - 0x18037 Hash - 0xCFB8B4B1 ^0xCFB8B4B1
{
	int value;
	int num;
	int num2;
	int num3;

	value = func_819(uParam0, iParam1, true) - 1;
	num3 = func_1022(uParam0, iParam1);
	num = func_1023(iParam1, uParam2);

	if (num == -1 || num > num3)
	{
		num = 0;
		num2 = 0;
	}
	else
	{
		num2 = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value)));
	}

	return num || num2;
}

int func_821(Any* panParam0) // Position - 0x18091 Hash - 0xACE03896 ^0xACE03896
{
	return func_855(panParam0, 79, 1);
}

struct<4> func_822(int iParam0) // Position - 0x180A2 Hash - 0xE35728B2 ^0xE35728B2
{
	var unk;
	var unk6;
	var unk10;

	if (!func_650(&unk))
		return unk10;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk10;

	if (!func_651(&unk, 14, 0, 0, 1))
		return unk10;

	if (!func_651(&unk, 40, iParam0, 0, 1))
		return unk10;

	unk6.f_3 = iParam0;
	unk6 = func_1024(&unk);
	func_1025(unk, &unk6);
	return unk6;
}

BOOL func_823(var uParam0, BOOL bParam1) // Position - 0x1811A Hash - 0xCD6D109E ^0x2713AB9C
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	if (uParam0->f_1 & -2147483648 != 0)
		return false;

	if (uParam0->f_1 & 2 != 0)
		if (func_320() != 0)
			return false;

	if (uParam0->f_1 & 1 != 0)
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(*uParam0))
			return false;

	if (uParam0->f_1 & 4 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_338(8))
			return false;
	}

	if (uParam0->f_1 & 8 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_617(unk.f_3, unk.f_3.f_1, unk.f_3.f_2, 0))
			return false;
	}

	return true;
}

int func_824() // Position - 0x1821C Hash - 0xA86F4822 ^0xA86F4822
{
	int i;
	var unk;

	for (i = 0; i <= 4; i = i + 1)
	{
		func_611(i, &unk);
	
		if (!func_612(&unk))
			return i;
	}

	return -1;
}

BOOL func_825(int iParam0, Any anParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1824E Hash - 0xA03CCFDA ^0xDA039072
{
	var unk;
	var unk13;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_983(iParam0, anParam1, &unk13, &unk, iParam2, iParam3, iParam4, bParam5);
}

void func_826(int iParam0, Any* panParam1, BOOL bParam2, var uParam3) // Position - 0x1827E Hash - 0x5BE1D1E3 ^0x5BE1D1E3
{
	func_1026(iParam0, panParam1);
	func_1027(iParam0, bParam2);
	func_1028(iParam0, uParam3);
	return;
}

struct<7> func_827(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1829E Hash - 0x5692E0E4 ^0x7CB1E70B
{
	int num;

	num = func_1029(&uParam0);
	num.f_1 = func_1030(&uParam0);

	switch (num)
	{
		case joaat("server"):
			num.f_2 = func_1031(&uParam0);
			break;
	
		default:
			num.f_2 = func_1032(&uParam0);
			break;
	}

	num.f_6 = func_1033(&uParam0, num == joaat("Stat"));
	func_1034(uParam0, &num);
	return num;
}

BOOL func_828(var uParam0, int iParam1) // Position - 0x18300 Hash - 0x5DD58598 ^0x5DFB6616
{
	Hash hash;
	Any any;
	var unk;
	var unk3;

	if (!func_1035(iParam1, uParam0->f_3))
		return true;

	switch (*uParam0)
	{
		case joaat("UNLOCK"):
			hash = uParam0->f_1;
			return func_1036(hash, uParam0->f_2);
	
		case joaat("server"):
			if (!BOUNTY::BOUNTY_GET_LEGENDARY_TARGET(uParam0->f_1, &unk))
				return false;
		
			return unk.f_1 >= uParam0->f_2;
	
		case joaat("AWARD"):
		case 1204986881:
			any = uParam0->f_1;
			return func_1037(any, uParam0->f_2);
	
		case joaat("Stat"):
			if (!STATS::STAT_ID_IS_VALID(&(uParam0->f_4)))
				return false;
		
			STATS::STAT_ID_GET_INT(&(uParam0->f_4), &unk3);
		
			switch (uParam0->f_2)
			{
				case -1750328213:
					return unk3 <= uParam0->f_6;
			
				case -1485982111:
					return unk3 == uParam0->f_6;
			
				case joaat("greater_than"):
					return unk3 > uParam0->f_6;
			
				case -555488925:
					return unk3 >= uParam0->f_6;
			
				case joaat("less_than"):
					return unk3 < uParam0->f_6;
			
				case 1920326201:
					return unk3 != uParam0->f_6;
			
				default:
				
			}
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_829(Any* panParam0, int iParam1, int iParam2) // Position - 0x1841D Hash - 0x763BF066 ^0x763BF066
{
	if (!func_650(panParam0))
		return false;

	if (!func_651(panParam0, 13, 0, 0, 1))
		return false;

	if (!func_651(panParam0, 17, 0, 0, 1))
		return false;

	if (!func_651(panParam0, 19, iParam1, 0, 1))
		return false;

	if (!func_651(panParam0, 13, 0, 0, 0))
		return false;

	if (!func_651(panParam0, 47, iParam2, 0, 1))
		return false;

	return true;
}

int func_830(Any* panParam0) // Position - 0x18495 Hash - 0x52D48CE2 ^0x52D48CE2
{
	return func_1038(panParam0, 83, true);
}

int func_831(Any* panParam0, int iParam1) // Position - 0x184A6 Hash - 0x325171CF ^0x325171CF
{
	return func_855(panParam0, 93, iParam1);
}

Hash func_832(Any* panParam0) // Position - 0x184B8 Hash - 0x9041B1BF ^0x9041B1BF
{
	return func_855(panParam0, 75, 1);
}

int func_833(int iParam0, int iParam1) // Position - 0x184C9 Hash - 0xB80E0851 ^0x59BC22B
{
	return Global_1296390.f_83[iParam0 /*17*/].f_1[iParam1];
}

BOOL func_834(BOOL bParam0) // Position - 0x184E1 Hash - 0x93E6A888 ^0x874F8231
{
	BOOL flag;
	int num;
	BOOL value;

	num = func_818();
	value = bParam0;
	value = BUILTIN::SHIFT_RIGHT(value, 32 - num);
	flag = func_1039();
	value = value && flag;
	return value;
}

void func_835(int iParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x1850F Hash - 0xC49038F ^0x3D4B59B0
{
	int offset;
	BOOL flag;

	offset = func_819(iParam0, iParam1, false);
	flag = func_1022(iParam0, iParam1);

	if (MISC::IS_BIT_SET(bParam3, offset))
		bParam3 = bParam3 && flag;
	else
		bParam3 = -1;

	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = bParam3;
					break;
			
				case 1:
					uParam2->f_4 = bParam3;
					break;
			
				case 2:
					uParam2->f_5 = bParam3;
					break;
			
				case 3:
					uParam2->f_1 = bParam3;
					break;
			
				case 4:
					*uParam2 = bParam3;
					break;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = bParam3;
					break;
			
				case 1:
					uParam2->f_4 = bParam3;
					break;
			
				case 2:
					uParam2->f_5 = bParam3;
					break;
			
				case 3:
					uParam2->f_1 = bParam3;
					break;
			
				case 4:
					*uParam2 = bParam3;
					break;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = bParam3;
					break;
			
				case 1:
					uParam2->f_4 = bParam3;
					break;
			
				case 2:
					uParam2->f_5 = bParam3;
					break;
			
				case 3:
					uParam2->f_1 = bParam3;
					break;
			
				case 4:
					*uParam2 = bParam3;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

int func_836(Any* panParam0) // Position - 0x18666 Hash - 0x3E293D90 ^0x3E293D90
{
	return func_855(panParam0, 67, 1);
}

int func_837(int iParam0, var uParam1, int iParam2) // Position - 0x18677 Hash - 0x3B53E80C ^0x3B53E80C
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

struct<2> func_838() // Position - 0x186CC Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

void func_839(int iParam0, var uParam1) // Position - 0x186E5 Hash - 0xA853DB92 ^0xAC12F0D2
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_2 = uParam1;
	return;
}

void func_840(int iParam0, var uParam1) // Position - 0x186FF Hash - 0xA853DB92 ^0xAA6C6247
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_4 = uParam1;
	return;
}

void func_841(int iParam0, var uParam1) // Position - 0x18719 Hash - 0xA853DB92 ^0xE4FF1A44
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_5 = uParam1;
	return;
}

void func_842(int iParam0, var uParam1) // Position - 0x18733 Hash - 0xC17A19F5 ^0x28593AFC
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3 = uParam1;
	return;
}

void func_843(int iParam0, var uParam1) // Position - 0x1874B Hash - 0xA853DB92 ^0xF9C1006F
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_1 = uParam1;
	return;
}

void func_844(int iParam0, var uParam1, var uParam2) // Position - 0x18765 Hash - 0x73886249 ^0x1BC1CB61
{
	Global_1296390.f_58.f_4[iParam0 /*10*/] = { uParam1 };
	return;
}

void func_845(int iParam0, var uParam1) // Position - 0x1877F Hash - 0xC17A19F5 ^0xC9CA1B83
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_2 = uParam1;
	return;
}

void func_846(int iParam0, var uParam1) // Position - 0x18797 Hash - 0xC17A19F5 ^0x133D1379
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_9 = uParam1;
	return;
}

int func_847(int iParam0, int iParam1, int iParam2) // Position - 0x187AF Hash - 0x4F2308C0 ^0x4F2308C0
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 25, iParam2, 0, 1))
		return 0;

	if (!func_651(&unk, 48, 0, 0, 0))
		return 0;

	return func_812(&unk, 10);
}

struct<6> func_848(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x18868 Hash - 0x9929BB07 ^0x9929BB07
{
	var unk;
	var unk6;
	int num;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, uParam0.f_3, 0, 1))
		return unk6;

	if (!func_651(&unk, 20, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 23, uParam0.f_3.f_1, 0, 1))
		return unk6;

	if (!func_651(&unk, 24, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 25, uParam0.f_3.f_2, 0, 1))
		return unk6;

	if (!func_651(&unk, 48, 0, 0, 0))
		return unk6;

	if (!func_651(&unk, 49, iParam10, 0, 1))
		return unk6;

	num = func_1040(&unk);
	return func_1041(num);
}

void func_849(var uParam0, BOOL bParam1) // Position - 0x18963 Hash - 0x73B2A8A3 ^0x7DA0060B
{
	if (!func_1042(uParam0, bParam1))
		return;

	switch (uParam0->f_3)
	{
		case joaat("int"):
			if (STATS::CHAL_IS_GOAL_ACTIVE(uParam0->f_1, uParam0->f_2))
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(uParam0->f_1, uParam0->f_2, uParam0->f_4);
			break;
	
		default:
			break;
	}

	return;
}

int func_850(int iParam0, int iParam1, int iParam2) // Position - 0x189B2 Hash - 0x4F2308C0 ^0x4F2308C0
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 25, iParam2, 0, 1))
		return 0;

	if (!func_651(&unk, 61, 0, 0, 0))
		return 0;

	return func_812(&unk, 12);
}

struct<5> func_851(var uParam0, int iParam1) // Position - 0x18A6B Hash - 0x75D77152 ^0x42735EF8
{
	var unk;
	int num;
	int num2;
	var unk10;
	int num3;
	Hash hash;
	var unk11;

	if (!func_650(&unk))
		return num;

	if (!func_651(&unk, 13, 0, 0, 1))
		return num;

	unk11 = unk.f_1;

	if (!func_651(&unk, 17, 0, 0, 1))
		return num;

	if (!func_651(&unk, 19, uParam0->f_3, 0, 1))
		return num;

	num2 = func_831(&unk, 1);

	if (!func_651(&unk, 20, 0, 0, 1))
		return num;

	if (!func_651(&unk, 23, uParam0->f_3.f_1, 0, 1))
		return num;

	hash = func_832(&unk);

	if (!func_651(&unk, 24, 0, 0, 1))
		return num;

	if (!func_651(&unk, 25, uParam0->f_3.f_2, 0, 1))
		return num;

	if (!func_651(&unk, 61, 0, 0, 1))
		return num;

	if (!func_651(&unk, 62, iParam1, 0, 1))
		return num;

	num3 = func_1043(&unk);
	unk.f_1 = unk11;

	if (!func_651(&unk, 60, 0, 0, 1))
		return num;

	if (!func_651(&unk, 63, num3, 0, 1))
		return num;

	unk10 = func_1044(&unk);
	num = num3;
	num.f_2 = hash;
	num.f_3 = num2;
	num.f_1 = unk10;
	func_1045(unk, &num);
	return num;
}

void func_852(var uParam0, BOOL bParam1) // Position - 0x18BD6 Hash - 0xA946B9D5 ^0x6BFC0D74
{
	int rating;
	var unk;

	if (!func_1046(uParam0, bParam1))
		return;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	switch (uParam0->f_1)
	{
		case joaat("UNLOCK_REPLAY"):
			MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(uParam0->f_3, false);
			break;
	
		case joaat("MARK_AS_FINISHED"):
			MISSIONDATA::MISSIONDATA_WAS_COMPLETED(uParam0->f_2);
		
			switch (unk.f_3.f_2)
			{
				case 0:
					rating = 3;
					break;
			
				case 1:
					rating = 4;
					break;
			
				case 2:
					rating = 5;
					break;
			}
		
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(uParam0->f_2, rating);
			break;
	
		default:
			break;
	}

	return;
}

int func_853(int iParam0, int iParam1, int iParam2) // Position - 0x18C9B Hash - 0x4F2308C0 ^0x4F2308C0
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 25, iParam2, 0, 1))
		return 0;

	if (!func_651(&unk, 38, 0, 0, 1))
		return 0;

	return func_812(&unk, 8);
}

struct<4> func_854(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x18D54 Hash - 0x87268233 ^0x87268233
{
	var unk;
	var unk6;
	int num;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, uParam0.f_3, 0, 1))
		return unk6;

	if (!func_651(&unk, 20, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 23, uParam0.f_3.f_1, 0, 1))
		return unk6;

	if (!func_651(&unk, 24, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 25, uParam0.f_3.f_2, 0, 1))
		return unk6;

	if (!func_651(&unk, 38, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 39, iParam10, 0, 1))
		return unk6;

	num = func_821(&unk);
	return func_822(num);
}

var func_855(Any* panParam0, int iParam1, int iParam2) // Position - 0x18E4F Hash - 0xB208A015 ^0xE27079B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

void func_856(int iParam0) // Position - 0x18E6A Hash - 0x5BC6537E ^0x659D49CB
{
	Player player;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	num = func_1047(player);

	if (!func_498(num))
		return;

	if (num != iParam0)
	{
		func_1048(iParam0, 7);
		func_1048(iParam0, 8);
	}

	num2 = { func_891(num) };

	switch (func_1049(num))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(num2.f_5))
			{
				if (!func_1050(player, num, 8) && func_930(num, 1))
				{
					func_1051(num2.f_5);
					func_1052(num, 8);
				}
			
				if (func_1053(num2.f_5))
				{
					func_1052(num, 2);
					func_1048(num, 5);
				}
				else if (func_965(num2.f_5))
				{
					func_1052(num, true);
					func_1048(num, 6);
				}
				else
				{
					func_1054(num2);
					func_1052(num, 4);
					func_1048(num, 3);
				}
			}
			else
			{
				func_1048(num, 7);
			}
			break;
	
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_930(num, 4))
				{
				}
				else
				{
					func_864();
				}
			
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			else
			{
				func_864();
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			break;
	}

	return;
}

void func_857(int iParam0) // Position - 0x18FB9 Hash - 0x8DD09CDC ^0xA1872DAA
{
	Player player;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	num = func_1047(player);

	if (!func_498(num))
		return;

	num2 = { func_891(iParam0) };

	switch (func_1049(num))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(num2.f_5))
			{
				if (!func_1050(player, iParam0, 8) && func_930(iParam0, 1))
				{
					func_1051(num2.f_5);
					func_1052(iParam0, 8);
				}
			
				if (func_1053(num2.f_5))
				{
					func_1052(iParam0, 2);
					func_1048(iParam0, 5);
				}
				else if (func_965(num2.f_5))
				{
					func_1052(iParam0, true);
					func_1048(iParam0, 6);
				}
				else
				{
					func_1054(num2);
					func_1052(iParam0, 4);
					func_1048(iParam0, 3);
				}
			}
			else
			{
				func_1048(iParam0, 7);
			}
			break;
	
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_930(num, 4))
				{
				}
				else
				{
					func_864();
				}
			
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			else
			{
				func_864();
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			break;
	}

	return;
}

BOOL func_858(int iParam0, int iParam1) // Position - 0x190F2 Hash - 0xFA5B7AF1 ^0xC5ECE269
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1 != false;
}

BOOL func_859() // Position - 0x1910E Hash - 0x2CAAC65E ^0xCA9A1EAB
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_188())
		return false;

	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
}

void func_860(int iParam0) // Position - 0x19177 Hash - 0xB1F2A7C ^0xDAEDDCCC
{
	Player player;
	var unk;

	player = PLAYER::PLAYER_ID();
	unk = { func_1057(iParam0) };

	if (func_1058(iParam0) <= 0)
	{
		unk = { func_1059(iParam0) };
	
		if (func_18(unk))
		{
			func_1060(iParam0);
			return;
		}
	
		return;
	}

	if (!func_18(unk))
	{
		unk = { func_1059(iParam0) };
	
		if (func_18(unk))
		{
			func_1060(iParam0);
			return;
		}
	}

	if (func_18(unk))
	{
		if (!func_1061(iParam0, player, 0))
		{
			func_1062(iParam0, unk);
			func_1063(iParam0, 0);
		
			if (func_858(iParam0, 256))
				func_1063(iParam0, 1);
		}
	
		if (func_1053(unk))
		{
			if (func_1064(iParam0, 4))
			{
				func_1065(iParam0, false, 0);
				return;
			}
			else if (func_1064(iParam0, 5))
			{
				func_1066(iParam0, 0);
				return;
			}
		}
	}

	switch (func_1067(iParam0))
	{
		case 1:
			break;
	
		case 2:
			if (!func_858(iParam0, 2))
				return;
		
			if (!func_1068(iParam0))
			{
				func_1069(iParam0, 0);
				return;
			}
		
			if (!func_965(unk) && !func_1053(unk))
				if (!func_1061(iParam0, player, 2) && !func_1061(iParam0, player, 3))
					if (func_1064(iParam0, 3) || func_1070(iParam0) == Global_1295666.f_10)
						func_1071(iParam0);
			else if (!func_1064(iParam0, 3) && func_1070(iParam0) != Global_1295666.f_10)
				func_1069(iParam0, 0);
			break;
	
		case 4:
			if (!func_858(iParam0, 2))
			{
				if (func_858(iParam0, 2048))
					func_1072(iParam0);
			
				return;
			}
		
			if (func_965(unk))
			{
				if (func_1064(iParam0, 4))
				{
					func_1073(iParam0, false, true, true);
					func_1065(iParam0, false, 0);
				}
				else
				{
					func_1073(iParam0, false, true, true);
					func_1066(iParam0, 0);
				}
			}
			else if (func_1053(unk))
			{
				func_1066(iParam0, 0);
			}
			else
			{
				func_1063(iParam0, 6);
			}
		
			if (func_1074(iParam0))
				func_1072(iParam0);
			break;
	
		case 5:
		case 6:
			if (func_1061(iParam0, player, 0))
				func_1060(iParam0);
			break;
	}

	return;
}

void func_861(int iParam0, int iParam1, BOOL bParam2) // Position - 0x193C8 Hash - 0x727E8632 ^0x727E8632
{
	func_1075(iParam0, iParam1);

	if (!bParam2)
	{
		func_1076(iParam0, iParam1);
	}
	else
	{
		func_1077(iParam0, iParam1);
		func_1078(iParam0, iParam1);
	}

	return;
}

void func_862(int iParam0) // Position - 0x193FA Hash - 0x4C628179 ^0x4C628179
{
	int num;

	num = func_1067(iParam0);

	if (num > -1 && num < 5)
	{
		if (!func_18(func_1057(iParam0)))
		{
			func_1079(iParam0, 5);
			return;
		}
	}

	if (!func_1080(iParam0) && num < 5)
	{
		func_1081(iParam0);
		func_1079(iParam0, 5);
		return;
	}

	switch (num)
	{
		case -1:
			if (!func_18(func_1057(iParam0)))
				return;
		
			if (func_858(iParam0, 32))
				Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
		
			if (Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_1082(iParam0, Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5);
				func_1079(iParam0, 2);
			}
			else
			{
				func_1079(iParam0, 1);
			}
			break;
	
		case 0:
			break;
	
		case 1:
			if (func_1083(iParam0) != 255)
			{
				func_1079(iParam0, 2);
				return;
			}
		
			if (func_1084(iParam0, 3))
			{
				func_1079(iParam0, 2);
				return;
			}
		
			if (func_1085(iParam0))
			{
				func_1079(iParam0, 5);
				return;
			}
			break;
	
		case 2:
			if (func_1083(iParam0) == 255 && !func_1084(iParam0, 3))
			{
				func_1079(iParam0, 4);
				return;
			}
		
			if (func_1086(iParam0))
			{
				func_1079(iParam0, 5);
				return;
			}
		
			if (func_1084(iParam0, 4) || func_1084(iParam0, 5))
			{
				func_1079(iParam0, 3);
				return;
			}
		
			func_1087(iParam0);
			break;
	
		case 3:
			if (func_1088(iParam0))
				return;
		
			func_1079(iParam0, 4);
			break;
	
		case 4:
			if (!func_1086(iParam0))
				return;
		
			func_1079(iParam0, 5);
			break;
	
		case 5:
			if (!func_1086(iParam0))
				return;
		
			if (func_1058(iParam0) > 1)
				func_1089(iParam0, 1);
		
			func_1079(iParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

BOOL func_863() // Position - 0x195F7 Hash - 0xA584E02B ^0xA584E02B
{
	return func_18(Global_1051268);
}

void func_864() // Position - 0x19609 Hash - 0x52882FAF ^0x7A9418B3
{
	BOOL sessionFlags;
	BOOL flags;

	if (!NETWORK::NETWORK_IS_HOST())
		return;

	sessionFlags = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
	flags = flags | 8;

	if (NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
		NETWORK::NETWORK_AUTO_SESSION_FINISH_INSTANCE();

	if (sessionFlags && flags != false)
	{
		flags = flags && sessionFlags;
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(flags);
	}

	return;
}

BOOL func_865() // Position - 0x1964B Hash - 0x2C6DE8F6 ^0xA7FBFA91
{
	if (Global_1572887.f_14 == -1)
		return 0;

	return Global_1051645.f_38;
}

struct<40> func_866(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40) // Position - 0x19667 Hash - 0xD717CAA2 ^0x7FD9F959
{
	var unk;
	int i;
	int num;

	if (uParam1.f_1 != -1)
		return iParam0->f_2[uParam1.f_1 /*40*/];

	unk = -1;
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

	for (i = 0; i < *iParam0; i = i + 1)
	{
		num = (iParam0->f_1 + i) % 5;
	
		if (iParam0->f_2[num /*40*/].f_2 != uParam1.f_2)
		{
		}
		else if (iParam0->f_2[num /*40*/].f_3 != uParam1.f_3)
		{
		}
		else if (iParam0->f_2[num /*40*/].f_4 != uParam1.f_4)
		{
		}
		else
		{
			return iParam0->f_2[num /*40*/];
		}
	}

	return unk;
}

void func_867(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41) // Position - 0x19796 Hash - 0x9F89CAAC ^0x14B2AE6F
{
	switch (func_1090(uParam41))
	{
		case -1:
			func_1091(uParam40, uParam41->f_4);
			break;
	
		case 0:
			if (!func_1092(&uParam0, uParam41))
			{
				if (NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7 > 120000)
				{
					uParam41->f_6 = 2;
					func_1093(uParam41, 3);
				}
			
				return;
			}
		
			if (func_1094(&uParam0) < 0)
				return;
		
			uParam41->f_1 = uParam0.f_1;
			func_1093(uParam41, 1);
			break;
	
		case 1:
			if (!func_1092(&uParam0, uParam41))
			{
				uParam41->f_6 = 2;
				func_1093(uParam41, 3);
				return;
			}
		
			if (func_1094(&uParam0) < 1)
				return;
		
			uParam41->f_6 = uParam0.f_6;
			func_1093(uParam41, 2);
			break;
	
		case 2:
			if (!func_1092(&uParam0, uParam41))
			{
				if (uParam41->f_6 == -1)
					uParam41->f_6 = 2;
			
				func_1093(uParam41, 3);
				return;
			}
		
			if (func_1094(&uParam0) < 3)
				return;
		
			func_1093(uParam41, 3);
			break;
	
		case 3:
			func_1093(uParam41, -1);
			break;
	}

	return;
}

int func_868(int iParam0) // Position - 0x198C5 Hash - 0x6AA34421 ^0x71F4922
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

int func_869(var uParam0) // Position - 0x198D7 Hash - 0xC6AB7C0D ^0x7895D4AD
{
	int num;
	int i;

	if (!func_1095(uParam0))
		return -1;

	num = func_1096(uParam0, uParam0->f_9);

	if (num != -1)
		return num;

	for (i = 0; i < 4; i = i + 1)
	{
		if (i == uParam0->f_9)
		{
		}
		else
		{
			num = func_1096(uParam0, i);
		
			if (num != -1)
				return num;
		}
	}

	return -1;
}

int func_870(int iParam0) // Position - 0x19938 Hash - 0x1B04F1B9 ^0x49F043F7
{
	return Global_1107816.f_33[iParam0 /*16*/].f_1;
}

BOOL func_871(int iParam0) // Position - 0x1994C Hash - 0x596E39DA ^0x596E39DA
{
	return iParam0 >= 0 && iParam0 < 71;
}

void func_872(int iParam0, int iParam1) // Position - 0x19962 Hash - 0xCF7D517E ^0xEF288720
{
	Global_1107816.f_33[iParam0 /*16*/].f_1 = iParam1;
	return;
}

void func_873(int iParam0) // Position - 0x19978 Hash - 0xEF70193F ^0xA0BBDE15
{
	Global_1107816.f_33[iParam0 /*16*/] = 0;
	return;
}

int func_874(Player plParam0, int iParam1) // Position - 0x1998B Hash - 0x21BD3496 ^0xE77F6774
{
	int gangId;
	int i;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (func_498(iParam1))
		if (gangId == func_868(iParam1))
			return iParam1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (gangId == func_868(i))
			return i;
	}

	return -1;
}

int func_875(int iParam0) // Position - 0x199D8 Hash - 0x1B04F1B9 ^0xCEC85F37
{
	return Global_1107816.f_33[iParam0 /*16*/].f_2;
}

void func_876(int iParam0, int iParam1) // Position - 0x199EC Hash - 0x7D2EC2B6 ^0xB96B3332
{
	Global_1107816.f_33[iParam0 /*16*/] = iParam1;

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(GANG::NETWORK_GET_GANG_LEADER(iParam1)))
	{
	}

	return;
}

BOOL func_877(int iParam0, var uParam1) // Position - 0x19A10 Hash - 0x23C13EE9 ^0x23C13EE9
{
	if (!func_1097(iParam0))
		return 0;

	*uParam1 = 0;
	return 1;
}

BOOL func_878(int iParam0, var uParam1) // Position - 0x19A2B Hash - 0x7963B2C ^0x7963B2C
{
	if (!func_1097(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}

	if (!func_18(func_499(iParam0)))
		return 0;

	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}

	func_1099(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	*uParam1 = 1;
	return 1;
}

BOOL func_879(int iParam0, var uParam1) // Position - 0x19A83 Hash - 0xB60B2247 ^0xB60B2247
{
	var unk;
	var unk3;
	int num;
	int networkTimeAccurate;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}

	unk = { func_499(iParam0) };

	if (!func_18(unk))
	{
		*uParam1 = 6;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}

	unk3 = -1;
	unk3.f_1 = -1;
	unk3.f_3 = -1;
	unk3.f_4 = -1;
	unk3.f_5 = -1;
	unk3.f_6 = -1;
	unk3.f_6.f_1 = -1;
	unk3.f_9 = 2;
	unk3 = { unk };
	num = func_869(&unk3);

	if (func_871(num))
	{
		func_872(iParam0, num);
		func_1099(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		*uParam1 = 2;
		return 1;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), networkTimeAccurate) > func_1101())
	{
		if (func_1102(unk, iParam0))
			*uParam1 = 6;
		else
			*uParam1 = 7;
	
		return 1;
	}

	return 0;
}

BOOL func_880(int iParam0, var uParam1) // Position - 0x19B78 Hash - 0x7F0AD142 ^0x7F0AD142
{
	BOOL flag;
	int networkTimeAccurate;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}

	if (flag & true != 0)
	{
		*uParam1 = 3;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), networkTimeAccurate) > func_1101())
	{
		if (func_1102(func_499(iParam0), iParam0))
			*uParam1 = 6;
		else
			*uParam1 = 7;
	
		return 1;
	}

	return 0;
}

BOOL func_881(int iParam0, var uParam1) // Position - 0x19C0E Hash - 0xB5DCFFE3 ^0xB5DCFFE3
{
	BOOL flag;

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}

	if (flag & true != 0)
		return 0;

	if (func_1102(func_499(iParam0), iParam0))
		*uParam1 = 6;
	else
		*uParam1 = 7;

	return 1;
}

BOOL func_882(int iParam0, var uParam1) // Position - 0x19C71 Hash - 0x686109A3 ^0x686109A3
{
	BOOL flag;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
		return 0;

	if (flag & true != 0)
	{
		*uParam1 = 3;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}

	if (Global_1110244.f_18)
	{
		if (func_1102(func_499(iParam0), iParam0))
			*uParam1 = 6;
		else
			*uParam1 = 7;
	}
	else
	{
		func_1102(func_499(iParam0), iParam0);
		*uParam1 = 6;
	}

	return 1;
}

BOOL func_883(int iParam0, var uParam1) // Position - 0x19D03 Hash - 0xA572A31E ^0xA572A31E
{
	BOOL flag;

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
		return 0;

	if (flag & true != 0)
		return 0;

	if (func_1102(func_499(iParam0), iParam0))
		*uParam1 = 6;
	else
		*uParam1 = 7;

	return 1;
}

BOOL func_884(int iParam0, var uParam1) // Position - 0x19D46 Hash - 0xEC2D0E6B ^0xF15F8AA6
{
	var unk;
	int num;
	int networkTimeAccurate;

	if (!func_18(func_499(iParam0)))
	{
		*uParam1 = 7;
		return 1;
	}

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_6.f_1 = -1;
	unk.f_9 = 2;
	unk = { func_499(iParam0) };
	num = func_869(&unk);

	if (!func_871(num))
	{
		func_1104(iParam0);
		*uParam1 = 7;
		return 1;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), networkTimeAccurate) > func_1105())
	{
		func_1098(unk);
		func_1099(iParam0, networkTimeAccurate);
	}

	return 0;
}

BOOL func_885(int iParam0, var uParam1) // Position - 0x19DED Hash - 0x1270986F ^0x1270986F
{
	if (func_1097(iParam0))
	{
		*uParam1 = 8;
		return 1;
	}
	else
	{
		*uParam1 = 9;
		return 1;
	}

	return 0;
}

BOOL func_886(int iParam0, var uParam1) // Position - 0x19E14 Hash - 0xA5EC409B ^0x5063580
{
	int num;
	BOOL flag;

	flag = true;

	if (Global_1110244.f_19)
	{
		num = func_1106();
	
		if (num <= 1)
			if (func_930(iParam0, 4))
				flag = false;
			else
				flag = true;
		else
			flag = true;
	}
	else
	{
		flag = true;
	}

	if (flag)
	{
		if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0 && func_930(iParam0, 1))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(func_1107(), NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
			{
				func_1108();
				func_458();
			}
		
			return 0;
		}
	}

	func_1109(iParam0);
	*uParam1 = -1;
	return 1;
}

BOOL func_887(int iParam0, var uParam1) // Position - 0x19E99 Hash - 0xE04CDC76 ^0xE04CDC76
{
	switch (func_888(iParam0))
	{
		case 0:
			return func_1110(iParam0, uParam1);
	
		case 1:
			return func_1111(iParam0, uParam1);
	
		default:
		
	}

	return 0;
}

int func_888(int iParam0) // Position - 0x19ED3 Hash - 0x4B8D5AEA ^0xC5E5D7F9
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_2;
}

void func_889(int iParam0, var uParam1, int iParam2) // Position - 0x19EE9 Hash - 0x84615A9 ^0xA8FCB280
{
	Global_1107816.f_33[iParam0 /*16*/].f_2 = uParam1;
	return;
}

void func_890(int iParam0, int iParam1) // Position - 0x19EFF Hash - 0x656FCE1C ^0x656FCE1C
{
	Global_1110244[iParam0] = iParam1;
	return;
}

struct<13> func_891(int iParam0) // Position - 0x19F11 Hash - 0x6C6B3F3 ^0x7CC5A9AA
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

BOOL func_892(var uParam0, var uParam1, var uParam2) // Position - 0x19F28 Hash - 0xC6FFCB29 ^0xC6FFCB29
{
	return !func_929(func_1112(), uParam0) || func_1113() != uParam2;
}

void func_893(var uParam0) // Position - 0x19F4A Hash - 0x3DDCE685 ^0xB9175704
{
	Global_1110244.f_11 = { *uParam0 };
	return;
}

BOOL func_894(Player plParam0, int iParam1) // Position - 0x19F5E Hash - 0xC87751BB ^0xFB80FAD5
{
	return Global_1138673[plParam0 /*56*/].f_34 && iParam1 != false;
}

struct<2> func_895() // Position - 0x19F75 Hash - 0xEB184E4F ^0xA3D2CE41
{
	return Global_1140723.f_5.f_3;
}

struct<2> func_896() // Position - 0x19F87 Hash - 0xFC14D358 ^0xB315C611
{
	return Global_1110244.f_21.f_13.f_25;
}

int func_897() // Position - 0x19F9B Hash - 0xA1DBD1D9 ^0xC2F5101E
{
	return Global_1140723.f_5.f_7;
}

int func_898() // Position - 0x19FAB Hash - 0x4228A1C2 ^0x936D20CA
{
	return Global_1140723.f_24;
}

Any func_899() // Position - 0x19FB9 Hash - 0x6E784062 ^0x185AFFFA
{
	return Global_1110244.f_21.f_13.f_20;
}

int func_900() // Position - 0x19FCB Hash - 0x6E784062 ^0xD24B0631
{
	return Global_1110244.f_21.f_13.f_2;
}

BOOL func_901(int iParam0) // Position - 0x19FDD Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_527(1, iParam0);
}

void func_902() // Position - 0x19FEC Hash - 0xBD30548D ^0xBD30548D
{
	func_1114(-1);
	func_1115(-1);
	func_1116(-1);
	func_1117();
	func_1118();
	return;
}

int func_903() // Position - 0x1A00B Hash - 0x6E784062 ^0xA25CFCA2
{
	return Global_1110244.f_21.f_13.f_8;
}

void func_904(int iParam0) // Position - 0x1A01D Hash - 0x4F769ECC ^0x646B879A
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_34 = Global_1138673[player /*56*/].f_34 - Global_1138673[player /*56*/].f_34 && iParam0;
	return;
}

void func_905(int iParam0) // Position - 0x1A04D Hash - 0x9BCDD71 ^0x4AB2DF07
{
	Global_1110244.f_21.f_13.f_8 = iParam0;
	return;
}

void func_906(var uParam0, var uParam1) // Position - 0x1A061 Hash - 0x85DF5E2E ^0xF1DF7560
{
	Global_1110244.f_21.f_13.f_9 = { uParam0 };
	return;
}

int func_907() // Position - 0x1A079 Hash - 0xA1DBD1D9 ^0x9D6AEE75
{
	return Global_1110244.f_21.f_13;
}

void func_908(int iParam0) // Position - 0x1A089 Hash - 0x5D11B287 ^0x6204FEAA
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_34 = Global_1138673[player /*56*/].f_34 || iParam0;
	return;
}

BOOL func_909(int iParam0) // Position - 0x1A0AE Hash - 0x4A16C46D ^0x927737A2
{
	return func_244(&(Global_1110244.f_251.f_6), iParam0, 2);
}

void func_910(int iParam0) // Position - 0x1A0C5 Hash - 0x7F4DD5CF ^0x3BA0031B
{
	func_515(&Global_1140466[PLAYER::PLAYER_ID() /*8*/], iParam0, 2);
	return;
}

void func_911(int iParam0) // Position - 0x1A0E1 Hash - 0x7F4DD5CF ^0x3BA0031B
{
	func_514(&Global_1140466[PLAYER::PLAYER_ID() /*8*/], iParam0, 2);
	return;
}

BOOL func_912(int iParam0) // Position - 0x1A0FD Hash - 0x514B5C7F ^0x406CF3AF
{
	return func_244(&(Global_1110244.f_251.f_12), iParam0, 4);
}

void func_913(int iParam0) // Position - 0x1A114 Hash - 0x3B41E131 ^0x7C2CF839
{
	func_515(&(Global_1140466[PLAYER::PLAYER_ID() /*8*/].f_3), iParam0, 4);
	return;
}

void func_914(int iParam0) // Position - 0x1A132 Hash - 0x3B41E131 ^0x7C2CF839
{
	func_514(&(Global_1140466[PLAYER::PLAYER_ID() /*8*/].f_3), iParam0, 4);
	return;
}

BOOL func_915(int iParam0) // Position - 0x1A150 Hash - 0xFEB7CBB2 ^0x8D69FA11
{
	int num;

	num = func_1119(iParam0);

	if (num < 0)
		return true;

	return func_1120(&Global_1149432.f_11.f_3222.f_320[num /*4*/], 1);
}

void func_916(int iParam0) // Position - 0x1A17F Hash - 0xFC4DC7D0 ^0xBAFDEC2D
{
	if (Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_47 == iParam0)
		return;

	Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_47 = iParam0;
	return;
}

BOOL func_917(Player plParam0, int iParam1) // Position - 0x1A1A9 Hash - 0x39B3EF50 ^0xD7059082
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	return Global_1138673[plParam0 /*56*/].f_54.f_1 && iParam1 != false;
}

BOOL func_918(int iParam0) // Position - 0x1A1D0 Hash - 0xA1D29AFD ^0x66D6203E
{
	return Global_1140723.f_24.f_3 && iParam0 != false;
}

var func_919() // Position - 0x1A1E5 Hash - 0xA1DBD1D9 ^0xA46B6DC8
{
	return Global_1140723.f_24.f_6;
}

void func_920(Player plParam0) // Position - 0x1A1F5 Hash - 0x42F34EA2 ^0xAA727686
{
	var unk;
	var value;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk.f_4 = 15;
	unk.f_10 = PLAYER::PLAYER_ID();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam0);
	func_1121(&unk, value);
	return;
}

void func_921(int iParam0) // Position - 0x1A292 Hash - 0x42868A8 ^0xFC8696CF
{
	Global_1140723.f_24.f_6 = iParam0;
	return;
}

void func_922(int iParam0) // Position - 0x1A2A4 Hash - 0x5EB32340 ^0x19EB8849
{
	Global_1140723.f_24.f_3 = Global_1140723.f_24.f_3 || iParam0;
	return;
}

BOOL func_923() // Position - 0x1A2BF Hash - 0x6E784062 ^0x12786AA2
{
	return Global_1110244.f_21.f_112.f_6;
}

int func_924() // Position - 0x1A2D1 Hash - 0x6E784062 ^0x3B5EF08
{
	return Global_1110244.f_21.f_112.f_5;
}

void func_925() // Position - 0x1A2E3 Hash - 0xFFBA2A35 ^0xE9F2CCA4
{
	var unk;

	func_1122(-1);
	func_1123(-1);
	func_1124(-1);
	func_1125(func_838());
	func_1126(0);
	func_1127(0);
	func_1128(0);
	func_1129(0);
	unk.f_1 = -1;
	func_1130(&unk);
	return;
}

int func_926(int iParam0) // Position - 0x1A325 Hash - 0x62CD18E0 ^0x62CD18E0
{
	int i;

	if (iParam0 == 0)
		return -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (iParam0 == func_868(i))
			return i;
	}

	return -1;
}

BOOL func_927(int iParam0) // Position - 0x1A35B Hash - 0xAEEA3448 ^0xAEEA3448
{
	int num;

	if (!func_1131(func_933()))
		if (func_1131(func_1132(iParam0)))
			func_1122(func_1132(iParam0));
		else
			return false;

	if (!func_1133(func_932()))
		if (func_1133(func_1134(iParam0)))
			func_1123(func_1134(iParam0));
		else
			return false;

	if (!func_1135(func_935()))
		if (func_1135(func_1136(iParam0)))
			func_1124(func_1136(iParam0));
		else
			return false;

	if (!func_1137() && func_1139(func_1138(func_935())) == 7)
	{
		num.f_1 = -1;
		func_1140(iParam0, &num);
	
		if (num == 0)
		{
		}
		else
		{
			func_1130(&num);
			func_1129(1);
		}
	}

	return true;
}

struct<2> func_928() // Position - 0x1A422 Hash - 0xFC14D358 ^0xBA59DB0D
{
	return Global_1110244.f_21.f_112.f_3;
}

BOOL func_929(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1A436 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_930(int iParam0, int iParam1) // Position - 0x1A451 Hash - 0xF031E762 ^0x106572D0
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_8 && iParam1 != false;
}

void func_931(Any* panParam0) // Position - 0x1A46C Hash - 0x55E242B1 ^0xD637DE92
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &(Global_1110244.f_21.f_112.f_9), 4);
	return;
}

int func_932() // Position - 0x1A485 Hash - 0xA1DBD1D9 ^0x3AC3EEEF
{
	return Global_1110244.f_21.f_112;
}

int func_933() // Position - 0x1A495 Hash - 0x6E784062 ^0x6FA6B788
{
	return Global_1110244.f_21.f_112.f_1;
}

var func_934() // Position - 0x1A4A7 Hash - 0x6E784062 ^0xB3433BA8
{
	return Global_1110244.f_21.f_112.f_7;
}

int func_935() // Position - 0x1A4B9 Hash - 0x6E784062 ^0x677AEBCF
{
	return Global_1110244.f_21.f_112.f_2;
}

void func_936(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x1A4CB Hash - 0x611E104E ^0x4F96552A
{
	var unk;
	var unk32;
	var unk33;
	float num;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk32 = func_157(0, 8);
	unk.f_6 = iParam0;
	unk.f_5 = iParam1;
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	unk.f_4 = 3;
	unk.f_9 = iParam3;
	unk.f_14 = uParam2;
	unk.f_7 = { uParam4 };
	unk.f_13 = iParam10;
	MISC::COPY_SCRIPT_STRUCT(&(unk.f_27), &uParam6, 4);
	Global_1110244.f_4647 = uParam2;
	unk33 = { func_1141(iParam0) };
	num = func_1142(iParam0);
	func_1143(&(unk.f_19), unk.f_11, unk33, num);
	func_1121(&unk, unk32);
	return;
}

void func_937(Player plParam0, Any* panParam1) // Position - 0x1A5CC Hash - 0x9BBBB0FD ^0x388C2071
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1138673[plParam0 /*56*/].f_38), 5);
	return;
}

void func_938(Any* panParam0) // Position - 0x1A5E5 Hash - 0x7A1F391A ^0x7A1F391A
{
	func_1144(panParam0, 1);
	return;
}

BOOL func_939(int iParam0) // Position - 0x1A5F4 Hash - 0x4C0C4814 ^0x6A6FE668
{
	return Global_1110244.f_4607.f_2 && iParam0 != false;
}

void func_940(Any* panParam0) // Position - 0x1A60A Hash - 0x879B7DAC ^0x879B7DAC
{
	func_1145(panParam0, 0);
	return;
}

void func_941(Any* panParam0) // Position - 0x1A619 Hash - 0x6FBC1AA8 ^0xD1642617
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_38), panParam0, 5);
	return;
}

void func_942(int iParam0) // Position - 0x1A634 Hash - 0xD03086C1 ^0x7CFAAA2F
{
	Global_1110244.f_4607.f_2 = Global_1110244.f_4607.f_2 - Global_1110244.f_4607.f_2 && iParam0;
	return;
}

void func_943(Player plParam0, Any* panParam1) // Position - 0x1A65B Hash - 0x433F480A ^0xB1E336AA
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1138673[plParam0 /*56*/].f_43), 4);
	return;
}

void func_944(Any* panParam0) // Position - 0x1A674 Hash - 0x7A1F391A ^0x7A1F391A
{
	func_1146(panParam0, 1);
	return;
}

void func_945(Any* panParam0) // Position - 0x1A683 Hash - 0x879B7DAC ^0x879B7DAC
{
	func_1147(panParam0, 0);
	return;
}

void func_946(Any* panParam0) // Position - 0x1A692 Hash - 0xB166BF53 ^0x325C4CFB
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_43), panParam0, 4);
	return;
}

void func_947(Player plParam0, Any* panParam1) // Position - 0x1A6AD Hash - 0x9BBBB0FD ^0x7A52250E
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1138673[plParam0 /*56*/].f_49), 5);
	return;
}

void func_948(Any* panParam0) // Position - 0x1A6C6 Hash - 0x510F9567 ^0x6F76C9CF
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_4607.f_22), panParam0, 5);
	return;
}

int func_949(int iParam0) // Position - 0x1A6DE Hash - 0xC57D6AF8 ^0xEDFF437D
{
	return Global_1110244.f_150.f_84[iParam0 /*4*/];
}

int func_950(int iParam0) // Position - 0x1A6F2 Hash - 0xA67D24A0 ^0xD78F494B
{
	return Global_1110244.f_150.f_84[iParam0 /*4*/].f_2;
}

BOOL func_951(Player plParam0, int iParam1) // Position - 0x1A708 Hash - 0x8A2BB0D3 ^0x1BC2A67
{
	return func_244(&(Global_1138673[plParam0 /*56*/].f_49), iParam1, 3);
}

void func_952(int iParam0) // Position - 0x1A721 Hash - 0x11F98EAB ^0x53C54E44
{
	func_514(&(Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_49), iParam0, 3);
	return;
}

BOOL func_953() // Position - 0x1A73F Hash - 0x8190E5D8 ^0x856627E0
{
	return Global_1203952.f_399.f_4;
}

void func_954(int iParam0) // Position - 0x1A750 Hash - 0xCED34177 ^0xDA90D9E
{
	int num;
	int i;

	num = func_471(iParam0);

	if (num == -1)
	{
		Global_1072759.f_19585.f_19 = Global_1072759.f_19585[iParam0];
		return;
	}

	if (num == 0)
		return;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (MISC::IS_BIT_SET(Global_38.f_118[iParam0], i))
			MISC::SET_BIT(&(Global_1072759.f_19585.f_19), i);
		else
			MISC::CLEAR_BIT(&(Global_1072759.f_19585.f_19), i);
	}

	return;
}

BOOL func_955(int iParam0) // Position - 0x1A7CE Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL func_956(var uParam0, int iParam1) // Position - 0x1A7E4 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

BOOL func_957() // Position - 0x1A804 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_958(int iParam0, int iParam1) // Position - 0x1A824 Hash - 0x13A8E017 ^0x13A8E017
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
				return true;
			break;
	}

	return false;
}

Vector3 func_959(int iParam0) // Position - 0x1A854 Hash - 0x4159D95 ^0x8FA57611
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_960(int iParam0) // Position - 0x1A868 Hash - 0x4159D95 ^0x8FA57611
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_961(int iParam0) // Position - 0x1A87C Hash - 0x4159D95 ^0x8FA57611
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

void func_962(int iParam0, int iParam1) // Position - 0x1A890 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_693(iParam0))
		return;

	Global_1900562[iParam0 /*2*/].f_1 = Global_1900562[iParam0 /*2*/].f_1 || iParam1;
	return;
}

void func_963(int iParam0) // Position - 0x1A8BC Hash - 0xDF2F2B3F ^0x4FCA3C11
{
	if (func_60() == -1)
		return;

	if (Global_1835011[iParam0 /*72*/].f_3 != 0 && UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3))
		UNLOCK::_UNLOCK_SET_NEW(Global_1835011[iParam0 /*72*/].f_3, false);

	func_1148(iParam0);
	return;
}

void func_964(var uParam0, int iParam1) // Position - 0x1A906 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_965(var uParam0, var uParam1) // Position - 0x1A917 Hash - 0xA188F144 ^0xA188F144
{
	int num;

	num = func_372(uParam0);
	return num == 1 || num == 2;
}

void func_966(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1A937 Hash - 0xAC2AF54 ^0xAC2AF54
{
	int num;

	if (!func_18(uParam0))
	{
		!bParam2;
		return;
	}

	if (!func_1053(uParam0) && !func_965(uParam0))
	{
		!bParam2;
		return;
	}

	func_1149(uParam0) == 0;

	if (iParam3 == 0 || iParam3 == 1 || iParam3 == 4)
		if (func_372(uParam0) == 3)
			func_1150(true, -1706799532);
		else if (func_372(uParam0) == 4)
			func_1150(false, -1706799532);

	if (func_372(uParam0) == 3 || func_372(uParam0) == 1 || bParam5 && func_372(uParam0) == 4 && STATS::STATSTRACKER_IS_INITIALIZED(func_1149(uParam0)))
		if (iParam3 != -1)
			func_1151(uParam0, iParam3, iParam4, 255, 0);
		else
			func_1151(uParam0, 2, iParam4, 255, 0);

	func_968(uParam0, 0);

	if (func_929(func_215(0), uParam0))
	{
		func_1152(true);
		func_1153(false);
		func_1154(false);
		func_1155(1);
	}

	func_1156(uParam0);
	Global_1051645.f_45.f_1 = 1;
	num = func_1157(uParam0);

	if (num != 2 && num != 7)
		MISC::_0x1096603B519C905F("");

	return;
}

void func_967(var uParam0, var uParam1) // Position - 0x1AA9F Hash - 0xFD26CFB9 ^0xD8D48326
{
	if (func_1149(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_1149(uParam0)))
	{
		STATS::_0x99230691875FC218(func_1157(uParam0), func_1149(uParam0), Global_34);
	}

	return;
}

void func_968(var uParam0, var uParam1, int iParam2) // Position - 0x1AAE2 Hash - 0xEE2C20F9 ^0xEE2C20F9
{
	if (!func_18(uParam0))
		return;

	if (iParam2 == 0 || iParam2 == -1)
		func_1158(uParam0);
	else
		func_1159(uParam0, iParam2);

	func_1160();
	return;
}

BOOL func_969() // Position - 0x1AB25 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1295849.f_537 != 0;
}

BOOL func_970() // Position - 0x1AB36 Hash - 0x4D0F0B87 ^0x65B1F16C
{
	if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1) != 0)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	return true;
}

BOOL func_971(int iParam0) // Position - 0x1AB58 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1295849.f_537 && iParam0 != false;
}

BOOL func_972(int iParam0) // Position - 0x1AB6C Hash - 0x64E13D85 ^0xFD50278C
{
	int num;
	 Var1;
	int num2;
	Blip blip;

	Var1 = func_1161(iParam0);
	num2 = func_1162(iParam0);
	blip = func_704();

	switch (num2)
	{
		case 0:
			num = func_290(MISC::VAR_STRING(0, Var1), 10000, 0, 0, 0, true);
			break;
	
		case 1:
			if (!MAP::DOES_BLIP_EXIST(blip))
			{
				blip = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_MP_MISSION_GIVER"));
			
				if (!MAP::DOES_BLIP_EXIST(blip))
					return false;
			
				MAP::SET_BLIP_SPRITE(blip, joaat("blip_proc_bounty_poster"), true);
				MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_TEXT_ONLY"));
				func_705(blip);
			}
		
			num = func_290(MISC::VAR_STRING(0, Var1, blip), 10000, 0, 0, 0, true);
			break;
	}

	return num != 0;
}

void func_973(int iParam0) // Position - 0x1AC13 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1295849.f_537 = Global_1295849.f_537 - Global_1295849.f_537 && iParam0;
	return;
}

BOOL func_974(int iParam0) // Position - 0x1AC34 Hash - 0x512F3490 ^0xBBCFDA30
{
	return func_246(Global_1072759.f_28644.f_8.f_1, iParam0);
}

Hash func_975(Hash hParam0) // Position - 0x1AC4D Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_976(Hash hParam0, int iParam1) // Position - 0x1AC57 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

Hash func_977(int iParam0) // Position - 0x1AC71 Hash - 0xB8EC44B7 ^0xFD8B1C5A
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
	
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
	
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
	
		case 18:
			return -296143963;
	
		case 19:
			return -575193412;
	
		case 20:
			return 1364208910;
	
		case 21:
			return 1936286816;
	
		case 22:
			return -361115047;
	
		case 23:
			return -874931455;
	
		case 24:
			return -1692024648;
	
		case 25:
			return -1371940008;
	
		case 26:
			return -108990605;
	
		case 27:
			return -122883667;
	
		case 28:
			return -2093379718;
	
		case 29:
			return -362851054;
	
		case 30:
			return -244323351;
	
		case 31:
			return 1314790674;
	
		case 32:
			return -550123659;
	
		case 33:
			return 944566512;
	
		case 34:
			return 1589331582;
	
		case 35:
			return 721639005;
	
		case 36:
			return 1289855691;
	
		default:
		
	}

	return 0;
}

Hash func_978(int iParam0) // Position - 0x1AE0A Hash - 0xFBE6ACAA ^0xC8FB295B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

Hash func_979(int iParam0) // Position - 0x1AE36 Hash - 0xB8EC44B7 ^0xFB7D0806
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
	
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_XP_TRADER");
	
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
	
		case 18:
			return -399749454;
	
		case 19:
			return 1428145499;
	
		case 20:
			return -1318783204;
	
		case 21:
			return 893948884;
	
		case 22:
			return -187008013;
	
		case 23:
			return 92055054;
	
		case 24:
			return 2141983659;
	
		case 25:
			return 1021617260;
	
		case 26:
			return 451790629;
	
		case 27:
			return -379952091;
	
		case 28:
			return -2076041980;
	
		case 29:
			return -453223575;
	
		case 30:
			return -1366789744;
	
		case 31:
			return -745162596;
	
		case 32:
			return 312097202;
	
		case 33:
			return -1063349586;
	
		case 34:
			return 48798287;
	
		case 35:
			return -1288374309;
	
		case 36:
			return 1026199250;
	
		default:
		
	}

	return 0;
}

struct<4> func_980(Hash hParam0, BOOL bParam1) // Position - 0x1AFCF Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_1163(hParam0, bParam1, 0) };
	return func_503(hParam0, unk, unk.f_4, bParam1);
}

int func_981(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AFF4 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_728(hParam0, 0))
		return 0;

	num = func_1164(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_1165(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_1166(hParam0, false);
	}

	if (func_729(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_504(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_980(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_504(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_982(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1B0B6 Hash - 0x8F656380 ^0x6EA8E62C
{
	if (!func_1167(&uParam0))
		return 0;

	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

BOOL func_983(Hash hParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1B0D2 Hash - 0x72C1A759 ^0xD848AFAA
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
		func_1168(iParam2, -372840566);

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
	func_1169(anParam1, hParam0, unk2);
	return 1;
}

void func_984(int iParam0) // Position - 0x1B1B3 Hash - 0x204B6EA8 ^0x2CE64082
{
	Global_1300387.f_155.f_4[iParam0 /*4*/].f_1 = 0;
	return;
}

void func_985(int iParam0) // Position - 0x1B1CA Hash - 0x204B6EA8 ^0x1523BE3E
{
	Global_1300387.f_155.f_4[iParam0 /*4*/].f_2 = 0;
	return;
}

void func_986(Player plParam0) // Position - 0x1B1E1 Hash - 0x1F2EC5A4 ^0x7A00D9F8
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1300387.f_155.f_2), plParam0);
	return;
}

int func_987(Hash hParam0) // Position - 0x1B1F7 Hash - 0x9B40E1AB ^0x9B40E1AB
{
	var unk;

	if (!func_1170(&unk))
		return 0;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return 0;

	if (!func_1171(&unk, 53, 0, 0, 1))
		return 0;

	return func_1172(&unk, 11);
}

int func_988() // Position - 0x1B262 Hash - 0xD54B9272 ^0xFA76DEBE
{
	return SCRIPTS::COUNT_PLAYER_BITS(&(Global_1300387.f_155.f_2));
}

BOOL func_989(int iParam0) // Position - 0x1B276 Hash - 0xA1D29AFD ^0xA3124CE6
{
	return Global_1300387.f_155.f_3 && iParam0 != false;
}

void func_990(int iParam0) // Position - 0x1B28B Hash - 0x9A300525 ^0x86EF7131
{
	Global_1300387.f_155.f_3 = Global_1300387.f_155.f_3 - Global_1300387.f_155.f_3 && iParam0;
	return;
}

BOOL func_991(Player plParam0, Hash hParam1) // Position - 0x1B2AF Hash - 0x775D8EF6 ^0xFCAD3834
{
	return MISC::IS_BIT_SET(Global_1300387.f_155.f_4[plParam0 /*4*/].f_2, hParam1);
}

BOOL func_992(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x1B2CB Hash - 0xBAC91E24 ^0xBAC91E24
{
	var unk;

	if (!func_1170(&unk))
		return false;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return false;

	if (!func_1171(&unk, 53, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 54, hParam1, 0, 1))
		return false;

	uParam2->f_1 = { func_1173(unk) };
	*uParam2 = func_1174(unk);
	uParam2->f_9 = func_1175(unk);
	return true;
}

int func_993(Hash hParam0) // Position - 0x1B369 Hash - 0x9B40E1AB ^0x9B40E1AB
{
	var unk;

	if (!func_1170(&unk))
		return 0;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return 0;

	if (!func_1171(&unk, 51, 0, 0, 1))
		return 0;

	return func_1172(&unk, 10);
}

BOOL func_994(Player plParam0, Hash hParam1) // Position - 0x1B3D4 Hash - 0x775D8EF6 ^0xA1FB803B
{
	return MISC::IS_BIT_SET(Global_1300387.f_155.f_4[plParam0 /*4*/].f_1, hParam1);
}

BOOL func_995(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x1B3F0 Hash - 0xBAC91E24 ^0xBAC91E24
{
	var unk;

	if (!func_1170(&unk))
		return false;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return false;

	if (!func_1171(&unk, 51, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 52, hParam1, 0, 1))
		return false;

	uParam2->f_33 = func_1176(unk, joaat("PARTICLE"));
	*uParam2 = { func_1173(unk) };
	uParam2->f_8 = { func_1177(unk) };
	uParam2->f_16 = func_1178(unk);
	uParam2->f_17 = { func_1179(unk) };
	uParam2->f_20 = { func_1180(unk) };
	uParam2->f_26 = func_1181(unk);
	uParam2->f_27 = func_1182(unk);

	if (uParam2->f_33 & 32 != 0)
		uParam2->f_23 = { func_1183(unk) };

	if (uParam2->f_33 & 16 != 0)
		uParam2->f_31 = func_1184(unk);

	if (uParam2->f_33 & 8 != 0)
	{
		uParam2->f_28 = func_1185(unk);
		uParam2->f_29 = func_1186(unk);
		uParam2->f_30 = func_1187(unk);
	}

	if (uParam2->f_33 & 64 != 0)
		uParam2->f_32 = func_1188(unk);

	return true;
}

void func_996(Player plParam0, Hash hParam1) // Position - 0x1B54B Hash - 0xACEFF194 ^0xEEB71C4D
{
	MISC::SET_BIT(&(Global_1300387.f_155.f_4[plParam0 /*4*/].f_1), hParam1);
	return;
}

void func_997(Player plParam0) // Position - 0x1B567 Hash - 0x1F2EC5A4 ^0x66AA99A1
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1300387.f_155.f_2), plParam0);
	return;
}

void func_998(int iParam0) // Position - 0x1B57D Hash - 0x5EB32340 ^0x5FCE7C7A
{
	Global_1300387.f_155.f_3 = Global_1300387.f_155.f_3 || iParam0;
	return;
}

void func_999(Player plParam0, Hash hParam1) // Position - 0x1B598 Hash - 0xACEFF194 ^0xD65AF612
{
	MISC::SET_BIT(&(Global_1300387.f_155.f_4[plParam0 /*4*/].f_2), hParam1);
	return;
}

void func_1000(int iParam0) // Position - 0x1B5B4 Hash - 0xC255AE98 ^0x9F5465D3
{
	var unk;

	unk = -1;
	unk.f_3 = 255;
	*iParam0 = { unk };
	return;
}

int func_1001(int iParam0, int iParam1) // Position - 0x1B5D2 Hash - 0xEA82FE59 ^0xEA82FE59
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
	
		case -2141419899:
			return 404;
	
		case -2106445152:
			return 277;
	
		case -2106214197:
			return 102;
	
		case -2101264851:
			return 192;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
	
		case -2073072369:
			return 57;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
	
		case -2058120606:
			return 194;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 90;
	
		case -2022369555:
			return 251;
	
		case -2021582629:
			return 110;
	
		case -2020023971:
			return 263;
	
		case -1957523409:
			return 205;
	
		case -1952856164:
			return 163;
	
		case -1949204933:
			return 261;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			return 387;
	
		case -1939389836:
			return 416;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
	
		case -1852605133:
			return 10;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
	
		case -1847672446:
			return 312;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
	
		case -1840704908:
			return 274;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_1002(Player plParam0) // Position - 0x1D89E Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

void func_1003(int iParam0, int iParam1) // Position - 0x1D8CE Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_1004(BOOL bParam0) // Position - 0x1D8E3 Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x1D8F9 Hash - 0xA17D549C ^0x1EA21440
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
	
		case 1:
			return "JOHN";
	
		case 2:
			return "JAVIER";
	
		case 3:
			return "BILL";
	
		case 4:
			return "UNCLE";
	
		case 5:
			return "HOSEA";
	
		case 6:
			return "MICAH";
	
		case 7:
			return "CHARLES";
	
		case 8:
			return "SEAN";
	
		case 9:
			return "LENNY";
	
		case 10:
			return "KIERAN";
	
		case 11:
			return "SADIE";
	
		case 12:
			return "DOG";
	
		case 13:
			return "ABIGAIL";
	
		case 14:
			return "JACK";
	
		case 15:
			return "MARYBETH";
	
		case 16:
			return "MOLLY";
	
		case 17:
			return "PEARSON";
	
		case 18:
			return "STRAUSS";
	
		case 19:
			return "GRIMSHAW";
	
		case 20:
			return "KAREN";
	
		case 21:
			return "SWANSON";
	
		case 22:
			return "TILLY";
	
		case 23:
			return "TRELAWNY";
	
		case 24:
			return "CLEET";
	
		case 25:
			return "JOE";
	
		case 26:
			return "EAGLEFLIES";
	
		default:
		
	}

	return "Companion unknown";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x1DA6C Hash - 0xA17D549C ^0xE73259B3
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
	
		case 1:
			return "Day";
	
		case 2:
			return "LongDay";
	
		case 3:
			return "Afternoon";
	
		case 4:
			return "Evening";
	
		case 5:
			return "Night";
	
		default:
		
	}

	return "";
}

void func_1007(Player plParam0) // Position - 0x1DACE Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_1008(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_1008(Player plParam0) // Position - 0x1DB3A Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_1009(Hash hParam0) // Position - 0x1DB75 Hash - 0x87385CBF ^0x5933D7D7
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(95));

	if (func_1190(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

void func_1010(int iParam0) // Position - 0x1DB9E Hash - 0xA39B24D5 ^0x7EB85553
{
	Global_1940252.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940252.f_245.f_1306), 0));
	return;
}

void func_1011(int iParam0, BOOL bParam1) // Position - 0x1DBCF Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_804(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_1012(int iParam0, BOOL bParam1) // Position - 0x1DC27 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_1013(int iParam0, int iParam1) // Position - 0x1DC50 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

BOOL func_1014(int iParam0) // Position - 0x1DC78 Hash - 0x2116A64B ^0x6679CB4D
{
	var unk;
	int i;
	int num;
	int j;
	int num2;
	var unk6;
	var unk7;
	int num3;
	int num4;
	int num5;

	num5 = -1;
	num5.f_1 = -1;
	num5.f_2 = -1;
	func_810(&num5);

	if (num5 == -1)
		return 0;

	if (num5.f_1 == -1)
		return 0;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 16, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 43, iParam0, 0, 1))
		return 0;

	unk6 = unk.f_1;
	num = func_812(&unk, 7);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk.f_1 = unk6;
	
		if (!func_651(&unk, 44, i, 0, 1))
			return 0;
	
		if (!func_651(&unk, 45, 0, 0, 0))
		{
		}
		else
		{
			unk7 = unk.f_1;
			num2 = func_812(&unk, 9);
		
			for (j = 0; j <= num2 - 1; j = j + 1)
			{
				unk.f_1 = unk7;
			
				if (!func_651(&unk, 46, j, 0, 1))
					return 0;
			
				num3 = { func_827(unk) };
			
				switch (num3)
				{
					case 1204986881:
						num4 = func_1191(num5, num5.f_1, num3.f_1);
						num3.f_1 = func_1192(num4);
						break;
				
					case joaat("Stat"):
						num3.f_4 = { func_353(num5, num5.f_1, num3.f_1, 1) };
						break;
				}
			
				if (!func_828(&num3, 4))
					return 0;
			}
		}
	}

	return 1;
}

int func_1015(Any* panParam0) // Position - 0x1DDEB Hash - 0x24612FE5 ^0x24612FE5
{
	return func_855(panParam0, 82, 1);
}

int func_1016(Any* panParam0) // Position - 0x1DDFC Hash - 0x8F656B4A ^0x8F656B4A
{
	return func_855(panParam0, 78, 1);
}

Hash func_1017(Hash hParam0, BOOL bParam1) // Position - 0x1DE0D Hash - 0xBBDA5425 ^0xCCFCE973
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

const char* func_1018(const char* sParam0, int iParam1) // Position - 0x1DEAF Hash - 0x9E99F03 ^0x47A7C220
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1019() // Position - 0x1DEC9 Hash - 0x751BAE0C ^0x751BAE0C
{
	return 4;
}

float func_1020(float fParam0, float fParam1) // Position - 0x1DED2 Hash - 0x5400F11 ^0x85531C69
{
	return BUILTIN::LOG10(fParam1) / BUILTIN::LOG10(fParam0);
}

int func_1021(int iParam0, int iParam1) // Position - 0x1DEE7 Hash - 0xBCEB32A ^0xBCEB32A
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 13;
			
				case 2:
					return 2;
			
				case 3:
					return 15;
			
				case 4:
					return 2;
			
				default:
				
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 13;
			
				case 2:
					return 2;
			
				case 3:
					return 13;
			
				case 4:
					return 2;
			
				default:
				
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 0;
			
				case 4:
					return 0;
			
				default:
				
			}
			break;
	
		default:
			break;
	}

	return 0;
}

int func_1022(var uParam0, int iParam1) // Position - 0x1DFD1 Hash - 0x54F2C4F7 ^0xAB016D7
{
	int value;

	value = func_819(uParam0, iParam1, false);
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value))) - 1;
}

int func_1023(int iParam0, var uParam1) // Position - 0x1DFF5 Hash - 0xEDF869B3 ^0x50477772
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_2;
	
		case 1:
			return uParam1->f_4;
	
		case 2:
			return uParam1->f_5;
	
		case 3:
			return uParam1->f_1;
	
		case 4:
			return *uParam1;
	
		default:
		
	}

	return -1;
}

var func_1024(Any* panParam0) // Position - 0x1E049 Hash - 0xC6F831E7 ^0xC6F831E7
{
	return func_855(panParam0, 80, 1);
}

void func_1025(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E05A Hash - 0xDB990ED0 ^0x23E5B83C
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("AWARD_PROCESS"):
				uParam5->f_2 = flag;
				break;
		
			case joaat("AWARD"):
				uParam5->f_1 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_1026(int iParam0, Any* panParam1) // Position - 0x1E0D7 Hash - 0x29BC7656 ^0xE987DCB5
{
	MISC::COPY_SCRIPT_STRUCT(&Global_1296390.f_118[iParam0 /*6*/], panParam1, 4);
	return;
}

void func_1027(int iParam0, BOOL bParam1) // Position - 0x1E0F0 Hash - 0xCF7D517E ^0x722F64E5
{
	Global_1296390.f_118[iParam0 /*6*/].f_4 = bParam1;
	return;
}

void func_1028(int iParam0, var uParam1) // Position - 0x1E106 Hash - 0xCF7D517E ^0x61DCA1E2
{
	Global_1296390.f_118[iParam0 /*6*/].f_5 = uParam1;
	return;
}

var func_1029(Any* panParam0) // Position - 0x1E11C Hash - 0x4179D10F ^0x4179D10F
{
	return func_855(panParam0, 70, 1);
}

var func_1030(Any* panParam0) // Position - 0x1E12D Hash - 0x41DD459A ^0x41DD459A
{
	return func_855(panParam0, 71, 1);
}

var func_1031(Any* panParam0) // Position - 0x1E13E Hash - 0x534FE990 ^0x534FE990
{
	return func_1038(panParam0, 69, 1);
}

var func_1032(Any* panParam0) // Position - 0x1E14F Hash - 0x534FE990 ^0x534FE990
{
	return func_855(panParam0, 69, 1);
}

var func_1033(Any* panParam0, BOOL bParam1) // Position - 0x1E160 Hash - 0xED1EF13 ^0xED1EF13
{
	return func_1038(panParam0, 99, bParam1);
}

void func_1034(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E172 Hash - 0xDB990ED0 ^0x23E5B83C
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("prerequisite"):
				uParam5->f_3 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

BOOL func_1035(int iParam0, int iParam1) // Position - 0x1E1E0 Hash - 0x2ADE7B68 ^0x2ADE7B68
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return iParam1 & 2 == 0;
	
		case 3:
			return iParam1 & 1 == 0;
	
		case 4:
			return true;
	
		default:
		
	}

	return true;
}

BOOL func_1036(Hash hParam0, int iParam1) // Position - 0x1E230 Hash - 0xEF6C0A1 ^0x7FF2DD30
{
	switch (iParam1)
	{
		case -1989751792:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case joaat("locked"):
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0);
	
		case joaat("VISIBLE"):
			return UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 105823627:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 127786994:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case joaat("UNLOCKED"):
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0);
	
		case 848504716:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case joaat("HIDDEN"):
			return !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 1605840866:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 1699110072:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 1916788071:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 2078976555:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		default:
		
	}

	return false;
}

BOOL func_1037(Any anParam0, int iParam1) // Position - 0x1E35E Hash - 0xE318DB51 ^0xCC8A6613
{
	switch (iParam1)
	{
		case joaat("UNCLAIMED"):
			return !NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(anParam0);
	
		case joaat("CLAIMED"):
			return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(anParam0);
	
		default:
		
	}

	return false;
}

var func_1038(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x1E391 Hash - 0xB8727DF2 ^0x179B86EB
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&unk, panParam0);
	return unk;
}

int func_1039() // Position - 0x1E3AD Hash - 0x37FF57C4 ^0xEAE9637D
{
	int value;

	value = func_818();
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value))) - 1;
}

int func_1040(Any* panParam0) // Position - 0x1E3CC Hash - 0x24B69D02 ^0x24B69D02
{
	return func_855(panParam0, 89, 1);
}

struct<6> func_1041(int iParam0) // Position - 0x1E3DD Hash - 0x663A0F57 ^0x663A0F57
{
	var unk;
	int num;
	var unk11;

	if (!func_650(&unk))
		return unk11;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk11;

	if (!func_651(&unk, 15, 0, 0, 1))
		return unk11;

	if (!func_651(&unk, 50, iParam0, 0, 1))
		return unk11;

	num = iParam0;
	num.f_1 = func_1194(&unk);
	num.f_2 = func_1195(&unk);
	num.f_3 = func_1196(&unk);

	switch (num.f_3)
	{
		case joaat("int"):
			num.f_4 = func_1197(&unk);
			break;
	
		default:
			break;
	}

	func_1198(unk, &num);
	return num;
}

BOOL func_1042(var uParam0, BOOL bParam1) // Position - 0x1E489 Hash - 0xCD6D109E ^0x2713AB9C
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	if (uParam0->f_5 & 1 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_338(8))
			return false;
	}

	if (uParam0->f_5 & 2 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_617(unk.f_3, unk.f_3.f_1, unk.f_3.f_2, 0))
			return false;
	}

	return true;
}

int func_1043(Any* panParam0) // Position - 0x1E54A Hash - 0x3E293D90 ^0x3E293D90
{
	return func_855(panParam0, 67, 1);
}

var func_1044(Any* panParam0) // Position - 0x1E55B Hash - 0x22E1EAF8 ^0x22E1EAF8
{
	return func_855(panParam0, 94, 1);
}

void func_1045(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E56C Hash - 0xDB990ED0 ^0x23E5B83C
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("REPLAY"):
				uParam5->f_4 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

BOOL func_1046(var uParam0, BOOL bParam1) // Position - 0x1E5DA Hash - 0xCD6D109E ^0x2713AB9C
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	if (uParam0->f_4 & 1 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_338(8))
			return false;
	}

	if (uParam0->f_4 & 2 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_617(unk.f_3, unk.f_3.f_1, unk.f_3.f_2, 0))
			return false;
	}

	return true;
}

int func_1047(Player plParam0) // Position - 0x1E69B Hash - 0x86C8A729 ^0x86C8A729
{
	int num;
	int num2;

	num = func_497(plParam0);
	num2 = func_874(plParam0, num);

	if (num != num2)
	{
		if (func_498(num2))
		{
			func_1199(num2);
			num = num2;
		}
	}

	return num;
}

void func_1048(int iParam0, BOOL bParam1) // Position - 0x1E6D1 Hash - 0xF4927AD3 ^0x956B86A3
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_1[iParam0] = Global_1138673[player /*56*/].f_1[iParam0] - Global_1138673[player /*56*/].f_1[iParam0] && bParam1;
	return;
}

int func_1049(int iParam0) // Position - 0x1E70D Hash - 0xC3B08E57 ^0xC3B08E57
{
	if (iParam0 < 0 || iParam0 >= 32)
		return -1;

	return func_875(iParam0);
}

BOOL func_1050(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x1E731 Hash - 0xCDE36A1B ^0x10254ED8
{
	return Global_1138673[plParam0 /*56*/].f_1[iParam1] && bParam2 != false;
}

int func_1051(var uParam0, var uParam1) // Position - 0x1E74C Hash - 0xC6528C89 ^0xC6528C89
{
	if (func_863())
		return 0;

	if (!func_18(uParam0))
		return 0;

	Global_1051268 = { uParam0 };
	return 1;
}

void func_1052(int iParam0, BOOL bParam1) // Position - 0x1E77A Hash - 0x9F0B6C3B ^0x36D803A3
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_1[iParam0] = Global_1138673[player /*56*/].f_1[iParam0] || bParam1;
	return;
}

BOOL func_1053(var uParam0, var uParam1) // Position - 0x1E7A7 Hash - 0x37B45816 ^0x37B45816
{
	int num;

	num = func_372(uParam0);
	return num == 3 || num == 4;
}

void func_1054(int iParam0) // Position - 0x1E7C7 Hash - 0x646928F0 ^0x646928F0
{
	func_1200(iParam0);
	return;
}

void func_1055(int iParam0) // Position - 0x1E7D5 Hash - 0xE1AF850C ^0xA805FDD8
{
	if (!func_1050(PLAYER::PLAYER_ID(), iParam0, 8))
		return;

	func_1201();
	Global_1110244.f_15 = 1;
	func_1048(iParam0, 8);
	return;
}

void func_1056(int iParam0) // Position - 0x1E803 Hash - 0x73C1F6C ^0x73C1F6C
{
	func_1202(iParam0);
	func_1203(iParam0, 0);
	return;
}

struct<2> func_1057(int iParam0) // Position - 0x1E818 Hash - 0xA307BFDA ^0x91C17B32
{
	if (iParam0 < 0)
		return func_838();

	return Global_1207480.f_231[iParam0 /*15*/].f_5;
}

int func_1058(int iParam0) // Position - 0x1E83B Hash - 0x95AD1260 ^0x7A99A358
{
	if (!func_871(iParam0))
		return -1;

	return Global_1207480.f_231[iParam0 /*15*/].f_1;
}

struct<2> func_1059(int iParam0) // Position - 0x1E85D Hash - 0x6A8249B9 ^0xDE40EE6D
{
	return Global_1219595.f_1[iParam0 /*10*/].f_4;
}

void func_1060(int iParam0) // Position - 0x1E873 Hash - 0x76A2D563 ^0x6B0E0CA7
{
	int i;
	int num;

	num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;

	if (num > 1)
		num = 1;

	for (i = 0; i < num; i = i + 1)
	{
		func_1204(iParam0, i);
		func_1205(iParam0, i);
	}

	func_1069(iParam0, 0);
	func_1206(iParam0);
	func_1072(iParam0);
	return;
}

BOOL func_1061(int iParam0, Player plParam1, int iParam2) // Position - 0x1E8CB Hash - 0x7447117F ^0xA87E3C51
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return false;

	return MISC::IS_BIT_SET(Global_1217218[plParam1 /*72*/][iParam0], iParam2);
}

void func_1062(int iParam0, var uParam1, var uParam2) // Position - 0x1E8F3 Hash - 0xAC54908F ^0xC2E64A96
{
	Global_1219595.f_1[iParam0 /*10*/].f_4 = { uParam1 };
	Global_1219595.f_1[iParam0 /*10*/].f_6 = func_19(uParam1);
	return;
}

void func_1063(int iParam0, int iParam1) // Position - 0x1E921 Hash - 0xC6CEE6E2 ^0x17C0383A
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (func_1061(iParam0, playerIndex, iParam1))
		return;

	MISC::SET_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

BOOL func_1064(int iParam0, int iParam1) // Position - 0x1E951 Hash - 0xF1526A68 ^0xC9948D3F
{
	Player player;
	int i;

	for (i = 0; i < func_1207(); i = i + 1)
	{
		player = func_1208(i);
	
		if (func_1061(iParam0, player, iParam1))
			return true;
	}

	return func_1061(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_1065(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1E993 Hash - 0xEC6B84EC ^0xEC6B84EC
{
	var unk;
	int num;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (func_965(unk))
		return;

	if (!func_1053(unk))
		return;

	if (func_1061(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	if (bParam1)
		num = 4;
	else
		num = 0;

	func_966(unk, false, num, iParam2, false);
	func_1063(iParam0, 4);
	return;
}

void func_1066(int iParam0, int iParam1) // Position - 0x1EA05 Hash - 0x35C2F590 ^0x35C2F590
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (func_965(unk))
		return;

	if (!func_1053(unk))
		return;

	if (func_1061(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	func_966(unk, false, 1, iParam1, false);
	func_1063(iParam0, 5);
	return;
}

int func_1067(int iParam0) // Position - 0x1EA68 Hash - 0x8094B681 ^0xE82FE76C
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13;
}

BOOL func_1068(int iParam0) // Position - 0x1EA7F Hash - 0xFA5418D1 ^0x7824B371
{
	if (!func_1080(iParam0))
		return false;

	if (func_1067(iParam0) >= 5)
		return false;

	if (func_1067(iParam0) <= 0)
		return false;

	if (!func_1061(iParam0, PLAYER::PLAYER_ID(), 0))
		return false;

	return true;
}

void func_1069(int iParam0, int iParam1) // Position - 0x1EAC5 Hash - 0x27BDC86C ^0x27BDC86C
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (!func_965(unk) && !func_1053(unk))
		return;

	func_1209(iParam0, 2);
	func_1209(iParam0, 3);
	func_1063(iParam0, 6);
	func_966(unk, false, 2, iParam1, false);
	return;
}

int func_1070(int iParam0) // Position - 0x1EB25 Hash - 0xEA791A51 ^0x8AD2D9FC
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_4;
}

void func_1071(int iParam0) // Position - 0x1EB3A Hash - 0xA7B4E890 ^0xA7B4E890
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (func_965(unk))
		return;

	if (func_1053(unk))
		return;

	func_1063(iParam0, 2);
	func_1209(iParam0, 3);
	func_1209(iParam0, 6);
	func_374(unk);
	return;
}

void func_1072(int iParam0) // Position - 0x1EB95 Hash - 0x6FEEF6D9 ^0x313055B7
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	Global_1217218[playerIndex /*72*/][iParam0] = 0;
	return;
}

void func_1073(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1EBB0 Hash - 0x97DAA722 ^0x97DAA722
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (!func_965(unk))
		return;

	if (func_1053(unk))
		return;

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);

	func_1063(iParam0, 3);
	func_1210(unk, true, bParam2, bParam3);
	return;
}

BOOL func_1074(int iParam0) // Position - 0x1EC16 Hash - 0x3101135D ^0x3101135D
{
	Player player;
	int i;
	var unk;

	for (i = 0; i < func_1207(); i = i + 1)
	{
		player = func_1208(i);
	
		if (func_1061(iParam0, player, 2) && !(func_1061(iParam0, player, 4) || func_1061(iParam0, player, 5) || func_1061(iParam0, player, 6)))
			return false;
	}

	unk = { func_1059(iParam0) };
	return !(func_965(unk) || func_1053(unk));
}

void func_1075(int iParam0, int iParam1) // Position - 0x1EC99 Hash - 0x3803D46E ^0x3803D46E
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	scriptHash = func_1211(iParam0);
	num = func_1212(iParam0, iParam1);
	num2 = func_1213(iParam0, iParam1);
	num3 = func_1067(iParam0);

	switch (func_1214(iParam0, iParam1))
	{
		case -1:
			if (!func_1068(iParam0))
				return;
		
			func_1215(iParam0, iParam1, 1);
			break;
	
		case 0:
			if (!func_1068(iParam0))
				return;
		
			func_1215(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
				return;
		
			if (num2 >= 3)
				return;
		
			func_1215(iParam0, iParam1, 2);
			break;
	
		case 2:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_1215(iParam0, iParam1, 1);
				return;
			}
		
			if (num2 >= 3)
			{
				func_1215(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_1217(iParam0, iParam1))
				return;
		
			func_1218(iParam0, iParam1, 0);
			func_1215(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_1215(iParam0, iParam1, 7);
				return;
			}
		
			if (num2 >= 3)
			{
				func_1215(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_1219(iParam0, iParam1))
				return;
		
			func_1215(iParam0, iParam1, 4);
			break;
	
		case 4:
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
			{
				if (!func_1220(iParam0, iParam1))
				{
					func_1221(iParam0, iParam1, 0);
					func_1222(iParam0, iParam1, 0);
					func_1215(iParam0, iParam1, 2);
				}
			
				return;
			}
		
			func_1215(iParam0, iParam1, 5);
			break;
	
		case 5:
			if (func_1058(iParam0) <= 0 || num3 >= 5 || num3 < 1)
				func_1204(iParam0, iParam1);
		
			if (func_1223(iParam0, iParam1))
				func_1204(iParam0, iParam1);
		
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
				return;
		
			if (func_1220(iParam0, iParam1))
				return;
		
			func_1221(iParam0, iParam1, 0);
		
			if (func_1084(iParam0, 4) || func_1084(iParam0, 5) || func_1067(iParam0) > 2 && num2 == 3)
			{
				func_1215(iParam0, iParam1, 6);
			}
			else
			{
				func_1222(iParam0, iParam1, 0);
				func_1215(iParam0, iParam1, 8);
			}
			break;
	
		case 6:
			if (!func_1074(iParam0))
				return;
		
			func_1215(iParam0, iParam1, 7);
			break;
	
		case 7:
			func_1216(iParam0, iParam1);
			func_1215(iParam0, iParam1, 8);
			break;
	
		case 8:
			func_1063(iParam0, 7);
		
			if (num2 == 2 || num2 == 3)
				return;
		
			func_1215(iParam0, iParam1, 1);
			func_1209(iParam0, 7);
			break;
	}

	return;
}

BOOL func_1076(int iParam0, int iParam1) // Position - 0x1EF91 Hash - 0xD5C4F1A9 ^0xC7BF6
{
	int volLockRequestId;

	volLockRequestId = func_1224(iParam0, iParam1);

	if (volLockRequestId == 0)
		return true;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(volLockRequestId))
	{
		func_1225(iParam0, iParam1, 0);
		return true;
	}

	func_1225(iParam0, iParam1, 0);
	return true;
}

void func_1077(int iParam0, int iParam1) // Position - 0x1EFCE Hash - 0x170A1354 ^0x170A1354
{
	int num;
	int num2;

	if (!func_858(iParam0, 8))
		return;

	num = func_1226(iParam0, iParam1);
	num2 = func_1058(iParam0);

	if (!func_1080(iParam0) || func_1067(iParam0) >= 5)
	{
		if (num != 1)
		{
			func_1227(iParam0, iParam1);
			func_1228(iParam0, iParam1, 1);
		}
	
		return;
	}

	switch (num)
	{
		case -2:
			break;
	
		case -1:
			if (!func_18(func_1057(iParam0)))
				return;
		
			if (func_1229(iParam0, iParam1) <= 0)
			{
				func_1228(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (num2 == 1)
					func_1228(iParam0, iParam1, 5);
				else
					func_1228(iParam0, iParam1, 2);
			
				return;
			}
			break;
	
		case 0:
			if (func_1229(iParam0, iParam1) > 0)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 1:
			func_1228(iParam0, iParam1, -1);
			break;
	
		case 2:
			if (func_1230(iParam0, iParam1) != 0)
			{
				func_1228(iParam0, iParam1, 4);
				return;
			}
		
			func_1231(iParam0, iParam1, false);
			func_1228(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (func_1224(iParam0, iParam1) == 0)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
		
			if (func_1232(iParam0, iParam1))
			{
				func_1228(iParam0, iParam1, 4);
				return;
			}
			break;
	
		case 4:
			if (num2 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1230(iParam0, iParam1), 160);
				func_1228(iParam0, iParam1, 7);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_1230(iParam0, iParam1)))
			{
				func_1233(iParam0, iParam1);
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 5:
			if (func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2 || num2 > 1)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 6:
			if (func_1224(iParam0, iParam1) == 0)
			{
				func_1228(iParam0, iParam1, 5);
				return;
			}
		
			if (func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2 || num2 > 1)
			{
				func_1076(iParam0, iParam1);
				func_1228(iParam0, iParam1, 2);
				return;
			}
		
			if (func_1232(iParam0, iParam1))
			{
				func_1228(iParam0, iParam1, 7);
				return;
			}
			break;
	
		case 7:
			if (func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2 || num2 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1230(iParam0, iParam1), 32);
				func_1228(iParam0, iParam1, 4);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_1230(iParam0, iParam1)))
			{
				func_1233(iParam0, iParam1);
				func_1228(iParam0, iParam1, 5);
				return;
			}
			break;
	}

	return;
}

void func_1078(int iParam0, int iParam1) // Position - 0x1F290 Hash - 0xD250DF9F ^0xD250DF9F
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	if (!func_858(iParam0, 16))
		return;

	scriptHash = func_1211(iParam0);
	num = func_1212(iParam0, iParam1);
	num3 = func_1213(iParam0, iParam1);

	if (num3 > 0)
	{
		if (!func_1080(iParam0))
		{
			func_1234(iParam0, iParam1, 0);
			return;
		}
	}

	switch (num3)
	{
		case -1:
			if (!func_18(func_1057(iParam0)))
				return;
		
			if (func_1235(iParam0, iParam1) <= 0)
			{
				func_1234(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_1234(iParam0, iParam1, 1);
				return;
			}
			break;
	
		case 0:
			if (!func_1080(iParam0))
				return;
		
			if (func_1235(iParam0, iParam1) <= 0)
				return;
		
			num2 = func_1236(iParam0);
		
			if (num2 != -15 && func_1237(num2))
				return;
		
			func_1234(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (func_1238(iParam0, iParam1, 0))
			{
				func_1234(iParam0, iParam1, 2);
				func_1089(iParam0, 3);
				return;
			}
			break;
	
		case 2:
			if (!func_1238(iParam0, iParam1, 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, false, 0))
			{
				func_1234(iParam0, iParam1, 3);
				return;
			}
		
			if (func_1067(iParam0) >= 3)
			{
				func_1234(iParam0, iParam1, 3);
				return;
			}
			break;
	
		case 3:
			if (func_1067(iParam0) >= 3)
				return;
		
			if (!func_1239(iParam0, iParam1))
			{
				func_1234(iParam0, iParam1, 2);
				return;
			}
		
			if (func_1083(iParam0) != 255)
				func_1089(iParam0, 2);
			else
				func_1089(iParam0, 1);
		
			num2 = func_1236(iParam0);
		
			if (num2 != -15 && func_1237(num2))
			{
				func_1234(iParam0, iParam1, 0);
				return;
			}
		
			if (func_1067(iParam0) >= 4)
				return;
		
			if (func_1240(iParam0, 7))
				return;
		
			func_1234(iParam0, iParam1, 1);
			break;
	}

	return;
}

void func_1079(int iParam0, int iParam1) // Position - 0x1F47A Hash - 0x763D47A3 ^0xBC695A59
{
	Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
	return;
}

BOOL func_1080(int iParam0) // Position - 0x1F493 Hash - 0x315E0CA5 ^0x315E0CA5
{
	BOOL flag;

	flag = !func_1242(func_1059(iParam0), func_1241(iParam0), 0);
	return flag;
}

int func_1081(int iParam0) // Position - 0x1F4B1 Hash - 0x9BC61F50 ^0x1FCD5A30
{
	var unk;
	int num;
	int num2;
	int num3;

	if (!func_871(iParam0))
		return 0;

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

	if (func_1243(iParam0))
		Global_1207480.f_23[num2] = Global_1207480.f_23[num2] - 1;

	return 1;
}

void func_1082(int iParam0, Player plParam1) // Position - 0x1F5A8 Hash - 0xD6A46751 ^0xB4A9A77D
{
	if (iParam0 < 0)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		return;

	Global_1207480.f_2505[iParam0 /*6*/].f_4 = GANG::NETWORK_GET_GANG_ID(plParam1);
	Global_1207480.f_2505[iParam0 /*6*/].f_5 = plParam1;
	return;
}

Player func_1083(int iParam0) // Position - 0x1F5F5 Hash - 0xEA791A51 ^0x57DC4D4C
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_5;
}

BOOL func_1084(int iParam0, int iParam1) // Position - 0x1F60A Hash - 0x856C6364 ^0x41943BAB
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_1061(iParam0, player, iParam1))
		{
			return true;
		}
	}

	return false;
}

BOOL func_1085(int iParam0) // Position - 0x1F64C Hash - 0xAAC0DEAC ^0x33B44792
{
	int num;
	var value;

	if (!func_858(iParam0, 512))
		return false;

	num = func_1244(iParam0);

	if (num <= 0)
		return false;

	value = func_291(func_1245(iParam0, 0), 0f, 0f, 0f, (float)num, (float)num, (float)num * 2, joaat("volSphere"), false, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&value) <= 0;
}

BOOL func_1086(int iParam0) // Position - 0x1F6A2 Hash - 0x4DEBBAF5 ^0xD9D12673
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_1246(iParam0, player))
		{
			return false;
		}
	}

	return true;
}

void func_1087(int iParam0) // Position - 0x1F6E3 Hash - 0x91092572 ^0xBC3CCFE5
{
	Player player;
	Player gangLeader;
	int gangId;

	if (Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 & 4096 != 0)
		return;

	player = Global_1207480.f_2505[iParam0 /*6*/].f_5;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		gangId = GANG::NETWORK_GET_GANG_ID(player);
	
		if (Global_1207480.f_2505[iParam0 /*6*/].f_4 != gangId)
		{
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1207480.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1207480.f_2505[iParam0 /*6*/].f_4) > 0)
			{
				gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1207480.f_2505[iParam0 /*6*/].f_4);
				func_1082(iParam0, gangLeader);
			}
			else if (GANG::NETWORK_GET_GANG_LEADER(gangId) == player)
			{
				Global_1207480.f_2505[iParam0 /*6*/].f_4 = gangId;
			}
			else
			{
				func_1247(iParam0);
			}
		}
	
		return;
	}

	if (Global_1207480.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_1247(iParam0);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_2505[iParam0 /*6*/].f_4))
	{
		func_1247(iParam0);
		return;
	}

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1207480.f_2505[iParam0 /*6*/].f_4);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
	{
		func_1247(iParam0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_1247(iParam0);
		return;
	}

	func_1082(iParam0, gangLeader);
	return;
}

BOOL func_1088(int iParam0) // Position - 0x1F843 Hash - 0x56BCE4E5 ^0xEDD3B802
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (Global_1217218[player /*72*/][iParam0] > 127)
		{
			return true;
		}
	}

	return false;
}

void func_1089(int iParam0, int iParam1) // Position - 0x1F889 Hash - 0xCF7D517E ^0x74EBD799
{
	Global_1207480.f_231[iParam0 /*15*/].f_1 = iParam1;
	return;
}

int func_1090(var uParam0) // Position - 0x1F89F Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

struct<40> func_1091(var uParam0, int iParam1) // Position - 0x1F8AA Hash - 0xB9C722BD ^0xB9C722BD
{
	var unk;

	unk = { func_1248(uParam0, iParam1) };
	func_1249(uParam0, iParam1);
	return unk;
}

BOOL func_1092(var uParam0, var uParam1) // Position - 0x1F8CC Hash - 0xEED5D0E7 ^0x371A5323
{
	if (uParam0->f_2 == -1)
		return false;

	if (uParam1->f_2 == -1)
		return false;

	if (uParam0->f_2 != uParam1->f_2)
		return false;

	if (uParam0->f_3 != uParam1->f_3)
		return false;

	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
			return true;
	
		return false;
	}

	if (uParam0->f_5 == -1)
		return false;

	if (uParam1->f_5 == -1)
		return false;

	if (uParam0->f_5 != uParam1->f_5)
		return false;

	if (uParam0->f_7 != uParam1->f_7)
		return false;

	if (uParam0->f_8 != uParam1->f_8)
		return false;

	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
		return false;

	if (!func_929(uParam0->f_8.f_5, uParam1->f_8.f_5))
		return false;

	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
		return false;

	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
		return false;

	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
		return false;

	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
		return false;

	if (!func_929(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
		return false;

	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
		return false;

	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
		return false;

	return true;
}

void func_1093(var uParam0, int iParam1) // Position - 0x1FA5F Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_1094(var uParam0) // Position - 0x1FA6C Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_1095(var uParam0) // Position - 0x1FA77 Hash - 0x5EFE183E ^0x62E9C2B9
{
	if (func_18(*uParam0))
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

int func_1096(var uParam0, int iParam1) // Position - 0x1FABB Hash - 0x989AAD62 ^0x4D14C098
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int i;

	num = func_1250(iParam1);
	num2 = (num + Global_1207480.f_3[iParam1]) - 1;

	if (Global_1207480.f_23[iParam1] != 0)
		num2 = (num + func_1251(iParam1)) - 1;

	flag = func_18(*uParam0);
	flag2 = uParam0->f_2 != 0 && uParam0->f_3 != -1;
	flag3 = uParam0->f_2 != 0 && uParam0->f_4 != -1;
	flag4 = uParam0->f_2 != 0 && uParam0->f_5 != -1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (flag)
			if (func_929(Global_1207480.f_231[i /*15*/].f_5, *uParam0))
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

BOOL func_1097(int iParam0) // Position - 0x1FC1A Hash - 0x2AC5FE0B ^0x23E01FF
{
	int gangId;

	gangId = func_868(iParam0);

	if (gangId == 0)
		return false;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(gangId))
		return false;

	return true;
}

void func_1098(var uParam0, var uParam1) // Position - 0x1FC43 Hash - 0x72B9B338 ^0xC2D255C2
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
	unk.f_2 = 0;
	unk.f_5 = 7;
	unk.f_8.f_1 = 2;
	unk.f_8 = 1;
	unk.f_8.f_5.f_9 = 1;
	unk.f_8.f_5 = { uParam0 };
	func_1252(&(Global_1107816.f_33.f_513), &unk, false, 0, 0, 0, 0);
	return;
}

void func_1099(int iParam0, int iParam1) // Position - 0x1FD32 Hash - 0xADE609F4 ^0xA17E7A8
{
	Global_1107816.f_33[iParam0 /*16*/].f_3.f_7 = iParam1;
	return;
}

int func_1100(int iParam0) // Position - 0x1FD4A Hash - 0x4B8D5AEA ^0x4E4FC3F5
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_7;
}

int func_1101() // Position - 0x1FD60 Hash - 0x8190E5D8 ^0xED214EB0
{
	return Global_1901671.f_319.f_45;
}

BOOL func_1102(var uParam0, var uParam1, int iParam2) // Position - 0x1FD71 Hash - 0x939E6818 ^0xC229B78F
{
	int gangId;
	BOOL flag;
	int num;

	gangId = func_868(iParam2);
	flag = gangId != 0 && GANG::NETWORK_IS_GANG_IN_SESSION(gangId);

	if (Global_1110244.f_18)
	{
		num = func_1253(uParam0);
	
		if (func_1254(num, flag))
		{
			func_1098(uParam0);
			return true;
		}
	}
	else
	{
		func_1098(uParam0);
		return true;
	}

	return false;
}

BOOL func_1103(int iParam0) // Position - 0x1FDCC Hash - 0xD91EF218 ^0x280302FE
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!Global_1295666.f_17[i])
		{
		}
		else
		{
			flag = flag || Global_1138673[i /*56*/].f_1[iParam0];
		}
	}

	return flag;
}

void func_1104(int iParam0) // Position - 0x1FE10 Hash - 0xD315F882 ^0xD6477230
{
	Global_1107816.f_33[iParam0 /*16*/].f_1 = -1;
	return;
}

int func_1105() // Position - 0x1FE25 Hash - 0x8190E5D8 ^0xCA274B68
{
	return Global_1901671.f_319.f_46;
}

int func_1106() // Position - 0x1FE36 Hash - 0xD0D18804 ^0x2908BCA7
{
	int i;
	int num;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_868(i) == 0)
		{
		}
		else if (!GANG::NETWORK_IS_GANG_IN_SESSION(func_868(i)))
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_1107() // Position - 0x1FE77 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1107816.f_750.f_1;
}

void func_1108() // Position - 0x1FE88 Hash - 0x2966C5FB ^0x474F3090
{
	var unk;
	var value;
	Player sessionHost;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;

	if (!func_666())
		return;

	sessionHost = NETWORK::_NETWORK_GET_SESSION_HOST();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(sessionHost))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(sessionHost))
		return;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, sessionHost);
	unk.f_10 = PLAYER::PLAYER_ID();
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(unk.f_10);
	unk.f_4 = 10;
	func_458();
	func_1121(&unk, value);
	return;
}

void func_1109(int iParam0) // Position - 0x1FF60 Hash - 0x8BF028E8 ^0x8BF028E8
{
	func_1255(iParam0);
	func_1104(iParam0);
	func_1256(iParam0);
	return;
}

int func_1110(int iParam0, var uParam1) // Position - 0x1FF7A Hash - 0x350A835D ^0x9FF6240D
{
	BOOL flag;

	flag = func_1103(iParam0);

	if (flag & 8 != 0)
		return 0;

	if (Global_1110244.f_19)
		if (!func_930(iParam0, 4))
			if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
				return 0;
	else if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
		return 0;

	func_1256(iParam0);
	func_1104(iParam0);
	*uParam1 = 0;
	return 1;
}

int func_1111(int iParam0, var uParam1) // Position - 0x1FFDD Hash - 0xDA505259 ^0xDA505259
{
	func_1256(iParam0);
	func_1104(iParam0);
	*uParam1 = 0;
	return 1;
}

struct<2> func_1112() // Position - 0x1FFF6 Hash - 0xA4EFD4EB ^0x10B3BBE9
{
	return Global_1110244.f_11;
}

var func_1113() // Position - 0x2000A Hash - 0xA1DBD1D9 ^0xB5522AE7
{
	return Global_1110244.f_11.f_3;
}

void func_1114(int iParam0) // Position - 0x2001A Hash - 0x9BCDD71 ^0x36A0D111
{
	Global_1110244.f_21.f_13.f_1 = iParam0;
	return;
}

void func_1115(int iParam0) // Position - 0x2002E Hash - 0x9BCDD71 ^0xAD687E39
{
	Global_1110244.f_21.f_13.f_2 = iParam0;
	return;
}

void func_1116(int iParam0) // Position - 0x20042 Hash - 0x9BCDD71 ^0x1C736766
{
	Global_1110244.f_21.f_13.f_3 = iParam0;
	return;
}

void func_1117() // Position - 0x20056 Hash - 0xFE54BD58 ^0xC282C2D8
{
	func_1257(&(Global_1110244.f_21.f_13));
	return;
}

void func_1118() // Position - 0x2006A Hash - 0xA29E4900 ^0x238E328A
{
	Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_34 = 0;
	return;
}

int func_1119(int iParam0) // Position - 0x2007F Hash - 0xB51678BE ^0xFDD29DED
{
	if (iParam0 == 255)
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam0 < 0 || iParam0 >= 32)
		return -1;

	return Global_1155150[iParam0 /*30*/].f_3.f_1;
}

BOOL func_1120(var uParam0, int iParam1) // Position - 0x200B6 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_1121(Any* panParam0, var uParam1) // Position - 0x200C7 Hash - 0x11D3787C ^0x1C8C3901
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 9;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 31, 32, &uParam1);
	return;
}

void func_1122(int iParam0) // Position - 0x200FE Hash - 0x9BCDD71 ^0x40253DA7
{
	Global_1110244.f_21.f_112.f_1 = iParam0;
	return;
}

void func_1123(int iParam0) // Position - 0x20112 Hash - 0x42868A8 ^0xFD1E1C15
{
	Global_1110244.f_21.f_112 = iParam0;
	return;
}

void func_1124(int iParam0) // Position - 0x20124 Hash - 0x9BCDD71 ^0xE2BAC95A
{
	Global_1110244.f_21.f_112.f_2 = iParam0;
	return;
}

void func_1125(var uParam0, var uParam1) // Position - 0x20138 Hash - 0x85DF5E2E ^0xE6DCF6D0
{
	Global_1110244.f_21.f_112.f_3 = { uParam0 };
	return;
}

void func_1126(int iParam0) // Position - 0x20150 Hash - 0x9BCDD71 ^0x1B148CB9
{
	Global_1110244.f_21.f_112.f_5 = iParam0;
	return;
}

void func_1127(int iParam0) // Position - 0x20164 Hash - 0x9BCDD71 ^0xB3851AEE
{
	Global_1110244.f_21.f_112.f_6 = iParam0;
	return;
}

void func_1128(int iParam0) // Position - 0x20178 Hash - 0x9BCDD71 ^0xB34C0540
{
	Global_1110244.f_21.f_112.f_7 = iParam0;
	return;
}

void func_1129(int iParam0) // Position - 0x2018C Hash - 0x9BCDD71 ^0xB3851AEE
{
	Global_1110244.f_21.f_112.f_6 = iParam0;
	return;
}

void func_1130(Any* panParam0) // Position - 0x201A0 Hash - 0x34391AFB ^0x511DEA72
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_21.f_112.f_9), panParam0, 4);
	return;
}

BOOL func_1131(int iParam0) // Position - 0x201B9 Hash - 0xA43326DA ^0xA43326DA
{
	return iParam0 >= 0 && iParam0 < 36;
}

int func_1132(int iParam0) // Position - 0x201CF Hash - 0x1B04F1B9 ^0x662B72C8
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

BOOL func_1133(int iParam0) // Position - 0x201E3 Hash - 0xDFBA3899 ^0xDFBA3899
{
	return iParam0 >= 0 && iParam0 < 62;
}

int func_1134(int iParam0) // Position - 0x201F9 Hash - 0x4B8D5AEA ^0x16C9AF61
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_1;
}

BOOL func_1135(int iParam0) // Position - 0x2020F Hash - 0x211FDF81 ^0x211FDF81
{
	return iParam0 > -1 && iParam0 < 104;
}

int func_1136(int iParam0) // Position - 0x20225 Hash - 0x4B8D5AEA ^0xE602D7EE
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_3;
}

BOOL func_1137() // Position - 0x2023B Hash - 0x6E784062 ^0x8588B00E
{
	return Global_1110244.f_21.f_112.f_8;
}

int func_1138(int iParam0) // Position - 0x2024D Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

int func_1139(int iParam0) // Position - 0x20260 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_1258(iParam0);
}

void func_1140(int iParam0, Any* panParam1) // Position - 0x2026E Hash - 0xEB8DE22E ^0x37AE8CF7
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1107816.f_33[iParam0 /*16*/].f_3.f_9), 4);
	return;
}

Vector3 func_1141(int iParam0) // Position - 0x2028B Hash - 0xCE91891 ^0x60C80DB1
{
	return Global_1114893[iParam0 /*70*/].f_7.f_1;
}

float func_1142(int iParam0) // Position - 0x202A1 Hash - 0x7647021A ^0xE862F828
{
	return Global_1114893[iParam0 /*70*/].f_7;
}

// Unhandled jump detected. Output should be considered invalid
void func_1143(var uParam0, Any anParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x202B3 Hash - 0x51931D5B ^0x54B65FD8
{
	int num;
	int num2;
	int i;
	int value;
	var unk;
	Player player;

	unk = 7;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(anParam1, player))
		{
		}
		else
		{
			if (GANG::NETWORK_IS_GANG_LEADER(player))
			{
				uParam0->[0] = player;
				goto 0x9F;
			}
		
			if (func_1259(player, uParam2, fParam5))
			{
				if (num + 1 < 7)
				{
					uParam0->[1 + num] = player;
					num = num + 1;
				}
			}
			else if (num2 < 7)
			{
				unk[num2] = i;
				num2 = num2 + 1;
			}
		}
	}

	for (i = 0; i <= num2 - 1; i = i + 1)
	{
		value = unk[i];
		player = PLAYER::INT_TO_PLAYERINDEX(value);
	
		if (num + 1 < 7)
		{
			uParam0->[1 + num] = player;
			num = num + 1;
		}
	}

	return;
}

void func_1144(Any* panParam0, int iParam1) // Position - 0x2039E Hash - 0x10697459 ^0x2755F81C
{
	MISC::COPY_SCRIPT_STRUCT(&Global_1110244.f_4607.f_3[iParam1 /*9*/], panParam0, 5);
	return;
}

void func_1145(Any* panParam0, int iParam1) // Position - 0x203BA Hash - 0xE6C7BA38 ^0x6524F3B3
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &Global_1110244.f_4607.f_3[iParam1 /*9*/], 5);
	return;
}

void func_1146(Any* panParam0, int iParam1) // Position - 0x203D6 Hash - 0xF7CCC756 ^0x57C570FC
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_4607.f_3[iParam1 /*9*/].f_5), panParam0, 4);
	return;
}

void func_1147(Any* panParam0, int iParam1) // Position - 0x203F4 Hash - 0xB90A4BFD ^0x405335D9
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &(Global_1110244.f_4607.f_3[iParam1 /*9*/].f_5), 4);
	return;
}

void func_1148(int iParam0) // Position - 0x20412 Hash - 0xB14644B ^0xA5A3F761
{
	Global_1149432.f_4920[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149432.f_4920[iParam0 /*3*/].f_2 = UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149432.f_4920[iParam0 /*3*/].f_1 = UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3);
	return;
}

Hash func_1149(var uParam0, var uParam1) // Position - 0x20469 Hash - 0x39F26DE7 ^0x39F26DE7
{
	return func_19(uParam0);
}

int func_1150(BOOL bParam0, Hash hParam1) // Position - 0x20479 Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_21())
		return 0;

	if (!func_26())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_1260(&Global_0, 8);

	func_1260(&Global_0, 1);
	return 1;
}

void func_1151(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x204CF Hash - 0xFA04F275 ^0x4DC935EC
{
	int deedType;
	Hash deedHash;
	int data;
	char* contentId;

	deedType = func_1261(func_1157(uParam0));
	deedHash = func_1149(uParam0);
	contentId = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_60() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		contentId = func_1262(Global_265213.f_122484.f_80.f_22);
		func_1263(uParam0, &data, iParam2);
	}

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam4))
	{
		data.f_4 = plParam4;
		data.f_3 = iParam5;
	}
	else
	{
		data.f_4 = 255;
		data.f_3 = 0;
	}

	if (Global_1072759.f_16.f_1)
		data.f_6 = 1;

	data.f_5 = Global_1072759.f_16.f_2;

	if (data.f_5 == -1)
		data.f_5 = deedHash;

	TELEMETRY::_0x6F5BC5C4EAB42B15(data.f_5, 2, contentId);
	STATS::_STATSTRACKER_DEED_STATUS(deedType, deedHash, iParam2, &data);
	return;
}

void func_1152(BOOL bParam0) // Position - 0x2059F Hash - 0x5D1342E6 ^0x41116E92
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1264(&Global_1940199, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1265(&Global_1940199, 8388608);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

void func_1153(BOOL bParam0) // Position - 0x20642 Hash - 0x22D62138 ^0x4A5C4AF7
{
	int i;
	Hash crimeType;
	var unk;

	for (i = 0; i <= 58; i = i + 1)
	{
		crimeType = func_1266(i, 1);
	
		if (crimeType == joaat("crime_murder_player") || crimeType == joaat("crime_murder_player_horse") || crimeType == joaat("crime_trample_player"))
		{
		}
		else
		{
			if (bParam0)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1267(unk);
			}
			else
			{
				func_1268();
			}
		
			LAW::_0xF611DE44AEB36A1D(crimeType, bParam0);
		}
	}

	return;
}

int func_1154(BOOL bParam0) // Position - 0x206B4 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_776(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_1155(BOOL bParam0) // Position - 0x206E1 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1900460 = Global_1900460 || bParam0;
	return;
}

int func_1156(var uParam0, var uParam1) // Position - 0x206F4 Hash - 0x6EEEB4AF ^0x6EEEB4AF
{
	return func_1270(func_1269(uParam0));
}

int func_1157(var uParam0, var uParam1) // Position - 0x20708 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

int func_1158(var uParam0, var uParam1) // Position - 0x20712 Hash - 0xBD58DDB3 ^0xBD58DDB3
{
	int num;

	num = func_692(uParam0);

	if (num < 0)
		return 0;

	return func_1271(num);
}

int func_1159(var uParam0, var uParam1, int iParam2) // Position - 0x20734 Hash - 0xBFD2BCAE ^0x459D438
{
	var unk;
	var unk4;
	var unk7;
	int num;

	if (Global_1072759.f_19487 >= 32)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_78(uParam0, &unk))
		return -1;

	unk7 = -1;
	unk7.f_1 = -1;
	unk7 = { uParam0 };
	unk7.f_2 = iParam2;

	if (Global_1072759.f_19487 == 0)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
		return 0;
	}

	num = 0;

	while (num < Global_1072759.f_19487)
	{
		func_78(Global_1072759.f_19487.f_1[num /*3*/], &unk4);
	
		if (unk == unk4)
		{
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
		else if (unk > unk4)
		{
			num = num + 1;
		}
		else if (unk < unk4)
		{
			func_1272(num);
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
	}

	if (Global_1072759.f_19487 < 31)
	{
		num = Global_1072759.f_19487;
		Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
	
		if (Global_1072759.f_19487 > 32)
			Global_1072759.f_19487 = 32;
	
		return num;
	}

	return -1;
}

void func_1160() // Position - 0x208A3 Hash - 0x78106AC5 ^0x65F3CC03
{
	int num;
	var unk;

	num = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;

	while (num < Global_1072759.f_19487)
	{
		func_78(Global_1072759.f_19487.f_1[num /*3*/], &unk);
		num = num + 1;
	}

	return;
}

 func_1161(int iParam0) // Position - 0x208EA Hash - 0x21FAF347 ^0x80CF3691
{
	switch (iParam0)
	{
		case 1:
			return 1193206973;
	
		case 2:
			return -1344025432;
	
		case 4:
			return -108962728;
	
		default:
		
	}

	return 0;
}

int func_1162(int iParam0) // Position - 0x20925 Hash - 0x90A8253B ^0x90A8253B
{
	switch (iParam0)
	{
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

struct<5> func_1163(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x20944 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_399(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_1164(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_1279(hParam0, -1823706425))
			{
				unk = { func_503(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_1279(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_503(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_503(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_1279(hParam0, -1653629781))
			{
				unk = { func_503(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_1277(bParam1) };
		
			switch (func_1278(hParam0))
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
			unk = { func_503(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_1273(bParam1) };
		
			if (iParam2 && func_1274(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_1275(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_1275(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_1276(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_1280(unk, &unk28, bParam1, false, -1))
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
			else if (func_1279(hParam0, -1653629781))
			{
				unk = { func_503(1384535894, unk, 1784584921, bParam1) };
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

int func_1164(Hash hParam0) // Position - 0x20CB8 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_728(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

Hash func_1165(Hash hParam0, int iParam1) // Position - 0x20CE3 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_728(hParam0, 0))
		return 0;

	num = func_1164(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_1281(hParam0, 1399091007))
	{
		func_1282(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_1166(Hash hParam0, BOOL bParam1) // Position - 0x20D5D Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_1283(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_1284(&unk, func_1273(false));

	if (!func_1285(&unk, &num, &num2, false))
		return 0;

	func_1286(num);
	return num2;
}

BOOL func_1167(var uParam0) // Position - 0x20DBC Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*uParam0 == 0 && uParam0->f_1 == 0 && uParam0->f_2 == 0 && uParam0->f_3 == 0)
		return false;

	return true;
}

void func_1168(int iParam0, int iParam1) // Position - 0x20DF2 Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_1169(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x20E22 Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_612(anParam0))
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

BOOL func_1170(Any* panParam0) // Position - 0x20EDD Hash - 0x6E844BA9 ^0x869AC4DA
{
	var src;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);

	if (!func_1287(1))
		return false;

	*panParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

BOOL func_1171(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x20F0C Hash - 0xE0BDD26B ^0x7E1BB2F9
{
	var unk;

	panParam0->f_2 = iParam1;
	panParam0->f_3 = hParam2;
	panParam0->f_4 = iParam3;
	unk = panParam0->f_1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_1172(Any anParam0, int iParam1) // Position - 0x20F45 Hash - 0xF6C122AF ^0xA6A67C2F
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

struct<8> func_1173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x20F59 Hash - 0xC815C420 ^0xC815C420
{
	return func_1288(&uParam0, 69, 1);
}

int func_1174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x20F6A Hash - 0xE5CD0188 ^0xE5CD0188
{
	return func_1289(&uParam0, 93, 1, -1);
}

var func_1175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x20F7C Hash - 0xE97D56D1 ^0xE97D56D1
{
	return func_1290(&uParam0, 94, 1);
}

BOOL func_1176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x20F8D Hash - 0xB1B0767 ^0xB1B0767
{
	Hash i;
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;

	if (!func_1171(&uParam0, 28, hParam5, 0, 1))
		return false;

	num = func_1172(&uParam0, 3);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num2 = 0;
		flag = 0;
		num2 = func_1291(uParam0, i);
	
		switch (hParam5)
		{
			case joaat("PARTICLE"):
				flag = func_1293(func_1295(num2));
				break;
		
			case joaat("PLAYLIST"):
				flag = func_1293(func_1296(num2));
				break;
		
			case -952694274:
				flag = func_1293(func_1294(num2));
				break;
		
			case joaat("ANIM_SCENE"):
				flag = func_1293(func_1292(num2));
				break;
		
			default:
				break;
		}
	
		flag2 = flag2 || flag;
	}

	return flag2;
}

struct<8> func_1177(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21041 Hash - 0xBDC0D153 ^0xBDC0D153
{
	return func_1288(&uParam0, 87, 1);
}

int func_1178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21052 Hash - 0xB6E2D15B ^0xB6E2D15B
{
	return func_1297(&uParam0, 87, 1);
}

Vector3 func_1179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21063 Hash - 0x27D7DFE3 ^0x27D7DFE3
{
	return func_1298(&uParam0, 88, 1);
}

Vector3 func_1180(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21074 Hash - 0x705D8A8A ^0x705D8A8A
{
	return func_1298(&uParam0, 68, 1);
}

int func_1181(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21085 Hash - 0xB0AF1E0B ^0xB0AF1E0B
{
	return func_1299(func_1297(&uParam0, 89, 1));
}

var func_1182(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2109A Hash - 0x902D076D ^0x902D076D
{
	return func_1290(&uParam0, 90, 1);
}

Vector3 func_1183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210AB Hash - 0x3EBDE34C ^0x3EBDE34C
{
	return func_1298(&uParam0, 91, 1);
}

int func_1184(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210BC Hash - 0xE6C6A900 ^0xE6C6A900
{
	return func_1289(&uParam0, 86, 0, -1);
}

int func_1185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210CE Hash - 0xECC0BB97 ^0xECC0BB97
{
	return func_1289(&uParam0, 83, 0, -1);
}

int func_1186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210E0 Hash - 0x76D3355A ^0x76D3355A
{
	return func_1289(&uParam0, 85, 0, -1);
}

int func_1187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210F2 Hash - 0x9161A40E ^0x9161A40E
{
	return func_1289(&uParam0, 84, 0, -1);
}

int func_1188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21104 Hash - 0x5D748273 ^0x5D748273
{
	return func_1289(&uParam0, 92, 1, -1);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x21116 Hash - 0xA17D549C ^0x6D965C28
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

BOOL func_1190(int iParam0) // Position - 0x21624 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

int func_1191(int iParam0, int iParam1, int iParam2) // Position - 0x21630 Hash - 0x4F2308C0 ^0x4F2308C0
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 38, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 40, iParam2, 0, 1))
		return 0;

	return func_821(&unk);
}

var func_1192(int iParam0) // Position - 0x216D4 Hash - 0x42D3BB98 ^0x42D3BB98
{
	var unk;

	unk = { func_822(iParam0) };
	return unk;
}

BOOL func_1193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x216E8 Hash - 0xEE006EA3 ^0x95142ACF
{
	int i;
	int num;
	BOOL flag;
	BOOL flag2;
	var unk;
	var unk2;

	unk2 = uParam0.f_1;
	*uParam5 = func_1300(&uParam0);
	num = func_812(&uParam0, 5);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		uParam0.f_1 = unk2;
	
		if (!func_651(&uParam0, 34, i, 0, 1))
		{
		}
		else
		{
			unk = func_855(&uParam0, 67, 1);
		
			switch (*uParam5)
			{
				case joaat("Challenge"):
					flag = func_1305(unk);
					break;
			
				case joaat("REPLAY"):
					flag = func_1306(unk);
					break;
			
				case joaat("prerequisite"):
					flag = func_1303(unk);
					break;
			
				case joaat("AWARD_PROCESS"):
					flag = func_1302(unk);
					break;
			
				case joaat("Matchmaking"):
					flag = func_1304(unk);
					break;
			
				case joaat("AWARD"):
					flag = func_1301(unk);
					break;
			
				default:
					break;
			}
		
			flag2 = flag2 || flag;
		}
	}

	return flag2;
}

var func_1194(Any* panParam0) // Position - 0x217BC Hash - 0x549FDE4A ^0x549FDE4A
{
	return func_855(panParam0, 85, 1);
}

var func_1195(Any* panParam0) // Position - 0x217CD Hash - 0xA50A3D20 ^0xA50A3D20
{
	return func_855(panParam0, 86, 1);
}

var func_1196(Any* panParam0) // Position - 0x217DE Hash - 0xAFEA48AD ^0xAFEA48AD
{
	return func_855(panParam0, 87, 1);
}

var func_1197(Any* panParam0) // Position - 0x217EF Hash - 0x1E4C63D9 ^0x1E4C63D9
{
	return func_1038(panParam0, 88, true);
}

void func_1198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x21800 Hash - 0xDB990ED0 ^0x23E5B83C
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("Challenge"):
				uParam5->f_5 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_1199(int iParam0) // Position - 0x2186E Hash - 0x992590FD ^0x4805CF01
{
	if (!func_498(iParam0))
		return;

	Global_1138673[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
	return;
}

void func_1200(int iParam0) // Position - 0x2188F Hash - 0xD881DF8C ^0xD881DF8C
{
	if (!func_1131(iParam0))
		return;

	func_1307(iParam0);
	return;
}

void func_1201() // Position - 0x218AA Hash - 0x9B62A0EE ^0x9B62A0EE
{
	if (!func_863())
		return;

	if (!func_18(Global_1051268))
		return;

	func_293(&Global_1051268);
	return;
}

void func_1202(int iParam0) // Position - 0x218D6 Hash - 0x84406207 ^0x84406207
{
	func_514(&Global_1140723, iParam0, 1);
	return;
}

void func_1203(int iParam0, int iParam1) // Position - 0x218EC Hash - 0x39E5F791 ^0x41780B6B
{
	Global_1140723.f_2[iParam0] = iParam1;
	return;
}

void func_1204(int iParam0, int iParam1) // Position - 0x21900 Hash - 0x1FFBDFA0 ^0x479EC28C
{
	int threadId;

	if (!func_1220(iParam0, iParam1))
		return;

	threadId = func_1308(iParam0, iParam1);

	if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		return;

	SCRIPTS::_REQUEST_THREAD_EXIT(threadId);
	return;
}

void func_1205(int iParam0, int iParam1) // Position - 0x21935 Hash - 0x4DB1FD62 ^0x4DB1FD62
{
	func_1216(iParam0, iParam1);
	func_1215(iParam0, iParam1, -1);
	return;
}

void func_1206(int iParam0) // Position - 0x2194E Hash - 0x511B7D4D ^0x791CB518
{
	func_293(&(Global_1219595.f_1[iParam0 /*10*/].f_4));
	Global_1219595.f_1[iParam0 /*10*/].f_6 = 0;
	return;
}

int func_1207() // Position - 0x21973 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3673;
}

Player func_1208(int iParam0) // Position - 0x21982 Hash - 0x110FED53 ^0x110FED53
{
	if (iParam0 < 0 || iParam0 >= 7)
		return 255;

	return Global_1102813.f_3675[iParam0];
}

void func_1209(int iParam0, int iParam1) // Position - 0x219AB Hash - 0xC6BC060D ^0x4214B19
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

void func_1210(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x219CB Hash - 0x86D1F170 ^0x86D1F170
{
	int num;
	var unk;

	if (!func_18(uParam0))
		return;

	if (!func_965(uParam0))
		return;

	if (bParam2)
		func_1309(uParam0);

	if (!func_18(func_215(0)))
	{
		func_968(uParam0, 3);
		func_1152(bParam3);
		func_1153(!bParam4);
		func_1310(uParam0, -1);
	
		if (bParam2 && !func_525(2))
			func_1260(&Global_0, 1024);
	
		func_1155(true);
	}
	else
	{
		func_1310(uParam0, -1);
		func_968(uParam0, 4);
		func_1311(uParam0, false);
	}

	Global_1051645.f_45.f_1 = 1;
	num = func_1157(uParam0);

	if (num != 2 && num != 7)
		if (func_1312(uParam0, &unk))
			MISC::_0x1096603B519C905F(&(unk.f_17));

	return;
}

Hash func_1211(int iParam0) // Position - 0x21AA2 Hash - 0x52FBF18E ^0x1645FF1E
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/];
}

int func_1212(int iParam0, int iParam1) // Position - 0x21AB7 Hash - 0x6DB31DA3 ^0xF6A332DC
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

int func_1213(int iParam0, int iParam1) // Position - 0x21AD4 Hash - 0xBEE1EE66 ^0xBEE1EE66
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_1214(int iParam0, int iParam1) // Position - 0x21AEB Hash - 0xE2CBAAA9 ^0x2294AF4
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_1215(int iParam0, int iParam1, int iParam2) // Position - 0x21B01 Hash - 0x510D2CDE ^0xF7D95964
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
	return;
}

void func_1216(int iParam0, int iParam1) // Position - 0x21B19 Hash - 0x60E81F0 ^0x60E81F0
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		func_1222(iParam0, iParam1, i);
	}

	return;
}

BOOL func_1217(int iParam0, int iParam1) // Position - 0x21B3D Hash - 0x56721BD4 ^0x76116F9F
{
	int num;
	var unk;

	num = func_1235(iParam0, iParam1);

	if (num == 2147483647)
		return true;

	unk = { func_1313(PLAYER::PLAYER_ID()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	return func_743(unk, func_1245(iParam0, iParam1)) < (float)num;
}

void func_1218(int iParam0, int iParam1, int iParam2) // Position - 0x21B8C Hash - 0xE085AF65 ^0xE085AF65
{
	func_1063(iParam0, func_1314(iParam1, iParam2));
	return;
}

BOOL func_1219(int iParam0, int iParam1) // Position - 0x21BA2 Hash - 0xD94AF580 ^0x1368A613
{
	int num;
	Hash scriptHash;
	int num2;
	struct<10> args;
	struct<5> args2;
	var args3;

	num = func_1212(iParam0, iParam1);
	scriptHash = func_1211(iParam0);

	if (func_1220(iParam0, iParam1))
		return false;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
		return false;

	if (func_858(iParam0, 8))
		if (func_1226(iParam0, iParam1) != 4)
			return false;

	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(scriptHash);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_1315(iParam0)) <= 0)
			return false;
	
		if (func_858(iParam0, 64))
		{
			args.f_7 = -1;
			args.f_7.f_1 = -1;
			args.f_9 = 255;
			args = num;
			args.f_9 = func_1083(iParam0);
			args.f_1 = { func_1245(iParam0, iParam1) };
			args.f_5 = iParam0;
			args.f_7 = { func_1059(iParam0) };
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args, 10, func_1315(iParam0));
		}
		else if (func_858(iParam0, 128))
		{
			args2 = num;
			args2.f_1 = func_1316(scriptHash);
			args2.f_2 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_14;
			args2.f_3 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_15;
			args2.f_4 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_16;
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args2, 5, func_1315(iParam0));
		}
		else
		{
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args3, 1, func_1315(iParam0));
		}
	
		func_1221(iParam0, iParam1, num2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(scriptHash);
		func_1317(scriptHash, num);
		return true;
	}

	return false;
}

BOOL func_1220(int iParam0, int iParam1) // Position - 0x21D12 Hash - 0xE4501A5E ^0xAE4FFF13
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

void func_1221(int iParam0, int iParam1, int iParam2) // Position - 0x21D2E Hash - 0xEA827D4 ^0xA4AA31C2
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

void func_1222(int iParam0, int iParam1, int iParam2) // Position - 0x21D48 Hash - 0xE085AF65 ^0xE085AF65
{
	func_1209(iParam0, func_1314(iParam1, iParam2));
	return;
}

BOOL func_1223(int iParam0, int iParam1) // Position - 0x21D5E Hash - 0xC714C634 ^0x86BDC22C
{
	int num;

	if (!func_858(iParam0, 1024))
		return false;

	num = func_1244(iParam0);

	if (num <= 0)
		return false;

	return func_743(Global_34, func_1245(iParam0, iParam1)) > (float)num;
}

int func_1224(int iParam0, int iParam1) // Position - 0x21D9E Hash - 0xE827FE7F ^0xCC103C47
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_1225(int iParam0, int iParam1, int iParam2) // Position - 0x21DB6 Hash - 0xC5D17E26 ^0x5C7F39D7
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam2))
	{
		Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}

	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_1226(int iParam0, int iParam1) // Position - 0x21DEE Hash - 0x25BE413F ^0xC635A43B
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_1227(int iParam0, int iParam1) // Position - 0x21E07 Hash - 0xD5D3E089 ^0xD5D3E089
{
	func_1233(iParam0, iParam1);
	func_1076(iParam0, iParam1);
	return;
}

void func_1228(int iParam0, int iParam1, int iParam2) // Position - 0x21E20 Hash - 0x979CB0CE ^0x6BCD0423
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_1229(int iParam0, int iParam1) // Position - 0x21E3B Hash - 0x6DB31DA3 ^0xB29C741B
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_1230(int iParam0, int iParam1) // Position - 0x21E58 Hash - 0x25BE413F ^0xC8DDD896
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_1231(int iParam0, int iParam1, BOOL bParam2) // Position - 0x21E71 Hash - 0x2963F064 ^0x2963F064
{
	int num;
	var args;
	var unk9;
	Hash hash;

	if (func_1224(iParam0, iParam1) != 0 && !func_1318(func_1224(iParam0, iParam1)))
		return;

	num = 96;

	if (!bParam2)
		num = num + 128;

	if (func_1076(iParam0, iParam1))
	{
		args = { func_1245(iParam0, iParam1) };
		args.f_4 = BUILTIN::TO_FLOAT(func_1229(iParam0, iParam1));
		args.f_5 = num;
		args.f_6 = func_1319(iParam0);
		unk9 = { func_1059(iParam0) };
		hash = 0;
	
		if (func_18(unk9))
			hash = func_19(unk9);
	
		if (hash != 0)
			args.f_7 = hash;
		else
			args.f_7 = -1546799264;
	
		func_1225(iParam0, iParam1, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args));
	}

	return;
}

BOOL func_1232(int iParam0, int iParam1) // Position - 0x21F2A Hash - 0xA18D353B ^0xA18D353B
{
	int num;

	if (func_1230(iParam0, iParam1) != 0)
		return true;

	func_1320(iParam0, iParam1);
	func_1231(iParam0, iParam1, true);
	num = func_1224(iParam0, iParam1);

	if (num == 0)
		return false;

	if (!func_1321(num))
		return false;

	func_1322(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_1224(iParam0, iParam1)));
	return true;
}

void func_1233(int iParam0, int iParam1) // Position - 0x21F8A Hash - 0x31AD46EC ^0x32CF8808
{
	int volLockRequestId;

	volLockRequestId = func_1230(iParam0, iParam1);

	if (volLockRequestId == 0)
		return;

	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
	{
		func_1322(iParam0, iParam1, 0);
		return;
	}

	VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
	func_1322(iParam0, iParam1, 0);
	func_1076(iParam0, iParam1);
	return;
}

void func_1234(int iParam0, int iParam1, int iParam2) // Position - 0x21FD3 Hash - 0x2B63783F ^0x2B63783F
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
	return;
}

int func_1235(int iParam0, int iParam1) // Position - 0x21FEC Hash - 0x6DB31DA3 ^0x81691380
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_1236(int iParam0) // Position - 0x22009 Hash - 0x8094B681 ^0xEFDE1F4
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_4;
}

BOOL func_1237(int iParam0) // Position - 0x22020 Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1902569 > iParam0;
}

BOOL func_1238(int iParam0, int iParam1, int iParam2) // Position - 0x2202F Hash - 0x6AE4C544 ^0x7842811A
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (func_1323(iParam0, iParam1, player, iParam2))
		{
			return true;
		}
	}

	return false;
}

BOOL func_1239(int iParam0, int iParam1) // Position - 0x22073 Hash - 0xD1867047 ^0xDB99C748
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_1324(iParam0, iParam1, player))
		{
			return false;
		}
	}

	return true;
}

BOOL func_1240(int iParam0, int iParam1) // Position - 0x220B6 Hash - 0xFF2D0687 ^0xBF450D41
{
	Player player;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else if (!func_1061(iParam0, player, 2))
		{
		}
		else if (!func_1061(iParam0, player, iParam1))
		{
			return true;
		}
	}

	return false;
}

int func_1241(int iParam0) // Position - 0x22109 Hash - 0x9CC6BA06 ^0xCE012AC9
{
	if (!func_871(iParam0))
		return 0;

	return Global_1207480.f_231[iParam0 /*15*/].f_5.f_8;
}

BOOL func_1242(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x2212D Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_18(Global_1051268) && !func_929(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_741(iParam2))
		return true;

	if (iParam3 != 0 && func_1325(iParam3, 255))
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

	if (func_362())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & true != 0)
	{
		if (!func_18(Global_1051268))
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

BOOL func_1243(int iParam0) // Position - 0x22256 Hash - 0xF654448C ^0x32AAEFDC
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

int func_1244(int iParam0) // Position - 0x222B4 Hash - 0x8094B681 ^0x942FDE77
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_1245(int iParam0, int iParam1) // Position - 0x222CB Hash - 0x805ECF2A ^0xB8790664
{
	return func_1326(Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

BOOL func_1246(int iParam0, Player plParam1) // Position - 0x222EA Hash - 0x3FEE748A ^0x3FEE748A
{
	return Global_1217218[plParam1 /*72*/][iParam0] == 0;
}

void func_1247(int iParam0) // Position - 0x22300 Hash - 0x6E90B760 ^0x7CF3C921
{
	Global_1207480.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1207480.f_2505[iParam0 /*6*/].f_5 = 255;
	return;
}

struct<40> func_1248(var uParam0, int iParam1) // Position - 0x22325 Hash - 0xB37D1B8F ^0x544D395D
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

	if (!func_1327(uParam0, iParam1))
		return unk;

	unk41 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { unk };
	return unk41;
}

void func_1249(var uParam0, int iParam1) // Position - 0x2240D Hash - 0x5547D09E ^0xB61B32CF
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	num = ((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2;

	if (uParam0->f_1 == iParam1)
	{
		num2 = *uParam0;
	
		for (i = 0; i < *uParam0; i = i + 1)
		{
			num3 = (uParam0->f_1 + i) % uParam0->f_2;
		
			if (uParam0->f_3[num3 /*40*/] != -1)
				break;
		
			if (uParam0->f_3[num3 /*40*/].f_4 != -1)
				func_1248(uParam0, num3);
		
			num2 = num2 - 1;
		}
	
		uParam0->f_1 = num3;
		*uParam0 = num2;
	}
	else if (num == iParam1)
	{
		num2 = *uParam0;
	
		for (i = 0; i < *uParam0; i = i + 1)
		{
			num4 = ((num - i) + 5) % uParam0->f_2;
		
			if (uParam0->f_3[num4 /*40*/] != -1)
				break;
		
			func_1248(uParam0, num4);
			num2 = num2 - 1;
		}
	
		*uParam0 = num2;
	}

	return;
}

int func_1250(int iParam0) // Position - 0x2252F Hash - 0xDED1374F ^0xDED1374F
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

int func_1251(int iParam0) // Position - 0x2256A Hash - 0x7B9E6017 ^0xD5F060B0
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

int func_1252(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x22606 Hash - 0x2EE7EC36 ^0x3C7F57D
{
	int num;
	int num2;

	if (func_1328(uParam0))
		return 0;

	if (!func_1329(&(uParam1->f_8)))
		return 0;

	if (uParam1->f_2 == -1)
		return 0;

	if (uParam1->f_2 == 5)
		uParam1->f_3 = PLAYER::PLAYER_ID();

	if (uParam1->f_5 == -1)
		return 0;

	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
		return 0;

	num = func_1330(uParam0, uParam1);

	if (num >= 0)
		return 0;

	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
			if (!func_1331(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
				return 0;
			break;
	
		default:
			break;
	}

	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	num2 = (uParam0->f_1 + *uParam0) % uParam0->f_2;
	uParam1->f_4 = num2;
	uParam0->f_3[num2 /*40*/] = { *uParam1 };
	func_1093(&uParam0->f_3[num2 /*40*/], 0);
	*uParam0 = *uParam0 + 1;
	return 1;
}

int func_1253(var uParam0, var uParam1) // Position - 0x226F7 Hash - 0xC06073DF ^0xD9E27E58
{
	var unk;
	int i;
	int num;
	int num2;
	int gangId;

	if (!func_18(uParam0))
		return 0;

	unk = -1;
	unk.f_1 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		unk = { func_499(i) };
	
		if (func_929(unk, uParam0))
		{
			num2 = func_875(i);
			gangId = func_868(i);
		
			if (num2 >= 1 && num2 <= 4)
				if (gangId != 0 && GANG::NETWORK_IS_GANG_IN_SESSION(gangId))
					num = num + 1;
		}
	}

	return num;
}

BOOL func_1254(int iParam0, BOOL bParam1) // Position - 0x22782 Hash - 0xE7D19490 ^0xE7D19490
{
	if (iParam0 > 1)
		return false;

	if (iParam0 < 1)
		return true;

	if (bParam1)
		return true;

	return false;
}

void func_1255(int iParam0) // Position - 0x227B1 Hash - 0xEF70193F ^0xA0BBDE15
{
	Global_1107816.f_33[iParam0 /*16*/] = 0;
	return;
}

void func_1256(int iParam0) // Position - 0x227C4 Hash - 0x4C34E6D4 ^0x5750C052
{
	var src;

	src = -1;
	src.f_1 = -1;
	src.f_2 = -1;
	src.f_3 = -1;
	src.f_5 = -1;
	src.f_5.f_1 = -1;
	src.f_9.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1107816.f_33[iParam0 /*16*/].f_3), &src, 13);
	return;
}

void func_1257(var uParam0) // Position - 0x22811 Hash - 0x4C34E6D4 ^0xACB8E8F1
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_9 = -1;
	unk.f_9.f_1 = -1;
	unk.f_11 = -1;
	unk.f_12 = 7;
	unk.f_12.f_1 = 255;
	unk.f_12.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_25 = -1;
	unk.f_25.f_1 = -1;
	*uParam0 = { unk };
	return;
}

int func_1258(int iParam0) // Position - 0x2289B Hash - 0x7647021A ^0xBB7AE530
{
	return Global_1296644[iParam0 /*5*/].f_3;
}

BOOL func_1259(Player plParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x228AD Hash - 0x44A83BBE ^0x3034E5CA
{
	return BUILTIN::VDIST(func_1313(plParam0), vParam1) <= fParam4;
}

void func_1260(Hash hParam0, int iParam1) // Position - 0x228C6 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

int func_1261(int iParam0) // Position - 0x228D9 Hash - 0xF10AB031 ^0x99A2B2C1
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
	
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
	
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
	
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
	
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
	
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
	
		case 8:
			return 634321112;
	
		default:
		
	}

	return 0;
}

char* func_1262(var uParam0, var uParam1, var uParam2) // Position - 0x2294C Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_1263(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x22960 Hash - 0x96F9C981 ^0x71D39102
{
	int num;
	int i;
	int num2;
	int gangId;
	int num3;
	int j;
	int num4;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	num2 = -1;
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (gangId == 0)
		return;

	switch (func_1157(uParam0))
	{
		case 4:
			num3 = func_1332(func_345(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_1333(j) == func_345(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_1334(num3);
		
			if (!func_1335(num4, 0))
				return;
			break;
	
		case 8:
			return;
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1107816.f_33[i /*16*/] == gangId)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return;

	num = Global_1107816.f_33[num2 /*16*/].f_3.f_1;

	if (num == -1)
		return;

	uParam2->f_2 = Global_1114893[num /*70*/];
	return;
}

void func_1264(int iParam0, int iParam1) // Position - 0x22A72 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_1265(int iParam0, int iParam1) // Position - 0x22A87 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_1266(int iParam0, int iParam1) // Position - 0x22A98 Hash - 0xE1D12727 ^0xE8936757
{
	switch (iParam0)
	{
		case 0:
			return joaat("crime_arson");
	
		case 1:
			return joaat("crime_assault");
	
		case 2:
			return joaat("crime_assault_animal");
	
		case 3:
			return joaat("crime_assault_corpse");
	
		case 4:
			return joaat("crime_assault_horse");
	
		case 5:
			return joaat("crime_assault_law");
	
		case 6:
			return joaat("crime_assault_livestock");
	
		case 7:
			return joaat("crime_bank_robbery");
	
		case 8:
			return joaat("crime_burglary");
	
		case 9:
			return joaat("crime_cheating");
	
		case 10:
			return joaat("CRIME_DISTURBANCE");
	
		case 11:
			return joaat("crime_explosion");
	
		case 12:
			return joaat("crime_grave_robbery");
	
		case 13:
			return joaat("CRIME_HASSLE");
	
		case 14:
			return joaat("crime_hit_and_run");
	
		case 15:
			return joaat("crime_hit_and_run_law");
	
		case 16:
			return joaat("crime_intimidation");
	
		case 17:
			return joaat("crime_jack_horse");
	
		case 18:
			return joaat("crime_jack_vehicle");
	
		case 19:
			return joaat("crime_jail_break");
	
		case 20:
			return joaat("crime_kidnapping");
	
		case 21:
			return joaat("crime_kidnapping_law");
	
		case 22:
			return joaat("crime_lasso_assault");
	
		case 23:
			return joaat("crime_law_is_threatened");
	
		case 24:
			return joaat("crime_loitering");
	
		case 25:
			return joaat("crime_looting");
	
		case 26:
			return joaat("crime_murder");
	
		case 27:
			return joaat("crime_murder_animal");
	
		case 28:
			return joaat("crime_murder_horse");
	
		case 29:
			return joaat("crime_murder_law");
	
		case 30:
			return joaat("crime_murder_livestock");
	
		case 31:
			return joaat("crime_property_destruction");
	
		case 32:
			return joaat("CRIME_RESIST_ARREST");
	
		case 33:
			return joaat("crime_robbery");
	
		case 34:
			return joaat("crime_stagecoach_robbery");
	
		case 35:
			return joaat("crime_stolen_goods");
	
		case 36:
			return joaat("crime_theft");
	
		case 37:
			return joaat("crime_theft_horse");
	
		case 38:
			return joaat("crime_theft_livestock");
	
		case 39:
			return joaat("crime_theft_vehicle");
	
		case 40:
			return joaat("crime_threaten");
	
		case 41:
			return joaat("crime_threaten_law");
	
		case 42:
			return joaat("crime_train_robbery");
	
		case 43:
			return joaat("crime_trample");
	
		case 44:
			return joaat("crime_trample_law");
	
		case 45:
			return joaat("crime_trespassing");
	
		case 46:
			return joaat("crime_unarmed_assault");
	
		case 47:
			return joaat("crime_vandalism");
	
		case 48:
			return joaat("crime_vandalism_vehicle");
	
		case 49:
			return joaat("crime_vehicle_destruction");
	
		case 50:
			return joaat("crime_wanted_level_up_debug_high");
	
		case 51:
			return joaat("crime_wanted_level_up_debug_low");
	
		case 52:
			return joaat("crime_accomplice");
	
		case 53:
			return joaat("crime_explosion_poison");
	
		case 54:
			return joaat("crime_murder_player");
	
		case 55:
			return joaat("crime_murder_player_horse");
	
		case 56:
			return joaat("crime_self_defence");
	
		case 57:
			return joaat("crime_trample_player");
	
		case 58:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_1267(var uParam0, var uParam1, var uParam2) // Position - 0x22DED Hash - 0x3608481D ^0x5B5E60FC
{
	Global_1939102.f_75.f_67 = { uParam0 };
	return;
}

void func_1268() // Position - 0x22E03 Hash - 0x5F14D1DE ^0xD0B0A871
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1939102.f_75.f_67), "", 24);
	return;
}

int func_1269(var uParam0, var uParam1) // Position - 0x22E19 Hash - 0xFF65B6AA ^0xB94EF0F6
{
	int i;

	if (!func_18(uParam0))
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_929(Global_1900460.f_1[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_1270(int iParam0) // Position - 0x22E64 Hash - 0x30DA06D5 ^0x3666A687
{
	if (iParam0 < 0)
		return 0;

	if (Global_1900460.f_66 == 0)
		return 0;

	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_293(&Global_1900460.f_1[0 /*2*/]);
		return 1;
	}

	func_293(&Global_1900460.f_1[iParam0 /*2*/]);
	Global_1900460.f_66 = Global_1900460.f_66 - 1;
	func_1336(iParam0, Global_1900460.f_66);
	return 1;
}

int func_1271(int iParam0) // Position - 0x22ECF Hash - 0x6790D007 ^0xC928B5CD
{
	int i;
	var unk;

	for (i = iParam0; i < Global_1072759.f_19487; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1072759.f_19487.f_1[i /*3*/] = { Global_1072759.f_19487.f_1[i + 1 /*3*/] };
	}

	unk = -1;
	unk.f_1 = -1;

	if (Global_1072759.f_19487 < 32)
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk };

	Global_1072759.f_19487 = Global_1072759.f_19487 - 1;

	if (Global_1072759.f_19487 < 0)
		Global_1072759.f_19487 = 0;

	return 1;
}

int func_1272(int iParam0) // Position - 0x22F70 Hash - 0x878FD84 ^0x34564BD6
{
	int num;
	var unk;

	num = Global_1072759.f_19487 - 1;
	unk = -1;
	unk.f_1 = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1072759.f_19487.f_1[num + 1 /*3*/] = { Global_1072759.f_19487.f_1[num /*3*/] };
	
		num = num - 1;
	}

	Global_1072759.f_19487.f_1[iParam0 /*3*/] = { unk };
	Global_1072759.f_19487 = Global_1072759.f_19487 + 1;

	if (Global_1072759.f_19487 > 32)
		Global_1072759.f_19487 = 32;

	return 1;
}

struct<4> func_1273(BOOL bParam0) // Position - 0x23004 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_504(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_503(923904168, func_399(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_503(923904168, func_399(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_503(923904168, func_399(bParam0), -740156546, false);
}

int func_1274(Hash hParam0, BOOL bParam1) // Position - 0x230A5 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_1278(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_1337();
		else
			return 1;

	return 0;
}

BOOL func_1275(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x230DC Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_400(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_1276(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x230F7 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_1338(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_1277(BOOL bParam0) // Position - 0x23118 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_504(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_503(271701509, func_399(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_503(271701509, func_399(bParam0), 12999093, false);
}

Hash func_1278(Hash hParam0) // Position - 0x23182 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_728(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_1279(Hash hParam0, Hash hParam1) // Position - 0x231AD Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_1278(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_1339(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_1280(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x2321A Hash - 0x113CD144 ^0x113CD144
{
	return func_1340(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_1281(Hash hParam0, Hash hParam1) // Position - 0x23230 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_728(hParam0, 0))
		return func_1341(func_975(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_1282(Hash hParam0, var uParam1, var uParam2) // Position - 0x23271 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_1283(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2347D Hash - 0x90CCF0F4 ^0xA5F3D799
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

void func_1284(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2355B Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_1285(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x23576 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_504(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_1286(int iParam0) // Position - 0x2359B Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_1287(int iParam0) // Position - 0x235BC Hash - 0x2795DEC ^0x4283DA24
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	return true;
}

struct<8> func_1288(Any* panParam0, int iParam1, int iParam2) // Position - 0x235F7 Hash - 0x1E611575 ^0x844B49DF
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, panParam0);
	return unk;
}

int func_1289(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x23616 Hash - 0x179D4F26 ^0x546E812
{
	int num;

	panParam0->f_2 = iParam1;

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, panParam0))
		num = iParam3;

	return num;
}

var func_1290(Any* panParam0, int iParam1, int iParam2) // Position - 0x23636 Hash - 0xB8727DF2 ^0xEDBE3E6D
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk, panParam0);
	return unk;
}

int func_1291(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x23652 Hash - 0x15BA38D8 ^0x15BA38D8
{
	if (!func_1171(&uParam0, 30, hParam5, 0, 1))
		return 0;

	return func_1297(&uParam0, 61, 1);
}

int func_1292(int iParam0) // Position - 0x23677 Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
	
		case -1728078503:
			return 2;
	
		case joaat("ASF_ENABLE_LETTER_BOX"):
			return 2048;
	
		case joaat("ASF_BLOCK_SKIPPING"):
			return 256;
	
		case -1303182884:
			return 4096;
	
		case -1138842803:
			return 512;
	
		case -656485570:
			return 8;
	
		case -608370326:
			return 128;
	
		case -40729341:
			return 32;
	
		case 513761045:
			return 64;
	
		case 664704845:
			return 4;
	
		case 856889675:
			return 16;
	
		case 1317645850:
			return 8192;
	
		case 1930555512:
			return 32768;
	
		case 1959327570:
			return 1024;
	
		case 2020911072:
			return 16384;
	
		default:
		
	}

	return 0;
}

int func_1293(int iParam0) // Position - 0x23741 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

int func_1294(int iParam0) // Position - 0x2374B Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case joaat("ASSE_GIVE_OWNERSHIP"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1295(int iParam0) // Position - 0x23769 Hash - 0xD9E40410 ^0xD9E40410
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
	
		case -445480404:
			return 2;
	
		case -138533181:
			return 4;
	
		case 74623641:
			return 64;
	
		case 675169979:
			return 16;
	
		case 1324736666:
			return 8;
	
		default:
		
	}

	return 0;
}

int func_1296(int iParam0) // Position - 0x237BC Hash - 0x697A209D ^0x697A209D
{
	switch (iParam0)
	{
		case joaat("crouching"):
			return 8;
	
		case joaat("Standing"):
			return 4;
	
		case joaat("Male"):
			return 1;
	
		case joaat("female"):
			return 2;
	
		default:
		
	}

	return 0;
}

int func_1297(Any* panParam0, int iParam1, int iParam2) // Position - 0x237F9 Hash - 0xB208A015 ^0xE27079B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

Vector3 func_1298(Any* panParam0, int iParam1, int iParam2) // Position - 0x23814 Hash - 0x21BBA13F ^0x345D7DB2
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk, panParam0);
	return unk;
}

int func_1299(int iParam0) // Position - 0x23832 Hash - 0x633BE9A1 ^0x4454C359
{
	switch (iParam0)
	{
		case joaat("ID_SKEL_NECK1"):
			return 14284;
	
		case joaat("id_skel_spine4"):
			return 14414;
	
		case joaat("ID_SKEL_HEAD"):
			return 21030;
	
		case joaat("id_skel_spine5"):
			return 14415;
	
		case joaat("id_skel_root"):
			return 0;
	
		case joaat("id_skel_spine6"):
			return 14416;
	
		case joaat("id_skel_neck0"):
			return 14283;
	
		case joaat("id_skel_spine0"):
			return 14410;
	
		case joaat("id_skel_neck2"):
			return 14285;
	
		case joaat("id_skel_spine1"):
			return 14411;
	
		case joaat("id_skel_spine2"):
			return 14412;
	
		case joaat("id_skel_spine_root"):
			return 11569;
	
		case joaat("id_skel_spine3"):
			return 14413;
	
		default:
		
	}

	return -1;
}

var func_1300(Any* panParam0) // Position - 0x238E0 Hash - 0x3E293D90 ^0x3E293D90
{
	return func_855(panParam0, 67, 1);
}

int func_1301(int iParam0) // Position - 0x238F1 Hash - 0x268EEAE9 ^0x84E7F047
{
	switch (iParam0)
	{
		case -1093766591:
			return -2147483648;
	
		case 106596528:
			return 16;
	
		case joaat("ONLY_INIT"):
			return 2;
	
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 8;
	
		case joaat("CHECK_MAX_CLAIMS"):
			return 1;
	
		case joaat("ONLY_ON_WIN"):
			return 4;
	
		default:
		
	}

	return 0;
}

int func_1302(int iParam0) // Position - 0x23947 Hash - 0xCE660251 ^0xCE660251
{
	switch (iParam0)
	{
		case joaat("INCREMENT_MISSION"):
			return 1;
	
		case joaat("INCREMENT_DIFFICULTY"):
			return 2;
	
		default:
		
	}

	return 0;
}

int func_1303(int iParam0) // Position - 0x2396F Hash - 0x8BF4E2FD ^0x8BF4E2FD
{
	switch (iParam0)
	{
		case joaat("IGNORE_FOR_REPLAY_AVAILABILITY"):
			return 2;
	
		case joaat("IGNORE_FOR_MISSION_SELECTION"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1304(int iParam0) // Position - 0x23997 Hash - 0xBBB4C7BA ^0xAD1B7C9A
{
	switch (iParam0)
	{
		case joaat("UGC_SKIP_LOBBY"):
			return 1024;
	
		case 236229850:
			return 2;
	
		case joaat("EXCLUDE_IN_PROGRESS"):
			return 4;
	
		case joaat("HIDE_SIDEMENU"):
			return 268435456;
	
		case joaat("HIDE_HELPTEXT_CANCEL_MSG"):
			return 536870912;
	
		case joaat("LOCKED_TO_GANG"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1305(int iParam0) // Position - 0x239F1 Hash - 0x8BF4E2FD ^0x8BF4E2FD
{
	switch (iParam0)
	{
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 2;
	
		case joaat("ONLY_ON_WIN"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1306(int iParam0) // Position - 0x23A19 Hash - 0x8BF4E2FD ^0x8BF4E2FD
{
	switch (iParam0)
	{
		case joaat("ONLY_IN_FLOW"):
			return 2;
	
		case joaat("ONLY_ON_WIN"):
			return 1;
	
		default:
		
	}

	return 0;
}

void func_1307(int iParam0) // Position - 0x23A41 Hash - 0x3BBB0D05 ^0xE971106E
{
	func_293(&(Global_1119235[iParam0 /*35*/].f_16));
	return;
}

int func_1308(int iParam0, int iParam1) // Position - 0x23A57 Hash - 0xE827FE7F ^0x78417C7B
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

void func_1309(var uParam0, var uParam1) // Position - 0x23A6F Hash - 0x6C75D286 ^0x9E265045
{
	Hash linkID;
	var unk;

	if (func_1149(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_1149(uParam0)))
	{
	}
	else
	{
		linkID = func_1149(uParam0);
		STATS::STATSTRACKER_DEED_STARTED(linkID, Global_265213.f_122484.f_80.f_12);
		TELEMETRY::_0x6F5BC5C4EAB42B15(linkID, 2, &(Global_265213.f_122484.f_80.f_22));
	
		if (func_1312(uParam0, &unk))
		{
			if (unk.f_29 == joaat("race_impromptu"))
				STATS::_0xF21A5D66874FCEDD(unk.f_2, 0, joaat("RACE"));
		
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_31, 0);
		}
	}

	return;
}

int func_1310(var uParam0, var uParam1, int iParam2) // Position - 0x23B18 Hash - 0x7D7A3F0A ^0x699D1139
{
	int num;

	num = func_1269(uParam0);

	if (num >= 0)
		return num;

	if (Global_1900460.f_66 >= 32)
		return -1;

	num = Global_1900460.f_66;
	func_1342(uParam0, num);
	Global_1900460.f_66 = Global_1900460.f_66 + 1;

	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
		return num;

	func_1336(num, iParam2);
	return iParam2;
}

int func_1311(var uParam0, var uParam1, BOOL bParam2) // Position - 0x23B89 Hash - 0xF9CF757 ^0xF9CF757
{
	int num;

	if (!func_18(uParam0))
		return 0;

	num = func_1269(uParam0);

	if (num < 0)
		return 0;

	if (!func_1343(uParam0, func_215(0), bParam2))
	{
		func_968(func_215(0), 3);
		func_968(func_215(num), 4);
		return 0;
	}

	func_1336(num, 0);
	func_968(func_215(0), 3);
	func_968(func_215(1), 4);
	return 1;
}

BOOL func_1312(int iParam0, var uParam1, var uParam2) // Position - 0x23BFD Hash - 0xAA374E32 ^0x1E15A248
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;
	func_78(iParam0, &unk);

	if (func_1344(iParam0, unk, uParam2))
		return true;

	return false;
}

Vector3 func_1313(Player plParam0) // Position - 0x23C31 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

int func_1314(int iParam0, int iParam1) // Position - 0x23C45 Hash - 0x13FDC773 ^0x13FDC773
{
	return 8 + (iParam0 * 2) + iParam1;
}

eStackSize func_1315(int iParam0) // Position - 0x23C57 Hash - 0x8094B681 ^0x47A3F737
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_1316(Hash hParam0) // Position - 0x23C6E Hash - 0x246EA1C5 ^0x246EA1C5
{
	switch (hParam0)
	{
		case joaat("nb_kidnapped"):
			return 6;
	
		case joaat("nb_slumped_hunter"):
			return 18;
	
		case joaat("la_beaver"):
			return 28;
	
		case joaat("nb_treasure_hunter"):
			return 9;
	
		case joaat("nb_photography"):
			return 7;
	
		case joaat("nb_hobo_dog"):
			return 12;
	
		case joaat("la_cougar"):
			return 22;
	
		case joaat("nb_tied_up_ped"):
			return 8;
	
		case -1209093440:
			return 33;
	
		case joaat("nb_tree_map"):
			return 10;
	
		case joaat("nb_moonshine_camp"):
			return 15;
	
		case joaat("la_fox"):
			return 26;
	
		case joaat("la_boar"):
			return 24;
	
		case joaat("la_moose"):
			return 30;
	
		case joaat("nb_rival_collector"):
			return 5;
	
		case joaat("nb_graverobber"):
			return 4;
	
		case joaat("nb_egg_protector"):
			return 3;
	
		case joaat("nb_runaway_wagon"):
			return 11;
	
		case 0:
			return 0;
	
		case joaat("nb_stalking_hunter"):
			return 17;
	
		case joaat("la_bear"):
			return 21;
	
		case joaat("nb_suspension_trap"):
			return 20;
	
		case 569695338:
			return 23;
	
		case joaat("la_coyote"):
			return 29;
	
		case joaat("la_alligator"):
			return 31;
	
		case 901959776:
			return 34;
	
		case joaat("nb_beggar"):
			return 16;
	
		case joaat("la_wolf"):
			return 27;
	
		case joaat("la_bison"):
			return 25;
	
		case joaat("nb_duel"):
			return 14;
	
		case joaat("nb_arrowhead_injury"):
			return 2;
	
		case 1773252799:
			return 32;
	
		case joaat("nb_crashed_wagon"):
			return 19;
	
		case joaat("nb_animal_attack"):
			return 1;
	
		case joaat("nb_wildman"):
			return 13;
	
		default:
		
	}

	return 0;
}

void func_1317(Hash hParam0, int iParam1) // Position - 0x23DF8 Hash - 0x9B315E7F ^0xD8D8F72C
{
	int num;

	if (Global_1051645.f_80.f_101 >= 10)
		return;

	num = func_1345(hParam0, iParam1);

	if (num != -1)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/], "HashOnlyScript", 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = hParam0;
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101 = Global_1051645.f_80.f_101 + 1;
	Global_1051645.f_45.f_1 = 1;
	return;
}

BOOL func_1318(int iParam0) // Position - 0x23E7C Hash - 0xD60E700A ^0x76E7C942
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return true;

	if (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0) == 4)
		return true;

	return false;
}

var func_1319(int iParam0) // Position - 0x23EA1 Hash - 0x8094B681 ^0xCDEB3F12
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_1320(int iParam0, int iParam1) // Position - 0x23EB8 Hash - 0x9FA1DFB7 ^0x9FA1DFB7
{
	if (func_1224(iParam0, iParam1) != 0)
	{
		if (func_1318(func_1224(iParam0, iParam1)))
		{
			func_1233(iParam0, iParam1);
			func_1076(iParam0, iParam1);
		}
	}

	return;
}

BOOL func_1321(int iParam0) // Position - 0x23EEC Hash - 0xB98BB601 ^0x5C793EA9
{
	int volumeLockRequestStatus;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return false;

	volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0);

	if (volumeLockRequestStatus == 3)
		return true;

	return false;
}

void func_1322(int iParam0, int iParam1, int iParam2) // Position - 0x23F15 Hash - 0xEC57E49F ^0xFCC1147C
{
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam2))
	{
		Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}

	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

BOOL func_1323(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x23F4F Hash - 0x1C39623E ^0x1C39623E
{
	return func_1061(iParam0, plParam2, func_1314(iParam1, iParam3));
}

BOOL func_1324(int iParam0, int iParam1, Player plParam2) // Position - 0x23F67 Hash - 0xCD1473C3 ^0xCD1473C3
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_1323(iParam0, iParam1, plParam2, i))
			return false;
	}

	return true;
}

BOOL func_1325(BOOL bParam0, int iParam1) // Position - 0x23F95 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

Vector3 func_1326(int iParam0) // Position - 0x23FD1 Hash - 0x770391FA ^0x35529ED4
{
	float num;
	int value;
	int value2;

	value = iParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (iParam0 & 1073741824 == 0)
		num = num * -1f;

	if (iParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

BOOL func_1327(var uParam0, int iParam1) // Position - 0x2402F Hash - 0xD785E709 ^0xCEF9EED8
{
	return iParam1 >= 0 && iParam1 < uParam0->f_2;
}

BOOL func_1328(var uParam0) // Position - 0x24047 Hash - 0x94562F20 ^0x604E8D55
{
	return *uParam0 == uParam0->f_2;
}

BOOL func_1329(var uParam0) // Position - 0x24057 Hash - 0x4E3CB413 ^0x3CB5C7AD
{
	if (uParam0->f_1 == -1)
		return false;

	if (!func_1095(&(uParam0->f_5)))
		return false;

	return true;
}

int func_1330(var uParam0, var uParam1) // Position - 0x2407C Hash - 0x67A996 ^0x5F20740C
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		num = (uParam0->f_1 + i) % uParam0->f_2;
	
		if (func_1346(uParam1, &uParam0->f_3[num /*40*/]))
			return i;
	}

	return -1;
}

BOOL func_1331(var uParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x240BD Hash - 0x14F4724D ^0x326BA845
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

	if (func_18(uParam0->f_8.f_5))
		unk34 = { uParam0->f_8.f_5 };
	else if (func_18(uParam0->f_8.f_5.f_6))
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
	else if (!func_1347(func_19(unk34), &unk))
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

int func_1332(int iParam0) // Position - 0x24316 Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_1348(&num2, iParam0))
		num = func_1349() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_1333(int iParam0) // Position - 0x24341 Hash - 0x2A0C2E1D ^0x2A0C2E1D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

int func_1334(int iParam0) // Position - 0x2435B Hash - 0x83E9D265 ^0xBE06DE0D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_1335(int iParam0, BOOL bParam1) // Position - 0x24377 Hash - 0x5364EDB8 ^0x5364EDB8
{
	switch (iParam0)
	{
		case joaat("bounty_board"):
		case joaat("gun_for_hire"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("outlaw"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
	
		case joaat("dynamic"):
			return bParam1;
	
		default:
		
	}

	return false;
}

void func_1336(int iParam0, int iParam1) // Position - 0x243DF Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_1350(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_1350(i, i + 1);
		}
	}

	if (func_18(Global_1900460.f_1[0 /*2*/]))
		func_968(Global_1900460.f_1[0 /*2*/], 3);

	return;
}

int func_1337() // Position - 0x24459 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_1351(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_1338(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x24476 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_504(false);
	*panParam1 = { func_503(hParam0, func_1273(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_1339(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x244BB Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_1340(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x244EE Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_504(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_1341(Hash hParam0, Hash hParam1) // Position - 0x24528 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_976(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_1342(var uParam0, var uParam1, int iParam2) // Position - 0x2455E Hash - 0x7E1BB651 ^0x229D30AA
{
	if (!func_18(uParam0))
		func_293(&Global_1900460.f_1[iParam2 /*2*/]);
	else
		Global_1900460.f_1[iParam2 /*2*/] = { uParam0 };

	func_1352(uParam0, false, 1, -1);
	return;
}

BOOL func_1343(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2459F Hash - 0x9B50566E ^0x9B50566E
{
	int num;
	int num2;

	if (!func_18(uParam0))
		return false;

	if (!func_18(uParam2))
		return true;

	num = func_1157(uParam0);
	num2 = func_1157(uParam2);

	if (num2 == num)
		if (bParam4)
			return true;

	if (num2 == 2 || num2 == 7)
	{
		if (bParam4 && num == 2 || num == 7)
			return true;
	
		return false;
	}

	if (num == 2 || num == 7)
		return true;

	if (num2 == 6)
		return false;

	if (num == 6)
		return true;

	if (num2 == 5)
		return false;

	if (num == 5)
		return true;

	if (num2 == 3)
	{
		if (bParam4 && num == 3)
			return true;
	
		return false;
	}

	if (num == 3)
		return true;

	if (num2 == 4)
	{
		if (bParam4 && num == 4)
			return true;
	
		return false;
	}

	if (num == 4)
		return true;

	return false;
}

BOOL func_1344(int iParam0, Hash hParam1, var uParam2) // Position - 0x246A6 Hash - 0x75EF2F01 ^0x75EF2F01
{
	var unk;

	if (!func_1353(iParam0))
		return false;

	if (func_1354(iParam0, hParam1, &unk))
		func_1355(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

int func_1345(Hash hParam0, int iParam1) // Position - 0x246DB Hash - 0x297FA709 ^0x759FD29
{
	int i;

	if (Global_1051645.f_80.f_101 == 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1051645.f_80.f_101 - 1; i = i + 1)
	{
		if (Global_1051645.f_80[i /*10*/].f_8 == hParam0 && Global_1051645.f_80[i /*10*/].f_9 == iParam1)
			return i;
	}

	return -1;
}

BOOL func_1346(var uParam0, var uParam1) // Position - 0x2473D Hash - 0x18878F11 ^0xC97EFD19
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

	if (!func_929(uParam1->f_8.f_5, uParam0->f_8.f_5))
		return false;

	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
		return false;

	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
		return false;

	return true;
}

BOOL func_1347(Hash hParam0, var uParam1) // Position - 0x24800 Hash - 0x276CF8AE ^0x276CF8AE
{
	int num;

	num = { func_1356(hParam0) };

	if (!func_18(num))
		return false;

	func_1344(num, hParam0, uParam1);
	return true;
}

BOOL func_1348(Any* panParam0, int iParam1) // Position - 0x2482E Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_1349() // Position - 0x24865 Hash - 0x33EB0DBC ^0xEC692AA0
{
	int numChildren;
	int num;

	numChildren = 0;
	num = Global_1245174.f_9818;
	num.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(num, num.f_1);

	return numChildren;
}

void func_1350(int iParam0, int iParam1) // Position - 0x2489D Hash - 0x3FC44C33 ^0xD65D7FEF
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { unk };
	return;
}

int func_1351(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x248EA Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_1357(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_504(bParam1), hParam0, bParam3);
}

int func_1352(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x2491D Hash - 0xDDB8C619 ^0xCEB84853
{
	Hash hash;

	if (func_1358(uParam0) >= 0)
		return 0;

	hash.f_1 = -1;
	hash.f_1.f_1 = -1;
	hash.f_1 = { uParam0 };
	hash = func_19(uParam0);
	hash.f_3 = iParam3;
	func_1359(&hash, bParam2, iParam4);
	return 1;
}

BOOL func_1353(int iParam0) // Position - 0x2496B Hash - 0x5000025C ^0x5000025C
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

BOOL func_1354(int iParam0, var uParam1, Any* panParam2) // Position - 0x249AA Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_1360(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_1355(int iParam0, Any* panParam1, var uParam2) // Position - 0x249DE Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_1361(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1362(num);
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
			uParam2->f_5 = func_1363(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_1364(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_1365(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_1366(num);
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

struct<2> func_1356(Hash hParam0) // Position - 0x24C39 Hash - 0x6C87C802 ^0xCFA8552F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_647(hParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_838();
}

BOOL func_1357(Hash hParam0) // Position - 0x24D09 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_1358(var uParam0, var uParam1) // Position - 0x24D17 Hash - 0x434C0FF6 ^0x921423DE
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (func_929(Global_1205804[i /*4*/].f_1, uParam0))
			return i;
	}

	return -1;
}

void func_1359(var uParam0, BOOL bParam1, int iParam2) // Position - 0x24D64 Hash - 0x461BFBC7 ^0x2692B01B
{
	func_1367(uParam0, iParam2);

	if (Global_1205804.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}

	if (bParam1)
		func_1368(func_1358(uParam0->f_1));
	else
		func_1369();

	return;
}

int func_1360(int iParam0) // Position - 0x24D9E Hash - 0x5FB59AC3 ^0xE293EFF
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

int func_1361(int iParam0, var uParam1) // Position - 0x24F13 Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_1370(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_1362(int iParam0) // Position - 0x24F30 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_1363(int iParam0) // Position - 0x25086 Hash - 0xCBE7BE7C ^0xCBE7BE7C
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

int func_1364(int iParam0) // Position - 0x250DD Hash - 0x2A2D8996 ^0x2A2D8996
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

int func_1365(int iParam0) // Position - 0x251B7 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_1366(int iParam0) // Position - 0x2524F Hash - 0xD7A7D6 ^0xD7A7D6
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

void func_1367(var uParam0, int iParam1) // Position - 0x253F9 Hash - 0xCDD685CE ^0x375661B6
{
	int num;
	int num2;
	var unk;

	if (Global_1205804.f_129 >= 32)
	{
		Global_1205804.f_129 = 32;
		return;
	}

	if (iParam1 >= Global_1205804.f_129)
		iParam1 = -1;

	if (iParam1 <= -1)
	{
		Global_1205804[Global_1205804.f_129 /*4*/] = { *uParam0 };
		Global_1205804.f_129 = Global_1205804.f_129 + 1;
		return;
	}

	num = iParam1;
	num2 = Global_1205804.f_129 - 1;
	unk.f_1 = -1;
	unk.f_1.f_1 = -1;

	while (num2 >= num)
	{
		unk = { Global_1205804[num2 /*4*/] };
		Global_1205804[num2 /*4*/] = { Global_1205804[num2 + 1 /*4*/] };
		Global_1205804[num2 + 1 /*4*/] = { unk };
		num2 = num2 - 1;
	}

	Global_1205804[iParam1 /*4*/] = { *uParam0 };
	Global_1205804.f_129 = Global_1205804.f_129 + 1;
	return;
}

void func_1368(int iParam0) // Position - 0x254CD Hash - 0xE5C19B38 ^0xAE10C8B0
{
	if (iParam0 < 0 || iParam0 >= Global_1205804.f_129)
		return;

	Global_1205804.f_130 = iParam0;
	Global_1205804.f_131 = Global_1205804[iParam0 /*4*/];
	return;
}

void func_1369() // Position - 0x25504 Hash - 0x2915DC5D ^0x242F350
{
	if (Global_1205804.f_131 == 0)
		return;

	Global_1205804.f_130 = func_1371(Global_1205804.f_131);

	if (Global_1205804.f_130 < 0)
		Global_1205804.f_131 = 0;

	return;
}

BOOL func_1370(int iParam0, var uParam1, var uParam2) // Position - 0x2553A Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_1372(iParam0, uParam1, &unk))
		func_1373(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_1371(int iParam0) // Position - 0x25561 Hash - 0x4D89B0D4 ^0xEE7F90D0
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (Global_1205804[i /*4*/] == iParam0)
			return i;
	}

	return -1;
}

BOOL func_1372(int iParam0, var uParam1, Any* panParam2) // Position - 0x255A4 Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_1360(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_1373(Any* panParam0, int iParam1, var uParam2) // Position - 0x255D8 Hash - 0x59F43AD2 ^0xB9A366FE
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

