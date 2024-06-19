#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char* sLocal_14 = 0;
	char* sLocal_15 = 0;
	char* sLocal_16 = 0;
	char* sLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x2E5D63AA ^0xB2A36DCA
{
	BOOL flag;
	BOOL flag2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (NETWORK::NETWORK_IS_IN_SESSION())
		NETWORK::_0xFD4272A137703449();

	MISC::GAME_FRAMEWORK_MANAGER_INIT(496295564);
	func_1(-1);
	func_2();
	func_3();
	func_4(1);
	func_5(true);
	func_6(false);
	func_7(0);

	if (NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING() && !func_8())
		NETWORK::_0x5B9C6AC118FD4774();

	flag = true;

	while (flag)
	{
		func_9();
	
		if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
		{
			PLAYER::FORCE_CLEANUP(512);
			func_10();
			flag = false;
		}
	
		if (func_11())
		{
			PLAYER::FORCE_CLEANUP(2);
			CAM::DO_SCREEN_FADE_OUT(0);
			func_12(0);
			flag = false;
		}
	
		if (func_13() != 2)
			flag = false;
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			flag = false;
			flag2 = true;
		}
	
		if (flag)
		{
			if (func_14())
			{
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_PAUSE"), false);
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
			}
		
			func_15();
		}
		else if (!flag2 || Global_0.f_14)
		{
			if (func_16() && func_17())
			{
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (flag2 && !Global_0.f_14)
		func_18();

	while (func_19(&Global_0, 2))
	{
		func_9();
		func_17();
		BUILTIN::WAIT(0);
	}

	func_20();

	while (!func_21())
	{
		func_9();
		BUILTIN::WAIT(0);
	}

	if (func_13() == 3 && !REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 5000f, 2442122);

	func_2();
	func_22();
	MISC::_0x1096603B519C905F("");
	func_23();
	MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	UILOG::_0xDA0A30153FCC0FFD();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(int iParam0) // Position - 0x1A8 Hash - 0x29A8F290 ^0x8D3AE984
{
	Global_1572887.f_12 = iParam0;
	return;
}

void func_2() // Position - 0x1B8 Hash - 0x27DB40FB ^0x951B51F1
{
	var unk;

	if (NETWORK::NETWORK_IS_IN_SESSION())
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			return;

	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_152)))
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_152));

	unk.f_5 = 2;
	unk.f_12 = -1;
	unk.f_17 = -1;
	Global_1572887.f_152 = { unk };
	return;
}

void func_3() // Position - 0x211 Hash - 0x13A551FC ^0x28673793
{
	func_24();
	func_25(-1);
	func_26(0);
	Global_1572887.f_94.f_41 = 0;

	if (Global_1572887.f_94.f_53 == 2)
		Global_1572887.f_94.f_53 = 0;

	return;
}

void func_4(int iParam0) // Position - 0x245 Hash - 0x42868A8 ^0xDEB2BE19
{
	Global_1572887.f_94.f_44 = iParam0;
	return;
}

void func_5(BOOL bParam0) // Position - 0x257 Hash - 0x690E6520 ^0x22CE8B66
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
	return;
}

void func_6(BOOL bParam0) // Position - 0x265 Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1898077.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_27() != -1)
		num = 1;

	if (Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13 && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_28(num, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = num;
		Global_1898077.f_8 = func_29();
		Global_1898077.f_9 = func_30(Global_1894899.f_2);
		func_31(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}

	Global_1898077.f_2 = 0;
	return;
}

void func_7(int iParam0) // Position - 0x323 Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_32(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_33(true);

	return;
}

BOOL func_8() // Position - 0x391 Hash - 0x7CC17417 ^0x2B629C31
{
	return Global_1572887.f_94 > 0;
}

void func_9() // Position - 0x3A1 Hash - 0x1120F7A5 ^0x68820DDF
{
	int i;
	struct<2> eventData;
	var unk2;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i))
		{
			case -1832939826:
				eventData = { unk2 };
			
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 2))
				{
					switch (eventData)
					{
						case 0:
							func_34();
							break;
					
						case 1:
							func_34();
							break;
					}
				}
				break;
		
			case -1688530399:
				break;
		
			case -1373301352:
				break;
		
			case 163683216:
				func_34();
				break;
		
			case 239947537:
				break;
		
			case 1355399116:
				break;
		
			case 1976253964:
				break;
		}
	}

	return;
}

void func_10() // Position - 0x446 Hash - 0xA0F7ADEB ^0xD1751D22
{
	func_35(4);
	func_36(joaat("clip"), 0);
	func_37(4);
	return;
}

BOOL func_11() // Position - 0x462 Hash - 0x71AE11F0 ^0x4F2D983B
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i))
		{
			case 239947537:
				return true;
		}
	}

	return false;
}

void func_12(int iParam0) // Position - 0x49B Hash - 0x82A87E90 ^0x82A87E90
{
	if (iParam0 != 0)
		func_38(iParam0, -1);

	func_35(4);
	func_37(1);
	return;
}

int func_13() // Position - 0x4BA Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1572864;
}

BOOL func_14() // Position - 0x4C6 Hash - 0xE5A20F0C ^0x4EF52595
{
	if (func_39(32))
		return true;

	if (UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
		return true;

	return false;
}

void func_15() // Position - 0x4E8 Hash - 0xCDED4F2F ^0xF08513F6
{
	int num;

	if (iLocal_18 > 0)
		func_40();

	if (!func_41(2))
		func_42();

	switch (iLocal_18)
	{
		case 0:
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("main")) <= 0)
			{
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
			
				if (func_39(32))
				{
					if (func_39(8))
					{
						num = 1;
					}
					else if (func_39(16))
					{
						func_43(false);
						num = 0;
						func_44(&(Global_1347343.f_11), 512);
					}
				
					MISC::COPY_SCRIPT_STRUCT(&Global_40, &Global_2621440[num /*12066*/], 12066);
					MISC::COPY_SCRIPT_STRUCT(&Global_12106, &Global_2645573[num /*5398*/], 5398);
					MISC::COPY_SCRIPT_STRUCT(&Global_17504, &Global_2656370[num /*3206*/], 3206);
					MISC::COPY_SCRIPT_STRUCT(&Global_20710, &Global_2662783[num /*2408*/], 2408);
					MISC::COPY_SCRIPT_STRUCT(&Global_23118, &Global_2667600[num /*1769*/], 1769);
					MISC::COPY_SCRIPT_STRUCT(&Global_24887, &Global_2671139[num /*1909*/], 1909);
					MISC::COPY_SCRIPT_STRUCT(&Global_26796, &Global_2674958[num /*777*/], 777);
					MISC::COPY_SCRIPT_STRUCT(&Global_27573, &Global_2676513[num /*4501*/], 4501);
					MISC::COPY_SCRIPT_STRUCT(&Global_32074, &Global_2685516[num /*4234*/], 4234);
				
					if (num == 1)
					{
						if (MISC::_0x7CF96F1250EF3221(num))
						{
							MISC::_0x6C7B68D3CE60E8DE(num);
						}
						else if (MISC::_0x7CF96F1250EF3221(0))
						{
							MISC::_0x6C7B68D3CE60E8DE(0);
							func_45();
							num = 0;
						}
					
						if (func_39(32768))
							SCRIPTS::_ACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_REPLAYING_MISSION"));
					}
					else
					{
						if (MISC::_0x7CF96F1250EF3221(num))
						{
							if (func_39(32768) && func_46(Global_1879514.f_1))
								MISC::_0x627B68D9CE6EE8DE(num);
							else
								MISC::_0x6C7B68D3CE60E8DE(num);
						
							func_45();
						}
						else if (MISC::_0x7CF96F1250EF3221(1))
						{
							MISC::_0x6C7B68D3CE60E8DE(1);
							num = 1;
						}
					
						if (func_39(32768))
						{
							func_47(32768);
							func_48();
							func_49();
							SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_REPLAYING_MISSION"));
							HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
							func_50(PLAYER::PLAYER_PED_ID());
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							func_52(func_51(Global_1879514.f_1));
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							AUDIO::TRIGGER_MUSIC_EVENT("STOP_MUSIC_8S");
						}
						else if (!func_39(2))
						{
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
						}
					}
				
					func_53(num);
					func_47(24);
				}
				else if (func_54())
				{
					func_55();
					func_56(1);
				}
			
				func_57();
			
				if (!func_39(32) && func_58() && !Global_40)
					CLOCK::SET_CLOCK_DATE(1, 0, 1898);
			
				func_59();
				func_22();
				func_60(true);
				func_61(1);
				func_62();
				func_63();
				func_64();
				MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);
				MISC::_0x1096603B519C905F("");
				func_23();
				GRAPHICS::_0xA21AF60C9F99CCC5();
				func_65(1);
			}
			break;
	
		case 1:
			if (func_66("main", 1024, &Global_23[0]))
			{
				func_67();
				func_65(2);
			}
			break;
	
		case 2:
			func_68();
			func_65(3);
			break;
	
		case 3:
			if (Global_43889)
			{
				Global_43889 = false;
				PLAYER::FORCE_CLEANUP(2);
				func_65(4);
			}
			break;
	
		case 4:
			func_20();
			func_65(5);
			break;
	
		case 5:
			if (func_21())
			{
				if (func_39(4096))
					func_69(4);
			
				func_65(0);
			}
			break;
	}

	return;
}

int func_16() // Position - 0x81F Hash - 0x2DC2F17B ^0x144DFE2A
{
	if (Global_1572887.f_12 == -1)
		if (!func_58())
			return 0;
		else if (!func_70(0))
			return 0;
		else if (func_71())
			return 0;

	if (!(Global_21 & 64 != 0))
		return 0;

	if (func_39(32898))
		return 0;

	if (func_46(Global_1572864.f_8))
		return 0;

	if (Global_1572864.f_21 != 0)
		return 0;

	if (func_19(&Global_0, 32))
	{
		if (func_19(&Global_0, 2))
			return 1;
	
		if (func_19(&Global_0, 64))
			return 1;
	}

	if (func_72(0, true, true))
		return 0;

	if (func_73(PLAYER::PLAYER_ID(), true, false, false))
		return 0;

	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		return 0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
		return 0;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return 0;

	if (UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
		return 0;

	if (func_13() != 2 && func_13() != 3)
		return 0;

	if (func_74())
		return 0;

	return 1;
}

int func_17() // Position - 0x93C Hash - 0x9A58DA2C ^0x67D4600A
{
	if (!func_19(&Global_0, 2))
	{
		if (Global_1572887.f_10)
		{
			func_75(&Global_0, 1);
			return 0;
		}
	
		if (!func_58())
		{
			func_75(&Global_0, 1);
			return 0;
		}
	
		if (func_46(func_76(0)))
			return 0;
	
		if (Global_1879534)
			return 0;
	
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
			return 0;
	
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			return 0;
	
		if (func_77(Global_1935630, 2048) || func_39(38))
			return 0;
	
		if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
			return 0;
	
		if (SAVE::SAVEGAME_IS_SAVE_PENDING())
			return 0;
	
		if (Global_1935630.f_2 != Global_40.f_39 || !Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39)
			return 0;
	
		if (Global_40.f_7729 != Global_1905941)
			return 0;
	
		if (func_19(&Global_0, 16))
		{
			func_75(&Global_0, 16);
			return 0;
		}
	
		if (Global_1914319.f_18941.f_17)
			return 0;
	
		if (STREAMING::_0x99F92061EFE908BA())
			return 0;
	
		func_78(false);
	}

	if (SAVE::SAVEGAME_IS_SAVE_PENDING())
		return 0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
		return 0;

	func_79(0, false);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	Global_0.f_14 = 0;
	func_80(&Global_0, 4);
	func_75(&Global_0, 2);
	func_75(&Global_0, 32);
	func_75(&Global_0, 64);
	return 1;
}

void func_18() // Position - 0xACD Hash - 0x72AE3119 ^0x2B2B1307
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	func_81(&Global_0);
	return;
}

BOOL func_19(Hash hParam0, int iParam1) // Position - 0xAF1 Hash - 0x718DD1EF ^0xD9260236
{
	return hParam0->f_2 && iParam1 != false;
}

void func_20() // Position - 0xB02 Hash - 0xCB5B0DE1 ^0xDC02904
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_23[i], false) && !SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_23[i]))
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_23[i]);
	}

	return;
}

BOOL func_21() // Position - 0xB47 Hash - 0x1097E00A ^0xF319AD8E
{
	BOOL num;
	int i;

	num = 1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_23[i], false))
			num = 0;
	}

	return num;
}

void func_22() // Position - 0xB78 Hash - 0xFBDFDF44 ^0x335CFD3C
{
	int i;

	func_82(512);

	for (i = 0; i < 25; i = i + 1)
	{
		func_83(i);
	}

	DATAFILE::_0x3168BA5D6DECE323();
	return;
}

void func_23() // Position - 0xBA4 Hash - 0xCE5FB49E ^0x1685AE95
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	return;
}

void func_24() // Position - 0xBB0 Hash - 0xC7E398FF ^0xE19E192D
{
	Global_1572887.f_94.f_40 = MISC::GET_GAME_TIMER();
	return;
}

void func_25(int iParam0) // Position - 0xBC4 Hash - 0x42868A8 ^0x1DF1CEDD
{
	Global_1572887.f_94.f_1 = iParam0;
	return;
}

void func_26(int iParam0) // Position - 0xBD6 Hash - 0x29A8F290 ^0x8EFB0B73
{
	Global_1572887.f_94 = iParam0;
	return;
}

BOOL func_27() // Position - 0xBE6 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_28(int iParam0, var uParam1) // Position - 0xBF4 Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_29() // Position - 0xC0F Hash - 0xD5B66211 ^0x9B76C225
{
	float randomFloatInRange;

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216);

	if (randomFloatInRange < 0.01f)
		return 19;

	if (randomFloatInRange < 0.16f)
		return 15;

	if (randomFloatInRange < 0.31f)
		return 17;

	if (randomFloatInRange < 0.46f)
		return 16;

	if (randomFloatInRange < 0.61f)
		return 18;

	return 0;
}

int func_30(eStackSize essParam0) // Position - 0xC74 Hash - 0x6761E6A0 ^0x6761E6A0
{
	switch (essParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 112;
	
		case 2:
			return 113;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	
		case 15:
			return 12;
	
		case 16:
			return 13;
	
		case 17:
			return 15;
	
		case 19:
			return 17;
	
		case 20:
			return 18;
	
		case 21:
			return 19;
	
		case 22:
			return 20;
	
		case 23:
			return 21;
	
		case 25:
			return 23;
	
		case 26:
			return 25;
	
		case 27:
			return 26;
	
		case 28:
			return 62;
	
		case 29:
			return 27;
	
		case 30:
			return 29;
	
		case 31:
			return 30;
	
		case 32:
			return 31;
	
		case 33:
			return 35;
	
		case 35:
			return 42;
	
		case 36:
			return 43;
	
		case 37:
			return 47;
	
		case 38:
			return 48;
	
		case 39:
			return 49;
	
		case 40:
			return 50;
	
		case 42:
			return 52;
	
		case 43:
			return 54;
	
		case 45:
			return 57;
	
		case 48:
			return 61;
	
		case 49:
			return 28;
	
		case 50:
			return 51;
	
		case 52:
			return 53;
	
		case 56:
			return 63;
	
		case 57:
			return 64;
	
		case 58:
			return 65;
	
		case 59:
			return 66;
	
		case 60:
			return 67;
	
		case 61:
			return 68;
	
		case 62:
			return 71;
	
		case 64:
			return 73;
	
		case 65:
			return 74;
	
		case 67:
			return 76;
	
		case 68:
			return 78;
	
		case 69:
			return 79;
	
		case 70:
			return 80;
	
		case 71:
			return 81;
	
		case 72:
			return 82;
	
		case 75:
			return 84;
	
		case 76:
			return 85;
	
		case 77:
			return 72;
	
		case 78:
			return 87;
	
		case 79:
			return 88;
	
		case 80:
			return 90;
	
		case 81:
			return 91;
	
		case 82:
			return 92;
	
		case 83:
			return 40;
	
		case 87:
			return 96;
	
		case 88:
			return 97;
	
		case 89:
			return 44;
	
		case 91:
			return 98;
	
		case 92:
			return 99;
	
		case 93:
			return 100;
	
		case 94:
			return 101;
	
		case 95:
			return 102;
	
		case 96:
			return 103;
	
		case 97:
			return 104;
	
		case 98:
			return 105;
	
		case 99:
			return 106;
	
		case 100:
			return 107;
	
		case 104:
			return 114;
	
		case 105:
			return 115;
	
		case 107:
			return 118;
	
		case 109:
			return 119;
	
		case 110:
			return 120;
	
		case 111:
			return 121;
	
		case 112:
			return 122;
	
		case 115:
			return 46;
	
		case 117:
			return 86;
	
		case 120:
			return 32;
	
		case 124:
			return 33;
	
		case 125:
			return 34;
	
		case 126:
			return 69;
	
		case 127:
			return 70;
	
		case MICRO:
			return 123;
	
		default:
		
	}

	return 0;
}

void func_31(int iParam0, var uParam1, int iParam2) // Position - 0x1089 Hash - 0xD64E984D ^0x9D3A2521
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	num.f_2 = iParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &num, 3, 3);
	return;
}

void func_32(int iParam0, int iParam1) // Position - 0x10AA Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_33(true);

	return;
}

void func_33(BOOL bParam0) // Position - 0x10C3 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_84(&(Global_40.f_12019.f_42), 1);
	else
		func_85(&(Global_40.f_12019.f_42), 1);

	return;
}

void func_34() // Position - 0x10ED Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1898077 = true;
	return;
}

void func_35(int iParam0) // Position - 0x10FA Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_36(int iParam0, int iParam1) // Position - 0x1111 Hash - 0x8BA690B0 ^0x81A84DFE
{
	Global_1572887.f_182 = iParam0;
	Global_1572887.f_182.f_1 = iParam1;
	func_86(28);
	return;
}

void func_37(int iParam0) // Position - 0x1131 Hash - 0x2BE23AD4 ^0x369A49EF
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

void func_38(int iParam0, int iParam1) // Position - 0x114A Hash - 0x277DE552 ^0xA236FB53
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
	return;
}

BOOL func_39(int iParam0) // Position - 0x1162 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_40() // Position - 0x1175 Hash - 0xA9135105 ^0xAD4BCB42
{
	Ped playerPed;
	float heading;
	Vector3 vector;
	Vector3 vector2;
	var unk5;
	eStackSize stackSize;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());

	switch (iLocal_19)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(playerPed))
				Global_35 = playerPed;
		
			func_87(true);
		
			if (func_88())
			{
				vector = { func_89(&heading) };
			
				if (!ENTITY::IS_ENTITY_DEAD(playerPed))
				{
					ENTITY::SET_ENTITY_COORDS(playerPed, vector, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(playerPed, heading);
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
				else
				{
					return;
				}
			
				STREAMING::LOAD_SCENE_START_SPHERE(vector, 75f, 1);
				iLocal_20 = 0;
				func_69(1);
			}
			else
			{
				func_69(3);
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(playerPed))
				Global_35 = playerPed;
		
			if (STREAMING::IS_LOAD_SCENE_ACTIVE() || iLocal_20 >= 100)
			{
				iLocal_20 = 0;
				func_69(2);
			}
			else
			{
				iLocal_20 = iLocal_20 + 1;
			}
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(playerPed))
				Global_35 = playerPed;
		
			if (STREAMING::IS_LOAD_SCENE_ACTIVE() && STREAMING::IS_LOAD_SCENE_LOADED() || iLocal_20 >= 100)
			{
				STREAMING::LOAD_SCENE_STOP();
				func_69(3);
			}
			else
			{
				iLocal_20 = iLocal_20 + 1;
			}
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(playerPed))
				Global_35 = playerPed;
			else
				return;
		
			if (func_58() && Global_40 && Global_40.f_39 != 0)
				if (func_90(Global_40.f_39))
					func_69(4);
			else if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("Player_Zero") || func_90(joaat("Player_Zero")))
				func_69(4);
			break;
	
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(playerPed))
				return;
		
			Global_35 = playerPed;
			func_91();
		
			if (!func_92())
				if (func_93())
					func_94();
		
			if (func_88())
			{
				func_43(4096);
				func_69(5);
			}
			else if (func_41(256))
			{
				func_95();
				func_96();
				Global_1894899.f_8 = 1;
			
				if (func_97(func_41(32768)))
				{
					func_99(func_98(), &vector2, &unk5);
				
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), vector2) > 5f)
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector2, false, false, true, true);
				
					if (func_100(func_98()))
					{
						func_101(true, func_98());
						func_43(4096);
						func_69(5);
					}
				}
				else
				{
					stackSize = func_102(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), true);
				
					if (func_100(stackSize))
					{
						func_101(false, stackSize);
						func_43(4096);
						func_69(5);
					}
				}
			}
			break;
	
		case 5:
			if (!Global_40 && !func_41(4))
				func_103();
			break;
	}

	return;
}

BOOL func_41(BOOL bParam0) // Position - 0x140F Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_21 && bParam0 != false;
}

Player func_42() // Position - 0x141F Hash - 0x7C4697AC ^0xA40D3BD2
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1224589.f_3;
		Global_36 = { Global_1224589.f_11 };
		return Global_1224589.f_5;
	}

	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

void func_43(BOOL bParam0) // Position - 0x146D Hash - 0x88AD5D ^0x88AD5D
{
	Global_21 = Global_21 || bParam0;
	return;
}

void func_44(int iParam0, int iParam1) // Position - 0x147E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_45() // Position - 0x148F Hash - 0x975142F2 ^0x77EE5EFF
{
	int i;

	VOLUME::_0x748C5F51A18CB8F0(false);

	for (i = 0; i < 6; i = i + 1)
	{
		if (func_104(i))
			func_105(i);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

BOOL func_46(int iParam0) // Position - 0x14C2 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_47(int iParam0) // Position - 0x14F5 Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_48() // Position - 0x1513 Hash - 0xFC27E050 ^0xFC27E050
{
	func_106();
	func_107();
	func_108();
	func_109();
	return;
}

void func_49() // Position - 0x152B Hash - 0xE98105F9 ^0x4598E38E
{
	Global_1327590.f_9 = -1;
	Global_1327590.f_10.f_11 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1327590.f_10.f_1), "", 64);
	return;
}

void func_50(Ped pedParam0) // Position - 0x1550 Hash - 0x81D377CD ^0x85CCD549
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	func_110(pedParam0);
	PED::CLEAR_PED_WETNESS(pedParam0);
	PED::_0xA7A806677F8DE138(pedParam0);
	PED::_0xA064BBABB064446F(pedParam0);
	PED::CLEAR_PED_ENV_DIRT(pedParam0);
	PED::_0x9184788BFF1EDAD7(pedParam0, 0f);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");

	for (i = 0; i < 10; i = i + 1)
	{
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, i, "ALL");
	}

	return;
}

const char* func_51(int iParam0) // Position - 0x15B2 Hash - 0x88866CBF ^0x968A3C4C
{
	const char* str;

	if (!func_46(iParam0))
		return str;

	switch (func_111(iParam0))
	{
		case 1:
			str = Global_1835011[func_112(iParam0) /*74*/].f_8;
			break;
	
		case 8:
			str = Global_1347702[func_113(iParam0) /*49*/].f_3;
			break;
	
		case 11:
			if (iParam0 == func_114(0, 10, 11, joaat("cabr01")))
				TEXT_LABEL_ASSIGN_STRING(&str, "CABR01", 8);
			break;
	}

	return str;
}

void func_52(const char* sParam0) // Position - 0x162B Hash - 0x883DA5E0 ^0x949DA11F
{
	int rating;
	Hash hashKey;

	if (!Global_1879514.f_11)
	{
		rating = func_115();
		hashKey = MISC::GET_HASH_KEY(&sParam0);
	
		if (MISSIONDATA::MISSIONDATA_GET_RATING(hashKey) != 5 && rating == 5)
			if (func_111(Global_1879514.f_1) == 1)
				func_116(5, 1);
			else if (func_111(Global_1879514.f_1) == 8 && func_117(Global_1347702[func_113(Global_1879514.f_1) /*49*/].f_12, 1) || func_117(Global_1347702[func_113(Global_1879514.f_1) /*49*/].f_12, 33554432))
				func_116(5, 1);
	
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&sParam0), rating);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&sParam0), 3);
	}

	return;
}

void func_53(int iParam0) // Position - 0x16E5 Hash - 0x61B677E ^0xDC070C0
{
	func_118(Global_2621440[iParam0 /*12066*/].f_9.f_14);
	LAW::SET_BOUNTY(PLAYER::PLAYER_ID(), 0);
	LAW::CLEAR_WANTED_SCORE(PLAYER::GET_PLAYER_INDEX());
	COMPAPP::_0xCCB4635A071FB62D();

	if (Global_40.f_9.f_20 > 0)
		LAW::ADD_BOUNTY(PLAYER::GET_PLAYER_INDEX(), Global_40.f_9.f_20);

	return;
}

BOOL func_54() // Position - 0x172D Hash - 0xEC72D69C ^0x1E34AD26
{
	if (func_39(8192))
		return true;

	return false;
}

void func_55() // Position - 0x1744 Hash - 0x200857A7 ^0x200857A7
{
	func_119();
	func_120();
	func_121();
	func_122();
	func_123();
	func_124();
	func_125();
	func_126();
	func_127();
	return;
}

void func_56(BOOL bParam0) // Position - 0x1770 Hash - 0x19CAFB7B ^0xBB1C7181
{
	if (Global_1572887.f_12 == false)
		return;

	Global_40.f_1 = bParam0;
	TELEMETRY::_TELEMETRY_SET_IS_FLOW(bParam0);
	return;
}

void func_57() // Position - 0x1792 Hash - 0xC665E7D9 ^0xB8C7713A
{
	func_128(&(Global_40.f_40));
	return;
}

BOOL func_58() // Position - 0x17A3 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_59() // Position - 0x17C2 Hash - 0x8D222CF ^0x8D222CF
{
	Global_21 = false;
	return;
}

void func_60(BOOL bParam0) // Position - 0x17CE Hash - 0x4B3E79AC ^0x775F7A78
{
	func_22();

	if (bParam0)
	{
		func_130(3, 488600546, &func_129);
		func_130(5, joaat("POST_OFFICE"), &func_131);
		func_130(6, -1662293291, &func_132);
		func_130(7, 1515062182, &func_133);
		func_130(9, -201199740, &func_134);
		func_130(10, -1408350261, &func_135);
		func_130(11, -1226891409, &func_136);
		func_130(13, 2146271685, &func_137);
		func_130(12, -141518706, &func_138);
		func_130(15, -798635963, &func_139);
		func_130(16, -1516564258, &func_140);
		func_130(17, joaat("collectibles"), &func_141);
		func_130(18, -893403924, &func_142);
		func_130(19, -1393214753, &func_143);
		func_130(20, -898400110, &func_144);
		func_130(21, -1132418307, &func_145);
		func_130(22, -1336593721, &func_146);
		func_130(23, 1308589725, &func_147);
	}

	func_43(512);
	return;
}

void func_61(int iParam0) // Position - 0x18F0 Hash - 0x33B634F4 ^0xB2753CC5
{
	BOOL flag;
	var unk;
	var unk152;
	var unk303;
	eStackSize i;

	flag = func_27() == -1;
	func_82(65536);

	if (flag)
		func_148();

	if (func_149())
		return;

	func_150();
	func_151();
	unk = 150;
	unk152 = 150;
	unk303 = 150;
	func_152();
	VOLUME::_0x748C5F51A18CB8F0(false);
	func_153(&unk, &(Global_1894899.f_172), " ");
	func_153(&unk152, &(Global_1894899.f_173), " - Town");
	func_153(&unk303, &(Global_1894899.f_174), " - Wanted");
	VOLUME::_0x748C5F51A18CB8F0(true);
	func_154(true);

	if (func_27() == -1)
	{
		func_155(&(Global_1894899.f_170));
		func_156();
		func_157(&(Global_1894899.f_171));
		func_158();
	}

	func_159();
	VOLUME::_0x748C5F51A18CB8F0(false);
	Global_1894899.f_176 = 0;
	Global_1894899.f_177 = 0;
	Global_1894899.f_178 = 0;
	Global_1894899.f_179 = 0;
	Global_1894899.f_180 = 0;
	Global_1894899.f_181 = 0;

	for (i = 0; i < 130; i = i + 1)
	{
		func_160(&(Global_1894899.f_170), i, unk[i], unk152[i], unk303[i]);
		func_161(&(Global_1894899.f_171), i);
	}

	func_162();
	VOLUME::_0x748C5F51A18CB8F0(true);
	func_163(&(Global_1894899.f_170));
	func_164(&(Global_1894899.f_171));
	func_165();
	func_166();
	func_43(65536);
	return;
}

void func_62() // Position - 0x1A45 Hash - 0x23A2FC3A ^0x23A2FC3A
{
	func_167(8);
	return;
}

void func_63() // Position - 0x1A53 Hash - 0xB90DF9BD ^0xE8BB4E92
{
	func_167(256);
	return;
}

void func_64() // Position - 0x1A62 Hash - 0x5A8510D0 ^0x2F05B1CB
{
	func_168();
	func_169(0);
	func_169(-538880323);
	func_169(1497516462);
	func_169(405586984);
	func_169(356365161);
	func_169(1177464213);
	func_169(-1674179981);
	func_169(1376646519);
	func_169(1822001510);
	func_169(1306158345);
	func_169(-1414537028);
	func_169(-1666278201);
	func_169(-150493654);
	func_169(-1524512402);
	func_169(198200492);
	func_169(-1164215952);
	func_169(-1236261996);
	func_169(817925178);
	func_169(1151197909);
	func_169(-1556423728);
	func_169(-144653976);
	func_169(-351362068);
	func_169(-939114198);
	func_169(-1318987693);
	func_169(-853383233);
	func_169(-1824738758);
	func_169(-2020023971);
	func_169(1216784232);
	func_169(2019386373);
	func_169(-1831552326);
	func_169(-1151084372);
	func_169(-644722288);
	func_169(-1717960576);
	func_169(-545450213);
	func_169(-919512195);
	func_169(1954026328);
	func_169(-524145696);
	func_169(-1764522338);
	func_169(-333135263);
	func_169(1766284049);
	func_169(-1825294305);
	func_169(1500064347);
	func_169(-789397228);
	func_169(-978957786);
	func_169(945612176);
	func_169(1522511407);
	func_169(704802028);
	func_169(-75024673);
	func_169(1250636944);
	func_169(522677506);
	func_170(1691618738);
	func_170(657241756);
	func_171();
	func_170(1582370975);
	func_170(-330120947);
	return;
}

void func_65(int iParam0) // Position - 0x1C54 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_18 = iParam0;
	return;
}

BOOL func_66(char* sParam0, eStackSize essParam1, int iParam2) // Position - 0x1C60 Hash - 0x4C4C5BDA ^0xC0902569
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
		return false;

	SCRIPTS::REQUEST_SCRIPT(sParam0);

	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
		return false;

	*iParam2 = SCRIPTS::START_NEW_SCRIPT(sParam0, essParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

void func_67() // Position - 0x1C9C Hash - 0x3858E8AD ^0x36BF7A8
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	SCRIPTS::REQUEST_SCRIPT("long_update");
	SCRIPTS::REQUEST_SCRIPT("medium_update");
	SCRIPTS::REQUEST_SCRIPT("short_update");
	SCRIPTS::REQUEST_SCRIPT("flow_controller");
	SCRIPTS::REQUEST_SCRIPT("player_horse");
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = false;
	flag5 = false;
	flag6 = false;

	while (!flag)
	{
		if (!flag2)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("long_update"))
			{
				Global_23[1] = SCRIPTS::START_NEW_SCRIPT("long_update", 1300);
				flag2 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("long_update");
			}
		}
	
		if (!flag3)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("medium_update"))
			{
				Global_23[2] = SCRIPTS::START_NEW_SCRIPT("medium_update", 1300);
				flag3 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("medium_update");
			}
		}
	
		if (!flag4)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("short_update"))
			{
				Global_23[3] = SCRIPTS::START_NEW_SCRIPT("short_update", 1300);
				flag4 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("short_update");
			}
		}
	
		if (!flag5)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("flow_controller"))
			{
				Global_23[4] = SCRIPTS::START_NEW_SCRIPT("flow_controller", 1024);
				flag5 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("flow_controller");
			}
		}
	
		if (!flag6)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("player_horse"))
			{
				Global_23[5] = SCRIPTS::START_NEW_SCRIPT("player_horse", 1024);
				flag6 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("player_horse");
			}
		}
	
		if (Global_1572887.f_12 == -1)
			if (flag2 && flag3 && flag4 && flag5 && flag6)
				flag = true;
		else if (flag2 && flag3 && flag4 && flag5 && flag6)
			flag = true;
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("long_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("medium_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("short_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_horse");
	return;
}

void func_68() // Position - 0x1E40 Hash - 0x1FAB512B ^0x6C4BDE7C
{
	BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	Global_43889 = false;
	return;
}

void func_69(int iParam0) // Position - 0x1E50 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_19 = iParam0;
	return;
}

BOOL func_70(int iParam0) // Position - 0x1E5C Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_172(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_71() // Position - 0x1EBB Hash - 0x4228A1C2 ^0x2858938F
{
	return Global_1425247.f_53;
}

BOOL func_72(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1EC9 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_173())
			return true;
	
		if (Global_1058888.f_3 && !Global_1572887.f_8)
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1898164.f_163;
		else
			return Global_1898164.f_164;
	}

	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		num = func_113(Global_1898164.f_1[0 /*5*/]);
	
		if (func_174(num) && func_117(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_46(Global_1898164.f_1[0 /*5*/]))
		return true;

	if (Global_1935630 && 40959 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1898438)
			return true;

	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
	
		case 1:
			return iParam0 & 1 == 0;
	
		case 2:
			return iParam0 & 16 == 0;
	
		case 3:
			return iParam0 & 128 == 0;
	
		case 4:
			return iParam0 & 2 == 0;
	
		case 5:
			return iParam0 & 32 == 0;
	
		case 6:
			return iParam0 & 4 == 0;
	
		case 8:
			return iParam0 & 8 == 0;
	
		case 9:
			return iParam0 & 64 == 0;
	
		case 10:
			return iParam0 & 512 == 0;
	
		case 11:
			return iParam0 & 256 == 0;
	
		default:
		
	}

	return false;
}

BOOL func_73(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x20CD Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_175(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
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

BOOL func_74() // Position - 0x2202 Hash - 0x7DF1A9A5 ^0x80A37AC6
{
	return func_77(Global_1935630, 4096) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_dump_body")) > 0;
}

void func_75(Hash hParam0, int iParam1) // Position - 0x2226 Hash - 0xA4EAD31F ^0x77D45044
{
	hParam0->f_2 = hParam0->f_2 - hParam0->f_2 && iParam1;
	return;
}

int func_76(int iParam0) // Position - 0x223E Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

BOOL func_77(int iParam0, int iParam1) // Position - 0x2250 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_78(BOOL bParam0) // Position - 0x225F Hash - 0x19D02F67 ^0xF3843EF4
{
	if (!func_19(&Global_0, 2))
	{
		func_176(false, false);
		SAVE::SAVEGAME_SAVE_SP(-189896212);
		func_80(&Global_0, 2);
	
		if (bParam0)
			func_80(&Global_0, 32);
	
		func_75(&Global_0, 1);
	}

	return;
}

void func_79(int iParam0, BOOL bParam1) // Position - 0x22A4 Hash - 0x61702F0 ^0x30E3B701
{
	if (func_27() != -1)
		return;

	if (iParam0 == 0 && func_39(32768))
		return;

	if (!func_39(32768))
		func_176(true, bParam1);

	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::COPY_SCRIPT_STRUCT(&Global_2621440[iParam0 /*12066*/], &Global_40, 12066);
	MISC::COPY_SCRIPT_STRUCT(&Global_2645573[iParam0 /*5398*/], &Global_12106, 5398);
	MISC::COPY_SCRIPT_STRUCT(&Global_2656370[iParam0 /*3206*/], &Global_17504, 3206);
	MISC::COPY_SCRIPT_STRUCT(&Global_2662783[iParam0 /*2408*/], &Global_20710, 2408);
	MISC::COPY_SCRIPT_STRUCT(&Global_2667600[iParam0 /*1769*/], &Global_23118, 1769);
	MISC::COPY_SCRIPT_STRUCT(&Global_2671139[iParam0 /*1909*/], &Global_24887, 1909);
	MISC::COPY_SCRIPT_STRUCT(&Global_2674958[iParam0 /*777*/], &Global_26796, 777);
	MISC::COPY_SCRIPT_STRUCT(&Global_2676513[iParam0 /*4501*/], &Global_27573, 4501);
	MISC::COPY_SCRIPT_STRUCT(&Global_2685516[iParam0 /*4234*/], &Global_32074, 4234);

	if (func_39(32768))
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_177();

	return;
}

void func_80(Hash hParam0, int iParam1) // Position - 0x23AF Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_81(Hash hParam0) // Position - 0x23C2 Hash - 0xBA5A1D5A ^0x5381B889
{
	hParam0->f_2 = 0;
	return;
}

void func_82(BOOL bParam0) // Position - 0x23CF Hash - 0x86716539 ^0x86716539
{
	Global_21 = Global_21 - Global_21 && bParam0;
	return;
}

void func_83(int iParam0) // Position - 0x23E4 Hash - 0xD6372B01 ^0xFAF172B0
{
	if (!func_178(iParam0))
		return;

	if (Global_1914270[iParam0] != 0)
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1914270[iParam0]);
		Global_1914270[iParam0] = 0;
	}

	return;
}

void func_84(BOOL bParam0, BOOL bParam1) // Position - 0x241A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || bParam1;
	return;
}

void func_85(BOOL bParam0, BOOL bParam1) // Position - 0x242B Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && bParam1;
	return;
}

void func_86(int iParam0) // Position - 0x2440 Hash - 0x1569494B ^0xCCC341E5
{
	Hash address;
	int i;

	address = Global_1572887.f_182.f_1;
	i = 0;

	for (i = 0; i <= 15; i = i + 1)
	{
		MISC::IS_BIT_SET(address, i);
	}

	Global_1572887.f_182.f_2 != -1;
	Global_1572887.f_182.f_3 != -1;
	Global_1572887.f_182.f_4 != -1;
	Global_1572887.f_182.f_5 != -1;
	Global_1572887.f_182.f_6 != -1;
	Global_1572887.f_182.f_8 != 0;
	return;
}

void func_87(BOOL bParam0) // Position - 0x24BB Hash - 0x7DE75EEF ^0x43884606
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;

	while (!func_179(true, bParam0))
	{
	}

	func_180();
	Global_1934765 = 0;
	return;
}

BOOL func_88() // Position - 0x24EE Hash - 0x6CEF47F8 ^0xF2B9EBE9
{
	if (func_39(128) && !func_39(4096))
		return true;

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_181(joaat("benchmark"))))
		return true;

	if (func_39(32))
		return false;

	if (Global_40)
		return false;

	return true;
}

Vector3 func_89(var uParam0) // Position - 0x2548 Hash - 0x2F0F4B54 ^0xCA4801EE
{
	var unk;

	if (!func_182(Global_40.f_9.f_7, 0f, 0f, 0f, 1056964608, true))
	{
		*uParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}

	if (func_58())
	{
		if (func_39(2))
		{
			*uParam0 = func_183();
			return func_184();
		}
		else
		{
			return Global_40.f_9.f_7;
		}
	}
	else if (func_39(32))
	{
		*uParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}

	return unk;
}

BOOL func_90(eStackSize essParam0) // Position - 0x25D2 Hash - 0xD816C7A3 ^0xBB7EE918
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			PED::_REMOVE_PED_FROM_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true, false);
			return false;
		}
	}

	STREAMING::REQUEST_MODEL(essParam0, false);

	if (!STREAMING::HAS_MODEL_LOADED(essParam0))
		return false;

	PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), essParam0, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(essParam0);
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_185(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), essParam0);
	func_186(essParam0, -1);
	Global_40.f_39 = essParam0;
	Global_1935630.f_2 = essParam0;
	func_187(2, 0, 2, 0, false);
	return true;
}

void func_91() // Position - 0x266A Hash - 0xE6319207 ^0xC37C99D3
{
	eStackSize stackSize;
	int i;
	int num;

	stackSize.f_1 = -15;

	for (i = 0; i < 15; i = i + 1)
	{
		stackSize = { Global_40.f_4237[i /*3*/] };
	
		if (func_188(stackSize))
		{
			num = stackSize.f_1;
		
			if (num != -15 && func_189(num))
			{
				func_190(stackSize);
			}
			else if (stackSize.f_2)
			{
			}
			else if (func_191(stackSize))
			{
			}
		}
	}

	return;
}

BOOL func_92() // Position - 0x26E2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_443;
}

BOOL func_93() // Position - 0x26F1 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_27() != -1)
		return false;

	if (!func_58())
		return false;

	if (!func_172(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[2 /*74*/].f_1, true) && func_172(Global_1347702[120 /*49*/].f_15, true) && !func_172(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[37 /*74*/].f_1, true) && !func_172(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[57 /*74*/].f_1, true) && !func_172(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[26 /*74*/].f_1, true) && !func_172(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_172(Global_1835011[62 /*74*/].f_1, true) && func_172(Global_1835011[63 /*74*/].f_1, true) && !func_172(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[75 /*74*/].f_1, true) && !func_172(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_172(Global_1835011[76 /*74*/].f_1, true) && !func_172(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[40 /*74*/].f_1, true) && func_172(Global_1835011[41 /*74*/].f_1, true) && !func_172(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[62 /*74*/].f_1, true) && func_172(Global_1835011[63 /*74*/].f_1, true) && !func_172(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_172(Global_1835011[65 /*74*/].f_1, true) && func_172(Global_1835011[66 /*74*/].f_1, true) && !func_172(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

void func_94() // Position - 0x2937 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1900383.f_443 = 1;
	return;
}

void func_95() // Position - 0x2947 Hash - 0x3927EA2F ^0xB33D7AF0
{
	BOOL flag;
	int num;

	if (func_149())
		return;

	func_192(8);
	func_193(Global_1897952.f_35);
	func_194(Global_1897952.f_35);
	Global_1897952.f_35 = Global_1897952.f_35 + 1;

	if (Global_1897952.f_35 >= 17)
	{
		Global_1897952.f_35 = 0;
		flag = true;
	}

	if (Global_1897952.f_36 != -1)
	{
		if (Global_1897952.f_36 != func_195())
			func_196(Global_1897952.f_36);
	
		return;
	}

	if (flag)
	{
		num = func_197(Global_36);
	
		if (num < 0 || num >= 17)
			return;
	
		if (func_195() != num)
		{
			Global_1897952.f_37 = 1;
		
			if (func_196(num))
				return;
		}
	
		if (!Global_1897952.f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false) && func_195() != -1)
			func_196(func_195());
	
		Global_1897952.f_37 = 0;
	}

	return;
}

void func_96() // Position - 0x2A32 Hash - 0x6E512C4F ^0x6E512C4F
{
	if (func_27() == -1)
		if (func_198())
			func_199();

	if (Global_1894899 & 64 != 0)
	{
		func_200();
		func_201(false);
	}

	func_202();
	func_203();
	func_204();
	return;
}

BOOL func_97(BOOL bParam0) // Position - 0x2A6E Hash - 0x6B410496 ^0x6B410496
{
	if (!Global_40)
		return false;

	if (!func_58())
		return false;

	if (func_205())
		return false;

	if (func_39(2))
		return false;

	if (bParam0)
		return false;

	if (!func_206())
		return false;

	if (func_93())
		return false;

	if (UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
		return false;

	if (Global_1572864.f_21 != 0)
		return false;

	if (Global_40.f_9 == 6 || Global_40.f_9 == 3)
		return false;

	return true;
}

eStackSize func_98() // Position - 0x2AFA Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

void func_99(eStackSize essParam0, var uParam1, var uParam2) // Position - 0x2B0A Hash - 0xBEA25104 ^0x51E5A6BA
{
	var volumeRotation;

	if (!func_207(essParam0))
	{
		*uParam1 = { Global_36 };
	
		if (!Global_1935630.f_12)
			*uParam2 = ENTITY::GET_ENTITY_HEADING(Global_35);
	
		return;
	}

	switch (essParam0)
	{
		case 1:
			*uParam1 = { 1888f, -745.2f, 41.8f };
			*uParam2 = 155.9022f;
			return;
	
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f };
			*uParam2 = 127.4476f;
			return;
	
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f };
			*uParam2 = 121f;
			return;
	
		case 5:
			*uParam1 = { 2557.4084f, -1202.2991f, 53.0907f };
			*uParam2 = 261.1247f;
			return;
	
		case 6:
			*uParam1 = { 2048.8254f, -852.7946f, 41.6127f };
			*uParam2 = 89.9021f;
			return;
	
		case 8:
			*uParam1 = { 3289.2f, -1275.7946f, 44.6127f };
			*uParam2 = 163f;
			return;
	
		case 9:
			*uParam1 = { 1825.3568f, -1813.9886f, 47.0702f };
			*uParam2 = 218.5782f;
			return;
	
		case 16:
			*uParam1 = { -2145.3403f, 599.7288f, 117.0818f };
			*uParam2 = 24.052f;
			return;
	
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f };
			*uParam2 = 0f;
			return;
	
		case 19:
			*uParam1 = { -1515.8094f, -477.6617f, 142.8707f };
			*uParam2 = 108.7463f;
			return;
	
		case 22:
			*uParam1 = { -2557.0813f, 491.937f, 142.7487f };
			*uParam2 = 177.5235f;
			return;
	
		case 23:
			*uParam1 = { -1066.0923f, -584.9856f, 80.8338f };
			*uParam2 = 170.7164f;
			return;
	
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f };
			*uParam2 = 30.7991f;
			return;
	
		case 25:
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f };
			*uParam2 = 304.563f;
			return;
	
		case 26:
			*uParam1 = { -1780.3309f, -426.5923f, 154.897f };
			*uParam2 = 74.77f;
			return;
	
		case 27:
			*uParam1 = { -1929.7726f, 291.1429f, 166.0626f };
			*uParam2 = 1.2131f;
			return;
	
		case 28:
			*uParam1 = { -1304.6239f, 406.447f, 95.5907f };
			*uParam2 = 255.3416f;
			return;
	
		case 29:
			*uParam1 = { -1792.3087f, 628.2485f, 128.1326f };
			*uParam2 = 39.9216f;
			return;
	
		case 30:
			*uParam1 = { 2488.3787f, -438.0566f, 40.7284f };
			*uParam2 = 3.9426f;
			return;
	
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f };
			*uParam2 = 26.5179f;
			return;
	
		case 32:
			*uParam1 = { 3343.8708f, -629.7566f, 43.894f };
			*uParam2 = 197.4755f;
			return;
	
		case 33:
			*uParam1 = { 584.8f, 1683f, 187.7f };
			*uParam2 = 26.5179f;
			return;
	
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f };
			*uParam2 = 218.9453f;
			return;
	
		case 35:
			*uParam1 = { 353.8f, 1473f, 179.7f };
			*uParam2 = 46.6903f;
			return;
	
		case 36:
			*uParam1 = { -32.4394f, 1129.3264f, 167.0201f };
			*uParam2 = 353f;
			return;
	
		case 37:
			*uParam1 = { -1692.4559f, -1425.2778f, 88.5471f };
			*uParam2 = 44.6246f;
			return;
	
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f };
			*uParam2 = 174.6141f;
			return;
	
		case 39:
			*uParam1 = { -1212.8971f, -1940.4059f, 41.5543f };
			*uParam2 = 271.54f;
			return;
	
		case 40:
			*uParam1 = { -600.8126f, 2679.0793f, 323.538f };
			*uParam2 = 279.6308f;
			return;
	
		case 42:
			*uParam1 = { -404.0206f, 1711.7305f, 214.8277f };
			*uParam2 = 24.0467f;
			return;
	
		case 43:
			*uParam1 = { -1320.6501f, 2424.0044f, 307.8811f };
			*uParam2 = 69.8643f;
			return;
	
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f };
			*uParam2 = 24.5906f;
			return;
	
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f };
			*uParam2 = 0f;
			return;
	
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f };
			*uParam2 = 249.96f;
			return;
	
		case 49:
			*uParam1 = { -1838.6052f, 1312.883f, 220.5665f };
			*uParam2 = 54.1507f;
			return;
	
		case 50:
			*uParam1 = { 688.6671f, 2229.2666f, 221.7181f };
			*uParam2 = 28.1904f;
			return;
	
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171f };
			*uParam2 = 0f;
			return;
	
		case 52:
			*uParam1 = { 537.9389f, 3004.2402f, 485.7947f };
			*uParam2 = 91.2925f;
			return;
	
		case 53:
			*uParam1 = { 1599.1686f, 2198.7607f, 321.9284f };
			*uParam2 = 117.4739f;
			return;
	
		case 54:
			*uParam1 = { 1942.625f, 1965.8629f, 261.5498f };
			*uParam2 = 151.5668f;
			return;
	
		case 55:
			*uParam1 = { 1691.5f, 1508f, 146.6f };
			*uParam2 = 297.128f;
			return;
	
		case 56:
			*uParam1 = { 486f, 2215.8f, 246.9f };
			*uParam2 = 84.159f;
			return;
	
		case 57:
			*uParam1 = { 1471f, -7120f, 77f };
			*uParam2 = 331.1575f;
			return;
	
		case 58:
			*uParam1 = { 1418.8966f, -7329.16f, 80.562f };
			*uParam2 = 26.5179f;
			return;
	
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f };
			*uParam2 = 346.4123f;
			return;
	
		case 60:
			*uParam1 = { 1178.9946f, -7233.5435f, 78.9764f };
			*uParam2 = 153.8034f;
			return;
	
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f };
			*uParam2 = 236.3249f;
			return;
	
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f };
			*uParam2 = 71.0275f;
			return;
	
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f };
			*uParam2 = 144.2493f;
			return;
	
		case 66:
			*uParam1 = { 1122f, 482.2f, 94.7f };
			*uParam2 = 42.3615f;
			return;
	
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f };
			*uParam2 = 28.5394f;
			return;
	
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f };
			*uParam2 = 280.9084f;
			return;
	
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f };
			*uParam2 = 316.8146f;
			return;
	
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f };
			*uParam2 = 91.0078f;
			return;
	
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f };
			*uParam2 = 0f;
			return;
	
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f };
			*uParam2 = 41.9282f;
			return;
	
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f };
			*uParam2 = 79.6536f;
			return;
	
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f };
			*uParam2 = 239.3198f;
			return;
	
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f };
			*uParam2 = 88.1256f;
			return;
	
		case 77:
			*uParam1 = { 1797.4514f, -96.17f, 55.2f };
			*uParam2 = 64.7894f;
			return;
	
		case 78:
			*uParam1 = { 2928.3271f, 1356.631f, 43.5035f };
			*uParam2 = 261.1208f;
			return;
	
		case 79:
			*uParam1 = { 2376.4565f, 1287.4506f, 110.0213f };
			*uParam2 = 14.4916f;
			return;
	
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f };
			*uParam2 = 135.3297f;
			return;
	
		case 81:
			*uParam1 = { 2641.5247f, 2223.5217f, 158.1051f };
			*uParam2 = 312.4187f;
			return;
	
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f };
			*uParam2 = 291.2065f;
			return;
	
		case 83:
			*uParam1 = { 2520.1802f, 2266.4636f, 177.2689f };
			*uParam2 = 170f;
			return;
	
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f };
			*uParam2 = 34.0605f;
			return;
	
		case 86:
			*uParam1 = { 2244.9844f, -140.6945f, 46.6572f };
			*uParam2 = 110.0301f;
			return;
	
		case 87:
			*uParam1 = { 2313.3494f, 353.842f, 65.0149f };
			*uParam2 = 0f;
			return;
	
		case 89:
			*uParam1 = { 2962.0627f, 2204.987f, 165.3194f };
			*uParam2 = 230.7887f;
			return;
	
		case 91:
			*uParam1 = { 2819.1704f, 301.7715f, 48.8212f };
			*uParam2 = 191.6095f;
			return;
	
		case 92:
			*uParam1 = { 2983.2021f, 441.7647f, 51.6148f };
			*uParam2 = 27.5833f;
			return;
	
		case 93:
			*uParam1 = { 1015.8043f, -1316.6833f, 55.1469f };
			*uParam2 = 181.2442f;
			return;
	
		case 94:
			*uParam1 = { 1455.848f, -1812.2115f, 54.8037f };
			*uParam2 = 304.2492f;
			return;
	
		case 95:
			*uParam1 = { 1698.547f, -1393.7356f, 44.893f };
			*uParam2 = 289.3106f;
			return;
	
		case 96:
			*uParam1 = { 1350.7131f, -2253.6106f, 50.6595f };
			*uParam2 = 132.3174f;
			return;
	
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f };
			*uParam2 = 0f;
			return;
	
		case 98:
			*uParam1 = { 689.6768f, -1222.0488f, 43.7435f };
			*uParam2 = 167.6425f;
			return;
	
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f };
			*uParam2 = 241.3119f;
			return;
	
		case 100:
			*uParam1 = { 1371.8047f, -858.002f, 68.513f };
			*uParam2 = 35.9944f;
			return;
	
		case 101:
			*uParam1 = { 1185.0414f, -212.0238f, 101.1f };
			*uParam2 = 114.1645f;
			return;
	
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f };
			*uParam2 = 0f;
			return;
	
		case 105:
			*uParam1 = { 1274.7993f, -1279.9814f, 74.8681f };
			*uParam2 = 245.3242f;
			return;
	
		case 106:
			*uParam1 = { 1379.3823f, -2087.341f, 51.5847f };
			*uParam2 = 255.7824f;
			return;
	
		case 107:
			*uParam1 = { -2574.1736f, -1366.5988f, 149.3313f };
			*uParam2 = 175.5364f;
			return;
	
		case 109:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f };
				*uParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.2412f, -939.9655f, 160.1905f };
				*uParam2 = 157.281f;
			}
		
			return;
	
		case 110:
			*uParam1 = { -1966.6449f, -1574.2286f, 115.4183f };
			*uParam2 = 177.3636f;
			return;
	
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f };
			*uParam2 = 0f;
			return;
	
		case 112:
			*uParam1 = { -2371.4436f, -1604.0308f, 152.6511f };
			*uParam2 = 10.8752f;
			return;
	
		case 114:
			*uParam1 = { -6028.044f, -3379.0576f, -14.9946f };
			*uParam2 = 5.5075f;
			return;
	
		case 115:
			*uParam1 = { -5607f, -3059.301f, 1.8f };
			*uParam2 = -44.3f;
			return;
	
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f };
			*uParam2 = 286.744f;
			return;
	
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f };
			*uParam2 = 90f;
			return;
	
		case 118:
			*uParam1 = { -4107.5933f, -3315.4978f, 36.3123f };
			*uParam2 = 148.2941f;
			return;
	
		case 119:
			*uParam1 = { -4690.065f, -3731.7903f, 11.9774f };
			*uParam2 = 197.302f;
			return;
	
		case 120:
			*uParam1 = { -3716.4468f, -2622.405f, -14.9813f };
			*uParam2 = 312.5245f;
			return;
	
		case 122:
			*uParam1 = { -3404.3289f, -3293.1035f, -6.8233f };
			*uParam2 = 227.0484f;
			return;
	
		case 125:
			*uParam1 = { -3970.9602f, -2227.6287f, -7.9601f };
			*uParam2 = 4.8f;
			return;
	
		case 126:
			*uParam1 = { -2534.852f, -2474.8682f, 62.043f };
			*uParam2 = 300.0005f;
			return;
	
		case 127:
			*uParam1 = { -1484.4482f, -2344.0493f, 42.0182f };
			*uParam2 = 295.5278f;
			return;
	
		case 129:
			*uParam1 = { -5300.9585f, -3608.817f, -14.6678f };
			*uParam2 = 71.7035f;
			return;
	
		default:
		
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_3))
	{
		*uParam1 = { VOLUME::GET_VOLUME_COORDS(Global_1888801[essParam0 /*35*/].f_3) };
		volumeRotation = { VOLUME::GET_VOLUME_ROTATION(Global_1888801[essParam0 /*35*/].f_3) };
		*uParam2 = volumeRotation.f_2;
	}

	return;
}

BOOL func_100(eStackSize essParam0) // Position - 0x39B9 Hash - 0x43586F7F ^0x43586F7F
{
	if (func_205())
		return true;

	if (!func_207(essParam0))
		return true;

	if (func_208(essParam0) == 4)
		if (essParam0 != func_98())
			return true;
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[essParam0 /*35*/].f_23)))
		return true;

	if (func_209(essParam0))
	{
		return true;
	}
	else
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_3))
			VOLUME::IS_POINT_IN_VOLUME(Global_1888801[essParam0 /*35*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false));
	
		func_210(essParam0, 2);
		func_210(essParam0, true);
		SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[essParam0 /*35*/].f_9, false);
	}

	return false;
}

void func_101(BOOL bParam0, eStackSize essParam1) // Position - 0x3A6C Hash - 0x75C86DB1 ^0x57BA8A76
{
	var unk;
	var unk2;
	var unk3;
	int num;
	struct<69> args;
	int num2;
	var unk83;
	var unk99;

	if (func_93())
		return;

	if (bParam0 || Global_40.f_9 == 3)
	{
		if (Global_40.f_9 == 1 || Global_40.f_9 == 2 || Global_40.f_9 == 0)
		{
			unk3 = { func_212(func_211(essParam1), &unk, &unk2) };
		
			if (!_IS_NULL_VECTOR(unk3))
			{
				func_214(unk3);
				Global_40.f_9.f_15 = essParam1;
				func_215(unk3, unk2, unk, 0);
				func_216();
				func_217(6);
				func_35(4096);
				func_43(16384);
				func_82(8192);
				func_218(&Global_1935630, 131072);
			}
			else
			{
				num = func_219(essParam1);
			
				if (func_220(num))
				{
					if (VOLUME::DOES_VOLUME_EXIST(Global_1395601.f_5[num /*28*/].f_23))
					{
						func_82(8192);
						func_43(131072);
					
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1395601.f_5[num /*28*/].f_24, false))
						{
							func_221(num, 524288);
							SCRIPTS::REQUEST_SCRIPT("property_use_core");
						
							while (!SCRIPTS::HAS_SCRIPT_LOADED("property_use_core"))
							{
								BUILTIN::WAIT(0);
							}
						
							func_218(&Global_1935630, 16384);
							args.f_5 = 8;
							args.f_14 = -1;
							args.f_22 = -1082130432;
							args.f_23 = -1;
							args.f_34 = 6;
							args.f_54.f_4 = 1;
							args.f_54.f_5 = 1;
							args.f_2 = Global_1395601.f_5[num /*28*/].f_23;
							args.f_15 = 1;
							Global_1395601.f_5[num /*28*/].f_24 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("property_use_core", &args, 69, 6096);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("property_use_core");
							func_218(&Global_1935630, 131072);
						}
					}
				}
			}
		}
		else if (Global_40.f_9 == 3)
		{
			func_82(8192);
		
			if (!func_222("player_camp"))
			{
				num2 = 536871424;
				unk83 = { num2 };
				TEXT_LABEL_ASSIGN_STRING(&(unk83.f_10), "player_camp", 32);
				unk83.f_14 = 6096;
				unk83.f_15 = 1;
				func_223(unk83, 0);
				func_218(&Global_1935630, 131072);
			}
		}
		else if (Global_40.f_9 == 4)
		{
			if (func_197(Global_40.f_9.f_7) != 8)
			{
				func_82(8192);
			
				if (!func_222("ambient_load"))
				{
					TEXT_LABEL_ASSIGN_STRING(&(unk99.f_10), "ambient_load", 32);
					unk99.f_14 = 1024;
					unk99.f_15 = 0;
					func_223(unk99, 0);
					func_218(&Global_1935630, 131072);
				}
			}
			else
			{
				func_35(4096);
			}
		}
	
		if (func_72(0, false, true))
		{
			func_82(8192);
			MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
	}
	else
	{
		func_35(4096);
	
		if (Global_40)
			func_218(&Global_1935630, 131072);
	}

	if (func_77(Global_1935630, 131072))
		func_118(Global_40.f_9.f_14);

	if (Global_40 && func_58() && func_206() || func_39(4096) && !func_41(16384) && !func_41(32768) && !func_41(131072) && Global_40.f_9 != 3)
	{
		func_224(1);
		func_216();
		func_217(6);
		func_35(4096);
	}

	return;
}

eStackSize func_102(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x3D94 Hash - 0x25DFFF2C ^0x74CE6365
{
	eStackSize stackSize;

	stackSize = func_225();

	if (func_207(stackSize))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[stackSize /*35*/].f_3, vParam0))
			return stackSize;

	return func_226(vParam0, bParam3);
}

void func_103() // Position - 0x3DCF Hash - 0x9FA960B4 ^0x5044DD19
{
	int i;

	if (Global_1934603.f_161 > 0)
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
				func_227(i);
		}
	}

	return;
}

BOOL func_104(int iParam0) // Position - 0x3E0C Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

void func_105(int iParam0) // Position - 0x3E21 Hash - 0xE1F6E7F0 ^0xF6BF71B1
{
	eStackSize i;
	int j;

	VOLUME::_0x748C5F51A18CB8F0(false);

	if (!func_104(iParam0))
		return;

	func_228(iParam0, false);

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_207(i))
		{
			if (func_230(func_229(i, true, true)) == iParam0)
			{
				func_231(i, false);
				func_232(i, false, 350);
			}
		}
	}

	for (j = 0; j < 17; j = j + 1)
	{
		if (func_233(j))
			if (func_234(j) == iParam0)
				func_235(j, false);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

void func_106() // Position - 0x3EB3 Hash - 0xC6ECC7CD ^0xEE133C4
{
	int i;
	Hash iplHash;
	int j;
	Hash iplHash2;
	Hash iplHash3;
	int k;
	int num;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_236(i))
		{
			iplHash = func_237(i);
		
			if (func_238(iplHash))
				if (STREAMING::IS_IPL_ACTIVE_HASH(iplHash))
					STREAMING::REMOVE_IPL_HASH(iplHash);
		
			for (j = 0; j <= 2; j = j + 1)
			{
				if (func_239(i, j))
				{
					iplHash = func_240(i, j);
					func_241(iplHash, false);
				
					if (func_238(iplHash))
						if (STREAMING::IS_IPL_ACTIVE_HASH(iplHash))
							STREAMING::REMOVE_IPL_HASH(iplHash);
				}
			}
		
			for (k = 0; k < 27; k = k + 1)
			{
				iplHash2 = func_242(i, k, false);
				iplHash3 = func_242(i, k, true);
			
				if (func_238(iplHash2))
					if (STREAMING::IS_IPL_ACTIVE_HASH(iplHash2))
						STREAMING::REMOVE_IPL_HASH(iplHash2);
			
				if (func_238(iplHash3))
					if (STREAMING::IS_IPL_ACTIVE_HASH(iplHash3))
						STREAMING::REMOVE_IPL_HASH(iplHash3);
			}
		}
	
		num = -1;
		func_243(-1, false, false);
		func_244(-1, &num, false, false, false);
	}

	return;
}

void func_107() // Position - 0x3FAA Hash - 0x868E69F0 ^0xB0DA2BB
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
		if (func_236(i))
		{
			for (j = 0; j <= 2; j = j + 1)
			{
				if (func_239(i, j))
				{
					name = { func_245(i, j) };
				
					if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(&name))
						PATHFIND::_NAVMESH_DEACTIVATE_SWAP(&name);
				}
			}
		}
	}

	return;
}

void func_108() // Position - 0x402E Hash - 0x436FF24F ^0x5E728080
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
			STREAMING::REMOVE_IPL_HASH(unk[i]);
	}

	return;
}

void func_109() // Position - 0x4082 Hash - 0x51500BAF ^0x51500BAF
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_247(i, func_246(i), false, false);
	}

	return;
}

void func_110(Ped pedParam0) // Position - 0x40AB Hash - 0xC848742E ^0xD171C7FA
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	PED::CLEAR_PED_BLOOD_DAMAGE(pedParam0);

	for (i = 0; i < 10; i = i + 1)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(pedParam0, i);
	}

	return;
}

int func_111(int iParam0) // Position - 0x40E1 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_46(iParam0))
		return 0;

	return func_249(func_248(iParam0));
}

int func_112(int iParam0) // Position - 0x4101 Hash - 0xDEBCA2F ^0xDEBCA2F
{
	if (func_111(iParam0) == 1)
		return func_113(iParam0);

	return -1;
}

int func_113(int iParam0) // Position - 0x411D Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_46(iParam0))
		return -1;

	return func_250(func_248(iParam0));
}

int func_114(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x413D Hash - 0x71EF3E96 ^0x557A7961
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int num5;

	num3 = iParam0;
	num4 = iParam1;

	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 100;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
		
			case 2:
				num = 101;
				num2 = 170;
				break;
		
			case 3:
				num = 171;
				num2 = 190;
				break;
		
			case 4:
				num = 191;
				num2 = 230;
				break;
		
			case 5:
				num = 231;
				num2 = 260;
				break;
		
			case 6:
				num = 261;
				num2 = 290;
				break;
		
			case 7:
				num = 291;
				num2 = 370;
				break;
		
			case 8:
				num = 371;
				num2 = 570;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
		
			case 9:
				num = 571;
				num2 = 650;
				break;
		
			case 10:
				return -1;
		
			case 11:
				num = 651;
				num2 = 750;
				break;
		
			case 12:
				return -1;
		
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 200;
				break;
		
			case 2:
				num = 201;
				num2 = 15700;
				break;
		
			case 4:
				num = 15701;
				num2 = 16200;
				break;
		
			case 6:
				return -1;
		
			case 7:
				return -1;
		
			case 8:
				return -1;
		
			case 10:
				num = 19201;
				num2 = 20000;
				break;
		
			case 12:
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_251())
		num2 = func_251();

	flag = func_252(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_248(num5) == flag)
				return num5;
		
			if (func_248(num5) == false)
				return func_253(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_248(num5) == flag)
				return num5;
		
			if (func_248(num5) == false)
				return func_253(num3, num4, iParam2, i, hParam3);
		}
	}
	else
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == flag)
				return i;
		}
	
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == false)
				return func_253(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

int func_115() // Position - 0x43F8 Hash - 0x469165C8 ^0x86AE7E88
{
	Hash missionHash;
	int numGoals;
	int numGoalsComplete;
	int num;

	missionHash = func_254(Global_1879514.f_1);

	if (Global_1425247.f_53)
		return 0;

	if (func_255(missionHash))
	{
		if (Global_1879514.f_18)
			return Global_1879514.f_19;
	
		numGoals = STATS::CHAL_MISSION_GET_NUM_GOALS(missionHash);
		numGoalsComplete = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(missionHash);
	
		if (numGoals > 0)
		{
			num = (100 * numGoalsComplete) / numGoals;
		
			if (num >= 100)
				return 5;
			else if (num >= 50)
				return 4;
			else
				return 3;
		}
	}

	return 3;
}

int func_116(int iParam0, int iParam1) // Position - 0x4475 Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_256(iParam0))
		return 0;

	if (!func_58())
		return 0;

	if (!func_257(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_117(int iParam0, int iParam1) // Position - 0x44D0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_118(eStackSize essParam0) // Position - 0x44DF Hash - 0xF9DBC74E ^0x81BAB792
{
	CLOCK::SET_CLOCK_TIME(func_258(essParam0), func_259(essParam0), func_260(essParam0));
	CLOCK::SET_CLOCK_DATE(func_261(essParam0), func_262(essParam0), func_263(essParam0));
	return;
}

void func_119() // Position - 0x4513 Hash - 0x38830CE0 ^0x91F48FD0
{
	MISC::COPY_SCRIPT_STRUCT(&Global_40, &Global_2693985, 12066);
	return;
}

void func_120() // Position - 0x4529 Hash - 0x30DD64C0 ^0xE720F4D5
{
	int i;

	for (i = 0; i < 771; i = i + 1)
	{
		Global_12106[i /*7*/].f_2 = 0;
		Global_12106[i /*7*/].f_3 = 0;
		Global_12106[i /*7*/].f_4 = 0;
		Global_12106[i /*7*/].f_6 = -15;
	}

	return;
}

void func_121() // Position - 0x456F Hash - 0x38830CE0 ^0x3A767B04
{
	MISC::COPY_SCRIPT_STRUCT(&Global_17504, &Global_2711449, 3206);
	return;
}

void func_122() // Position - 0x4585 Hash - 0x38830CE0 ^0x5F9C6586
{
	MISC::COPY_SCRIPT_STRUCT(&Global_20710, &Global_2714655, 2408);
	return;
}

void func_123() // Position - 0x459B Hash - 0x38830CE0 ^0x39B47D3B
{
	MISC::COPY_SCRIPT_STRUCT(&Global_23118, &Global_2717063, 1769);
	return;
}

void func_124() // Position - 0x45B1 Hash - 0x38830CE0 ^0x8B2429D3
{
	MISC::COPY_SCRIPT_STRUCT(&Global_24887, &Global_2718832, 1909);
	return;
}

void func_125() // Position - 0x45C7 Hash - 0x38830CE0 ^0x42F27D96
{
	MISC::COPY_SCRIPT_STRUCT(&Global_26796, &Global_2720741, 777);
	return;
}

void func_126() // Position - 0x45DD Hash - 0x38830CE0 ^0x5DC7F2D
{
	MISC::COPY_SCRIPT_STRUCT(&Global_27573, &Global_2721518, 4501);
	return;
}

void func_127() // Position - 0x45F3 Hash - 0x38830CE0 ^0xAD92228
{
	MISC::COPY_SCRIPT_STRUCT(&Global_32074, &Global_2726019, 4234);
	return;
}

void func_128(BOOL bParam0) // Position - 0x4609 Hash - 0x400572BD ^0xCA12DF5
{
	if (func_27() == -1)
	{
		if (!Global_40)
			return;
	
		if (!func_58())
			return;
	}
	else if (func_27() == false)
	{
		return;
	}

	MISC::COPY_SCRIPT_STRUCT(&(Global_1879534.f_7301), bParam0, 243);
	return;
}

void func_129() // Position - 0x464B Hash - 0xCF7C2E4F ^0x625993EF
{
	Any any;

	if (!func_264(3, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -2017996124, "cashtags/cashtag(name=%x):value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1732391141, "cashtags/modifierTags/modifierTag(name=%x):value");
	return;
}

void func_130(int iParam0, int iParam1, function funcParam2) // Position - 0x4680 Hash - 0x7161B4AE ^0xD71B98E7
{
	if (!func_178(iParam0))
		return;

	Global_1914270[iParam0] = DATAFILE::_0xCA56DD6AB7A39F64(iParam1);

	if (Global_1914270[iParam0] == 0)
		return;

	funcParam2();
	return;
}

void func_131() // Position - 0x46B5 Hash - 0x345A3156 ^0x8C769474
{
	Any any;

	if (!func_264(5, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 192444604, "postOffice/trackedParcels/parcel(name=%x)/parcelItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 833374898, "postOffice/trackedParcels/parcel(name=%x)/parcelItem(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1392893044, ":itemID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1214284824, ":itemCnt");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -122991295, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1902296053, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 396654621, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1450050975, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 724542304, "postOffice/trackedParcels/parcel(name=%x)/flags:isCardSet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1842227093, "postOffice/trackedParcels/parcel(name=%x)/flags:isLegendaryFish");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1203822305, "postOffice/trackedParcels/parcel(name=%x)/collectibleID:collectibleID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 51132409, "postOffice/trackedParcels/parcel(name=%x)/bit0:CardSet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1601599279, "postOffice/trackedParcels/parcel(name=%x)/parcelDesc:desc");
	return;
}

void func_132() // Position - 0x479B Hash - 0x5329E714 ^0x1E5DA137
{
	Any any;

	if (!func_264(6, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 465794448, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(465794448));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -815325344, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-815325344));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -764679122, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-764679122));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1893576372, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-1893576372));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 549615901, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(549615901));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 656138654, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(656138654));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1661050588, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-1661050588));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -860974647, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-860974647));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 53142323, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(53142323));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1970263451, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-1970263451));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -101978662, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-101978662));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 521381610, "region(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2073822671, ":shop");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 701084451, "shelfObj");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -412700030, "shelfObj(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2042406626, "shelfObj(inventoryItem=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -2123036120, ":entitySet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1712903544, ":cabinetSet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1792709277, ":worldIPL");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 932018906, ":inventoryItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1247398698, ":inventoryItemOverride");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2067444527, ":OpenOnly");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2125553816, ":EnforcePickup");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1037227702, ":TargetPosition");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -788806526, "dressingObj");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 791653025, "dressingObj(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1218877676, "dressingObj(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -205647334, ":inventoryItemUnlock");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1986163665, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1986163665));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1976824961, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1976824961));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -199231160, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-199231160));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -908395502, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-908395502));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 421691991, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(421691991));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1400723349, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-1400723349));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -562246383, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(-562246383));
	return;
}

void func_133() // Position - 0x4A3B Hash - 0x89D342F1 ^0x4E82608F
{
	Any any;

	if (!func_264(7, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1655936658, "campingLocationLists/campingLocationList(district=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1058386141, "campingLocation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -738381918, "campingLocation(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 170329912, ":type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1808799200, ":name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 519988399, "campPos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -518277907, ":x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1363423190, ":y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 861329762, ":z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1425398587, ":heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1381741405, "campingReqs");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1310625191, ":reqCampMap");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1212650007, "camData");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1692540711, ":camDict");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 506092813, ":shotName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1800728046, ":camName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 353205560, ":camHeading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -175720391, "todData");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1980941829, ":time");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1359035379, ":weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1067565689, ":horsePos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -596203594, ":horseHeading");
	return;
}

void func_134() // Position - 0x4BB1 Hash - 0xB332FB98 ^0x78E305A2
{
	Any any;

	if (!func_264(9, &Global_1415419))
		return;

	any = Global_1415419;
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 217083545, "ambientVignettes/authoredLocations");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1275853848, "ambientVignette(%i)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -596571389, "ambientVignette(id=%x)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 165653806, "ambientVignettes/authoredLocations/ambientVignette(id=%x)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -713081767, ":id");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -971201246, "ambientVignettes/authoredLocations/ambientVignette(id=%x)/district(id=%x)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2135093769, "ambientVignettes/authoredLocations/ambientVignette(%i)/district(id=%x)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -641542860, "district(id=%x)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 121239534, "district(%i)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1696282352, "authoredLocation(%i)");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1983241935, ":rotation");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1119853910, ":position");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -143463129, ":variation");
	!DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1341709093, ":seenDelayHours");
	return;
}

void func_135() // Position - 0x4CDA Hash - 0xFA349851 ^0x78CCD529
{
	Any any;

	if (!func_264(10, &(Global_1415419.f_1)))
		return;

	any = Global_1415419.f_1;
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 0, "ambientVignettes/ambientVignette(id=%x)/tunings(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1, ":triggerDist");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2, ":triggerTime");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 3, ":triggerClose");
	return;
}

void func_136() // Position - 0x4D2D Hash - 0x7CC3287B ^0x454306C5
{
	if (!func_264(11, &(Global_1327590.f_19720)))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 1604180342, "vignetteData/vignettes/vignette(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -657975000, ":scriptFile");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 1085469397, ":TODStart");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1535977529, ":TODEnd");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1060281697, ":size");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1800491381, ":weight");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 35230954, "tag:name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1556005224, "companion(%i):hash");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 1185638752, "required_listeners:num");
	return;
}

void func_137() // Position - 0x4E06 Hash - 0x56C0EE2 ^0x7291E1B
{
	Any any;

	if (!func_264(13, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 0, "itemset/item(id=%x)/components/component:category");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1, "itemset/item(id=%x)/components/component:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2, "itemset/item(id=%x)/components/component/texture(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 3, "itemset/item(id=%x)/components/component/palette:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 4, "itemset/item(id=%x)/components/component/tint1:val");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 5, "itemset/item(id=%x)/components/component/tint2:val");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 6, "itemset/item(id=%x)/components/component/tint3:val");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1170159957, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(1170159957));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -956415585, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-956415585));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1063445323, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(1063445323));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1574188157, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-1574188157));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1752779714, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-1752779714));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1004470061, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(1004470061));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1218801571, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-1218801571));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1580989022, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-1580989022));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -641661298, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-641661298));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1179965762, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-1179965762));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -2059916790, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-2059916790));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1574347650, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-1574347650));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 503961584, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(503961584));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -612355112, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-612355112));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 71109396, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(71109396));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1918885948, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(-1918885948));
	return;
}

void func_138() // Position - 0x4FC1 Hash - 0x966EE764 ^0x63B03300
{
	Any any;

	if (!func_264(12, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -608279732, "train_routes/junctions/track(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -870751591, "Item(%i)/junction:position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -853103500, "Item(%i)/junction:name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1956866776, "train_routes/train(name=%x)/junction(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1817584937, ":switch");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1830263756, "train_routes/train_stations/train(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 530786772, "Item(%i)/station:track");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1642930494, "Item(%i)/station:position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -959168135, "Item(%i)/station:direction");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1804008182, "Item(%i)/station:isStation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1008236233, "train_routes/train_stations/train(name=%x)/Item(%i)/times");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1882285204, "time(%i)/departure:hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 674301239, "time(%i)/departure:minute");
	return;
}

void func_139() // Position - 0x50A8 Hash - 0x9DFB0E0D ^0x5A44F0F4
{
	Any any;

	if (!func_264(15, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 723128514, "respawnLocationData/locationList");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 185256713, "respawnLocationData/locationList/Item(%i)/name:locationName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1748960728, "respawnLocationData/locationList/Item(%i)/name:establisher");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -125049320, "respawnLocationData/locationList/Item(%i)/name:caravan");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 303248275, "respawnLocationData/locationList/Item(%i)/name:isShop");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -786414325, "respawnLocationData/locationList/Item(%i)/playerPos:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1756016266, "respawnLocationData/locationList/Item(%i)/playerPos:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1264284652, "respawnLocationData/locationList/Item(%i)/playerPos:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -566397848, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 599260570, "animation(%i):ID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1368867264, "animation(%i):dictionary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -544081353, "respawnLocationData/respawnAnimList");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1783498894, "respawnLocationData/respawnAnimList/anim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1222062814, "respawnLocationData/respawnAnimList/anim(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 824674748, "flags:useLooping");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1565562604, "flags:useAction");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -233815074, "flags:useSecondaryUpper");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -477049661, "flags:loopAsSecondary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -899679477, "flags:disablePhysics");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -62070419, "flags:disableLegIK");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1689379704, "flags:usesHat");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 660059998, "flags:useIdles");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1854764018, "flags:prop");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -391550498, "flags:prop2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1625090004, "flags:rifleLH");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 76128139, "flags:rifleRH");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1148228754, "flags:useHorse");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 939842437, "flags:needInventory");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2055089342, "flags:walkTillBreakout");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1514205951, "idle:dict");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1597176581, "idle:count");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1726340653, "animOverride:loopingDic");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -2000223992, "alternateAnimation:dictionary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1571721931, "respawnLocationData/locationList/Item(%i)/animations/animation(ID=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1999103282, "respawnLocationData/locationList/Item(%i)/animations/animation(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1148748386, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1737068032, "respawnLocationData/locationList/Item(%i)/animations/animation(%i):ID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -495185473, "playerPos:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1276360309, "playerHeading:float");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1081618208, "camPosition:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1993680615, "camRotation:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 151706215, "camFov:float");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1075437165, "horsePos:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 482880665, "horsePos:heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1818584824, "horsePos:hitched");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2009151738, "time:min");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1565059035, "time:max");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1786497406, "quickCamExit:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -2069884107, "time:weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 383290544, "shop:name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -182204340, "tracks:waypointRecording");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -2016118713, "tracks:waypointHorse");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1563492982, "flow:before");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1975530226, "flow:after");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 108838230, "flow:beforeRCM");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 181294442, "flow:afterRCM");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1374679209, "respawnLocationData/respawnAnimList/anim(name=%x)/startAnimations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 805008619, "startAnim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 908023140, "respawnLocationData/respawnAnimList/anim(name=%x)/idleAnimations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1100654060, "idleAnim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 669343399, "respawnLocationData/respawnAnimList/anim(name=%x)/exitAnimations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1312010450, "exitAnim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1814582423, "respawnLocationData/regionEstablishers/regionEstablisher(district=%x):establisher");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1318367208, "respawnLocationData/regionEstablishers/regionEstablisher(region=%x):establisher");
	return;
}

void func_140() // Position - 0x54BF Hash - 0xAD1DC099 ^0x6A9C527
{
	if (!func_264(16, &(Global_1935183.f_30)))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 0, "root/town(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 1, "townStateTag(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 2, "scenarioGroups");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 3, "scenarioGroup(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 4, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 5, ":enable");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 6, "iplGroups");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 7, "iplGroup(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 8, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 9, ":enable");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 10, "schedules/perschar(id=%x):schedule");
	return;
}

void func_141() // Position - 0x558D Hash - 0x52AA965A ^0xC294DE3A
{
	Any any;

	if (!func_264(17, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 0, "collectibles/name(id=%x):modelName0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1, "collectibles/name(id=%x):modelName1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2, "collectibles/name(id=%x):modelName2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 3, "collectibles/name(id=%x):modelName3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 4, "collectibles/name(id=%x):modelName4");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 5, "collectibles/name(id=%x):inventoryItem0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 6, "collectibles/name(id=%x):inventoryItem1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 7, "collectibles/name(id=%x):inventoryItem2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 8, "collectibles/name(id=%x):inventoryItem3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 9, "collectibles/name(id=%x):inventoryItem4");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 10, "collectibles/name(id=%x):inventoryItem5");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 11, "collectibles/name(id=%x):text0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 12, "collectibles/name(id=%x):text1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 13, "collectibles/name(id=%x):text2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 14, "collectibles/name(id=%x):text3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 15, "collectibles/name(id=%x):int0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 16, "collectibles/name(id=%x):int1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 17, "collectibles/name(id=%x):int2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 18, "collectibles/name(id=%x):int3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 19, "collectibles/name(id=%x):int4");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 20, "collectibles/name(id=%x):int5");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 21, "collectibles/name(id=%x):scenarioType");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 22, "collectibles/name(id=%x):trackedparcels");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 23, "collectibles/name(id=%x):cashTag");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 24, "collectibles/name(id=%x):lootableDef");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 25, "collectibles/name(id=%x):bit0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 26, "collectibles/name(id=%x):bool0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 27, "collectibles/name(id=%x):vector0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 28, "collectibles/name(id=%x):vector1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 29, "collectibles/name(id=%x):vector2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 30, "collectibles/name(id=%x):vector3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 31, "collectibles/name(id=%x):heading0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 32, "collectibles/name(id=%x):heading1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 33, "collectibles/name(id=%x):heading2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 34, "collectibles/name(id=%x):heading3");
	return;
}

void func_142() // Position - 0x5763 Hash - 0xDBC09BE2 ^0x280B92AE
{
	if (func_27() == -1)
		if (!func_264(18, &(Global_1935689.f_9475)))
			return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 3, "satchel_elements/name(id=%x):description0");
	return;
}

void func_143() // Position - 0x57CB Hash - 0x2EEA9B36 ^0xC5639268
{
	if (!func_264(19, &(Global_1357549.f_576)))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 29309381, "camps/camp(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1032438694, "tag(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 367288306, ":priority");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1875502208, "camps/tagData/tag(id=%x):priority");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1250625855, "camps/tagData/tag(id=%x):persistence");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 70005598, "camps/tagData/tag(id=%x):category");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 2065727156, "camps/tagData/tag(id=%x):camp");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -416772466, "camps/tagData/tag(id=%x):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 38091777, "events");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -2121542775, "event(%i):type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1703567845, "event(%i):tagID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1635537271, "event(%i):persistence");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -881673417, "event(%i):priority");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1520535178, "event(%i):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 131366045, "schedules");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1811142696, "greets");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1717836031, "moods");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1770089518, "activities");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1671282280, "scouts");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -23319581, "miniExchanges");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1390301875, "vignetteInfo");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1715662773, "category(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -99632347, "category(%i):slots");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 290349293, "category(%i):weight");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1192477482, "category(%i):visitMax");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 550828398, "category(%i):totalMax");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -176494405, "category(%i):delayMin");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1087786295, "category(%i):delayMax");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1066925324, "category(%i):delayInc");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 730646859, "vignettes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 161473965, "vignette(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -407988477, "vignette(%i):effect");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1756408348, "moods/mood(id=%x):moodID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1648808149, "moods/mood(id=%x):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1461397771, "moods/mood(%i):moodID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 151697783, "moods/mood(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 824852062, "moods/mood(%i):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1949665568, "moods/mood(%i):player");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1378669256, "moods/mood(%i):remove");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -913813077, "greets/greet(%i):greetRule");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1526752584, "greets/greet(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1740164857, "greets/greet(%i):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1289919464, "greets/greet(%i):remove");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 132295407, "greets/greet(%i):tempdisable");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -606763260, "greets/greet(%i):immediate");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1007407053, "greets/greet(%i):player");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1309341906, "activities/activity(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1682013963, "miniExchanges/miniExchange(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 132559829, "miniExchanges/miniExchange(%i):enabled");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1651099034, "schedules/schedule(id=%x):scheduleID");
	return;
}

void func_144() // Position - 0x5C01 Hash - 0x86B45D71 ^0x274F0E78
{
	if (!func_264(20, &(Global_1359489.f_21)))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 429892159, "activities/camp(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -904684498, "activities");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 149448507, "activity(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1699652051, "activity(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 13127246, "activity(instanceID=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1688140176, ":enabled");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 191541852, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -286179123, ":instanceID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -12317914, ":location");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 482834189, ":heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -620745170, ":customActivityUpdate");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1946033125, ":scriptToLaunch");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1371217890, ":stackSize");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2015824487, "participants");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 287603469, "participants/participant(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 919971448, "participants/participant(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2137406745, ":minCampLevel");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 429172948, "timeblocks");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1857445163, "timeblock(%i):start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1738420189, "timeblock(%i):end");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -431208529, ":shouldLaunchScriptEarly");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -547065739, ":launchScript");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 693772275, ":prerequisiteActivity");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 950875968, ":autoAddParticipants");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1023837085, ":requireAllParticipants");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -350109401, ":hostShouldLead");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1153145259, ":useSimpleVolume");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -768200779, ":activityVolRadius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -972717455, "activity(instanceID=%x):ipl");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1140954353, "activity(instanceID=%x):speechRuleset");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1749910275, ":horseStartLocation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -240512847, ":horseStartHeading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1498558552, ":hostWaitLocation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -950402515, ":hostWaitHeading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1156974471, ":invitePos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -102247125, ":launchSceneType");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 879932920, "assets/anims:looseAnimScene");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -665861927, "assets/dialogue:beatDialogue");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 2090390096, "assets/anims:playbackListAnimScene");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 886360362, "assets/scenarios:scenarioCallovers");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1524147455, "assets/scenarios/scenario(type=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -320556862, "assets/scenarios/scenario(type=%x):position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1394784022, "assets/scenarios/scenario(type=%x):heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -808176988, "assets/scenarios/scenario(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2112723510, "assets/dialogue");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 35939498, "assets/dialogue:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 738913608, "assets/music:musicFileName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1202064540, "activity(instanceID=%x)/assets/anims/anim(type=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1449499638, "activity(instanceID=%x)/assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -561019962, "activity(instanceID=%x)/assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 954609930, "assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1080121180, "assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1643627018, "activity(instanceID=%x)/assets/anims/anim(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 899481067, "assets/anims/anim(type=%x):idle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 366733363, "assets/anims/anim(type=%x):invite");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 61184076, "assets/anims/anim(type=%x):callover");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1746427169, "assets/anims/anim(type=%x):calloverLeft");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1746252387, "assets/anims/anim(type=%x):calloverRight");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 708078506, "assets/anims:dontanimatePlayer");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 770042177, "assets/anims:playerUpperbodyOnly");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1903557952, "assets/anims:registerPlayerForLeadin");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 2072518271, "activities/activity(instanceID=%x)/assets/dialogue/line(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1445554035, "assets/cutscenes/scene(type=%x):hostPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 443199092, "participants/participant(id=%x):pedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2047775528, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1102408038, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1750702392, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 909172229, "activity(instanceID=%x)/assets/props");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 809005032, "prop(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2077191478, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 2029403190, ":isVehicle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1932515175, ":position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1283690869, ":rotation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -145970252, ":propHandle");
	return;
}

void func_145() // Position - 0x61E3 Hash - 0x2972D07C ^0x996AA29B
{
	if (!func_264(21, &(Global_1359489.f_361.f_195)))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 0, "Items");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 2, "Item(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 6, ":itemRequest");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 7, ":inventoryItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 3, ":region");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 8, ":position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 9, ":rotation");
	return;
}

void func_146() // Position - 0x6288 Hash - 0x4F60CAE2 ^0x4E83333E
{
	Any any;

	if (!func_264(22, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1023752283, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-1023752283));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1076906043, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-1076906043));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -153135980, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-153135980));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 12851681, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(12851681));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1386325051, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(1386325051));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 43722464, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(43722464));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -581476215, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-581476215));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1906982261, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-1906982261));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1035806543, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-1035806543));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1579284209, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(1579284209));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1172613177, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-1172613177));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 495869290, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(495869290));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1382561665, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-1382561665));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 684071069, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(684071069));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1357371535, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(1357371535));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -1221865546, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(-1221865546));
	return;
}

void func_147() // Position - 0x63ED Hash - 0x2A7EFF96 ^0xA7903DBB
{
	Any any;

	if (!func_264(23, &any))
		return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 1781729525, func_268(1781729525));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -2103982008, func_268(-2103982008));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, -57097983, func_268(-57097983));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 2027336698, func_268(2027336698));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(any, 316053773, func_268(316053773));
	return;
}

void func_148() // Position - 0x646D Hash - 0x1BD71BD1 ^0x2362CE5E
{
	int i;
	Volume volLockRequestId;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
			Global_1911670[i] = 0;
		}
	}

	return;
}

BOOL func_149() // Position - 0x64AC Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_150() // Position - 0x64B5 Hash - 0x44A56ACB ^0xF3239C0B
{
	func_269(1416977006, 1);
	func_269(1731133409, 1);
	func_269(-227771192, 1);
	func_269(-522528347, 1);
	func_269(1446885586, 1);
	func_269(1208032345, 1);
	return;
}

void func_151() // Position - 0x64F9 Hash - 0xB21272E1 ^0x5B85DE4C
{
	eStackSize i;

	VOLUME::_0x748C5F51A18CB8F0(false);
	func_270(true);

	for (i = 0; i < 150; i = i + 1)
	{
		func_271(i);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

void func_152() // Position - 0x6529 Hash - 0x2ED4D0AD ^0x7E69FD2D
{
	if (func_27() == -1)
	{
		Global_1894899.f_172 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-2002867003);
		Global_1894899.f_173 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-858572145);
		Global_1894899.f_174 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(1814852958);
	
		while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_172) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_173) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_174))
		{
			BUILTIN::WAIT(0);
		}
	
		func_272();
		func_273();
		func_274();
	}

	return;
}

void func_153(var uParam0, int iParam1, char* sParam2) // Position - 0x65AD Hash - 0x7A8E93C ^0x3070DFF8
{
	int frameCount;
	eStackSize stackSize;
	Any any;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;
	var unk11;
	Hash hashKey;
	BOOL flag;
	int num;
	var name;

	frameCount = MISC::GET_FRAME_COUNT();
	any = *iParam1;
	any.f_2 = -244250050;
	!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any);
	any.f_2 = 0;

	while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1) > num)
	{
		flag = false;
		any.f_3 = num;
		any.f_2 = -734680005;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk11, &any);
		stackSize = func_275(MISC::GET_HASH_KEY(&unk11));
	
		if (stackSize == -1)
		{
			any.f_2 = -1285134888;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk11, &any);
			stackSize = func_275(MISC::GET_HASH_KEY(&unk11));
			flag = true;
			stackSize == -1;
		}
	
		if (stackSize != -1)
		{
			any.f_2 = -177723663;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vector, &any);
			any.f_2 = -968243019;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector.f_1), &any);
			any.f_2 = -646025442;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector.f_2), &any);
			any.f_2 = 1397255209;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vector2, &any);
			any.f_2 = 503447965;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector2.f_1), &any);
			any.f_2 = 800892178;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector2.f_2), &any);
			any.f_2 = 1348766134;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vector3, &any);
			any.f_2 = 1572185176;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector3.f_1), &any);
			any.f_2 = -1543393037;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vector3.f_2), &any);
			any.f_2 = 1958238202;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk11, &any);
			hashKey = MISC::GET_HASH_KEY(&unk11);
			TEXT_LABEL_ASSIGN_STRING(&name, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(stackSize), 64);
			TEXT_LABEL_APPEND_STRING(&name, sParam2, 64);
		
			if (!flag)
			{
				switch (hashKey)
				{
					case joaat("volBox"):
						uParam0->[stackSize] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, &name);
						break;
				
					case joaat("volCylinder"):
						uParam0->[stackSize] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, vector2, vector3, &name);
						break;
				}
			}
			else
			{
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->[stackSize]))
					uParam0->[stackSize] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&name);
			
				switch (hashKey)
				{
					case joaat("volBox"):
						VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->[stackSize], vector, vector2, vector3);
						break;
				
					case joaat("volCylinder"):
						VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(uParam0->[stackSize], vector, vector2, vector3);
						break;
				}
			}
		}
	
		num = num + 1;
	}

	return;
}

void func_154(BOOL bParam0) // Position - 0x67D9 Hash - 0x8038C527 ^0x33ED02D3
{
	int num;
	var unk5;
	eStackSize stackSize;
	var unk13;
	var unk14;
	int num2;

	if (bParam0)
	{
		if (func_27() == -1)
		{
			Global_1894899.f_175 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(90230079);
		
			while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_175))
			{
				BUILTIN::WAIT(0);
			}
		
			func_277();
		}
	}
	else
	{
		Global_1894899.f_175 = DATAFILE::_0xCA56DD6AB7A39F64(90230079);
		func_277();
	}

	num = Global_1894899.f_175;
	num.f_2 = -258890676;
	!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num);
	num.f_2 = 0;

	while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(num, num.f_1) > num2)
	{
		num.f_3 = num2;
		num.f_2 = 1489686829;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk5, &num);
		stackSize = func_275(MISC::GET_HASH_KEY(&unk5));
	
		if (func_207(stackSize))
		{
			num.f_2 = 596301644;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk13, &num);
			Global_1888801[stackSize /*35*/].f_10 = unk13;
			num.f_2 = 325957282;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk13, &num);
			Global_1888801[stackSize /*35*/].f_11 = unk13;
			num.f_2 = 426139466;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk14, &num);
			Global_1888801[stackSize /*35*/].f_12 = MISC::GET_HASH_KEY(&unk14);
		}
	
		num2 = num2 + 1;
	}

	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_175);
	return;
}

void func_155(Any anParam0) // Position - 0x6904 Hash - 0x5534EA89 ^0x2FB3E24E
{
	*anParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(joaat("regions"));

	while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*anParam0))
	{
		BUILTIN::WAIT(0);
	}

	return;
}

void func_156() // Position - 0x692B Hash - 0xCE1E68EE ^0x42A1D64
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 1276999770, "regions/region(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 1459980739, ":script");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, -158797272, ":prefix");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, -1484939920, ":type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 2028394285, ":mpType");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 670069251, ":richPresence");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 1422201736, ":lockSessioning");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 865021745, ":guama");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 2078335853, ":mpGhosttown");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, -2025494336, ":mpTypeOverride");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 899379634, ":noGPS");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, 414670492, ":hideName");
	return;
}

void func_157(Any anParam0) // Position - 0x6A23 Hash - 0x5534EA89 ^0xC2FDCCD4
{
	*anParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-1412413887);

	while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*anParam0))
	{
		BUILTIN::WAIT(0);
	}

	return;
}

void func_158() // Position - 0x6A4A Hash - 0xCE1E68EE ^0x6E5EDFAA
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 1252559615, "regions/region(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 1711029673, "bCanBeRestricted:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 1758612600, "bUseStoredBountyForWanted:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 115903213, "iBountyForWanted:value");
	return;
}

void func_159() // Position - 0x6AA2 Hash - 0x4E490695 ^0xF1B7446B
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_172);
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_173);
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_174);
	return;
}

void func_160(Any anParam0, eStackSize essParam1, Volume volParam2, var uParam3, var uParam4) // Position - 0x6AC8 Hash - 0xFC59A577 ^0x22C73AC8
{
	var unk;

	if (essParam1 > 150)
		return;

	!VOLUME::DOES_VOLUME_EXIST(volParam2);

	if (!func_278(anParam0, essParam1, &unk))
		return;

	Global_1888801[essParam1 /*35*/].f_3 = volParam2;
	Global_1888801[essParam1 /*35*/].f_4 = uParam3;
	Global_1888801[essParam1 /*35*/].f_5 = uParam4;
	Global_1888801[essParam1 /*35*/].f_6 = { VOLUME::GET_VOLUME_COORDS(volParam2) };
	TEXT_LABEL_COPY(&(Global_1888801[essParam1 /*35*/].f_23), { unk }, 3);
	TEXT_LABEL_COPY(&(Global_1888801[essParam1 /*35*/].f_22), { unk.f_8 }, 1);
	Global_1888801[essParam1 /*35*/].f_30 = MISC::GET_HASH_KEY(&(Global_1888801[essParam1 /*35*/].f_22));
	Global_1888801[essParam1 /*35*/].f_20 = unk.f_16;
	Global_1888801[essParam1 /*35*/].f_9 = 0;
	Global_1888801[essParam1 /*35*/].f_1 = 0;
	Global_1888801[essParam1 /*35*/].f_15 = { func_279(essParam1) };
	func_280(essParam1, 15);
	func_281(essParam1, unk.f_18);

	if (func_282(essParam1, 64))
		if (VOLUME::DOES_VOLUME_EXIST(volParam2))
			PATHFIND::_0xF2A2177AC848B3A8(volParam2, 0, 1);

	if (func_27() != -1)
		if (func_282(essParam1, 32))
			if (unk.f_19 != 0)
				Global_1888801[essParam1 /*35*/].f_20 = unk.f_19;

	switch (unk.f_16)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 9:
			break;
	
		default:
			break;
	}

	if (func_27() == -1)
	{
		switch (func_283(essParam1))
		{
			case 0:
			case 2:
			case 11:
				Global_1894899.f_176 = Global_1894899.f_176 + 1;
				break;
		
			case 1:
			case 5:
			case 6:
			case 7:
			case 12:
				Global_1894899.f_178 = Global_1894899.f_178 + 1;
				break;
		
			case 3:
			case 10:
				Global_1894899.f_177 = Global_1894899.f_177 + 1;
				break;
		
			case 4:
			case 9:
				Global_1894899.f_179 = Global_1894899.f_179 + 1;
				break;
		
			case 8:
				Global_1894899.f_180 = Global_1894899.f_180 + 1;
				break;
		
			case 13:
			case 14:
			case 15:
			case 16:
				Global_1894899.f_181 = Global_1894899.f_181 + 1;
				break;
		}
	}

	return;
}

void func_161(Any anParam0, eStackSize essParam1) // Position - 0x6D0C Hash - 0x684E59BF ^0x633CF7BA
{
	var unk;

	if (essParam1 > 150)
		return;

	if (!func_284(anParam0, essParam1, &unk))
		return;

	Global_1888801[essParam1 /*35*/].f_31 = unk;
	return;
}

void func_162() // Position - 0x6D3B Hash - 0xCDCF44B8 ^0x6902D806
{
	eStackSize i;

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_207(i))
			if (func_285(i) && func_286(i))
				func_232(i, true, 350);
			else
				func_232(i, false, 350);
	}

	return;
}

void func_163(Any anParam0) // Position - 0x6D8A Hash - 0x9EF6EE9C ^0x56109E84
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*anParam0);
	return;
}

void func_164(Any anParam0) // Position - 0x6D99 Hash - 0x9EF6EE9C ^0x56109E84
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*anParam0);
	return;
}

void func_165() // Position - 0x6DA8 Hash - 0x965B2B49 ^0x77C5CD72
{
	eStackSize i;

	Global_1894899.f_161 = 0;

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_287(i) && VOLUME::DOES_VOLUME_EXIST(Global_1888801[i /*35*/].f_3))
		{
			Global_1894899.f_10[Global_1894899.f_161] = i;
			Global_1894899.f_161 = Global_1894899.f_161 + 1;
		}
	}

	return;
}

void func_166() // Position - 0x6E04 Hash - 0xDB7465E ^0xDB7465E
{
	int i;
	var min;
	var max;
	int j;
	int k;
	int l;
	var unk5;
	var unk22;

	j = 0;
	k = 0;
	l = 0;
	func_288();

	for (k = 0; k < 16; k = k + 1)
	{
		for (l = 0; l < 50; l = l + 1)
		{
			Global_1894065[k /*51*/][l] = -1;
		}
	
		Global_1894882[k] = 0;
	}

	unk5 = 16;
	unk22 = 4;
	VOLUME::_0x748C5F51A18CB8F0(false);

	for (i = 0; i < 150; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[i /*35*/].f_3))
		{
			VOLUME::_GET_VOLUME_BOUNDS(Global_1888801[i /*35*/].f_3, &min, &max);
		
			for (k = 0; k < 16; k = k + 1)
			{
				unk5[k] = 1;
			}
		
			for (j = 0; j < 4; j = j + 1)
			{
				unk22[j] = 1;
			}
		
			func_289(min, max, 0f, 0f, &unk22, 0, 2);
		
			for (j = 0; j < 4; j = j + 1)
			{
				if (unk22[j])
					func_289(min, max, Global_1894052[j /*3*/].f_1, Global_1894052[j /*3*/].f_2, &unk5, Global_1894052[j /*3*/], 4);
				else
					func_290(&unk5, Global_1894052[j /*3*/], 4);
			}
		
			for (k = 0; k < 16; k = k + 1)
			{
				if (unk5[k])
				{
					Global_1894882[k] >= 50;
					Global_1894065[k /*51*/][Global_1894882[k]] = i;
					Global_1894882[k] = Global_1894882[k] + 1;
				}
			}
		}
	}

	VOLUME::_0x748C5F51A18CB8F0(true);

	for (k = 0; k < 16; k = k + 1)
	{
		for (l = 0; l < Global_1894882[k]; l = l + 1)
		{
		}
	}

	return;
}

void func_167(BOOL bParam0) // Position - 0x6FB8 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1894899 = Global_1894899 - Global_1894899 && bParam0;
	return;
}

void func_168() // Position - 0x6FD0 Hash - 0x7E3B29C6 ^0xCB79A515
{
	var unk;

	unk = 100;
	unk.f_1 = -1;
	unk.f_1.f_1 = 1;
	unk.f_1.f_2 = -1;
	unk.f_1.f_2.f_1 = 1;
	unk.f_1.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Global_1934765.f_69 = { unk };
	return;
}

void func_169(int iParam0) // Position - 0x74A2 Hash - 0x7A1F391A ^0x7A1F391A
{
	func_291(iParam0, 1);
	return;
}

void func_170(int iParam0) // Position - 0x74B1 Hash - 0x879B7DAC ^0x879B7DAC
{
	func_291(iParam0, false);
	return;
}

void func_171() // Position - 0x74C0 Hash - 0x487B3FDC ^0x487B3FDC
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		func_292(i);
	}

	return;
}

BOOL func_172(int iParam0, BOOL bParam1) // Position - 0x74E1 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_293(iParam0))
	{
		case 5:
			return 1;
	
		case 6:
			if (bParam1)
				return 1;
			break;
	}

	return 0;
}

BOOL func_173() // Position - 0x7512 Hash - 0x2C13EB06 ^0x38F12C8A
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_4)
		return true;

	if (Global_524298)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1051043 == -1 && Global_1572887.f_6 & true != 0)
		return true;

	return false;
}

BOOL func_174(eStackSize essParam0) // Position - 0x7565 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

BOOL func_175(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x757B Hash - 0xC9655EC3 ^0x88C9AFE1
{
	if (Global_1935630.f_18)
		if (bParam2 || Global_1935630.f_19 > 0 || Global_1935630.f_17 > 0)
			return 1;
	else if (bParam1 && !(Global_1935630.f_15 == 1370593166))
		return 0;

	if (Global_1935630.f_20 > 0 || bParam2 && Global_1935630.f_20 > -1)
		return 1;

	if (bParam0)
		if (Global_1935630.f_13)
			if (bParam2 || Global_1935630.f_21 > 0)
				return 1;

	return 0;
}

void func_176(BOOL bParam0, BOOL bParam1) // Position - 0x7619 Hash - 0xF8E684C8 ^0x65A307DA
{
	var returnCoords;
	var returnHeading;
	var unk3;

	if (func_27() == -1)
		func_294();
	else
		return;

	func_295();
	Global_40.f_9.f_14 = func_177();
	Global_40.f_9.f_20 = LAW::GET_BOUNTY(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");

	if (bParam0 && !bParam1)
	{
		if (func_296())
		{
			func_214(Global_1310720.f_1);
		}
		else if (func_98() == func_102(Global_36, true) && func_297() != 2)
		{
			func_214(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_214(Global_36);
		}
	
		func_298(Global_36, &returnCoords, &unk3);
	
		if (!func_296())
		{
			if (func_299(returnCoords, Global_36) < func_299(Global_40.f_9.f_7, Global_36))
			{
				func_214(returnCoords);
				Global_40.f_9 = unk3;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
	
		Global_40.f_9.f_15 = func_102(Global_40.f_9.f_7, true);
	}
	else if (!bParam0)
	{
		func_298(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &returnCoords, &returnHeading);
	}

	if (!bParam1)
		func_218(&Global_1935630, 8192);

	func_300();
	return;
}

eStackSize func_177() // Position - 0x776A Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_178(int iParam0) // Position - 0x7776 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

BOOL func_179(BOOL bParam0, BOOL bParam1) // Position - 0x778C Hash - 0xB9DB2DC5 ^0x26069921
{
	int num;
	var unk;

	if (!bParam0)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			return false;
	
		if (func_301())
			return false;
	
		if (!Global_1934765.f_274 && !func_39(32768))
			if (Global_1879534.f_1 || Global_1879534)
				return false;
	}

	switch (Global_1934765)
	{
		case 0:
			func_302(666617953);
			func_302(1733948592);
			func_302(1700234797);
			func_302(1305074360);
			func_302(-436566493);
			func_302(-1995815064);
			func_302(-483649675);
			func_302(212587871);
			func_302(joaat("tax_shutters_closed"));
			func_302(1190076410);
			func_302(350100475);
			func_302(2033090463);
			func_302(-688011628);
			func_302(-787042507);
			func_302(1688216398);
			func_302(669655585);
			func_302(-895099271);
			func_302(556610581);
			func_302(joaat("arm_05_cholera"));
		
			if (func_303())
			{
				func_302(-693659956);
				func_302(joaat("sppack_a1sup_obelisk"));
				func_302(-400238535);
				func_302(1416512144);
			}
		
			func_302(joaat("sppack_a4sup_aquaduct"));
			func_302(-846479900);
			func_302(-866774384);
		
			if (!Global_1934765.f_288)
				func_304(229);
		
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.0114f, -32.44423f, 38f, -1186.8292f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.2462f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.5438f, -4.74933f, 38f, -1163.4243f, -13.43965f, 42f, 6, 1);
			func_305();
			func_306();
			func_307();
			return false;
	
		case 1:
			func_308();
			func_307();
			return false;
	
		case 2:
			func_309();
			func_307();
			return false;
	
		case 3:
			break;
	}

	if (!func_310(514932331))
		func_302(1892122519);

	if (func_310(-1414537028))
	{
		if (!func_311(Global_1934765.f_20, 1))
		{
			func_312(5, 1);
			func_312(7, true);
			func_312(6, true);
			func_312(1, true);
			func_84(&(Global_1934765.f_20), 1);
		}
	}
	else if (func_311(Global_1934765.f_20, true))
	{
		func_312(5, 2);
		func_312(1, 2);
		func_85(&(Global_1934765.f_20), 1);
	}

	if (func_310(269047710))
	{
		func_313(382484708);
		func_302(-910880980);
	}
	else
	{
		func_313(-910880980);
		func_302(382484708);
	}

	if (func_310(-748969569))
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	else
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);

	if (func_310(618699440))
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	else
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);

	if (func_310(-1062490780))
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	else
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);

	if (func_310(-683458244))
	{
		func_314(203);
		func_304(204);
	}
	else
	{
		func_314(204);
		func_304(203);
	}

	func_315(273461605, 79, 2, 4096);
	func_315(-868076593, 9, 32, 4096);
	func_315(1205826474, 36, 64, 4096);

	if (func_310(373691918))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			WATER::_SET_WORLD_WATER_TYPE(1);
	
		if (!Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_SET_MINIMAP_ZONE(joaat("guarma"));
		}
	
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(false, 0);
		Global_43891 = true;
	}
	else
	{
		if (func_310(657241756))
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
				WATER::_SET_WORLD_WATER_TYPE(1);
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
			WATER::_SET_WORLD_WATER_TYPE(0);
	
		if (Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_SET_MINIMAP_ZONE(joaat("WORLD"));
		}
	
		MAP::SET_MINIMAP_HIDE_FOW(false);
	
		if (!func_39(128))
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
	
		Global_43891 = false;
	}

	if (func_310(-2058120606))
		func_27() == -1;
	else
		func_27() == -1;

	if (func_310(311708813))
	{
		func_302(-1786365097);
		func_304(178);
	}
	else
	{
		func_313(-1786365097);
		func_314(178);
	}

	if (!func_310(1399676951))
	{
		func_313(1934919499);
		func_313(993595204);
		func_313(-515396642);
		func_313(1291083725);
		func_313(joaat("des_str_jail"));
	
		if (func_310(-1524512402))
		{
			func_302(joaat("des_str_jail"));
			func_304(193);
		}
		else
		{
			num = func_317(func_316(11));
		
			if (func_318(num, 1))
			{
				func_302(joaat("des_str_jail"));
				func_304(193);
			}
			else
			{
				func_314(193);
			
				if (func_318(num, 2))
					func_302(1291083725);
				else if (func_318(num, 4))
					func_302(993595204);
			}
		}
	}

	if (func_310(1497516462))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_319(557, 32);
			func_319(563, 32);
			func_319(560, 32);
			func_319(561, 32);
			func_319(562, 32);
			func_320(565, 32);
			func_321(565, false);
			func_320(564, 32);
			func_321(564, false);
			func_320(554, 32);
			func_321(554, false);
			func_320(555, 32);
			func_321(555, false);
			func_320(556, 32);
			func_321(556, false);
		}
	
		func_314(199);
		func_304(198);
	}
	else if (func_310(2016141805))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_319(557, 32);
			func_319(563, 32);
			func_320(560, 32);
			func_321(560, false);
			func_320(561, 32);
			func_321(561, false);
			func_320(562, 32);
			func_321(562, false);
			func_320(554, 32);
			func_321(554, false);
			func_320(555, 32);
			func_321(555, false);
			func_320(556, 32);
			func_321(556, false);
			func_320(565, 32);
			func_321(565, false);
			func_320(564, 32);
			func_321(564, false);
		}
	
		func_314(199);
		func_314(198);
	}
	else if (func_310(1010885152))
	{
		if (func_27() == -1)
		{
			func_322(68, 16);
			func_321(554, false);
			func_321(555, false);
			func_321(556, false);
			func_321(557, false);
			func_321(563, false);
			func_321(560, false);
			func_321(561, false);
			func_321(562, false);
			func_321(565, false);
			func_321(564, false);
		}
	
		func_314(199);
		func_304(198);
	}
	else if (func_310(-502324015))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_320(554, 32);
			func_320(555, 32);
			func_320(556, 32);
			func_320(557, 32);
			func_320(563, 32);
			func_321(554, false);
			func_321(555, false);
			func_321(556, false);
			func_321(557, false);
			func_321(563, false);
			func_319(565, 32);
			func_319(564, 32);
			func_319(560, 32);
			func_319(561, 32);
			func_319(562, 32);
		}
	
		func_314(198);
		func_304(199);
	}

	if (func_310(440043364))
		func_313(376665102);
	else
		func_302(376665102);

	if (func_310(-1425209566))
	{
		if (func_27() == -1)
			func_319(800, 32);
	}
	else if (func_27() == -1)
	{
		func_320(800, 32);
		func_321(800, false);
	}

	func_323();

	if (func_310(0))
	{
		func_302(1149195254);
		func_302(2016081133);
		func_302(363257921);
		func_302(58066174);
		func_302(-1521525254);
		func_302(-761186147);
		func_302(-1872939092);
		func_302(-964156415);
		func_324(false);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		func_325(-434746250, 1);
	
		if (func_310(-699277634))
		{
			func_302(-2137633069);
			func_304(121);
			func_304(123);
			func_304(125);
		
			if (func_27() == -1)
			{
				func_322(93, 16);
				func_326(93);
			}
		
			if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1) && !bParam1)
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.9766f, 44.5697f, 1034.2496f, -1752.2253f, 59.7424f, false, 15);
		}
		else
		{
			func_302(1944013855);
			func_304(120);
			func_304(122);
			func_304(124);
			func_280(93, 16);
		
			if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (func_310(473295046))
	{
		func_302(-1643869063);
		func_302(-1108618313);
		func_302(-787678727);
		func_324(false);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_325(-434746250, 1);
	
		if (func_310(-699277634))
			func_327("bra_man_burned_bra3");
		else
			func_327("bra_man_burned");
	
		func_280(93, 16);
	
		if (func_27() == -1)
		{
			func_319(621, 32);
			func_319(622, 32);
			func_319(623, 32);
			func_319(624, 32);
			func_320(909, 32);
			func_321(909, false);
			func_320(910, 32);
			func_321(910, false);
			func_320(911, 32);
			func_321(911, false);
			func_320(912, 32);
			func_321(912, false);
			func_320(&func_8, 32);
			func_321(&func_8, false);
			func_320(914, 32);
			func_321(914, false);
			func_320(617, 32);
			func_321(617, false);
			func_320(618, 32);
			func_321(618, false);
			func_320(619, 32);
			func_321(619, false);
			func_320(620, 32);
			func_321(620, false);
			func_320(915, 32);
			func_321(915, false);
			func_320(916, 32);
			func_321(916, false);
			func_320(917, 32);
			func_321(917, false);
			func_320(625, 32);
			func_321(625, false);
		}
	
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (func_310(-1738165526))
	{
		func_302(-1643869063);
		func_302(622597018);
		func_302(1649275138);
		func_324(true);
		func_327("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_269(-434746250, 1);
		func_322(93, 16);
	
		if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1) && !bParam1)
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.9766f, 44.5697f, 1034.2496f, -1752.2253f, 59.7424f, false, 15);
	}

	if (!func_310(-270094635))
	{
		func_302(1355914142);
	
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_16, 7);
		}
	}
	else
	{
		func_313(1355914142);
	
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_16);
			VOLUME::DELETE_VOLUME(Global_1934765.f_16);
		}
	}

	if (func_310(-1666278201))
	{
		func_313(706203603);
		func_302(937192284);
	}
	else
	{
		func_313(937192284);
		func_302(706203603);
	}

	if (func_310(405586984))
	{
		func_313(-1052023588);
		func_313(-745087561);
		func_328("old_nav_wall_hole");
		func_328("old_nav_nts3_start");
		func_328("old_nav_nts3_end");
		func_302(944314155);
		func_327("old_nav_wall_fill");
	}
	else if (func_310(1509509592))
	{
		func_313(-1052023588);
		func_328("old_nav_wall_fill");
		func_328("old_nav_wall_hole");
		func_328("old_nav_nts3_end");
		func_302(944314155);
		func_302(-745087561);
		func_327("old_nav_nts3_start");
	}
	else if (func_310(-959357075))
	{
		func_313(944314155);
		func_328("old_nav_wall_fill");
		func_328("old_nav_nts3_start");
		func_328("old_nav_wall_hole");
		func_302(-1052023588);
		func_302(-745087561);
		func_327("old_nav_nts3_end");
	}
	else if (func_310(-1311865656))
	{
		func_313(944314155);
		func_313(-745087561);
		func_328("old_nav_wall_fill");
		func_328("old_nav_nts3_start");
		func_328("old_nav_nts3_end");
		func_302(-1052023588);
		func_327("old_nav_wall_hole");
	}

	if (func_310(2091701359))
		func_302(joaat("van_02_horseboat"));
	else
		func_313(joaat("van_02_horseboat"));

	if (func_310(1376646519))
	{
		func_313(-920505696);
		func_313(281772765);
		func_313(-516683274);
		func_314(135);
		func_314(136);
		func_314(137);
		func_314(138);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_shootout");
		func_328("nav_std_bank_dest");
		func_304(134);
		func_302(1017355491);
		func_302(-1004522372);
	}
	else if (func_310(931649776))
	{
		func_313(-920505696);
		func_313(-516683274);
		func_314(135);
		func_314(136);
		func_314(137);
		func_314(138);
		func_328("nav_std_bank_shootout");
		func_328("nav_std_bank_dest");
		func_302(-1004522372);
		func_304(134);
		func_302(1017355491);
		func_302(281772765);
		func_327("nav_std_bank_start");
	}
	else if (func_310(-434590080))
	{
		func_313(-920505696);
		func_313(-516683274);
		func_314(134);
		func_314(137);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_dest");
		func_302(-1004522372);
		func_304(135);
		func_304(136);
		func_304(138);
		func_302(1017355491);
		func_302(281772765);
		func_327("nav_std_bank_shootout");
	}
	else if (func_310(1743048395))
	{
		func_313(1017355491);
		func_313(281772765);
		func_313(-1004522372);
		func_314(134);
		func_314(135);
		func_304(137);
		func_304(138);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_shootout");
		func_302(-516683274);
		func_302(-920505696);
		func_327("nav_std_bank_dest");
	}
	else if (func_310(449774763))
	{
		func_313(1017355491);
		func_313(-516683274);
		func_313(281772765);
		func_314(134);
		func_314(135);
		func_314(136);
		func_314(138);
		func_302(-1004522372);
		func_304(137);
	}

	if (func_310(-764163380))
	{
		func_314(140);
		func_304(139);
	}
	else
	{
		func_314(139);
		func_304(140);
	}

	if (func_310(-349064220))
	{
		func_302(140744122);
		func_302(-1795618779);
		func_327("hso_post_caravan");
	}
	else
	{
		func_313(140744122);
		func_313(-1795618779);
		func_328("hso_post_caravan");
	}

	if (func_310(1776302352))
	{
		func_302(1691578074);
		func_302(-1936937394);
		func_327("dewclm_post_caravan");
	}
	else
	{
		func_313(1691578074);
		func_313(-1936937394);
		func_328("dewclm_post_caravan");
	}

	if (func_310(-523522517))
	{
		func_302(-1130111983);
		func_302(-1015786727);
	}
	else
	{
		func_313(-1130111983);
		func_313(-1015786727);
	}

	if (func_310(1591451572))
		func_302(560821199);
	else
		func_313(560821199);

	if (func_310(1177464213))
	{
		func_313(-313831898);
		func_313(634920011);
		func_302(1694736240);
		func_302(2035758463);
	}
	else
	{
		func_313(1694736240);
		func_313(2035758463);
		func_302(-313831898);
		func_302(634920011);
	}

	func_329();
	func_330();

	if (func_310(459290420))
	{
		func_302(474287981);
		func_302(-338553155);
		func_302(-1636879249);
		func_302(205214733);
		func_313(joaat("weathervol_chpt1_snowstorm"));
		func_304(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		func_331(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
	
		if (func_58())
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_310(1884271742))
	{
		func_302(867231253);
		func_302(-323126593);
		func_302(-1316886711);
		func_302(205214733);
		func_313(joaat("weathervol_chpt1_snowstorm"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_310(-2038424081))
	{
		func_302(867231253);
		func_302(-1670453688);
		func_302(-323126593);
		func_302(-1316886711);
		func_302(205214733);
		func_327("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
	
		if (func_58())
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
	}
	else if (func_310(753127042))
	{
		func_302(1248111234);
		func_302(-1670453688);
		func_302(-323126593);
		func_302(-1316886711);
		func_302(205214733);
		func_327("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
	
		if (func_58())
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
	}
	else if (func_310(-1187950766))
	{
		func_302(474287981);
		func_302(-1670453688);
		func_302(-1636879249);
		func_302(-338553155);
		func_304(186);
		func_327("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
	
		if (func_58())
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
	}
	else if (func_310(356365161))
	{
		func_302(474287981);
		func_302(-1670453688);
		func_302(-338553155);
		func_302(-1636879249);
		func_327("col_nav_wint1_cabin_prefire");
		func_304(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
	
		if (func_58())
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
	}
	else if (func_310(-939420910))
	{
		func_302(joaat("win1_intro_cutscene"));
		func_302(474287981);
		func_302(-717025835);
		func_302(-338553155);
		func_302(-1636879249);
		func_304(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		func_331(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
	
		if (func_58())
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
	}

	if (func_310(-1170496998))
	{
		func_302(-1306375743);
		func_302(-743781837);
		func_302(2114706334);
	
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_15, 7);
		}
	
		func_304(149);
		func_304(150);
		func_304(151);
		func_304(152);
	}
	else
	{
		func_313(-1306375743);
		func_313(-743781837);
		func_313(2114706334);
	
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_15);
			VOLUME::DELETE_VOLUME(Global_1934765.f_15);
		}
	
		func_314(149);
		func_314(150);
		func_314(151);
		func_314(152);
	}

	func_332();

	if (func_310(2080210939))
		func_302(-1055748784);
	else
		func_313(-1055748784);

	if (func_310(1485195808))
	{
		func_304(147);
		func_314(148);
	}
	else
	{
		func_314(147);
		func_304(148);
	}

	if (func_310(-1532284567))
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);

	if (func_310(2127577956))
	{
		func_302(joaat("sha_ext_shutters_odriscolls4"));
		func_313(joaat("sha_ext_shutters_normal"));
	}
	else
	{
		func_302(joaat("sha_ext_shutters_normal"));
		func_313(joaat("sha_ext_shutters_odriscolls4"));
	}

	if (func_310(-524145696))
	{
		func_302(809554858);
		func_302(1810083187);
		func_313(159921796);
		func_313(-1739900853);
		func_302(2113454609);
		func_302(-520163372);
		func_313(-90228526);
		func_314(17);
		func_314(2);
		func_314(4);
		func_304(1);
		func_304(5);
		func_333(931206119, true, 0, false, false, 0, false, false);
		func_333(1783003505, true, 0, false, false, 0, false, false);
		func_302(-646014955);
		func_328("shb_nav_camp_running");
		func_328("shb_nav_camp_teardown");
		func_313(joaat("FIN2_AMB_04"));
		func_328("shb_nav_camp_01");
		func_327("shb_nav_camp_00");
	
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
	
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
	}
	else
	{
		func_328("shb_nav_camp_00");
		func_328("shb_nav_camp_01");
		func_313(809554858);
		func_313(joaat("FIN2_AMB_04"));
		func_313(1810083187);
		func_333(931206119, false, 0, false, true, 0, false, false);
		func_333(1783003505, false, 0, false, true, 0, false, false);
		func_313(-646014955);
	
		if (func_310(282809459))
		{
			func_314(5);
			func_314(17);
			func_314(1);
			func_314(2);
			func_304(4);
			func_313(-520163372);
			func_302(-90228526);
			func_302(159921796);
			func_313(-1739900853);
			func_313(2113454609);
		}
		else if (func_310(1626481264))
		{
			func_314(5);
			func_314(4);
			func_314(1);
			func_314(2);
			func_304(17);
			func_313(-520163372);
			func_302(-90228526);
			func_302(159921796);
			func_302(-1739900853);
			func_313(2113454609);
		}
		else
		{
			func_313(-90228526);
			func_313(159921796);
			func_313(-1739900853);
			func_302(2113454609);
		}
	
		func_314(1);
	
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
	
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
	}

	if (func_310(-63926460))
	{
		func_313(1929440211);
		func_313(2126897368);
		func_302(-833857740);
		func_302(-825836321);
	
		if (func_310(1665756137))
		{
			func_302(-1718055184);
			func_328("han_nav_endless_summer");
			func_327("han_nav_endless_summer_marston4");
		}
		else
		{
			func_313(-1718055184);
			func_328("han_nav_endless_summer_marston4");
			func_327("han_nav_endless_summer");
		}
	}
	else
	{
		func_313(-833857740);
		func_313(-825836321);
		func_313(-1718055184);
		func_328("han_nav_endless_summer");
		func_328("han_nav_endless_summer_marston4");
		func_302(1929440211);
	}

	if (func_310(374115931))
	{
		func_304(164);
		func_327("bvh_nav_endless_summer");
	}
	else
	{
		func_314(164);
		func_328("bvh_nav_endless_summer");
	}

	if (func_310(1982676972))
		func_304(20);
	else
		func_314(20);

	if (func_310(-2034257789))
	{
		STREAMING::REQUEST_IPL_HASH(joaat("six_point_lights_on"));
		func_314(22);
		func_314(24);
		func_304(21);
		func_304(23);
	}
	else
	{
		STREAMING::REMOVE_IPL_HASH(joaat("six_point_lights_on"));
		func_314(21);
		func_314(23);
		func_304(22);
		func_304(24);
	}

	if (func_310(-1014145132))
		func_304(200);
	else
		func_314(200);

	if (func_310(-1840704908))
		func_304(201);
	else
		func_314(201);

	if (func_27() == -1)
		if (func_310(-1053549743))
			func_334(65536, true);
		else
			func_334(65536, false);

	func_335();

	if (func_310(-2073072369))
	{
		func_302(1343484786);
		func_302(1989074279);
		func_327("sad3_nav_rhodes_shootout_00");
	}
	else if (func_310(-1674179981))
	{
		if (func_310(-1053549743))
		{
			func_302(1871051363);
			func_302(-2144587490);
			func_302(1033721560);
			func_327("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(1871051363);
			func_302(-2144587490);
			func_327("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (func_310(-1835851517))
	{
		if (func_310(-1053549743))
		{
			func_302(-2144587490);
			func_302(1033721560);
			func_327("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(-2144587490);
			func_327("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (func_310(-1838352012))
	{
		if (func_310(-1053549743))
		{
			func_302(146746575);
			func_302(1033721560);
			func_327("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(146746575);
			func_327("rho_nav_grave_norm_gry3_off");
		}
	}

	if (func_310(-644722288))
	{
		func_313(1882605165);
		func_302(869642051);
	}
	else
	{
		func_313(869642051);
		func_302(1882605165);
	}

	if (func_310(1691618738))
	{
		func_313(-184821200);
		func_302(-490818122);
		func_302(1412515639);
		func_302(-1377139506);
	}
	else
	{
		func_302(-184821200);
		func_313(-490818122);
		func_313(1412515639);
		func_313(-1377139506);
	}

	if (func_310(-741351766))
	{
		func_314(130);
		func_304(131);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
	}
	else
	{
		func_314(131);
		func_304(130);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
	}

	if (func_310(-1717960576))
	{
		func_314(133);
		func_304(132);
	}
	else if (func_310(210001842))
	{
		func_314(132);
		func_304(133);
	}

	if (func_310(-1164215952))
	{
		func_313(1603294144);
		func_302(349486662);
		func_314(144);
		func_304(143);
	}
	else
	{
		func_313(349486662);
		func_302(1603294144);
		func_314(143);
		func_304(144);
	}

	if (func_310(-1236261996))
	{
		func_313(897455211);
		func_313(774477221);
		func_302(1136898294);
		func_302(1097534152);
		func_314(146);
		func_304(145);
	}
	else
	{
		func_313(1136898294);
		func_313(1097534152);
		func_302(897455211);
		func_302(774477221);
		func_314(145);
		func_304(146);
	}

	if (func_310(-1799960545))
	{
		func_314(170);
		func_304(169);
	}
	else
	{
		func_314(169);
		func_304(170);
	}

	if (func_310(-628542779))
		func_304(180);
	else
		func_314(180);

	if (func_310(1500064347))
	{
		func_302(724436573);
		func_313(-1475403379);
	}
	else
	{
		func_302(-1475403379);
		func_313(724436573);
	}

	if (func_310(-1741667789))
		func_314(179);
	else
		func_304(179);

	if (func_310(-853383233))
	{
		if (func_27() == -1)
		{
			if (!func_336(70, 32))
			{
				func_320(70, 32);
				func_337(70);
			}
		}
	}
	else if (func_27() == -1)
	{
		if (func_336(70, 32))
		{
			func_319(70, 32);
			func_338(70);
		}
	}

	if (func_310(-334729750))
	{
		func_302(1138093977);
		func_327("wat_nav_grave");
	}
	else
	{
		func_313(1138093977);
		func_328("wat_nav_grave");
	}

	if (func_310(1926308480))
	{
		func_313(1849913721);
		func_302(573576705);
	}
	else if (func_310(280705402))
	{
		func_302(1849913721);
		func_313(573576705);
	}
	else if (func_310(1766284049))
	{
		func_313(1849913721);
		func_313(573576705);
	}

	if (func_310(-150493654))
	{
		func_313(-848315456);
		func_313(105426297);
		func_313(2095421392);
		func_313(-1614141377);
		func_313(45121961);
		func_313(-7594117);
		func_313(1388161943);
		func_302(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.2462f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[0]);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[1]);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[2]);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[3]);
	
		func_328("utp2_nav_tree_fallen");
	}
	else if (func_310(-1271608261))
	{
		func_313(-642132908);
		func_313(105426297);
		func_313(-1614141377);
		func_313(45121961);
		func_313(-7594117);
		func_313(1388161943);
		func_302(2095421392);
		func_302(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.0114f, -32.44423f, 38f, -1186.8292f, -18.19722f, 45f, 6, 1);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[0]);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.5449f, -25.3265f, 42.664f, 1f, 13f, 1f, 15f, false, 7);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[1]);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.8617f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
	
		func_328("utp2_nav_tree_fallen");
	}
	else if (func_310(1846061697))
	{
		func_313(-642132908);
		func_313(2095421392);
		func_313(105426297);
		func_313(-7594117);
		func_302(45121961);
		func_302(-1614141377);
		func_302(-848315456);
		func_302(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.0114f, -32.44423f, 38f, -1186.8292f, -18.19722f, 45f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.5438f, -4.74933f, 38f, -1163.4243f, -13.43965f, 42f, 6, 1);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[0]);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.5449f, -25.3265f, 41.664f, 1f, 13f, 3f, 15f, false, 7);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[1]);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.8617f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
	
		func_327("utp2_nav_tree_fallen");
	}
	else if (func_310(-1145519186))
	{
		func_313(-642132908);
		func_313(-848315456);
		func_313(-1614141377);
		func_313(45121961);
		func_313(2095421392);
		func_313(-7594117);
		func_313(1388161943);
		func_302(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.2462f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[0]);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[1]);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[2]);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&Global_1934765.f_5[3]);
	
		func_328("utp2_nav_tree_fallen");
	}

	if (!func_339(51))
	{
		if (func_310(1485494263))
		{
			func_313(1672215059);
			func_313(-1177027698);
			func_313(23211744);
			func_313(604668055);
			func_313(joaat("des_ntvs2_treefall"));
			func_302(1708195603);
			func_327("nts2_fallen_tree_ridge");
		}
		else
		{
			func_313(23211744);
			func_313(604668055);
			func_313(1708195603);
			func_302(joaat("des_ntvs2_treefall"));
			func_302(1672215059);
			func_302(-1177027698);
			func_328("nts2_fallen_tree_ridge");
		}
	}

	if (func_27() == -1)
	{
		if (func_310(-811637947))
		{
			if (func_336(497, 32))
			{
				func_319(497, 32);
				func_338(497);
			}
		
			if (func_336(498, 32))
			{
				func_319(498, 32);
				func_338(498);
			}
		}
		else
		{
			if (!func_336(497, 32))
			{
				func_320(497, 32);
				func_337(497);
			}
		
			if (!func_336(498, 32))
			{
				func_320(498, 32);
				func_337(498);
			}
		}
	}

	if (func_310(106479759))
	{
		func_313(-1403908542);
		func_313(1598834669);
		func_313(1299817544);
		func_313(1204787444);
		func_313(66523468);
		func_313(2040259178);
		func_313(1947806010);
		func_328("str_nav_construction_stage_0");
		func_328("str_nav_construction_stage_1");
		func_328("str_nav_construction_stage_2");
		func_328("str_nav_construction_stage_3");
		func_302(1924458218);
		func_327("utp1_bridge_cover");
	}
	else
	{
		func_313(1924458218);
		func_328("utp1_bridge_cover");
	
		if (func_310(198200492))
		{
			func_313(1299817544);
			func_313(1204787444);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_2");
			func_328("str_nav_construction_stage_3");
			func_302(-1403908542);
			func_302(1598834669);
			func_327("str_nav_construction_stage_0");
		
			if (func_27() == -1)
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("str_wood_chop_wife"), "Strawberry/Str_Wood_Chop_Wife");
		
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (func_310(-1124061431))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1204787444);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_2");
			func_328("str_nav_construction_stage_3");
			func_302(1299817544);
			func_327("str_nav_construction_stage_1");
		
			if (func_27() == -1)
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("str_wood_chop_wife"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
		
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_310(52706132))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1299817544);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_3");
			func_302(1204787444);
			func_327("str_nav_construction_stage_2");
		
			if (func_27() == -1)
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("str_wood_chop_wife"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
		
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_310(-259123672))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1299817544);
			func_313(1204787444);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_2");
			func_302(66523468);
			func_302(2040259178);
			func_302(1947806010);
			func_327("str_nav_construction_stage_3");
		
			if (func_27() == -1)
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("str_wood_chop_wife"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
		
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}

	if (func_310(-356975260))
	{
		func_313(73781828);
		func_302(-391567710);
	}
	else
	{
		func_313(-391567710);
		func_302(73781828);
	}

	if (func_310(-2106214197))
	{
	}
	else
	{
		func_310(-1029225159);
	}

	if (func_310(757752139))
		func_314(168);
	else
		func_304(168);

	if (func_310(1609506757))
	{
		func_302(-205116461);
		func_302(-1490034522);
		func_313(-1473336090);
		func_313(-1013403664);
	
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
	
		func_314(158);
	
		if (!func_339(47))
			func_304(159);
		else
			func_314(159);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
	
		if (func_310(439465264))
		{
			func_304(155);
			func_314(154);
			func_304(157);
			func_314(156);
		}
		else
		{
			func_304(156);
			func_340(156);
			func_304(154);
			func_314(155);
			func_314(157);
		}
	}
	else
	{
		func_302(-1473336090);
		func_302(-1013403664);
		func_313(-205116461);
		func_313(-1490034522);
		Global_1934765.f_289 = 0;
		func_314(154);
		func_314(155);
		func_314(157);
		func_314(156);
		func_314(159);
		func_304(158);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_341(-179f), false, 7);
	}

	if (func_310(-2021582629) && func_342())
	{
		func_313(432272547);
		func_302(204868257);
		func_327("nav_sdn_fundraiser");
	}
	else
	{
		func_313(204868257);
		func_302(432272547);
		func_328("nav_sdn_fundraiser");
	}

	if (func_310(-1232809834))
	{
		func_313(206289712);
		func_302(-1225383143);
	}
	else
	{
		func_313(-1225383143);
		func_302(206289712);
	}

	if (func_310(141950038))
	{
		func_313(-473077489);
		func_302(619024057);
		func_302(-836433697);
		func_325(586229709, 1);
	}
	else
	{
		func_313(-836433697);
		func_313(619024057);
		func_302(-473077489);
		func_269(586229709, 1);
	}

	if (func_310(544152906))
	{
		func_313(1821956151);
		func_302(-704461521);
	}
	else
	{
		func_313(-704461521);
		func_302(1821956151);
	}

	if (func_310(26054262))
		func_304(166);
	else
		func_314(166);

	if (func_310(-503955743))
		func_304(167);
	else
		func_314(167);

	if (func_310(945612176))
	{
		func_304(161);
		func_304(163);
		func_314(160);
		func_314(162);
	}
	else
	{
		func_304(160);
		func_304(162);
		func_314(161);
		func_314(163);
	}

	if (func_310(-1706438978))
	{
		func_304(142);
		func_314(141);
	}
	else
	{
		func_314(141);
		func_314(142);
	}

	if (func_310(94263042))
	{
		func_302(-1499162505);
		func_302(joaat("amb_camp_grz_finale2"));
	
		if (func_310(-2106445152))
		{
			func_313(-1832103801);
			func_314(230);
			func_328("fin2_micah_hideout");
			func_327("fin2_micah_hideout_abandon");
		}
		else
		{
			func_302(-1832103801);
			func_304(230);
			func_328("fin2_micah_hideout_abandon");
			func_327("fin2_micah_hideout");
		}
	}
	else
	{
		func_313(-1499162505);
		func_313(joaat("amb_camp_grz_finale2"));
		func_313(-1832103801);
		func_314(230);
		func_328("fin2_micah_hideout");
		func_328("fin2_micah_hideout_abandon");
	}

	if (func_310(-25901845))
	{
		func_313(-468702164);
		func_314(192);
		func_302(-1436188587);
		func_304(191);
	}
	else
	{
		func_313(-1436188587);
		func_314(191);
		func_302(-468702164);
		func_304(192);
	}

	if (func_310(-75024673))
		func_302(1573766063);
	else
		func_313(1573766063);

	if (func_310(1250636944))
		func_302(-892659042);
	else
		func_313(-892659042);

	if (func_310(-1831552326))
	{
		func_304(194);
		func_314(195);
	}
	else
	{
		func_304(195);
		func_314(194);
	}

	if (func_310(-1151084372))
		func_304(196);
	else
		func_314(196);

	if (func_310(1064154891))
	{
		func_304(19);
		func_314(18);
	}
	else
	{
		func_304(18);
		func_314(19);
	}

	if (func_310(1822001510))
	{
	}
	else
	{
		func_310(-1612662716);
	}

	if (func_310(689930684))
		func_304(176);
	else
		func_314(176);

	if (func_310(-1957523409))
		func_304(177);
	else
		func_314(177);

	if (func_310(1306158345))
	{
		func_313(943998860);
		func_313(joaat("carni_nbd_kittykitty_brokewagon01"));
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_343(joaat("carni_nbd_kittykitty_brokewagon01"));
	}
	else if (func_310(1952610440))
	{
		func_313(943998860);
		func_302(joaat("carni_nbd_kittykitty_brokewagon01"));
		func_302(580700069);
		func_302(1347068672);
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_327("HKK_Trashed_Wagons");
		func_344(joaat("carni_nbd_kittykitty_brokewagon01"));
	}
	else if (func_310(-223469678))
	{
		func_302(943998860);
		func_302(joaat("carni_nbd_kittykitty_brokewagon01"));
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Camp_Only");
		func_327("HKK_Part_Fixed");
		func_344(joaat("carni_nbd_kittykitty_brokewagon01"));
	}
	else if (func_310(-404698347))
	{
		func_302(943998860);
		func_313(joaat("carni_nbd_kittykitty_brokewagon01"));
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_327("HKK_Camp_Only");
		func_344(joaat("carni_nbd_kittykitty_brokewagon01"));
	}
	else if (func_310(1517904467))
	{
		func_313(943998860);
		func_313(joaat("carni_nbd_kittykitty_brokewagon01"));
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_343(joaat("carni_nbd_kittykitty_brokewagon01"));
	}

	if (func_310(-1405998267))
		func_302(2015532863);
	else
		func_313(2015532863);

	if (func_310(-468693731))
	{
		func_313(-800942395);
		func_302(-741366935);
	}
	else
	{
		func_313(-741366935);
		func_302(-800942395);
	}

	if (func_310(-238080464))
	{
		func_302(-1579403437);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
	}
	else
	{
		func_313(-1579403437);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
	}

	if (func_310(1607768502))
	{
		func_302(808576710);
		func_313(-775951892);
		func_313(1547403545);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	else if (func_310(-1852605133))
	{
		func_302(1547403545);
		func_313(-775951892);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	else if (func_310(-129643890))
	{
		func_302(-660075384);
		func_313(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
	}
	else if (func_310(-1433686245))
	{
		func_302(137316925);
		func_313(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(-660075384);
	}
	else
	{
		func_302(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}

	if (func_310(192515737))
	{
		func_302(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(426191476))
	{
		func_302(-2142987163);
		func_313(1104143966);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(187862543))
	{
		func_302(1027093524);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(417081698))
	{
		func_302(1879779330);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(791041526))
	{
		func_302(-1617847332);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(317070801);
	}
	else
	{
		func_302(317070801);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
	}

	if (func_345(45))
	{
		if (func_310(-1838712533))
		{
			func_302(-771786794);
			func_313(-1267247536);
			func_313(-468635897);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
		else if (func_310(1140218954))
		{
			func_302(-1267247536);
			func_313(-468635897);
			func_313(-771786794);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
		else
		{
			func_302(-468635897);
			func_313(-771786794);
			func_313(-1267247536);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
	}
	else if (func_310(-1257057567))
	{
		func_302(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(-1419919497))
	{
		func_302(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(-1718674470))
	{
		func_302(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(-35658630))
	{
		func_302(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else
	{
		func_302(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}

	if (func_310(-108307814))
	{
		func_313(-205505701);
		func_302(-51262018);
	}
	else
	{
		func_313(-51262018);
		func_302(-205505701);
	}

	if (func_310(-1123615607))
	{
		func_313(874022542);
		func_313(joaat("des_dis_alchemist"));
		func_302(552030279);
		func_327("disco_nav_alchemist_house_burnt");
	}
	else
	{
		func_313(552030279);
		func_328("disco_nav_alchemist_house_burnt");
		func_302(874022542);
		func_302(joaat("des_dis_alchemist"));
	}

	if (func_310(-261141318))
		func_302(-531198053);
	else
		func_313(-531198053);

	func_302(-791673850);
	func_302(-395621323);
	func_302(-1799943886);
	func_302(-1436313374);
	func_302(1473078398);
	func_313(-2116659774);
	func_302(-953275122);
	func_302(-893624314);
	func_302(1193359531);
	func_302(1145227353);
	func_302(1915867459);
	func_302(98482444);
	func_302(26932594);
	func_302(-1930879809);
	func_302(46370274);
	func_302(-1279036865);
	func_302(781058494);
	func_302(1467466015);
	func_302(-363626454);
	func_302(-1314125880);
	func_302(1763246099);
	func_302(-593457329);
	func_302(274045919);
	func_302(-1047394327);
	func_302(-1535282356);
	func_302(-1816233372);
	func_302(-551038153);
	func_302(-1022426685);
	func_302(-262759679);
	func_302(976641588);
	func_302(1601053042);
	func_313(453346329);
	func_302(-1233192626);
	func_313(-620856989);
	func_302(1262164851);
	func_302(-755250900);
	func_328("disco_nav_circus_wagon_off");
	func_302(658964321);

	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);

	func_304(202);
	func_304(231);

	if (func_310(1015669983))
	{
		func_313(317070801);
		func_302(-763477089);
	}
	else
	{
		func_313(-763477089);
		func_302(317070801);
	}

	if (func_310(1867912207))
	{
		func_314(175);
		func_304(174);
	}
	else
	{
		func_314(174);
		func_304(175);
	}

	if (func_310(-534215902))
		func_314(197);
	else
		func_304(197);

	if (func_310(-9438024))
	{
		func_314(173);
		func_304(171);
		func_304(172);
	}
	else
	{
		func_304(173);
		func_314(171);
		func_314(172);
	}

	if (func_310(-1223121209))
	{
		func_313(1886602884);
		func_313(-1640200357);
		func_302(-1280884206);
	}
	else if (func_310(630808005))
	{
		func_313(-1280884206);
		func_302(1886602884);
		func_302(-1640200357);
	}
	else
	{
		func_313(-1280884206);
		func_313(-1640200357);
		func_302(1886602884);
	}

	if (func_310(1453909576))
	{
		func_313(-2127665186);
		func_313(-451832572);
		func_313(-689352221);
		func_313(1854980771);
		func_313(325677491);
		func_313(-391187090);
		func_313(1513363974);
		func_313(-1349539327);
		func_313(1963724330);
		func_302(-1902184438);
		func_302(1236921921);
		func_302(740012805);
	}
	else if (func_310(1643531967))
	{
		func_313(-1902184438);
		func_313(-689352221);
		func_313(1236921921);
		func_313(-391187090);
		func_313(740012805);
		func_313(1963724330);
		func_302(-2127665186);
		func_302(-451832572);
		func_302(1854980771);
		func_302(325677491);
		func_302(1513363974);
		func_302(-1349539327);
	}
	else
	{
		func_313(-1902184438);
		func_313(-451832572);
		func_313(1236921921);
		func_313(325677491);
		func_313(740012805);
		func_313(-1349539327);
		func_302(-2127665186);
		func_302(-689352221);
		func_302(1854980771);
		func_302(-391187090);
		func_302(1513363974);
		func_302(1963724330);
	}

	if (func_310(1164928979))
	{
		func_313(-1366431554);
		func_302(-960136064);
	}
	else
	{
		func_313(-960136064);
		func_302(-1366431554);
	}

	if (func_310(527226204))
	{
		func_313(-2122914678);
		func_302(-518004776);
	}
	else
	{
		func_313(-518004776);
		func_302(-2122914678);
	}

	if (func_310(1944170089))
	{
		func_302(1210820782);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
	}
	else
	{
		func_313(1210820782);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
	}

	if (func_310(1213993593))
	{
		func_302(-520400509);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
	}
	else
	{
		func_313(-520400509);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
	}

	if (func_310(1216784232))
	{
		func_302(-1813544782);
	
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
	}
	else
	{
		func_313(-1813544782);
	
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
	}

	if (func_310(1410198831))
	{
		func_302(joaat("reg_hrt_hunting02"));
		func_344(joaat("reg_hrt_hunting02"));
	}
	else
	{
		func_313(joaat("reg_hrt_hunting02"));
		func_343(joaat("reg_hrt_hunting02"));
	}

	if (func_310(-538889627))
	{
		if (func_346(536870912) == false)
		{
			func_347(536870912);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_pronghornranch"), -2550f, 400f, 0, 0);
		}
	
		func_313(1221694281);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_328("pro_empty_nav");
		func_328("pro_fence_fixed_nav");
		func_328("pro_burned_nav");
		func_302(1423681694);
		func_302(775893260);
		func_302(joaat("pro_mansion_int_milo"));
		func_302(joaat("pro_barn_int_milo"));
		func_302(1031662866);
		func_302(-1041976064);
		func_302(joaat("pro_es_01_workerhouse"));
		func_302(-436084091);
		func_302(-868830916);
		func_302(joaat("pro_wrkshp_int_milo"));
		func_302(-262959893);
		func_302(1049886174);
		func_302(-1042390616);
		func_302(2038589758);
		func_327("pro_fence_broken_nav");
	
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
	
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_310(-1056767524))
	{
		if (func_346(536870912) == false)
		{
			func_347(536870912);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_pronghornranch"), -2550f, 400f, 0, 0);
		}
	
		func_313(-436084091);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_328("pro_empty_nav");
		func_328("pro_fence_broken_nav");
		func_328("pro_burned_nav");
		func_302(1423681694);
		func_302(775893260);
		func_302(-329355129);
		func_302(2117211184);
		func_302(joaat("pro_mansion_int_milo"));
		func_302(joaat("pro_barn_int_milo"));
		func_302(1031662866);
		func_302(-1041976064);
		func_302(joaat("pro_es_01_workerhouse"));
		func_302(1221694281);
		func_302(-868830916);
		func_302(joaat("pro_wrkshp_int_milo"));
		func_302(-262959893);
		func_302(1049886174);
		func_302(-1042390616);
		func_302(2038589758);
		func_327("pro_fence_fixed_nav");
	
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
	
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_310(-182889087))
	{
		if (func_346(536870912) == false)
		{
			func_347(536870912);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_pronghornranch"), -2550f, 400f, 0, 0);
		}
	
		func_313(-436084091);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-1042390616);
		func_328("pro_empty_nav");
		func_328("pro_fence_broken_nav");
		func_328("pro_fence_fixed_nav");
		func_302(1423681694);
		func_302(joaat("pro_mansion_int_milo"));
		func_302(joaat("pro_barn_int_milo"));
		func_302(1031662866);
		func_302(-1041976064);
		func_302(joaat("pro_es_01_workerhouse"));
		func_302(1221694281);
		func_302(-868830916);
		func_302(joaat("pro_wrkshp_int_milo"));
		func_302(-262959893);
		func_302(1049886174);
		func_302(-118700196);
		func_302(-735136865);
		func_302(636278554);
		func_302(2038589758);
		func_327("pro_burned_nav");
	
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
	
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (func_346(536870912))
		{
			func_349(536870912);
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_pronghornranch"));
		}
	
		func_313(1423681694);
		func_313(joaat("pro_mansion_int_milo"));
		func_313(joaat("pro_barn_int_milo"));
		func_313(1031662866);
		func_313(-1041976064);
		func_313(joaat("pro_es_01_workerhouse"));
		func_313(1221694281);
		func_313(-436084091);
		func_313(joaat("pro_wrkshp_int_milo"));
		func_313(-262959893);
		func_313(1049886174);
		func_313(-1042390616);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_313(2038589758);
		func_313(775893260);
		func_328("pro_fence_broken_nav");
		func_328("pro_fence_fixed_nav");
		func_328("pro_burned_nav");
		func_302(-1552951782);
		func_302(-1142569437);
		func_302(474113610);
		func_302(-297340751);
		func_302(-868830916);
		func_302(1802934313);
		func_302(2108112010);
		func_302(1208537422);
		func_302(361734047);
		func_302(446554495);
		func_327("pro_empty_nav");
	
		if (func_27() == -1)
		{
			func_322(22, 16);
			func_350(22);
		}
	
		if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2) && !bParam1)
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
				Global_1934765.f_2 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(Global_1888801[22 /*35*/].f_4, false, 15);
	}

	if (func_310(2019386373))
	{
		func_313(-217646849);
		func_313(-694809996);
		func_313(-2053475031);
		func_302(-279703229);
		func_302(-623091266);
	}
	else if (func_310(-664252410))
	{
		func_313(-279703229);
		func_313(-2053475031);
		func_302(-217646849);
		func_302(-694809996);
		func_302(-623091266);
	}
	else if (func_310(2109952320))
	{
		func_313(-279703229);
		func_313(-217646849);
		func_313(-623091266);
		func_302(-694809996);
		func_302(-2053475031);
	}

	if (func_310(2024121624))
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	else
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);

	if (func_310(-1077783786))
	{
		func_313(-961488528);
		func_302(-1569624057);
	}
	else
	{
		func_313(-1569624057);
		func_302(-961488528);
	}

	if (func_310(-299522880))
	{
		func_302(131323483);
		func_313(-134556459);
	}
	else
	{
		func_313(131323483);
		func_302(-134556459);
	}

	if (func_345(45))
	{
		func_313(joaat("wap_rainsfalls_base"));
		func_313(661576070);
		func_313(795060201);
		func_313(1003623269);
		func_313(-395621323);
		func_313(-924329535);
		func_302(739805687);
		func_302(-243627670);
		func_302(-198004806);
		func_327("nav_wapiti_es");
	}
	else
	{
		func_313(739805687);
		func_313(-243627670);
		func_313(-198004806);
		func_328("nav_wapiti_es");
		func_302(1003623269);
		func_302(-924329535);
		func_302(-395621323);
	
		if (func_310(-389056691))
		{
			func_313(661576070);
			func_302(joaat("wap_rainsfalls_base"));
			func_302(795060201);
		}
		else
		{
			func_313(795060201);
			func_302(joaat("wap_rainsfalls_base"));
			func_302(661576070);
		}
	}

	if (func_310(-1824738758))
		func_302(1489268640);
	else
		func_313(1489268640);

	func_351();

	if (func_310(1221801385))
	{
		if (!Global_1934765.f_297)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_houseboat"), 2300f, -330f, 0, 0);
			Global_1934765.f_297 = 1;
		}
	}
	else if (Global_1934765.f_297)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_houseboat"));
		Global_1934765.f_297 = 0;
	}

	if (func_310(-306246697))
	{
		if (!Global_1934765.f_298)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_vanhornboat"), 3012.5f, 507.5f, 0, 0);
			Global_1934765.f_298 = 1;
		}
	}
	else if (Global_1934765.f_298)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_vanhornboat"));
		Global_1934765.f_298 = 0;
	}

	if (func_310(-1847672446))
	{
		if (!Global_1934765.f_299)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_stdenisboat"), 2700f, -1600f, 0, 0);
			Global_1934765.f_299 = 1;
		}
	}
	else if (Global_1934765.f_299)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_stdenisboat"));
		Global_1934765.f_299 = 0;
	}

	if (!func_310(-789397228))
	{
		func_302(-614421509);
		func_302(604920544);
		func_302(joaat("ser_01_grandkor3"));
	
		if (func_310(-2022369555))
		{
			func_302(-1716205818);
			func_313(-276259505);
		}
		else
		{
			func_302(-276259505);
			func_313(-1716205818);
		}
	
		if (!Global_1934765.f_295 && func_352(5))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_grandkorriganboat"), 3290f, -1310f, 0, 0);
			Global_1934765.f_295 = 1;
			MAP::_MAP_DISCOVER_REGION(1944800674);
		}
	}
	else
	{
		func_313(-614421509);
		func_313(604920544);
		func_313(joaat("ser_01_grandkor3"));
		func_313(-276259505);
		func_313(-1716205818);
	
		if (Global_1934765.f_295)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_grandkorriganboat"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
		}
	}

	if (func_310(1358491857))
	{
		func_302(1056170594);
		func_302(-873881483);
		func_302(146172383);
	
		if (func_310(723021499))
		{
			func_302(joaat("new_boats_01_grandkor3"));
			func_313(1157695860);
		}
		else
		{
			func_302(1157695860);
			func_313(joaat("new_boats_01_grandkor3"));
		}
	
		if (!Global_1934765.f_294 && func_352(5))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_grandkorriganboatdocked"), 2870f, -1400f, 0, 0);
			Global_1934765.f_294 = 1;
			MAP::_MAP_DISCOVER_REGION(-296815465);
		}
	}
	else
	{
		func_313(1056170594);
		func_313(-873881483);
		func_313(joaat("new_boats_01_grandkor3"));
		func_313(1157695860);
		func_313(146172383);
	
		if (Global_1934765.f_294)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_grandkorriganboatdocked"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
		}
	}

	func_353();
	TEXT_LABEL_ASSIGN_STRING(&unk, "nav_sdn_docks_", 64);

	if (func_310(1358491857))
		TEXT_LABEL_APPEND_STRING(&unk, "korrigan_", 64);

	if (func_310(-1825294305))
	{
		TEXT_LABEL_APPEND_STRING(&unk, "antenor_", 64);
		func_302(-445068262);
		func_302(-1688366042);
	
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
	}
	else
	{
		func_313(-445068262);
		func_313(-1688366042);
	
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
	}

	if (func_310(522677506))
	{
		func_302(1048677741);
		func_302(-2035101386);
		func_302(1284188544);
		func_302(1520435387);
		func_302(876228895);
		TEXT_LABEL_APPEND_STRING(&unk, "trains_", 64);
	}
	else
	{
		func_313(1048677741);
		func_313(-2035101386);
		func_313(1284188544);
		func_313(1520435387);
		func_313(876228895);
	}

	if (!func_345(45))
	{
		func_313(-274080837);
		func_313(-1036688493);
		func_313(-1512794226);
		func_313(913995529);
		func_302(481139295);
		func_302(165972019);
		func_302(1679182807);
		func_302(-1986089134);
		TEXT_LABEL_APPEND_STRING(&unk, "pre_es", 64);
	}
	else
	{
		func_313(481139295);
		func_313(165972019);
		func_313(1679182807);
		func_313(-1986089134);
		func_302(-274080837);
		func_302(-1036688493);
		func_302(-1512794226);
		func_302(913995529);
		TEXT_LABEL_APPEND_STRING(&unk, "es", 64);
	}

	func_327(&unk);

	if (func_310(171499483))
	{
		func_313(-890900091);
		func_302(-1758697759);
	}
	else
	{
		func_313(-1758697759);
		func_302(-890900091);
	}

	if (func_310(235928616))
	{
		func_313(joaat("com_muleshed"));
		func_313(1926336063);
		func_313(-800534102);
		func_328("nav_crn1_barn");
		func_302(-886310806);
		func_327("nav_crn1_barn_burnt");
	}
	else
	{
		func_313(-886310806);
		func_328("nav_crn1_barn_burnt");
		func_302(joaat("com_muleshed"));
		func_302(1926336063);
		func_302(-800534102);
		func_327("nav_crn1_barn");
	}

	if (func_310(345808947))
	{
		func_314(190);
		func_304(189);
	}
	else
	{
		func_314(189);
		func_304(190);
	}

	if (func_310(1167397384))
		func_313(1736386364);
	else
		func_302(1736386364);

	if (func_310(2024769126))
		func_313(516817794);
	else
		func_302(516817794);

	if (func_310(-154581735))
		func_313(-262371610);
	else
		func_302(-262371610);

	if (func_310(-1530132748))
		func_313(-389510791);
	else
		func_302(-389510791);

	if (func_310(976539083))
		func_313(71064384);
	else
		func_302(71064384);

	func_302(579127040);
	func_302(-2011620387);

	if (func_310(409602249))
		func_302(677191274);
	else
		func_313(677191274);

	if (func_310(651395116))
		func_302(joaat("dis_scm_00_kieran_grave"));
	else
		func_313(joaat("dis_scm_00_kieran_grave"));

	if (func_310(1488286867))
		func_302(516308968);
	else
		func_313(516308968);

	if (func_310(665676602))
		func_302(1308321372);
	else
		func_313(1308321372);

	if (func_310(8924991))
		func_302(-449454773);
	else
		func_313(-449454773);

	if (func_310(932909855))
	{
		func_302(-1754541271);
		func_302(-1363999915);
		func_302(-1116430120);
	}
	else
	{
		func_313(-1754541271);
		func_313(-1363999915);
		func_313(-1116430120);
	}

	if (func_310(2051822093))
		func_302(-163883900);
	else
		func_313(-163883900);

	if (func_310(-1241340344))
		func_302(-1010679388);
	else
		func_313(-1010679388);

	if (func_310(-1558439474))
		func_302(1033367448);
	else
		func_313(1033367448);

	if (func_310(2077022393))
	{
		func_313(391022529);
		func_313(-1560636071);
		func_313(1870870569);
		func_313(-904833761);
		func_313(1713084298);
		func_313(928528900);
		func_302(-2118853492);
		func_302(-597126658);
	}
	else
	{
		func_313(-2118853492);
		func_313(-597126658);
	
		if (func_310(1583012985))
		{
			func_313(391022529);
			func_313(-1560636071);
			func_302(1713084298);
		}
		else
		{
			func_313(1713084298);
			func_302(391022529);
			func_302(-1560636071);
		}
	
		if (func_310(479419429))
		{
			func_313(1870870569);
			func_313(-904833761);
			func_302(928528900);
		}
		else
		{
			func_313(928528900);
			func_302(1870870569);
			func_302(-904833761);
		}
	}

	if (func_310(-1556423728))
		func_302(-1023331176);
	else
		func_313(-1023331176);

	if (func_310(-144653976))
		func_302(-1809571159);
	else
		func_313(-1809571159);

	if (func_310(-351362068))
		func_302(-2071756699);
	else
		func_313(-2071756699);

	if (func_310(-939114198))
		func_302(-1625703283);
	else
		func_313(-1625703283);

	if (func_310(-1318987693))
		func_302(-1696865897);
	else
		func_313(-1696865897);

	if (func_310(-545450213))
	{
		func_313(-1950049852);
		func_302(-724913398);
	}
	else
	{
		func_313(-724913398);
		func_302(-1950049852);
	}

	func_328("railroad_stageMP");

	if (func_310(-2101264851))
	{
		func_302(1858796535);
		func_302(945532872);
		func_302(-2043326480);
		func_302(992791293);
		func_302(-1815023148);
		func_302(731209239);
		func_302(1531008020);
		func_302(-952533419);
		func_302(582879672);
		func_302(1750312025);
		func_302(-759698431);
		func_302(59954835);
		func_302(-1461922204);
		func_302(2079207010);
		func_302(-1360840312);
		func_302(-816857367);
	}
	else
	{
		func_313(1858796535);
		func_313(945532872);
		func_313(-2043326480);
		func_313(992791293);
		func_313(-1815023148);
		func_313(731209239);
		func_313(1531008020);
		func_313(-952533419);
		func_313(582879672);
		func_313(1750312025);
		func_313(-759698431);
		func_313(59954835);
		func_313(-1461922204);
		func_313(2079207010);
		func_313(-1360840312);
		func_313(-816857367);
	}

	if (func_310(434558613))
	{
		func_302(-715865581);
		func_313(-1387511711);
		func_313(1901132483);
		func_313(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		func_328("rmllr_cabin_normal");
		func_327("rmllr_cabin_burnt");
	}
	else
	{
		func_302(-1387511711);
		func_302(1901132483);
		func_313(-2082345587);
		func_313(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		func_328("rmllr_cabin_burnt");
		func_327("rmllr_cabin_normal");
	}

	if (func_310(1186594126))
		func_302(joaat("cvb_murdertree"));
	else
		func_313(joaat("cvb_murdertree"));

	if (func_310(469053995))
		func_302(joaat("m_07_p_murderrock"));
	else
		func_313(joaat("m_07_p_murderrock"));

	if (func_310(476714362))
		func_302(joaat("m_09_p_campfiremurder"));
	else
		func_313(joaat("m_09_p_campfiremurder"));

	if (func_310(1947931439))
	{
		func_302(1628286919);
		func_313(joaat("new_com_07_nohotel"));
		func_313(joaat("new_com_07_win"));
	}
	else
	{
		func_302(joaat("new_com_07_nohotel"));
		func_302(joaat("new_com_07_win"));
		func_313(1628286919);
	}

	if (func_310(-879507474))
	{
		func_313(1928252407);
		func_302(-98843293);
	}
	else
	{
		func_313(-98843293);
		func_302(1928252407);
	}

	if (func_310(1050128548))
		func_302(joaat("re_sp_savagewarning_01"));
	else
		func_313(joaat("re_sp_savagewarning_01"));

	if (func_310(868326136))
		func_302(joaat("re_sp_savagewarning_02"));
	else
		func_313(joaat("re_sp_savagewarning_02"));

	if (func_310(-515561750))
	{
		func_313(-892659042);
		func_313(30201771);
		func_302(517553365);
		func_327("mud4_saloon_fight");
	}
	else if (func_310(26245360))
	{
		func_328("mud4_saloon_fight");
		func_313(30201771);
		func_302(-2083943324);
		func_302(517553365);
		func_327("mud4_saloon_fight_start");
	}
	else
	{
		func_328("mud4_saloon_fight_start");
		func_328("mud4_saloon_fight");
		func_313(517553365);
		func_313(-2083943324);
		func_302(30201771);
	}

	if (func_310(-1060078174))
	{
		if (func_345(45))
		{
			func_313(joaat("k_11_p_mary1_camp"));
			func_328("MS_MARY1_CAMP");
			func_302(joaat("k_11_p_chelonian_camp"));
			func_327("MS_CHELONIAN_CAMP");
		}
		else
		{
			func_313(joaat("k_11_p_chelonian_camp"));
			func_328("MS_CHELONIAN_CAMP");
			func_302(joaat("k_11_p_mary1_camp"));
			func_327("MS_MARY1_CAMP");
		}
	
		func_354(&(Global_1934765.f_17), 928.2264f, 1345.3566f, 194.5221f, 4.5f);
		func_354(&(Global_1934765.f_18), 922.5641f, 1346.6226f, 194.7151f, 3f);
		func_354(&(Global_1934765.f_19), 920.8331f, 1340.1517f, 194.182f, 3.5f);
	}
	else
	{
		func_313(joaat("k_11_p_mary1_camp"));
		func_313(joaat("k_11_p_chelonian_camp"));
		func_355(&(Global_1934765.f_17), 1);
		func_355(&(Global_1934765.f_18), 1);
		func_355(&(Global_1934765.f_19), 1);
	}

	if (func_310(817925178))
		func_302(-1417469821);
	else
		func_313(-1417469821);

	if (func_310(-785605431))
	{
	}
	else
	{
		func_313(146172383);
	}

	if (func_310(1557082963))
	{
		func_313(joaat("c_13_notrap_01"));
		func_313(765343099);
		func_302(-909306169);
	}
	else if (func_310(-350863510))
	{
		func_313(joaat("c_13_notrap_01"));
		func_313(-909306169);
		func_302(765343099);
	}
	else
	{
		func_313(765343099);
		func_313(-909306169);
		func_302(joaat("c_13_notrap_01"));
	}

	if (func_310(-1952856164))
	{
		func_313(-890900091);
		func_313(-1758697759);
		func_302(591001924);
	}
	else if (func_310(249726958))
	{
		func_313(-890900091);
		func_313(591001924);
		func_302(-1758697759);
	}
	else
	{
		func_313(-1758697759);
		func_313(591001924);
		func_302(-890900091);
	}

	if (func_310(-99303535))
	{
		func_313(-2092712551);
		func_302(-1307469679);
	}
	else if (func_310(1433244935))
	{
		func_313(-1307469679);
		func_302(-2092712551);
	}
	else
	{
		func_313(-2092712551);
		func_313(-1307469679);
	}

	func_356(1512816328, joaat("gang_skinaftermath_loc01_01"));
	func_356(1207048789, joaat("gang_skinaftermath_loc02_01"));
	func_356(-1230112817, joaat("gang_skinaftermath_loc03_01"));
	func_356(-1278074582, joaat("gang_skinaftermath_loc01_02"));
	func_356(-1436021162, joaat("gang_skinaftermath_loc02_02"));
	func_356(407136781, joaat("gang_skinaftermath_loc03_02"));

	if (func_310(-978957786))
	{
		func_302(1111220101);
		func_302(1372565859);
		func_302(1644962309);
	
		if (!Global_1934765.f_296 && func_352(127))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_thieveslandingboat"), -1350f, -2300f, 0, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		func_313(1111220101);
		func_313(1372565859);
		func_313(1644962309);
	
		if (Global_1934765.f_296)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_thieveslandingboat"));
			Global_1934765.f_296 = 0;
		}
	}

	if (func_310(559573222))
	{
		func_313(1137646647);
		func_302(-898081380);
	}
	else
	{
		func_313(-898081380);
		func_302(1137646647);
	}

	if (func_310(-1818850842))
		func_313(1584946069);
	else
		func_302(1584946069);

	if (func_310(-792853067))
	{
		func_313(-1828030290);
		func_302(827269092);
	}
	else
	{
		func_302(-1828030290);
		func_313(827269092);
	}

	if (func_310(1151197909))
		func_304(165);
	else
		func_314(165);

	if (func_310(-828139293))
	{
		func_313(1364392658);
		func_302(-794503195);
		func_327("nts3_no_bridge");
	
		if (!Global_1934765.f_293)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_bridgedestroyed"), 512f, 1756f, 0, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		func_313(-794503195);
		func_302(1364392658);
		func_328("nts3_no_bridge");
	
		if (Global_1934765.f_293)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_bridgedestroyed"));
			Global_1934765.f_293 = 0;
		}
	}

	if (func_310(-464836488))
	{
		func_313(-1192199739);
		func_302(-65072454);
	}
	else
	{
		func_313(-65072454);
		func_302(-1192199739);
	}

	if (func_310(-233743613))
		func_302(1692451176);
	else
		func_313(1692451176);

	if (func_310(1203043430))
		func_302(-102951407);
	else
		func_313(-102951407);

	if (func_310(299694527))
		func_302(1833824812);
	else
		func_313(1833824812);

	if (func_357() == 2)
	{
		if (func_310(-1949204933))
		{
			func_313(1734859244);
			func_302(719147410);
		}
		else
		{
			func_302(1734859244);
			func_313(719147410);
		}
	}

	if (!func_339(4))
	{
		if (func_357() == 1 && func_297() == 1)
		{
			if (func_310(442317566))
			{
				func_313(1948051928);
				func_302(1453569688);
			}
			else
			{
				func_302(1948051928);
				func_313(1453569688);
			}
		}
		else
		{
			func_313(1453569688);
			func_313(1948051928);
		}
	}

	if (func_310(-736853952))
	{
		func_302(joaat("mission_sean_1"));
		func_344(joaat("mission_sean_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.7245f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		func_313(joaat("mission_sean_1"));
		func_343(joaat("mission_sean_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.7245f, -839.4881f, 65.44287f, 20f, 1, 1);
	}

	if (func_310(1478132521))
	{
		func_313(1759143160);
		func_302(398639187);
		func_328("reservation_abandoned");
		func_327("nav_sean1_camp");
	}
	else
	{
		func_313(398639187);
		func_302(1759143160);
	}

	if (func_310(-360036154))
	{
		func_313(1136457806);
		func_302(1255880931);
	}
	else
	{
		func_302(1136457806);
		func_313(1255880931);
	}

	if (func_310(2024383613))
	{
		func_313(-753844687);
		func_302(joaat("nat_native1_coh_02"));
		func_327("ntv1_cohutta");
	}
	else
	{
		func_302(-753844687);
		func_313(joaat("nat_native1_coh_02"));
		func_328("ntv1_cohutta");
	}

	if (func_310(-622554983))
	{
		func_302(joaat("nat_native1_army_01"));
		func_327("ntv1_armycamp");
	
		if (!Global_1934765.f_287)
		{
			func_358(798.29254f, 1509.6808f, 203.70471f, 21f, "native1_camp", true, 0, 0, false, -1082130432);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		func_313(joaat("nat_native1_army_01"));
		func_328("ntv1_armycamp");
	
		if (Global_1934765.f_287)
		{
			func_359(798.29254f, 1509.6808f, 203.70471f, 0);
			Global_1934765.f_287 = 0;
		}
	}

	if (func_310(1954026328))
	{
		func_302(-1835067413);
		func_313(-1392150519);
		func_304(226);
	}
	else
	{
		func_302(-1392150519);
		func_313(-1835067413);
		func_314(226);
	}

	if (func_310(-330120947))
		func_302(joaat("sds_well_cover"));
	else
		func_313(joaat("sds_well_cover"));

	if (func_310(-1764522338))
	{
		func_313(joaat("n_1114_watertower01_feud1"));
		func_302(joaat("n_1114_watertower01_default"));
	}
	else
	{
		func_302(joaat("n_1114_watertower01_feud1"));
		func_313(joaat("n_1114_watertower01_default"));
	}

	if (func_310(-76237062))
	{
		func_302(-1085363933);
		func_302(-537740003);
		func_327("trn1_nav_ann_shootout_00");
	}
	else
	{
		func_313(-1085363933);
		func_313(-537740003);
		func_328("trn1_nav_ann_shootout_00");
	}

	if (func_310(-333135263))
		func_302(728046625);
	else
		func_313(728046625);

	if (func_310(885203519))
		func_304(228);
	else
		func_314(228);

	if (func_310(-1080627546))
		func_304(227);
	else
		func_314(227);

	if (func_310(1522511407))
	{
		func_302(-929277449);
		func_302(-723094901);
		func_302(-801609437);
	}
	else
	{
		func_313(-929277449);
		func_313(-723094901);
		func_313(-801609437);
	}

	if (func_310(1446719356))
		func_302(joaat("p_12p_blackwhite_camp"));
	else
		func_313(joaat("p_12p_blackwhite_camp"));

	if (func_310(171107021))
		func_302(joaat("n_11p_blackwhite_setupcamp"));
	else
		func_313(joaat("n_11p_blackwhite_setupcamp"));

	return true;
}

void func_180() // Position - 0xD0D7 Hash - 0xB208E4D4 ^0x975A960B
{
	int i;

	for (i = 0; i < 13; i = i + 1)
	{
		if (Global_1572887.f_12 == -1)
			Global_1934765.f_39[i] = Global_40.f_283[i];
		else
			Global_1934765.f_39[i] = Global_1058888.f_40497[i];
	}

	return;
}

char* func_181(int iParam0) // Position - 0xD12A Hash - 0x43676B95 ^0x333BE5B6
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case joaat("follow_invite"):
			str = "follow_invite";
			break;
	
		case joaat("PRIVATE"):
			str = "private";
			break;
	
		case joaat("last_region"):
			str = "last_region";
			break;
	
		case joaat("benchmark"):
			str = "benchmark";
			break;
	
		case joaat("Handheld"):
			str = "handheld";
			break;
	
		case joaat("open_posse"):
			str = "open_posse";
			break;
	
		case joaat("NEW_GAME"):
			str = "new_game";
			break;
	
		case joaat("demo"):
			str = "demo";
			break;
	
		case joaat("last_location"):
			str = "last_location";
			break;
	
		case joaat("random_region"):
			str = "random_region";
			break;
	
		case 0:
			str = "";
			break;
	
		case joaat("Friendly"):
			str = "friendly";
			break;
	
		case joaat("hardcore"):
			str = "hardcore";
			break;
	
		case joaat("intro_not_done"):
			str = "intro_not_done";
			break;
	
		case joaat("spawn_location"):
			str = "spawn_location";
			break;
	
		case joaat("shift_f"):
			str = "shift_f";
			break;
	
		case joaat("near_posse"):
			str = "near_posse";
			break;
	
		case joaat("camp"):
			str = "camp";
			break;
	
		case joaat("random_posse"):
			str = "random_posse";
			break;
	}

	return str;
}

BOOL func_182(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0xD25D Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= iParam6)
				return true;

	return false;
}

float func_183() // Position - 0xD2B2 Hash - 0xE8D132E1 ^0x9C6C63D8
{
	if (func_360(Global_1347343.f_11, 512))
		return Global_2621440[0 /*12066*/].f_9.f_13;

	return Global_2621440[1 /*12066*/].f_9.f_13;
}

Vector3 func_184() // Position - 0xD2E5 Hash - 0xC0842FB4 ^0xC1BA56F
{
	if (func_360(Global_1347343.f_11, 512))
		return Global_2621440[0 /*12066*/].f_9.f_7;

	return Global_2621440[1 /*12066*/].f_9.f_7;
}

void func_185(Ped pedParam0, eStackSize essParam1) // Position - 0xD31C Hash - 0xC62C58A4 ^0x4458934A
{
	Hash playerType;

	playerType = func_361(essParam1);
	PED::_SET_PED_ACTIVE_PLAYER_TYPE(pedParam0, playerType);
	func_362();
	return;
}

void func_186(eStackSize essParam0, BOOL bParam1) // Position - 0xD338 Hash - 0xD137D039 ^0x44982A7
{
	BOOL flag;

	flag = bParam1;

	if (bParam1 == 999)
		flag = func_27();

	if (flag == -1)
	{
		switch (essParam0)
		{
			case joaat("player_three"):
				func_363(1160113249);
				break;
		
			case joaat("Player_Zero"):
				func_363(-2125499975);
				break;
		
			default:
				break;
		}
	
		return;
	}

	if (essParam0 == joaat("mp_male"))
		func_363(joaat("MPC_PLAYER_TYPE_MP_MALE"));
	else if (essParam0 == joaat("mp_female"))
		func_363(joaat("MPC_PLAYER_TYPE_MP_FEMALE"));

	return;
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0xD3B6 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_364(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = iParam3;
	func_365(num);
	return;
}

BOOL func_188(eStackSize essParam0) // Position - 0xD3E8 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return essParam0 != 0;
}

BOOL func_189(eStackSize essParam0) // Position - 0xD3F4 Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1899515 > essParam0;
}

void func_190(eStackSize essParam0) // Position - 0xD403 Hash - 0x6D182C1C ^0x6D182C1C
{
	int num;

	if (!func_188(essParam0))
		return;

	num = -1;

	if (func_366(essParam0, &num))
		func_367(num);

	return;
}

BOOL func_191(eStackSize essParam0) // Position - 0xD42C Hash - 0xC7FB2999 ^0xC7FB2999
{
	int num;

	if (func_368(essParam0))
		return false;

	if (!func_369(Global_35, 0))
		return false;

	num = -1;

	if (!func_366(essParam0, &num))
		return false;

	func_370(essParam0);

	if (PED::_0x1E017404784AA6A3(Global_35, essParam0))
	{
		func_371(essParam0, true);
		return true;
	}

	return false;
}

void func_192(BOOL bParam0) // Position - 0xD488 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

void func_193(int iParam0) // Position - 0xD499 Hash - 0xCE09FCEE ^0x8A2D8841
{
	Volume volume;

	if (func_372(iParam0, 1) || func_372(iParam0, 2))
	{
		volume = func_373(iParam0);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
		{
			if (func_372(iParam0, true))
			{
				func_374(volume, false);
				func_375(volume, false);
				func_376(iParam0, 1);
			}
		
			if (func_372(iParam0, 2))
			{
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volume);
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volume);
				VOLUME::DELETE_VOLUME(volume);
				func_376(iParam0, 2);
			}
		}
	}

	return;
}

void func_194(int iParam0) // Position - 0xD50B Hash - 0x61CB8DDC ^0x61CB8DDC
{
	if (func_372(iParam0, 4))
	{
		func_377(iParam0);
		func_376(iParam0, 4);
	}

	if (func_372(iParam0, 8))
	{
		func_378(iParam0);
		func_376(iParam0, 8);
	}

	return;
}

int func_195() // Position - 0xD543 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_196(int iParam0) // Position - 0xD551 Hash - 0x958F2AC ^0xC728C10
{
	char* scriptName;
	BOOL flag;
	eStackSize stackSize;
	int num;
	eStackSize stackSize2;

	scriptName = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(iParam0);
	SCRIPTS::REQUEST_SCRIPT(scriptName);

	if (SCRIPTS::HAS_SCRIPT_LOADED(scriptName))
	{
		if (func_27() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1897952.f_42, 523);
				return true;
			}
		
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(scriptName)) > 0)
			{
				func_380(scriptName, 523);
				return true;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1897952.f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1897952.f_43), Global_1897952.f_51, true, 0))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1897952.f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
			return false;
		}
	
		Global_1897952.f_42 = SCRIPTS::START_NEW_SCRIPT(scriptName, 1024);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1897952.f_43), scriptName, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
		flag = func_381(iParam0);
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), flag || func_382(func_234(iParam0)));
	
		if (func_234(iParam0) != func_234(func_195()) || flag)
		{
			func_383(func_195(), 0);
			stackSize = func_102(Global_36, true);
		
			if (!func_287(stackSize))
				if (!func_77(Global_1935630, 16384) && !func_384())
					if (func_385(func_234(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
						func_386(-1, -1, -1, false, func_234(iParam0), false);
					else if (flag)
						func_386(-1, iParam0, -1, false, -1, false);
		
			if (!func_73(PLAYER::PLAYER_ID(), true, false, true))
				func_387(iParam0);
			else
				func_383(iParam0, 1);
		}
	
		if (func_195() != -1)
		{
			func_388(func_195());
			func_377(func_195());
		}
	
		func_389(iParam0);
	
		if (func_390(iParam0))
			PLAYER::_0x14E57F88BA0A07FC(func_391(iParam0));
	
		func_392(iParam0);
		func_393(iParam0);
		num = -1000;
	
		if (func_207(func_225()))
			num = Global_1888801[func_225() /*35*/].f_1;
	
		if (num < MISC::GET_GAME_TIMER() - 1000)
		{
			stackSize2 = func_102(Global_36, true);
		
			if (func_229(stackSize2, true, false) == 0)
				func_395(func_394(iParam0, true), func_234(iParam0));
		
			func_396(0.775f, 0.2f, 0.025f, 0f);
			func_378(iParam0);
		}
	
		if (8 == iParam0 != func_310(373691918))
			func_397(373691918, 8 == iParam0, false);
	
		return true;
	}

	return false;
}

int func_197(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xD7A7 Hash - 0x56F0811C ^0x278FB5A
{
	return func_398(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

BOOL func_198() // Position - 0xD7BD Hash - 0x2ED42955 ^0x2ED42955
{
	eStackSize i;
	int num;
	float num2;
	float num3;

	num2 = 4f;
	num3 = 3f;

	if (Global_1357549.f_1641 >= 6 && Global_1357549.f_1641 != 10 || Global_1357549.f_1641 == 10 && func_399(&(Global_1357549.f_1642)) < num2 + num3 + 6.75f)
		CAM::_0x71D71E08A7ED5BD7(1);

	switch (Global_1357549.f_1641)
	{
		case 2:
		case 4:
		case 5:
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			break;
	}

	switch (Global_1357549.f_1641)
	{
		case 0:
			if (func_400() == false || func_401())
				return false;
		
			for (i = 0; i < 27; i = i + 1)
			{
				if (func_369(func_402(i), 0))
				{
					num = PED::_0x89816B58C3466262(func_402(i));
				
					if (num == 3)
					{
						Global_1357549.f_1645 = func_403(i);
						PED::SET_PED_CONFIG_FLAG(func_402(i), 343, true);
					
						if (Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(i)))
						{
							func_404(func_402(Global_1357549.f_1645), "KNOCKOUT_WARNING", 334581534, Global_35, 1, 0, 0, 1);
							Global_1357549.f_1646 = 1;
							Global_1357549.f_1647 = 1;
							Global_1357549.f_1641 = 1;
						}
					}
					else if (num == 1)
					{
						Global_1357549.f_1645 = func_403(i);
					
						if (Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(i)))
						{
							if (Global_1357549.f_1646 == 1 || ENTITY::GET_IS_ANIMAL(func_402(i)))
							{
								if (ENTITY::GET_IS_ANIMAL(func_402(i)))
								{
									func_404(func_402(Global_1357549.f_1645), "LEAVE_DOG_ALONE", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									PED::_0xA7DC9266ED6A4E51(func_402(i));
								}
								else
								{
									Global_1357549.f_1646 = 0;
								
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										func_404(func_402(Global_1357549.f_1645), "GENERIC_MOCK", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									else
										func_405(i);
								}
							}
						}
					}
					else if (num == 2)
					{
						Global_1357549.f_1645 = func_403(i);
					
						if (Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(i)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(Global_1357549.f_1645)))
						{
							if (Global_1357549.f_1647 == 1)
							{
								Global_1357549.f_1647 = 0;
							
								if (func_406(i))
									func_404(func_402(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
								else
									func_404(func_402(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_FEMALE", 334581534, Global_35, 1, 0, 0, 1);
							}
						}
					}
				}
			}
			break;
	
		case 1:
			func_407(Global_1357549.f_1635, &(Global_1357549.f_1637), &(Global_1357549.f_1640));
		
			if (func_400() == false || func_401() || _IS_NULL_VECTOR(Global_1357549.f_1637))
			{
				func_408();
				Global_1357549.f_1641 = 0;
				return false;
			}
		
			for (i = 0; i < 27; i = i + 1)
			{
				if (func_369(func_402(i), 0))
				{
					num = PED::_0x89816B58C3466262(func_402(i));
				
					if (num == 4)
					{
						if (_IS_NULL_VECTOR(Global_1357549.f_1637) == false)
						{
							if (PED::IS_PED_ON_MOUNT(Global_35) == false)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) == false && PED::IS_PED_IN_MELEE_COMBAT(Global_35) == false)
								{
									Global_1357549.f_1645 = func_409(i, true);
								
									if (func_410(Global_1357549.f_1645) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(Global_1357549.f_1645)))
									{
										if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
											ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
									
										func_408();
										Global_1357549.f_1636 = ANIMSCENE::_CREATE_ANIM_SCENE(func_411(), 0, func_412(Global_1357549.f_1635), false, true);
										Global_1357549.f_1641 = 3;
									}
									else
									{
										func_408();
										Global_1357549.f_1641 = 0;
									}
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
							}
						}
					}
				}
			}
			break;
	
		case 2:
			if (func_413(Global_1357549.f_1645))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_1357549.f_1636, true, false))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Global_1357549.f_1636, func_412(Global_1357549.f_1635)))
						{
							TASK::CLEAR_PED_TASKS(func_402(Global_1357549.f_1645), true, false);
							func_414();
							func_415(false, false, false);
							Global_1357549.f_1641 = 4;
						}
					}
				}
			}
			else
			{
				func_416(Global_1357549.f_1645, false, 0, 0, 0, 0, 0, true, 1, false, false, false, 0, 0, false, false, false, true, true, true, false, false, true, false, true);
			}
			break;
	
		case 3:
			ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1636);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Global_1357549.f_1636, func_412(Global_1357549.f_1635));
			Global_1357549.f_1641 = 2;
			break;
	
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1357549.f_1636, false))
			{
				if (func_369(Global_35, 0))
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			
				func_417();
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_player_sleep_ground"), 15, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(func_402(Global_1357549.f_1645), true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_402(Global_1357549.f_1645), false, false, true, false);
				func_404(func_402(Global_1357549.f_1645), func_418(), 272211449, Global_35, 1, 0, 0, 1);
				Global_1357549.f_1641 = 5;
			}
			else
			{
				func_419();
				ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1636);
			}
			break;
	
		case 5:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.15f)
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
		
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.92f || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.37f)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::ABORT_ANIM_SCENE(Global_1357549.f_1636, false);
				func_420(&(Global_1357549.f_1642), false);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_402(Global_1357549.f_1645), true, false, true, false);
				func_421(joaat("CSTAG_GRIEFING_KNOCKOUT_POST"), 1017034651, joaat("CSTAG_PRIORITY_CRITICAL"), 6, 1, true, false);
				Global_1357549.f_1641 = 6;
			}
			break;
	
		case 6:
			if (func_399(&(Global_1357549.f_1642)) > num2)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, Global_1357549.f_1637, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, Global_1357549.f_1640);
				ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(Global_1357549.f_1636, func_412(Global_1357549.f_1635));
				ANIMSCENE::RESET_ANIM_SCENE(Global_1357549.f_1636, 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
				CLOCK::ADD_TO_CLOCK_TIME(4, 0, 0);
				Global_1357549.f_1641 = 8;
				func_422(Global_1357549.f_1645, false, false, true, -1082130432, true, true, false, false, false, false);
				func_423();
				func_424(num3);
				return true;
			}
			break;
	
		case 7:
			Global_1357549.f_1635 = Global_1357549.f_1635 + 1;
		
			if (Global_1357549.f_1635 >= 4)
				Global_1357549.f_1635 = 0;
		
			PED::_0xC494C76A34266E82(Global_35, 3);
		
			if (CAM::IS_SCREEN_FADED_OUT())
				CAM::DO_SCREEN_FADE_IN(250);
		
			func_425();
			Global_1357549.f_1641 = 9;
			break;
	
		case 8:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("world_player_sleep_ground"), false))
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
					if (func_399(&(Global_1357549.f_1642)) > num2 + 2.5f)
						Global_1357549.f_1641 = 7;
			break;
	
		case 9:
			func_426();
		
			if (func_399(&(Global_1357549.f_1642)) > num2 + num3)
				Global_1357549.f_1641 = 10;
			break;
	
		case 10:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == false)
			{
				if (func_369(Global_35, 0))
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			
				func_427(&(Global_1357549.f_1642));
				STREAMING::_REMOVE_SCENARIO_ASSET(joaat("world_player_sleep_ground"));
				func_428(2, joaat("honor_event_antagonize"), 0, 0, 0, false, 1065353216, false);
				Global_1357549.f_1641 = 0;
			}
			break;
	}

	return false;
}

void func_199() // Position - 0xDFD9 Hash - 0x7E7A89 ^0x7E7A89
{
	int i;

	for (i = 0; i < Global_1327590.f_19547; i = i + 1)
	{
		if (Global_1327590.f_19547[i /*5*/] != -1)
			func_429(i);
	}

	return;
}

void func_200() // Position - 0xE00E Hash - 0xE4780F57 ^0xD4016D6E
{
	Hash i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_430(i) != 0)
			if (!MAP::DOES_BLIP_EXIST(Global_36308[i]))
				func_431(i);
	}

	return;
}

void func_201(BOOL bParam0) // Position - 0xE049 Hash - 0x27F696AB ^0x27F696AB
{
	if (bParam0)
		Global_1894899 = Global_1894899 | 64;
	else
		Global_1894899 = Global_1894899 - Global_1894899 & 64;

	return;
}

int func_202() // Position - 0xE074 Hash - 0xE9D48BDA ^0x66501210
{
	BOOL flag;
	BOOL isPointInVolume;
	BOOL flag2;
	BOOL flag3;
	BOOL isPedInjured;
	BOOL flag4;
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize stackSize3;
	BOOL flag5;
	BOOL flag6;

	if (Global_1572887.f_8)
		return 1;

	if (Global_36 == 0f && Global_36.f_1 == 0f && Global_36.f_2 == 0f)
		return 1;

	if (Global_1894899 & 264 != 0)
		return 1;

	if (Global_1572887.f_12 == -1 && func_41(64))
		flag = true;
	else if (Global_1572887.f_12 == false)
		flag = true;

	isPointInVolume = false;

	if (func_207(Global_1894899.f_2))
	{
		flag2 = VOLUME::DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_3);
		flag3 = true;
	
		if (flag2)
			isPointInVolume = VOLUME::IS_POINT_IN_VOLUME(Global_1888801[Global_1894899.f_2 /*35*/].f_3, Global_36);
	}

	isPedInjured = PED::IS_PED_INJURED(Global_35);
	flag4 = func_72(0, true, true);

	if (flag && !isPedInjured)
	{
		if (func_207(Global_1894899.f_2))
		{
			func_432(Global_1894899.f_2, Global_1894899.f_2, flag4);
		
			if (Global_1894899.f_5 != Global_1894899.f_2)
				func_432(Global_1894899.f_5, Global_1894899.f_2, flag4);
		}
		else
		{
			func_432(Global_1894899.f_5, Global_1894899.f_2, flag4);
		}
	}

	Global_1894899.f_5 = Global_1894899.f_5 + 1;

	if (Global_1894899.f_5 >= 130)
		Global_1894899.f_5 = 0;

	if (flag3)
	{
		func_433(Global_1894899.f_2, isPointInVolume, flag2);
	}
	else
	{
		stackSize = 0;
		stackSize2 = 130 - 1;
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			stackSize3 = func_102(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), true);
		
			if (func_207(stackSize3))
			{
				stackSize = stackSize3;
				stackSize2 = stackSize3;
			}
		}
		else if (func_434(8))
		{
			if (func_233(Global_1897952.f_41))
			{
				if (Global_1897952.f_41 == 5 || Global_1897952.f_41 == 6 || Global_1897952.f_41 == 7)
				{
					stackSize = func_435(7);
					stackSize2 = func_436(6);
				}
				else
				{
					stackSize = func_435(Global_1897952.f_41);
					stackSize2 = func_436(Global_1897952.f_41);
				}
			}
		}
	
		if (Global_1894899.f_4 < stackSize || Global_1894899.f_4 > stackSize2)
		{
			flag6 = func_437(&flag5);
		
			if (!flag6)
				Global_1894899.f_4 = stackSize;
		}
	
		func_433(Global_1894899.f_4, isPointInVolume, VOLUME::DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_4 /*35*/].f_3));
	
		if (flag5)
			Global_1894899.f_4 = stackSize;
		else if (!flag6)
			Global_1894899.f_4 = Global_1894899.f_4 + 1;
	}

	return 1;
}

void func_203() // Position - 0xE2EA Hash - 0xE412F4EA ^0xB3562EF6
{
	if (Global_1894899.f_9)
		if (!func_438(Global_1934266.f_148))
			func_439();

	switch (HUD::_0x7EC0D68233E391AC(6))
	{
		case 1:
			if (!func_438(Global_1934266.f_148))
				func_439();
			break;
	
		case 2:
			if (func_438(Global_1934266.f_148))
				UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1934266.f_148, false);
			break;
	}

	return;
}

void func_204() // Position - 0xE354 Hash - 0x3724687B ^0xBE1D4B05
{
	Hash discoveryHash;

	if (func_440(Global_36, Global_1894899.f_6))
	{
		discoveryHash = func_441(Global_1894899.f_6);
	
		if (discoveryHash != 0)
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash))
				if (func_345(45) || !func_442(Global_1894899.f_6))
					MAP::_MAP_DISCOVER_REGION(discoveryHash);
	
		Global_1894899.f_3 = Global_1894899.f_6;
	}
	else if (Global_1894899.f_3 != -1 && !func_440(Global_36, Global_1894899.f_3))
	{
		Global_1894899.f_3 = -1;
	}

	Global_1894899.f_6 = Global_1894899.f_6 + 1;

	if (Global_1894899.f_6 >= 51)
		Global_1894899.f_6 = 0;

	return;
}

BOOL func_205() // Position - 0xE400 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_206() // Position - 0xE409 Hash - 0x136ECF57 ^0x136ECF57
{
	if (func_70(43) && !func_70(44))
		return false;

	if (func_70(67) && func_357() != 8)
		return false;

	return true;
}

BOOL func_207(eStackSize essParam0) // Position - 0xE444 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

int func_208(eStackSize essParam0) // Position - 0xE45A Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_207(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

BOOL func_209(eStackSize essParam0) // Position - 0xE47A Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_207(essParam0))
		return false;

	return func_210(essParam0, 8);
}

BOOL func_210(eStackSize essParam0, BOOL bParam1) // Position - 0xE498 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

int func_211(eStackSize essParam0) // Position - 0xE4CB Hash - 0xFE841B01 ^0xFE841B01
{
	switch (essParam0)
	{
		case -1:
			return -1;
	
		case 4:
			return 5;
	
		case 9:
			return 3;
	
		case 22:
			return 7;
	
		case 37:
			return 8;
	
		case 43:
			return 0;
	
		case 58:
			return 4;
	
		case 71:
			return 1;
	
		case 79:
			return 6;
	
		case 98:
			return 2;
	
		default:
		
	}

	return -1;
}

Vector3 func_212(int iParam0, var uParam1, var uParam2) // Position - 0xE541 Hash - 0xD4F6213D ^0xD4F6213D
{
	var unk;

	unk = { func_443(Global_36, uParam1, uParam2, true, false, false, false, false, 0, 0, iParam0, 10f) };
	return unk;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xE56C Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_214(var uParam0, var uParam1, var uParam2) // Position - 0xE596 Hash - 0xB20C33B1 ^0x8BCEF44A
{
	Global_40.f_9.f_7 = { uParam0 };
	return;
}

void func_215(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0xE5AB Hash - 0xA31D165B ^0x9AF99D03
{
	Global_1310720.f_1 = { uParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
	return;
}

void func_216() // Position - 0xE5DA Hash - 0x734D8C51 ^0x60FF966E
{
	var unk;
	var unk11;

	Global_1310720.f_8 = 0;
	Global_1935630.f_4 = 1;
	unk11 = { unk };
	TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "respawn_persistence", 32);
	unk11.f_14 = 1024;
	unk11.f_15 = 0;
	func_223(unk11, 0);
	return;
}

void func_217(int iParam0) // Position - 0xE61A Hash - 0x33B51C79 ^0xD9769E91
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
	return;
}

void func_218(int iParam0, int iParam1) // Position - 0xE634 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_219(eStackSize essParam0) // Position - 0xE645 Hash - 0x5822495 ^0x141CE12F
{
	int i;

	if (!func_207(essParam0))
		return -1;

	for (i = 0; i < 17; i = i + 1)
	{
		if (Global_1395601.f_5[i /*28*/] == essParam0)
			return i;
	}

	return -1;
}

BOOL func_220(int iParam0) // Position - 0xE683 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_221(int iParam0, BOOL bParam1) // Position - 0xE699 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_220(iParam0))
		return;

	Global_40.f_9384[iParam0 /*2*/] = Global_40.f_9384[iParam0 /*2*/] || bParam1;
	return;
}

BOOL func_222(const char* sParam0) // Position - 0xE6C5 Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0xE6FF Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_444(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_222(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_445(iParam16);
			return;
		}
	}

	return;
}

void func_224(int iParam0) // Position - 0xE79B Hash - 0x29A8F290 ^0x870EAF89
{
	Global_1310720.f_9 = iParam0;
	return;
}

eStackSize func_225() // Position - 0xE7AB Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

eStackSize func_226(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xE7B9 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_446(vParam0);
	num2 = -1;

	if (Global_1894882[num] > 0)
	{
		num3 = Global_1894882[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1894065[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[num4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[num4 /*35*/].f_20)
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

void func_227(int iParam0) // Position - 0xE870 Hash - 0x1E9E9040 ^0xD8BC3B94
{
	BOOL flag;

	if (iParam0 < 0 || iParam0 >= 10)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
		return;

	flag = false;

	if (Global_1934603[iParam0 /*16*/].f_15 == 1)
		flag = func_447(&(Global_1934603[iParam0 /*16*/].f_10), Global_1934603[iParam0 /*16*/], Global_1934603[iParam0 /*16*/].f_14);
	else
		flag = func_448(&(Global_1934603[iParam0 /*16*/].f_10), Global_1934603[iParam0 /*16*/].f_14);

	if (flag)
		func_449(iParam0);

	return;
}

void func_228(int iParam0, BOOL bParam1) // Position - 0xE8FF Hash - 0xB1C1C6D6 ^0xB1C1C6D6
{
	int i;

	if (!func_104(iParam0))
		return;

	if (func_450(iParam0, 2) && !bParam1)
		return;

	if (bParam1)
		func_451(iParam0, 1);
	else
		func_452(iParam0, 1);

	func_453(iParam0, bParam1);

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_234(i) == iParam0)
			func_235(i, false);
	}

	return;
}

Hash func_229(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE96C Hash - 0x460680B1 ^0xEA5BF9A6
{
	int num;

	switch (essParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (essParam0 == func_98())
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			break;
	
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
	
		case 22:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_PRONGHORN_RANCH");
		
			if (func_172(Global_1835011[59 /*74*/].f_1, true))
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			else
				return joaat("LAW_REGION_BIG_VALLEY");
			break;
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 32:
			return joaat("LAW_REGION_SISIKA");
	
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 37:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_BEECHERS_HOPE");
		
			if (func_172(Global_1347702[9 /*49*/].f_15, true))
				return joaat("LAW_REGION_BEECHERS_HOPE");
			else if (func_345(45))
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			else
				return joaat("LAW_REGION_GREAT_PLAINS");
			break;
	
		case 38:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_345(45))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 56:
			return joaat("LAW_REGION_WAPITI");
	
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 61:
			return joaat("LAW_REGION_MANICATO");
	
		case 65:
			return joaat("LAW_REGION_CORNWALL");
	
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 76:
			if (func_285(essParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
	
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
	
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 105:
			if (func_285(essParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 110:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_MANZANITA_POST");
		
			if (func_345(45))
				return joaat("LAW_REGION_MANZANITA_POST");
			else
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			break;
	
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 127:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_345(45))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_454(essParam0);
	
		if (num != -1)
			return func_394(num, bParam1);
	}

	return 0;
}

int func_230(Hash hParam0) // Position - 0xEC8E Hash - 0x4BF152B5 ^0x4BF152B5
{
	switch (hParam0)
	{
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
	
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
	
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
	
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
	
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
	}

	return -1;
}

void func_231(eStackSize essParam0, BOOL bParam1) // Position - 0xEDF0 Hash - 0x28F0F3B1 ^0xD4160260
{
	BOOL flag;

	if (!func_207(essParam0))
		return;

	flag = func_210(essParam0, 67108864);

	if (bParam1)
	{
		if (!flag && func_208(essParam0) == 1 && essParam0 != 120 && essParam0 != 92)
		{
			func_455(essParam0, func_177());
			func_322(essParam0, 67108864);
		}
	}
	else if (flag)
	{
		func_280(essParam0, 67108864);
		func_455(essParam0, -15);
	}

	func_456(essParam0);
	return;
}

void func_232(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0xEE75 Hash - 0x20ACD3AE ^0xBADD8DC6
{
	Volume volume;
	BOOL flag;
	int num;
	int num2;

	if (!func_207(essParam0))
		return;

	if (func_457(essParam0) && !bParam1)
		return;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_5))
		volume = Global_1888801[essParam0 /*35*/].f_5;
	else
		volume = func_458(essParam0);

	flag = func_210(essParam0, 33554432);

	if (bParam1)
	{
		num = func_459(essParam0);
	
		if (iParam2 > num || !func_461(func_460(essParam0)))
		{
			func_462(essParam0, func_177());
			func_463(essParam0, iParam2);
		}
	
		if (!flag)
		{
			func_322(essParam0, 33554432);
		
			if (VOLUME::DOES_VOLUME_EXIST(volume))
			{
				if (essParam0 == 38)
					num2 = 0;
				else
					num2 = 1;
			
				PATHFIND::_0xF2A2177AC848B3A8(volume, 0, num2);
			}
		}
	}
	else if (flag)
	{
		func_280(essParam0, 33554432);
		func_462(essParam0, -15);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			PATHFIND::_0xF2A2177AC848B3A8(volume, 1, 1);
	}

	func_464(essParam0);
	return;
}

BOOL func_233(int iParam0) // Position - 0xEF71 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

int func_234(int iParam0) // Position - 0xEF87 Hash - 0xA08D7C4E ^0xA08D7C4E
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

void func_235(int iParam0, BOOL bParam1) // Position - 0xF042 Hash - 0xCE05C781 ^0xCE05C781
{
	if (!func_233(iParam0))
		return;

	if (bParam1)
	{
		func_465(iParam0, true);
	}
	else
	{
		if (func_381(iParam0))
			return;
	
		func_466(iParam0, 1);
	}

	func_467(iParam0, bParam1);
	return;
}

BOOL func_236(int iParam0) // Position - 0xF081 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return true;
	}

	return false;
}

Hash func_237(int iParam0) // Position - 0xF0BD Hash - 0x5A6E569C ^0xA7B72672
{
	switch (iParam0)
	{
		case 1:
			return -1611076340;
	
		case 2:
			return 2108368013;
	
		case 3:
			return -412827149;
	
		case 5:
			return -1395712024;
	
		case 6:
			return -1162254606;
	
		default:
		
	}

	return func_468();
}

BOOL func_238(Hash hParam0) // Position - 0xF117 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_239(int iParam0, int iParam1) // Position - 0xF123 Hash - 0xA10C37F5 ^0xA10C37F5
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

Hash func_240(int iParam0, int iParam1) // Position - 0xF195 Hash - 0x93C03F73 ^0x3F213F05
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2022451711;
			
				case 1:
					return joaat("hso_p_camp_02");
			
				case 2:
					return -1177590512;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1402472902;
			
				case 1:
					return joaat("dewclm_p_camp_02");
			
				case 2:
					return -1458944281;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_468();
			
				case 1:
					return joaat("shb_p_camp_02");
			
				case 2:
					return 557551306;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return func_468();
			
				case 1:
					return -1232260252;
			
				case 2:
					return 1404611977;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return func_468();
			
				case 1:
					return -1869016398;
			
				case 2:
					if (func_469(268435456))
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(806681228))
							STREAMING::REMOVE_IPL_HASH(806681228);
					
						return 1311984381;
					}
					else
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(1311984381))
							STREAMING::REMOVE_IPL_HASH(1311984381);
					
						return 806681228;
					}
					break;
			}
			break;
	}

	return func_468();
}

void func_241(Hash hParam0, BOOL bParam1) // Position - 0xF311 Hash - 0x2580BB9A ^0x35A905CB
{
	Hash hash;

	hash = -1;

	switch (hParam0)
	{
		case joaat("cle_upg_campfire_rug_cow"):
			hash = joaat("cle_upg_campfire_rug_cow");
			break;
	
		case joaat("shb_p_camp_02"):
			hash = joaat("shb_p_camp_02");
			break;
	
		case joaat("hso_p_camp_02"):
			hash = joaat("vegmods_hso_pearson_wagon");
			break;
	
		case joaat("dewclm_p_camp_02"):
			hash = joaat("dewclm_p_camp_02");
			break;
	}

	if (hash != -1)
		if (bParam1)
			if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(hash) == false)
				GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(hash);
		else if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(hash))
			GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(hash);

	return;
}

Hash func_242(int iParam0, int iParam1, BOOL bParam2) // Position - 0xF391 Hash - 0x432ACC88 ^0x432ACC88
{
	switch (iParam0)
	{
		case 1:
			return func_470(iParam1, bParam2);
	
		case 2:
			return func_471(iParam1, bParam2);
	
		case 6:
			return func_472(iParam1, bParam2);
	}

	return func_468();
}

void func_243(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF3E1 Hash - 0x7EC03117 ^0x7EC03117
{
	if (!bParam1 || iParam0 == 1)
		func_473(iParam0, 0);

	if (!bParam1 || iParam0 == 2)
		func_474(iParam0, false);

	if (!bParam1 || iParam0 == 3)
		func_475(iParam0, false);

	if (!bParam1 || iParam0 == 6)
		func_476(iParam0, 0);

	if (bParam2)
	{
		Global_1357549.f_575 = Global_1357549.f_575 + 1;
	
		if (Global_1357549.f_575 >= 18)
			Global_1357549.f_575 = 0;
	}

	return;
}

void func_244(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF46E Hash - 0xB352D5D8 ^0xB352D5D8
{
	int num;
	float num2;

	num = func_477(16);
	num2 = func_478();

	if (!bParam4 || iParam0 == 1)
	{
		func_479(iParam0, iParam1, bParam2);
		func_480(iParam0, num2, bParam2);
	}

	if (!bParam4 || iParam0 == 2)
	{
		func_481(iParam0, iParam1, bParam2, bParam3);
		func_482(iParam0, num2, bParam2, bParam3);
	}

	if (!bParam4 || iParam0 == 3)
	{
		func_483(iParam0, iParam1, bParam2);
		func_484(iParam0, num2, bParam2);
	}

	func_485(iParam0, Global_40.f_4283.f_314);
	func_486(iParam0, num);
	return;
}

struct<8> func_245(int iParam0, int iParam1) // Position - 0xF50B Hash - 0xE251EBAD ^0x946CE093
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_487(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_nav_camp_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_488(iParam1), 64);
	return unk;
}

int func_246(int iParam0) // Position - 0xF534 Hash - 0x84838E68 ^0x84838E68
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 43;
	
		case 1:
			return 71;
	
		case 2:
			return 98;
	
		case 3:
			return 9;
	
		case 4:
			return 58;
	
		case 5:
			return 4;
	
		case 6:
			return 79;
	
		case 7:
			return 22;
	
		case 8:
			return 37;
	
		default:
		
	}

	iParam0 != -1;
	return -1;
}

void func_247(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF5B7 Hash - 0xE1E22ABC ^0xE1E22ABC
{
	int i;
	int j;

	if (func_236(iParam0))
	{
		for (i = 0; i < 27; i = i + 1)
		{
			for (j = 0; j < 6; j = j + 1)
			{
				func_489(iParam1, i, j, bParam2, bParam3);
			}
		}
	}

	return;
}

BOOL func_248(int iParam0) // Position - 0xF5FB Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_249(BOOL bParam0) // Position - 0xF639 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_250(BOOL bParam0) // Position - 0xF646 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_251() // Position - 0xF659 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_252(int iParam0, int iParam1, int iParam2) // Position - 0xF674 Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xF69A Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_490(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_251())
		return -1;

	flag = func_252(iParam0, iParam1, iParam2);
	num = iParam3;
	func_491(num, 0);
	func_492(num, 0);
	func_493(num, 0);
	func_494(num, 0);
	func_495(num, flag);

	if (hParam4 != 0)
		func_496(num, hParam4);

	return num;
}

Hash func_254(int iParam0) // Position - 0xF739 Hash - 0x2C59F506 ^0x6E850891
{
	const char* str;
	Hash hashKey;
	Hash hash;

	if (!func_46(iParam0))
		return 0;

	str = func_51(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&str))
		return 0;

	hashKey = MISC::GET_HASH_KEY(&str);
	hash = hashKey;
	return hash;
}

BOOL func_255(Hash hParam0) // Position - 0xF772 Hash - 0xD6E12BEB ^0xDB5CAE55
{
	return STATS::_0x4DAC398297981B87(hParam0);
}

BOOL func_256(int iParam0) // Position - 0xF780 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_257(int iParam0, var uParam1, var uParam2) // Position - 0xF79F Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_256(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

int func_258(eStackSize essParam0) // Position - 0xF96E Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_259(eStackSize essParam0) // Position - 0xF981 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_260(eStackSize essParam0) // Position - 0xF993 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_261(eStackSize essParam0) // Position - 0xF9A5 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_262(eStackSize essParam0) // Position - 0xF9B8 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_263(eStackSize essParam0) // Position - 0xF9CB Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

BOOL func_264(int iParam0, int iParam1) // Position - 0xF9F0 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_178(iParam0))
		return false;

	*iParam1 = Global_1914270[iParam0];

	if (*iParam1 == 0)
		return false;

	return true;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xFA1D Hash - 0xA17D549C ^0x31194BB9
{
	switch (iParam0)
	{
		case -1970263451:
			return "item(%i)";
	
		case -1893576372:
			return "invItem(%i)";
	
		case -1661050588:
			return "requirement(%i)";
	
		case -1400723349:
			return ":itemStackSize";
	
		case -908395502:
			return ":itemID";
	
		case -815325344:
			return "shopInventories/shopSellableItems(shopType=%x)";
	
		case -764679122:
			return "invItem";
	
		case -562246383:
			return "item(%i):itemID";
	
		case -199231160:
			return ":state";
	
		case -101978662:
			return "variations(%i)";
	
		case 53142323:
			return "invItem(itemID=%x)/variations";
	
		case 421691991:
			return ":itemCnt";
	
		case 465794448:
			return "shopInventories/shelfType(id=%x)";
	
		case 549615901:
			return "invItem(itemID=%x)";
	
		case 656138654:
			return "requirement";
	
		case 1976824961:
			return ":reqName";
	
		case 1986163665:
			return ":type";
	
		default:
		
	}

	return "";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0xFB0D Hash - 0xA17D549C ^0x7F3344EC
{
	switch (iParam0)
	{
		case -2143122356:
			return ":group_id";
	
		case -2122922976:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):tag";
	
		case -2114544496:
			return ":tint1";
	
		case -2108295561:
			return ":gender_type";
	
		case -2102005109:
			return "ITEM(%i):hide_mod";
	
		case -2091945982:
			return ":model_male";
	
		case -2059916790:
			return ":type";
	
		case -1995898785:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(id=%x)";
	
		case -1991559626:
			return "META_TAG(%i):id";
	
		case -1991054358:
			return ":mod_channel";
	
		case -1990973241:
			return "TINT(%i)";
	
		case -1933358492:
			return ":mod_alpha";
	
		case -1930670456:
			return ":model_female";
	
		case -1925926132:
			return ":tint2";
	
		case -1918885948:
			return "itemset/item(id=%x):type";
	
		case -1894594100:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_COMPONENT_OUTFIT(id=%x)";
	
		case -1873083679:
			return "MOD_ACTION(id=%x)";
	
		case -1872363127:
			return ":requirement";
	
		case -1864618971:
			return "category_sets";
	
		case -1840536550:
			return ":mod_texture";
	
		case -1837131440:
			return ":drawable";
	
		case -1761676834:
			return ":base";
	
		case -1752779714:
			return "component(%i)";
	
		case -1750442909:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):base";
	
		case -1675772613:
			return ":base_layer";
	
		case -1636119814:
			return "GENDER(id=%x)";
	
		case -1610948558:
			return ":blend_type";
	
		case -1580989022:
			return "CLOTHING_ITEM(id=%x)/CLOTHING_TAGS/CLOTHING_TAG/ITEM(id=%x):length";
	
		case -1574347650:
			return ":name";
	
		case -1574188157:
			return "components";
	
		case -1516336530:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x)";
	
		case -1509637852:
			return "MOD_ACTION(%i)";
	
		case -1507835846:
			return "PREREQ(id=%x)";
	
		case -1418665930:
			return "GLOBAL_REQUIREMENTS";
	
		case -1391664603:
			return ":normal";
	
		case -1384491765:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x)";
	
		case -1330667583:
			return "PREREQ(%i)";
	
		case -1316510272:
			return ":roughness";
	
		case -1310250464:
			return ":pdata_file";
	
		case -1218801571:
			return "texture(%i)";
	
		case -1179965762:
			return ":category";
	
		case -1167877887:
			return "ITEM(id=%x)";
	
		case -1119978610:
			return "META_TAG(%i)";
	
		case -1062209954:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)";
	
		case -1032429045:
			return ":stache_length";
	
		case -956415585:
			return "itemset/item(%i)";
	
		case -950930560:
			return "METAPED_CLOTHING_LOGIC/HIDE_ACTIONS/HIDE_ACTION(id=%x)";
	
		case -929624153:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/OUTFIT_TINTS(id=%x)/TINT_SET(id=%x)";
	
		case -922450292:
			return ":debug_name";
	
		case -914904147:
			return ":tint0";
	
		case -902846119:
			return "METAPED_CLOTHING_LOGIC/TYPE_INFO/ITEM(id=%x)";
	
		case -901251340:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_LISTS/ITEM_LIST(id=%x)";
	
		case -850610138:
			return "MOD_LIST";
	
		case -850484704:
			return ":slot_id";
	
		case -785467695:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(%i)";
	
		case -780950631:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT_GROUP(id=%x)";
	
		case -684355284:
			return "VARIATION(%i)";
	
		case -662697758:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(switch_to_mod=%x)";
	
		case -649824246:
			return "ITEM(%i):override";
	
		case -641661298:
			return ":id";
	
		case -621257950:
			return "ITEM_TYPE(%i)";
	
		case -616834454:
			return "CLOTHING_TAG(%i)";
	
		case -616287568:
			return "ITEM(length=%x):id";
	
		case -612355112:
			return ":tag";
	
		case -589329400:
			return ":material";
	
		case -575695046:
			return "METAPED_CLOTHING_LOGIC/TAG_INFO/ITEM(id=%x)";
	
		case -575241652:
			return "TINT_SET(id=%x)";
	
		case -465134547:
			return ":partial";
	
		case -441020063:
			return "METAPED_CLOTHING_LOGIC/MOD_ACTIONS/MOD_ACTION(id=%x)";
	
		case -377475286:
			return ":chops_length";
	
		case -346222474:
			return ":player_type";
	
		case -274378420:
			return ":switch_to_mod";
	
		case -225486300:
			return "type(%i)";
	
		case -180564037:
			return "MOD_ITEM(%i)";
	
		case -138791404:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x):player_type";
	
		case -50676598:
			return ":conflicting_mod";
	
		case -20900817:
			return ":weather_rating";
	
		case 18833337:
			return "ASSET_TINTS/ITEM(%i)";
	
		case 71109396:
			return "itemset/item(id=%x):requirement";
	
		case 72319938:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i)";
	
		case 75574092:
			return ":label";
	
		case 122953168:
			return "categories(%i)";
	
		case 139135334:
			return ":chin_length";
	
		case 181728933:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(%i)";
	
		case 206913325:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM_GROUP(id=%x)";
	
		case 288969396:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):player_type";
	
		case 293643052:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_COMPONENT_ITEMS(id=%x)";
	
		case 294713880:
			return "METAPED_CLOTHING_LOGIC/META_COMPONENT_INFO";
	
		case 353841523:
			return "INFO_FLAGS/ITEM(%i):id";
	
		case 371382169:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_TEMPLATE(id=%x)";
	
		case 389725116:
			return ":sheet_grid_index";
	
		case 416492924:
			return ":albedo";
	
		case 435382182:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_ITEMS(id=%x)";
	
		case 436847552:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):group_id";
	
		case 476944399:
			return "ITEM(%i):id";
	
		case 478480241:
			return ":action";
	
		case 503961584:
			return ":description";
	
		case 523185636:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i):type";
	
		case 532664358:
			return "METAPED_CLOTHING_LOGIC/PRIORITY_LISTS/PRIORITY_LIST(id=%x)";
	
		case 570854305:
			return "OUTFIT(%i)";
	
		case 580624393:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i)";
	
		case 595361980:
			return ":item_id";
	
		case 607361843:
			return ":palette_hash";
	
		case 635931682:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):template";
	
		case 668292726:
			return "ITEM(%i):tag";
	
		case 670821262:
			return "MOD_LIST/ITEM(mod=%x)";
	
		case 683611174:
			return "ASSET_TINTS/ITEM(tag=%x)";
	
		case 730116258:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(conflicting_mod=%x):switch_to_mod";
	
		case 757000479:
			return "CLOTHING_TAGS/CLOTHING_TAG(tag=%x)";
	
		case 791623761:
			return "MOD_ITEM(conflicting_mod=%x)";
	
		case 798674206:
			return ":none_item";
	
		case 834216597:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):requirement";
	
		case 902278251:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x)";
	
		case 1004470061:
			return "components/component(%i)";
	
		case 1047718714:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i):id";
	
		case 1063445323:
			return "itemset/item(id=%x)";
	
		case 1069236071:
			return "METAPED_CLOTHING_LOGIC/PED_EXPRESSION_INFO";
	
		case 1140322086:
			return ":template";
	
		case 1147691011:
			return ":mod";
	
		case 1170159957:
			return "itemset";
	
		case 1246928384:
			return "ITEM(%i):element";
	
		case 1257828006:
			return ":layer_type";
	
		case 1273576207:
			return "ITEM(%i):mod";
	
		case 1397673214:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ASSET(id=%x)";
	
		case 1422969767:
			return ":element";
	
		case 1465270576:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):requirement";
	
		case 1495456772:
			return "ITEM(type=%x)";
	
		case 1533929150:
			return ":modifiable";
	
		case 1645903593:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)/ITEM(%i)";
	
		case 1650660506:
			return ":is_list";
	
		case 1702953056:
			return ":male";
	
		case 1724971146:
			return ":female";
	
		case 1786184768:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(id=%x)";
	
		case 1814477267:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(%i)";
	
		case 1893749034:
			return "ITEM(%i):type";
	
		case 1895156137:
			return "INFO_FLAGS/ITEM(%i)";
	
		case 1921232557:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)";
	
		case 1959938229:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x):player_type";
	
		case 1983683828:
			return ":tex_alpha";
	
		case 2124169410:
			return "ITEM(%i)";
	
		default:
		
	}

	return "invalid NET_CLOTHING_XML_REGISTERED_QUERIES";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x1023E Hash - 0xA17D549C ^0x340DECF5
{
	switch (iParam0)
	{
		case -1906982261:
			return ":districtGRZ";
	
		case -1382561665:
			return ":districtHEN";
	
		case -1221865546:
			return ":districtGAP";
	
		case -1172613177:
			return ":districtSCM";
	
		case -1076906043:
			return ":inventoryItem";
	
		case -1035806543:
			return ":districtHRT";
	
		case -1023752283:
			return "shopProvisions/provision(inventoryItem=%x)";
	
		case -581476215:
			return ":districtGRT";
	
		case -153135980:
			return ":districtBAY";
	
		case 12851681:
			return ":districtBGV";
	
		case 43722464:
			return ":districtCML";
	
		case 495869290:
			return ":districtTAL";
	
		case 684071069:
			return ":districtCHO";
	
		case 1357371535:
			return ":districtRIO";
	
		case 1386325051:
			return ":districtBLU";
	
		case 1579284209:
			return ":districtROA";
	
		default:
		
	}

	return "";
}

char* func_268(int iParam0) // Position - 0x10321 Hash - 0x4338F78F ^0xAE4B3D14
{
	switch (iParam0)
	{
		case -2103982008:
			return "item";
	
		case -57097983:
			return "item(%i)";
	
		case 316053773:
			return ":unlockThreshold";
	
		case 1781729525:
			return "honorItems";
	
		case 2027336698:
			return ":inventoryItem";
	
		default:
		
	}

	return "";
}

void func_269(Hash hParam0, int iParam1) // Position - 0x10375 Hash - 0x1879777F ^0x1879777F
{
	func_333(hParam0, true, 0, false, false, 0, false, false);
	return;
}

void func_270(BOOL bParam0) // Position - 0x1038A Hash - 0xB3088780 ^0xB3088780
{
	func_498(bParam0);
	func_499(bParam0);
	func_500(bParam0);
	func_501(bParam0);
	func_502(bParam0);
	func_503(bParam0);
	func_504(bParam0);
	func_505(bParam0);
	return;
}

void func_271(eStackSize essParam0) // Position - 0x103C2 Hash - 0x9CB6315E ^0x8DF58CA9
{
	if (!func_207(essParam0))
		return;

	Global_1888801[essParam0 /*35*/] = -1;
	Global_1888801[essParam0 /*35*/].f_1 = 0;
	Global_1888801[essParam0 /*35*/].f_2 = 0;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_3))
	{
		DECORATOR::DECOR_REMOVE_ALL(Global_1888801[essParam0 /*35*/].f_3);
		VOLUME::DELETE_VOLUME(Global_1888801[essParam0 /*35*/].f_3);
	}

	Global_1888801[essParam0 /*35*/].f_3 = 0;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_4))
	{
		DECORATOR::DECOR_REMOVE_ALL(Global_1888801[essParam0 /*35*/].f_4);
		VOLUME::DELETE_VOLUME(Global_1888801[essParam0 /*35*/].f_4);
	}

	Global_1888801[essParam0 /*35*/].f_4 = 0;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_5))
	{
		DECORATOR::DECOR_REMOVE_ALL(Global_1888801[essParam0 /*35*/].f_5);
		VOLUME::DELETE_VOLUME(Global_1888801[essParam0 /*35*/].f_5);
	}

	Global_1888801[essParam0 /*35*/].f_5 = 0;
	Global_1888801[essParam0 /*35*/].f_9 = 0;
	Global_1888801[essParam0 /*35*/].f_10 = 1f;
	Global_1888801[essParam0 /*35*/].f_11 = -1f;
	Global_1888801[essParam0 /*35*/].f_13 = -1;
	Global_1888801[essParam0 /*35*/].f_14 = 0;
	Global_1888801[essParam0 /*35*/].f_15 = { 0f, 0f, 0f };
	Global_1888801[essParam0 /*35*/].f_20 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1888801[essParam0 /*35*/].f_22), "", 8);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1888801[essParam0 /*35*/].f_23), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1888801[essParam0 /*35*/].f_26), "", 32);
	Global_1888801[essParam0 /*35*/].f_31 = 0;
	Global_1888801[essParam0 /*35*/].f_31.f_1 = 0;
	Global_1888801[essParam0 /*35*/].f_31.f_2 = 0;
	Global_1888801[essParam0 /*35*/].f_31.f_3 = 0;
	return;
}

void func_272() // Position - 0x10551 Hash - 0xCE1E68EE ^0x67747496
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -734680005, "Item(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -177723663, "Item(%i)/position:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -968243019, "Item(%i)/position:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -646025442, "Item(%i)/position:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1958238202, "Item(%i)/type:text");
	return;
}

void func_273() // Position - 0x1065D Hash - 0xCE1E68EE ^0x45BEC351
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -734680005, "Item(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -177723663, "Item(%i)/position:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -968243019, "Item(%i)/position:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -646025442, "Item(%i)/position:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1958238202, "Item(%i)/type:text");
	return;
}

void func_274() // Position - 0x10769 Hash - 0xCE1E68EE ^0x8677D15
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -734680005, "Item(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -177723663, "Item(%i)/position:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -968243019, "Item(%i)/position:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -646025442, "Item(%i)/position:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1958238202, "Item(%i)/type:text");
	return;
}

eStackSize func_275(Hash hParam0) // Position - 0x10875 Hash - 0xCD57912C ^0xCD57912C
{
	switch (hParam0)
	{
		case joaat("region_rio_fort_mercer"):
			return 118;
	
		case -2085163631:
			return 0;
	
		case joaat("region_bgv_hangingdog"):
			return 16;
	
		case joaat("region_grz_colter"):
			return 43;
	
		case joaat("region_tal_aurora_basin"):
			return 107;
	
		case joaat("region_grz_theloft"):
			return 54;
	
		case joaat("region_gap_solomons_folly"):
			return 129;
	
		case joaat("region_grz_tempest_rim"):
			return 48;
	
		case joaat("region_blu_copperhead"):
			return 31;
	
		case joaat("region_bay_lagras"):
			return 3;
	
		case joaat("region_gre_civil_war_bride"):
			return 51;
	
		case joaat("region_bgv_missing_husband"):
			return 18;
	
		case joaat("region_scm_love_triangle"):
			return 103;
	
		case joaat("region_scm_dairy_farm"):
			return 100;
	
		case joaat("region_gua_cincotorres"):
			return 59;
	
		case joaat("region_roa_mossy_flats"):
			return 87;
	
		case joaat("region_roa_butchercreek"):
			return 82;
	
		case joaat("region_bay_siltwaterstrand"):
			return 10;
	
		case joaat("region_hrt_grangers_hoggery"):
			return 70;
	
		case joaat("region_roa_brandywine_drop"):
			return 81;
	
		case joaat("region_scm_clemenspoint"):
			return 98;
	
		case joaat("region_cho_rileys_charge"):
			return 123;
	
		case joaat("region_grz_cohutta"):
			return 52;
	
		case joaat("region_tal_trapper"):
			return 113;
	
		case joaat("region_bay_shadybelle"):
			return 9;
	
		case joaat("region_roa_happy_family"):
			return 84;
	
		case joaat("region_hrt_larnedsod"):
			return 72;
	
		case joaat("region_cml_sixpointcabin"):
			return 36;
	
		case joaat("region_rio_benedict_point"):
			return 117;
	
		case joaat("region_bay_serial_killer"):
			return 7;
	
		case joaat("region_tal_cochinay"):
			return 109;
	
		case joaat("region_roa_macleanshouse"):
			return 86;
	
		case joaat("region_scm_slave_pen"):
			return 106;
	
		case joaat("region_grz_wapiti"):
			return 56;
	
		case joaat("region_bgv_pronghorn"):
			return 22;
	
		case joaat("region_bgv_riggs_station"):
			return 23;
	
		case joaat("region_bgv_shack"):
			return 24;
	
		case joaat("region_tal_dead_settler"):
			return 108;
	
		case joaat("region_grz_millesani_claim"):
			return 45;
	
		case joaat("region_roa_rockyseven"):
			return 89;
	
		case joaat("region_roa_doverhill"):
			return 83;
	
		case joaat("region_scm_caligahall"):
			return 95;
	
		case joaat("region_scm_rhodes"):
			return 105;
	
		case joaat("region_cho_coots_chapel"):
			return 121;
	
		case joaat("region_scm_bulgerglade"):
			return 94;
	
		case joaat("region_gre_veteran"):
			return 55;
	
		case joaat("region_roa_trapper"):
			return 90;
	
		case joaat("region_grz_gunfight"):
			return 53;
	
		case joaat("region_tal_manzanitapost"):
			return 110;
	
		case joaat("region_rio_plain_view"):
			return 119;
	
		case joaat("region_scm_radleys_pasture"):
			return 104;
	
		case joaat("region_scm_clemenscove"):
			return 97;
	
		case joaat("region_roa_roanoke_valley"):
			return 88;
	
		case joaat("region_bay_orange_plantation"):
			return 6;
	
		case joaat("region_hrt_crop_farm"):
			return 66;
	
		case joaat("region_bgv_watsonscabin"):
			return 29;
	
		case joaat("region_cho_ridgewood_farm"):
			return 124;
	
		case joaat("region_gua_camp"):
			return 58;
	
		case joaat("region_grt_beechers"):
			return 37;
	
		case joaat("region_cho_twin_rocks"):
			return 125;
	
		case joaat("region_gap_gaptooth_breach"):
			return 114;
	
		case joaat("region_grz_starving_children"):
			return 47;
	
		case joaat("region_scm_braithwaitemanor"):
			return 93;
	
		case joaat("region_scm_lonniesshack"):
			return 102;
	
		case joaat("region_bay_crawdadwillies"):
			return 0;
	
		case joaat("region_hrt_downsranch"):
			return 68;
	
		case joaat("region_hrt_valentine"):
			return 76;
	
		case joaat("region_bgv_appleseedtimber"):
			return 11;
	
		case joaat("region_roa_vanhornmansion"):
			return 91;
	
		case joaat("region_grt_quakers_cove"):
			return 39;
	
		case joaat("region_scm_compsons_stead"):
			return 99;
	
		case joaat("region_roa_annesburg"):
			return 78;
	
		case joaat("region_gap_tumbleweed"):
			return 115;
	
		case joaat("region_grz_mountain_man"):
			return 46;
	
		case joaat("region_grz_wintermining_town"):
			return 49;
	
		case joaat("region_cml_bacchusbridge"):
			return 33;
	
		case joaat("region_gua_aguasdulces"):
			return 57;
	
		case joaat("region_bgv_lonemulestead"):
			return 17;
	
		case joaat("region_bgv_fortriggs"):
			return 15;
	
		case joaat("region_bay_merkinswaller"):
			return 2;
	
		case joaat("region_cml_oldfortwallace"):
			return 35;
	
		case joaat("region_roa_black_balsam_rise"):
			return 80;
	
		case joaat("region_bgv_blackboneforest_trapper"):
			return 13;
	
		case joaat("region_roa_beechers_c"):
			return 63;
	
		case joaat("region_centralunionrr"):
			return 128;
	
		case joaat("region_hen_macfarlanes_ranch"):
			return 126;
	
		case joaat("region_bay_saint_denis"):
			return 5;
	
		case joaat("region_scm_horse_shop"):
			return 101;
	
		case joaat("region_blu_sisika"):
			return 32;
	
		case joaat("region_bgv_paintedsky"):
			return 21;
	
		case joaat("region_bgv_valley_view"):
			return 27;
	
		case joaat("region_hrt_loony_cult"):
			return 73;
	
		case joaat("region_grz_frozen_explorer"):
			return 44;
	
		case joaat("region_hen_thieves_landing"):
			return 127;
	
		case joaat("region_tal_pacificunionrr"):
			return 111;
	
		case joaat("region_hrt_abandoned_mill"):
			return 62;
	
		case joaat("region_bay_serendipity"):
			return 8;
	
		case joaat("region_bgv_dakotariver_trapper"):
			return 14;
	
		case joaat("region_roa_isolationist"):
			return 85;
	
		case joaat("region_grz_dead_rival"):
			return 41;
	
		case joaat("region_grz_calumetravine"):
			return 50;
	
		case joaat("region_cml_dino_lady"):
			return 34;
	
		case joaat("region_bgv_wallace_station"):
			return 28;
	
		case joaat("region_roa_beaverhollow"):
			return 79;
	
		case joaat("region_bgv_strawberry"):
			return 26;
	
		case joaat("region_grz_chezporter"):
			return 42;
	
		case joaat("region_blu_canebreak_manor"):
			return 30;
	
		case joaat("region_grz_adlerranch"):
			return 40;
	
		case joaat("region_scm_catfishjacksons"):
			return 96;
	
		case joaat("region_roa_vanhornpost"):
			return 92;
	
		case joaat("region_cho_armadillo"):
			return 120;
	
		case joaat("region_grt_blackwater"):
			return 38;
	
		case joaat("region_bgv_beryls_dream"):
			return 12;
	
		case joaat("region_bay_macombs_end"):
			return 1;
	
		case joaat("region_cho_don_julio_house"):
			return 122;
	
		case joaat("region_hrt_swansons_station"):
			return 75;
	
		case joaat("region_bgv_monto_rest"):
			return 19;
	
		case joaat("region_hrt_cumberlandfalls"):
			return 67;
	
		case joaat("region_hrt_carmodydell"):
			return 64;
	
		case joaat("region_gua_manicato"):
			return 61;
	
		case joaat("region_hrt_emeraldranch"):
			return 69;
	
		case joaat("region_bay_lakay"):
			return 4;
	
		case joaat("region_gua_lacapilla"):
			return 60;
	
		case joaat("region_bgv_owanjila_dam"):
			return 20;
	
		case joaat("region_hrt_cornwallkerosene"):
			return 65;
	
		case joaat("region_gap_rathskeller_fork"):
			return 116;
	
		case joaat("region_roa_aberdeenpigfarm"):
			return 77;
	
		case joaat("region_hrt_luckyscabin"):
			return 74;
	
		case joaat("region_hrt_horseshoeoverlook"):
			return 71;
	
		case joaat("region_bgv_shepherds_rise"):
			return 25;
	
		case joaat("region_tal_tannersreach"):
			return 112;
	
		default:
		
	}

	return -1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(eStackSize essParam0) // Position - 0x10E1E Hash - 0xA17D549C ^0x45C814CE
{
	switch (essParam0)
	{
		case -1:
			return "REGION_INVALID";
	
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
	
		case 1:
			return "REGION_BAY_MACOMBS_END";
	
		case 2:
			return "REGION_BAY_MERKINSWALLER";
	
		case 3:
			return "REGION_BAY_LAGRAS";
	
		case 4:
			return "REGION_BAY_LAKAY";
	
		case 5:
			return "REGION_BAY_SAINT_DENIS";
	
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
	
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
	
		case 8:
			return "REGION_BAY_SERENDIPITY";
	
		case 9:
			return "REGION_BAY_SHADYBELLE";
	
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
	
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
	
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
	
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
	
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
	
		case 15:
			return "REGION_BGV_FORTRIGGS";
	
		case 16:
			return "REGION_BGV_HANGINGDOG";
	
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
	
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
	
		case 19:
			return "REGION_BGV_MONTO_REST";
	
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
	
		case 21:
			return "REGION_BGV_PAINTEDSKY";
	
		case 22:
			return "REGION_BGV_PRONGHORN";
	
		case 23:
			return "REGION_BGV_RIGGS_STATION";
	
		case 24:
			return "REGION_BGV_SHACK";
	
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
	
		case 26:
			return "REGION_BGV_STRAWBERRY";
	
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
	
		case 28:
			return "REGION_BGV_WALLACE_STATION";
	
		case 29:
			return "REGION_BGV_WATSONSCABIN";
	
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
	
		case 31:
			return "REGION_BLU_COPPERHEAD";
	
		case 32:
			return "REGION_BLU_SISIKA";
	
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
	
		case 34:
			return "REGION_CML_DINO_LADY";
	
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
	
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
	
		case 37:
			return "REGION_GRT_BEECHERS";
	
		case 38:
			return "REGION_GRT_BLACKWATER";
	
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
	
		case 40:
			return "REGION_GRZ_ADLERRANCH";
	
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
	
		case 42:
			return "REGION_GRZ_CHEZPORTER";
	
		case 43:
			return "REGION_GRZ_COLTER";
	
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
	
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
	
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
	
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
	
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
	
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
	
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
	
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
	
		case 52:
			return "REGION_GRZ_COHUTTA";
	
		case 53:
			return "REGION_GRZ_GUNFIGHT";
	
		case 54:
			return "REGION_GRZ_THELOFT";
	
		case 55:
			return "REGION_GRE_VETERAN";
	
		case 56:
			return "REGION_GRZ_WAPITI";
	
		case 57:
			return "REGION_GUA_AGUASDULCES";
	
		case 58:
			return "REGION_GUA_CAMP";
	
		case 59:
			return "REGION_GUA_CINCOTORRES";
	
		case 60:
			return "REGION_GUA_LACAPILLA";
	
		case 61:
			return "REGION_GUA_MANICATO";
	
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
	
		case 63:
			return "REGION_ROA_BEECHERS_C";
	
		case 64:
			return "REGION_HRT_CARMODYDELL";
	
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
	
		case 66:
			return "REGION_HRT_CROP_FARM";
	
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
	
		case 68:
			return "REGION_HRT_DOWNSRANCH";
	
		case 69:
			return "REGION_HRT_EMERALDRANCH";
	
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
	
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
	
		case 72:
			return "REGION_HRT_LARNEDSOD";
	
		case 73:
			return "REGION_HRT_LOONY_CULT";
	
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
	
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
	
		case 76:
			return "REGION_HRT_VALENTINE";
	
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
	
		case 78:
			return "REGION_ROA_ANNESBURG";
	
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
	
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
	
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
	
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
	
		case 83:
			return "REGION_ROA_DOVERHILL";
	
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
	
		case 85:
			return "REGION_ROA_ISOLATIONIST";
	
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
	
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
	
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
	
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
	
		case 90:
			return "REGION_ROA_TRAPPER";
	
		case 91:
			return "REGION_ROA_VANHORNMANSION";
	
		case 92:
			return "REGION_ROA_VANHORNPOST";
	
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
	
		case 94:
			return "REGION_SCM_BULGERGLADE";
	
		case 95:
			return "REGION_SCM_CALIGAHALL";
	
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
	
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
	
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
	
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
	
		case 100:
			return "REGION_SCM_DAIRY_FARM";
	
		case 101:
			return "REGION_SCM_HORSE_SHOP";
	
		case 102:
			return "REGION_SCM_LONNIESSHACK";
	
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
	
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
	
		case 105:
			return "REGION_SCM_RHODES";
	
		case 106:
			return "REGION_SCM_SLAVE_PEN";
	
		case 107:
			return "REGION_TAL_AURORA_BASIN";
	
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
	
		case 109:
			return "REGION_TAL_COCHINAY";
	
		case 110:
			return "REGION_TAL_MANZANITAPOST";
	
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
	
		case 112:
			return "REGION_TAL_TANNERSREACH";
	
		case 113:
			return "REGION_TAL_TRAPPER";
	
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
	
		case 115:
			return "REGION_GAP_TUMBLEWEED";
	
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
	
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
	
		case 118:
			return "REGION_RIO_FORT_MERCER";
	
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
	
		case 120:
			return "REGION_CHO_ARMADILLO";
	
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
	
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
	
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
	
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
	
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
	
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
	
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
	
		case 128:
			return "REGION_CENTRALUNIONRR";
	
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
	
		default:
		
	}

	return "REGION_INVALID";
}

void func_277() // Position - 0x114E3 Hash - 0xCE1E68EE ^0x6F32CFE8
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, -258890676, "Regions");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 1489686829, "Region(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 596301644, "Region(%i)/fPedRangeMult:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 325957282, "Region(%i)/fScenarioRangeMult:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 426139466, "Region(%i)/iScenarioPedDesinty:text");
	return;
}

BOOL func_278(Any anParam0, eStackSize essParam1, char* sParam2) // Position - 0x1154F Hash - 0xCA40D015 ^0xA3B6689
{
	var unk;
	int num;

	unk = *anParam0;
	unk.f_2 = 1276999770;
	unk.f_3 = func_506(essParam1);

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 1459980739;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, &unk);
		unk.f_2 = -158797272;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(sParam2->f_8), &unk);
		unk.f_2 = -1484939920;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
		sParam2->f_16 = func_507(num);
		unk.f_2 = 670069251;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(sParam2->f_17), &unk);
		sParam2->f_18 = 0;
		unk.f_2 = 1422201736;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk))
			if (num == 1)
				sParam2->f_18 = sParam2->f_18 | 8;
	
		unk.f_2 = 865021745;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk))
			if (num == 1)
				sParam2->f_18 = sParam2->f_18 | 1;
	
		unk.f_2 = 2078335853;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk))
			if (num == 1)
				sParam2->f_18 = sParam2->f_18 | 4;
	
		unk.f_2 = 899379634;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk))
			if (num == 1)
				sParam2->f_18 = sParam2->f_18 | 64;
	
		unk.f_2 = 414670492;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk))
			if (num == 1)
				sParam2->f_18 = sParam2->f_18 | 16;
	
		unk.f_2 = -2025494336;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk))
		{
			if (num == 1)
			{
				sParam2->f_18 = sParam2->f_18 | 32;
				unk.f_2 = 2028394285;
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
				sParam2->f_19 = func_507(num);
			}
			else
			{
				sParam2->f_19 = 0;
			}
		}
		else
		{
			sParam2->f_19 = 0;
		}
	}
	else
	{
		return false;
	}

	return true;
}

Vector3 func_279(eStackSize essParam0) // Position - 0x116E7 Hash - 0x19C525E7 ^0x19C525E7
{
	if (!func_207(essParam0))
		return 0f, 0f, 0f;

	switch (essParam0)
	{
		case 4:
			return 2222.172f, -772.852f, 42.662f;
	
		case 9:
			return 1904.4143f, -1861.1455f, 46.3769f;
	
		case 11:
			return -1409.3118f, -216.6785f, 104.2144f;
	
		case 22:
			return -2593.808f, 457.4836f, 146.9974f;
	
		case 37:
			return -1640.1584f, -1361.4865f, 84.5064f;
	
		case 43:
			return -1356.339f, 2443.121f, 308.1876f;
	
		case 58:
			return 1422.6255f, -7332.473f, 80.5977f;
	
		case 71:
			return -125.85f, -39.599f, 96.0908f;
	
		case 79:
			return 2342.7793f, 1359.0488f, 106.3936f;
	
		case 98:
			return 654.1462f, -1245.725f, 43.7026f;
	
		case 109:
			return -2419.6f, -997f, 166.8f;
	
		case 125:
			return -3962.0208f, -2137.9565f, -5.9562f;
	
		case 127:
			return -1406.7f, -2308.9f, 42.5f;
	
		default:
		
	}

	return func_508(essParam0, false);
}

void func_280(eStackSize essParam0, BOOL bParam1) // Position - 0x11846 Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] - Global_23118[essParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] - Global_1058888.f_40545[essParam0 /*11*/] && bParam1;
	return;
}

void func_281(eStackSize essParam0, int iParam1) // Position - 0x1189F Hash - 0xF9C34531 ^0xD65B3D24
{
	if (!func_207(essParam0))
		return;

	Global_1888801[essParam0 /*35*/].f_21 = Global_1888801[essParam0 /*35*/].f_21 || iParam1;
	return;
}

BOOL func_282(eStackSize essParam0, int iParam1) // Position - 0x118CB Hash - 0xA98B69C6 ^0xAD9FDA10
{
	if (essParam0 < 0 || essParam0 >= 150)
		return false;

	return Global_1888801[essParam0 /*35*/].f_21 && iParam1 != false;
}

int func_283(eStackSize essParam0) // Position - 0x118F8 Hash - 0x224FC50D ^0x224FC50D
{
	if (essParam0 < 0)
		return -1;
	else if (essParam0 <= 10)
		return 0;
	else if (essParam0 <= 29)
		return 1;
	else if (essParam0 <= 32)
		return 2;
	else if (essParam0 <= 36)
		return 3;
	else if (essParam0 <= 39)
		return 4;
	else if (essParam0 <= 49)
		return 7;
	else if (essParam0 <= 56)
		return 6;
	else if (essParam0 <= 61)
		return 8;
	else if (essParam0 <= 76)
		return 9;
	else if (essParam0 <= 92)
		return 10;
	else if (essParam0 <= 106)
		return 11;
	else if (essParam0 <= 113)
		return 12;
	else if (essParam0 <= 116)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

BOOL func_284(Any anParam0, eStackSize essParam1, BOOL* pbParam2) // Position - 0x119F4 Hash - 0xCA40D015 ^0x241F5F4B
{
	var unk;

	unk = *anParam0;
	unk.f_2 = 1252559615;
	unk.f_3 = func_506(essParam1);

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 1711029673;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(pbParam2, &unk);
		unk.f_2 = 1758612600;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(pbParam2->f_1), &unk);
		unk.f_2 = 115903213;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(pbParam2->f_2), &unk);
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_285(eStackSize essParam0) // Position - 0x11A63 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_207(essParam0))
		return false;

	return func_210(essParam0, 33554432);
}

BOOL func_286(eStackSize essParam0) // Position - 0x11A84 Hash - 0xAFA6364 ^0xAFA6364
{
	if (!func_207(essParam0))
		return 0;

	switch (essParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return 1;
	}

	return 0;
}

BOOL func_287(eStackSize essParam0) // Position - 0x11AF2 Hash - 0x97598EC0 ^0xADF7FB13
{
	if (!func_207(essParam0))
		return false;

	return Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !func_509(essParam0);
}

void func_288() // Position - 0x11B32 Hash - 0xEC43F0CC ^0x3A6B7E3E
{
	Global_1894052[0 /*3*/] = 0;
	Global_1894052[0 /*3*/].f_1 = -1500f;
	Global_1894052[0 /*3*/].f_2 = 1500f;
	Global_1894052[1 /*3*/] = 2;
	Global_1894052[1 /*3*/].f_1 = 1500f;
	Global_1894052[1 /*3*/].f_2 = 1500f;
	Global_1894052[2 /*3*/] = 8;
	Global_1894052[2 /*3*/].f_1 = -1500f;
	Global_1894052[2 /*3*/].f_2 = -1500f;
	Global_1894052[3 /*3*/] = 10;
	Global_1894052[3 /*3*/].f_1 = 1500f;
	Global_1894052[3 /*3*/].f_2 = -1500f;
	return;
}

void func_289(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, float fParam7, var uParam8, int iParam9, int iParam10) // Position - 0x11BCC Hash - 0x3667B7D7 ^0x3667B7D7
{
	int num;
	int num2;
	int num3;

	num = iParam9 + 1;
	num2 = iParam9 + iParam10;
	num3 = num2 + 1;

	if (fParam0 > fParam6)
	{
		uParam8->[iParam9] = 0;
		uParam8->[num2] = 0;
	}

	if (fParam3 < fParam6)
	{
		uParam8->[num] = 0;
		uParam8->[num3] = 0;
	}

	if (fParam0.f_1 > fParam7)
	{
		uParam8->[num2] = 0;
		uParam8->[num3] = 0;
	}

	if (fParam3.f_1 < fParam7)
	{
		uParam8->[iParam9] = 0;
		uParam8->[num] = 0;
	}

	uParam8->[iParam9] == 0 && uParam8->[num2] == 0 && uParam8->[num] == 0 && uParam8->[num3] == 0;
	return;
}

void func_290(var uParam0, int iParam1, int iParam2) // Position - 0x11C75 Hash - 0x44BC1FF6 ^0x44BC1FF6
{
	int num;
	int num2;
	int num3;

	num = iParam1 + 1;
	num2 = iParam1 + iParam2;
	num3 = num2 + 1;
	uParam0->[iParam1] = 0;
	uParam0->[num] = 0;
	uParam0->[num2] = 0;
	uParam0->[num3] = 0;
	return;
}

void func_291(int iParam0, BOOL bParam1) // Position - 0x11CAC Hash - 0xEACEAA66 ^0xA3FE46E1
{
	if (Global_1934765.f_69.f_201 >= 100)
		return;

	Global_1934765.f_69[Global_1934765.f_69.f_201 /*2*/] = iParam0;
	Global_1934765.f_69[Global_1934765.f_69.f_201 /*2*/].f_1 = bParam1;
	Global_1934765.f_69.f_201 = Global_1934765.f_69.f_201 + 1;

	if (bParam1)
	{
	}

	return;
}

void func_292(int iParam0) // Position - 0x11D04 Hash - 0xA92C4FC3 ^0x7ED1E39C
{
	func_510(iParam0, -1);
	func_511(iParam0, -15);
	return;
}

int func_293(int iParam0) // Position - 0x11D1C Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_46(iParam0))
		return -1;

	return func_512(iParam0);
}

void func_294() // Position - 0x11D38 Hash - 0x18D7E5F2 ^0x5C6AEB0B
{
	if (func_27() != -1)
		return;

	if (!func_58())
		return;

	func_513(&(Global_40.f_40));
	return;
}

void func_295() // Position - 0x11D5F Hash - 0xB3CB4931 ^0x755BDF60
{
	int i;

	for (i = 0; i < Global_40.f_11029; i = i + 1)
	{
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[i /*373*/].f_1))
		{
			Global_40.f_11029[i /*5*/].f_1 = { VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[i /*373*/].f_1) };
			Global_40.f_11029[i /*5*/].f_4 = VEHICLE::_GET_TRAIN_DIRECTION_FROM_INDEX(Global_1425371[i /*373*/].f_1);
		}
	}

	return;
}

BOOL func_296() // Position - 0x11DC8 Hash - 0x34E20D42 ^0x524A20A4
{
	return !_IS_NULL_VECTOR(Global_1310720.f_1);
}

eStackSize func_297() // Position - 0x11DDD Hash - 0xC5B83CF5 ^0xC3CA9E16
{
	return Global_40.f_4283.f_4;
}

void func_298(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x11DED Hash - 0xE4C93DB8 ^0x7B7837CF
{
	float num;
	float num2;

	num = 10000000f;
	num2 = 10000000f;

	if (func_206())
		num = func_514(uParam0, Global_40.f_6);

	if (func_515(33554432))
		if (!func_182(Global_40.f_2, 0f, 0f, 0f, 1056964608, true))
			num2 = func_514(uParam0, Global_40.f_2);

	if (num2 > 150f && num > 150f)
	{
		*uParam3 = { Global_36 };
		*iParam4 = 6;
		return;
	}

	if (num < num2)
	{
		*uParam3 = { Global_40.f_6 };
		*iParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*iParam4 = 3;
	}

	return;
}

float func_299(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x11EA1 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_300() // Position - 0x11EBF Hash - 0xA98FB788 ^0x419B7979
{
	float value;
	int value2;
	float num;
	int value3;
	int value4;
	float num2;
	var statId;
	float num3;
	var unk2;
	int num4;
	int i;
	int num5;
	int j;

	if (!func_77(Global_1935630, 8192))
		return;

	if (func_39(32768))
		return;

	func_516(&Global_1935630, 8192);
	value = 0f;
	value = value + (0.9259259f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp1"))));
	value = value + (0.25252524f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp2"))));
	value = value + (0.29239765f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp3"))));
	value = value + (0.46296296f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp4"))));
	value = value + (0.9259259f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp5"))));
	value = value + (0.30864197f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp6"))));
	value = value + (5.5555553f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp7"))));
	value = value + (0.6944444f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp8"))));
	value = value + (0.37037036f * BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("missions_chp9"))));
	value = value + (0.5f * func_518(10f, BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("rc_strands")))));
	value = value + (0.6f * func_518(5f, BUILTIN::TO_FLOAT(func_517(joaat("completed"), joaat("rc_strands_bounty")))));
	value = value + (0.2f * func_518(25f, BUILTIN::TO_FLOAT(func_519(joaat("unique_beats_completed")))));
	value = value + (2f * func_518(1f, BUILTIN::TO_FLOAT(func_519(joaat("gang_ambush_encountered")))));
	value = value + (0.33333334f * func_518(6f, BUILTIN::TO_FLOAT(func_519(joaat("gang_hideout_completed")))));
	value = value + (3f * func_518(1f, BUILTIN::TO_FLOAT(func_519(joaat("discoverable_found")))));
	value2 = func_520();
	value = value + (0.11111111f * func_518(9f, BUILTIN::TO_FLOAT(value2)));
	num = BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES")));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS"))));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES"))));
	value = value + func_518(1f, num);
	value = value + (0.05f * func_518(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_522())));

	if (func_523(40))
		value = value + (1f * 1f);

	if (func_523(42))
		value = value + (1f * 1f);

	if (func_523(48))
		value = value + (1f * 1f);

	if (func_523(50))
		value = value + (1f * 1f);

	if (func_523(52))
		value = value + (1f * 1f);

	num = BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("treasure_hunter"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("treasure_hunter"), 499813453));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("treasure_hunter"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("treasure_hunter"), 666607663)));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("treasure_hunter"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("treasure_hunter"), -220219788)));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("treasure_hunter"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("treasure_hunter"), 218622660)));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("treasure_hunter"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("treasure_hunter"), 390004462)));
	num = func_521(num, BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("treasure_hunter"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("treasure_hunter"), 6410548)));
	value = value + (1f * func_518(1f, num));
	value = value + (0.2f * func_518(5f, BUILTIN::TO_FLOAT(func_519(joaat("shack_found")))));
	value = value + (0.2f * func_518(5f, BUILTIN::TO_FLOAT(func_517(joaat("Kills"), joaat("legendary_animals")))));
	value = value + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50));
	value = value + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10));
	value = value + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10));
	value = value + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS"));
	value = value + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("herbs")), 20)) / BUILTIN::TO_FLOAT(20));
	value = value + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("horses")), 10)) / BUILTIN::TO_FLOAT(10));
	value = value + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48));
	func_525(&value3, &value4);
	value = value + (2f * func_518(BUILTIN::TO_FLOAT(value3) / BUILTIN::TO_FLOAT(value4), 1f));
	value = value + (2f * func_518(1f, BUILTIN::TO_FLOAT(func_526(joaat("horses_reached_max_bond")))));
	num2 = BUILTIN::TO_FLOAT(func_527());
	value = value + ((3f * num2) / BUILTIN::TO_FLOAT(9));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("blackjack")))));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("dominoes_hand")))));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("five_finger")))));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("poker_hand")))));
	value = value + (0.2f * func_518(5f, BUILTIN::TO_FLOAT(func_519(joaat("special_ped_interaction")))));
	value = value + (0.5f * func_518(1f, BUILTIN::TO_FLOAT(func_519(joaat("baths_taken")))));
	value = value + (0.5f * func_518(1f, BUILTIN::TO_FLOAT(func_519(joaat("shows_seen")))));
	value = value + (0.5f * func_518(1f, BUILTIN::TO_FLOAT(func_519(joaat("theatre_visits")))));
	value = value + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("made_recipe_type"), joaat("AMMO")))));
	value = value + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("made_recipe_type"), joaat("FOOD")))));
	value = value + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("made_recipe_type"), joaat("horse_care")))));
	value = value + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("made_recipe_type"), joaat("remedies")))));
	value = value + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("made_recipe_type"), joaat("WEAPONS")))));
	value = value + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("made_recipe_type"), joaat("Hunting")))));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("rob_completed"), joaat("coach")))));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("rob_completed"), joaat("Home")))));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("rob_completed"), joaat("SHOP")))));
	value = value + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(joaat("rob_completed"), joaat("train")))));
	statId = { func_528(joaat("TOTAL_PROGRESS_MADE")) };
	num3 = func_529(statId);
	STATS::_0xE141F6B40B1E3683(&statId, value);
	value > num3;

	if (func_46(Global_1898437))
	{
		unk2 = 50;
		num4 = 0;
	
		for (i = 0; i < Global_1898329; i = i + 1)
		{
			if (!func_46(Global_1898330[i]))
			{
			}
			else
			{
				num5 = func_512(Global_1898330[i]);
			
				if (num5 == 3 || num5 == 4)
				{
				}
				else if (num5 != 1 && num5 != 2)
				{
					func_530(Global_1898330[i]);
				}
				else
				{
					func_531(i, false);
				
					if (func_111(Global_1898330[i]) == 1)
					{
						unk2[num4] = func_532(Global_1898330[i]);
						num4 = num4 + 1;
					
						if (num4 >= 50)
							break;
					}
				}
			}
		}
	
		if (num4 < 50)
		{
			for (j = 0; j < Global_40.f_450; j = j + 1)
			{
				if (Global_40.f_450[j] > -1 && Global_40.f_450[j] < 200)
				{
					unk2[num4] = func_532(Global_1347702[Global_40.f_450[j] /*49*/].f_15);
					num4 = num4 + 1;
				
					if (num4 >= 50)
						break;
				}
			}
		}
	
		if (value > num3)
			TELEMETRY::_TELEMETRY_GAME_PROGRESS(func_532(Global_1898437), &unk2);
	}

	return;
}

BOOL func_301() // Position - 0x1297F Hash - 0xED82CFC2 ^0x670D1410
{
	if (func_533(-524145696))
	{
		if (func_534(809554858))
			return true;
	
		func_535(-524145696);
	}

	if (func_533(-1223121209))
	{
		if (func_534(-451832572))
			return true;
	
		func_535(-1223121209);
	}

	if (func_533(-1053549743))
	{
		if (func_534(1033721560) || func_536(func_458(105), Global_36))
			return true;
	
		func_535(-1053549743);
	}

	if (func_533(1649996811))
	{
		if (func_534(joaat("bee_01_camp")))
			return true;
	
		func_535(1649996811);
	}

	if (func_533(1478132521))
	{
		if (func_537(398639187, 1120403456))
			return true;
	
		func_535(1478132521);
	}

	return false;
}

void func_302(Hash hParam0) // Position - 0x12A5B Hash - 0x78302BA0 ^0x558F2DE9
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REQUEST_IPL_HASH(hParam0);

	return;
}

BOOL func_303() // Position - 0x12A73 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_304(int iParam0) // Position - 0x12A84 Hash - 0x5D737F18 ^0xF5C40353
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_1934765.f_21[num2], offset);
	return;
}

void func_305() // Position - 0x12AAE Hash - 0x36920A70 ^0x91494A
{
	int proxyInteriorIndex;
	int i;
	int num;
	int num2;
	int j;
	int proxyInteriorIndex2;
	int k;
	int num3;
	int num4;
	int l;

	if (!func_345(45))
	{
		if (Global_1934765.f_290)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_beechers_a"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_beechers_b"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_beechers_c"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_blackwater_endsum"));
			Global_1934765.f_290 = 0;
		}
	
		if (Global_1934765.f_292)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_blackwater_endsum"));
			Global_1934765.f_292 = 0;
		}
	
		if (!Global_1934765.f_291 && func_352(38))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_blackwater_regular"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_291 = 1;
		}
	
		func_313(-37875204);
		func_313(258104717);
		func_313(-76700394);
		func_313(1614255891);
		func_313(1861460906);
		func_313(1044079550);
		func_328("nav_shack_BA");
		func_302(-1079295176);
		func_302(894787561);
		func_313(-1276109918);
		func_313(-1386423483);
		func_313(-1405375965);
		func_313(1277540472);
		func_313(-1331593143);
		func_313(1133172356);
		func_313(-559257162);
		func_328("nav_shack_BB");
		func_302(979670262);
		func_302(418666411);
		func_302(651621232);
		func_313(-574996782);
		func_313(1169511062);
		func_313(-1266106154);
		func_313(-1377975054);
		func_313(897624424);
		func_313(-2111718052);
		func_328("nav_shack_BC");
		func_302(-165202905);
		func_302(-1327148782);
		func_302(-1965378386);
		func_313(175578406);
		func_313(-686953321);
		func_313(-1737485501);
		func_313(-739754595);
		func_313(942470447);
		func_313(-1859413313);
		func_313(489834626);
		func_302(-1667265438);
		func_302(54029413);
		func_302(-1070234238);
		func_302(-931280709);
		func_302(-1170563128);
		func_302(1394163483);
		func_328("nav_std_train_station_es");
		func_313(-5339556);
		func_313(1258244391);
		func_313(1343343014);
		func_313(-2082201137);
		func_313(1641449717);
		func_313(739412171);
		func_313(-501793326);
		func_313(466168676);
		func_313(1479152994);
		func_328("nav_blackwater_endless_summer");
		func_302(1173561253);
		func_302(1470738186);
		func_302(-1632348233);
		func_313(903666582);
		func_302(1081087978);
		func_328("nav_val_es");
		func_328("nav_val_es_saloon_lockdown");
		func_328("nav_val_es_full_lockdown");
		func_313(joaat("ann_05_house_es"));
		func_302(joaat("ann_05_house"));
		func_302(-693132475);
		func_328("nav_annesburg_es");
		func_313(158063004);
		func_328("nav_coots_graves");
		func_313(-1112373128);
		func_313(-891994084);
		func_313(-84516711);
		func_313(-657241692);
		func_302(1596089211);
		func_302(-2133417899);
		func_302(1274804496);
		func_302(1597665303);
		func_302(116162819);
		func_328("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		proxyInteriorIndex = func_538(2087609309);
	
		if (!GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(proxyInteriorIndex))
			GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(proxyInteriorIndex, true);
	
		func_313(-1380983970);
		func_313(-1912028958);
		func_302(563944718);
		func_328("nav_bridge_to_old_world");
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, true);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, true);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, true);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, true);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, true);
	
		if (func_27() == -1)
		{
			if (func_539(56, &num, &num2, false, false))
			{
				for (i = 0; i < (num2 - num) + 1; i = i + 1)
				{
					func_319(num + i, 32);
				}
			}
		
			if (func_539(65, &num, &num2, false, false))
			{
				for (i = 0; i < (num2 - num) + 1; i = i + 1)
				{
					func_319(num + i, 32);
				}
			}
		
			if (!func_72(0, false, true))
			{
				func_319(944, 32);
				func_319(940, 32);
			}
		
			func_540(joaat("META_OUTFIT_DEFAULT"));
		
			for (j = 0; j < 13; j = j + 1)
			{
				func_542(j, func_541(j));
			}
		}
	}
	else
	{
		if (!Global_1934765.f_290)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_beechers_a"), -1550f, 250f, 0, 0);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_beechers_b"), 1440f, -1580f, 0, 0);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_beechers_c"), 1770f, 480f, 0, 0);
			Global_1934765.f_290 = 1;
		}
	
		if (!Global_1934765.f_292)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_blackwater_endsum"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_292 = 1;
		}
	
		if (Global_1934765.f_291)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_blackwater_regular"));
			Global_1934765.f_291 = 0;
		}
	
		func_302(-37875204);
		func_302(258104717);
		func_302(-76700394);
		func_302(1614255891);
		func_302(1861460906);
		func_302(1044079550);
		func_327("nav_shack_BA");
		func_313(-1079295176);
		func_313(894787561);
		func_302(-1276109918);
		func_302(-1386423483);
		func_302(-1405375965);
		func_302(1277540472);
		func_302(-1331593143);
		func_302(1133172356);
		func_302(-559257162);
		func_327("nav_shack_BB");
		func_313(979670262);
		func_313(418666411);
		func_313(651621232);
		func_302(-574996782);
		func_302(1169511062);
		func_302(-1266106154);
		func_302(-1377975054);
		func_302(-2111718052);
		func_302(897624424);
		func_327("nav_shack_BC");
		func_313(-165202905);
		func_313(-1327148782);
		func_313(-1965378386);
		func_313(-1667265438);
		func_313(54029413);
		func_313(-1070234238);
		func_313(-931280709);
		func_313(-1170563128);
		func_313(1394163483);
		func_302(175578406);
		func_302(489834626);
		func_302(-686953321);
		func_302(-1737485501);
		func_302(-739754595);
		func_302(942470447);
		func_302(-1859413313);
		func_327("nav_std_train_station_es");
		func_313(1173561253);
		func_313(1470738186);
		func_313(-1632348233);
		func_302(-5339556);
		func_302(1258244391);
		func_302(1343343014);
		func_302(-2082201137);
		func_302(1641449717);
		func_302(739412171);
		func_302(-501793326);
		func_302(466168676);
		func_302(1479152994);
		func_327("nav_blackwater_endless_summer");
		func_313(1081087978);
		func_302(903666582);
	
		if (func_310(-1215445344))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_full_lockdown");
		}
		else if (func_310(-1763509974))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_saloon_lockdown");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
	
		func_313(joaat("ann_05_house"));
		func_313(-693132475);
		func_302(joaat("ann_05_house_es"));
		func_327("nav_annesburg_es");
		func_302(158063004);
		func_327("nav_coots_graves");
		func_313(1596089211);
		func_313(-2133417899);
		func_313(1274804496);
		func_313(1597665303);
		func_313(116162819);
		func_302(-1112373128);
		func_302(-891994084);
		func_302(-84516711);
		func_302(-657241692);
		func_327("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		proxyInteriorIndex2 = func_538(2087609309);
	
		if (GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(proxyInteriorIndex2))
			GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(proxyInteriorIndex2, false);
	
		func_302(-1380983970);
		func_313(563944718);
		func_302(-1912028958);
		func_327("nav_bridge_to_old_world");
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, false);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, false);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, false);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, false);
	
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, false);
	
		if (func_27() == -1)
		{
			if (func_539(56, &num3, &num4, false, false))
			{
				for (k = 0; k < (num4 - num3) + 1; k = k + 1)
				{
					func_320(num3 + k, 32);
				}
			}
		
			if (func_539(65, &num3, &num4, false, false))
			{
				for (k = 0; k < (num4 - num3) + 1; k = k + 1)
				{
					func_320(num3 + k, 32);
				}
			}
		
			func_320(944, 32);
			func_320(940, 32);
			func_540(1689938120);
		
			for (l = 0; l < 13; l = l + 1)
			{
				func_542(l, func_543(l));
			}
		}
	}

	return;
}

void func_306() // Position - 0x134AA Hash - 0xF2BD5153 ^0xEA38FCA4
{
	if (func_523(38))
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", true);
	else
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", false);

	if (func_544())
		func_545(56);
	else
		func_546(56);

	if (func_345(44))
	{
		func_545(105);
		func_545(95);
	}
	else
	{
		func_546(105);
		func_546(95);
	}

	if (func_285(105))
		func_547(func_506(105));
	else if (func_548(105))
		func_549(105);

	if (func_285(95))
		func_547(func_506(95));
	else if (func_548(95))
		func_549(95);

	func_313(481636996);
	func_304(212);
	func_304(211);
	func_304(213);
	func_304(214);
	func_304(215);
	func_304(216);
	func_304(217);
	func_304(218);
	func_304(219);
	func_304(220);
	func_304(221);
	func_304(222);
	func_304(223);
	func_304(224);
	func_304(225);
	func_302(1454866069);
	func_302(-383442850);
	func_302(531960211);
	func_302(joaat("dis_scm_cc_graffiti"));
	func_302(-2041779893);
	func_302(1123990218);
	func_302(joaat("bep_01_cc_graffiti"));
	func_302(joaat("two_01_cc_graffiti"));
	func_302(joaat("dis_gap_cc_graffiti"));
	func_302(-1111286486);
	func_302(joaat("a_water_ice_cc_graffiti"));
	func_302(107317036);
	func_302(1193229750);
	func_302(1492183352);
	func_302(joaat("van_02_cc_graffiti"));
	func_302(-1664053323);
	func_302(-1375030991);
	func_302(-313992757);
	func_304(205);
	func_304(206);
	func_304(207);
	func_304(208);
	func_304(209);
	func_304(210);
	func_302(-1176501741);

	if (!func_339(44))
		func_304(26);
	else
		func_314(26);

	func_269(1121239638, 1);
	func_269(-1677757270, 1);
	func_269(906662604, 1);
	func_269(-310410837, 1);
	func_314(185);
	func_304(184);
	func_302(642301973);
	func_313(1260721433);
	func_550();
	func_302(626046501);
	return;
}

void func_307() // Position - 0x136F2 Hash - 0x3F1C81D8 ^0x3F1C81D8
{
	Global_1934765 = Global_1934765 + 1;
	return;
}

void func_308() // Position - 0x13704 Hash - 0x94B5EB4B ^0xEAEED411
{
	int num;

	func_551();

	if (func_27() == false)
	{
		func_302(-1253110600);
		func_302(-1402083909);
	}

	num = -1;

	if (func_310(704802028))
	{
		func_302(-1012618146);
		func_302(-722030448);
		func_327("nav_mesh_beech_shack");
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(-904669171);
		func_302(774601424);
		func_302(-584332967);
		func_302(-1615103170);
		func_302(1256771838);
		func_302(-1765152778);
		func_302(-2072231077);
		func_302(19217583);
	}
	else if (func_310(588987611))
	{
		func_302(-1012618146);
		func_302(-722030448);
		func_302(1757739778);
		func_327("nav_mesh_beech_shack_with_fire");
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
	}
	else if (func_310(2008888900))
	{
		func_302(-1012618146);
		func_302(1757739778);
		func_327("nav_mesh_beech_shack_with_fire");
		func_302(joaat("bee_01_camp"));
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_313(-722030448);
	}
	else if (func_310(1649996811))
	{
		func_302(joaat("bee_01_camp"));
		func_327("nav_mesh_beech_camp_with_rubble");
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(2111816145);
	}
	else if (func_310(227918160))
	{
		func_302(joaat("bee_01_camp"));
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(578474998);
		func_327("nav_mesh_beech_camp_with_supplies");
	}
	else if (func_310(168171957))
	{
		func_302(joaat("bee_01_camp"));
		func_302(-1667461262);
		func_302(-974480336);
		func_302(411742897);
		func_302(1344772301);
		func_302(1467774743);
		func_302(43335376);
		func_327("nav_mesh_beech_house_finished");
		func_302(-284612948);
		func_302(-1325016116);
		func_302(578474998);
		func_304(111);
		func_304(116);
		func_304(100);
		func_304(101);
	}
	else if (func_310(1193080109))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1344772301);
		func_302(1467774743);
		func_302(joaat("bee_01_barn_stage05"));
		func_302(578474998);
		func_302(43335376);
		func_302(1353861354);
		func_302(1205945639);
		func_327("nav_mesh_beech_barn_finished");
		func_302(-284612948);
		func_302(431365499);
		func_302(276582710);
		func_302(1191890045);
		func_302(1864768904);
		func_302(-692583342);
		func_302(-918785150);
		func_304(116);
		func_304(100);
		func_304(102);
		func_304(103);
	
		if (func_70(75) && !func_552(119))
			func_304(118);
		else
			func_314(118);
	
		func_304(104);
		func_304(105);
		func_304(111);
	
		if (func_552(108))
			func_314(107);
		else
			func_304(107);
	}
	else if (func_310(-639037538))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1467774743);
		func_302(joaat("bee_01_barn_stage05"));
		func_302(1353861354);
		func_327("nav_mesh_beech_house_decor");
		func_302(578474998);
		func_302(1236917971);
		func_302(43335376);
		func_302(-284612948);
		func_302(-2090209059);
		func_302(1977031606);
		func_302(1929454697);
		func_302(938290967);
		func_302(1532009326);
		func_302(1344772301);
		func_302(-918785150);
		func_302(-692583342);
		func_302(joaat("bee_craftingfire01"));
		func_344(joaat("bee_craftingfire01"));
		func_302(-1860722801);
		func_302(637627640);
		func_302(349494711);
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(110);
		func_304(106);
	
		if (!func_552(119))
			func_304(118);
		else
			func_314(118);
	
		func_304(111);
	}
	else if (func_310(-491981251))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1467774743);
		func_302(joaat("bee_01_barn_stage05"));
		func_302(1353861354);
		func_327("nav_mesh_beech_house_decor");
		func_302(578474998);
		func_302(1236917971);
		func_302(43335376);
		func_302(-284612948);
		func_302(-2090209059);
		func_302(1977031606);
		func_302(1929454697);
		func_302(938290967);
		func_302(1532009326);
		func_302(1344772301);
		func_302(-918785150);
		func_302(-692583342);
		func_302(joaat("bee_craftingfire01"));
		func_344(joaat("bee_craftingfire01"));
		func_302(-1860722801);
		func_302(637627640);
		func_302(349494711);
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(110);
	
		if (func_552(108))
			func_314(107);
		else
			func_304(107);
	
		if (!func_552(119))
			func_304(118);
		else
			func_314(118);
	
		func_304(111);
	}
	else if (func_310(-618620429))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1467774743);
		func_302(joaat("bee_01_barn_stage05"));
		func_302(1353861354);
		func_327("nav_mesh_beech_house_completed");
		func_302(578474998);
		func_302(1236917971);
		func_302(43335376);
		func_302(-284612948);
		func_302(349494711);
		func_302(1965249616);
		func_302(-2021605623);
		func_302(1649902358);
		func_302(1169279648);
		func_302(1532009326);
		func_302(1344772301);
		func_302(-918785150);
		func_302(-692583342);
		func_302(joaat("bee_craftingfire01"));
		func_344(joaat("bee_craftingfire01"));
		func_302(-1860722801);
		func_302(637627640);
		func_302(-218940381);
	
		if (!func_552(119))
			func_304(118);
		else
			func_314(118);
	
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(112);
		func_304(113);
		func_304(111);
		func_304(113);
	
		if (func_552(115))
			func_314(114);
		else
			func_304(114);
	}

	if (Global_1934765.f_300 != num)
	{
		if (Global_1934765.f_300 != -1)
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("exterior_beechershope"));
	
		MAP::_ADD_PROP_TO_MINIMAP(joaat("exterior_beechershope"), -1640f, -1370f, 0, num);
		Global_1934765.f_300 = num;
	}

	return;
}

void func_309() // Position - 0x13EA9 Hash - 0x7FDB485A ^0xD5D96993
{
	var unk;
	var unk11;

	if (func_310(-1215445344))
	{
		func_313(-661560211);
		func_302(joaat("val_02_lockdown_bank"));
		func_302(-784156210);
	
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_full_lockdown");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_full_lockdown");
		}
	}
	else
	{
		func_313(joaat("val_02_lockdown_bank"));
		func_313(-784156210);
		func_302(-661560211);
	
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_328("nav_val_full_lockdown");
		}
	}

	if (func_310(-254562075))
	{
		func_313(-1049500949);
		func_302(-981203673);
		func_302(-2009766528);
	}
	else
	{
		func_313(-981203673);
		func_313(-2009766528);
		func_302(-1049500949);
	}

	if (func_310(320943355))
	{
		func_313(135886022);
		func_302(1228600352);
		func_302(406334892);
	}
	else
	{
		func_313(1228600352);
		func_313(406334892);
		func_302(135886022);
	}

	if (func_310(689024866))
	{
		func_313(-1933617196);
		func_302(joaat("val_02_lockdown_gun"));
		func_302(-1905652203);
	}
	else
	{
		func_313(joaat("val_02_lockdown_gun"));
		func_313(-1905652203);
		func_302(-1933617196);
	}

	if (func_310(1160698568))
	{
		func_313(-1588793465);
		func_302(joaat("val_02_lockdown_hotel"));
		func_302(1519091923);
		func_333(1879307167, true, 0, false, false, 0, false, false);
		func_333(540459374, true, 0, false, false, 0, false, false);
	}
	else
	{
		func_313(joaat("val_02_lockdown_hotel"));
		func_313(1519091923);
		func_302(-1588793465);
		func_333(1879307167, false, 0, false, true, 0, false, false);
		func_333(540459374, false, 0, false, true, 0, false, false);
	}

	if (func_310(-1179948750))
	{
		func_313(joaat("val_03_default_jail"));
		func_302(-1301569116);
		func_302(joaat("val_03_props_lockdown_jail"));
	}
	else
	{
		func_313(-1301569116);
		func_313(joaat("val_03_props_lockdown_jail"));
		func_302(joaat("val_03_default_jail"));
	}

	if (func_310(1713221411))
	{
		func_313(924412185);
		func_302(joaat("val_02_lockdown_law"));
		func_302(-156313117);
	}
	else
	{
		func_313(joaat("val_02_lockdown_law"));
		func_313(-156313117);
		func_302(924412185);
	}

	if (func_310(300221584))
	{
		func_313(-1781246069);
		func_302(282485265);
		func_302(-1744253204);
	}
	else
	{
		func_313(282485265);
		func_313(-1744253204);
		func_302(-1781246069);
	}

	if (func_310(-220282381))
	{
		func_313(-1892595931);
		func_302(56708243);
	}
	else
	{
		func_313(56708243);
		func_302(-1892595931);
	}

	if (func_310(-1329135070))
	{
		func_313(-1158072415);
		func_302(199047531);
		func_302(192173299);
		func_553(32, true);
	}
	else
	{
		func_313(199047531);
		func_313(192173299);
		func_302(-1158072415);
	
		if (!func_554(9, false) && !func_555(5) && !func_556(5))
		{
			unk = -1;
			unk.f_1 = -1;
			unk.f_2 = -1;
			func_557(32, &unk, 1);
			func_558(&unk, 1, 1);
		}
	}

	if (func_310(-1763509974))
	{
		func_302(-776975047);
		func_302(1385025009);
	
		if (!func_310(-1215445344))
		{
			if (func_345(45))
			{
				func_328("nav_val_saloon_lockdown");
				func_328("nav_val_full_lockdown");
				func_328("nav_val_es");
				func_328("nav_val_es_full_lockdown");
				func_327("nav_val_es_saloon_lockdown");
			}
			else
			{
				func_328("nav_val_saloon_lockdown");
				func_328("nav_val_es_saloon_lockdown");
				func_328("nav_val_full_lockdown");
				func_328("nav_val_es_full_lockdown");
				func_328("nav_val_es");
				func_327("nav_val_saloon_lockdown");
			}
		}
	
		func_333(-908482159, true, 0, false, false, 0, false, false);
		func_333(-1147728628, true, 0, false, false, 0, false, false);
		func_333(968874193, true, 0, false, false, 0, false, false);
		func_333(1154795503, true, 0, false, false, 0, false, false);
		func_333(583884620, true, 0, false, false, 0, false, false);
		func_333(261929195, true, 0, false, false, 0, false, false);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		func_313(-776975047);
		func_313(1385025009);
		func_333(-908482159, false, 0, false, true, 0, false, false);
		func_333(-1147728628, false, 0, false, true, 0, false, false);
		func_333(968874193, false, 0, false, true, 0, false, false);
		func_333(1154795503, false, 0, false, true, 0, false, false);
		func_333(583884620, false, 0, false, true, 0, false, false);
		func_333(261929195, false, 0, false, true, 0, false, false);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
	
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_328("nav_val_full_lockdown");
		}
	}

	if (func_27() == -1)
	{
		if (func_310(-1206122982))
		{
			func_320(450, 32);
			func_320(451, 32);
			func_320(452, 32);
			func_320(453, 32);
			func_320(466, 32);
			func_320(467, 32);
			func_320(471, 32);
			func_320(464, 32);
		}
		else
		{
			func_319(450, 32);
			func_319(451, 32);
			func_319(452, 32);
			func_319(453, 32);
			func_319(466, 32);
			func_319(467, 32);
			func_319(471, 32);
			func_319(464, 32);
		}
	
		if (func_310(-666014935))
		{
			func_333(-1069042457, true, 0, false, false, 0, false, false);
			func_333(244699522, true, 0, false, false, 0, false, false);
			func_333(-590254598, true, 0, false, false, 0, false, false);
			func_333(-1425307025, true, 0, false, false, 0, false, false);
		}
		else
		{
			func_333(-1069042457, false, 0, false, true, 0, false, false);
			func_333(244699522, false, 0, false, true, 0, false, false);
			func_333(-590254598, false, 0, false, true, 0, false, false);
			func_333(-1425307025, false, 0, false, true, 0, false, false);
		}
	
		if (func_310(1074873669))
			func_320(433, 32);
		else
			func_319(433, 32);
	
		if (func_310(-1579419919))
		{
			func_333(551601484, true, 0, false, false, 0, false, false);
			func_333(-1842720100, true, 0, false, false, 0, false, false);
			func_333(-983069384, true, 0, false, false, 0, false, false);
			func_333(-768760124, true, 0, false, false, 0, false, false);
			func_333(-1974086289, true, 0, false, false, 0, false, false);
		}
		else
		{
			func_333(551601484, false, 0, false, true, 0, false, false);
			func_333(-1842720100, false, 0, false, true, 0, false, false);
			func_333(-983069384, false, 0, false, true, 0, false, false);
			func_333(-768760124, false, 0, false, true, 0, false, false);
			func_333(-1974086289, false, 0, false, true, 0, false, false);
		}
	
		if (func_310(478884033))
		{
			func_320(83, 32);
			func_320(84, 32);
			func_320(85, 32);
			func_320(86, 32);
			func_320(87, 32);
			func_320(79, 32);
		}
		else
		{
			func_319(83, 32);
			func_319(84, 32);
			func_319(85, 32);
			func_319(86, 32);
			func_319(87, 32);
			func_319(79, 32);
		}
	
		if (func_310(-191424539))
		{
			func_333(-1247339802, true, 0, false, false, 0, false, false);
			func_333(2046695029, true, 0, false, false, 0, false, false);
			func_333(834296435, true, 0, false, false, 0, false, false);
			func_333(1124531468, true, 0, false, false, 0, false, false);
			func_333(-902483455, true, 0, false, false, 0, false, false);
			func_333(-566797819, true, 0, false, false, 0, false, false);
			func_333(1469250492, true, 0, false, false, 0, false, false);
			func_333(678501753, true, 0, false, false, 0, false, false);
			func_333(-1079073283, true, 0, false, false, 0, false, false);
			func_333(-860602360, true, 0, false, false, 0, false, false);
		}
		else
		{
			func_333(-1247339802, false, 0, false, true, 0, false, false);
			func_333(2046695029, false, 0, false, true, 0, false, false);
			func_333(834296435, false, 0, false, true, 0, false, false);
			func_333(1124531468, false, 0, false, true, 0, false, false);
			func_333(-902483455, false, 0, false, true, 0, false, false);
			func_333(-566797819, false, 0, false, true, 0, false, false);
			func_333(1469250492, false, 0, false, true, 0, false, false);
			func_333(678501753, false, 0, false, true, 0, false, false);
			func_333(-1079073283, false, 0, false, true, 0, false, false);
			func_333(-860602360, false, 0, false, true, 0, false, false);
		}
	
		if (func_310(-397760715))
		{
			func_333(1098854605, true, 0, false, false, 0, false, false);
			func_333(1013933832, true, 0, false, false, 0, false, false);
			func_553(19, true);
		}
		else
		{
			func_333(1098854605, false, 0, false, true, 0, false, false);
			func_333(1013933832, false, 0, false, true, 0, false, false);
		
			if (!func_554(9, false) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rcm_callaway1")) <= 0 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rcm_callaway12")) <= 0)
			{
				unk11 = -1;
				unk11.f_1 = -1;
				unk11.f_2 = -1;
				func_557(19, &unk11, 1);
				func_558(&unk11, true, 1);
			}
		}
	
		if (func_310(2639906))
		{
			func_333(-1334037078, true, 0, false, false, 0, false, false);
			func_333(-1641377529, true, 0, false, false, 0, false, false);
			func_333(-74215266, true, 0, false, false, 0, false, false);
		}
		else
		{
			func_333(-1334037078, false, 0, false, true, 0, false, false);
			func_333(-1641377529, false, 0, false, true, 0, false, false);
			func_333(-74215266, false, 0, false, true, 0, false, false);
		}
	
		if (func_310(1660024373))
		{
			func_320(320, 32);
			func_320(317, 32);
			func_320(318, 32);
			func_320(319, 32);
			func_320(250, 32);
		}
		else
		{
			func_319(320, 32);
			func_319(317, 32);
			func_319(318, 32);
			func_319(319, 32);
			func_319(250, 32);
		}
	
		if (func_310(-1063147448))
		{
			func_333(-399528504, true, 0, false, false, 0, false, false);
			func_333(804086151, true, 0, false, false, 0, false, false);
			func_333(-923901632, true, 0, false, false, 0, false, false);
			func_333(-438789356, true, 0, false, false, 0, false, false);
		}
		else
		{
			func_333(-399528504, false, 0, false, true, 0, false, false);
			func_333(804086151, false, 0, false, true, 0, false, false);
			func_333(-923901632, false, 0, false, true, 0, false, false);
			func_333(-438789356, false, 0, false, true, 0, false, false);
		}
	
		if (func_310(-80522843))
		{
			func_320(354, 32);
			func_320(367, 32);
			func_320(368, 32);
			func_320(369, 32);
			func_320(370, 32);
			func_320(371, 32);
			func_320(886, 32);
		}
		else
		{
			func_319(354, 32);
			func_319(367, 32);
			func_319(368, 32);
			func_319(86, 32);
			func_319(370, 32);
			func_319(371, 32);
			func_319(886, 32);
		}
	
		if (func_310(-1523910291))
		{
			func_333(2094297354, true, 0, false, false, 0, false, false);
			func_333(1892085175, true, 0, false, false, 0, false, false);
		}
		else
		{
			func_333(2094297354, false, 0, false, true, 0, false, false);
			func_333(1892085175, false, 0, false, true, 0, false, false);
		}
	}

	return;
}

BOOL func_310(int iParam0) // Position - 0x14B70 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_559(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_311(BOOL bParam0, BOOL bParam1) // Position - 0x14BBF Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && bParam1 != false;
}

void func_312(int iParam0, BOOL bParam1) // Position - 0x14BCE Hash - 0xACB2A3A5 ^0xACB2A3A5
{
	Global_1897952[iParam0 /*2*/] = Global_1897952[iParam0 /*2*/] || bParam1;
	return;
}

void func_313(Hash hParam0) // Position - 0x14BE9 Hash - 0x7DD010A2 ^0xA0826F55
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REMOVE_IPL_HASH(hParam0);

	return;
}

void func_314(int iParam0) // Position - 0x14C00 Hash - 0x5D737F18 ^0x9B30D331
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_1934765.f_21[num2], offset);
	return;
}

void func_315(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x14C2A Hash - 0x273B5959 ^0x52C71BD3
{
	Volume volume;
	Volume volume2;

	if (func_310(iParam0))
	{
		if (func_311(Global_1934765.f_20, bParam2))
		{
			volume = func_458(iParam1);
		
			if (VOLUME::DOES_VOLUME_EXIST(volume))
			{
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volume);
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volume);
				func_85(&(Global_1934765.f_20), bParam2);
			}
		}
	}
	else if (!func_311(Global_1934765.f_20, bParam2))
	{
		volume2 = func_458(iParam1);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume2))
		{
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volume2, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volume2, iParam3, 0, 0, -1, -1, 0);
			func_84(&(Global_1934765.f_20), bParam2);
		}
	}

	return;
}

int func_316(int iParam0) // Position - 0x14CC3 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_560(iParam0))
		return 0;

	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_317(int iParam0) // Position - 0x14CE3 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_46(iParam0))
		return -1;

	return func_561(iParam0);
}

BOOL func_318(Object obParam0, int iParam1) // Position - 0x14CFF Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && iParam1 != false;
}

void func_319(int iParam0, BOOL bParam1) // Position - 0x14D0E Hash - 0x452DF11A ^0x452DF11A
{
	if (func_27() != -1)
		return;

	if (!func_562(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_320(int iParam0, BOOL bParam1) // Position - 0x14D47 Hash - 0x61515A20 ^0x61515A20
{
	if (func_27() != -1)
		return;

	if (!func_562(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

BOOL func_321(int iParam0, BOOL bParam1) // Position - 0x14D78 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_562(iParam0))
		return false;

	if (!func_336(iParam0, 2))
		return false;

	if (func_563(iParam0) == 0)
		return true;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
		return true;

	if (func_336(iParam0, true) && !bParam1)
	{
		func_320(iParam0, 128);
		return true;
	}

	func_319(iParam0, 129);
	func_565(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_564(iParam0));
	func_566(iParam0, 0);
	return true;
}

void func_322(eStackSize essParam0, BOOL bParam1) // Position - 0x14DFB Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] || bParam1;

	return;
}

void func_323() // Position - 0x14E3E Hash - 0xE6D6DBCE ^0xE503C66F
{
	if (!func_310(0))
	{
		func_313(1149195254);
		func_313(2016081133);
		func_313(363257921);
		func_313(58066174);
		func_313(-1521525254);
		func_313(-761186147);
		func_313(-1872939092);
		func_313(-964156415);
	}
	else
	{
		func_313(-1643869063);
	}

	if (!func_310(473295046))
	{
		func_313(-1108618313);
		func_313(-787678727);
	}

	if (!func_310(-1738165526))
	{
		func_313(622597018);
		func_313(1649275138);
	}

	func_313(-2137633069);
	func_313(1944013855);
	func_313(-437251660);
	func_314(124);
	func_314(125);
	func_314(187);
	func_314(188);
	func_314(123);
	func_314(122);
	func_314(121);
	func_314(120);
	func_328("bra_man_burned");
	func_328("bra_man_burned_bra3");
	func_328("bra_man_endsum");
	return;
}

void func_324(BOOL bParam0) // Position - 0x14F44 Hash - 0xABEBAAED ^0xF9875FE9
{
	func_567(-1452136643, bParam0);
	func_567(-744260705, bParam0);
	func_567(1424293412, bParam0);
	func_567(1060557512, bParam0);
	func_567(-362403544, bParam0);
	func_567(-592147003, bParam0);
	func_567(2056145270, bParam0);
	func_567(748826019, bParam0);
	func_567(366542865, bParam0);
	func_567(-1508467572, bParam0);
	func_567(-1220264217, bParam0);
	func_567(-990258606, bParam0);
	func_567(-1508467572, bParam0);
	func_567(-1220264217, bParam0);
	func_567(-990258606, bParam0);
	func_567(-665583358, bParam0);
	func_567(-282972514, bParam0);
	func_567(-64632667, bParam0);
	func_567(314111435, bParam0);
	func_567(24859476, bParam0);
	func_567(340621560, bParam0);
	func_567(1266707689, bParam0);
	func_567(434145706, bParam0);
	func_567(654746614, bParam0);
	func_567(1965736001, bParam0);
	func_567(1650694835, bParam0);
	func_567(1891284833, bParam0);
	func_567(1576931820, bParam0);
	func_567(1812999696, bParam0);
	func_567(-1184151355, bParam0);
	func_567(-946313953, bParam0);
	func_567(-889100155, bParam0);
	func_567(-1296418825, bParam0);
	func_567(352816221, !bParam0);
	func_567(1128622296, !bParam0);
	func_567(979982112, !bParam0);
	func_567(1756640181, !bParam0);
	func_567(1557076971, !bParam0);
	func_567(1913538153, !bParam0);
	func_567(-1603329230, !bParam0);
	func_567(-1892843345, !bParam0);
	func_567(241205019, !bParam0);
	return;
}

void func_325(Hash hParam0, int iParam1) // Position - 0x15123 Hash - 0x303982C6 ^0x303982C6
{
	func_333(hParam0, false, 0, false, true, 0, false, false);
	return;
}

int func_326(int iParam0) // Position - 0x15138 Hash - 0x361054AF ^0x361054AF
{
	int i;
	int num;
	int num2;
	int num3;

	if (!func_207(iParam0))
		return 0;

	if (!func_539(iParam0, &num, &num2, false, false))
		return 0;

	num3 = 1;

	for (i = 0; i < (num2 - num) + 1; i = i + 1)
	{
		if (!func_337(num + i))
			num3 = 0;
	}

	return num3;
}

void func_327(char* sParam0) // Position - 0x1518F Hash - 0x6246AFC2 ^0xC5609323
{
	if (!PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
		PATHFIND::_NAVMESH_ACTIVATE_SWAP(sParam0);

	return;
}

void func_328(char* sParam0) // Position - 0x151A8 Hash - 0x4F2C3B92 ^0xDDFC3280
{
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP(sParam0);

	return;
}

void func_329() // Position - 0x151C0 Hash - 0xAE02FE16 ^0x969E4451
{
	if (func_310(-919512195))
	{
		func_313(419559004);
		func_313(1786931635);
		func_313(557212279);
		func_313(1426715569);
		func_313(2097480406);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_burning");
		func_328("cal_nav_tabacco_mission");
		func_302(702350293);
		func_302(-677977650);
		func_302(26815048);
		func_302(-1229109520);
		func_327("cal_nav_tabacco_clean");
	}
	else if (func_310(-1925798111))
	{
		func_313(419559004);
		func_313(1786931635);
		func_313(557212279);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_burning");
		func_328("cal_nav_tabacco_clean");
		func_302(702350293);
		func_302(-677977650);
		func_302(26815048);
		func_302(-1229109520);
		func_302(1426715569);
		func_302(2097480406);
		func_327("cal_nav_tabacco_mission");
	}
	else if (func_310(420709909))
	{
		func_313(419559004);
		func_313(26815048);
		func_313(-1229109520);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_clean");
		func_328("cal_nav_tabacco_mission");
		func_302(702350293);
		func_302(-677977650);
		func_302(1786931635);
		func_302(557212279);
		func_302(1426715569);
		func_302(2097480406);
		func_327("cal_nav_tabacco_burning");
	}
	else if (func_310(1703426636))
	{
		func_313(702350293);
		func_313(-677977650);
		func_313(26815048);
		func_313(-1229109520);
		func_313(1426715569);
		func_313(2097480406);
		func_328("cal_nav_tabacco_clean");
		func_328("cal_nav_tabacco_mission");
		func_328("cal_nav_tabacco_burning");
		func_302(419559004);
		func_302(1786931635);
		func_302(557212279);
		func_327("cal_nav_tabacco_burnt");
	}

	return;
}

void func_330() // Position - 0x153C5 Hash - 0x12A7F403 ^0x66F3AD9A
{
	func_313(-717025835);
	func_313(1248111234);

	if (!func_310(1884271742) && !func_310(-2038424081))
	{
		func_313(-1316886711);
		func_313(867231253);
	}

	if (!func_310(356365161))
	{
		func_313(474287981);
		func_313(-1670453688);
	}

	func_313(2039534767);
	func_313(joaat("win1_intro_cutscene"));
	func_313(-323126593);
	func_313(1590561203);
	func_313(205214733);

	if (!func_310(-1187950766) && !func_310(356365161))
	{
		func_313(-338553155);
		func_313(-1106668087);
		func_313(-1636879249);
	}

	func_314(186);

	if (!func_310(356365161))
		func_328("col_nav_wint1_cabin_prefire");

	func_328("col_nav_wint1_cabin_duringfire");
	func_328("col_nav_wint2_post");
	func_328("col_nav_wint_end");
	return;
}

void func_331(int iParam0) // Position - 0x154C3 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_559(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_332() // Position - 0x15549 Hash - 0x84056371 ^0xE78C8207
{
	if (func_310(371850993))
	{
		func_302(263152228);
		func_302(1936009597);
	}
	else
	{
		func_313(263152228);
		func_313(1936009597);
	}

	return;
}

void func_333(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x15584 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_568(hParam0, false, false);

	if (func_569(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_570(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_571(hParam0, true);
			else
				func_572(hParam0, true);
		else
			func_573(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_574())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

void func_334(int iParam0, BOOL bParam1) // Position - 0x1560F Hash - 0x58ED523D ^0x58ED523D
{
	if (bParam1)
		Global_1310750.f_16074 = Global_1310750.f_16074 || iParam0;
	else
		Global_1310750.f_16074 = Global_1310750.f_16074 - Global_1310750.f_16074 && iParam0;

	return;
}

void func_335() // Position - 0x15649 Hash - 0x7BB552DB ^0x134A3176
{
	if (!func_310(-1053549743))
		func_313(1033721560);

	func_313(1343484786);
	func_313(1871051363);
	func_313(146746575);
	func_313(-2144587490);
	func_313(1989074279);
	func_313(-1671953459);
	func_328("rho_nav_grave_norm_gry3_off");
	func_328("rho_nav_grave_norm_gry3_on");
	func_328("rho_nav_grave_dug_gry3_off");
	func_328("rho_nav_grave_dug_gry3_on");
	func_328("rho_nav_grave_open_gry3_off");
	func_328("rho_nav_grave_open_gry3_on");
	func_328("sad3_nav_rhodes_shootout_00");
	return;
}

BOOL func_336(int iParam0, BOOL bParam1) // Position - 0x156D5 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_27() != -1)
		return false;

	if (!func_562(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_337(int iParam0) // Position - 0x15703 Hash - 0x1B19432F ^0x9C562F71
{
	Ped perscharPedIndex;

	if (!func_562(iParam0))
		return false;

	if (!func_575(func_563(iParam0)))
		return true;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
		return false;

	if (NETWORK::NETWORK_IS_IN_SESSION())
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_564(iParam0))))
			return true;

	perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_564(iParam0));

	if (ENTITY::DOES_ENTITY_EXIST(perscharPedIndex))
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(perscharPedIndex))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex, true, true);

	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_564(iParam0));
	return true;
}

BOOL func_338(int iParam0) // Position - 0x1578C Hash - 0x6CAA09A1 ^0xEFF07F60
{
	if (!func_562(iParam0))
		return false;

	if (!func_575(func_563(iParam0)))
		return true;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
		return false;

	PERSCHAR::_0x4F81EAD1DE8FA19B(func_564(iParam0));
	return true;
}

BOOL func_339(int iParam0) // Position - 0x157D1 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_576(Global_1835011[iParam0 /*74*/].f_1);
}

void func_340(int iParam0) // Position - 0x157FD Hash - 0x5D737F18 ^0x5B384D3B
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_1934765.f_30[num2], offset);
	return;
}

float func_341(float fParam0) // Position - 0x15827 Hash - 0xC531A009 ^0xC531A009
{
	return fParam0 * 0.017453292f;
}

BOOL func_342() // Position - 0x15837 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_27() != -1)
		return 0;

	if (Global_40.f_39 == joaat("player_three"))
		return 1;

	return 0;
}

void func_343(Hash hParam0) // Position - 0x1585C Hash - 0x7DD010A2 ^0x18DACB50
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(hParam0))
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(hParam0);

	return;
}

void func_344(Hash hParam0) // Position - 0x15873 Hash - 0x78302BA0 ^0x430A31C0
{
	if (!GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(hParam0))
		GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(hParam0);

	return;
}

BOOL func_345(int iParam0) // Position - 0x1588B Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_577(iParam0))
		return false;

	return func_578(iParam0);
}

BOOL func_346(int iParam0) // Position - 0x158A7 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_27())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

void func_347(int iParam0) // Position - 0x158D2 Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_27())
	{
		case -1:
			Global_1357549.f_1495 = Global_1357549.f_1495 || iParam0;
			break;
	}

	return;
}

int func_348(int iParam0) // Position - 0x158FE Hash - 0x361054AF ^0x361054AF
{
	int i;
	int num;
	int num2;
	int num3;

	if (!func_207(iParam0))
		return 0;

	if (!func_539(iParam0, &num, &num2, false, false))
		return 0;

	num3 = 1;

	for (i = 0; i < (num2 - num) + 1; i = i + 1)
	{
		if (!func_338(num + i))
			num3 = 0;
	}

	return num3;
}

void func_349(int iParam0) // Position - 0x15955 Hash - 0xE0643F2A ^0xE0643F2A
{
	switch (func_27())
	{
		case -1:
			Global_1357549.f_1495 = Global_1357549.f_1495 - Global_1357549.f_1495 && iParam0;
			break;
	}

	return;
}

int func_350(int iParam0) // Position - 0x15989 Hash - 0x361054AF ^0x361054AF
{
	int i;
	int num;
	int num2;
	int num3;

	if (!func_207(iParam0))
		return 0;

	if (!func_539(iParam0, &num, &num2, false, false))
		return 0;

	num3 = 1;

	for (i = 0; i < (num2 - num) + 1; i = i + 1)
	{
		if (!func_321(num + i, false))
			num3 = 0;
	}

	return num3;
}

void func_351() // Position - 0x159E1 Hash - 0x25E78783 ^0x119B208B
{
	if (func_310(-2020023971))
	{
		func_313(758684739);
		func_313(-661825463);
		func_302(518127510);
		func_314(182);
		func_304(181);
	}
	else
	{
		func_313(518127510);
		func_302(758684739);
		func_302(-661825463);
		func_314(181);
		func_304(182);
	}

	return;
}

BOOL func_352(int iParam0) // Position - 0x15A46 Hash - 0x14DDF3C9 ^0xAD14D790
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] & 32 != 0;

	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

void func_353() // Position - 0x15A8F Hash - 0x8FEF4096 ^0x3D0BA4F6
{
	func_328("nav_sdn_docks_pre_es");
	func_328("nav_sdn_docks_korrigan_pre_es");
	func_328("nav_sdn_docks_antenor_pre_es");
	func_328("nav_sdn_docks_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_antenor_pre_es");
	func_328("nav_sdn_docks_antenor_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	func_328("nav_sdn_docks_es");
	func_328("nav_sdn_docks_korrigan_es");
	func_328("nav_sdn_docks_antenor_es");
	func_328("nav_sdn_docks_trains_es");
	func_328("nav_sdn_docks_korrigan_antenor_es");
	func_328("nav_sdn_docks_antenor_trains_es");
	func_328("nav_sdn_docks_korrigan_trains_es");
	func_328("nav_sdn_docks_korrigan_antenor_trains_es");
	return;
}

void func_354(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x15B17 Hash - 0x70A892CA ^0x205EC3FF
{
	if (*iParam0 == -1)
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(fParam1, fParam4, 1, -1, 0);

	return;
}

void func_355(int iParam0, int iParam1) // Position - 0x15B36 Hash - 0x39657BBD ^0xA9DD9CED
{
	if (*iParam0 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
		*iParam0 = -1;
	}

	return;
}

void func_356(int iParam0, Hash hParam1) // Position - 0x15B51 Hash - 0xF827A56F ^0xF827A56F
{
	if (func_310(iParam0))
		func_302(hParam1);
	else
		func_313(hParam1);

	return;
}

eStackSize func_357() // Position - 0x15B71 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

Volume func_358(float fParam0, float fParam1, float fParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x15B7F Hash - 0xC1E3A062 ^0xD42263D3
{
	Volume volume;
	int num;
	var entityCoords;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (fParam3 <= 0.1f)
		return 0;

	if (_IS_NULL_VECTOR(fParam0))
		return 0;

	num = 0;

	if (!bParam5)
		num = num | 2;

	num = num | 1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam6))
	{
		if (func_579(fParam0))
			return 0;
	
		volume = VOLUME::_CREATE_VOLUME_LOCK(fParam0, fParam3, num, 0);
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam6, false, false) };
		volume = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(eParam6, fParam3, num, 0);
	}

	if (iParam7 != 0)
		VOLUME::_0xB440F4E35393FC39(volume, iParam7);

	if (iParam9 >= 0f)
		VOLUME::_0xD460135C98940274(volume, iParam9);

	func_580(volume, bParam8);
	return volume;
}

void func_359(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x15C39 Hash - 0x303BFB8D ^0xBCF80455
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(fParam0))
		return;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_182(vector, fParam0, 2f, true))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
					Global_1911670[i] = 0;
				}
			}
		}
	}

	return;
}

BOOL func_360(int iParam0, int iParam1) // Position - 0x15CBD Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_361(eStackSize essParam0) // Position - 0x15CCC Hash - 0xD511B5FE ^0x321A0CCC
{
	switch (essParam0)
	{
		case joaat("player_three"):
			return joaat("John");
	
		case joaat("Player_Zero"):
			return joaat("Arthur");
	
		default:
		
	}

	return 0;
}

void func_362() // Position - 0x15CF9 Hash - 0x7FE4F0B5 ^0x8A41A61C
{
	if (func_361(ENTITY::GET_ENTITY_MODEL(Global_35)) == joaat("John"))
	{
		PED::_0x2B4CE170DE09F346(Global_35, joaat("dutch_gang"));
		PED::_0x2B4CE170DE09F346(Global_35, joaat("John"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("player_john"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("JOHN_CONV_CLOSER_REPLIES"));
	}

	return;
}

void func_363(int iParam0) // Position - 0x15D53 Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1946054.f_1 = iParam0;
	return;
}

void func_364(BOOL bParam0) // Position - 0x15D63 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_365(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x15D76 Hash - 0x21CB5355 ^0x21CB5355
{
	int i;
	int num;

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
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_581(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_582(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_364(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_581(iParam0))
				return;
		
			func_582(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_364(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_583(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_366(eStackSize essParam0, var uParam1) // Position - 0x15F82 Hash - 0x5AE5648 ^0x5AE5648
{
	*uParam1 = 0;

	while (*uParam1 < 15)
	{
		if (Global_40.f_4237[*uParam1 /*3*/] == essParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	*uParam1 = -1;
	return false;
}

void func_367(int iParam0) // Position - 0x15FBA Hash - 0xDAEBBAAC ^0xDAEBBAAC
{
	int i;

	func_584(&Global_40.f_4237[iParam0 /*3*/]);

	if (func_188(Global_40.f_4237[iParam0 /*3*/]))
		return;

	for (i = 0; i < 15; i = i + 1)
	{
		if (i < iParam0)
		{
		}
		else if (i < 14 && func_188(Global_40.f_4237[i + 1 /*3*/]))
		{
			Global_40.f_4237[i /*3*/] = Global_40.f_4237[i + 1 /*3*/];
			Global_40.f_4237[i /*3*/].f_1 = Global_40.f_4237[i + 1 /*3*/].f_1;
			Global_40.f_4237[i /*3*/].f_2 = Global_40.f_4237[i + 1 /*3*/].f_2;
			func_586(i, func_585(i + 1));
			func_587(&Global_40.f_4237[i + 1 /*3*/]);
			func_586(i + 1, false);
		}
	}

	return;
}

BOOL func_368(eStackSize essParam0) // Position - 0x1608F Hash - 0x89B17C93 ^0xBA1AAD59
{
	int num;

	if (!func_366(essParam0, &num))
		return false;

	return Global_40.f_4237[num /*3*/].f_2;
}

BOOL func_369(Ped pedParam0, int iParam1) // Position - 0x160B3 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_318(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_318(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_318(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_318(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_318(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_318(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_318(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_318(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_370(eStackSize essParam0) // Position - 0x161B2 Hash - 0xA23CBB08 ^0xA23CBB08
{
	int num;

	num = -1;

	if (func_366(essParam0, &num))
		return func_585(num);

	return false;
}

void func_371(eStackSize essParam0, BOOL bParam1) // Position - 0x161D2 Hash - 0x84F137F ^0x84F137F
{
	int num;

	num = -1;

	if (func_366(essParam0, &num))
		func_586(num, bParam1);

	return;
}

BOOL func_372(int iParam0, BOOL bParam1) // Position - 0x161F0 Hash - 0xFB77C6C8 ^0xFB77C6C8
{
	return Global_1897952[iParam0 /*2*/] && bParam1 != false;
}

Volume func_373(int iParam0) // Position - 0x16205 Hash - 0xD3D81EBA ^0xF896999C
{
	Volume aggregate;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
		return Global_1897952[iParam0 /*2*/].f_1;

	switch (iParam0)
	{
		case 0:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
	
		case 1:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
	
		case 2:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
	
		case 3:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 190.4736f, 1214.8289f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 695f, 1075f, 200f, 0f, 0f, 35.000004f, 250f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -11.222437f, 1259.5388f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 667.5f, 1675f, 200f, 0f, 0f, 14.999999f, 150f, 325f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 72.5f, 1297.5f, 200f, 0f, 0f, 50.000004f, 400f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 330.27124f, 1028.6603f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 224.70837f, 1010.6338f, 200f, 0f, 0f, 58.85596f, 175f, 267.26758f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 153.08461f, 1314.7219f, 200f, 0f, 0f, -23f, 400f, 409.22314f, 800f);
			break;
	
		case 4:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
	
		case 5:
			if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(aggregate, Global_1897952[6 /*2*/].f_1);
				VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(aggregate, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			break;
	
		case 6:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
	
		case 7:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
	
		case 8:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
	
		case 9:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -385f, 180f, 200f, 0f, 0f, -140.00002f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -465f, -340f, 200f, 0f, 0f, 37.499996f, 500f, 275f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 860f, 487.5f, 200f, 0f, 0f, 35.000004f, 650f, 900f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1560f, 835f, 200f, 0f, 0f, 15.999998f, 450f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 103.686745f, 807.68787f, 200f, 0f, 0f, 58.795097f, 295.0871f, 709.0376f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.49196f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -847.5f, 240f, 200f, 0f, 0f, 33.000004f, 797f, 225f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -245.43944f, 1000f, 200f, 0f, 0f, 0f, 333.31265f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -760f, 440f, 200f, 0f, 0f, 105.00001f, 300f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
	
		case 10:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
	
		case 11:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
	
		case 12:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
	
		case 13:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
	
		case 14:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	
		case 15:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
	
		case 16:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
	}

	Global_1897952[iParam0 /*2*/].f_1 = aggregate;
	return aggregate;
}

void func_374(Volume volParam0, BOOL bParam1) // Position - 0x186F8 Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_375(Volume volParam0, BOOL bParam1) // Position - 0x1871B Hash - 0xD9C0069 ^0xCF70485C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);

	return;
}

void func_376(int iParam0, BOOL bParam1) // Position - 0x18761 Hash - 0x4D032C49 ^0x4D032C49
{
	Global_1897952[iParam0 /*2*/] = Global_1897952[iParam0 /*2*/] - Global_1897952[iParam0 /*2*/] && bParam1;
	return;
}

void func_377(int iParam0) // Position - 0x18785 Hash - 0x4FC4CF32 ^0x4FC4CF32
{
	int i;
	int num;
	int num2;

	if (func_588(iParam0, &num, &num2))
	{
		for (i = 0; i < (num2 - num) + 1; i = i + 1)
		{
			func_321(num + i, true);
		}
	}

	return;
}

void func_378(int iParam0) // Position - 0x187BD Hash - 0x4DF510AA ^0x4DF510AA
{
	int i;
	int num;
	int num2;

	if (func_27() != -1)
		return;

	if (func_588(iParam0, &num, &num2))
	{
		for (i = 0; i < (num2 - num) + 1; i = i + 1)
		{
			func_589(num + i, false);
		}
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x18800 Hash - 0xA17D549C ^0x26DB8BC3
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
	
		case 1:
			return "BigValley_population";
	
		case 2:
			return "BluegillMarsh_population";
	
		case 3:
			return "CumberlandForest_population";
	
		case 4:
			return "GreatPlains_population";
	
		case 5:
			return "Grizzlies_population";
	
		case 6:
			return "GrizzliesEast_population";
	
		case 7:
			return "GrizzliesWest_population";
	
		case 8:
			return "Guama_population";
	
		case 9:
			return "Heartland_population";
	
		case 10:
			return "RoanokeRidge_population";
	
		case 11:
			return "ScarlettMeadows_population";
	
		case 12:
			return "TallTrees_population";
	
		case 13:
			return "GaptoothRidge_population";
	
		case 14:
			return "RioBravo_population";
	
		case 15:
			return "ChollaSprings_population";
	
		case 16:
			return "HennigansStead_population";
	
		default:
		
	}

	return "No District script?";
}

void func_380(char* sParam0, int iParam1) // Position - 0x188F1 Hash - 0xBEDA82F0 ^0x9A488B4
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return;

	func_590(MISC::GET_HASH_KEY(sParam0), iParam1);
	return;
}

BOOL func_381(int iParam0) // Position - 0x18911 Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_233(iParam0))
		return false;

	return func_591(iParam0, 2);
}

BOOL func_382(int iParam0) // Position - 0x1892E Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_104(iParam0))
		return false;

	return func_450(iParam0, 2);
}

void func_383(int iParam0, int iParam1) // Position - 0x1894B Hash - 0xB75A70D8 ^0xB75A70D8
{
	if (!func_233(iParam0))
		return;

	func_592(func_234(iParam0), iParam1);
	return;
}

BOOL func_384() // Position - 0x1896C Hash - 0x463DA432 ^0x3948CA04
{
	return func_77(Global_1935630, 4096);
}

Hash func_385(int iParam0) // Position - 0x1897F Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_104(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

void func_386(eStackSize essParam0, int iParam1, Hash hParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x189B9 Hash - 0xECDF54D9 ^0x6CB20E6E
{
	BOOL flag;
	const char* str;
	char* str2;
	Hash hash;
	int num;
	int num2;
	var unk;
	float temperatureAtCoords;
	char* str3;
	char* str4;
	var unk2;

	if (!func_593())
		return;

	str = func_594(essParam0, iParam1, hParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_104(iParam4))
		if (func_207(essParam0))
			iParam4 = func_234(func_283(essParam0));
		else
			iParam4 = func_234(iParam1);

	if (func_104(iParam4))
		hash = func_385(iParam4);

	if (flag && bParam3)
	{
		str2 = func_596(func_595(hParam2));
	}
	else if (func_591(iParam1, 2) || func_450(iParam4, 2) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1894899.f_9 = 1;
	}
	else if (func_207(essParam0) && func_210(essParam0, 16777216) && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (hash >= 1 && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "REGION_BOUNTY", hash);
		Global_1894899.f_9 = 1;
	}
	else
	{
		num = func_258(func_177());
		num2 = func_259(func_177());
	
		if (num2 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num2, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str4 = "AM";
		
			if (num >= 12)
			{
				str4 = "PM";
			
				if (num > 12)
					num = num - 12;
			}
			else if (num == 0)
			{
				num = 12;
			}
		
			str3 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_597(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num, func_598(&unk, joaat("COLOR_PURE_WHITE")), str4, func_598(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_597(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num, func_598(&unk, joaat("COLOR_PURE_WHITE")), func_598(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1894899.f_9 = 0;
	}

	Global_1934266.f_148 = func_599(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_387(int iParam0) // Position - 0x18C2A Hash - 0x3D309607 ^0x3D309607
{
	int num;

	if (!func_233(iParam0))
		return;

	num = func_234(iParam0);
	func_600(num);
	func_601(num, func_385(num));
	return;
}

void func_388(int iParam0) // Position - 0x18C59 Hash - 0x4FC4CF32 ^0x4FC4CF32
{
	int i;
	int num;
	int num2;

	if (func_602(iParam0, &num, &num2))
	{
		for (i = 0; i < (num2 - num) + 1; i = i + 1)
		{
			func_321(num + i, true);
		}
	}

	return;
}

void func_389(int iParam0) // Position - 0x18C91 Hash - 0x29A8F290 ^0x5829049F
{
	Global_1897952.f_41 = iParam0;
	return;
}

BOOL func_390(int iParam0) // Position - 0x18CA1 Hash - 0x42A8AD6E ^0x42A8AD6E
{
	if (!func_58())
		return true;

	if (!func_70(3))
		return 7 == iParam0;

	return true;
}

Hash func_391(int iParam0) // Position - 0x18CC6 Hash - 0xB8EC44B7 ^0xEB4C01D2
{
	switch (iParam0)
	{
		case 0:
			return joaat("bayounwa");
	
		case 1:
			return joaat("bigvalley");
	
		case 2:
			return joaat("BluewaterMarsh");
	
		case 3:
			return joaat("Cumberland");
	
		case 4:
			return joaat("greatplains");
	
		case 6:
			return joaat("GrizzliesEast");
	
		case 7:
			return joaat("GrizzliesWest");
	
		case 8:
			return joaat("GuarmaD");
	
		case 9:
			return joaat("heartlands");
	
		case 10:
			return joaat("roanoke");
	
		case 11:
			return joaat("scarlettmeadows");
	
		case 12:
			return joaat("talltrees");
	
		case 13:
			return joaat("GaptoothRidge");
	
		case 14:
			return joaat("riobravo");
	
		case 15:
			return joaat("ChollaSprings");
	
		case 16:
			return joaat("HennigansStead");
	
		default:
		
	}

	return -1;
}

void func_392(int iParam0) // Position - 0x18DB7 Hash - 0xB79FBCC1 ^0xB79FBCC1
{
	int i;
	int num;
	int num2;

	if (func_27() != -1)
		return;

	if (func_602(iParam0, &num, &num2))
	{
		for (i = 0; i < (num2 - num) + 1; i = i + 1)
		{
			if (func_603(num + i))
				func_589(num + i, false);
		}
	}

	return;
}

void func_393(int iParam0) // Position - 0x18E06 Hash - 0x4C569861 ^0x50D00AC3
{
	if (!func_233(iParam0))
		return;

	func_604();

	switch (iParam0)
	{
		case 0:
			func_605(5, joaat("ANIMALS_ALLIGATOR"));
			func_605(10, joaat("animals_deer"));
			func_605(11, joaat("ANIMALS_ALLIGATOR"));
			func_605(12, joaat("animals_boar"));
			func_605(13, joaat("animals_fox"));
			func_605(7, joaat("animals_pelican"));
			break;
	
		case 1:
			func_605(5, joaat("animals_moose"));
			func_605(10, joaat("animals_deer"));
			func_605(11, joaat("animals_wolf"));
			func_605(12, joaat("animals_rabbit"));
			func_605(13, joaat("animals_coyotes"));
			func_605(7, joaat("animals_hawks"));
			break;
	
		case 2:
			func_605(5, joaat("animals_turtle"));
			func_605(10, joaat("animals_possums"));
			func_605(11, joaat("ANIMALS_ALLIGATOR"));
			func_605(12, joaat("animals_possums"));
			func_605(13, joaat("animals_fox"));
			func_605(7, joaat("animals_songbird"));
			break;
	
		case 3:
			func_605(5, joaat("animals_coyotes"));
			func_605(10, joaat("animals_deer"));
			func_605(11, joaat("animals_wolf"));
			func_605(12, joaat("animals_rabbit"));
			func_605(13, joaat("animals_coyotes"));
			func_605(7, joaat("animals_vultures"));
			break;
	
		case 4:
			func_605(5, joaat("animals_deer"));
			func_605(10, joaat("animals_deer"));
			func_605(11, joaat("animals_wolf"));
			func_605(12, joaat("animals_raccoon"));
			func_605(13, joaat("animals_coyotes"));
			func_605(7, joaat("animals_hawks"));
			func_605(8, joaat("animals_buffalo"));
			break;
	
		case 5:
		case 6:
		case 7:
			func_605(5, joaat("animals_deer"));
			func_605(10, joaat("animals_fox"));
			func_605(11, joaat("animals_cougar"));
			func_605(12, joaat("animals_deer"));
			func_605(13, joaat("animals_fox"));
			func_605(7, joaat("animals_eagles"));
			break;
	
		case 8:
			func_605(5, joaat("animals_boar"));
			func_605(10, joaat("animals_boar"));
			func_605(11, joaat("animals_snake"));
			func_605(12, joaat("ANIMAL_HEN"));
			func_605(13, joaat("animals_boar"));
			func_605(7, joaat("animals_seagull"));
			break;
	
		case 9:
			func_605(5, joaat("animals_deer"));
			func_605(10, joaat("animals_deer"));
			func_605(11, joaat("animals_cougar"));
			func_605(12, joaat("animals_boar"));
			func_605(13, joaat("animals_coyotes"));
			func_605(7, joaat("animals_hawks"));
			func_605(8, joaat("animals_buffalo"));
			break;
	
		case 10:
			func_605(5, joaat("animals_coyotes"));
			func_605(10, joaat("animals_deer"));
			func_605(11, joaat("animals_cougar"));
			func_605(12, joaat("animals_rabbit"));
			func_605(13, joaat("animals_coyotes"));
			func_605(7, joaat("animals_hawks"));
			break;
	
		case 11:
			func_605(5, joaat("animals_deer"));
			func_605(10, joaat("animals_turkeys_wild"));
			func_605(11, joaat("animals_fox"));
			func_605(12, joaat("animals_raccoon"));
			func_605(13, joaat("animals_fox"));
			func_605(7, joaat("animals_ducks"));
			break;
	
		case 12:
			func_605(5, joaat("animals_deer"));
			func_605(10, joaat("animals_fox"));
			func_605(11, joaat("animals_bear"));
			func_605(12, joaat("animals_rabbit"));
			func_605(13, joaat("animals_coyotes"));
			func_605(7, joaat("animals_songbird"));
			break;
	}

	return;
}

Hash func_394(int iParam0, BOOL bParam1) // Position - 0x1916C Hash - 0x9CC4908E ^0xB6CFBFA0
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
	
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
	
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
	
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
	
		case 4:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_345(45))
				return joaat("LAW_REGION_GREAT_PLAINS");
			else
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			break;
	
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 8:
			return joaat("LAW_REGION_GUAMA");
	
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
	
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
	
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
	
		case 12:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_345(45))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_27() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_345(45))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

void func_395(Hash hParam0, int iParam1) // Position - 0x192E6 Hash - 0x2031A6F3 ^0x2031A6F3
{
	if (hParam0 == 0)
		hParam0 = func_394(func_197(Global_36), true);

	func_606(hParam0, iParam1);
	return;
}

void func_396(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x1930F Hash - 0x1E885EDE ^0x3AA465F4
{
	Global_1894899.f_182 = fParam0;
	Global_1894899.f_183 = fParam1;
	Global_1894899.f_184 = fParam2;
	Global_1894899.f_185 = fParam3;
	return;
}

void func_397(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19337 Hash - 0x5A64C5C8 ^0x6D52F178
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_608();
			func_607(iParam0);
			break;
	
		case -1925798111:
			func_607(-1925798111);
			func_331(-919512195);
			func_331(420709909);
			func_331(1703426636);
			break;
	
		case -1838352012:
			func_331(-1674179981);
			func_331(-1835851517);
			func_607(-1838352012);
			break;
	
		case -1835851517:
			func_331(-1674179981);
			func_331(-1838352012);
			func_607(-1835851517);
			break;
	
		case -1738165526:
			func_607(-1738165526);
			func_331(0);
			func_331(473295046);
			break;
	
		case -1717960576:
			func_331(210001842);
			func_607(-1717960576);
			break;
	
		case -1674179981:
			func_331(-1835851517);
			func_331(-1838352012);
			func_607(-1674179981);
			break;
	
		case -1612662716:
			func_331(1822001510);
			func_607(-1612662716);
			break;
	
		case -1414537028:
			func_331(38162571);
			func_331(1350391819);
			func_331(54073871);
			func_607(-1414537028);
			break;
	
		case -1311865656:
			func_607(-1311865656);
			func_331(1509509592);
			func_331(-959357075);
			func_331(405586984);
			break;
	
		case -1271608261:
			func_331(-150493654);
			func_331(1846061697);
			func_331(-1145519186);
			func_607(-1271608261);
			break;
	
		case -1223121209:
			func_607(-1223121209);
			func_331(630808005);
			break;
	
		case -1145519186:
			func_331(-150493654);
			func_331(-1271608261);
			func_331(1846061697);
			func_607(-1145519186);
			break;
	
		case -1124061431:
			func_331(198200492);
			func_607(-1124061431);
			func_331(52706132);
			func_331(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_607(-1080627546);
			else
				func_331(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_331(-538889627);
			func_331(-538880323);
			func_331(-1056767524);
			func_607(iParam0);
			break;
	
		case -959357075:
			func_607(-959357075);
			func_331(1509509592);
			func_331(405586984);
			func_331(-1311865656);
			break;
	
		case -919512195:
			func_607(-919512195);
			func_331(-1925798111);
			func_331(420709909);
			func_331(1703426636);
			break;
	
		case -664252410:
			func_331(2019386373);
			func_331(2109952320);
			func_607(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_609();
			func_607(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_607(-524145696);
			else
				func_331(-524145696);
		
			func_331(1626481264);
			func_331(282809459);
			break;
	
		case -502324015:
			func_331(1497516462);
			func_331(2016141805);
			func_331(1010885152);
			func_607(-502324015);
			break;
	
		case -434590080:
			func_331(1376646519);
			func_331(931649776);
			func_331(1743048395);
			func_331(449774763);
			func_607(-434590080);
			break;
	
		case -404698347:
			func_331(1306158345);
			func_331(1952610440);
			func_331(-223469678);
			func_331(1517904467);
			func_607(-404698347);
			break;
	
		case -259123672:
			func_331(198200492);
			func_331(-1124061431);
			func_331(52706132);
			func_607(-259123672);
			break;
	
		case -223469678:
			func_331(1306158345);
			func_331(1952610440);
			func_331(-404698347);
			func_331(1517904467);
			func_607(-223469678);
			break;
	
		case -150493654:
			func_331(-1271608261);
			func_331(1846061697);
			func_331(-1145519186);
			func_607(-150493654);
			break;
	
		case 0:
			func_607(0);
			func_331(473295046);
			func_331(-1738165526);
			break;
	
		case 38162571:
			func_331(-1414537028);
			func_331(1350391819);
			func_331(54073871);
			func_607(38162571);
			break;
	
		case 52706132:
			func_331(198200492);
			func_331(-1124061431);
			func_607(52706132);
			func_331(-259123672);
			break;
	
		case 54073871:
			func_331(-1414537028);
			func_331(38162571);
			func_331(1350391819);
			func_607(54073871);
			break;
	
		case 198200492:
			func_607(198200492);
			func_331(-1124061431);
			func_331(52706132);
			func_331(-259123672);
			break;
	
		case 210001842:
			func_331(-1717960576);
			func_607(210001842);
			break;
	
		case 280705402:
			func_331(1766284049);
			func_331(1926308480);
			func_607(280705402);
			break;
	
		case 282809459:
			func_607(282809459);
			func_331(1626481264);
			func_331(-524145696);
			break;
	
		case 405586984:
			func_607(405586984);
			func_331(1509509592);
			func_331(-959357075);
			func_331(-1311865656);
			break;
	
		case 420709909:
			func_607(420709909);
			func_331(-919512195);
			func_331(-1925798111);
			func_331(1703426636);
			break;
	
		case 439465264:
			if (func_310(1609506757))
				if (bParam1)
					func_607(439465264);
				else
					func_331(439465264);
			break;
	
		case 449774763:
			func_331(1376646519);
			func_331(931649776);
			func_331(-434590080);
			func_331(1743048395);
			func_607(449774763);
			break;
	
		case 473295046:
			func_607(473295046);
			func_331(0);
			func_331(-1738165526);
			break;
	
		case 630808005:
			func_607(630808005);
			func_331(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_607(885203519);
			else
				func_331(885203519);
			break;
	
		case 931649776:
			func_331(1376646519);
			func_331(-434590080);
			func_331(1743048395);
			func_331(449774763);
			func_607(931649776);
			break;
	
		case 932909855:
			func_607(932909855);
			func_331(2051822093);
			break;
	
		case 1010885152:
			func_331(1497516462);
			func_331(2016141805);
			func_607(1010885152);
			func_331(-502324015);
			break;
	
		case 1306158345:
			func_331(1952610440);
			func_331(-223469678);
			func_331(-404698347);
			func_331(1517904467);
			func_607(1306158345);
			break;
	
		case 1350391819:
			func_331(-1414537028);
			func_331(38162571);
			func_331(54073871);
			func_607(1350391819);
			break;
	
		case 1376646519:
			func_331(931649776);
			func_331(-434590080);
			func_331(1743048395);
			func_331(449774763);
			func_607(1376646519);
			break;
	
		case 1453909576:
			func_607(1453909576);
			func_331(1643531967);
			break;
	
		case 1497516462:
			func_607(1497516462);
			func_331(2016141805);
			func_331(1010885152);
			func_331(-502324015);
			break;
	
		case 1509509592:
			func_607(1509509592);
			func_331(405586984);
			func_331(-959357075);
			func_331(-1311865656);
			break;
	
		case 1517904467:
			func_331(1306158345);
			func_331(1952610440);
			func_331(-223469678);
			func_331(-404698347);
			func_607(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_331(439465264);
				func_607(1609506757);
			}
			else
			{
				func_331(1609506757);
				func_331(439465264);
			}
			break;
	
		case 1626481264:
			func_607(1626481264);
			func_331(-524145696);
			func_331(282809459);
			break;
	
		case 1643531967:
			func_607(1643531967);
			func_331(1453909576);
			break;
	
		case 1703426636:
			func_607(1703426636);
			func_331(-919512195);
			func_331(-1925798111);
			func_331(420709909);
			break;
	
		case 1743048395:
			func_331(1376646519);
			func_331(931649776);
			func_331(-434590080);
			func_331(449774763);
			func_607(1743048395);
			break;
	
		case 1766284049:
			func_331(280705402);
			func_331(1926308480);
			func_607(1766284049);
			break;
	
		case 1822001510:
			func_331(-1612662716);
			func_607(1822001510);
			break;
	
		case 1846061697:
			func_331(-150493654);
			func_331(-1271608261);
			func_331(-1145519186);
			func_607(1846061697);
			break;
	
		case 1926308480:
			func_331(1766284049);
			func_331(280705402);
			func_607(1926308480);
			break;
	
		case 1952610440:
			func_331(1306158345);
			func_331(-223469678);
			func_331(-404698347);
			func_331(1517904467);
			func_607(1952610440);
			break;
	
		case 2016141805:
			func_331(1497516462);
			func_607(2016141805);
			func_331(1010885152);
			func_331(-502324015);
			break;
	
		case 2019386373:
			func_331(-664252410);
			func_331(2109952320);
			func_607(2019386373);
			break;
	
		case 2051822093:
			func_607(2051822093);
			func_331(932909855);
			break;
	
		case 2109952320:
			func_331(2019386373);
			func_331(-664252410);
			func_607(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_310(iParam0))
					func_607(iParam0);
			else if (func_310(iParam0))
				func_331(iParam0);
			break;
	}

	return;
}

int func_398(Hash hParam0) // Position - 0x19E5A Hash - 0x50573299 ^0x50573299
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

float func_399(var uParam0) // Position - 0x19F14 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_610(uParam0))
		return uParam0->f_1;

	if (func_611(uParam0))
		return uParam0->f_2;

	return func_612() - uParam0->f_1;
}

BOOL func_400() // Position - 0x19F49 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

BOOL func_401() // Position - 0x19F59 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

Ped func_402(eStackSize essParam0) // Position - 0x19F67 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_613(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

int func_403(eStackSize essParam0) // Position - 0x19FA1 Hash - 0x80AB1F14 ^0x80AB1F14
{
	int num;
	var unk;
	Interior interiorFromEntity;
	Interior interiorFromEntity2;
	int i;

	func_614(essParam0);
	num = -1;
	unk = 15;

	switch (essParam0)
	{
		case 6:
		case 24:
		case 25:
			unk[0] = -1;
			unk[1] = -1;
			unk[2] = -1;
			unk[3] = -1;
			unk[4] = -1;
			unk[5] = -1;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			unk[9] = -1;
			unk[10] = -1;
			unk[11] = -1;
			unk[12] = -1;
			unk[13] = -1;
			unk[14] = -1;
			break;
	
		case 10:
			unk[0] = 7;
			unk[1] = 1;
			unk[2] = 8;
			unk[3] = 9;
			unk[4] = 20;
			unk[5] = -1;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			unk[9] = -1;
			unk[10] = -1;
			unk[11] = -1;
			unk[12] = -1;
			unk[13] = -1;
			unk[14] = -1;
			break;
	
		case 14:
			unk[0] = 1;
			unk[1] = 7;
			unk[2] = 3;
			unk[3] = 21;
			unk[4] = 16;
			unk[5] = 20;
			unk[6] = 15;
			unk[7] = 5;
			unk[8] = 0;
			unk[9] = 19;
			unk[10] = 18;
			unk[11] = 20;
			unk[12] = 22;
			unk[13] = 4;
			unk[14] = 11;
			break;
	
		case 15:
		case 16:
		case 20:
		case 22:
			unk[0] = 3;
			unk[1] = 2;
			unk[2] = 8;
			unk[3] = 9;
			unk[4] = 7;
			unk[5] = 20;
			unk[6] = 15;
			unk[7] = 5;
			unk[8] = 13;
			unk[9] = 19;
			unk[10] = 18;
			unk[11] = 20;
			unk[12] = 22;
			unk[13] = 4;
			unk[14] = 11;
			break;
	
		default:
			unk[0] = 7;
			unk[1] = 3;
			unk[2] = 1;
			unk[3] = 9;
			unk[4] = 2;
			unk[5] = 8;
			unk[6] = 0;
			unk[7] = 15;
			unk[8] = 13;
			unk[9] = 19;
			unk[10] = 18;
			unk[11] = 20;
			unk[12] = 22;
			unk[13] = 4;
			unk[14] = 5;
			break;
	}

	for (i = 0; i < 15; i = i + 1)
	{
		if (unk[i] != -1)
		{
			if (func_615(unk[i], true, true) && func_616(unk[i], false) == false)
			{
				interiorFromEntity2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_402(unk[i]));
				interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
			
				if (interiorFromEntity == interiorFromEntity2)
					if (essParam0 != unk[i])
						if (num == -1)
							if (func_617(Global_35, func_402(unk[i]), true, true) < 35f)
								num = unk[i];
						else if (unk[i] != -1)
							if (func_617(Global_35, func_402(num), true, true) > func_617(Global_35, func_402(unk[i]), true, true))
								num = unk[i];
			}
		}
	}

	if (num == -1)
		MISC::GET_FRAME_COUNT() % 300 == 0;

	return num;
}

BOOL func_404(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1A2DA Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_618(pedParam0, &str);
}

void func_405(eStackSize essParam0) // Position - 0x1A321 Hash - 0xA0AD1217 ^0x78D440FD
{
	eStackSize i;
	eStackSize stackSize;

	if (essParam0 == 6)
		return;

	stackSize = -1;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_369(func_402(i), 0))
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(func_402(i)))
				if (stackSize == -1)
					stackSize = i;
				else if (func_617(func_402(i), Global_35, true, true) > func_617(func_402(stackSize), Global_35, true, true))
					stackSize = i;
	}

	if (stackSize != -1)
		func_404(func_402(stackSize), "GENERIC_SYMPATHIZE_ON_DISPUTE", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);

	return;
}

BOOL func_406(eStackSize essParam0) // Position - 0x1A3B6 Hash - 0x69B60510 ^0x69B60510
{
	if (essParam0 == 11 || essParam0 == 13 || essParam0 == 15 || essParam0 == 16 || essParam0 == 19 || essParam0 == 20 || essParam0 == 22)
		return false;

	return true;
}

void func_407(int iParam0, var uParam1, float fParam2) // Position - 0x1A40D Hash - 0x9FF2FCA5 ^0x9FF2FCA5
{
	switch (func_357())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -67.4627f, 7.3844f, 92.8657f };
					*fParam2 = 131.3534f;
					break;
			
				case 1:
					*uParam1 = { -116.7554f, 188.6082f, 93.8397f };
					*fParam2 = 140.8986f;
					break;
			
				case 2:
					*uParam1 = { -87.3227f, 244.034f, 101.5532f };
					*fParam2 = 177.536f;
					break;
			
				case 3:
					*uParam1 = { -68.581f, 371.115f, 112.856f };
					*fParam2 = 206.1627f;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 681.5647f, -1167.6102f, 44.9204f };
					*fParam2 = 197.2448f;
					break;
			
				case 1:
					*uParam1 = { 810.8986f, -969.9656f, 53.016f };
					*fParam2 = 134.2209f;
					break;
			
				case 2:
					*uParam1 = { 864.3746f, -943.9187f, 56.2085f };
					*fParam2 = 150.086f;
					break;
			
				case 3:
					*uParam1 = { 933.3844f, -911.3843f, 59.72f };
					*fParam2 = 135.8932f;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 1786.8462f, -1789.869f, 48.3654f };
					*fParam2 = 243.2151f;
					break;
			
				case 1:
					*uParam1 = { 1579.3417f, -1728.1539f, 53.9348f };
					*fParam2 = 246.6603f;
					break;
			
				case 2:
					*uParam1 = { 1453.8372f, -1691.054f, 65.0555f };
					*fParam2 = 234.7165f;
					break;
			
				case 3:
					*uParam1 = { 1286.9999f, -1603.052f, 64.1451f };
					*fParam2 = 273.4906f;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 2374.9436f, 1312.0751f, 107.3511f };
					*fParam2 = 35.4268f;
					break;
			
				case 1:
					*uParam1 = { 2394.5703f, 1225.8732f, 100.4456f };
					*fParam2 = 329.851f;
					break;
			
				case 2:
					*uParam1 = { 2406.4182f, 1114.158f, 95.6929f };
					*fParam2 = 21.6707f;
					break;
			
				case 3:
					*uParam1 = { 2391.8308f, 1001.5005f, 87.3075f };
					*fParam2 = 346.1555f;
					break;
			}
			break;
	
		default:
			*uParam1 = { 0f, 0f, 0f };
			break;
	}

	return;
}

void func_408() // Position - 0x1A6AD Hash - 0x772AB5E8 ^0x81A244F4
{
	eStackSize i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_369(func_402(i), 0))
			PED::_0xA7DC9266ED6A4E51(func_402(i));
	}

	return;
}

eStackSize func_409(eStackSize essParam0, BOOL bParam1) // Position - 0x1A6E0 Hash - 0x33BA89E2 ^0x33BA89E2
{
	eStackSize stackSize;
	var unk;
	Interior interiorFromEntity;
	Interior interiorFromEntity2;
	int i;
	Vector3 entityCoords;

	stackSize = -1;
	unk = 9;

	switch (essParam0)
	{
		case 3:
			unk[0] = 2;
			unk[1] = 9;
			unk[2] = 1;
			unk[3] = 8;
			unk[4] = -1;
			unk[5] = -1;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			break;
	
		case 6:
		case 12:
		case 24:
		case 25:
			unk[0] = -1;
			unk[1] = -1;
			unk[2] = -1;
			unk[3] = -1;
			unk[4] = -1;
			unk[5] = -1;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			break;
	
		case 10:
			unk[0] = 7;
			unk[1] = 1;
			unk[2] = 8;
			unk[3] = 9;
			unk[4] = -1;
			unk[5] = -1;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			break;
	
		case 13:
		case 14:
			unk[0] = 1;
			unk[1] = 7;
			unk[2] = 3;
			unk[3] = -1;
			unk[4] = -1;
			unk[5] = -1;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			break;
	
		case 15:
		case 16:
		case 20:
		case 22:
			unk[0] = 3;
			unk[1] = 2;
			unk[2] = 8;
			unk[3] = 9;
			unk[4] = 7;
			unk[5] = -1;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			break;
	
		default:
			unk[0] = 7;
			unk[1] = 3;
			unk[2] = 1;
			unk[3] = 9;
			unk[4] = 2;
			unk[5] = 8;
			unk[6] = -1;
			unk[7] = -1;
			unk[8] = -1;
			break;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk[i] != -1)
		{
			if (func_615(unk[i], true, true) && func_616(unk[i], false) == false)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(func_402(unk[i]), true, false) };
			
				if (CAM::IS_SPHERE_VISIBLE(entityCoords, 1.25f) == false || bParam1 == false)
				{
					interiorFromEntity2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_402(unk[i]));
					interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				
					if (interiorFromEntity == interiorFromEntity2)
						if (essParam0 != unk[i])
							if (stackSize == -1)
								if (func_617(Global_35, func_402(unk[i]), true, true) < 25f || bParam1)
									stackSize = unk[i];
							else if (unk[i] != -1)
								if (func_617(Global_35, func_402(stackSize), true, true) > func_617(Global_35, func_402(unk[i]), true, true))
									stackSize = unk[i];
				}
			}
		}
	}

	if (stackSize == -1)
		MISC::GET_FRAME_COUNT() % 300 == 0;

	return stackSize;
}

BOOL func_410(eStackSize essParam0) // Position - 0x1A9BF Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

char* func_411() // Position - 0x1A9DE Hash - 0x306ACA3A ^0x6BE0DDBB
{
	return "script@common@cnv_camp@grief@knockout@knockout";
}

char* func_412(int iParam0) // Position - 0x1A9EA Hash - 0xE5247562 ^0x77ABEFEA
{
	switch (iParam0)
	{
		case 0:
			return "pbl_griefing_ko_back_leadin";
	
		case 1:
			return "pbl_griefing_ko_back_noleadin";
	
		case 2:
			return "pbl_griefing_ko_front";
	
		case 3:
			return "pbl_griefing_ko_back_noleadin";
	
		default:
		
	}

	return "pbl_griefing_ko_back_leadin";
}

BOOL func_413(eStackSize essParam0) // Position - 0x1AA32 Hash - 0xDA629583 ^0xDA629583
{
	return func_619(essParam0, 16, true);
}

void func_414() // Position - 0x1AA43 Hash - 0xDFCC5D13 ^0x829BD26F
{
	Vector3 entityCoords;
	Vector3 vector;
	Ped ped;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	entityCoords.f_2 = entityCoords.f_2 + 0.5f;
	MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &(entityCoords.f_2), false);
	vector = { 0f, 0f, 0f };
	ped = func_402(Global_1357549.f_1645);
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_HEADING(Global_35), 0f, -1.5f, 0f) };
	ENTITY::SET_ENTITY_VISIBLE(ped, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromCoordAndHeadingInWorldCoords, &(offsetFromCoordAndHeadingInWorldCoords.f_2), false);
	ENTITY::SET_ENTITY_COORDS(ped, offsetFromCoordAndHeadingInWorldCoords, true, false, true, true);

	if (func_369(Global_35, 0))
		vector.f_2 = ENTITY::GET_ENTITY_HEADING(Global_35);

	offsetFromCoordAndHeadingInWorldCoords.f_2 = offsetFromCoordAndHeadingInWorldCoords.f_2 + 0.25f;

	if (func_620(ped, Global_1357549.f_1663[0], true, 0) || func_620(Global_35, Global_1357549.f_1663[0], true, 0))
	{
		vector.f_2 = vector.f_2 + 90f;
	
		if (func_357() == 2)
			entityCoords = { 659.2351f, -1251.6246f, 42.6868f };
		else if (func_357() == 1)
			entityCoords = { -123.8883f, -31.9883f, 94.8056f };
		else if (func_357() == 6)
			entityCoords = { 2357.8984f, 1372.7869f, 105.298f };
	}

	if (func_620(ped, Global_1357549.f_1663[1], true, 0) || func_620(Global_35, Global_1357549.f_1663[1], true, 0))
	{
		vector.f_2 = vector.f_2 + 90f;
	
		if (func_357() == 2)
			entityCoords = { 659.2351f, -1251.6246f, 42.6868f };
		else if (func_357() == 1)
			entityCoords = { -123.8883f, -31.9883f, 94.8056f };
		else if (func_357() == 6)
			entityCoords = { 2346.3875f, 1352.1737f, 105.0121f };
	}

	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549.f_1636, entityCoords, vector, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1636, "player_one", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1636, "CS_GENSTORYMALE", ped, 0);
	return;
}

void func_415(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1AC4D Hash - 0x7990926B ^0xBD6909E0
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
	return;
}

Ped func_416(eStackSize essParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24) // Position - 0x1AC5F Hash - 0x79A2D2D9 ^0x5019CC83
{
	int num;
	BOOL flag;
	int num2;
	int i;

	if (!func_410(essParam0))
		return 0;

	num = iParam3;
	num.f_1 = iParam4;
	num.f_2 = iParam5;

	if (Global_1572864.f_13 || Global_1572864.f_14 || Global_1572864.f_8 != 0 || Global_1391438.f_5 & 8 != 0)
		flag = true;

	switch (Global_1360165[essParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_621(essParam0, 2, true))
				func_622(essParam0, 2, true);
		
			if (func_619(essParam0, 16, true))
			{
				if (Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_623(essParam0, 29, true);
						return 0;
					}
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[essParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_422(essParam0, false, 0, true, -1082130432, true, true, false, false, false, false);
					}
				
					return 0;
				}
				else if (func_369(Global_1360165[essParam0 /*1157*/], 0))
				{
					return Global_1360165[essParam0 /*1157*/];
				}
			}
		
			if (func_369(Global_1360165[essParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[essParam0 /*1157*/]))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(Global_1360165[essParam0 /*1157*/]))
					if (bParam1)
						func_624(essParam0, true, "Stealing, but companion is a ragdoll");
					else
						return 0;
			
				func_623(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_625(essParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_623(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_625(essParam0, 1);
			}
			else
			{
				return 0;
			}
		
			[[fallthrough]];
	
		case 1:
			if (flag)
				if (iParam13 == 0)
					iParam13 = Global_40.f_4942[essParam0 /*60*/].f_4;
		
			if (!func_621(essParam0, 44, false))
				func_623(essParam0, 44, false);
		
			if (func_626(essParam0, num, iParam13, false, true, bParam17, bParam20, -1, 1, false))
				func_625(essParam0, 2);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 171, true);
		
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
		
			func_622(essParam0, 18, true);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[essParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[essParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 130, false);
			func_627(essParam0, bParam9, true, false);
		
			if (bParam22)
				func_628(essParam0, false, false, true);
		
			func_622(essParam0, 33, true);
			func_622(essParam0, 34, true);
			func_622(essParam0, 29, true);
		
			if (!_IS_NULL_VECTOR(num) && bParam7)
				func_625(essParam0, 3);
			else if (iParam13 != 0)
				func_625(essParam0, 4);
			else
				func_625(essParam0, 5);
			break;
	
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[essParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[essParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[essParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[essParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[essParam0 /*1157*/]))
					{
						func_624(essParam0, true, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
					}
				}
			
				num2 = 2;
			
				if (bParam10)
					num2 = num2 | 4;
			
				func_629(Global_1360165[essParam0 /*1157*/], num, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[essParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[essParam0 /*1157*/], true))
					TASK::CLEAR_PED_TASKS(Global_1360165[essParam0 /*1157*/], true, false);
			
				return 0;
			}
		
			if (iParam13 != 0)
				func_625(essParam0, 4);
			else
				func_625(essParam0, 5);
			break;
	
		case 4:
			if (iParam13 != 0 || flag)
			{
				if (flag)
					if (iParam13 == 0)
						iParam13 = Global_40.f_4942[essParam0 /*60*/].f_4;
			
				if (func_630(essParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
					{
						func_631(essParam0, iParam13, false);
						func_632(essParam0, Global_1360165[essParam0 /*1157*/], iParam13, true);
					
						if (func_621(essParam0, 25, false))
							func_622(essParam0, 25, false);
					
						func_623(essParam0, 66, false);
						func_625(essParam0, 5);
						Global_1360165[essParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_625(essParam0, 5);
				}
			
				func_623(essParam0, 28, true);
			}
			else
			{
				func_625(essParam0, 5);
			}
			break;
	
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
				func_625(essParam0, 6);
			break;
	
		case 6:
			if (func_369(Global_1360165[essParam0 /*1157*/], 0))
			{
				if (bParam24)
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], true);
			
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[essParam0 /*1157*/], -1))
					{
						for (i = 0; i < 10; i = i + 1)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[essParam0 /*1157*/], i);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[essParam0 /*1157*/], i, "ALL");
						}
					
						PED::_SET_PED_DIRT_CLEANED(Global_1360165[essParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[essParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
			
				if (bParam19)
					func_633(essParam0);
			
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[essParam0 /*1157*/]);
					func_634(Global_1360165[essParam0 /*1157*/], 1);
				}
			}
		
			func_625(essParam0, 7);
			[[fallthrough]];
	
		case 7:
			func_627(essParam0, bParam9, bParam15, false);
			func_635(essParam0, 4, bParam11);
			func_636(essParam0);
		
			if (bParam20)
				func_637(Global_1360165[essParam0 /*1157*/]);
		
			func_638(essParam0, Global_1360165[essParam0 /*1157*/]);
		
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true))
				PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true);
		
			Global_40.f_4942[essParam0 /*60*/].f_4 = Global_40.f_4942[essParam0 /*60*/].f_3;
			func_625(essParam0, 0);
			func_639(essParam0, 16, true);
			func_622(essParam0, 44, true);
			Global_1360165[essParam0 /*1157*/].f_1156 = 0;
			Global_1360165[essParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[essParam0 /*1157*/];
	}

	return 0;
}

void func_417() // Position - 0x1B2CE Hash - 0x1F37723A ^0xD0568D44
{
	eStackSize i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_369(func_402(i), 0))
			if (PED::GET_PED_CONFIG_FLAG(func_402(i), 343, true))
				PED::SET_PED_CONFIG_FLAG(func_402(i), 343, false);
	}

	return;
}

char* func_418() // Position - 0x1B316 Hash - 0x306ACA3A ^0x2F1E1887
{
	return "CUT_THAT_OUT";
}

void func_419() // Position - 0x1B322 Hash - 0xE2773CEF ^0xCF9B971F
{
	Entity firstEntityPedIsCarrying;

	if (func_369(Global_35, 0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
	
		if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		
			if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
			{
				PED::DETACH_CARRIABLE_ENTITY(firstEntityPedIsCarrying, false, false);
				PED::SET_PED_TO_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying), 10000, 10000, 0, false, false, 0);
			}
		}
	}

	return;
}

void func_420(var uParam0, BOOL bParam1) // Position - 0x1B375 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_610(uParam0))
		func_640(uParam0);

	return;
}

int func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1B395 Hash - 0x8BF3BA53 ^0xECA3E26
{
	int i;
	eStackSize stackSize;
	int num;
	int num2;
	int j;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return 1;
	}

	num = func_641(iParam0);
	num2 = func_642(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[i /*5*/] = iParam0;
			Global_40.f_4283.f_6[i /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[i /*5*/].f_3 = num2;
		
			if (iParam3 > 0)
			{
				stackSize = func_177();
				func_643(&stackSize, 0, 0, iParam3, 0, 0, 0, false);
			}
			else
			{
				stackSize = -15;
			}
		
			Global_40.f_4283.f_6[i /*5*/].f_1 = stackSize;
			Global_40.f_4283.f_6[i /*5*/].f_4 = num;
			func_644(iParam0, true);
		
			if (func_645(num))
			{
				for (j = 0; j < 60; j = j + 1)
				{
					if (Global_40.f_4283.f_6[j /*5*/].f_4 == num && Global_40.f_4283.f_6[j /*5*/] != iParam0)
						func_646(&Global_40.f_4283.f_6[j /*5*/], true, false);
				}
			}
		
			if (bParam5)
				if (bParam6)
					func_647(1, iParam0);
				else
					func_648(1, iParam0);
		
			return 1;
		}
	}

	return 0;
}

void func_422(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1B4E9 Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_410(essParam0))
		return;

	if (func_413(essParam0))
		if (Global_1360165[essParam0 /*1157*/].f_129 != 0 && Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_623(essParam0, 56, true);
		func_420(&(Global_1359489.f_40), true);
	}

	func_649(essParam0, false);
	func_635(essParam0, 4, false);
	func_650(essParam0);
	func_636(essParam0);
	func_622(essParam0, 37, true);
	flag = func_369(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_651(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_621(essParam0, 64, true))
		func_622(essParam0, 64, true);

	if (bParam3)
	{
		func_622(essParam0, 33, true);
		func_622(essParam0, 34, true);
		func_652(essParam0, 1056964608, -1, 1061158912);
		func_627(essParam0, true, true, false);
	
		if (bParam6)
			func_623(essParam0, 30, true);
	
		if (bParam7)
		{
			func_623(essParam0, 35, true);
		
			if (bParam8)
				func_623(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_653(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_622(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_623(essParam0, 33, true);
		func_627(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_420(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_427(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_623(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_654(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_621(essParam0, 45, true))
		func_622(essParam0, 45, true);

	func_655(essParam0, 16, true);
	func_622(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_369(func_656(essParam0), 0))
			func_657(0, essParam0, bParam3, 0, bParam2);

	return;
}

void func_423() // Position - 0x1B79E Hash - 0x5B128CB4 ^0xAACCE047
{
	eStackSize i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_369(func_402(i), 0))
			if (func_615(i, true, true))
				PERSCHAR::_0xD4B614179BCD0654(func_651(i, false));
	}

	return;
}

void func_424(float fParam0) // Position - 0x1B7DD Hash - 0x45928918 ^0xBAD04DE5
{
	int taskSequenceId;

	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, joaat("world_player_sleep_ground"), 750, false, 0, -1082130432, false);
	TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, BUILTIN::FLOOR(fParam0) * 1000, 0, true, false);

	if (func_369(Global_35, 0))
		TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId);

	TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	func_426();
	return;
}

void func_425() // Position - 0x1B839 Hash - 0xA4A3365D ^0xA6A3EAED
{
	eStackSize i;
	Player playerIndex;
	Ped ped1;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_658(i, true, false))
		{
			if (func_659(i))
			{
				ped1 = func_660(i);
			
				if (!ENTITY::IS_ENTITY_DEAD(ped1))
					PED::_0x97B06669AC569003(ped1, playerIndex);
			}
		}
	}

	return;
}

void func_426() // Position - 0x1B888 Hash - 0x3D5E646D ^0x86BC6B13
{
	Vector3 entityCoords;
	Cam renderingCam;

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1065353216);

	if (func_369(Global_35, 0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };

	entityCoords.f_2 = entityCoords.f_2 - 2f;
	renderingCam = CAM::GET_RENDERING_CAM();

	if (CAM::DOES_CAM_EXIST(renderingCam))
	{
		CAM::POINT_CAM_AT_COORD(renderingCam, entityCoords);
		CAM::SHAKE_CAM(renderingCam, "HAND_SHAKE", 1f);
	}

	return;
}

void func_427(var uParam0) // Position - 0x1B8EE Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_428(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x1B904 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_27() != -1)
		return;

	if (Global_36616 && func_661(iParam1) != false)
		return;

	num = func_662(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_663(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
	}
	else
	{
		num2 = -1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (num2 < 0)
				if (Global_1347477.f_155[i /*6*/] == 0)
					num2 = i;
		}
	
		if (num2 >= 0)
			func_664(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_663(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

void func_429(int iParam0) // Position - 0x1BA03 Hash - 0xC23C8821 ^0xCECF5821
{
	if (iParam0 >= 0 && iParam0 < Global_1327590.f_19547)
		Global_1327590.f_19547[iParam0 /*5*/].f_4 = 1;

	return;
}

int func_430(Hash hParam0) // Position - 0x1BA2F Hash - 0x9D68FB33 ^0x4832040D
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[hParam0 /*4*/].f_1;

	return Global_42606[hParam0 /*4*/].f_1;
}

void func_431(Hash hParam0) // Position - 0x1BA59 Hash - 0xA6792A4E ^0x5B64C5B6
{
	Vector3 vector;

	vector = { func_666(func_665(hParam0)) };
	Global_36308[hParam0] = MAP::BLIP_ADD_FOR_COORDS(func_667(func_430(hParam0)), vector);
	MAP::SET_BLIP_SPRITE(Global_36308[hParam0], func_668(func_430(hParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_36308[hParam0], func_430(hParam0), hParam0);
	return;
}

void func_432(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x1BAB1 Hash - 0xDB8F22A7 ^0xBB4CE23
{
	int num;
	BOOL flag;
	BOOL flag2;
	int num2;
	BOOL flag3;

	num = Global_1888801[essParam0 /*35*/].f_20;
	flag = func_210(essParam0, 32);

	if (num == 8)
		return;

	if (!flag && num != 3 && num != 4)
		return;

	flag2 = false;

	if (Global_1572887.f_12 == -1 && essParam0 == func_98())
	{
		if (essParam0 != 58 || func_669() && !func_555(4) && !func_670(67) && !func_339(67) && !(func_70(43) && !func_70(44)) && !(func_70(59) && !func_70(60)) && !func_672(func_671(essParam0), 8192))
		{
			flag2 = true;
			num2 = 52;
		
			if (func_70(70))
				num2 = 46;
			else
				num2 = 52;
		}
	}
	else
	{
		switch (Global_1888801[essParam0 /*35*/].f_20)
		{
			case 3:
				flag2 = false;
				break;
		
			case 4:
				if (Global_1888801[essParam0 /*35*/].f_13 != -1)
				{
					func_673(essParam0, Global_1888801[essParam0 /*35*/].f_14, Global_1888801[essParam0 /*35*/].f_15, true);
					Global_1888801[essParam0 /*35*/].f_13 = -1;
				}
				break;
		
			case 6:
				break;
		}
	}

	flag2;

	if (flag2 && !bParam2)
	{
		if (Global_1888801[essParam0 /*35*/].f_13 == -1)
		{
			Global_1888801[essParam0 /*35*/].f_14 = num2;
			Global_1888801[essParam0 /*35*/].f_13 = func_674(essParam0, num2, Global_1888801[essParam0 /*35*/].f_15, -1);
			func_675(essParam0, num2, Global_1888801[essParam0 /*35*/].f_15, &(Global_1888801[essParam0 /*35*/].f_22));
		
			if (essParam0 == 9)
			{
				if (MAP::DOES_BLIP_EXIST(Global_36308[Global_1888801[essParam0 /*35*/].f_13]))
				{
					MAP::SET_BLIP_COORDS(Global_36308[Global_1888801[essParam0 /*35*/].f_13], Global_1888801[essParam0 /*35*/].f_15);
					MAP::BLIP_ADD_MODIFIER(Global_36308[Global_1888801[essParam0 /*35*/].f_13], joaat("BLIP_MODIFIER_SHOW_HEIGHT"));
				}
			}
		
			if (Global_1572887.f_12 == -1)
				if (num2 == 52 && Global_1357549.f_1708)
					func_676(Global_1888801[essParam0 /*35*/].f_13, joaat("BLIP_STYLE_CAMP_HIDDEN"));
		}
		else if (Global_1888801[essParam0 /*35*/].f_14 != num2 || Global_1888801[essParam0 /*35*/].f_18)
		{
			func_673(essParam0, Global_1888801[essParam0 /*35*/].f_14, Global_1888801[essParam0 /*35*/].f_15, true);
			Global_1888801[essParam0 /*35*/].f_13 = -1;
			func_280(essParam0, 1024);
			Global_1888801[essParam0 /*35*/].f_18 = 0;
		}
	}
	else if (Global_1888801[essParam0 /*35*/].f_13 != -1)
	{
		func_673(essParam0, Global_1888801[essParam0 /*35*/].f_14, Global_1888801[essParam0 /*35*/].f_15, true);
		Global_1888801[essParam0 /*35*/].f_13 = -1;
		func_280(essParam0, 1024);
	}

	if (func_210(essParam0, 64))
	{
		func_280(essParam0, 64);
		func_677(essParam0);
	}

	if (flag3)
		if (!func_210(essParam0, 1024))
			if (func_678(essParam0, num2, joaat("BLIP_MODIFIER_HIDEOUT_ABANDONED")))
				func_322(essParam0, 1024);
	else if (func_210(essParam0, 1024))
		if (func_679(essParam0, num2, joaat("BLIP_MODIFIER_HIDEOUT_ABANDONED")))
			func_280(essParam0, 1024);

	return;
}

void func_433(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1BE07 Hash - 0x4480AC96 ^0x4480AC96
{
	if (bParam2)
		if (func_210(essParam0, 2))
			func_680(essParam0, Global_36);
		else if (func_210(essParam0, true))
			func_681(essParam0, 0);
		else
			func_682(essParam0, Global_36, bParam1);

	return;
}

BOOL func_434(BOOL bParam0) // Position - 0x1BE4D Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

eStackSize func_435(int iParam0) // Position - 0x1BE5D Hash - 0xF68DFCED ^0xF68DFCED
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 11;
	
		case 2:
			return 30;
	
		case 3:
			return 33;
	
		case 4:
			return 37;
	
		case 6:
			return 50;
	
		case 7:
			return 40;
	
		case 8:
			return 57;
	
		case 9:
			return 62;
	
		case 10:
			return 77;
	
		case 11:
			return 93;
	
		case 12:
			return 107;
	
		case 13:
			return 114;
	
		case 14:
			return 117;
	
		case 15:
			return 120;
	
		case 16:
			return 126;
	
		default:
		
	}

	return -1;
}

eStackSize func_436(int iParam0) // Position - 0x1BF1D Hash - 0x83E4657E ^0x83E4657E
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 29;
	
		case 2:
			return 32;
	
		case 3:
			return 36;
	
		case 4:
			return 39;
	
		case 6:
			return 56;
	
		case 7:
			return 49;
	
		case 8:
			return 61;
	
		case 9:
			return 76;
	
		case 10:
			return 92;
	
		case 11:
			return 106;
	
		case 12:
			return 113;
	
		case 13:
			return 116;
	
		case 14:
			return 119;
	
		case 15:
			return 125;
	
		case 16:
			return 127;
	
		default:
		
	}

	return -1;
}

BOOL func_437(var uParam0) // Position - 0x1BFDE Hash - 0xF1D5A5F7 ^0x43F9B000
{
	switch (Global_1897952.f_41)
	{
		case 0:
			if (Global_1894899.f_4 != 95)
				Global_1894899.f_4 = 95;
		
			*uParam0 = 1;
			return 1;
	
		case 2:
			if (Global_1894899.f_4 != 3)
				Global_1894899.f_4 = 3;
		
			*uParam0 = 1;
			return 1;
	
		case 9:
		case 10:
			if (Global_1894899.f_4 != MICRO)
				Global_1894899.f_4 = 128;
		
			*uParam0 = 1;
			return 1;
	
		case 11:
			if (Global_1894899.f_4 != 9)
			{
				Global_1894899.f_4 = 9;
			}
			else
			{
				Global_1894899.f_4 = 77;
				*uParam0 = 1;
			}
		
			return 1;
	
		case 13:
			if (Global_1894899.f_4 != 117)
			{
				Global_1894899.f_4 = 117;
			}
			else
			{
				Global_1894899.f_4 = 129;
				*uParam0 = 1;
			}
		
			return 1;
	}

	return 0;
}

BOOL func_438(int iParam0) // Position - 0x1C0D8 Hash - 0x10B6ADF3 ^0x5434DDBE
{
	int messageState;

	messageState = 6;

	if (func_683(iParam0))
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);

	return messageState != 6;
}

void func_439() // Position - 0x1C0F8 Hash - 0x86F27B71 ^0x16633782
{
	eStackSize stackSize;
	int num;
	Hash hash;
	Volume volume;

	stackSize = func_102(Global_36, true);
	num = func_195();
	hash = func_684();

	if (func_287(stackSize) && 32 != stackSize)
	{
		volume = Global_1888801[stackSize /*35*/].f_4;
	
		if (VOLUME::DOES_VOLUME_EXIST(volume) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volume, false, 0))
			func_386(stackSize, num, hash, func_685(0), -1, true);
		else
			func_386(-1, num, hash, func_685(0), -1, true);
	}
	else
	{
		func_386(stackSize, num, hash, func_685(0), -1, true);
	}

	return;
}

BOOL func_440(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1C188 Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_686(iParam3, &unk, &num, &num2);

	if (func_687(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

Hash func_441(int iParam0) // Position - 0x1C1B8 Hash - 0xB8EC44B7 ^0x64AC6E61
{
	switch (iParam0)
	{
		case 1:
			return -2089448537;
	
		case 4:
			return -1116738159;
	
		case 5:
			return -1394664008;
	
		case 6:
			return 82527577;
	
		case 7:
			return 1515744307;
	
		case 10:
			return -325788416;
	
		case 16:
			return 1474106589;
	
		case 18:
			return 1735191955;
	
		case 21:
			return -1173041902;
	
		case 22:
			return -1730421200;
	
		case 23:
			return 215480587;
	
		case 24:
			return -656861063;
	
		case 26:
			return 428613469;
	
		case 30:
			return 1740117339;
	
		case 31:
			return 1979340260;
	
		case 36:
			return -792566558;
	
		case 38:
			return 2073023198;
	
		case 40:
			return 532401286;
	
		case 41:
			return -2110824426;
	
		case 42:
			return 205568929;
	
		case 43:
			return 1268001912;
	
		case 44:
			return 545498183;
	
		case 45:
			return 2133877879;
	
		case 46:
			return -1408667066;
	
		case 47:
			return 1374995365;
	
		case 48:
			return 1837393665;
	
		case 49:
			return -1585921053;
	
		case 50:
			return -876779166;
	
		default:
		
	}

	return 0;
}

BOOL func_442(int iParam0) // Position - 0x1C351 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 42:
			return true;
	
		default:
		
	}

	return false;
}

Vector3 func_443(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, int iParam10, int iParam11, int iParam12, float fParam13) // Position - 0x1C36C Hash - 0x733D4CA6 ^0x733D4CA6
{
	int num;
	int num2;
	float num3;
	float num4;
	var unk;
	Vector3 vector;
	Volume volume;
	BOOL flag;
	BOOL flag2;
	var unk6;
	BOOL flag3;
	Any any;
	Any any2;
	Any any3;
	Any any4;

	num3 = 9999999f;
	func_688(&flag2, &unk6);
	flag3 = false;

	if (flag2)
		if (func_689() == 0 && !func_690(0))
			flag3 = true;

	if (!func_264(15, &any))
		return 0f, 0f, 0f;

	VOLUME::_0x748C5F51A18CB8F0(false);
	any2 = { any };

	if (bParam7)
	{
		volume = func_691();
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
		{
		}
	}

	if (!func_287(Global_1310720.f_21))
		iParam10 = iParam11;

	any.f_2 = 723128514;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&any3, &any);

	while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any3) > num)
	{
		num2 = 0;
		any2.f_2 = -1148748386;
		any2.f_3 = num;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&any4, &any2);
	
		while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any2, any4) > num2)
		{
			vector = { func_692(num, num2) };
			flag = func_693(num, num2);
			num4 = BUILTIN::VDIST(vParam0, vector);
		
			if (num4 < num3 && num4 > iParam10 && !_IS_NULL_VECTOR(vector) && func_694(num, bParam8, iParam12) && !func_695(num) || flag)
			{
				if (func_696(vector, num, num2, bParam5, bParam6, flag3, volume, bParam9, fParam13))
				{
					unk = { vector };
					num3 = BUILTIN::VDIST(vParam0, vector);
					*uParam3 = num;
					*uParam4 = num2;
				
					if (flag)
						break;
				}
			}
		
			num2 = num2 + 1;
		}
	
		num = num + 1;
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return unk;
}

BOOL func_444(int iParam0, int iParam1) // Position - 0x1C4FA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_445(int iParam0) // Position - 0x1C509 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_444(iParam0, 1))
		func_697(1);

	return;
}

int func_446(var uParam0, var uParam1, var uParam2) // Position - 0x1C520 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_698(uParam0, 0f, 0f, 0, 2);
	return func_698(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

BOOL func_447(const char* sParam0, struct<10> Param1, eStackSize essParam11) // Position - 0x1C55B Hash - 0x4FB42012 ^0x4D79AC98
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
		return 0;

	SCRIPTS::REQUEST_SCRIPT(sParam0);

	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
		return 0;

	SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam0, &Param1, 10, essParam11);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

BOOL func_448(const char* sParam0, eStackSize essParam1) // Position - 0x1C599 Hash - 0x2E077255 ^0x1A17A315
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
		return 0;

	SCRIPTS::REQUEST_SCRIPT(sParam0);

	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
		return 0;

	SCRIPTS::START_NEW_SCRIPT(sParam0, essParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

void func_449(int iParam0) // Position - 0x1C5D3 Hash - 0xBEE7BE6F ^0x7416FECE
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 10)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
		return;

	Global_1934603[iParam0 /*16*/] = { unk };
	Global_1934603.f_161 = Global_1934603.f_161 - 1;

	if (Global_1934603.f_161 < 0)
		Global_1934603.f_161 = 0;

	return;
}

BOOL func_450(int iParam0, int iParam1) // Position - 0x1C633 Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_104(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

void func_451(int iParam0, int iParam1) // Position - 0x1C67B Hash - 0x8CE59BC2 ^0x8A418101
{
	if (!func_104(iParam0))
		return;

	!func_450(iParam0, iParam1);

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = Global_40.f_358[iParam0 /*12*/].f_5 || iParam1;
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/].f_5 = Global_1058888.f_42196[iParam0 /*12*/].f_5 || iParam1;
	return;
}

void func_452(int iParam0, int iParam1) // Position - 0x1C6E5 Hash - 0x51AEA24 ^0x983B9297
{
	if (!func_104(iParam0))
		return;

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = Global_40.f_358[iParam0 /*12*/].f_5 - Global_40.f_358[iParam0 /*12*/].f_5 && iParam1;
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/].f_5 = Global_1058888.f_42196[iParam0 /*12*/].f_5 - Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1;
	return;
}

void func_453(int iParam0, BOOL bParam1) // Position - 0x1C760 Hash - 0x49678002 ^0x49678002
{
	if (!func_104(iParam0))
		return;

	if (bParam1)
		func_547(func_699(iParam0));
	else
		func_700(func_699(iParam0));

	return;
}

int func_454(eStackSize essParam0) // Position - 0x1C791 Hash - 0x224FC50D ^0x224FC50D
{
	if (essParam0 < 0)
		return -1;
	else if (essParam0 <= 10)
		return 0;
	else if (essParam0 <= 29)
		return 1;
	else if (essParam0 <= 32)
		return 2;
	else if (essParam0 <= 36)
		return 3;
	else if (essParam0 <= 39)
		return 4;
	else if (essParam0 <= 49)
		return 7;
	else if (essParam0 <= 56)
		return 6;
	else if (essParam0 <= 61)
		return 8;
	else if (essParam0 <= 76)
		return 9;
	else if (essParam0 <= 92)
		return 10;
	else if (essParam0 <= 106)
		return 11;
	else if (essParam0 <= 113)
		return 12;
	else if (essParam0 <= 115)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

void func_455(eStackSize essParam0, eStackSize essParam1) // Position - 0x1C88D Hash - 0x7388F0C5 ^0x866A1FF3
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_2 = essParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_2 = essParam1;
	return;
}

void func_456(eStackSize essParam0) // Position - 0x1C8BE Hash - 0x1C686B36 ^0x1C686B36
{
	if (!func_207(essParam0))
		return;

	if (func_548(essParam0))
		func_549(essParam0);
	else
		func_701(essParam0);

	return;
}

BOOL func_457(eStackSize essParam0) // Position - 0x1C8EB Hash - 0x6430C01F ^0xD1700991
{
	if (!func_207(essParam0))
		return false;

	return func_210(essParam0, 16777216);
}

Volume func_458(eStackSize essParam0) // Position - 0x1C90C Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_207(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_3;
}

int func_459(eStackSize essParam0) // Position - 0x1C92C Hash - 0x34D87891 ^0x34D87891
{
	int num;
	int num2;
	int num3;

	if (!func_207(essParam0))
		return 0;

	num = func_702(essParam0);

	if (num == -1)
		return -1;

	num2 = func_703(func_460(essParam0));
	num3 = num - num2;

	if (num3 < 0)
		num3 = 0;

	return num3;
}

eStackSize func_460(eStackSize essParam0) // Position - 0x1C972 Hash - 0xA8797BF3 ^0x5BC8C068
{
	if (!func_207(essParam0))
		return -15;

	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/].f_1;

	return Global_1058888.f_40545[essParam0 /*11*/].f_1;
}

BOOL func_461(eStackSize essParam0) // Position - 0x1C9AF Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_260(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_259(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_258(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_263(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_262(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_261(essParam0);

	if (num6 < 1 || num6 > func_704(num5, num4))
		return false;

	return true;
}

void func_462(eStackSize essParam0, eStackSize essParam1) // Position - 0x1CA8B Hash - 0x7388F0C5 ^0x4D727BFF
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_1 = essParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_1 = essParam1;
	return;
}

void func_463(eStackSize essParam0, int iParam1) // Position - 0x1CABC Hash - 0x3B089601 ^0x668F51A1
{
	if (!func_207(essParam0))
		return;

	if (iParam1 < 0)
		return;

	Global_23118[essParam0 /*11*/].f_3 = iParam1;
	return;
}

void func_464(eStackSize essParam0) // Position - 0x1CAE5 Hash - 0x115C5CF0 ^0x115C5CF0
{
	if (!func_207(essParam0))
		return;

	if (func_285(essParam0) && func_286(essParam0))
		func_547(func_506(essParam0));
	else
		func_700(func_506(essParam0));

	return;
}

void func_465(int iParam0, BOOL bParam1) // Position - 0x1CB25 Hash - 0xA4B8C237 ^0x935EEB2B
{
	if (!func_233(iParam0))
		return;

	!func_591(iParam0, bParam1);

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = Global_40.f_431[iParam0] || bParam1;
		return;
	}

	Global_1058888.f_42269[iParam0] = Global_1058888.f_42269[iParam0] || bParam1;
	return;
}

void func_466(int iParam0, BOOL bParam1) // Position - 0x1CB87 Hash - 0x6F253A8 ^0x120830DC
{
	if (!func_233(iParam0))
		return;

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = Global_40.f_431[iParam0] - Global_40.f_431[iParam0] && bParam1;
		return;
	}

	Global_1058888.f_42269[iParam0] = Global_1058888.f_42269[iParam0] - Global_1058888.f_42269[iParam0] && bParam1;
	return;
}

void func_467(int iParam0, BOOL bParam1) // Position - 0x1CBF6 Hash - 0xE581BD06 ^0xE581BD06
{
	Hash hash;

	if (!func_233(iParam0))
		return;

	if (iParam0 == 8)
		return;

	hash = func_705(iParam0);

	if (bParam1)
		func_547(hash);
	else
		func_700(hash);

	return;
}

Hash func_468() // Position - 0x1CC31 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

BOOL func_469(int iParam0) // Position - 0x1CC3A Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_27())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

Hash func_470(int iParam0, BOOL bParam1) // Position - 0x1CC65 Hash - 0xFD2E712D ^0x95AE5839
{
	Hash hash;
	var unk;
	var unk5;
	var unk9;
	var unk13;
	int i;

	hash = func_468();
	unk = 3;
	unk[0] = -1687561002;
	unk[1] = 1957225320;
	unk[2] = -860696938;
	unk5 = 3;
	unk5[0] = -1971474291;
	unk5[1] = -1425946870;
	unk5[2] = -1114426126;
	unk9 = 3;
	unk9[0] = -316909020;
	unk9[1] = -1962893335;
	unk9[2] = 1351589798;
	unk13 = 3;
	unk13[0] = 300868838;
	unk13[1] = -1788578071;
	unk13[2] = 1157066259;

	if (func_706() || func_576(Global_1347702[59 /*49*/].f_15) || func_576(Global_1347702[0 /*49*/].f_15) || func_707(64))
	{
		unk13[0] = -316909020;
		unk13[1] = -1962893335;
		unk13[2] = 1351589798;
	
		if (iParam0 == 0)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(300868838))
				STREAMING::REMOVE_IPL_HASH(300868838);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(-1788578071))
				STREAMING::REMOVE_IPL_HASH(-1788578071);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(1157066259))
				STREAMING::REMOVE_IPL_HASH(1157066259);
		}
	
		if (func_708(Global_1835011[9 /*74*/].f_1) == false && func_576(Global_1835011[9 /*74*/].f_1) == false)
		{
			if (iParam0 == 0)
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
					STREAMING::REMOVE_IPL_HASH(1475953931);
			
				if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
					STREAMING::REMOVE_IPL_HASH(1475953931);
			
				if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
					STREAMING::REMOVE_IPL_HASH(1475953931);
			}
		}
	}

	if (func_708(Global_1835011[9 /*74*/].f_1) || func_576(Global_1835011[9 /*74*/].f_1) || func_709() || func_297() == 2 || func_576(Global_1347702[66 /*49*/].f_15) || func_576(Global_1835011[10 /*74*/].f_1) && func_70(11) && func_707(64) == false)
	{
		unk9[0] = 1475953931;
		unk9[1] = 1475953931;
		unk9[2] = 1475953931;
		unk13[0] = 1475953931;
		unk13[1] = 1475953931;
		unk13[2] = 1475953931;
	}
	else
	{
		unk9[0] = -316909020;
		unk9[1] = -1962893335;
		unk9[2] = 1351589798;
	}

	if (func_710() || func_576(Global_1835011[4 /*74*/].f_1))
	{
		unk5[0] = unk[0];
		unk5[1] = unk[1];
		unk5[2] = unk[2];
	}

	if (func_711(1) && iParam0 == 1)
	{
		unk[0] = -1971474291;
		unk[1] = -1425946870;
		unk[2] = -1114426126;
		unk5[0] = -1687561002;
		unk5[1] = 1957225320;
		unk5[2] = -860696938;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk[i]))
				STREAMING::REMOVE_IPL_HASH(unk[i]);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk5[i]))
				STREAMING::REMOVE_IPL_HASH(unk5[i]);
		}
	
		return func_712();
	}

	switch (iParam0)
	{
		case 0:
			hash = func_713(&unk9, &unk13, bParam1);
			break;
	
		case 1:
			hash = func_713(&unk, &unk5, bParam1);
			break;
	}

	return hash;
}

Hash func_471(int iParam0, BOOL bParam1) // Position - 0x1CFE1 Hash - 0xFD2E712D ^0x46B3C936
{
	Hash hash;
	var unk;
	var unk5;
	var unk9;
	var unk13;

	hash = func_468();
	unk = 3;
	unk[0] = 1209017192;
	unk[1] = -2143243848;
	unk[2] = 510052409;
	unk5 = 3;
	unk5[0] = -644575724;
	unk5[1] = 291770965;
	unk5[2] = 1700661865;
	unk9 = 3;
	unk9[0] = 1070723367;
	unk9[1] = 1070723367;
	unk9[2] = 1070723367;
	unk13 = 3;

	if (func_708(Global_1835011[22 /*74*/].f_1) || func_576(Global_1835011[22 /*74*/].f_1) || func_708(Global_1835011[26 /*74*/].f_1) || func_576(Global_1835011[26 /*74*/].f_1) || func_576(Global_1835011[20 /*74*/].f_1) || func_70(20) && func_70(22) == false || func_576(Global_1835011[19 /*74*/].f_1) || func_113(Global_1898437) == 19 && func_714() || func_70(19) && func_70(22) == false && func_707(64) == false)
	{
		if (iParam0 == 0)
			if (STREAMING::IS_IPL_ACTIVE_HASH(-109425099))
				STREAMING::REMOVE_IPL_HASH(-109425099);
	
		unk13[0] = 1261237250;
		unk13[1] = 1261237250;
		unk13[2] = 1261237250;
		unk9[0] = 1261237250;
		unk9[1] = 1261237250;
		unk9[2] = 1261237250;
	}
	else
	{
		if (iParam0 == 0)
			if (STREAMING::IS_IPL_ACTIVE_HASH(1261237250))
				STREAMING::REMOVE_IPL_HASH(1261237250);
	
		unk13[0] = -109425099;
		unk13[1] = -109425099;
		unk13[2] = -109425099;
	}

	if (func_708(Global_1835011[23 /*74*/].f_1) || func_576(Global_1835011[23 /*74*/].f_1) || func_70(22) && func_70(23) == false && func_70(24) && func_339(20) || func_70(20) || func_70(22) && func_70(23) == false && func_70(20) && func_339(24) || func_70(24) || func_707(64))
	{
		if (iParam0 == 0)
			if (STREAMING::IS_IPL_ACTIVE_HASH(1070723367))
				STREAMING::REMOVE_IPL_HASH(1070723367);
	
		unk9[0] = -109425099;
		unk9[1] = -109425099;
		unk9[2] = -109425099;
	}

	if (func_710())
	{
		unk5[0] = unk[0];
		unk5[1] = unk[1];
		unk5[2] = unk[2];
	}

	switch (iParam0)
	{
		case 0:
			hash = func_713(&unk13, &unk9, bParam1);
			break;
	
		case 1:
			hash = func_713(&unk, &unk5, bParam1);
			break;
	}

	return hash;
}

Hash func_472(int iParam0, BOOL bParam1) // Position - 0x1D2F7 Hash - 0xFD2E712D ^0xE8B19664
{
	Hash hash;
	var unk;
	var unk5;
	var unk9;
	var unk13;

	hash = func_468();
	unk = 3;
	unk[0] = 531106429;
	unk[1] = 531106429;
	unk[2] = 531106429;
	unk5 = 3;
	unk5[0] = 1069611813;
	unk5[1] = 1069611813;
	unk5[2] = 1069611813;
	unk9 = 3;
	unk9[0] = 1102643191;
	unk9[1] = 1102643191;
	unk9[2] = 1102643191;
	unk13 = 3;
	unk13[0] = 44502487;
	unk13[1] = 44502487;
	unk13[2] = 44502487;

	if (func_708(Global_1835011[57 /*74*/].f_1) || func_576(Global_1835011[57 /*74*/].f_1) || func_708(Global_1835011[59 /*74*/].f_1) || func_576(Global_1835011[59 /*74*/].f_1) || func_708(Global_1835011[58 /*74*/].f_1) || func_576(Global_1835011[58 /*74*/].f_1) || func_715())
	{
		unk13[0] = 1102643191;
		unk13[1] = 1102643191;
		unk13[2] = 1102643191;
	
		if (iParam0 == 0)
			if (STREAMING::IS_IPL_ACTIVE_HASH(44502487))
				STREAMING::REMOVE_IPL_HASH(44502487);
	}

	if (func_710())
	{
		unk5[0] = unk[0];
		unk5[1] = unk[1];
		unk5[2] = unk[2];
	}

	switch (iParam0)
	{
		case 0:
			hash = func_713(&unk9, &unk13, bParam1);
			break;
	
		case 1:
			hash = func_713(&unk, &unk5, bParam1);
			break;
	}

	return hash;
}

void func_473(int iParam0, BOOL bParam1) // Position - 0x1D4A2 Hash - 0x5A771383 ^0x8994DAFC
{
	var unk;
	var unk20;
	var unk39;
	int num;
	BOOL flag;
	BOOL flag2;

	unk = 18;
	unk20 = 18;
	unk39 = 18;
	unk[0] = -224845272;
	unk20[0] = -268335331;
	unk39[0] = func_712();
	unk[1] = -147867326;
	unk20[1] = 1546110128;
	unk39[1] = -855912354;
	unk[2] = -1262979941;
	unk20[2] = 324486076;
	unk39[2] = func_712();
	unk[3] = -2119627968;
	unk20[3] = -2052582076;
	unk39[3] = -402976431;
	unk[4] = -837651311;
	unk20[4] = 1029525997;
	unk39[4] = func_712();
	unk[5] = -2089261255;
	unk20[5] = -1472352094;
	unk39[5] = func_712();
	unk[6] = -1145367359;
	unk20[6] = -745860880;
	unk39[6] = func_712();
	unk[7] = -1145367359;
	unk20[7] = 1219276914;
	unk39[7] = func_712();
	unk[8] = -1608451354;
	unk20[8] = -2104773585;
	unk39[8] = func_712();
	unk[9] = 2137149309;
	unk20[9] = -302735166;
	unk39[9] = func_712();
	unk[10] = -1329287819;
	unk20[10] = -2077690059;
	unk39[10] = func_712();
	unk[11] = -848232571;
	unk20[11] = 1548546221;
	unk39[11] = func_712();
	unk[12] = -804860583;
	unk20[12] = 2101101756;
	unk39[12] = func_712();
	unk[13] = -7810518;
	unk20[13] = 1560807181;
	unk39[13] = func_712();
	unk[14] = 1510372288;
	unk20[14] = 106249677;
	unk39[14] = func_712();
	unk[15] = 858182906;
	unk20[15] = -723982773;
	unk39[15] = func_712();
	unk[16] = 708084994;
	unk20[16] = 327932996;
	unk39[16] = func_712();
	unk[17] = 765991018;
	unk20[17] = -15722296;
	unk39[17] = func_712();
	flag2 = false;

	if (iParam0 == 1)
	{
		num = func_716(unk[Global_1357549.f_575], 3);
		flag = func_717(unk[Global_1357549.f_575]);
		flag2 = num > 0 || flag;
	
		if (flag2 || bParam1)
		{
			if (func_238(unk20[Global_1357549.f_575]))
			{
				if (!STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
				{
					func_241(unk20[Global_1357549.f_575], true);
					func_718(unk20[Global_1357549.f_575]);
				}
			
				if (func_238(unk39[Global_1357549.f_575]))
					if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]))
						STREAMING::REMOVE_IPL_HASH(unk39[Global_1357549.f_575]);
			}
		}
		else
		{
			if (func_238(unk20[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
				{
					func_241(unk20[Global_1357549.f_575], false);
					STREAMING::REMOVE_IPL_HASH(unk20[Global_1357549.f_575]);
				}
			}
		
			if (func_238(unk39[Global_1357549.f_575]))
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]) == false)
					STREAMING::REQUEST_IPL_HASH(unk39[Global_1357549.f_575]);
		}
	}

	if (iParam0 != 1 || func_297() == 2)
	{
		if (func_238(unk39[Global_1357549.f_575]))
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]))
				STREAMING::REMOVE_IPL_HASH(unk39[Global_1357549.f_575]);
	
		if (func_238(unk20[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
			{
				func_241(unk20[Global_1357549.f_575], false);
				STREAMING::REMOVE_IPL_HASH(unk20[Global_1357549.f_575]);
			}
		}
	}

	return;
}

void func_474(int iParam0, BOOL bParam1) // Position - 0x1D8A7 Hash - 0x5A771383 ^0x4CD6FD17
{
	var unk;
	var unk20;
	var unk39;

	unk = 18;
	unk20 = 18;
	unk39 = 18;
	unk[0] = 2137149309;
	unk20[0] = joaat("cle_upg_campfire_rug_cow");
	unk39[0] = func_712();
	unk[1] = -147867326;
	unk20[1] = -1774140220;
	unk39[1] = -262271608;
	unk[2] = -1262979941;
	unk20[2] = 1601820048;
	unk39[2] = func_712();
	unk[3] = -2119627968;
	unk20[3] = 2025485344;
	unk39[3] = 901520480;
	unk[4] = -837651311;
	unk20[4] = -1999465365;
	unk39[4] = func_712();
	unk[5] = -2089261255;
	unk20[5] = 853723410;
	unk39[5] = func_712();
	unk[6] = -1145367359;
	unk20[6] = 1169958167;
	unk39[6] = func_712();
	unk[7] = -1145367359;
	unk20[7] = -792944828;
	unk39[7] = func_712();
	unk[8] = -1608451354;
	unk20[8] = -2001921071;
	unk39[8] = func_712();
	unk[9] = -7810518;
	unk20[9] = 157361403;
	unk39[9] = func_712();
	unk[10] = -1329287819;
	unk20[10] = -492479795;
	unk39[10] = func_712();
	unk[11] = -848232571;
	unk20[11] = -1284301817;
	unk39[11] = func_712();
	unk[12] = -804860583;
	unk20[12] = -1045282549;
	unk39[12] = func_712();
	unk[13] = 1510372288;
	unk20[13] = -989202374;
	unk39[13] = func_712();
	unk[14] = -224845272;
	unk20[14] = 1538837441;
	unk39[14] = func_712();
	unk[15] = 858182906;
	unk20[15] = 530288130;
	unk39[15] = func_712();
	unk[16] = 708084994;
	unk20[16] = -1887167048;
	unk39[16] = func_712();
	unk[17] = 765991018;
	unk20[17] = -347518940;
	unk39[17] = func_712();

	if (iParam0 == 2)
	{
		if (func_716(unk[Global_1357549.f_575], 3) > 0 || func_717(unk[Global_1357549.f_575]) || bParam1)
		{
			if (func_238(unk20[Global_1357549.f_575]))
			{
				if (!STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
				{
					func_241(unk20[Global_1357549.f_575], true);
					func_718(unk20[Global_1357549.f_575]);
				}
			}
		
			if (func_238(unk39[Global_1357549.f_575]))
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]))
					STREAMING::REMOVE_IPL_HASH(unk39[Global_1357549.f_575]);
		}
		else
		{
			if (func_238(unk20[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
				{
					func_241(unk20[Global_1357549.f_575], false);
					STREAMING::REMOVE_IPL_HASH(unk20[Global_1357549.f_575]);
				}
			}
		
			if (func_238(unk39[Global_1357549.f_575]))
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]) == false)
					STREAMING::REQUEST_IPL_HASH(unk39[Global_1357549.f_575]);
		}
	}

	if (iParam0 != 2 || func_297() != 1)
	{
		if (func_238(unk39[Global_1357549.f_575]))
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]))
				STREAMING::REMOVE_IPL_HASH(unk39[Global_1357549.f_575]);
	
		if (func_238(unk20[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
			{
				func_241(unk20[Global_1357549.f_575], false);
				STREAMING::REMOVE_IPL_HASH(unk20[Global_1357549.f_575]);
			}
		}
	}

	return;
}

void func_475(int iParam0, BOOL bParam1) // Position - 0x1DC9D Hash - 0x8D0E9304 ^0x81E5B37A
{
	var unk;
	var unk20;
	var unk39;
	var unk46;
	int i;
	int num;
	BOOL flag;
	BOOL flag2;

	unk = 18;
	unk20 = 18;
	unk[0] = 2137149309;
	unk20[0] = -134624703;
	unk[1] = -147867326;
	unk20[1] = func_468();
	unk[2] = -1262979941;
	unk20[2] = func_468();
	unk[3] = -2119627968;
	unk20[3] = func_468();
	unk[4] = -837651311;
	unk20[4] = func_468();
	unk[5] = -2089261255;
	unk20[5] = func_468();
	unk[6] = -1145367359;
	unk20[6] = -1535722316;
	unk[7] = -1145367359;
	unk20[7] = 1547994518;
	unk[8] = -1608451354;
	unk20[8] = func_468();
	unk[9] = -1329287819;
	unk20[9] = -910918420;
	unk[10] = -848232571;
	unk20[10] = 495480888;
	unk[11] = -804860583;
	unk20[11] = 2004706822;
	unk[12] = 1510372288;
	unk20[12] = 884576413;
	unk[13] = -7810518;
	unk20[13] = 778703691;
	unk[14] = -224845272;
	unk20[14] = -421730990;
	unk[15] = 858182906;
	unk20[15] = 514406510;
	unk[16] = 765991018;
	unk20[16] = -327708229;
	unk[17] = 708084994;
	unk20[17] = 1048845581;

	if (iParam0 == 3 && func_719(unk[Global_1357549.f_575], 1, false) || func_717(unk[Global_1357549.f_575]) || bParam1)
	{
		if (func_238(unk20[Global_1357549.f_575]))
		{
			if (!STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
			{
				func_241(unk20[Global_1357549.f_575], true);
				func_718(unk20[Global_1357549.f_575]);
			}
		}
	}
	else if (func_238(unk20[Global_1357549.f_575]))
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
		{
			func_241(unk20[Global_1357549.f_575], false);
			STREAMING::REMOVE_IPL_HASH(unk20[Global_1357549.f_575]);
		}
	}

	unk39 = 6;
	unk46 = 6;
	unk39[0] = -1608451354;
	unk46[0] = 11;
	unk39[1] = -147867326;
	unk46[1] = 12;
	unk39[2] = -1262979941;
	unk46[2] = 13;
	unk39[3] = -837651311;
	unk46[3] = 14;
	unk39[4] = -2119627968;
	unk46[4] = 16;
	unk39[5] = -2089261255;
	unk46[5] = 15;
	flag2 = false;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == 3)
		{
			num = func_716(unk39[i], 3);
			flag = func_717(unk39[i]);
			flag2 = num > 0 || flag;
		}
	
		if (flag2 || bParam1)
			if (func_552(unk46[i]) == false)
				func_304(unk46[i]);
		else if (func_552(unk46[i]))
			func_314(unk46[i]);
	}

	return;
}

void func_476(int iParam0, BOOL bParam1) // Position - 0x1DFD7 Hash - 0x5A771383 ^0xCDA89421
{
	var unk;
	var unk20;
	var unk39;
	int num;
	BOOL flag;
	BOOL flag2;

	unk = 18;
	unk20 = 18;
	unk39 = 18;
	unk[0] = 2137149309;
	unk20[0] = 1104800593;
	unk39[0] = func_712();
	unk[1] = -1145367359;
	unk20[1] = 968084866;
	unk39[1] = func_712();
	unk[2] = -1145367359;
	unk20[2] = -696422730;
	unk39[2] = func_712();
	unk[3] = -1329287819;
	unk20[3] = 1423158124;
	unk39[3] = func_712();
	unk[4] = -1608451354;
	unk20[4] = -1063259251;
	unk39[4] = func_712();
	unk[5] = -147867326;
	unk20[5] = -317096325;
	unk39[5] = 1025787994;
	unk[6] = -1262979941;
	unk20[6] = -1255331540;
	unk39[6] = func_712();
	unk[7] = -2119627968;
	unk20[7] = -1063926197;
	unk39[7] = 629519239;
	unk[8] = -837651311;
	unk20[8] = 360408116;
	unk39[8] = func_712();
	unk[9] = -2089261255;
	unk20[9] = -408234235;
	unk39[9] = func_712();
	unk[10] = -848232571;
	unk20[10] = -1016007592;
	unk39[10] = func_712();
	unk[11] = -804860583;
	unk20[11] = -763678874;
	unk39[11] = func_712();
	unk[12] = 1510372288;
	unk20[12] = -1361342903;
	unk39[12] = func_712();
	unk[13] = -7810518;
	unk20[13] = -483001024;
	unk39[13] = func_712();
	unk[14] = -224845272;
	unk20[14] = 255767990;
	unk39[14] = func_712();
	unk[15] = 858182906;
	unk20[15] = -2048221620;
	unk39[15] = func_712();
	unk[16] = 765991018;
	unk20[16] = 339295570;
	unk39[16] = func_712();
	unk[17] = 708084994;
	unk20[17] = 668976634;
	unk39[17] = func_712();
	flag2 = false;

	if (iParam0 == 6)
	{
		num = func_716(unk[Global_1357549.f_575], 3);
		flag = func_717(unk[Global_1357549.f_575]);
		flag2 = num > 0 || flag;
	
		if (flag2 || bParam1)
		{
			if (func_238(unk20[Global_1357549.f_575]))
			{
				if (!STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
				{
					func_241(unk20[Global_1357549.f_575], true);
					func_718(unk20[Global_1357549.f_575]);
				}
			}
		
			if (func_238(unk39[Global_1357549.f_575]))
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]))
					STREAMING::REMOVE_IPL_HASH(unk39[Global_1357549.f_575]);
		}
		else
		{
			if (func_238(unk20[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
				{
					func_241(unk20[Global_1357549.f_575], false);
					STREAMING::REMOVE_IPL_HASH(unk20[Global_1357549.f_575]);
				}
			}
		
			if (func_238(unk39[Global_1357549.f_575]))
				if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]) == false)
					STREAMING::REQUEST_IPL_HASH(unk39[Global_1357549.f_575]);
		}
	}

	if (iParam0 != 6 || func_297() != 1)
	{
		if (func_238(unk39[Global_1357549.f_575]))
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk39[Global_1357549.f_575]))
				STREAMING::REMOVE_IPL_HASH(unk39[Global_1357549.f_575]);
	
		if (func_238(unk20[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk20[Global_1357549.f_575]))
			{
				func_241(unk20[Global_1357549.f_575], false);
				STREAMING::REMOVE_IPL_HASH(unk20[Global_1357549.f_575]);
			}
		}
	}

	return;
}

int func_477(int iParam0) // Position - 0x1E3DC Hash - 0x882BD8C9 ^0x882BD8C9
{
	int num;

	num = 1;

	if (iParam0 == 16)
		num = Global_40.f_4283.f_312;
	else
		num = func_720(iParam0, 0);

	return num;
}

float func_478() // Position - 0x1E407 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1357549.f_1900;
}

void func_479(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1E416 Hash - 0xDB88653E ^0x78B8D870
{
	var unk;
	int i;
	int j;

	unk = 17;
	unk.f_1 = 4;
	unk.f_1.f_5 = 4;
	unk.f_1.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk[15 /*5*/][0] = func_712();
	unk[15 /*5*/][1] = func_712();
	unk[15 /*5*/][2] = 1079303588;
	unk[15 /*5*/][3] = 1079303588;
	unk[10 /*5*/][0] = -937893311;
	unk[10 /*5*/][1] = -937893311;
	unk[10 /*5*/][2] = -937893311;
	unk[10 /*5*/][3] = joaat("abi1_arrive");
	unk[11 /*5*/][0] = func_712();
	unk[11 /*5*/][1] = func_712();
	unk[11 /*5*/][2] = func_712();
	unk[11 /*5*/][3] = func_712();
	unk[12 /*5*/][0] = func_712();
	unk[12 /*5*/][1] = func_712();
	unk[12 /*5*/][2] = func_712();
	unk[12 /*5*/][3] = func_712();
	unk[13 /*5*/][0] = func_712();
	unk[13 /*5*/][1] = func_712();
	unk[13 /*5*/][2] = func_712();
	unk[13 /*5*/][3] = func_712();
	unk[9 /*5*/][0] = -1365193577;
	unk[9 /*5*/][1] = -1166561064;
	unk[9 /*5*/][2] = -1166561064;
	unk[9 /*5*/][3] = -1166561064;
	unk[8 /*5*/][0] = -1620486708;
	unk[8 /*5*/][1] = -1620486708;
	unk[8 /*5*/][2] = -1620486708;
	unk[8 /*5*/][3] = 163126540;
	unk[7 /*5*/][0] = 1808508475;
	unk[7 /*5*/][1] = 1808508475;
	unk[7 /*5*/][2] = 1808508475;
	unk[7 /*5*/][3] = 2015311123;
	unk[6 /*5*/][0] = -1576393943;
	unk[6 /*5*/][1] = -1576393943;
	unk[6 /*5*/][2] = -1576393943;
	unk[6 /*5*/][3] = -1920340119;
	unk[5 /*5*/][0] = -1563072795;
	unk[5 /*5*/][1] = -1563072795;
	unk[5 /*5*/][2] = 607574432;
	unk[5 /*5*/][3] = 607574432;
	unk[4 /*5*/][0] = -1987982797;
	unk[4 /*5*/][1] = -1987982797;
	unk[4 /*5*/][2] = -1987982797;
	unk[4 /*5*/][3] = -1933895237;
	unk[3 /*5*/][0] = -182995231;
	unk[3 /*5*/][1] = -182995231;
	unk[3 /*5*/][2] = 1267297807;
	unk[3 /*5*/][3] = 1267297807;
	unk[0 /*5*/][0] = func_712();
	unk[0 /*5*/][1] = -1150137955;
	unk[0 /*5*/][2] = -1150137955;
	unk[0 /*5*/][3] = -1150137955;
	unk[1 /*5*/][0] = func_712();
	unk[1 /*5*/][1] = func_712();
	unk[1 /*5*/][2] = func_712();
	unk[1 /*5*/][3] = func_712();
	unk[2 /*5*/][0] = func_712();
	unk[2 /*5*/][1] = func_712();
	unk[2 /*5*/][2] = func_712();
	unk[2 /*5*/][3] = func_712();

	for (j = 0; j < 17; j = j + 1)
	{
		for (i = 0; i < 4; i = i + 1)
		{
			if (unk[j /*5*/][i] != func_712())
			{
				if (i + 1 == func_720(j, 1) && iParam0 == 1 && bParam2)
				{
					if (!STREAMING::IS_IPL_ACTIVE_HASH(unk[j /*5*/][i]))
					{
						STREAMING::REQUEST_IPL_HASH(unk[j /*5*/][i]);
						func_721(unk[j /*5*/][i], true, iParam1);
					}
				}
				else if (unk[j /*5*/][func_720(j, 1) - 1] != unk[j /*5*/][i] || iParam0 != 1 || bParam2 == false)
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(unk[j /*5*/][i]))
					{
						STREAMING::REMOVE_IPL_HASH(unk[j /*5*/][i]);
						func_721(unk[j /*5*/][i], false, iParam1);
					}
				}
			}
		}
	}

	return;
}

void func_480(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1E869 Hash - 0x5228FE93 ^0x814554A2
{
	int num;
	var unk;
	int i;
	int j;
	int k;

	if (fParam1 < 30f)
		num = 0;
	else if (fParam1 < 75f)
		num = 1;
	else
		num = 2;

	unk = 3;
	unk.f_1 = 3;
	unk.f_1.f_1 = 4;
	unk.f_1.f_1.f_5 = 4;
	unk.f_1.f_1.f_5.f_5 = 4;
	unk.f_1.f_16 = 3;
	unk.f_1.f_16.f_1 = 4;
	unk.f_1.f_16.f_1.f_5 = 4;
	unk.f_1.f_16.f_1.f_5.f_5 = 4;
	unk.f_1.f_16.f_16 = 3;
	unk.f_1.f_16.f_16.f_1 = 4;
	unk.f_1.f_16.f_16.f_1.f_5 = 4;
	unk.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	unk[0 /*16*/][0 /*5*/][0] = func_712();
	unk[1 /*16*/][0 /*5*/][0] = func_712();
	unk[2 /*16*/][0 /*5*/][0] = func_712();
	unk[0 /*16*/][0 /*5*/][1] = -710911638;
	unk[1 /*16*/][0 /*5*/][1] = -710911638;
	unk[2 /*16*/][0 /*5*/][1] = -710911638;
	unk[0 /*16*/][0 /*5*/][2] = -942555699;
	unk[1 /*16*/][0 /*5*/][2] = -942555699;
	unk[2 /*16*/][0 /*5*/][2] = -942555699;
	unk[0 /*16*/][0 /*5*/][3] = -760097927;
	unk[1 /*16*/][0 /*5*/][3] = -760097927;
	unk[2 /*16*/][0 /*5*/][3] = -760097927;
	unk[0 /*16*/][1 /*5*/][0] = func_712();
	unk[1 /*16*/][1 /*5*/][0] = func_712();
	unk[2 /*16*/][1 /*5*/][0] = func_712();
	unk[0 /*16*/][1 /*5*/][1] = 2047954825;
	unk[1 /*16*/][1 /*5*/][1] = 2047954825;
	unk[2 /*16*/][1 /*5*/][1] = 2047954825;
	unk[0 /*16*/][1 /*5*/][2] = -2085723453;
	unk[1 /*16*/][1 /*5*/][2] = -2085723453;
	unk[2 /*16*/][1 /*5*/][2] = -2085723453;
	unk[0 /*16*/][1 /*5*/][3] = 1434945142;
	unk[1 /*16*/][1 /*5*/][3] = 1434945142;
	unk[2 /*16*/][1 /*5*/][3] = 1434945142;
	unk[0 /*16*/][2 /*5*/][0] = 1924209179;
	unk[1 /*16*/][2 /*5*/][0] = 1924209179;
	unk[2 /*16*/][2 /*5*/][0] = 1924209179;
	unk[0 /*16*/][2 /*5*/][1] = -2084193212;
	unk[1 /*16*/][2 /*5*/][1] = -2084193212;
	unk[2 /*16*/][2 /*5*/][1] = -2084193212;
	unk[0 /*16*/][2 /*5*/][2] = -838184752;
	unk[1 /*16*/][2 /*5*/][2] = -838184752;
	unk[2 /*16*/][2 /*5*/][2] = -838184752;
	unk[0 /*16*/][2 /*5*/][3] = -1433138716;
	unk[1 /*16*/][2 /*5*/][3] = -1433138716;
	unk[2 /*16*/][2 /*5*/][3] = -1433138716;

	for (k = 0; k < 3; k = k + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (i = 0; i < 4; i = i + 1)
			{
				if (unk[k /*16*/][j /*5*/][i] != func_712())
					if (k == num && i + 1 == func_722(j) && iParam0 == 1 && bParam2)
						if (!STREAMING::IS_IPL_ACTIVE_HASH(unk[k /*16*/][j /*5*/][i]))
							STREAMING::REQUEST_IPL_HASH(unk[k /*16*/][j /*5*/][i]);
					else if (unk[num /*16*/][j /*5*/][func_722(j) - 1] != unk[k /*16*/][j /*5*/][i] || iParam0 != 1 || bParam2 == false)
						if (STREAMING::IS_IPL_ACTIVE_HASH(unk[k /*16*/][j /*5*/][i]))
							STREAMING::REMOVE_IPL_HASH(unk[k /*16*/][j /*5*/][i]);
			}
		}
	}

	return;
}

void func_481(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1EC14 Hash - 0x452D2630 ^0x22B48CCE
{
	var unk;
	int i;
	int j;

	unk = 17;
	unk.f_1 = 4;
	unk.f_1.f_5 = 4;
	unk.f_1.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk[15 /*5*/][0] = func_712();
	unk[15 /*5*/][1] = func_712();
	unk[15 /*5*/][2] = -1147256587;
	unk[15 /*5*/][3] = -1147256587;
	unk[10 /*5*/][0] = -1247551347;
	unk[10 /*5*/][1] = -1247551347;
	unk[10 /*5*/][2] = -1247551347;
	unk[10 /*5*/][3] = -1010466481;
	unk[11 /*5*/][0] = func_712();
	unk[11 /*5*/][1] = func_712();
	unk[11 /*5*/][2] = func_712();
	unk[11 /*5*/][3] = func_712();
	unk[12 /*5*/][0] = func_712();
	unk[12 /*5*/][1] = func_712();
	unk[12 /*5*/][2] = func_712();
	unk[12 /*5*/][3] = func_712();
	unk[13 /*5*/][0] = func_712();
	unk[13 /*5*/][1] = func_712();
	unk[13 /*5*/][2] = func_712();
	unk[13 /*5*/][3] = func_712();
	unk[9 /*5*/][0] = -160392273;
	unk[9 /*5*/][1] = 1049842342;
	unk[9 /*5*/][2] = 1049842342;
	unk[9 /*5*/][3] = 1049842342;
	unk[8 /*5*/][0] = 1674800958;
	unk[8 /*5*/][1] = 1674800958;
	unk[8 /*5*/][2] = 1674800958;
	unk[8 /*5*/][3] = 2728487;
	unk[7 /*5*/][0] = 1636281938;
	unk[7 /*5*/][1] = 1636281938;
	unk[7 /*5*/][2] = 1636281938;
	unk[7 /*5*/][3] = 1084869405;
	unk[6 /*5*/][0] = -1451784475;
	unk[6 /*5*/][1] = -1451784475;
	unk[6 /*5*/][2] = -1451784475;
	unk[6 /*5*/][3] = 1128417383;
	unk[5 /*5*/][0] = -2016771661;
	unk[5 /*5*/][1] = -2016771661;
	unk[5 /*5*/][2] = 202127432;
	unk[5 /*5*/][3] = 202127432;
	unk[4 /*5*/][0] = -546137515;
	unk[4 /*5*/][1] = -546137515;
	unk[4 /*5*/][2] = -546137515;
	unk[4 /*5*/][3] = 1679038623;

	if (bParam3)
		func_723(true);
	else
		func_723(false);

	unk[3 /*5*/][0] = 1742990618;
	unk[3 /*5*/][1] = 1742990618;
	unk[3 /*5*/][2] = -751959361;
	unk[3 /*5*/][3] = -751959361;
	unk[0 /*5*/][0] = func_712();
	unk[0 /*5*/][1] = func_712();
	unk[0 /*5*/][2] = -2000080725;
	unk[0 /*5*/][3] = -2000080725;
	unk[1 /*5*/][0] = 2123887232;
	unk[1 /*5*/][1] = 2123887232;
	unk[1 /*5*/][2] = 2123887232;
	unk[1 /*5*/][3] = 2123887232;
	unk[2 /*5*/][0] = 102652153;
	unk[2 /*5*/][1] = 102652153;
	unk[2 /*5*/][2] = 102652153;
	unk[2 /*5*/][3] = 102652153;

	for (j = 0; j < 17; j = j + 1)
	{
		for (i = 0; i < 4; i = i + 1)
		{
			if (unk[j /*5*/][i] != func_712())
			{
				if (i + 1 == func_720(j, 1) && iParam0 == 2 && bParam2)
				{
					if (!STREAMING::IS_IPL_ACTIVE_HASH(unk[j /*5*/][i]))
					{
						STREAMING::REQUEST_IPL_HASH(unk[j /*5*/][i]);
						func_721(unk[j /*5*/][i], true, iParam1);
					}
				}
				else if (unk[j /*5*/][func_720(j, 1) - 1] != unk[j /*5*/][i] || iParam0 != 2 || bParam2 == false)
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(unk[j /*5*/][i]))
					{
						STREAMING::REMOVE_IPL_HASH(unk[j /*5*/][i]);
						func_721(unk[j /*5*/][i], false, iParam1);
					}
				}
			}
		}
	}

	return;
}

void func_482(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F07F Hash - 0x5CA8D301 ^0x79FAF158
{
	int num;
	var unk;
	int i;
	int j;
	int k;

	if (fParam1 < 30f)
		num = 0;
	else if (fParam1 < 75f)
		num = 1;
	else
		num = 2;

	unk = 3;
	unk.f_1 = 3;
	unk.f_1.f_1 = 4;
	unk.f_1.f_1.f_5 = 4;
	unk.f_1.f_1.f_5.f_5 = 4;
	unk.f_1.f_16 = 3;
	unk.f_1.f_16.f_1 = 4;
	unk.f_1.f_16.f_1.f_5 = 4;
	unk.f_1.f_16.f_1.f_5.f_5 = 4;
	unk.f_1.f_16.f_16 = 3;
	unk.f_1.f_16.f_16.f_1 = 4;
	unk.f_1.f_16.f_16.f_1.f_5 = 4;
	unk.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	unk[0 /*16*/][0 /*5*/][0] = func_712();
	unk[1 /*16*/][0 /*5*/][0] = func_712();
	unk[2 /*16*/][0 /*5*/][0] = func_712();
	unk[0 /*16*/][0 /*5*/][1] = 626928579;
	unk[1 /*16*/][0 /*5*/][1] = 626928579;
	unk[2 /*16*/][0 /*5*/][1] = 626928579;
	unk[0 /*16*/][0 /*5*/][2] = 313722477;
	unk[1 /*16*/][0 /*5*/][2] = 313722477;
	unk[2 /*16*/][0 /*5*/][2] = 313722477;
	unk[0 /*16*/][0 /*5*/][3] = 976082270;
	unk[1 /*16*/][0 /*5*/][3] = 976082270;
	unk[2 /*16*/][0 /*5*/][3] = 976082270;

	if (bParam3)
	{
		unk[0 /*16*/][1 /*5*/][0] = func_712();
		unk[1 /*16*/][1 /*5*/][0] = func_712();
		unk[2 /*16*/][1 /*5*/][0] = func_712();
		unk[0 /*16*/][1 /*5*/][1] = -1370620659;
		unk[1 /*16*/][1 /*5*/][1] = -1370620659;
		unk[2 /*16*/][1 /*5*/][1] = -1370620659;
		unk[0 /*16*/][1 /*5*/][2] = -624219879;
		unk[1 /*16*/][1 /*5*/][2] = -624219879;
		unk[2 /*16*/][1 /*5*/][2] = -624219879;
		unk[0 /*16*/][1 /*5*/][3] = 715730031;
		unk[1 /*16*/][1 /*5*/][3] = 715730031;
		unk[2 /*16*/][1 /*5*/][3] = 715730031;
		func_724(true);
	}
	else
	{
		unk[0 /*16*/][1 /*5*/][0] = func_712();
		unk[1 /*16*/][1 /*5*/][0] = func_712();
		unk[2 /*16*/][1 /*5*/][0] = func_712();
		unk[0 /*16*/][1 /*5*/][1] = 5585502;
		unk[1 /*16*/][1 /*5*/][1] = 5585502;
		unk[2 /*16*/][1 /*5*/][1] = 5585502;
		unk[0 /*16*/][1 /*5*/][2] = -1362716862;
		unk[1 /*16*/][1 /*5*/][2] = -1362716862;
		unk[2 /*16*/][1 /*5*/][2] = -1362716862;
		unk[0 /*16*/][1 /*5*/][3] = 482931525;
		unk[1 /*16*/][1 /*5*/][3] = 482931525;
		unk[2 /*16*/][1 /*5*/][3] = 482931525;
		func_724(false);
	}

	unk[0 /*16*/][2 /*5*/][0] = -462274808;
	unk[1 /*16*/][2 /*5*/][0] = -462274808;
	unk[2 /*16*/][2 /*5*/][0] = -462274808;
	unk[0 /*16*/][2 /*5*/][1] = -1906732332;
	unk[1 /*16*/][2 /*5*/][1] = -1906732332;
	unk[2 /*16*/][2 /*5*/][1] = -1906732332;
	unk[0 /*16*/][2 /*5*/][2] = -526829;
	unk[1 /*16*/][2 /*5*/][2] = -526829;
	unk[2 /*16*/][2 /*5*/][2] = -526829;
	unk[0 /*16*/][2 /*5*/][3] = -1754422016;
	unk[1 /*16*/][2 /*5*/][3] = -1754422016;
	unk[2 /*16*/][2 /*5*/][3] = -1754422016;

	for (k = 0; k < 3; k = k + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (i = 0; i < 4; i = i + 1)
			{
				if (unk[k /*16*/][j /*5*/][i] != func_712())
					if (k == num && i + 1 == func_722(j) && iParam0 == 2 && bParam2)
						if (!STREAMING::IS_IPL_ACTIVE_HASH(unk[k /*16*/][j /*5*/][i]))
							STREAMING::REQUEST_IPL_HASH(unk[k /*16*/][j /*5*/][i]);
					else if (unk[num /*16*/][j /*5*/][func_722(j) - 1] != unk[k /*16*/][j /*5*/][i] || iParam0 != 2 || bParam2 == false)
						if (STREAMING::IS_IPL_ACTIVE_HASH(unk[k /*16*/][j /*5*/][i]))
							STREAMING::REMOVE_IPL_HASH(unk[k /*16*/][j /*5*/][i]);
			}
		}
	}

	return;
}

void func_483(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1F4F6 Hash - 0xDB88653E ^0x78B8D870
{
	var unk;
	int i;
	int j;

	unk = 17;
	unk.f_1 = 4;
	unk.f_1.f_5 = 4;
	unk.f_1.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	unk[10 /*5*/][0] = 2036492390;
	unk[10 /*5*/][1] = 2036492390;
	unk[10 /*5*/][2] = 2036492390;
	unk[10 /*5*/][3] = 1865439665;
	unk[11 /*5*/][0] = func_712();
	unk[11 /*5*/][1] = func_712();
	unk[11 /*5*/][2] = func_712();
	unk[11 /*5*/][3] = func_712();
	unk[12 /*5*/][0] = func_712();
	unk[12 /*5*/][1] = func_712();
	unk[12 /*5*/][2] = func_712();
	unk[12 /*5*/][3] = func_712();
	unk[13 /*5*/][0] = func_712();
	unk[13 /*5*/][1] = func_712();
	unk[13 /*5*/][2] = func_712();
	unk[13 /*5*/][3] = func_712();
	unk[9 /*5*/][0] = func_712();
	unk[9 /*5*/][1] = func_712();
	unk[9 /*5*/][2] = func_712();
	unk[9 /*5*/][3] = func_712();
	unk[8 /*5*/][0] = func_712();
	unk[8 /*5*/][1] = func_712();
	unk[8 /*5*/][2] = func_712();
	unk[8 /*5*/][3] = func_712();
	unk[7 /*5*/][0] = -621187540;
	unk[7 /*5*/][1] = -621187540;
	unk[7 /*5*/][2] = -621187540;
	unk[7 /*5*/][3] = 1079213989;
	unk[6 /*5*/][0] = -882188392;
	unk[6 /*5*/][1] = -882188392;
	unk[6 /*5*/][2] = -882188392;
	unk[6 /*5*/][3] = 964593693;
	unk[5 /*5*/][0] = func_712();
	unk[5 /*5*/][1] = func_712();
	unk[5 /*5*/][2] = func_712();
	unk[5 /*5*/][3] = func_712();
	unk[4 /*5*/][0] = -997495998;
	unk[4 /*5*/][1] = -997495998;
	unk[4 /*5*/][2] = -997495998;
	unk[4 /*5*/][3] = -2147051362;
	unk[3 /*5*/][0] = -1115840558;
	unk[3 /*5*/][1] = -1115840558;
	unk[3 /*5*/][2] = 1674493966;
	unk[3 /*5*/][3] = 1674493966;
	unk[0 /*5*/][0] = func_712();
	unk[0 /*5*/][1] = -1618574684;
	unk[0 /*5*/][2] = -1618574684;
	unk[0 /*5*/][3] = -1618574684;
	unk[1 /*5*/][0] = func_712();
	unk[1 /*5*/][1] = func_712();
	unk[1 /*5*/][2] = func_712();
	unk[1 /*5*/][3] = func_712();
	unk[2 /*5*/][0] = func_712();
	unk[2 /*5*/][1] = func_712();
	unk[2 /*5*/][2] = func_712();
	unk[2 /*5*/][3] = func_712();

	for (j = 0; j < 17; j = j + 1)
	{
		for (i = 0; i < 4; i = i + 1)
		{
			if (unk[j /*5*/][i] != func_712())
			{
				if (i + 1 == func_720(j, 1) && iParam0 == 3 && bParam2)
				{
					if (!STREAMING::IS_IPL_ACTIVE_HASH(unk[j /*5*/][i]))
					{
						STREAMING::REQUEST_IPL_HASH(unk[j /*5*/][i]);
						func_721(unk[j /*5*/][i], true, iParam1);
					}
				}
				else if (unk[j /*5*/][func_720(j, 1) - 1] != unk[j /*5*/][i] || iParam0 != 3 || bParam2 == false)
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(unk[j /*5*/][i]))
					{
						STREAMING::REMOVE_IPL_HASH(unk[j /*5*/][i]);
						func_721(unk[j /*5*/][i], false, iParam1);
					}
				}
			}
		}
	}

	return;
}

void func_484(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1F907 Hash - 0x5228FE93 ^0x814554A2
{
	int num;
	var unk;
	int i;
	int j;
	int k;
	var unk50;
	Interior interiorAtCoords;

	if (fParam1 < 30f)
		num = 0;
	else if (fParam1 < 75f)
		num = 1;
	else
		num = 2;

	unk = 3;
	unk.f_1 = 3;
	unk.f_1.f_1 = 4;
	unk.f_1.f_1.f_5 = 4;
	unk.f_1.f_1.f_5.f_5 = 4;
	unk.f_1.f_16 = 3;
	unk.f_1.f_16.f_1 = 4;
	unk.f_1.f_16.f_1.f_5 = 4;
	unk.f_1.f_16.f_1.f_5.f_5 = 4;
	unk.f_1.f_16.f_16 = 3;
	unk.f_1.f_16.f_16.f_1 = 4;
	unk.f_1.f_16.f_16.f_1.f_5 = 4;
	unk.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	unk[0 /*16*/][0 /*5*/][0] = func_712();
	unk[1 /*16*/][0 /*5*/][0] = func_712();
	unk[2 /*16*/][0 /*5*/][0] = func_712();
	unk[0 /*16*/][0 /*5*/][1] = func_712();
	unk[1 /*16*/][0 /*5*/][1] = func_712();
	unk[2 /*16*/][0 /*5*/][1] = func_712();
	unk[0 /*16*/][0 /*5*/][2] = func_712();
	unk[1 /*16*/][0 /*5*/][2] = func_712();
	unk[2 /*16*/][0 /*5*/][2] = func_712();
	unk[0 /*16*/][0 /*5*/][3] = func_712();
	unk[1 /*16*/][0 /*5*/][3] = func_712();
	unk[2 /*16*/][0 /*5*/][3] = func_712();
	unk[0 /*16*/][1 /*5*/][0] = func_712();
	unk[1 /*16*/][1 /*5*/][0] = func_712();
	unk[2 /*16*/][1 /*5*/][0] = func_712();
	unk[0 /*16*/][1 /*5*/][1] = 1155877447;
	unk[1 /*16*/][1 /*5*/][1] = 1155877447;
	unk[2 /*16*/][1 /*5*/][1] = 1155877447;
	unk[0 /*16*/][1 /*5*/][2] = 928165666;
	unk[1 /*16*/][1 /*5*/][2] = 928165666;
	unk[2 /*16*/][1 /*5*/][2] = 928165666;
	unk[0 /*16*/][1 /*5*/][3] = 2048341166;
	unk[1 /*16*/][1 /*5*/][3] = 2048341166;
	unk[2 /*16*/][1 /*5*/][3] = 2048341166;
	unk[0 /*16*/][2 /*5*/][0] = -414377604;
	unk[1 /*16*/][2 /*5*/][0] = -414377604;
	unk[2 /*16*/][2 /*5*/][0] = -414377604;
	unk[0 /*16*/][2 /*5*/][1] = -109593135;
	unk[1 /*16*/][2 /*5*/][1] = -109593135;
	unk[2 /*16*/][2 /*5*/][1] = -109593135;
	unk[0 /*16*/][2 /*5*/][2] = 990134505;
	unk[1 /*16*/][2 /*5*/][2] = 990134505;
	unk[2 /*16*/][2 /*5*/][2] = 990134505;
	unk[0 /*16*/][2 /*5*/][3] = 1279910772;
	unk[1 /*16*/][2 /*5*/][3] = 1279910772;
	unk[2 /*16*/][2 /*5*/][3] = 1279910772;

	for (k = 0; k < 3; k = k + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (i = 0; i < 4; i = i + 1)
			{
				if (unk[k /*16*/][j /*5*/][i] != func_712())
					if (k == num && i + 1 == func_722(j) && iParam0 == 3 && bParam2)
						if (!STREAMING::IS_IPL_ACTIVE_HASH(unk[k /*16*/][j /*5*/][i]))
							STREAMING::REQUEST_IPL_HASH(unk[k /*16*/][j /*5*/][i]);
					else if (unk[num /*16*/][j /*5*/][func_722(j) - 1] != unk[k /*16*/][j /*5*/][i] || iParam0 != 3 || bParam2 == false)
						if (STREAMING::IS_IPL_ACTIVE_HASH(unk[k /*16*/][j /*5*/][i]))
							STREAMING::REMOVE_IPL_HASH(unk[k /*16*/][j /*5*/][i]);
			}
		}
	}

	unk50 = 4;
	unk50[0] = "";
	unk50[1] = "shb_p_ammo01";
	unk50[2] = "shb_p_ammo02";
	unk50[3] = "shb_p_ammo03";
	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(1906.472f, -1862.5665f, 46.362f);

	for (i = 0; i < 4; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(unk50[i]) == false)
			if (i + 1 == func_722(0) && iParam0 == 3 && bParam2 && Global_1357549.f_1495 & 8 != 0 == false)
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoords, unk50[i]) == false)
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, unk50[i], 0);
			else if (iParam0 != 3 || i + 1 != func_722(0) || bParam2 == false || Global_1357549.f_1495 & 8 != 0)
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoords, unk50[i]))
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, unk50[i], true);
	}

	return;
}

void func_485(int iParam0, int iParam1) // Position - 0x1FDA5 Hash - 0xEA7BB2EB ^0x7AC55A56
{
	Hash modelHash;
	int num;
	int flags;
	Vector3 vector;
	float heading;
	Vehicle closestVehicle;
	float radius;

	radius = 25f;

	switch (iParam0)
	{
		case 2:
			modelHash = joaat("pirogue");
			num = 4;
			vector = { 623.54f, -1251.0557f, 40.2502f };
			heading = 137.4389f;
			flags = 8194;
			break;
	
		case 3:
			modelHash = joaat("pirogue");
			num = 4;
			vector = { 1908.3246f, -1816.8801f, 40.456f };
			heading = 251.3719f;
			flags = 8194;
			break;
	
		default:
			modelHash = 0;
			num = 100;
			vector = { 0f, 0f, 0f };
			heading = 0f;
			flags = 0;
			break;
	}

	closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(vector, radius, modelHash, flags);

	if (ENTITY::DOES_ENTITY_EXIST(closestVehicle))
	{
		Global_1357549.f_1674 = closestVehicle;
		ENTITY::SET_ENTITY_COORDS(closestVehicle, vector, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(closestVehicle, heading);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, true);
	}

	if (iParam1 >= num && modelHash != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674) == false && ENTITY::DOES_ENTITY_EXIST(closestVehicle) == false)
		{
			STREAMING::REQUEST_MODEL(modelHash, false);
		
			if (STREAMING::HAS_MODEL_LOADED(modelHash))
				Global_1357549.f_1674 = VEHICLE::CREATE_VEHICLE(modelHash, vector, heading, true, true, false, false);
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(modelHash);
		}
	}
	else
	{
		func_725();
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (iParam0 == 3 || iParam0 == 2)
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_1357549.f_1674, true);
			VEHICLE::_0x6B53F4B811E583D2(Global_1357549.f_1674, true);
		}
	
		if (ENTITY::GET_ENTITY_MODEL(Global_1357549.f_1674) != modelHash)
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_1357549.f_1674));
	}

	return;
}

void func_486(int iParam0, int iParam1) // Position - 0x1FF36 Hash - 0x11B590A7 ^0x11B590A7
{
	func_726(iParam0);
	return;
}

char* func_487(int iParam0) // Position - 0x1FF44 Hash - 0xC02DE48C ^0x37C60E85
{
	if (iParam0 == 2)
		return "dewclm";

	if (iParam0 == 4)
		return "gua";

	return func_727(&(Global_1888801[func_246(iParam0) /*35*/].f_22));
}

char* func_488(int iParam0) // Position - 0x1FF78 Hash - 0x2EA5D6AE ^0xF09F269E
{
	switch (iParam0)
	{
		case 0:
			return "setup";
	
		case 1:
			return "running";
	
		case 2:
			if (func_469(268435456))
			{
				if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_teardown"))
					PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_teardown");
			
				return "finale1";
			}
			else
			{
				if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_finale1"))
					PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_finale1");
			
				return "teardown";
			}
			break;
	}

	return "";
}

void func_489(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1FFF3 Hash - 0x4FF78348 ^0xCCF63B37
{
	var scenarioGroup;
	var scenarioGroup2;

	TEXT_LABEL_COPY(&scenarioGroup, { Global_1888801[iParam0 /*35*/].f_22 }, 8);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, "_", 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(iParam1), 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, "_", 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroup, func_729(iParam2), 64);
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

BOOL func_490(int iParam0) // Position - 0x20070 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_491(int iParam0, int iParam1) // Position - 0x20086 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_730(iParam0);
	else
		func_731(iParam0, iParam1);

	func_732();
	return;
}

void func_492(int iParam0, int iParam1) // Position - 0x200CE Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_493(int iParam0, int iParam1) // Position - 0x200EE Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_494(int iParam0, int iParam1) // Position - 0x2010E Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_495(int iParam0, BOOL bParam1) // Position - 0x2012E Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_496(int iParam0, Hash hParam1) // Position - 0x20159 Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

var func_497(BOOL bParam0, var uParam1, var uParam2) // Position - 0x20188 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_498(BOOL bParam0) // Position - 0x2019F Hash - 0xABC71D04 ^0x7FAB5AFE
{
	int i;

	for (i = 0; i < 153; i = i + 1)
	{
		if (Global_1914319.f_15936[i /*6*/].f_5)
			Global_1914319.f_15936[i /*6*/].f_5 = 0;
	
		func_733(&Global_1914319.f_15936[i /*6*/], bParam0);
	}

	return;
}

void func_499(BOOL bParam0) // Position - 0x201E9 Hash - 0x75A38704 ^0x669CA416
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_733(&Global_1934051.f_23[i], bParam0);
	}

	return;
}

void func_500(BOOL bParam0) // Position - 0x20214 Hash - 0xEE9EF61F ^0x6F45D5CB
{
	int i;

	for (i = 0; i < 33; i = i + 1)
	{
		func_733(&Global_1899778.f_34[i], bParam0);
		Global_1899778[i] = 0;
	}

	return;
}

void func_501(BOOL bParam0) // Position - 0x20248 Hash - 0x990D8E53 ^0x990D8E53
{
	func_733(&Global_1955864, bParam0);
	return;
}

void func_502(BOOL bParam0) // Position - 0x2025A Hash - 0x44C39101 ^0xB6988EF7
{
	func_733(&(Global_1415412.f_3), bParam0);
	return;
}

void func_503(BOOL bParam0) // Position - 0x2026E Hash - 0x15F28904 ^0x5BE4C56F
{
	if (func_734(Global_1934051.f_33))
		func_735(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));

	func_733(&(Global_1934051.f_33), bParam0);
	return;
}

void func_504(BOOL bParam0) // Position - 0x2029D Hash - 0xB1376D99 ^0x20D49D2D
{
	int i;
	Hash hash;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = func_737(func_736(i));
	
		if (hash != 0)
			func_735(Global_1934051[i /*2*/], hash);
	
		if (Global_1934051[i /*2*/].f_1)
			Global_1934051[i /*2*/].f_1 = 0;
	
		func_733(&Global_1934051[i /*2*/], bParam0);
	}

	return;
}

void func_505(BOOL bParam0) // Position - 0x202FE Hash - 0x2B0F2EE5 ^0xCD361E26
{
	Hash i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		func_738(i, -1);
		func_739(i, 0);
		func_740(i, false);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
		{
			if (bParam0)
				MAP::SET_RADAR_ZOOM(Global_36308[i]);
		
			MAP::REMOVE_BLIP(&Global_36308[i]);
		}
	}

	return;
}

Hash func_506(eStackSize essParam0) // Position - 0x20358 Hash - 0xB8EC44B7 ^0x6E73F165
{
	switch (essParam0)
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
			return joaat("region_bgv_watsonscabin");
	
		case 30:
			return joaat("region_blu_canebreak_manor");
	
		case 31:
			return joaat("region_blu_copperhead");
	
		case 32:
			return joaat("region_blu_sisika");
	
		case 33:
			return joaat("region_cml_bacchusbridge");
	
		case 34:
			return joaat("region_cml_dino_lady");
	
		case 35:
			return joaat("region_cml_oldfortwallace");
	
		case 36:
			return joaat("region_cml_sixpointcabin");
	
		case 37:
			return joaat("region_grt_beechers");
	
		case 38:
			return joaat("region_grt_blackwater");
	
		case 39:
			return joaat("region_grt_quakers_cove");
	
		case 40:
			return joaat("region_grz_adlerranch");
	
		case 41:
			return joaat("region_grz_dead_rival");
	
		case 42:
			return joaat("region_grz_chezporter");
	
		case 43:
			return joaat("region_grz_colter");
	
		case 44:
			return joaat("region_grz_frozen_explorer");
	
		case 45:
			return joaat("region_grz_millesani_claim");
	
		case 46:
			return joaat("region_grz_mountain_man");
	
		case 47:
			return joaat("region_grz_starving_children");
	
		case 48:
			return joaat("region_grz_tempest_rim");
	
		case 49:
			return joaat("region_grz_wintermining_town");
	
		case 50:
			return joaat("region_grz_calumetravine");
	
		case 51:
			return joaat("region_gre_civil_war_bride");
	
		case 52:
			return joaat("region_grz_cohutta");
	
		case 53:
			return joaat("region_grz_gunfight");
	
		case 54:
			return joaat("region_grz_theloft");
	
		case 55:
			return joaat("region_gre_veteran");
	
		case 56:
			return joaat("region_grz_wapiti");
	
		case 57:
			return joaat("region_gua_aguasdulces");
	
		case 58:
			return joaat("region_gua_camp");
	
		case 59:
			return joaat("region_gua_cincotorres");
	
		case 60:
			return joaat("region_gua_lacapilla");
	
		case 61:
			return joaat("region_gua_manicato");
	
		case 62:
			return joaat("region_hrt_abandoned_mill");
	
		case 63:
			return joaat("region_roa_beechers_c");
	
		case 64:
			return joaat("region_hrt_carmodydell");
	
		case 65:
			return joaat("region_hrt_cornwallkerosene");
	
		case 66:
			return joaat("region_hrt_crop_farm");
	
		case 67:
			return joaat("region_hrt_cumberlandfalls");
	
		case 68:
			return joaat("region_hrt_downsranch");
	
		case 69:
			return joaat("region_hrt_emeraldranch");
	
		case 70:
			return joaat("region_hrt_grangers_hoggery");
	
		case 71:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 72:
			return joaat("region_hrt_larnedsod");
	
		case 73:
			return joaat("region_hrt_loony_cult");
	
		case 74:
			return joaat("region_hrt_luckyscabin");
	
		case 75:
			return joaat("region_hrt_swansons_station");
	
		case 76:
			return joaat("region_hrt_valentine");
	
		case 77:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 78:
			return joaat("region_roa_annesburg");
	
		case 79:
			return joaat("region_roa_beaverhollow");
	
		case 80:
			return joaat("region_roa_black_balsam_rise");
	
		case 81:
			return joaat("region_roa_brandywine_drop");
	
		case 82:
			return joaat("region_roa_butchercreek");
	
		case 83:
			return joaat("region_roa_doverhill");
	
		case 84:
			return joaat("region_roa_happy_family");
	
		case 85:
			return joaat("region_roa_isolationist");
	
		case 86:
			return joaat("region_roa_macleanshouse");
	
		case 87:
			return joaat("region_roa_mossy_flats");
	
		case 88:
			return joaat("region_roa_roanoke_valley");
	
		case 89:
			return joaat("region_roa_rockyseven");
	
		case 90:
			return joaat("region_roa_trapper");
	
		case 91:
			return joaat("region_roa_vanhornmansion");
	
		case 92:
			return joaat("region_roa_vanhornpost");
	
		case 93:
			return joaat("region_scm_braithwaitemanor");
	
		case 94:
			return joaat("region_scm_bulgerglade");
	
		case 95:
			return joaat("region_scm_caligahall");
	
		case 96:
			return joaat("region_scm_catfishjacksons");
	
		case 97:
			return joaat("region_scm_clemenscove");
	
		case 98:
			return joaat("region_scm_clemenspoint");
	
		case 99:
			return joaat("region_scm_compsons_stead");
	
		case 100:
			return joaat("region_scm_dairy_farm");
	
		case 101:
			return joaat("region_scm_horse_shop");
	
		case 102:
			return joaat("region_scm_lonniesshack");
	
		case 103:
			return joaat("region_scm_love_triangle");
	
		case 104:
			return joaat("region_scm_radleys_pasture");
	
		case 105:
			return joaat("region_scm_rhodes");
	
		case 106:
			return joaat("region_scm_slave_pen");
	
		case 107:
			return joaat("region_tal_aurora_basin");
	
		case 108:
			return joaat("region_tal_dead_settler");
	
		case 109:
			return joaat("region_tal_cochinay");
	
		case 110:
			return joaat("region_tal_manzanitapost");
	
		case 111:
			return joaat("region_tal_pacificunionrr");
	
		case 112:
			return joaat("region_tal_tannersreach");
	
		case 113:
			return joaat("region_tal_trapper");
	
		case 114:
			return joaat("region_gap_gaptooth_breach");
	
		case 115:
			return joaat("region_gap_tumbleweed");
	
		case 116:
			return joaat("region_gap_rathskeller_fork");
	
		case 117:
			return joaat("region_rio_benedict_point");
	
		case 118:
			return joaat("region_rio_fort_mercer");
	
		case 119:
			return joaat("region_rio_plain_view");
	
		case 120:
			return joaat("region_cho_armadillo");
	
		case 121:
			return joaat("region_cho_coots_chapel");
	
		case 122:
			return joaat("region_cho_don_julio_house");
	
		case 123:
			return joaat("region_cho_rileys_charge");
	
		case 124:
			return joaat("region_cho_ridgewood_farm");
	
		case 125:
			return joaat("region_cho_twin_rocks");
	
		case 126:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 127:
			return joaat("region_hen_thieves_landing");
	
		case 128:
			return joaat("region_centralunionrr");
	
		case 129:
			return joaat("region_gap_solomons_folly");
	
		default:
		
	}

	return 0;
}

int func_507(int iParam0) // Position - 0x20A84 Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case joaat("RT_LANDMARK"):
			return 5;
	
		case joaat("RT_SETTLEMENT"):
			return 2;
	
		case joaat("RT_HOMESTEAD"):
			return 7;
	
		case joaat("RT_TOWN"):
			return 1;
	
		case joaat("RT_HIDEOUT"):
			return 3;
	
		case joaat("RT_EVENT_AREA"):
			return 8;
	
		case joaat("RT_SHACK"):
			return 9;
	
		case joaat("rt_none"):
			return 0;
	
		case joaat("RT_CAMP"):
			return 4;
	
		case 1039465541:
			return 6;
	
		default:
		
	}

	return 0;
}

Vector3 func_508(eStackSize essParam0, BOOL bParam1) // Position - 0x20AFB Hash - 0x5496E9AE ^0xF55F17AE
{
	Vector3 volumeCoords;
	var groundZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_207(essParam0))
		return volumeCoords;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_3))
	{
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1888801[essParam0 /*35*/].f_3) };
	
		if (bParam1)
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(volumeCoords, &groundZ, false))
				volumeCoords.f_2 = groundZ;
	}

	return volumeCoords;
}

BOOL func_509(eStackSize essParam0) // Position - 0x20B5B Hash - 0x43A4311 ^0x43A4311
{
	if (essParam0 == 22 || essParam0 == 37 && !func_342())
		return true;

	if (essParam0 == 61)
		return true;

	return false;
}

void func_510(int iParam0, int iParam1) // Position - 0x20B90 Hash - 0x32046F43 ^0x32046F43
{
	Global_40.f_297[iParam0] = iParam1;
	return;
}

void func_511(int iParam0, int iParam1) // Position - 0x20BA4 Hash - 0x8B89F41D ^0x8B89F41D
{
	Global_40.f_297[iParam0 + 30] = iParam1;
	return;
}

int func_512(int iParam0) // Position - 0x20BBA Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_741(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_513(BOOL bParam0) // Position - 0x20BFB Hash - 0x6EC610D3 ^0xC8DF7962
{
	MISC::COPY_SCRIPT_STRUCT(bParam0, &(Global_1879534.f_7301), 243);
	return;
}

float func_514(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x20C12 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_515(BOOL bParam0) // Position - 0x20C30 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1392040 && bParam0 != false;
}

void func_516(int iParam0, int iParam1) // Position - 0x20C41 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

int func_517(int iParam0, int iParam1) // Position - 0x20C56 Hash - 0xBEF58E44 ^0x9B835991
{
	int unk;
	var statId;

	statId = { func_742(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

float func_518(float fParam0, float fParam1) // Position - 0x20C75 Hash - 0xAB447DEC ^0xAB447DEC
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

int func_519(int iParam0) // Position - 0x20C8C Hash - 0x7AAD0EAA ^0x7F622D62
{
	var unk;
	var statId;

	statId = { func_528(iParam0) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

int func_520() // Position - 0x20CA9 Hash - 0x420BE223 ^0x8639BF7F
{
	int num;

	if (func_318(Global_40.f_8863.f_154, 1))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 2))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 4))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 8))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 16))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 32))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 64))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 128))
		num = num + 1;

	if (func_318(Global_40.f_8863.f_154, 256))
		num = num + 1;

	return num;
}

float func_521(float fParam0, float fParam1) // Position - 0x20D80 Hash - 0x99935A7D ^0x99935A7D
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

int func_522() // Position - 0x20D97 Hash - 0xDDB608A0 ^0xDDB608A0
{
	int i;
	int num;
	int num2;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num2 = func_743(i);
	
		if (func_318(func_744(), num2))
			num = num + 1;
	}

	return num;
}

BOOL func_523(eStackSize essParam0) // Position - 0x20DD1 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_27() != -1)
		return false;

	if (!func_174(essParam0))
		return false;

	return func_172(Global_1347702[essParam0 /*49*/].f_15, true);
}

int func_524(int iParam0, int iParam1) // Position - 0x20E02 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

void func_525(var uParam0, var uParam1) // Position - 0x20E18 Hash - 0x6317D59C ^0x17FF39BA
{
	int num;
	int num2;
	int num3;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 = *uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1);
	*uParam0 = *uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2);
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 = *uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1);
	*uParam1 = *uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2);
	*uParam1 = *uParam1 + 6;
	num = func_745(joaat("UPGRADE_HEALTH_TANK_1"), false, false);
	num2 = func_745(joaat("UPGRADE_STAMINA_TANK_1"), false, false);
	num3 = func_745(joaat("UPGRADE_DEADEYE_TANK_1"), false, false);
	*uParam0 = *uParam0 + num + num2 + num3;
	return;
}

int func_526(int iParam0) // Position - 0x20EB8 Hash - 0x7AAD0EAA ^0x7F622D62
{
	int unk;
	var statId;

	statId = { func_746(iParam0) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

int func_527() // Position - 0x20ED5 Hash - 0xA9EE4E45 ^0x7D997BC0
{
	int i;
	int num;
	Hash chalHash;

	for (i = 0; i < 9; i = i + 1)
	{
		chalHash = func_747(i);
	
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(chalHash) >= STATS::CHAL_GET_MAX_RANKS(chalHash))
			num = num + 1;
	}

	return num;
}

struct<2> func_528(int iParam0) // Position - 0x20F0F Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

float func_529(var uParam0, var uParam1) // Position - 0x20F1F Hash - 0x3AAD93D4 ^0xCFDC1B70
{
	var value;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &value);
	return value;
}

void func_530(int iParam0) // Position - 0x20F32 Hash - 0x248129F7 ^0x248129F7
{
	int num;
	int num2;
	var unk;

	if (Global_1898329 <= 0)
		return;

	if (!func_46(iParam0))
		return;

	if (func_708(iParam0))
		func_748(iParam0, false, 2);

	num = func_749(iParam0);

	if (num < 0)
		return;

	num2 = num;

	if (Global_1898329 > 1)
	{
		Global_1898330[num2] = Global_1898330[Global_1898329 - 1];
		Global_1898346[num2 /*6*/] = { Global_1898346[Global_1898329 - 1 /*6*/] };
		Global_1898330[Global_1898329 - 1] = -1;
		Global_1898346[Global_1898329 - 1 /*6*/] = { unk };
	}
	else
	{
		Global_1898330[num2] = -1;
		Global_1898346[num2 /*6*/] = { unk };
	}

	Global_1898329 = Global_1898329 - 1;

	if (Global_1898329 < 0)
		Global_1898329 = 0;

	return;
}

void func_531(int iParam0, BOOL bParam1) // Position - 0x20FFC Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_248(Global_1898330[iParam0]);
		func_750(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

Hash func_532(int iParam0) // Position - 0x2105D Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

BOOL func_533(int iParam0) // Position - 0x21088 Hash - 0xEC70C3FE ^0x689B10CF
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_559(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_1934765.f_53[num2], offset);

	num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num3 == 255)
		return MISC::IS_BIT_SET(Global_1934765.f_53[num2], offset);

	return MISC::IS_BIT_SET(Global_1055058[num3 /*116*/].f_72.f_28[num2], offset);
}

BOOL func_534(Hash hParam0) // Position - 0x21100 Hash - 0xBB272513 ^0x1053F3D3
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(hParam0, Global_36);
}

void func_535(int iParam0) // Position - 0x2111E Hash - 0x35FCBD93 ^0x589F4414
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_559(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_1934765.f_53[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_28[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72.f_28[num2], offset);
		}
	}

	return;
}

BOOL func_536(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x211A1 Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

BOOL func_537(Hash hParam0, int iParam1) // Position - 0x211C1 Hash - 0xE061D1B0 ^0x26B4ED77
{
	Vector3 position;
	var radius;

	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return false;

	if (!STREAMING::_GET_IPL_BOUNDING_SPHERE(hParam0, &position, &radius))
		return false;

	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), position) <= iParam1)
		return true;

	return false;
}

int func_538(int iParam0) // Position - 0x21205 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_539(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2120F Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_27() != -1;

	switch (iParam0)
	{
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 715;
			else
				*uParam1 = 715;
		
			*uParam2 = 723;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 472;
		
			if (bParam3)
				*uParam2 = 500;
			else
				*uParam2 = 502;
		
			if (flag)
				*uParam2 = 472;
			break;
	
		case 28:
			*uParam1 = 802;
			*uParam2 = &func_7;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
		
			if (flag)
				*uParam2 = 509;
			break;
	
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
		
			if (flag)
				*uParam2 = 380;
			break;
	
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
		
			if (flag)
				*uParam2 = 566;
			break;
	
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 69:
			*uParam1 = 589;
		
			if (bParam3)
				*uParam2 = 598;
			else
				*uParam2 = 612;
		
			if (flag)
				*uParam2 = 590;
			break;
	
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 76:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
	
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
		
			if (flag)
				*uParam2 = 384;
			break;
	
		case 82:
			*uParam1 = 659;
		
			if (bParam3)
				*uParam2 = 673;
			else
				*uParam2 = 690;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
		
			if (flag)
				*uParam2 = 443;
			break;
	
		case 93:
			*uParam1 = &func_6;
			*uParam2 = 625;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 105:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 375;
			break;
	
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

void func_540(int iParam0) // Position - 0x218CF Hash - 0x2E641E62 ^0xF4B16AFC
{
	if (func_27() != -1)
		return;

	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("asb_gunsmith"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("asb_sheriff"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ea_lcmp_foreman"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("amd_general_store"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("amd_undertaker"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("amd_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("blw_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("blw_general_store"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("blw_police_chief"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("bra_stable_hand"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ea_hmstd_foreman"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ea_hmstd_worker_1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ea_hmstd_worker_2"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ea_rcamp_foreman"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("emr_father"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("emr_son1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("lag_mother1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("cro_rancher"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("rhd_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("rhd_fence"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("rhd_gunsmith"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("rhd_sheriff"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("rhd_train_stat_owner"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("sdn_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("sdn_bartender_slums"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("sdn_gen_store_owner"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("sdn_gen_store_shady"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("sdn_gunsmith"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("sdn_police_chief"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("str_freight_clerk"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("PRIN_P4_28") /* collision: str_general_store */, iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("str_sheriff"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("str_welcome_center_clerk"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("tbl_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("tbl_butcher"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("tbl_general_store_owner"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("tbl_gunsmith_owner"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_barber"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_butcher"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_doctor"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_general_store"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_gunsmith"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_hotel_owner"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_sheriff"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("val_slum_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("vht_bartender"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("vht_station_clerk"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("vht_exotic_store"), iParam0);
	return;
}

Hash func_541(int iParam0) // Position - 0x21AFD Hash - 0x73F0253D ^0xC4776EC4
{
	BOOL flag;

	flag = func_345(45);

	switch (iParam0)
	{
		case 0:
			if (flag)
				return -512973841;
			else
				return 470037909;
			break;
	
		case 1:
			return -904280534;
	
		case 2:
		case 4:
			if (flag)
				return -634462673;
			else
				return 1824681511;
			break;
	
		case 3:
			return -1438750434;
	
		case 5:
			if (flag)
				return -241284918;
			else
				return 218350989;
			break;
	
		case 6:
			return -41414424;
	
		case 7:
			return 214708080;
	
		case 8:
			return -1083616881;
	
		case 9:
			return -1643549114;
	
		case 10:
			return -1865722934;
	
		case 11:
			return 1936859429;
	
		case 12:
			return -272646696;
	}

	return 0;
}

void func_542(int iParam0, Hash hParam1) // Position - 0x21BFD Hash - 0xEDC3A2D ^0x55C27576
{
	if (!func_751(iParam0))
		return;

	if (Global_1425371[iParam0 /*373*/].f_8 != hParam1)
	{
		Global_1425371[iParam0 /*373*/].f_8 = hParam1;
		func_752(iParam0, 32);
	}

	return;
}

Hash func_543(int iParam0) // Position - 0x21C37 Hash - 0x98D62EA8 ^0xAE919C38
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 12:
			return -1360990987;
	
		case 11:
			return 162953686;
	
		default:
		
	}

	return func_541(iParam0);
}

BOOL func_544() // Position - 0x21C7B Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_27() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_545(int iParam0) // Position - 0x21CA1 Hash - 0x237CAA2F ^0xDCAC4AD9
{
	MAP::_MAP_ENABLE_REGION_BLIP(func_506(iParam0), joaat("BLIP_STYLE_SELECTED_REGION"));
	return;
}

void func_546(int iParam0) // Position - 0x21CB8 Hash - 0x522982A ^0x5B6B88CB
{
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_506(iParam0), joaat("BLIP_STYLE_SELECTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(func_506(iParam0));

	return;
}

void func_547(Hash hParam0) // Position - 0x21CDC Hash - 0x79D67CE3 ^0x8A8AA09A
{
	Hash styleHash;

	if (func_275(hParam0) == 57)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else
	{
		styleHash = joaat("BLIP_STYLE_WANTED_REGION");
	
		if (func_753(hParam0) == 4 || func_753(hParam0) == 12 || func_234(func_753(hParam0)) == 4 || func_591(func_753(hParam0), 8) && func_753(hParam0) == 2 || func_753(hParam0) == 0 || func_753(hParam0) == 10)
			styleHash = joaat("BLIP_STYLE_REGION_LOCKDOWN");
	
		MAP::_MAP_ENABLE_REGION_BLIP(hParam0, styleHash);
	}

	return;
}

BOOL func_548(eStackSize essParam0) // Position - 0x21D9A Hash - 0x6430C01F ^0x955EC0F3
{
	if (!func_207(essParam0))
		return false;

	return func_210(essParam0, 67108864);
}

void func_549(eStackSize essParam0) // Position - 0x21DBB Hash - 0x23FB4E3F ^0x85AB4A2F
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_754(unk);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(str), joaat("BLIP_STYLE_WANTED_REGION"));
	return;
}

void func_550() // Position - 0x21DEF Hash - 0x4673488F ^0xA9D7E512
{
	int i;
	int num;
	int num2;
	int j;
	int num3;
	int num4;

	if (func_310(664571177))
	{
		func_337(941);
		func_337(943);
		func_337(944);
		func_337(942);
		func_320(941, 32);
		func_321(941, false);
		func_320(943, 32);
		func_321(943, false);
		func_320(944, 32);
		func_321(944, false);
		func_320(942, 32);
		func_321(942, false);
	}
	else if (!func_72(0, false, true))
	{
		func_319(941, 32);
		func_319(943, 32);
		func_319(944, 32);
		func_338(941);
		func_338(943);
		func_338(944);
	}

	if (func_70(52))
	{
		if (func_539(56, &num, &num2, false, false))
		{
			for (i = 0; i < (num2 - num) + 1; i = i + 1)
			{
				func_320(num + i, 32);
				func_337(num + i);
			}
		}
	}
	else if (func_539(56, &num3, &num4, false, false))
	{
		for (j = 0; j < (num4 - num3) + 1; j = j + 1)
		{
			func_319(num3 + j, 32);
			func_338(num3 + j);
		}
	}

	if (func_310(1850082804))
	{
		if (func_310(-538889627))
		{
			if (!func_336(709, 32))
			{
				func_320(709, 32);
				func_337(709);
			}
		}
	}
	else if (func_336(709, 32))
	{
		func_319(709, 32);
	
		if (func_310(-538889627))
			func_338(709);
	}

	if (func_310(-664512648))
	{
		if (!func_336(111, 32))
		{
			func_320(111, 32);
			func_337(111);
		}
	
		if (!func_336(112, 32))
		{
			func_320(112, 32);
			func_337(112);
		}
	
		if (!func_336(113, 32))
		{
			func_320(113, 32);
			func_337(113);
		}
	
		if (!func_336(114, 32))
		{
			func_320(114, 32);
			func_337(114);
		}
	}
	else
	{
		if (func_336(111, 32))
		{
			func_319(111, 32);
			func_338(111);
		}
	
		if (func_336(112, 32))
		{
			func_320(112, 32);
			func_338(112);
		}
	
		if (func_336(113, 32))
		{
			func_320(113, 32);
			func_338(113);
		}
	
		if (func_336(114, 32))
		{
			func_320(114, 32);
			func_338(114);
		}
	}

	return;
}

void func_551() // Position - 0x22065 Hash - 0xCCEF1AB6 ^0xC884E52F
{
	if (!func_310(168171957) && !func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538))
		func_314(100);

	if (!func_310(168171957))
		func_314(101);

	if (!func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538) && !func_310(-618620429))
		func_314(102);

	if (!func_310(1193080109))
		func_314(103);

	if (!func_310(1193080109))
		func_314(104);

	if (!func_310(1193080109))
		func_314(105);

	if (!func_310(1193080109) && !func_310(-491981251))
		func_314(107);

	if (!func_310(-639037538))
		func_314(106);

	if (!func_310(-491981251) && !func_310(-618620429) && !func_310(-639037538))
		func_314(109);

	if (!func_310(-491981251) && !func_310(-639037538))
		func_314(110);

	if (!func_310(168171957) && !func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538))
		func_314(111);

	if (!func_310(-618620429))
		func_314(112);

	if (!func_310(-618620429))
		func_314(113);

	if (!func_310(-618620429))
		func_314(114);

	if (!func_310(168171957) && !func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538))
		func_314(116);

	if (!func_310(-491981251) && !func_310(-618620429) && !func_310(-639037538))
		func_314(117);

	if (!func_310(-491981251) && !func_310(-618620429) && !func_310(1193080109) && !func_310(-639037538))
		func_314(118);

	if (!func_310(704802028) && !func_310(588987611) && !func_310(2008888900))
		func_313(-722030448);

	if (!func_310(-491981251) && !func_310(-618620429) && !func_310(-639037538) && !func_310(1193080109))
	{
		func_313(joaat("bee_01_barn_stage05"));
		func_313(1353861354);
	}

	if (!func_310(588987611) && !func_310(1649996811) && !func_310(227918160) && !func_310(168171957) && !func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538) && !func_310(2008888900))
		func_313(578474998);

	if (!func_310(168171957) && !func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538) && !func_310(-618620429))
		func_313(-1667461262);

	if (!func_310(168171957) && !func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538) && !func_310(-618620429))
	{
		func_313(411742897);
		func_313(1467774743);
		func_313(1344772301);
		func_313(43335376);
		func_313(-284612948);
	}

	if (!func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538) && !func_310(-618620429))
		func_313(-692583342);

	if (!func_310(1193080109) && !func_310(-491981251) && !func_310(-639037538) && !func_310(-618620429))
		func_313(-918785150);

	if (!func_310(-491981251) && !func_310(-618620429) && !func_310(-491981251) && !func_310(-639037538))
		func_313(1236917971);

	if (!func_310(-491981251) && !func_310(-639037538) && !func_310(-618620429))
	{
		func_313(1532009326);
		func_313(joaat("bee_craftingfire01"));
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(joaat("bee_craftingfire01"));
		func_313(-1860722801);
		func_313(637627640);
	}

	if (!func_310(-618620429))
	{
		func_313(1965249616);
		func_313(-2021605623);
		func_313(1649902358);
		func_313(1169279648);
		func_313(-218940381);
	}

	if (!func_310(704802028))
	{
		func_313(-904669171);
		func_313(774601424);
		func_313(-584332967);
		func_313(-1615103170);
		func_313(1256771838);
		func_313(-1765152778);
		func_313(-2072231077);
		func_313(19217583);
	}

	if (!func_310(-491981251) && !func_310(-639037538) && !func_310(-618620429))
		func_313(349494711);

	if (!func_310(1193080109))
		func_313(1205945639);

	func_313(1532774697);

	if (!func_310(1193080109))
	{
		func_313(431365499);
		func_313(276582710);
		func_313(1191890045);
		func_313(1864768904);
	}

	if (!func_310(-491981251) && !func_310(-639037538))
	{
		func_313(-2090209059);
		func_313(1977031606);
		func_313(1929454697);
		func_313(938290967);
	}

	func_313(-2000794023);
	func_313(-531137142);

	if (!func_310(588987611) && !func_310(2008888900))
		func_313(1757739778);

	func_313(5422464);

	if (!func_310(704802028) && !func_310(588987611))
		func_313(-1012618146);

	if (!func_310(1649996811) && !func_310(2008888900))
		func_313(2111816145);

	if (!func_310(227918160) && !func_310(168171957))
		func_313(joaat("bee_01_camp"));

	if (!func_310(168171957))
		func_313(-974480336);

	func_313(33260939);
	func_313(-270212770);
	func_313(862349416);
	func_313(joaat("bee_01_chimney_stage01"));
	func_313(joaat("bee_01_chimney_stage02"));

	if (func_27() == -1)
	{
		if (!func_310(704802028) && !func_310(588987611) && !func_310(1649996811) && !func_310(227918160) && !func_310(2008888900))
		{
			func_313(-1253110600);
			func_313(-1402083909);
			func_313(1970695826);
			func_313(-382865315);
		}
	}

	if (!func_310(168171957))
		func_313(-1325016116);

	func_328("nav_mesh_beech_shack");
	func_328("nav_mesh_beech_shack_with_fire");
	func_328("nav_mesh_beech_camp_with_rubble");
	func_328("nav_mesh_beech_house_finished");
	func_328("nav_mesh_beech_barn_finished");
	func_328("nav_mesh_beech_gazebo_finished");
	func_328("nav_mesh_beech_house_decor");
	func_328("nav_mesh_beech_camp_with_supplies");
	return;
}

BOOL func_552(int iParam0) // Position - 0x228E2 Hash - 0x9F0262CB ^0xFDED62A1
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_1934765.f_21[num2], offset);
}

int func_553(int iParam0, BOOL bParam1) // Position - 0x2290C Hash - 0x1873E934 ^0x1873E934
{
	int num;

	num = func_755(iParam0);

	if (num == -1)
		return 0;

	func_756(iParam0, 1);
	func_757(num);

	if (bParam1)
		func_758(&Global_1899778, num);

	func_759(num);
	return 1;
}

BOOL func_554(int iParam0, BOOL bParam1) // Position - 0x2294A Hash - 0x26407603 ^0x721F15B0
{
	if (func_760(iParam0))
		return true;

	if (!bParam1)
		if (func_761(5000))
			return true;

	switch (func_762(0))
	{
		case 0:
			return false;
	
		case 1:
			if (iParam0 & 1 != 0)
				return true;
			break;
	
		case 2:
			if (iParam0 & 16 != 0)
				return true;
			break;
	
		case 3:
			if (iParam0 & 128 != 0)
				return true;
			break;
	
		case 4:
			if (iParam0 & 2 != 0)
				return true;
			break;
	
		case 5:
			if (iParam0 & 32 != 0)
				return true;
			break;
	
		case 6:
			if (iParam0 & 4 != 0)
				return true;
			break;
	
		case 8:
			if (iParam0 & 8 != 0)
				return true;
			break;
	
		case 9:
			if (iParam0 & 64 != 0)
				return true;
			break;
	
		case 10:
			if (iParam0 & 512 != 0)
				return true;
			break;
	
		case 11:
			if (iParam0 & 256 != 0)
				return true;
			break;
	}

	return false;
}

BOOL func_555(int iParam0) // Position - 0x22A64 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_708(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_556(int iParam0) // Position - 0x22A90 Hash - 0x6C3A2F5E ^0x6C3A2F5E
{
	int num;

	if (!func_560(iParam0))
		return false;

	num = func_749(func_316(iParam0));

	if (!func_763(num))
		return false;

	return func_764(num, 4);
}

int func_557(int iParam0, var uParam1, int iParam2) // Position - 0x22AC7 Hash - 0x16475DD ^0xEB53C9EA
{
	*uParam1 = iParam0;

	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.2848f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.5615f, -1372.1733f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.5818f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
		
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			else
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
		
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
	
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.92618f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
		
			return 0;
	
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.9968f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
	
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.0842f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.8619f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.0048f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.7432f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.0461f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.9417f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.9023f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.572914f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.2151f, -433.9676f, 159.73857f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.0461f, 42.580814f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.884895f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.4443f, 500.1154f, 45.539986f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
	
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.9436f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
	
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.5474f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 25:
			return 0;
	
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.2505f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.4475f, -1318.0038f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 29:
			return 0;
	
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.3945f, -2913.7637f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
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

int func_558(var uParam0, BOOL bParam1, int iParam2) // Position - 0x23477 Hash - 0x4C78497B ^0xBAB851C7
{
	int num;
	BOOL flag;
	int num2;
	int num3;

	if (func_27() != -1)
		return -1;

	if (Global_1899528.f_211)
		return -1;

	num2 = -1;

	if (uParam0->f_2 == -1)
		return -1;

	if (uParam0->f_2 != func_225())
		return -1;

	if (!func_765(uParam0->f_1))
		return -1;

	if (func_285(uParam0->f_2))
		return -1;

	num2 = func_755(*uParam0);

	if (num2 == -1)
		if (!func_766(&num2))
			return -1;

	func_767(*uParam0, num2);
	flag = func_768(uParam0->f_1, 131072);
	func_769(uParam0->f_1);
	num3 = func_770(uParam0->f_1, *uParam0);
	Global_1392915[num2 /*12*/] = *uParam0;
	Global_1392915[num2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[num2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[num2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[num2 /*12*/].f_4 = num3;
	Global_1392915[num2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[num2 /*12*/].f_6 = { uParam0->f_5 };
	Global_1392915[num2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[num2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[num2 /*12*/].f_11 = num2;
	Global_1392915.f_121[num2 /*20*/] = 0;
	Global_1392915.f_121[num2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[num2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[num2 /*20*/].f_1 = 0;
	Global_1392915.f_121[num2 /*20*/].f_6 = 0;
	Global_1392915.f_121[num2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[num2 /*20*/].f_16 = 0;

	if (Global_1392915.f_121[num2 /*20*/].f_12 != 0)
		Global_1392915.f_121[num2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[num2 /*20*/].f_12) };
	else
		Global_1392915.f_121[num2 /*20*/].f_9 = { 0f, 0f, 0f };

	if (bParam1)
	{
		func_771(uParam0->f_1, 65536);
	
		if (uParam0->f_1 == 1 || uParam0->f_1 == 2 || uParam0->f_1 == 0)
			func_771(uParam0->f_1, 2097152);
	}

	if (flag)
		func_771(uParam0->f_1, 131072);

	if (func_772(num3) || !func_708(num3) && func_76(0) != num3)
	{
		num = func_749(num3);
	
		if (num == -1)
			func_773(num3);
	}

	return num2;
}

int func_559(int iParam0, int iParam1) // Position - 0x236DA Hash - 0x4B2B37C1 ^0x40A56BC5
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_560(int iParam0) // Position - 0x247F5 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

int func_561(int iParam0) // Position - 0x2480B Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_562(int iParam0) // Position - 0x2482A Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

Hash func_563(int iParam0) // Position - 0x24841 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_562(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

PersChar func_564(int iParam0) // Position - 0x2485F Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_562(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_565(int iParam0) // Position - 0x2487F Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_562(iParam0))
		return;

	ped = func_774(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

void func_566(int iParam0, PersChar pchParam1) // Position - 0x248C3 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_562(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

void func_567(Hash hParam0, BOOL bParam1) // Position - 0x248E4 Hash - 0x1837CCAE ^0x1837CCAE
{
	if (bParam1)
		func_302(hParam0);
	else
		func_313(hParam0);

	return;
}

Hash func_568(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24900 Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_569(Hash hParam0) // Position - 0x249A4 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_775(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_570(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x249BF Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_569(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_571(Hash hParam0, BOOL bParam1) // Position - 0x249F7 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_569(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_572(Hash hParam0, BOOL bParam1) // Position - 0x24A25 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_569(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_573(Hash hParam0, BOOL bParam1) // Position - 0x24A53 Hash - 0x4844A91D ^0x50E23246
{
	if (func_569(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_574() // Position - 0x24A81 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_575(Hash hParam0) // Position - 0x24A8A Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_576(int iParam0) // Position - 0x24A96 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_293(iParam0);
	return num == 3 || num == 4;
}

BOOL func_577(int iParam0) // Position - 0x24AB4 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_578(int iParam0) // Position - 0x24AC7 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_579(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x24AF1 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_580(Volume volParam0, BOOL bParam1) // Position - 0x24B0B Hash - 0xEA796703 ^0x695D7925
{
	Volume volLockRequestId;
	int i;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volParam0);

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId) || volLockRequestId == volParam0)
		{
			Global_1911670[i] = volParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_581(int iParam0) // Position - 0x24B73 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_582(int iParam0) // Position - 0x24B88 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_583(int iParam0, var uParam1, var uParam2) // Position - 0x24BA8 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_776(num);
	return;
}

void func_584(eStackSize essParam0) // Position - 0x24BC8 Hash - 0x7C565062 ^0x591867C7
{
	if (func_369(Global_35, 0) && func_370(*essParam0) && PED::_0x7C8AA850617651D9(Global_35, *essParam0))
		func_777(*essParam0);

	if (!func_369(Global_35, 0) || !func_370(*essParam0) || !PED::_0x7C8AA850617651D9(Global_35, *essParam0))
		func_587(essParam0);

	return;
}

BOOL func_585(int iParam0) // Position - 0x24C34 Hash - 0x37B65DF4 ^0xAAF87AA1
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return MISC::IS_BIT_SET(Global_1347701, iParam0);
}

void func_586(int iParam0, BOOL bParam1) // Position - 0x24C5C Hash - 0x7788B703 ^0x1FD35900
{
	if (iParam0 < 0 || iParam0 >= 15)
		return;

	if (bParam1)
		if (!MISC::IS_BIT_SET(Global_1347701, iParam0))
			MISC::SET_BIT(&Global_1347701, iParam0);
	else if (MISC::IS_BIT_SET(Global_1347701, iParam0))
		MISC::CLEAR_BIT(&Global_1347701, iParam0);

	return;
}

void func_587(eStackSize essParam0) // Position - 0x24CB0 Hash - 0xE2CD9F47 ^0x1C91C1C5
{
	*essParam0 = 0;
	essParam0->f_1 = -15;
	essParam0->f_2 = 0;
	return;
}

BOOL func_588(int iParam0, var uParam1, var uParam2) // Position - 0x24CC8 Hash - 0xE70960E6 ^0x6260E0E3
{
	BOOL flag;

	flag = func_27() != -1;

	if (flag)
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 927;
			*uParam2 = 927;
			break;
	
		case 1:
			*uParam1 = 879;
			*uParam2 = 882;
			break;
	
		case 4:
			*uParam1 = 877;
			*uParam2 = 878;
			break;
	
		case 5:
		case 6:
		case 7:
			*uParam1 = 861;
			*uParam2 = 865;
			break;
	
		case 9:
			*uParam1 = 866;
			*uParam2 = 867;
			break;
	
		case 10:
			*uParam1 = 902;
			*uParam2 = 903;
			break;
	
		case 11:
			*uParam1 = 907;
			*uParam2 = 907;
			break;
	
		case 12:
			*uParam1 = 924;
			*uParam2 = 926;
			break;
	
		case 13:
			*uParam1 = 875;
			*uParam2 = 876;
			break;
	
		case 14:
			*uParam1 = 901;
			*uParam2 = 901;
			break;
	
		case 15:
			*uParam1 = 888;
			*uParam2 = 888;
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

int func_589(int iParam0, BOOL bParam1) // Position - 0x24DFF Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_562(iParam0))
		return 0;

	if (!func_336(iParam0, 2))
		return 0;

	if (func_336(iParam0, 32) && !bParam1)
	{
		func_566(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_563(iParam0)));
	
		if (func_27() == -1)
		{
			if (func_336(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_564(iParam0));
				func_319(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_564(iParam0));
		}
	
		return 0;
	}

	if (!func_778(iParam0) && func_27() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
	{
		func_319(iParam0, 128);
		return 1;
	}

	func_566(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_563(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_564(iParam0));

	if (func_336(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_564(iParam0));
		func_319(iParam0, 2048);
	}

	return 1;
}

void func_590(Hash hParam0, int iParam1) // Position - 0x24EEA Hash - 0x538161E5 ^0xFED55BF6
{
	int i;

	if (hParam0 == 0)
		return;

	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(hParam0))
		return;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	
		for (i = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID(); i != 0; i = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID())
		{
			if (hParam0 == SCRIPTS::_GET_HASH_OF_THREAD(i))
				if (SCRIPTS::IS_THREAD_ACTIVE(i, false))
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(i, iParam1);
		}
	}

	return;
}

BOOL func_591(int iParam0, BOOL bParam1) // Position - 0x24F48 Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_233(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

void func_592(int iParam0, BOOL bParam1) // Position - 0x24F8C Hash - 0x8D3774A8 ^0x4FA6AC15
{
	if (!func_104(iParam0))
		return;

	Global_1934266.f_27[iParam0] = bParam1;
	return;
}

BOOL func_593() // Position - 0x24FAD Hash - 0xB5F1D039 ^0x491A8075
{
	if (Global_16)
		return false;

	if (!func_779())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
		return false;

	if (func_72(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_594(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x24FF0 Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
		str = func_754(Global_1894899.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_781(func_780(Global_36));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_782(iParam0) || func_345(45))
		{
			switch (iParam0)
			{
				case 1:
					str = "LANDMARK_MACOMBS_END";
					break;
			
				case 2:
					str = "LANDMARK_MERKINS_WALLER";
					break;
			
				case 3:
					str = "SETTLEMENT_LAGRAS";
					break;
			
				case 4:
					str = "HIDEOUT_LAKAY";
					break;
			
				case 5:
					str = "TOWN_SAINTDENIS";
					break;
			
				case 6:
					str = "LANDMARK_HAGEN_ORCHARDS";
					break;
			
				case 8:
					str = "SETTLEMENT_GRAND_KORRIGAN";
					break;
			
				case 9:
					str = "HIDEOUT_SHADY_BELLE";
					break;
			
				case 10:
					str = "LANDMARK_SILTWATER_STRAND";
					break;
			
				case 11:
					str = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
			
				case 12:
					str = "LANDMARK_BERYLS_DREAM";
					break;
			
				case 15:
					str = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
			
				case 16:
					str = "HIDEOUT_HANGING_DOG_RANCH";
					break;
			
				case 17:
					str = "HOMESTEAD_LONE_MULE_STEAD";
					break;
			
				case 19:
					str = "LANDMARK_MONTOS_REST";
					break;
			
				case 20:
					str = "LANDMARK_OWANJILA_DAM";
					break;
			
				case 21:
					str = "HOMESTEAD_PAINTED_SKY";
					break;
			
				case 22:
					str = "SETTLEMENT_PRONGHORN_RANCH";
					break;
			
				case 23:
					str = "LANDMARK_RIGGS_STATION";
					break;
			
				case 25:
					str = "HOMESTEAD_SHEPHERDS_RISE";
					break;
			
				case 26:
					str = "TOWN_STRAWBERRY";
					break;
			
				case 27:
					str = "LANDMARK_VALLEY_VIEW";
					break;
			
				case 28:
					str = "LANDMARK_WALLACE_STATION";
					break;
			
				case 29:
					str = "HOMESTEAD_WATSONS_CABIN";
					break;
			
				case 30:
					str = "LANDMARK_CANEBREAK_MANOR";
					break;
			
				case 31:
					str = "LANDMARK_COPPERHEAD_LANDING";
					break;
			
				case 32:
					str = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
			
				case 33:
					str = "LANDMARK_BACCHUS_BRIDGE";
					break;
			
				case 34:
					str = "HOMESTEAD_FIRWOOD_RISE";
					break;
			
				case 35:
					str = "SETTLEMENT_FORT_WALLACE";
					break;
			
				case 36:
					str = "HIDEOUT_SIX_POINT_CABIN";
					break;
			
				case 37:
					str = "SETTLEMENT_BEECHERS_HOPE";
					break;
			
				case 38:
					str = "TOWN_BLACKWATER";
					break;
			
				case 39:
					str = "LANDMARK_QUAKERS_COVE";
					break;
			
				case 40:
					str = "HOMESTEAD_ADLER_RANCH";
					break;
			
				case 41:
					str = "LANDMARK_WINDOW_ROCK";
					break;
			
				case 42:
					str = "HOMESTEAD_CHEZ_PORTER";
					break;
			
				case 43:
					str = "HIDEOUT_COLTER";
					break;
			
				case 45:
					str = "LANDMARK_MILLESANI_CLAIM";
					break;
			
				case 48:
					str = "LANDMARK_TEMPEST_RIM";
					break;
			
				case 49:
					str = "LANDMARK_EWING_BASIN";
					break;
			
				case 50:
					str = "LANDMARK_CALUMET_RAVINE";
					break;
			
				case 54:
					str = "LANDMARK_THE_LOFT";
					break;
			
				case 56:
					str = "SETTLEMENT_WAPITI";
					break;
			
				case 57:
					str = "SETTLEMENT_AGUASDULCES";
					break;
			
				case 59:
					str = "LANDMARK_CINCO_TORRES";
					break;
			
				case 60:
					str = "LANDMARK_LA_CAPILLA";
					break;
			
				case 61:
					str = "TOWN_MANICATO";
					break;
			
				case 62:
					str = "LANDMARK_OLD_GREENBANK_MILL";
					break;
			
				case 64:
					str = "HOMESTEAD_CARMODY_DELL";
					break;
			
				case 65:
					str = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
			
				case 66:
					str = "HOMESTEAD_GUTHRIE_FARM";
					break;
			
				case 67:
					str = "LANDMARK_CUMBERLAND_FALLS";
					break;
			
				case 68:
					str = "HOMESTEAD_DOWNES_RANCH";
					break;
			
				case 69:
					str = "SETTLEMENT_EMERALD_RANCH";
					break;
			
				case 70:
					str = "LANDMARK_GRANGERS_HOGGERY";
					break;
			
				case 72:
					str = "HOMESTEAD_LARNED_SOD";
					break;
			
				case 74:
					str = "LANDMARK_LUCKYS_CABIN";
					break;
			
				case 75:
					str = "LANDMARK_FLATNECK_STATION";
					break;
			
				case 76:
					str = "TOWN_VALENTINE";
					break;
			
				case 77:
					str = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
			
				case 78:
					str = "TOWN_ANNESBURG";
					break;
			
				case 79:
					str = "HIDEOUT_BEAVER_HOLLOW";
					break;
			
				case 80:
					str = "LANDMARK_BLACK_BALSAM_RISE";
					break;
			
				case 81:
					str = "LANDMARK_BRANDYWINE_DROP";
					break;
			
				case 82:
					str = "SETTLEMENT_BUTCHER_CREEK";
					break;
			
				case 83:
					str = "HOMESTEAD_DOVERHILL";
					break;
			
				case 86:
					str = "HOMESTEAD_MACLEANS_HOUSE";
					break;
			
				case 87:
					str = "LANDMARK_MOSSY_FLATS";
					break;
			
				case 88:
					str = "LANDMARK_ROANOKE_VALLEY";
					break;
			
				case 89:
					str = "HOMESTEAD_WILLARDS_REST";
					break;
			
				case 92:
					str = "TOWN_VANHORN";
					break;
			
				case 93:
					str = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
			
				case 94:
					str = "LANDMARK_BOLGER_GLADE";
					break;
			
				case 95:
					str = "SETTLEMENT_CALIGA_HALL";
					break;
			
				case 96:
					str = "HOMESTEAD_CATFISH_JACKSONS";
					break;
			
				case 98:
					str = "HIDEOUT_CLEMENS_POINT";
					break;
			
				case 99:
					str = "HOMESTEAD_COMPSONS_STEAD";
					break;
			
				case 100:
					str = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
			
				case 102:
					str = "HOMESTEAD_LONNIES_SHACK";
					break;
			
				case 104:
					str = "LANDMARK_RADLEYS_PASTURE";
					break;
			
				case 105:
					str = "TOWN_RHODES";
					break;
			
				case 108:
					str = "LANDMARK_BEAR_CLAW";
					break;
			
				case 110:
					str = "SETTLEMENT_MANZANITA_POST";
					break;
			
				case 111:
					str = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
			
				case 112:
					str = "LANDMARK_TANNERS_REACH";
					break;
			
				case 114:
					str = "HIDEOUT_GAPTOOTH_BREACH";
					break;
			
				case 115:
					str = "TOWN_TUMBLEWEED";
					break;
			
				case 116:
					str = "SETTLEMENT_RATHSKELLER_FORK";
					break;
			
				case 117:
					str = "SETTLEMENT_BENEDICT_POINT";
					break;
			
				case 118:
					str = "HIDEOUT_FORT_MERCER";
					break;
			
				case 119:
					str = "SETTLEMENT_PLAINVIEW";
					break;
			
				case 120:
					str = "TOWN_ARMADILLO";
					break;
			
				case 121:
					str = "SETTLEMENT_COOTS_CHAPEL";
					break;
			
				case 123:
					str = "LANDMARK_RILEYS_CHARGE";
					break;
			
				case 124:
					str = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
			
				case 125:
					str = "HIDEOUT_TWIN_ROCKS";
					break;
			
				case 126:
					str = "TOWN_MACFARLANES_RANCH";
					break;
			
				case 127:
					str = "SETTLEMENT_THIEVES_LANDING";
					break;
			
				case 128:
					str = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("water_lannahechee_river"):
				str = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_O_CREAGHS_RUN"):
				str = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
		
			case joaat("water_upper_montana_river"):
				str = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_san_luis_river"):
				if (iParam1 == 4 || iParam1 == 12)
					str = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				else
					str = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_little_creek_river"):
				str = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_don_julio"):
				str = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
		
			case joaat("water_flat_iron_lake"):
				str = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_lower_montana_river"):
				str = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_owanjila"):
				str = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
		
			case joaat("water_stillwater_creek"):
				str = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_hawks_eye_creek"):
				str = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_kamassa_river"):
				if (iParam1 == 10)
					str = "WATER_KAMASSA_RIVER";
				else if (iParam1 == 2)
					str = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				else
					str = "WATER_KAMASSA_RIVER_BAYOU_NWA";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_bahia_de_la_paz"):
				str = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
		
			case joaat("water_cairn_lake"):
				str = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_southfield_flats"):
				str = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
		
			case joaat("water_moonstone_pond"):
				str = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_CATTIAL_POND"):
				str = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_bayou_nwa"):
				str = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
		
			case joaat("water_whinyard_strait"):
				str = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
		
			case joaat("water_sea_of_coronado"):
				str = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
		
			case joaat("water_spider_gorge"):
				str = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
		
			case joaat("water_aurora_basin"):
				str = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
		
			case joaat("water_elysian_pool"):
				str = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
		
			case joaat("water_arroyo_de_la_vibora"):
				str = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
		
			case joaat("water_mattlock_pond"):
				str = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_dakota_river"):
				str = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_isabella"):
				str = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
		
			case joaat("water_barrow_lagoon"):
				str = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
		
			case joaat("water_hot_springs"):
				str = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
		
			case joaat("water_deadboot_creek"):
				str = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_heartlands_overflow"):
				str = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
		
			case joaat("water_ringneck_creek"):
				str = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam1)
		{
			case 0:
				str = "DISTRICT_BAYOU_NWA";
				break;
		
			case 1:
				str = "DISTRICT_BIG_VALLEY";
				break;
		
			case 2:
				str = "DISTRICT_BLUEWATER_MARSH";
				break;
		
			case 3:
				str = "DISTRICT_CUMBERLAND_FOREST";
				break;
		
			case 4:
				str = "DISTRICT_GREAT_PLAINS";
				break;
		
			case 6:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 7:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 8:
				str = "DISTRICT_GUARMA";
				break;
		
			case 9:
				str = "DISTRICT_HEARTLANDS";
				break;
		
			case 10:
				str = "DISTRICT_ROANOAKE_RIDGE";
				break;
		
			case 11:
				str = "DISTRICT_SCARLETT_MEADOWS";
				break;
		
			case 12:
				str = "DISTRICT_TALL_TREES";
				break;
		
			case 13:
				str = "DISTRICT_GAPTOOTH_RIDGE";
				break;
		
			case 14:
				str = "DISTRICT_RIO_BRAVO";
				break;
		
			case 15:
				str = "DISTRICT_CHOLLA_SPRINGS";
				break;
		
			case 16:
				str = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam3)
		{
			case 0:
				str = "STATE_AMBARINO";
				break;
		
			case 1:
				str = "STATE_NEW_HANOVER";
				break;
		
			case 2:
				str = "STATE_LEMOYNE";
				break;
		
			case 3:
				str = "STATE_WEST_ELIZABETH";
				break;
		
			case 4:
				str = "STATE_NEW_AUSTIN";
				break;
		
			case 5:
				str = "STATE_GUARMA";
				break;
		}
	}

	return str;
}

int func_595(int iParam0) // Position - 0x25A58 Hash - 0x653F925B ^0x653F925B
{
	switch (iParam0)
	{
		case joaat("water_lannahechee_river"):
			return 1;
	
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
	
		case joaat("water_upper_montana_river"):
			return 1;
	
		case joaat("water_san_luis_river"):
			return 1;
	
		case joaat("water_little_creek_river"):
			return 1;
	
		case joaat("water_lake_don_julio"):
			return 0;
	
		case joaat("water_flat_iron_lake"):
			return 0;
	
		case joaat("water_lower_montana_river"):
			return 1;
	
		case joaat("water_owanjila"):
			return 0;
	
		case joaat("water_stillwater_creek"):
			return 1;
	
		case joaat("water_hawks_eye_creek"):
			return 1;
	
		case joaat("water_kamassa_river"):
			return 1;
	
		case joaat("water_cairn_lake"):
			return 0;
	
		case joaat("water_southfield_flats"):
			return 0;
	
		case joaat("water_moonstone_pond"):
			return 0;
	
		case joaat("WATER_CATTIAL_POND"):
			return 0;
	
		case joaat("water_bayou_nwa"):
			return 2;
	
		case joaat("water_whinyard_strait"):
			return 1;
	
		case joaat("water_sea_of_coronado"):
			return 1;
	
		case joaat("water_spider_gorge"):
			return 1;
	
		case joaat("water_aurora_basin"):
			return 0;
	
		case joaat("water_elysian_pool"):
			return 0;
	
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
	
		case joaat("water_mattlock_pond"):
			return 0;
	
		case joaat("water_dakota_river"):
			return 1;
	
		case joaat("water_dewberry_creek"):
			return 1;
	
		case joaat("water_lake_isabella"):
			return 0;
	
		case joaat("water_beartooth_beck"):
			return 1;
	
		case joaat("water_barrow_lagoon"):
			return 0;
	
		case joaat("water_hot_springs"):
			return 0;
	
		case joaat("water_deadboot_creek"):
			return 1;
	
		case joaat("water_heartlands_overflow"):
			return 0;
	
		case joaat("water_ringneck_creek"):
			return 1;
	
		default:
		
	}

	return -1;
}

char* func_596(int iParam0) // Position - 0x25BB3 Hash - 0x90F8FE07 ^0x52429E3F
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
	
		case 1:
			return "WATER_TYPE_RIVER";
	
		case 2:
			return "WATER_TYPE_SWAMP";
	
		default:
		
	}

	return "";
}

float func_597(float fParam0) // Position - 0x25BED Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_598(var uParam0, int iParam1) // Position - 0x25C03 Hash - 0xB0CFF0C3 ^0xD35D353E
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_783(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_599(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x25C39 Hash - 0x10503CC4 ^0x6232183B
{
	int duration;
	var data;
	int num;

	duration = -2;
	duration = iParam2;
	duration.f_1 = iParam3;
	duration.f_2 = iParam4;
	duration.f_3 = iParam5;
	data.f_1 = sParam0;
	data.f_2 = sParam1;
	num = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&duration, &data, bParam6, bParam7);
	return num;
}

void func_600(int iParam0) // Position - 0x25C7C Hash - 0xCD687A83 ^0x9B7FDC3
{
	if (!func_104(iParam0))
		return;

	Global_1934266.f_4 = iParam0;
	return;
}

void func_601(int iParam0, Hash hParam1) // Position - 0x25C99 Hash - 0xD17081FC ^0x9A5CA5C0
{
	Hash maxWantedLevel;

	if (!func_104(iParam0))
		return;

	maxWantedLevel = func_784();

	if (hParam1 > maxWantedLevel)
		hParam1 = maxWantedLevel;

	PLAYER::_SET_MAX_WANTED_LEVEL_2(maxWantedLevel);

	if (iParam0 == func_785())
		LAW::SET_BOUNTY(PLAYER::PLAYER_ID(), hParam1);

	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_358[iParam0 /*12*/] != hParam1)
		{
			func_786(iParam0, hParam1);
			func_787(iParam0);
		}
	
		Global_40.f_358[iParam0 /*12*/] = hParam1;
	
		if (!func_450(iParam0, 4))
			if (Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
				func_788(iParam0, true);
		else if (Global_40.f_358[iParam0 /*12*/] == 0)
			func_788(iParam0, false);
	
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/] = hParam1;
	return;
}

BOOL func_602(int iParam0, var uParam1, var uParam2) // Position - 0x25D59 Hash - 0xE70960E6 ^0xD4687CC0
{
	BOOL flag;

	flag = func_27() != -1;

	if (flag)
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 928;
			*uParam2 = 931;
			break;
	
		case 1:
			*uParam1 = 883;
			*uParam2 = 885;
			break;
	
		case 3:
			*uParam1 = 858;
			*uParam2 = 860;
			break;
	
		case 9:
			*uParam1 = 868;
			*uParam2 = 874;
			break;
	
		case 10:
			*uParam1 = 904;
			*uParam2 = 906;
			break;
	
		case 11:
			*uParam1 = 908;
			*uParam2 = 923;
			break;
	
		case 13:
			*uParam1 = 886;
			*uParam2 = 887;
			break;
	
		case 15:
			*uParam1 = 889;
			*uParam2 = 892;
			break;
	
		case 16:
			*uParam1 = 893;
			*uParam2 = 900;
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

BOOL func_603(int iParam0) // Position - 0x25E5A Hash - 0x63F25DBE ^0xC7BCFDD6
{
	switch (iParam0)
	{
		case 709:
		case 710:
		case 711:
		case 713:
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1835011[64 /*74*/].f_7) || SCRIPTS::DOES_THREAD_EXIST(Global_1835011[67 /*74*/].f_7) || SCRIPTS::DOES_THREAD_EXIST(Global_1835011[65 /*74*/].f_7) || SCRIPTS::DOES_THREAD_EXIST(Global_1835011[66 /*74*/].f_7))
				return true;
		
			return false;
	
		default:
		
	}

	return true;
}

void func_604() // Position - 0x25ED8 Hash - 0xC70365F7 ^0xC70365F7
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_789(i))
			Global_1898147[i] = -1;
	}

	return;
}

void func_605(int iParam0, Hash hParam1) // Position - 0x25F05 Hash - 0x3C8D4A90 ^0x3C8D4A90
{
	if (!func_789(iParam0))
		return;

	if (!func_790(hParam1))
		return;

	Global_1898147[iParam0] = hParam1;
	return;
}

BOOL func_606(Hash hParam0, int iParam1) // Position - 0x25F31 Hash - 0x44DF78E2 ^0x13149F5D
{
	int num;

	if (Global_1934266.f_26 != hParam0)
	{
		Global_1934266.f_26 = hParam0;
		num = iParam1;
	
		if (!func_104(iParam1))
			num = func_230(hParam0);
	
		if (!func_104(num))
			num = func_234(func_197(Global_36));
	
		if (!func_104(num))
			return false;
	
		LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1934266.f_26, func_699(num));
		return true;
	}

	return false;
}

void func_607(int iParam0) // Position - 0x25FA2 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_559(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_608() // Position - 0x2603B Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_331(-939420910);
	func_331(-1187950766);
	func_331(356365161);
	func_331(753127042);
	func_331(-2038424081);
	func_331(1884271742);
	func_331(459290420);
	return;
}

void func_609() // Position - 0x26082 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_331(704802028);
	func_331(588987611);
	func_331(2008888900);
	func_331(1649996811);
	func_331(227918160);
	func_331(168171957);
	func_331(1193080109);
	func_331(-491981251);
	func_331(-639037538);
	func_331(-618620429);
	return;
}

BOOL func_610(var uParam0) // Position - 0x260E4 Hash - 0x5001E582 ^0x5001E582
{
	return func_791(*uParam0, 1);
}

BOOL func_611(var uParam0) // Position - 0x260F4 Hash - 0x39705408 ^0x39705408
{
	return func_791(*uParam0, 2);
}

float func_612() // Position - 0x26104 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_613(eStackSize essParam0) // Position - 0x26136 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

void func_614(eStackSize essParam0) // Position - 0x26142 Hash - 0xF6537D66 ^0xDD27B048
{
	if (essParam0 == 14)
		if (PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(func_402(14), PLAYER::GET_PLAYER_INDEX()))
			Global_1357549.f_1648 = 1;

	if (AUDIO::IS_ANY_SPEECH_PLAYING(func_402(13)) == false)
	{
		if (Global_1357549.f_1648 && !PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(func_402(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549.f_1648 = 0;
		
			if (func_617(func_402(14), func_402(13), true, true) < 20f)
				func_404(func_402(13), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
		}
	}

	return;
}

BOOL func_615(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x261D4 Hash - 0x9D8E22CB ^0x9D8E22CB
{
	if (!func_613(essParam0))
		return false;

	if (bParam1)
		return func_621(essParam0, 26, true);

	if (bParam2)
		if (!func_369(func_402(essParam0), 0))
			return false;

	if (!func_658(essParam0, true, false))
		return false;

	if (func_621(essParam0, 44, true))
		return false;

	return true;
}

BOOL func_616(eStackSize essParam0, BOOL bParam1) // Position - 0x26234 Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_613(essParam0))
		return false;

	if (!bParam1)
		if (func_413(essParam0) || func_621(essParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[essParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[essParam0 /*1157*/].f_1, Global_1360165[essParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

float func_617(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x262BD Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_618(Ped pedParam0, Any* panParam1) // Position - 0x26305 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_619(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26315 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_613(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

BOOL func_620(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x2633F Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_621(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x26375 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_613(essParam0))
			return false;

	func_792(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_622(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x263B0 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_613(essParam0))
			return;

	func_792(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_623(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x263EA Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_613(essParam0))
			return;

	func_792(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_624(eStackSize essParam0, BOOL bParam1, char* sParam2) // Position - 0x26424 Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_402(essParam0);

	if (!func_410(essParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

void func_625(eStackSize essParam0, int iParam1) // Position - 0x2646B Hash - 0x61FF61E0 ^0x2C6117ED
{
	if (!func_613(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_11 = iParam1;
	return;
}

BOOL func_626(eStackSize essParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0x2648D Hash - 0x5B7A656E ^0x3AAC2B26
{
	if (!func_613(essParam0))
		return false;

	switch (Global_1360165[essParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("def_comp_brain"));
		
			Global_1360165[essParam0 /*1157*/].f_3 = 1;
			[[fallthrough]];
	
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				return false;
		
			if (Global_1359489.f_9 != -1)
				return false;
		
			Global_1359489.f_9 = essParam0;
		
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
					iParam4 = func_793(essParam0, iParam9, bParam7, true);
				else if (Global_1360165[essParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[essParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[essParam0 /*60*/].f_59 && func_708(Global_1360165[essParam0 /*1157*/].f_4.f_2) || func_576(Global_1360165[essParam0 /*1157*/].f_4.f_2))
					iParam4 = Global_1360165[essParam0 /*1157*/].f_4.f_1;
				else
					iParam4 = func_793(essParam0, Global_40.f_4283, bParam7, true);
			
				if (Global_1360165[essParam0 /*1157*/].f_63 != iParam4 && func_794(Global_1360165[essParam0 /*1157*/].f_63))
					if (!func_616(essParam0, false))
						func_623(essParam0, 25, false);
			}
		
			Global_1360165[essParam0 /*1157*/].f_4 = { func_795(essParam0, iParam4, uParam1, bParam5, bParam6, bParam8, Global_40.f_4942[essParam0 /*60*/].f_59, bParam11) };
		
			if (!bParam6)
				func_622(essParam0, 44, true);
		
			Global_1360165[essParam0 /*1157*/].f_3 = 2;
			[[fallthrough]];
	
		case 2:
			if (!func_369(func_402(essParam0), 0))
				return false;
		
			if (bParam5 && bParam10)
				if (!func_369(func_656(essParam0), 0))
					return false;
		
			Global_1360165[essParam0 /*1157*/].f_3 = 3;
			[[fallthrough]];
	
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

void func_627(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x26676 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_613(essParam0))
		return;

	if (bParam1)
	{
		func_622(essParam0, 50, true);
		func_622(essParam0, 48, true);
		func_622(essParam0, 49, true);
		func_622(essParam0, 51, true);
		func_622(essParam0, 52, true);
		func_622(essParam0, 54, true);
		func_622(essParam0, 55, true);
	}
	else
	{
		func_623(essParam0, 50, true);
		func_623(essParam0, 48, true);
		func_623(essParam0, 49, true);
		func_623(essParam0, 51, true);
	
		if (bParam3)
			func_623(essParam0, 54, true);
		else
			func_622(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_623(essParam0, 52, true);
		
			if (bParam3)
				func_623(essParam0, 55, true);
		}
		else
		{
			func_622(essParam0, 52, true);
		
			if (!bParam3)
				func_622(essParam0, 55, true);
		}
	}

	return;
}

void func_628(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x26748 Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_410(essParam0))
		return;

	if (bParam1)
		func_796(essParam0, bParam3);
	else
		func_797(essParam0, bParam3);

	if (bParam2)
		func_798(essParam0, bParam3);
	else
		func_799(essParam0, bParam3);

	return;
}

void func_629(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2678D Hash - 0xF46E0F16 ^0xED4BA72A
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(pedParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	pedParam0 == func_800(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_801(pedParam0))
		if (func_802(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_318(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_629(vehiclePedIsIn, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_629(mount, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_318(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_318(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_318(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_318(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_318(iParam5, 129))
	{
		if (func_318(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_318(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, iParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_318(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_318(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_801(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_318(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_318(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

BOOL func_630(eStackSize essParam0, int iParam1) // Position - 0x26A0F Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_410(essParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_803(essParam0, iParam1);
	return flag;
}

void func_631(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x26A4E Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_410(essParam0))
		return;

	if (!func_630(essParam0, iParam1))
		return;

	Global_40.f_4942[essParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_623(essParam0, 25, true);

	return;
}

void func_632(eStackSize essParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x26A8E Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_804(iParam2))
		{
			hash = func_805(iParam2, -1);
		
			if (func_806(pedParam1, hash))
			{
				if (func_807(pedParam1, hash))
				{
					if (func_808(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_809(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_810(essParam0, pedParam1, false);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(pedParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 9);
	
		if (bParam3)
			func_623(essParam0, 66, false);
	}

	return;
}

void func_633(eStackSize essParam0) // Position - 0x26B62 Hash - 0x73C1F6C ^0x73C1F6C
{
	func_811(essParam0);
	func_812(essParam0, false);
	return;
}

void func_634(Ped pedParam0, int iParam1) // Position - 0x26B77 Hash - 0x7F605CB ^0x28CA17AF
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
	
		if (PED::IS_PED_A_PLAYER(pedParam0) && iParam1 == 1)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), false);
	}

	return;
}

void func_635(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x26BD2 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_613(essParam0))
		return;

	func_813(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_636(eStackSize essParam0) // Position - 0x26BFA Hash - 0x8577BCFD ^0x8577BCFD
{
	func_623(essParam0, 36, true);
	return;
}

BOOL func_637(Ped pedParam0) // Position - 0x26C0B Hash - 0x4E8A039F ^0x9F8FB293
{
	int i;
	Hash weaponHash;
	BOOL num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, i, true);
	
		if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
		{
		}
		else
		{
			num = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(pedParam0, weaponHash);
		}
	}

	return num;
}

void func_638(eStackSize essParam0, Ped pedParam1) // Position - 0x26C89 Hash - 0x9D727A3E ^0xB12CD64B
{
	if (!func_613(essParam0))
		return;

	switch (essParam0)
	{
		case 11:
			if (Global_40.f_4942[essParam0 /*60*/].f_3 == -1341683964)
			{
				func_814(pedParam1, joaat("weapon_revolver_cattleman_sadie"), 0, false, 2, true, false, 1056964608, 1065353216, -1, false, false, false, false);
				func_814(pedParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), false, false, 3, true, true, 1056964608, 1065353216, -1, false, true, false, false);
			}
			break;
	}

	return;
}

void func_639(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26D03 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_410(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_640(var uParam0) // Position - 0x26D34 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_815(uParam0, 0f);
	return;
}

int func_641(int iParam0) // Position - 0x26D43 Hash - 0xF16A350D ^0xF7851618
{
	Any any;
	int num;
	var unk5;

	any = Global_1357549.f_576;
	any.f_1 = 0;
	any.f_3 = iParam0;
	num = 0;

	if (func_816(any, 70005598, &unk5, false))
		num = func_817(unk5);

	return num;
}

int func_642(int iParam0) // Position - 0x26D82 Hash - 0x5374F99F ^0x22946EC9
{
	int any;
	int num;

	any = Global_1357549.f_576;
	any.f_1 = 0;
	any.f_3 = iParam0;
	num = 1;

	if (func_818(any, -1875502208, &num, false))
	{
	}

	return num;
}

void func_643(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x26DB9 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_263(*uParam0);
	i = func_262(*uParam0);
	num2 = func_261(*uParam0);
	j = func_258(*uParam0);
	k = func_259(*uParam0);
	l = func_260(*uParam0);

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

	for (m = func_704(i, num); num2 > m; m = func_704(i, num))
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

	func_819(uParam0, l, k, j, num2, i, num);
	return;
}

void func_644(int iParam0, BOOL bParam1) // Position - 0x26F41 Hash - 0x1E270DC5 ^0x18D204F7
{
	int num;
	int offset;

	func_820(iParam0, &num, &offset);

	if (bParam1)
		MISC::SET_BIT(&Global_1357549.f_1848[num], offset);
	else
		MISC::CLEAR_BIT(&Global_1357549.f_1848[num], offset);

	return;
}

BOOL func_645(int iParam0) // Position - 0x26F7E Hash - 0x27CE23B1 ^0x27CE23B1
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return false;
	
		case 11:
			return true;
	
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
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
			return false;
	
		default:
		
	}

	return false;
}

void func_646(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2708B Hash - 0x24EF2016 ^0x7F590678
{
	if (*iParam0 == 176656832)
		return;

	func_644(*iParam0, false);

	if (bParam1)
		if (bParam2)
			func_647(2, *iParam0);
		else
			func_648(2, *iParam0);

	func_821(iParam0);
	return;
}

void func_647(int iParam0, int iParam1) // Position - 0x270CC Hash - 0xBEB4F573 ^0xDF718DD5
{
	if (Global_1357549.f_1483 >= 25)
		Global_1357549.f_1483 = 0;

	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483 = Global_1357549.f_1483 + 1;
	return;
}

void func_648(int iParam0, int iParam1) // Position - 0x27131 Hash - 0xB8F35FB ^0xB8F35FB
{
	if (Global_1357549.f_1406 >= 50)
		return;

	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
		return;

	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403 = Global_1357549.f_1403 + 1;
	Global_1357549.f_1406 = Global_1357549.f_1406 + 1;
	return;
}

void func_649(eStackSize essParam0, BOOL bParam1) // Position - 0x271B8 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_613(essParam0))
		return;

	if (bParam1)
		if (func_822(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_635(essParam0, 1, false);

	func_635(essParam0, 16, bParam1);
	return;
}

void func_650(eStackSize essParam0) // Position - 0x271FA Hash - 0x7895582D ^0x7895582D
{
	func_635(essParam0, 8, false);
	return;
}

PersChar func_651(eStackSize essParam0, BOOL bParam1) // Position - 0x2720B Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_410(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_823(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

void func_652(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2724A Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_410(essParam0))
	{
		ped = func_402(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_824(essParam0);
		}
	}

	if (func_621(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_402(essParam0), 137, true);

	return;
}

void func_653(eStackSize essParam0, BOOL bParam1) // Position - 0x2729C Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_613(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_402(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_402(essParam0), 204, false);

	return;
}

void func_654(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x272D3 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_410(essParam0))
		return;

	if (func_413(essParam0))
	{
		if (!func_825(essParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_621(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_651(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_402(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_826(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(ped) && ENTITY::IS_ENTITY_ATTACHED(ped))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(ped, 1) || TASK::IS_PED_EXITING_SCENARIO(ped, true) || PED::IS_PED_ON_MOUNT(ped) || PED::IS_PED_IN_ANY_VEHICLE(ped, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, true, true);
		}
	
		ENTITY::DETACH_ENTITY(ped, true, true);
	}

	if (bParam4)
	{
		func_623(essParam0, 2, true);
	}
	else
	{
		func_827(essParam0);
		func_623(essParam0, 1, true);
	}

	return;
}

void func_655(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x273E1 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_410(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_656(eStackSize essParam0) // Position - 0x2741D Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_410(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_657(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x2745D Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_613(essParam1))
		return;

	player = func_656(essParam1);

	if (func_828(essParam1))
		if (!func_829(essParam1))
			return;

	func_622(essParam1, 39, true);
	func_830(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_830(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_830(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_623(essParam1, 43, true);
		}
	
		if (bParam4)
			func_831(essParam1, false, true, true, true);
	}

	return;
}

BOOL func_658(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x274FF Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_613(essParam0))
		return false;

	if (func_619(essParam0, 32, true))
		return false;

	if (!func_619(essParam0, 2, true))
		return false;

	if (!func_619(essParam0, 4, true))
		return false;

	if (func_621(essParam0, 33, true))
		return false;

	if (func_413(essParam0))
		return false;

	if (func_832(essParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == essParam0)
			return false;

	return true;
}

BOOL func_659(eStackSize essParam0) // Position - 0x2758C Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_410(essParam0))
		if (func_369(Global_1360165[essParam0 /*1157*/], 0))
			return true;

	return false;
}

Ped func_660(eStackSize essParam0) // Position - 0x275B3 Hash - 0xFBADD85B ^0xFBADD85B
{
	if (func_410(essParam0))
		return Global_1360165[essParam0 /*1157*/];

	return 0;
}

BOOL func_661(int iParam0) // Position - 0x275D1 Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_662(int iParam0) // Position - 0x276E7 Hash - 0xC25EDEC0 ^0x47BF4274
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return -2;
	
		case 2:
			return -5;
	
		case 3:
			return -10;
	
		case 4:
			return -20;
	
		case 5:
			return -40;
	
		case 6:
			return -160;
	
		case 7:
			return -320;
	
		case 8:
			return -480;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 5;
	
		case 13:
			return 10;
	
		case 14:
			return 20;
	
		case 15:
			return 40;
	
		case 16:
			return 160;
	
		case 17:
			return 640;
	
		case 18:
			return -640;
	
		default:
		
	}

	return 0;
}

void func_663(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x277CE Hash - 0x9A51185A ^0x74C6365A
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;
	int num7;
	char* str;
	var statId;

	num = func_833();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_834(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(eParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(eParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(eParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_345(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_342())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_835(Global_40.f_11095.f_35, num4, num3);
	num2 = func_833();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_836(num2);
		func_838(func_837(), false, 4000);
		func_839(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_840(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_841(func_528(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_662(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_841(func_528(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_662(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_528(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_116(10, 1);

	return;
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x27B73 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

BOOL func_665(Hash hParam0) // Position - 0x27BD2 Hash - 0x9D68FB33 ^0xB64B3BD7
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[hParam0 /*4*/].f_2;

	return Global_42606[hParam0 /*4*/].f_2;
}

Vector3 func_666(BOOL bParam0) // Position - 0x27BFC Hash - 0xAC89079C ^0xF0D7C0AA
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

Hash func_667(int iParam0) // Position - 0x27C58 Hash - 0xBA965109 ^0x4B8F97C
{
	switch (iParam0)
	{
		case 1:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 2:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 3:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 4:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 5:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 6:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 7:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 8:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 9:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 10:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 11:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 12:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 13:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 14:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 15:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 16:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 17:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 18:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 19:
			return joaat("BLIP_STYLE_PROC_MISSION");
	
		case 20:
			return joaat("BLIP_STYLE_SHOP");
	
		case 21:
			return joaat("BLIP_STYLE_SHOP");
	
		case 22:
			return joaat("BLIP_STYLE_SHOP");
	
		case 23:
			return joaat("BLIP_STYLE_SHOP");
	
		case 24:
			return joaat("BLIP_STYLE_SHOP");
	
		case 25:
			return joaat("BLIP_STYLE_SHOP");
	
		case 26:
			return joaat("BLIP_STYLE_SHOP");
	
		case 27:
			return joaat("BLIP_STYLE_SHOP");
	
		case 28:
			return joaat("BLIP_STYLE_SHOP");
	
		case 29:
			return joaat("BLIP_STYLE_SHOP");
	
		case 30:
			return joaat("BLIP_STYLE_SHOP");
	
		case 31:
			return joaat("BLIP_STYLE_SHOP");
	
		case 32:
			return joaat("BLIP_STYLE_SHOP");
	
		case 33:
			return joaat("BLIP_STYLE_SHOP");
	
		case 34:
			return joaat("BLIP_STYLE_SHOP");
	
		case 35:
			return joaat("BLIP_STYLE_SHOP");
	
		case 36:
			return joaat("BLIP_STYLE_SHOP");
	
		case 37:
			return joaat("BLIP_STYLE_SHOP");
	
		case 38:
			return joaat("BLIP_STYLE_SHOP");
	
		case 39:
			return joaat("BLIP_STYLE_SHOP");
	
		case 40:
			return joaat("BLIP_STYLE_SHOP");
	
		case 41:
			return joaat("BLIP_STYLE_SHOP");
	
		case 42:
			return joaat("BLIP_STYLE_SHOP");
	
		case 43:
			return joaat("BLIP_STYLE_SHOP");
	
		case 44:
			return joaat("BLIP_STYLE_SHOP");
	
		case 45:
			return joaat("BLIP_STYLE_SHOP");
	
		case 46:
			return joaat("BLIP_STYLE_PROPERTY");
	
		case 47:
			return joaat("BLIP_STYLE_PROPERTY");
	
		case 48:
			return joaat("BLIP_STYLE_PROPERTY");
	
		case 49:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 50:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 51:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 52:
			return joaat("BLIP_STYLE_CAMP");
	
		case 53:
			return joaat("BLIP_STYLE_EVENT_AREA");
	
		case 54:
			return joaat("BLIP_STYLE_EVENT_AREA");
	
		case 55:
			return joaat("BLIP_STYLE_EVENT_AREA");
	
		case 56:
			return joaat("BLIP_STYLE_EVENT_AREA");
	
		case 57:
			return joaat("BLIP_STYLE_MP_HIDEOUT");
	
		case 58:
			return joaat("BLIP_STYLE_RCM");
	
		case 59:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 60:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 61:
			return joaat("BLIP_STYLE_MINIGAME");
	
		case 62:
			return joaat("BLIP_STYLE_TOWN");
	
		default:
			break;
	}

	return 0;
}

eBlipSprite func_668(int iParam0) // Position - 0x2808B Hash - 0xBA965109 ^0x9E3CAF65
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
			return joaat("blip_ambient_newspaper");
	
		case 41:
			return joaat("blip_shop_market_stall");
	
		case 42:
			return joaat("blip_shop_market_stall");
	
		case 43:
			return joaat("blip_hotel_bed");
	
		case 44:
			return joaat("blip_photo_studio");
	
		case 45:
			return joaat("blip_stable");
	
		case 46:
			return joaat("blip_proc_home");
	
		case 47:
			return joaat("blip_proc_home_locked");
	
		case 48:
			return joaat("blip_proc_home");
	
		case 49:
			return joaat("blip_ambient_telegraph");
	
		case 50:
			return joaat("blip_ambient_coach_taxi");
	
		case 51:
			return joaat("blip_ambient_theatre");
	
		case 52:
			return joaat("blip_region_caravan");
	
		case 53:
			return joaat("blip_event_appleseed");
	
		case 54:
			return joaat("blip_event_castor");
	
		case 55:
			return joaat("blip_event_railroad_camp");
	
		case 56:
			return joaat("blip_event_riggs_camp");
	
		case 57:
			return joaat("blip_region_hideout");
	
		case 58:
			return joaat("blip_proc_home");
	
		case 59:
			return joaat("blip_mg_fishing");
	
		case 60:
			return joaat("blip_ambient_theatre");
	
		case 61:
			return joaat("blip_ambient_theatre");
	
		case 62:
			return joaat("blip_town");
	
		default:
			break;
	}

	return BLIP_HIGHER;
}

BOOL func_669() // Position - 0x284AC Hash - 0x460DA482 ^0x460DA482
{
	if (!func_70(39))
		return false;

	if (func_70(43))
		return false;

	return true;
}

BOOL func_670(int iParam0) // Position - 0x284D0 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_27() != -1)
		return false;

	if (!func_174(iParam0))
		return false;

	return func_576(Global_1347702[iParam0 /*49*/].f_15);
}

int func_671(eStackSize essParam0) // Position - 0x28500 Hash - 0xB97A73EA ^0xB97A73EA
{
	switch (essParam0)
	{
		case 4:
			return 5;
	
		case 5:
			return 9;
	
		case 9:
			return 6;
	
		case 22:
			return 7;
	
		case 26:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 10;
	
		case 43:
			return 1;
	
		case 58:
			return 3;
	
		case 71:
			return 4;
	
		case 76:
			return 8;
	
		case 78:
			return 13;
	
		case 79:
			return 0;
	
		case 92:
			return 12;
	
		case 98:
			return 2;
	
		case 105:
			return 11;
	
		case 115:
			return 16;
	
		default:
		
	}

	return -1;
}

BOOL func_672(int iParam0, BOOL bParam1) // Position - 0x285C4 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_220(iParam0))
		return false;

	return Global_40.f_9384[iParam0 /*2*/] && bParam1 != false;
}

void func_673(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x285E9 Hash - 0xE0129E1B ^0xE0129E1B
{
	Hash i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_844(i) == essParam0 && func_430(i) == iParam1)
		{
			func_738(i, -1);
			func_739(i, 0);
			func_740(i, 0);
		
			if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
			{
				if (bParam5)
					MAP::SET_RADAR_ZOOM(Global_36308[i]);
			
				MAP::REMOVE_BLIP(&Global_36308[i]);
			}
		
			return;
		}
	}

	return;
}

Hash func_674(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x28660 Hash - 0x59B5D00 ^0x59B5D00
{
	Hash i;
	Hash hash;
	BOOL flag;

	if (iParam1 == 0)
		return -1;

	if (_IS_NULL_VECTOR(uParam2))
		return -1;

	hash = -1;
	flag = func_845(uParam2);

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_430(i) == 0 && hash == -1)
			hash = i;
		else if (func_430(i) == iParam1 && func_844(i) == essParam0 && flag == func_665(i))
			return i;
	}

	if (hash > -1 && hash < 250)
	{
		func_738(hash, essParam0);
		func_739(hash, iParam1);
		func_740(hash, flag);
		func_846(hash, iParam5);
		func_431(hash);
		MAP::SET_BLIP_FLASH_TIMER(Global_36308[hash], iParam1, 0);
		return hash;
	}

	return -1;
}

void func_675(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, const char* sParam5) // Position - 0x28735 Hash - 0x9A7ECD55 ^0x9A7ECD55
{
	BOOL flag;
	Hash i;

	flag = func_845(uParam2);

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_844(i) == essParam0 && func_430(i) == iParam1 && func_665(i) == flag)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_36308[i], sParam5);
		
			return;
		}
	}

	return;
}

void func_676(Hash hParam0, Hash hParam1) // Position - 0x287A1 Hash - 0x24A4BE93 ^0xEBE5F71D
{
	if (hParam0 >= 0 && hParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[hParam0]))
			MAP::_BLIP_ADD_STYLE(Global_36308[hParam0], hParam1);

	return;
}

void func_677(eStackSize essParam0) // Position - 0x287D7 Hash - 0xA6D15E18 ^0xF901F8CC
{
	Hash i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_844(i) == essParam0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
				MAP::BLIP_ADD_MODIFIER(Global_36308[i], joaat("BLIP_MODIFIER_URGENT_ALERT"));
		
			return;
		}
	}

	return;
}

BOOL func_678(eStackSize essParam0, int iParam1, Hash hParam2) // Position - 0x28820 Hash - 0x18918DF8 ^0x7D2DAEF2
{
	Hash i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_844(i) == essParam0 && func_430(i) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
				return MAP::BLIP_ADD_MODIFIER(Global_36308[i], hParam2);
		
			return false;
		}
	}

	return false;
}

BOOL func_679(eStackSize essParam0, int iParam1, Hash hParam2) // Position - 0x28879 Hash - 0x18918DF8 ^0x7D2DAEF2
{
	Hash i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_844(i) == essParam0 && func_430(i) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
				return MAP::BLIP_REMOVE_MODIFIER(Global_36308[i], hParam2);
		
			return false;
		}
	}

	return false;
}

void func_680(eStackSize essParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x288D2 Hash - 0xD7526ED6 ^0xABD5F576
{
	if (func_847(essParam0))
	{
		Global_1888801[essParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
		return;
	}

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[essParam0 /*35*/].f_9, false) || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[essParam0 /*35*/].f_26)))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_3))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[essParam0 /*35*/].f_3, vParam1))
			{
				Global_1888801[essParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
				func_848(essParam0);
				return;
			}
		}
	
		if (Global_1888801[essParam0 /*35*/].f_1 + 2500 > MISC::GET_GAME_TIMER())
			return;
	}

	if (Global_1888801[essParam0 /*35*/].f_9 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[essParam0 /*35*/].f_9, false))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[essParam0 /*35*/].f_9, 523);
				Global_1888801[essParam0 /*35*/].f_9 = 0;
			}
			else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[essParam0 /*35*/].f_9))
			{
				SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[essParam0 /*35*/].f_9);
			}
		}
	
		if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[essParam0 /*35*/].f_9))
			Global_1888801[essParam0 /*35*/].f_9 = 0;
		else
			return;
	}

	func_280(essParam0, 8);

	switch (Global_1888801[essParam0 /*35*/].f_20)
	{
		case 1:
		case 2:
			if (func_27() == -1)
			{
				if (Global_1327479.f_6 != essParam0)
				{
					func_849(-30, 0, true);
					Global_1327479.f_6 = essParam0;
				}
			}
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	
		case 7:
			break;
	}

	func_280(essParam0, 11);

	if (Global_23118[essParam0 /*11*/].f_10 < 10)
		Global_23118[essParam0 /*11*/].f_10 = 0;

	func_850(func_229(essParam0, true, true));

	if (essParam0 == Global_1894899.f_2)
	{
		func_848(-1);
		func_851();
	}

	return;
}

void func_681(eStackSize essParam0, int iParam1) // Position - 0x28AA1 Hash - 0xC49E8A24 ^0x73B5AC55
{
	BOOL flag;
	BOOL flag2;
	int num;
	struct<4> args;
	BOOL flag3;
	eStackSize stackSize;

	if (!func_207(essParam0))
		return;

	flag = HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1888801[essParam0 /*35*/].f_26)) != 0;
	flag2 = false;

	if (flag)
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1888801[essParam0 /*35*/].f_26)))
		{
			SCRIPTS::REQUEST_SCRIPT(&(Global_1888801[essParam0 /*35*/].f_26));
			return;
		}
	}

	num = Global_1888801[essParam0 /*35*/].f_20;
	flag3 = essParam0 == func_98();

	if (flag && flag3 && Global_1879534)
		flag = false;

	switch (num)
	{
		case 3:
			if (func_852(essParam0, true))
				flag2 = true;
	
		default:
		
	}

	if (flag)
	{
		args = essParam0;
		stackSize = 1024;
	
		if (MISC::GET_HASH_KEY(&(Global_1888801[essParam0 /*35*/].f_26)) != joaat("generic_ghosttown"))
			if (num == 8)
				stackSize = MINI;
			else if (flag3)
				stackSize = AM_MP_YACHT;
			else if (num == 3)
				stackSize = 2049;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			stackSize = 5500;
	
		if (Global_1888801[essParam0 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[essParam0 /*35*/].f_9, false))
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[essParam0 /*35*/].f_9, 523);
				else
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[essParam0 /*35*/].f_9);
		
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[essParam0 /*35*/].f_9))
				Global_1888801[essParam0 /*35*/].f_9 = 0;
			else
				return;
		}
	
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1888801[essParam0 /*35*/].f_26))) > 0)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[essParam0 /*35*/].f_26), 523);
			else
				SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[essParam0 /*35*/].f_26)));
		
			return;
		}
	
		args.f_2 = iParam1;
		Global_1888801[essParam0 /*35*/].f_9 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1888801[essParam0 /*35*/].f_26), &args, 4, stackSize);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[essParam0 /*35*/].f_26));
	}

	func_322(essParam0, true);
	func_322(essParam0, 2);
	func_853(flag2);
	return;
}

void func_682(eStackSize essParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x28C91 Hash - 0xE28A89EC ^0x7DC6F292
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (Global_1572887.f_12 == -1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(player))
			return;
	
		if (func_77(Global_1935630, 4096))
			if (!func_854())
				return;
	}

	if (!func_847(essParam0))
	{
		if (!VOLUME::IS_POINT_IN_VOLUME(Global_1888801[essParam0 /*35*/].f_3, vParam1))
		{
			if (Global_1894899.f_2 == essParam0)
				func_848(-1);
		
			return;
		}
	
		if (func_207(Global_1894899.f_2))
		{
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_9))
			{
				if (bParam4)
					func_322(Global_1894899.f_2, 2);
			
				return;
			}
		}
	}

	TEXT_LABEL_COPY(&(Global_1888801[essParam0 /*35*/].f_26), { func_855(essParam0) }, 4);

	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1888801[essParam0 /*35*/].f_26)) != 0)
		SCRIPTS::REQUEST_SCRIPT(&(Global_1888801[essParam0 /*35*/].f_26));
	else
		func_322(essParam0, 2);

	func_322(essParam0, true);

	if (Global_1888801[essParam0 /*35*/].f_20 != 8)
		func_856(essParam0, false);

	PLAYER::_0xFA7DAAE3959E6C7B(player, func_857());

	if (Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !CAM::IS_SCREEN_FADED_OUT())
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_PLAYER_ARRIVAL"), Global_35, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1);

	func_848(essParam0);
	func_858(essParam0);
	func_395(func_229(essParam0, true, true), -1);
	return;
}

BOOL func_683(int iParam0) // Position - 0x28E0F Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

Hash func_684() // Position - 0x28E1B Hash - 0x6281C08B ^0xE2D01D13
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

BOOL func_685(int iParam0) // Position - 0x28E2C Hash - 0xC5805E92 ^0xC5805E92
{
	if (iParam0 == 0)
		return func_859() && func_860();
	else if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return func_861(iParam0, 1);

	return false;
}

void func_686(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x28E73 Hash - 0x7A16E50C ^0x7A16E50C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
	
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
	
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
	
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
	
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
	
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
	
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
	
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
	
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
	
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
	
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
	
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
	
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
	
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
	
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
	
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
	
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
	
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
	
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
	
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
	
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
	
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
	
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
	
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
	
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
	
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
	
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
	
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
	
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
	
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
	
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
	
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
	
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
	
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
	
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
	
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
	
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
	
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
	
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}

	return;
}

BOOL func_687(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x29910 Hash - 0x3D2F8087 ^0xB0BC8DD5
{
	float num;
	float num2;
	float num3;

	num = { uParam0 - uParam3 };
	num2 = (num * BUILTIN::COS(fParam8)) + (num.f_1 * BUILTIN::SIN(fParam8));
	num2.f_1 = (num * BUILTIN::SIN(fParam8)) - (num.f_1 * BUILTIN::COS(fParam8));
	num3 = ((num2 * num2) / (fParam6 * fParam6)) + ((num2.f_1 * num2.f_1) / (fParam7 * fParam7));
	return num3 <= 1f;
}

int func_688(var uParam0, var uParam1) // Position - 0x29976 Hash - 0xD22CE202 ^0xD22CE202
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	*uParam0 = 0;
	*uParam1 = 0;
	flag = func_58();
	flag2 = false;

	if (flag && !func_70(4))
		flag2 = true;

	if (flag && func_70(37) && !func_70(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}

	flag3 = false;

	if (flag && func_70(43) && !func_70(44))
		flag3 = true;

	if (flag2)
	{
		*uParam0 = 1;
		return 1;
	}

	if (!flag2 && !flag3)
	{
		if (func_862(0) == 1)
			*uParam0 = 1;
	
		if (func_862(1) == 1)
			*uParam1 = 1;
	}

	if (*uParam0 || *uParam1)
		return 1;

	return 0;
}

int func_689() // Position - 0x29A35 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3054;
}

BOOL func_690(int iParam0) // Position - 0x29A46 Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_863(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

Volume func_691() // Position - 0x29A7A Hash - 0x16DF4B0C ^0x16DF4B0C
{
	if (func_58())
	{
		if (!func_70(3))
			return func_458(43);
	
		if (func_70(38) && !func_70(43))
			return func_373(8);
	}

	return 0;
}

Vector3 func_692(Any anParam0, int iParam1) // Position - 0x29ABA Hash - 0x11FB252 ^0x4C132557
{
	var unk;
	var unk6;

	func_264(15, &unk);
	unk.f_2 = -1999103282;
	unk.f_3 = anParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -495185473;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk6, &unk);
	}

	return unk6;
}

BOOL func_693(Any anParam0, int iParam1) // Position - 0x29B03 Hash - 0xF5110C29 ^0x7BE441BB
{
	int num;
	var unk;
	int num2;

	if (LAW::GET_BOUNTY(PLAYER::PLAYER_ID()) <= 0)
		return 0;

	if (Global_1310720.f_21 == -1)
		return 0;

	if (Global_1310720.f_23 >= 3)
		return 0;

	num = func_864(Global_1310720.f_21, 2);

	if (num == -1)
		return 0;

	func_264(15, &unk);
	unk.f_2 = -1999103282;
	unk.f_3 = anParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 383290544;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &unk);
	
		if (func_865(num) == num2)
			return 1;
	}

	return 0;
}

BOOL func_694(int iParam0, BOOL bParam1, int iParam2) // Position - 0x29B9B Hash - 0x922F9D73 ^0x546AEB5C
{
	int num;

	num = func_866(iParam0);

	if (func_310(373691918) && Global_1310720.f_12)
		return num == 4;

	if (iParam2 != -1)
		return num == iParam2;

	return bParam1 || num == -1;
}

BOOL func_695(Any anParam0) // Position - 0x29BE3 Hash - 0x9AA95235 ^0x5D46FAEF
{
	var unk;
	BOOL num;

	if (!func_264(15, &unk))
		return false;

	unk.f_3 = anParam0;
	unk.f_2 = 303248275;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&num, &unk);
	return num;
}

BOOL func_696(float fParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, Volume volParam8, BOOL bParam9, float fParam10) // Position - 0x29C17 Hash - 0x900D6B9D ^0x900D6B9D
{
	int num;
	eStackSize stackSize;

	if (bParam5)
		if (func_867(iParam3, iParam4))
			return false;

	if (!bParam7 || func_868(5))
		if (func_869(iParam3, iParam4))
			return false;

	num = func_197(fParam0);

	if (bParam6)
	{
		stackSize = func_102(fParam0, true);
	
		if (func_285(stackSize) || func_870(num, true))
			return false;
	}

	if (!func_871(iParam3, iParam4))
		return false;

	if (!func_872())
		if (func_873(iParam3, iParam4))
			return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam8))
	{
		if (!func_874(num))
			return false;
	
		if (Global_1310720.f_23 >= 3)
			if (Global_1310720.f_21 != -1)
				if (Global_1310720.f_21 == func_102(fParam0, false))
					return false;
	}

	if (!func_875(iParam3, iParam4))
		return false;

	if (func_876(0) == 3)
		if (fParam0 > -1480f && fParam0 < -1475f && fParam0.f_1 > -359f && fParam0.f_1 < -354f)
			return false;

	if (!func_877(65536, 2))
		if (fParam0 > 1673f && fParam0 < 1676f && fParam0.f_1 > -1888f && fParam0.f_1 < -1885f)
			return false;

	if (func_58())
	{
		if (VOLUME::DOES_VOLUME_EXIST(volParam8))
			if (!VOLUME::IS_POINT_IN_VOLUME(volParam8, fParam0))
				return false;
	
		if (func_878(fParam0, fParam10) || func_879(fParam0, fParam10))
			return false;
	}
	else if (bParam9)
	{
		if (fParam0 < -450f && fParam0.f_1 < -600f)
			return false;
	}

	return true;
}

void func_697(int iParam0) // Position - 0x29DF4 Hash - 0xF3266748 ^0x7F2695B9
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

int func_698(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x29E3A Hash - 0xA452440E ^0xD3F785A1
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

Hash func_699(int iParam0) // Position - 0x29E82 Hash - 0xD9CACD5C ^0xC1FF0F4A
{
	switch (iParam0)
	{
		case 0:
			return joaat("state_ambarino");
	
		case 1:
			return joaat("state_new_hanover");
	
		case 2:
			return joaat("state_lemoyne");
	
		case 3:
			return joaat("state_west_elizabeth");
	
		case 4:
			return joaat("state_new_austin");
	
		case 5:
			return joaat("state_guarma");
	
		default:
		
	}

	return 0;
}

void func_700(Hash hParam0) // Position - 0x29EE7 Hash - 0x414BF67D ^0x2E776DA
{
	if (func_275(hParam0) == 57)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-1145496915);
		MAP::_MAP_DISABLE_REGION_BLIP(-1043953850);
		MAP::_MAP_DISABLE_REGION_BLIP(-1783502982);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(hParam0);
	}

	return;
}

void func_701(eStackSize essParam0) // Position - 0x29F3D Hash - 0x9B0BA3D ^0xE52E2EA5
{
	var unk;
	const char* str;
	Hash hashKey;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_754(unk);
	hashKey = MISC::GET_HASH_KEY(str);

	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_WANTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(hashKey);

	return;
}

int func_702(eStackSize essParam0) // Position - 0x29F8F Hash - 0x43E7FC98 ^0x22D1E5E4
{
	if (!func_207(essParam0))
		return 0;

	if (func_457(essParam0))
		return -1;

	return Global_23118[essParam0 /*11*/].f_3;
}

int func_703(eStackSize essParam0) // Position - 0x29FBE Hash - 0x308FE976 ^0xD461FEB6
{
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	float value7;
	int num;

	if (!func_461(essParam0))
		return 0;

	func_880(essParam0, &value, &value2, &value3, &value4, &value5, &value6);
	value7 = (BUILTIN::TO_FLOAT(value) / 60f) + BUILTIN::TO_FLOAT(value2) + (BUILTIN::TO_FLOAT(value3) * 60f) + (BUILTIN::TO_FLOAT(value4) * 24f * 60f) + (BUILTIN::TO_FLOAT(value5) * 30.4375f * 24f * 60f) + (BUILTIN::TO_FLOAT(value6) * 365.25f * 24f * 60f);
	num = BUILTIN::ROUND(value7);
	return num;
}

int func_704(int iParam0, int iParam1) // Position - 0x2A057 Hash - 0x893AC59E ^0x893AC59E
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

Hash func_705(int iParam0) // Position - 0x2A0F1 Hash - 0xB8EC44B7 ^0xCA15B31A
{
	switch (iParam0)
	{
		case 0:
			return joaat("district_bayou_nwa");
	
		case 1:
			return joaat("district_big_valley");
	
		case 2:
			return joaat("district_bluegill_marsh");
	
		case 3:
			return joaat("district_cumberland_forest");
	
		case 4:
			return joaat("district_great_plains");
	
		case 5:
			return joaat("district_grizzlies");
	
		case 6:
			return joaat("district_grizzlies_east");
	
		case 7:
			return joaat("district_grizzlies_west");
	
		case 8:
			return joaat("district_guama");
	
		case 9:
			return joaat("district_heartland");
	
		case 10:
			return joaat("district_roanoke_ridge");
	
		case 11:
			return joaat("district_scarlett_meadows");
	
		case 12:
			return joaat("district_tall_trees");
	
		case 13:
			return joaat("district_gaptooth_ridge");
	
		case 14:
			return joaat("district_rio_bravo");
	
		case 15:
			return joaat("district_cholla_springs");
	
		case 16:
			return joaat("district_hennigans_stead");
	
		default:
		
	}

	return 1776960747;
}

BOOL func_706() // Position - 0x2A1F4 Hash - 0xE38B3ABA ^0x1FABC648
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[59 /*49*/].f_42, false) && !func_881(Global_1347702[59 /*49*/].f_13, 4))
		return true;

	return false;
}

BOOL func_707(int iParam0) // Position - 0x2A228 Hash - 0xE25604CE ^0xD402A31E
{
	switch (func_27())
	{
		case -1:
			return Global_40.f_4283.f_3 && iParam0 != false;
	}

	return false;
}

BOOL func_708(int iParam0) // Position - 0x2A254 Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return false;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return false;
	
		num = func_512(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

BOOL func_709() // Position - 0x2A2BF Hash - 0xE223752C ^0xF1C4BC55
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[66 /*49*/].f_42, false) && !func_881(Global_1347702[66 /*49*/].f_13, 4))
		return true;

	return false;
}

BOOL func_710() // Position - 0x2A2F3 Hash - 0xB8AF6256 ^0x3D1F5D7D
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_1663[1]))
		if (func_620(Global_35, Global_1357549.f_1663[1], true, 0))
			return true;

	return false;
}

BOOL func_711(int iParam0) // Position - 0x2A327 Hash - 0x4F0541A4 ^0x8C6B2D1A
{
	if (Global_1327590.f_10 == 14)
		return true;

	return false;
}

Hash func_712() // Position - 0x2A33F Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

Hash func_713(var uParam0, var uParam1, BOOL bParam2) // Position - 0x2A348 Hash - 0x6FA9FFAA ^0x6FA9FFAA
{
	Hash iplHash;
	int num;
	int i;
	float num2;

	num2 = func_478();

	if (num2 < 30f)
		num = 0;
	else if (num2 < 75f)
		num = 1;
	else
		num = 2;

	if (bParam2)
		iplHash = uParam1->[num];
	else
		iplHash = uParam0->[num];

	if (STREAMING::IS_IPL_ACTIVE_HASH(iplHash) == false)
	{
		STREAMING::REQUEST_IPL_HASH(iplHash);
	}
	else
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (iplHash != uParam1->[i])
				if (STREAMING::IS_IPL_ACTIVE_HASH(uParam1->[i]))
					STREAMING::REMOVE_IPL_HASH(uParam1->[i]);
		
			if (iplHash != uParam0->[i])
				if (STREAMING::IS_IPL_ACTIVE_HASH(uParam0->[i]))
					STREAMING::REMOVE_IPL_HASH(uParam0->[i]);
		
			func_882(iplHash);
		}
	}

	return iplHash;
}

BOOL func_714() // Position - 0x2A404 Hash - 0x9F992B39 ^0x9F85271D
{
	int num;

	if (func_46(Global_1898437) && func_111(Global_1898437) == 1)
	{
		num = func_113(Global_1898437);
	
		if (func_560(num) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[num /*74*/].f_22)) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1835011[num /*74*/].f_22))) > 0)
			return true;
	}

	return false;
}

BOOL func_715() // Position - 0x2A46A Hash - 0xA8E763FC ^0xAD774939
{
	int i;

	if (func_357() == 6)
		return false;

	if (func_576(Global_1347702[68 /*49*/].f_15))
		return true;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == 68)
			return true;
	}

	return false;
}

int func_716(Hash hParam0, int iParam1) // Position - 0x2A4C0 Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_883(hParam0, 0))
		return 0;

	unk = { func_884(false) };
	unk.f_4 = func_885(iParam1);
	guid = { func_886(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_887(false), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_717(int iParam0) // Position - 0x2A51B Hash - 0x9F6D0EA7 ^0x9F6D0EA7
{
	return Global_1357549.f_1885 == iParam0 && !func_888(&(Global_1357549.f_1901));
}

void func_718(Hash hParam0) // Position - 0x2A53E Hash - 0x690E6520 ^0x3ABA9FF5
{
	STREAMING::REQUEST_IPL_HASH(hParam0);
	return;
}

BOOL func_719(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x2A54C Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_883(hParam0, 0))
		return false;

	num = func_889(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_890(hParam0, 1))
			return false;

	return func_745(hParam0, false, bParam2) >= iParam1;
}

int func_720(int iParam0, int iParam1) // Position - 0x2A5B6 Hash - 0x7E0FBB6F ^0x7E0FBB6F
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
		
			default:
			
		}
	}

	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
	
		case 1:
			return Global_40.f_4283.f_316;
	
		case 2:
			return Global_40.f_4283.f_317;
	
		case 3:
			return Global_40.f_4283.f_318;
	
		case 4:
			return Global_40.f_4283.f_319;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
	
		case 12:
			return Global_40.f_4283.f_315;
	
		case 13:
			return Global_40.f_4283.f_314;
	
		case 14:
			return Global_40.f_4283.f_322;
	
		default:
		
	}

	return 1;
}

void func_721(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2A6AD Hash - 0x8E0CF709 ^0x2A9FEC0
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
				*iParam2 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(701.0167f, -1247.185f, 43.9899f, 3f, 2, -1, 0);
			else
				GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam2, 0);
			break;
	}

	switch (iParam0)
	{
		case -2147051362:
		case -997495998:
		case 266022415:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1887.5203f, -1880.7572f, 41.9442f, 4f);
			break;
	
		case -2016771661:
		case 202127432:
		case 2072112547:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(653.7093f, -1244.0431f, 42.6971f, 4f);
			break;
	
		case -1987982797:
		case -1933895237:
		case -104137172:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-147.6751f, -24.5264f, 95.2101f, 4f);
			break;
	
		case -1920340119:
		case -1576393943:
		case -413795019:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-123.9274f, -22.8559f, 95.0845f, 4f);
			break;
	
		case -1910456812:
		case -1115840558:
		case 1674493966:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1877.4855f, -1861.0004f, 41.8078f, 4f);
			break;
	
		case -1642249622:
		case 1084869405:
		case 1636281938:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(674.1929f, -1266.0908f, 42.984f, 4f);
			break;
	
		case -1620486708:
		case -223906810:
		case 163126540:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-118.3392f, -35.8852f, 94.7422f, 4f);
			break;
	
		case -1563072795:
		case 607574432:
		case 825179479:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-125.9479f, -39.4579f, 94.6035f, 4f);
			break;
	
		case -1451784475:
		case 1028224932:
		case 1128417383:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(673.2328f, -1239.6274f, 43.1471f, 4f);
			break;
	
		case -1426249148:
		case -182995231:
		case 1267297807:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-142.3644f, -21.2133f, 95.0883f, 4f);
			break;
	
		case -1279618207:
		case -751959361:
		case 1742990618:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(678.267f, -1251.8728f, 43.0153f, 4f);
			break;
	
		case -1123811713:
		case -546137515:
		case 1679038623:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(658.2036f, -1233.0991f, 43.2507f, 4f);
			break;
	
		case -882188392:
		case 773757120:
		case 964593693:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1870.6249f, -1872.112f, 41.8191f, 4f);
			break;
	
		case -782359587:
		case 2728487:
		case 1674800958:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(660.9469f, -1255.9865f, 42.7088f, 4f);
			break;
	
		case -638481378:
		case -621187540:
		case 1079213989:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1880.102f, -1880.5121f, 41.9323f, 4f);
			break;
	
		case -379409079:
		case 1808508475:
		case 2015311123:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-111.4885f, -39.7478f, 94.8525f, 4f);
			break;
	}

	return;
}

int func_722(int iParam0) // Position - 0x2A987 Hash - 0x7F57CDFF ^0x7F57CDFF
{
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_320;
	
		case 1:
			return Global_40.f_4283.f_318;
	
		case 2:
			return Global_40.f_4283.f_319;
	}

	return 1;
}

void func_723(BOOL bParam0) // Position - 0x2A9D7 Hash - 0xE2602BA2 ^0xA98F9D2E
{
	int num;
	var unk;
	Hash iplHash;
	int i;

	num = func_720(3, 0) - 1;
	unk = 4;
	unk[0] = -916538063;
	unk[1] = -916538063;
	unk[2] = 110400393;
	unk[3] = 110400393;
	iplHash = unk[num];

	if (bParam0)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(iplHash) == false)
			STREAMING::REQUEST_IPL_HASH(iplHash);
	
		for (i = 0; i < 4; i = i + 1)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk[i]))
				if (unk[i] != iplHash)
					STREAMING::REMOVE_IPL_HASH(unk[i]);
		}
	}
	else
	{
		for (i = 0; i < 4; i = i + 1)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(unk[i]))
				STREAMING::REMOVE_IPL_HASH(unk[i]);
		}
	}

	return;
}

void func_724(BOOL bParam0) // Position - 0x2AA93 Hash - 0x81312753 ^0x8F8BB630
{
	var unk;
	int i;

	unk = 3;

	if (bParam0)
	{
		unk[0] = -1370620659;
		unk[1] = -624219879;
		unk[2] = 715730031;
	}
	else
	{
		unk[0] = 5585502;
		unk[1] = -1362716862;
		unk[2] = 482931525;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(unk[i]))
			if (unk[i] != func_712())
				STREAMING::REMOVE_IPL_HASH(unk[i]);
	}

	return;
}

void func_725() // Position - 0x2AB19 Hash - 0xA2453A60 ^0x72F7C26E
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1357549.f_1674))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, false);
	
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1674) == false)
			VEHICLE::DELETE_VEHICLE(&(Global_1357549.f_1674));
	}

	return;
}

void func_726(int iParam0) // Position - 0x2AB65 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

char* func_727(const char* sParam0) // Position - 0x2AB6D Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(int iParam0) // Position - 0x2AB77 Hash - 0xA17D549C ^0xCE1AA247
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

char* func_729(int iParam0) // Position - 0x2ACEA Hash - 0x418B03E6 ^0x367C1503
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

int func_730(int iParam0) // Position - 0x2AD4B Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_741(iParam0);

	if (num < 0)
		return 0;

	return func_891(num);
}

int func_731(int iParam0, int iParam1) // Position - 0x2AD6B Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_892(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_732() // Position - 0x2AEDB Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

void func_733(Hash hParam0, BOOL bParam1) // Position - 0x2AEFE Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*hParam0 != -1)
	{
		func_738(*hParam0, -1);
		func_739(*hParam0, 0);
		func_740(*hParam0, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[*hParam0]))
		{
			if (bParam1)
				MAP::SET_RADAR_ZOOM(Global_36308[*hParam0]);
		
			MAP::REMOVE_BLIP(&Global_36308[*hParam0]);
		}
	}

	*hParam0 = -1;
	return;
}

BOOL func_734(Hash hParam0) // Position - 0x2AF55 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (hParam0 >= 0 && hParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[hParam0]);

	return false;
}

void func_735(Hash hParam0, Hash hParam1) // Position - 0x2AF7E Hash - 0x24A4BE93 ^0x70B16AB7
{
	if (hParam0 >= 0 && hParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[hParam0]))
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[hParam0], hParam1);

	return;
}

int func_736(int iParam0) // Position - 0x2AFB4 Hash - 0xB26DA715 ^0xB26DA715
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 5;
	
		case 2:
			return 26;
	
		case 3:
			return 38;
	
		case 4:
			return 69;
	
		case 5:
			return 76;
	
		case 6:
			return 78;
	
		case 7:
			return 92;
	
		case 8:
			return 105;
	
		case 9:
			return 115;
	
		case 10:
			return 120;
	
		default:
		
	}

	return -1;
}

Hash func_737(int iParam0) // Position - 0x2B03C Hash - 0xB8EC44B7 ^0xFC24309D
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_GROUPING_LAGRAS_LEADER");
	
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER");
	
		case 5:
			return joaat("BLIP_MODIFIER_GROUPING_SAINT_DENIS_LEADER");
	
		case 26:
			return joaat("BLIP_MODIFIER_GROUPING_STRAWBERRY_LEADER");
	
		case 38:
			return joaat("BLIP_MODIFIER_GROUPING_BLACKWATER_LEADER");
	
		case 69:
			return joaat("BLIP_MODIFIER_GROUPING_EMERALD_RANCH_LEADER");
	
		case 76:
			return joaat("BLIP_MODIFIER_GROUPING_VALENTINE_LEADER");
	
		case 78:
			return joaat("BLIP_MODIFIER_GROUPING_ANNESBURG_LEADER");
	
		case 92:
			return joaat("BLIP_MODIFIER_GROUPING_VAN_HORN_LEADER");
	
		case 105:
			return joaat("BLIP_MODIFIER_GROUPING_RHODES_LEADER");
	
		case 115:
			return joaat("BLIP_MODIFIER_GROUPING_TUMBLEWEED_LEADER");
	
		case 120:
			return joaat("BLIP_MODIFIER_GROUPING_ARMADILLO_LEADER");
	
		default:
		
	}

	return 0;
}

void func_738(Hash hParam0, eStackSize essParam1) // Position - 0x2B124 Hash - 0x3A863EAC ^0xECB3FAF8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[hParam0 /*4*/] = essParam1;
		return;
	}

	Global_42606[hParam0 /*4*/] = essParam1;
	return;
}

void func_739(Hash hParam0, int iParam1) // Position - 0x2B151 Hash - 0x90093024 ^0xBB5CF78A
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[hParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_42606[hParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_740(Hash hParam0, BOOL bParam1) // Position - 0x2B182 Hash - 0x90093024 ^0x830112D0
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[hParam0 /*4*/].f_2 = bParam1;
		return;
	}

	Global_42606[hParam0 /*4*/].f_2 = bParam1;
	return;
}

int func_741(int iParam0) // Position - 0x2B1B3 Hash - 0x6EC15CF9 ^0xE613EBE0
{
	int num;
	int num2;
	int num3;

	if (*Global_1058888.f_40431 <= 0)
		return -1;

	num = 0;
	num2 = *Global_1058888.f_40431 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (Global_1058888.f_40431.f_1[num3 /*2*/] > iParam0)
			num2 = num3 - 1;
		else if (Global_1058888.f_40431.f_1[num3 /*2*/] < iParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

struct<2> func_742(int iParam0, int iParam1) // Position - 0x2B234 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

int func_743(int iParam0) // Position - 0x2B24A Hash - 0x333EB83A ^0x37C96C1F
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 4;
	
		case 2:
			return 8;
	
		case 3:
			return 16;
	
		case 4:
			return 32;
	
		case 5:
			return 64;
	
		case 6:
			return 128;
	
		case 7:
			return 256;
	
		case 8:
			return 512;
	
		case 9:
			return 1024;
	
		case 10:
			return 2048;
	
		case 11:
			return 4096;
	
		case 12:
			return 8192;
	
		case 13:
			return 16384;
	
		case 14:
			return 32768;
	
		case 15:
			return 65536;
	
		case 16:
			return 131072;
	
		case 17:
			return 262144;
	
		case 18:
			return 524288;
	
		case 19:
			return 1048576;
	
		default:
		
	}

	return 1;
}

Object func_744() // Position - 0x2B348 Hash - 0xC5B83CF5 ^0x3B10C28A
{
	return Global_40.f_8863.f_148;
}

int func_745(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2B358 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_883(hParam0, 0))
		return 0;

	num = func_889(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_893(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_894(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_887(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

struct<2> func_746(int iParam0) // Position - 0x2B3DA Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

Hash func_747(int iParam0) // Position - 0x2B3EC Hash - 0x4C78D065 ^0x26893A05
{
	switch (iParam0)
	{
		case 0:
			return joaat("sp_chal_band_root");
	
		case 1:
			return joaat("sp_chal_expl_root");
	
		case 2:
			return joaat("sp_chal_gamb_root");
	
		case 3:
			return joaat("sp_chal_herb_root");
	
		case 4:
			return joaat("sp_chal_horse_root");
	
		case 5:
			return joaat("sp_chal_hunt_root");
	
		case 6:
			return joaat("sp_chal_shot_root");
	
		case 7:
			return joaat("sp_chal_surv_root");
	
		case 8:
			return joaat("sp_chal_weap_root");
	
		default:
		
	}

	return 0;
}

void func_748(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2B47A Hash - 0x9DD22E7 ^0x9DD22E7
{
	int num;

	if (!func_46(iParam0))
	{
		!bParam1;
		return;
	}

	if (!func_576(iParam0) && !func_708(iParam0))
	{
		!bParam1;
		return;
	}

	func_532(iParam0) == 0;

	if (iParam2 == 2 && !func_576(iParam0))
		iParam2 = -1;

	if (func_512(iParam0) == 3 || func_512(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_532(iParam0)))
	{
		func_895(func_111(iParam0), func_532(iParam0), iParam2);
	
		if (!func_46(Global_1572864.f_8) && !func_72(0, true, false) && !func_77(Global_1935630, 32768))
		{
			num = func_896(iParam0);
		
			if (num != -1)
			{
				func_6(false);
			}
			else if (func_111(iParam0) == 8)
			{
				num = func_897();
			
				if (num != -1)
					func_6(false);
			}
		}
	}

	func_898(iParam0, 0);

	if (func_76(0) == iParam0)
	{
		func_899(true);
		func_900(false);
		func_901(1);
	}

	func_902(iParam0, true);
	func_903(iParam0);
	return;
}

int func_749(int iParam0) // Position - 0x2B59F Hash - 0x6B3238EF ^0x6B3238EF
{
	int i;

	if (Global_1898329 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1898329 - 1; i = i + 1)
	{
		if (Global_1898330[i] == iParam0)
			return i;
	}

	return -1;
}

void func_750(BOOL bParam0, eStackSize essParam1, int iParam2, int iParam3) // Position - 0x2B5E0 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_249(bParam0);
	*essParam1 = func_250(bParam0);
	*iParam2 = func_904(bParam0);
	return;
}

BOOL func_751(int iParam0) // Position - 0x2B603 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

void func_752(int iParam0, BOOL bParam1) // Position - 0x2B622 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_751(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] || bParam1;
	return;
}

int func_753(Hash hParam0) // Position - 0x2B64E Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (hParam0)
	{
		case joaat("district_big_valley"):
			return 1;
	
		case joaat("district_grizzlies"):
			return 5;
	
		case joaat("district_grizzlies_east"):
			return 6;
	
		case joaat("district_cholla_springs"):
			return 15;
	
		case joaat("district_guama"):
			return 8;
	
		case joaat("district_grizzlies_west"):
			return 7;
	
		case joaat("district_rio_bravo"):
			return 14;
	
		case joaat("district_bluegill_marsh"):
			return 2;
	
		case joaat("district_scarlett_meadows"):
			return 11;
	
		case joaat("district_great_plains"):
			return 4;
	
		case joaat("district_bayou_nwa"):
			return 0;
	
		case joaat("district_roanoke_ridge"):
			return 10;
	
		case joaat("district_hennigans_stead"):
			return 16;
	
		case joaat("district_gaptooth_ridge"):
			return 13;
	
		case joaat("district_cumberland_forest"):
			return 3;
	
		case joaat("district_heartland"):
			return 9;
	
		case joaat("district_tall_trees"):
			return 12;
	
		default:
		
	}

	return -1;
}

const char* func_754(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x2B712 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_755(int iParam0) // Position - 0x2B726 Hash - 0x3516A114 ^0xDECD073A
{
	if (iParam0 == -1 || iParam0 >= 33)
		return -1;

	return Global_1899528.f_11[iParam0];
}

int func_756(int iParam0, int iParam1) // Position - 0x2B74E Hash - 0x8D759E81 ^0x8D759E81
{
	int num;
	eStackSize stackSize;
	int num2;

	num = func_755(iParam0);

	if (num == -1)
		return 0;

	stackSize = func_905(num);

	if (stackSize == -1)
		return 0;

	if (func_906(iParam0))
		return 1;

	func_907(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[num /*20*/].f_7))
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[num /*20*/].f_7);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[num /*20*/].f_8))
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[num /*20*/].f_8);

	Global_1392915.f_121[num /*20*/].f_1 = 0;
	func_908(num);
	num2 = func_749(Global_1392915[num /*12*/].f_4);

	if (num2 != -1)
	{
		if (iParam1 == 1)
			func_530(Global_1392915[num /*12*/].f_4);
	
		if (MAP::DOES_BLIP_EXIST(Global_1898346[num2 /*6*/]))
			MAP::REMOVE_BLIP(&Global_1898346[num2 /*6*/]);
	
		func_909(num2, 0);
		return 1;
	}

	return 0;
}

void func_757(int iParam0) // Position - 0x2B838 Hash - 0xD2B2F412 ^0x6837BDDD
{
	int num;

	if (iParam0 == -1)
		return;

	num = Global_1392915[iParam0 /*12*/];

	if (func_910(iParam0))
		return;

	if (func_46(Global_1392915[iParam0 /*12*/].f_4))
		func_748(Global_1392915[iParam0 /*12*/].f_4, true, 2);

	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_767(num, -1);
	return;
}

void func_758(var uParam0, int iParam1) // Position - 0x2B892 Hash - 0x7F892F74 ^0x5E2018BC
{
	int num;

	num = Global_1392915[iParam1 /*12*/];

	if (!func_911(num))
		return;

	if (func_734(uParam0->f_34[num]))
	{
		func_733(&uParam0->f_34[num], true);
		uParam0->f_34[num] = -1;
		uParam0->[num] = 0;
	}

	return;
}

void func_759(int iParam0) // Position - 0x2B8DD Hash - 0xFC8C9409 ^0xE623F74F
{
	func_912(&Global_1392915[iParam0 /*12*/]);
	func_913(&Global_1392915.f_121[iParam0 /*20*/]);
	return;
}

BOOL func_760(int iParam0) // Position - 0x2B8FF Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1935630 && iParam0 != false;
}

BOOL func_761(int iParam0) // Position - 0x2B910 Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1898438;
}

int func_762(int iParam0) // Position - 0x2B924 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_763(int iParam0) // Position - 0x2B938 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

BOOL func_764(int iParam0, int iParam1) // Position - 0x2B957 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_763(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

BOOL func_765(int iParam0) // Position - 0x2B979 Hash - 0xF87DE713 ^0x6B3C11CE
{
	if (!func_914(iParam0))
		return false;

	return !func_58() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0);
}

BOOL func_766(var uParam0) // Position - 0x2B9A6 Hash - 0xE9FA0BF0 ^0xE9FA0BF0
{
	int i;

	*uParam0 = -1;

	for (i = 0; i < Global_1392915; i = i + 1)
	{
		if (func_910(i))
		{
			*uParam0 = i;
			return true;
		}
	}

	return false;
}

void func_767(int iParam0, int iParam1) // Position - 0x2B9DA Hash - 0x783CB6E7 ^0xC545C92C
{
	if (iParam0 == -1 || iParam0 >= 33)
		return;

	Global_1899528.f_11[iParam0] = iParam1;
	return;
}

BOOL func_768(int iParam0, BOOL bParam1) // Position - 0x2BA03 Hash - 0x9C3ED08F ^0xE9848133
{
	return Global_1899528.f_3[iParam0] && bParam1 != false;
}

void func_769(int iParam0) // Position - 0x2BA1A Hash - 0xEF70193F ^0x89D7B4C3
{
	Global_1899528.f_3[iParam0] = false;
	return;
}

int func_770(var uParam0, var uParam1) // Position - 0x2BA2D Hash - 0x9D1CE871 ^0x6377C92B
{
	return func_114(uParam0, uParam1, 4, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(uParam1)));
}

void func_771(int iParam0, BOOL bParam1) // Position - 0x2BA48 Hash - 0xBB5D5F2F ^0x1ACB2B49
{
	!func_768(iParam0, bParam1);
	Global_1899528.f_3[iParam0] = Global_1899528.f_3[iParam0] || bParam1;
	return;
}

BOOL func_772(int iParam0) // Position - 0x2BA73 Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_293(iParam0) == 0;
}

int func_773(int iParam0) // Position - 0x2BA83 Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_772(iParam0))
		return -1;

	if (func_27() != -1)
	{
		num2 = func_749(iParam0);
	
		if (num2 >= 0)
		{
			func_916(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_531(num, true);
			func_916(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_749(iParam0);
	
		if (num2 >= 0)
		{
			func_916(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_46(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_531(i, true);
					func_916(iParam0, true);
					Global_1898329 = Global_1898329 + 1;
				
					if (Global_1898329 > 15)
						Global_1898329 = 15;
				
					return i;
				}
			}
		}
	}

	return -1;
}

Ped func_774(int iParam0) // Position - 0x2BB9F Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_564(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_775(Hash hParam0) // Position - 0x2BBCD Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_776(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2BBD9 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_581(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_581(20))
				return;
		}
	}

	func_582(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_364(8);
	return;
}

void func_777(eStackSize essParam0) // Position - 0x2BCDD Hash - 0xE2596597 ^0x7D9D2199
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		PED::_0x2B4CE170DE09F346(Global_35, essParam0);

	func_371(essParam0, false);
	return;
}

BOOL func_778(int iParam0) // Position - 0x2BD02 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_562(iParam0))
		return false;

	if (!func_336(iParam0, 2))
		return false;

	return true;
}

BOOL func_779() // Position - 0x2BD28 Hash - 0x7BF82DA8 ^0x7BF82DA8
{
	if (func_27() != false)
		return true;

	return true;
}

int func_780(var uParam0, var uParam1, var uParam2) // Position - 0x2BD3D Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_440(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_781(int iParam0) // Position - 0x2BD6B Hash - 0xE6862179 ^0xF94E9B12
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
	
		case 1:
			return "LANDMARK_SCRATCHING_POST";
	
		case 2:
			return "LANDMARK_JORGES_GAP";
	
		case 3:
			return "LANDMARK_MERCER_STATION";
	
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
	
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
	
		case 6:
			return "LANDMARK_SILENT_STEAD";
	
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
	
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
	
		case 9:
			return "LANDMARK_TWO_CROWS";
	
		case 10:
			return "LANDMARK_REPENTANCE";
	
		case 11:
			return "LANDMARK_BENEDICT_PASS";
	
		case 12:
			return "WATER_MANTECA_FALLS";
	
		case 13:
			return "SETTLEMENT_LIMPANY";
	
		case 14:
			return "WATER_MOUNT_SHANN";
	
		case 15:
			return "LANDMARK_THREE_SISTERS";
	
		case 16:
			return "HIDEOUT_PIKES_BASIN";
	
		case 17:
			return "SETTLEMENT_EL_NIDO";
	
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
	
		case 19:
			return "LANDMARK_ERIS_FIELD";
	
		case 20:
			return "LANDMARK_GRANITE_PASS";
	
		case 21:
			return "LANDMARK_VENTERS_PLACE";
	
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
	
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
	
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
	
		case 25:
			return "LANDMARK_CITADEL_ROCK";
	
		case 26:
			return "LANDMARK_CUEVA_SECA";
	
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
	
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
	
		case 29:
			return "LANDMARK_DONNER_FALLS";
	
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
	
		case 32:
			return "LANDMARK_FORT_BRENNAND";
	
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
	
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
	
		case 35:
			return "LANDMARK_MESCALERO";
	
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
	
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
	
		case 38:
			return "LANDMARK_BROKEN_TREE";
	
		case 39:
			return "LANDMARK_BARDS_CROSSING";
	
		case 40:
			return "LANDMARK_FACE_ROCK";
	
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
	}

	return "";
}

BOOL func_782(eStackSize essParam0) // Position - 0x2C04E Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}

	return false;
}

const char* func_783(const char* sParam0, int iParam1) // Position - 0x2C078 Hash - 0x9E99F03 ^0x3E3753EC
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_784() // Position - 0x2C092 Hash - 0x9FDB78D4 ^0x1A910A01
{
	int num;

	if (func_27() == false)
		return -1;

	num = func_897();

	if (num == -1)
		return 150000;

	if (num <= 1)
		return 30000;

	if (num == 2 && !func_70(24))
		return 50000;

	return 150000;
}

int func_785() // Position - 0x2C0EC Hash - 0x4228A1C2 ^0xDB228237
{
	return Global_1934266.f_4;
}

void func_786(int iParam0, Hash hParam1) // Position - 0x2C0FA Hash - 0xA1045AC8 ^0xC1F49224
{
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyAmbarino"), hParam1);
			break;
	
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyNewHanover"), hParam1);
			break;
	
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyLemoyne"), hParam1);
			break;
	
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyWestElizabeth"), hParam1);
			break;
	
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyNewAustin"), hParam1);
			break;
	
		default:
			break;
	}

	return;
}

void func_787(int iParam0) // Position - 0x2C171 Hash - 0x509FA638 ^0x5EC2540B
{
	Hash hash;

	hash = func_917(iParam0);

	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelAmbarino"), hash);
			break;
	
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelNewHanover"), hash);
			break;
	
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelLemoyne"), hash);
			break;
	
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelWestElizabeth"), hash);
			break;
	
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelNewAustin"), hash);
			break;
	
		default:
			break;
	}

	return;
}

void func_788(int iParam0, BOOL bParam1) // Position - 0x2C1F0 Hash - 0xC5A7FE19 ^0xC5A7FE19
{
	if (!func_104(iParam0))
		return;

	if (bParam1)
		func_451(iParam0, 4);
	else
		func_452(iParam0, 4);

	func_918(iParam0, bParam1);
	return;
}

BOOL func_789(int iParam0) // Position - 0x2C223 Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_790(int iParam0) // Position - 0x2C239 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_791(int iParam0, int iParam1) // Position - 0x2C245 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_792(int iParam0, var uParam1, var uParam2) // Position - 0x2C254 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_793(eStackSize essParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2C271 Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_613(essParam0))
		return 0;

	num = CLOCK::GET_CLOCK_HOURS() + 1;

	if (num == 25)
		num = 0;

	unk = 5;
	endRange = 0;

	switch (essParam1)
	{
		case 0:
			switch (essParam0)
			{
				case 1:
					if (func_172(Global_1835011[4 /*74*/].f_1, true))
						unk[0] = -695701225;
					else
						unk[0] = 404503428;
					break;
			
				default:
					unk[0] = 178615350;
					break;
			}
			break;
	
		case 1:
			switch (essParam0)
			{
				case 0:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 1:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = 1818898449;
					endRange = 3;
					break;
			
				case 3:
					if (func_919(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
				
					if (!bParam2)
						unk[0] = -268604689;
					break;
			
				case 4:
					unk[0] = -268604689;
					break;
			
				case 5:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 6:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -268604689;
					unk[0] = -1632589543;
					unk[1] = 1818898449;
					endRange = 3;
					break;
			
				case 8:
					unk[0] = -268604689;
					break;
			
				case 9:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 10:
					if (func_172(Global_1347702[63 /*49*/].f_15, true) || func_576(Global_1347702[63 /*49*/].f_15))
						unk[0] = -268604689;
					else
						unk[0] = -310473775;
					break;
			
				case 11:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -268604689;
					break;
			
				case 15:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 16:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 17:
					if (func_919(num, 9, 12))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
					else
					{
						unk[0] = -268604689;
					}
					break;
			
				case 18:
					if (!func_172(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_619(18, 134217728, true))
					{
						unk[0] = 961676983;
					}
					else
					{
						unk[0] = -1587546924;
					}
					break;
			
				case 19:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -23947011;
					endRange = 3;
					break;
			
				default:
					unk[0] = -268604689;
					break;
			}
			break;
	
		case 2:
		case 3:
			switch (essParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_919(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 5:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 8:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 9:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					unk[4] = 1744281750;
					endRange = 5;
					break;
			
				case 10:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 11:
					if (func_172(Global_1347702[134 /*49*/].f_15, true) || func_576(Global_1347702[134 /*49*/].f_15))
					{
						unk[0] = -2040275819;
						unk[1] = 1205492208;
						endRange = 2;
					}
					else
					{
						unk[0] = -922193456;
					}
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 4:
			switch (essParam0)
			{
				case 2:
					if (func_172(Global_1835011[38 /*74*/].f_1, true))
						unk[0] = -1559986688;
					else
						unk[0] = -1874208704;
					break;
			
				default:
					unk[0] = 1593315648;
					break;
			}
			break;
	
		case 5:
		case 6:
			switch (essParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_919(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = 1295334688;
					endRange = 1;
					break;
			
				case 11:
					unk[0] = -2051275045;
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 7:
			switch (essParam0)
			{
				case 4:
					if (func_920(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_172(Global_1347702[1 /*49*/].f_15, true))
						unk[0] = -1155031950;
					else
						unk[0] = -1341683964;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					endRange = 2;
					break;
			
				case 14:
					unk[0] = -426171916;
					unk[1] = 1484386316;
					unk[2] = 1254970547;
					endRange = 3;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	
		case 8:
			switch (essParam0)
			{
				case 4:
					unk[0] = -1341683964;
					unk[1] = 867156718;
					endRange = 2;
					break;
			
				case 7:
					unk[0] = -1341683964;
					unk[1] = 1484386316;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					unk[2] = 1484386316;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -1092189504;
					unk[1] = 80515440;
					endRange = 2;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	}

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_402(essParam0)))
	{
		for (i = 0; i < endRange; i = i + 1)
		{
			if (unk[i] == Global_40.f_4942[essParam0 /*60*/].f_3)
			{
				flag = true;
				num2 = Global_40.f_4942[essParam0 /*60*/].f_3;
			}
		}
	}

	if (!flag)
	{
		randomIntInRange = 0;
	
		if (endRange > 0 && bParam2)
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		num2 = unk[randomIntInRange];
	}

	if (!func_630(essParam0, num2))
		num2 = Global_40.f_4942[essParam0 /*60*/].f_3;

	return num2;
}

BOOL func_794(int iParam0) // Position - 0x2D059 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
	
		default:
		
	}

	return false;
}

struct<7> func_795(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0x2D086 Hash - 0xDA7D22BD ^0xF82EFD7F
{
	eStackSize stackSize;

	stackSize = essParam0;
	stackSize.f_1 = iParam1;
	stackSize.f_3 = { uParam2 };
	stackSize.f_2 = iParam8;
	stackSize.f_6 = 0;

	if (bParam5)
		MISC::SET_BIT(&(stackSize.f_6), 0);

	if (bParam6)
		MISC::SET_BIT(&(stackSize.f_6), 1);

	if (bParam7)
		MISC::SET_BIT(&(stackSize.f_6), 2);

	if (bParam9)
		MISC::SET_BIT(&(stackSize.f_6), 3);

	return stackSize;
}

void func_796(eStackSize essParam0, BOOL bParam1) // Position - 0x2D0E9 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_613(essParam0))
		return;

	ped = func_402(essParam0);
	func_921(ped);
	func_623(essParam0, 60, true);

	if (bParam1)
		func_922(essParam0);

	return;
}

void func_797(eStackSize essParam0, BOOL bParam1) // Position - 0x2D120 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_613(essParam0))
		return;

	ped = func_402(essParam0);
	func_923(ped);
	func_622(essParam0, 60, true);

	if (bParam1)
		func_924(essParam0);

	return;
}

void func_798(eStackSize essParam0, BOOL bParam1) // Position - 0x2D157 Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_613(essParam0))
		return;

	ped = func_402(essParam0);
	func_925(ped);

	if (essParam0 == 14)
		func_926(ped);

	func_623(essParam0, 61, true);

	if (bParam1)
		func_927(essParam0);

	return;
}

void func_799(eStackSize essParam0, BOOL bParam1) // Position - 0x2D19B Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_613(essParam0))
		return;

	ped = func_402(essParam0);
	func_928(ped);
	func_622(essParam0, 61, true);

	if (bParam1)
		func_929(essParam0);

	return;
}

Ped func_800(Ped pedParam0) // Position - 0x2D1D2 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_801(Ped pedParam0) // Position - 0x2D1DC Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_802(Ped pedParam0) // Position - 0x2D20E Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_803(eStackSize essParam0, int iParam1) // Position - 0x2D250 Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_613(essParam0))
		return false;

	func_930(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_65[num], offset);
}

BOOL func_804(int iParam0) // Position - 0x2D286 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

Hash func_805(int iParam0, eStackSize essParam1) // Position - 0x2D299 Hash - 0xE1D12727 ^0x6E706E61
{
	int num;

	switch (iParam0)
	{
		case -2051275045:
			return -306710010;
	
		case -2040275819:
			return 464906090;
	
		case -1874208704:
			return 1680324116;
	
		case -1862464078:
			return 1895628185;
	
		case -1692022104:
			return -1851470579;
	
		case -1684458716:
			return 1976273473;
	
		case -1678882891:
			return -1638703055;
	
		case -1668922931:
			return -1915831038;
	
		case -1648322231:
			return 1074183062;
	
		case -1642335258:
			return -1491647079;
	
		case -1632589543:
			return 1052055818;
	
		case -1587546924:
			return -1303789247;
	
		case -1559986688:
			return 174754238;
	
		case -1532979576:
			return 1391951221;
	
		case -1414977761:
			return 1059434053;
	
		case -1394723994:
			return -1857650992;
	
		case -1341683964:
			return 1689938120;
	
		case -1335291723:
			return -1120526485;
	
		case -1268239471:
			return -1832874334;
	
		case -1248623443:
			return -1437962122;
	
		case -1205468859:
			return -757536090;
	
		case -1155031950:
			return 1883650185;
	
		case -1114682645:
			return 744097966;
	
		case -1092189504:
			return 389057251;
	
		case -1065026089:
			return 1087308308;
	
		case -973332710:
			return -2045878709;
	
		case -946772361:
			return 646599895;
	
		case -922193456:
			switch (essParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
			
				default:
				
			}
		
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -695701225:
			return -1090160065;
	
		case -571427255:
			return -251280159;
	
		case -481967001:
			return 1833893952;
	
		case -445211559:
			return -757536090;
	
		case -433615745:
			return 643643053;
	
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	
		case -310473775:
			return -877585857;
	
		case -301101630:
			return -1187204983;
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		case -193269670:
			return -1774801049;
	
		case -23947011:
			return -456769142;
	
		case 6418928:
			return -211106360;
	
		case 80515440:
			return -2137653778;
	
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
	
		case 283037683:
			return 1996046145;
	
		case 296923297:
			num = func_931(296923297, essParam1);
			return func_932(num);
	
		case 350498312:
			return 1959714099;
	
		case 404503428:
			return -1704514526;
	
		case 431390894:
			return -20643141;
	
		case 513932985:
			return 505715365;
	
		case 707545953:
			return 890352471;
	
		case 713940276:
			return -1949892659;
	
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
	
		case 837028314:
			return -20984612;
	
		case 867156718:
			return 241911854;
	
		case 876535472:
			return -1916145078;
	
		case 876797088:
			return 1309207681;
	
		case 928493661:
			return 861275228;
	
		case 961676983:
			return -1527307534;
	
		case 977450639:
			return 2111449038;
	
		case 1018353621:
			return 114272443;
	
		case 1046468203:
			return 393090546;
	
		case 1071744295:
			return -2065784734;
	
		case 1199580439:
			return -1443192745;
	
		case 1200878026:
			return 1560123389;
	
		case 1205492208:
			return 1598276604;
	
		case 1237718549:
			num = func_931(1237718549, essParam1);
			return func_932(num);
	
		case 1254970547:
			return -211106360;
	
		case 1295334688:
			return 869636257;
	
		case 1300659195:
			return -309158751;
	
		case 1484386316:
			return -800489594;
	
		case 1495063555:
			return -339275545;
	
		case 1593315648:
			return 989578874;
	
		case 1658153743:
			return -2072429185;
	
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
	
		case 1818898449:
			return 30596609;
	
		case 1842975347:
			return 491764525;
	
		case 1901494236:
			return 1245083301;
	
		case 1950972546:
			return -1699183538;
	
		case 2062813606:
			return 1709174532;
	
		case 2094043703:
			return -1395382793;
	}

	return joaat("META_OUTFIT_DEFAULT");
}

BOOL func_806(Ped pedParam0, Hash hParam1) // Position - 0x2D73B Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_807(Ped pedParam0, Hash hParam1) // Position - 0x2D769 Hash - 0xA54F3032 ^0x7FBD1B44
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_808(Ped pedParam0, Hash hParam1) // Position - 0x2D7BA Hash - 0xA54F3032 ^0x7FBD1B44
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_806(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_809(Ped pedParam0) // Position - 0x2D82C Hash - 0x446F1BDD ^0x2ADE256
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_810(eStackSize essParam0, Ped pedParam1, BOOL bParam2) // Position - 0x2D84A Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1 > 0 && func_806(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4096 > 0 && func_806(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MICRO > 0 && func_806(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 256 > 0 && func_806(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MINI > 0 && func_806(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1024 > 0 && func_806(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2048 > 0 && func_806(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & -2147483648 > 0 && func_806(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 65536 > 0 && func_806(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16384 > 0 && func_806(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 262144 > 0 && func_806(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 524288 > 0 && func_806(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1048576 > 0 && func_806(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2097152 > 0 && func_806(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 32768 > 0 && func_806(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 131072 > 0 && func_806(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4194304 > 0 && func_806(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8388608 > 0 && func_806(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16777216 > 0 && func_806(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 33554432 > 0 && func_806(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 67108864 > 0 && func_806(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 134217728 > 0 && func_806(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 268435456 > 0 && func_806(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 536870912 > 0 && func_806(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1073741824 > 0 && func_806(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8192 > 0 && func_806(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_57 = 1;

	return;
}

void func_811(eStackSize essParam0) // Position - 0x2DE28 Hash - 0x83966A8E ^0x24FDDDED
{
	func_933(essParam0, 1);
	func_933(essParam0, MICRO);
	func_933(essParam0, 256);
	func_933(essParam0, MINI);
	func_933(essParam0, 1024);
	func_933(essParam0, 2048);
	func_933(essParam0, 4096);
	func_933(essParam0, 65536);
	func_933(essParam0, 16384);
	func_933(essParam0, 262144);
	func_933(essParam0, 524288);
	func_933(essParam0, 1048576);
	func_933(essParam0, 2097152);
	func_933(essParam0, 32768);
	func_933(essParam0, 131072);
	func_933(essParam0, 134217728);
	func_933(essParam0, 1073741824);
	return;
}

void func_812(eStackSize essParam0, BOOL bParam1) // Position - 0x2DED1 Hash - 0xA7580A6E ^0x52B466A
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		return;

	if (!bParam1)
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[essParam0 /*1157*/], "wearing_bandana"))
			DECORATOR::DECOR_REMOVE(Global_1360165[essParam0 /*1157*/], "wearing_bandana");
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[essParam0 /*1157*/], "wearing_bandana"))
		DECORATOR::DECOR_SET_BOOL(Global_1360165[essParam0 /*1157*/], "wearing_bandana", true);

	return;
}

void func_813(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2DF44 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

Hash func_814(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x2DF6A Hash - 0xAB9CFACB ^0x8DB6D77C
{
	Hash weaponHash;
	Hash weapontypeGroup;
	Hash defaultPedWeaponCollection;
	Hash hashKey;
	Hash hash;
	var string1;
	BOOL flag;
	BOOL bIgnoreUnlocks;
	int pedAmmoByType;
	int num;
	float permanentDegradation;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	switch (hParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("group_revolver"):
		case joaat("group_repeater"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			weaponHash = WEAPON::_0xF8204EF17410BF43(hParam1, iParam7, iParam8, 0);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponHash))
				weaponHash = joaat("WEAPON_UNARMED");
			break;
	
		default:
			if (!WEAPON::IS_WEAPON_VALID(hParam1))
				return hParam1;
		
			weaponHash = hParam1;
		
			if (WEAPON::IS_WEAPON_A_GUN(weaponHash) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
			{
				TEXT_LABEL_ASSIGN_STRING(&string1, WEAPON::_GET_WEAPON_NAME(weaponHash), 128);
				defaultPedWeaponCollection = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(pedParam0));
			
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&string1, "_DUALWIELD"))
				{
					TEXT_LABEL_ASSIGN_STRING(&string1, HUD::_0x806862E5D266CF38(&string1, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&string1) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD")), 128);
					hashKey = MISC::GET_HASH_KEY(&string1);
				
					if (func_934(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_934(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_27() == -1 && !func_935(weaponHash))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, weaponHash, 0, false) && pedParam0 != Global_35)
		{
			bIgnoreUnlocks = true;
		}
		else if (hash == weaponHash && !Global_43891 && pedParam0 != Global_35 && PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
		{
			bIgnoreUnlocks = true;
		}
		else
		{
			weaponHash = WEAPON::_0xF8204EF17410BF43(hParam1, iParam7, iParam8, 0);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponHash))
				weaponHash = joaat("WEAPON_UNARMED");
		}
	}

	if (weaponHash == joaat("WEAPON_UNARMED") && hParam1 == joaat("WEAPON_UNARMED"))
	{
		return weaponHash;
	}
	else if (weaponHash == joaat("WEAPON_UNARMED"))
	{
		switch (hParam1)
		{
			case joaat("GROUP_SNIPER"):
			case joaat("group_repeater"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_935(joaat("weapon_repeater_carbine")))
					weaponHash = joaat("weapon_repeater_carbine");
				else
					weaponHash = joaat("weapon_revolver_cattleman");
				break;
		
			case joaat("group_revolver"):
			case joaat("GROUP_PISTOL"):
				weaponHash = joaat("weapon_revolver_cattleman");
				break;
		
			default:
				weaponHash = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (weaponHash == joaat("weapon_melee_lantern") && pedParam0 == Global_35)
	{
		weaponHash = joaat("weapon_melee_davy_lantern");
	}

	if (iParam9 < 0)
	{
		if (pedParam0 != Global_35 && func_934(weaponHash))
		{
			WEAPON::GET_MAX_AMMO(pedParam0, &iParam9, weaponHash);
		
			if (iParam9 < 0)
				iParam9 = 0;
		}
		else if (!WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash) && weaponHash != joaat("WEAPON_UNARMED") && !WEAPON::_IS_WEAPON_LANTERN(weaponHash))
		{
			pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(pedParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(pedParam0, weaponHash));
			num = WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 3;
			iParam9 = num - pedAmmoByType;
		
			if (iParam9 < 0)
				iParam9 = 0;
		}
		else
		{
			iParam9 = 0;
		}
	}

	if (bParam6 && bParam2)
		bParam5 = false;

	if (pedParam0 == Global_35)
	{
		func_936(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_937(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_938(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

void func_815(var uParam0, float fParam1) // Position - 0x2E316 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_612() - fParam1;
	func_939(uParam0, 1);
	func_940(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_816(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x2E33C Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return true;
	}
	else
	{
		bParam7;
	}

	return false;
}

int func_817(int iParam0) // Position - 0x2E36C Hash - 0x696B5244 ^0x696B5244
{
	switch (iParam0)
	{
		case joaat("MOOD_JACK"):
			return 26;
	
		case joaat("MOOD_SEAN"):
			return 21;
	
		case joaat("MOOD_PEARSON"):
			return 29;
	
		case joaat("event"):
			return 6;
	
		case joaat("Griefing"):
			return 4;
	
		case joaat("MOOD_KAREN"):
			return 32;
	
		case joaat("MOOD_TRELAWNY"):
			return 35;
	
		case joaat("MOOD_ABIGAIL"):
			return 25;
	
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
	
		case joaat("MOOD_SWANSON"):
			return 33;
	
		case joaat("MOOD_JAVIER"):
			return 15;
	
		case joaat("MOOD_ARTHUR"):
			return 12;
	
		case 1871598:
			return 9;
	
		case joaat("MOOD_LENNY"):
			return 22;
	
		case joaat("MOOD_TILLY"):
			return 34;
	
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
	
		case joaat("MOOD_UNCLE"):
			return 17;
	
		case joaat("MOOD_DUTCH"):
			return 13;
	
		case joaat("ARRANGEMENT"):
			return 2;
	
		case joaat("base"):
			return 1;
	
		case joaat("SUPPLY"):
			return 3;
	
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
	
		case joaat("MOOD_HOSEA"):
			return 18;
	
		case joaat("MOOD_BILL"):
			return 16;
	
		case joaat("MOOD_MARY_BETH"):
			return 27;
	
		case joaat("MOOD_CHARLES"):
			return 20;
	
		case joaat("MOOD_STRAUSS"):
			return 30;
	
		case joaat("MOOD_ODRISCOLL"):
			return 23;
	
		case joaat("MOOD_MICAH"):
			return 19;
	
		case joaat("Vignette"):
			return 10;
	
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
	
		case joaat("flow"):
			return 7;
	
		case joaat("MOOD_JOHN"):
			return 14;
	
		case joaat("VIG_CAMP_ONLY"):
			return 11;
	
		default:
		
	}

	return 0;
}

BOOL func_818(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x2E4ED Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

void func_819(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2E513 Hash - 0xA65AB937 ^0xA65AB937
{
	func_941(uParam0, iParam6);
	func_942(uParam0, iParam5);
	func_943(uParam0, iParam4);
	func_944(uParam0, iParam3);
	func_945(uParam0, iParam2);
	func_946(uParam0, iParam1);
	return;
}

int func_820(int iParam0, var uParam1, var uParam2) // Position - 0x2E54B Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_947(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_821(int iParam0) // Position - 0x2E56D Hash - 0xE426C523 ^0x42DA665A
{
	*iParam0 = 176656832;
	iParam0->f_1 = -15;
	iParam0->f_2 = 1017034651;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return;
}

BOOL func_822(int iParam0, int iParam1) // Position - 0x2E597 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_823(eStackSize essParam0) // Position - 0x2E5A7 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_613(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_948(essParam0);
	
		if (hash != 0)
		{
			Global_1360165[essParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(hash);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[essParam0 /*1157*/].f_1 = 0;
		}
	}

	return;
}

void func_824(eStackSize essParam0) // Position - 0x2E60F Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_410(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_402(essParam0)))
		{
			func_639(essParam0, 67108864, true);
			func_622(essParam0, 19, true);
		}
	}

	return;
}

BOOL func_825(eStackSize essParam0) // Position - 0x2E642 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_410(essParam0))
		return false;

	if (!func_413(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_826(eStackSize essParam0) // Position - 0x2E676 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_613(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_827(eStackSize essParam0) // Position - 0x2E697 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_402(essParam0);
	persChar = func_651(essParam0, false);
	func_949(essParam0, ped);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			flag = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
		}
	
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		if (flag)
			PED::_UNRESERVE_AMBIENT_PEDS(1);
	}

	PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
	return;
}

BOOL func_828(eStackSize essParam0) // Position - 0x2E6F1 Hash - 0x6410553A ^0x46627D03
{
	if (!func_613(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_829(eStackSize essParam0) // Position - 0x2E73D Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_613(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_830(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x2E765 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_613(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_831(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2E7CA Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_613(essParam0))
		return 0;

	mount = func_656(essParam0);

	if (func_369(mount, 0))
	{
		if (func_369(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_828(essParam0) || func_829(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_950(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_951(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_952(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_953(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_953(essParam0, false));
					func_954(essParam0);
				}
			}
			else
			{
				if (func_619(essParam0, 32768, true))
				{
					persChar = func_953(essParam0, false);
					PERSCHAR::_0xB65E7F733956CF25(persChar);
					PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&mount);
				}
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(mount, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_369(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_619(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_952(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_953(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_953(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_952(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_955(essParam0, 0);
	return 1;
}

BOOL func_832(int iParam0) // Position - 0x2E97B Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

int func_833() // Position - 0x2E998 Hash - 0x990ADDDC ^0x7D78C12
{
	Hash hash;

	hash = func_956();

	if (hash <= -320)
		return -320;

	if (hash <= -280)
		return -280;

	if (hash <= -240)
		return -240;

	if (hash <= -200)
		return -200;

	if (hash <= -160)
		return -160;

	if (hash <= -120)
		return -120;

	if (hash <= -80)
		return -80;

	if (hash <= -40)
		return -40;

	if (hash >= 320)
		return 320;

	if (hash >= 280)
		return 280;

	if (hash >= 240)
		return 240;

	if (hash >= 200)
		return 200;

	if (hash >= 160)
		return 160;

	if (hash >= 120)
		return 120;

	if (hash >= 80)
		return 80;

	if (hash >= 40)
		return 40;

	return 0;
}

int func_834(int iParam0) // Position - 0x2EAAB Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_27() != -1)
		return iParam0;

	if (Global_1347477.f_2 + 120000 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}

	num = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3 = Global_1347477.f_3 + 1;

	if (Global_1347477.f_3 >= 10)
		num = 2f;
	else if (Global_1347477.f_3 >= 3)
		num = 1.5f;

	value = BUILTIN::TO_FLOAT(iParam0) * num;
	value = MISC::ABSF(value) < 1f ? value < 0f ? -1f : 1f : value;
	return BUILTIN::CEIL(value);
}

Hash func_835(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x2EB50 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (hParam0 > hParam2)
		return hParam2;
	else if (hParam0 < hParam1)
		return hParam1;

	return hParam0;
}

int func_836(int iParam0) // Position - 0x2EB75 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case -320:
		case 320:
			return 8;
	
		case -280:
		case 280:
			return 7;
	
		case -240:
		case 240:
			return 6;
	
		case -200:
		case 200:
			return 5;
	
		case -160:
		case 160:
			return 4;
	
		case -120:
		case 120:
			return 3;
	
		case -80:
		case 80:
			return 2;
	
		case -40:
		case 40:
			return 1;
	
		case 0:
			return 0;
	}

	return 0;
}

Hash func_837() // Position - 0x2EC2C Hash - 0xA46C8CCA ^0x71ABACD2
{
	if (Global_40.f_11095.f_35 <= -320)
		return 1;
	else if (Global_40.f_11095.f_35 <= -280)
		return 2;
	else if (Global_40.f_11095.f_35 <= -240)
		return 3;
	else if (Global_40.f_11095.f_35 <= -200)
		return 4;
	else if (Global_40.f_11095.f_35 <= -160)
		return 5;
	else if (Global_40.f_11095.f_35 <= -120)
		return 6;
	else if (Global_40.f_11095.f_35 <= -80)
		return 7;
	else if (Global_40.f_11095.f_35 < 0)
		return 8;
	else if (Global_40.f_11095.f_35 <= 40)
		return 9;
	else if (Global_40.f_11095.f_35 >= 320)
		return 16;
	else if (Global_40.f_11095.f_35 >= 280)
		return 15;
	else if (Global_40.f_11095.f_35 >= 240)
		return 14;
	else if (Global_40.f_11095.f_35 >= 200)
		return 13;
	else if (Global_40.f_11095.f_35 >= 160)
		return 12;
	else if (Global_40.f_11095.f_35 >= 120)
		return 11;
	else if (Global_40.f_11095.f_35 >= 80)
		return 10;

	return 9;
}

void func_838(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2ED84 Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_958(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_959(hParam0);
	return;
}

void func_839(Hash hParam0) // Position - 0x2EDB0 Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_960(hParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_840(BOOL bParam0) // Position - 0x2EE14 Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_961(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_962(i, &hash, &num))
			{
				if (!func_883(hash, 0))
				{
				}
				else
				{
					unlockHash = func_963(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_889(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_833() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_833() >= 160;
					else
						flag = num == func_964();
				
					if (flag)
					{
						UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
						flag = false;
					}
				}
			}
		}
	}

	return;
}

void func_841(var uParam0, var uParam1, int iParam2) // Position - 0x2EED5 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(int iParam0) // Position - 0x2EEE5 Hash - 0xA17D549C ^0xD7122CE2
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
	
		case joaat("honor_event_antagonize"):
			return "HONOR_EVENT_ANTAGONIZE";
	
		case joaat("honor_event_cruel_death"):
			return "HONOR_EVENT_CRUEL_DEATH";
	
		case joaat("honor_event_cheat"):
			return "HONOR_EVENT_CHEAT";
	
		case joaat("honor_event_steal_wagon"):
			return "HONOR_EVENT_STEAL_WAGON";
	
		case joaat("honor_event_trampled_innocent"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
	
		case joaat("honor_event_kill_vermin"):
			return "HONOR_EVENT_KILL_VERMIN";
	
		case joaat("honor_event_kill_farm_animal"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
	
		case joaat("honor_event_long_absence"):
			return "HONOR_EVENT_LONG_ABSENCE";
	
		case joaat("honor_event_wanted_in_camp"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
	
		case joaat("honor_event_animal_bleedout"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
	
		case joaat("honor_event_steal_mule"):
			return "HONOR_EVENT_STEAL_MULE";
	
		case joaat("honor_event_theft"):
			return "HONOR_EVENT_THEFT";
	
		case joaat("honor_event_kill_horse"):
			return "HONOR_EVENT_KILL_HORSE";
	
		case joaat("honor_event_justice_served"):
			return "HONOR_EVENT_JUSTICE_SERVED";
	
		case joaat("honor_event_steal_donkey"):
			return "HONOR_EVENT_STEAL_DONKEY";
	
		case joaat("honor_event_steal_horse"):
			return "HONOR_EVENT_STEAL_HORSE";
	
		case joaat("honor_event_ambient_kill"):
			return "HONOR_EVENT_AMBIENT_KILL";
	
		case joaat("honor_event_item_request"):
			return "HONOR_EVENT_ITEM_REQUEST";
	
		case joaat("honor_event_ambient_ko"):
			return "HONOR_EVENT_AMBIENT_KO";
	
		case joaat("honor_event_intervened"):
			return "HONOR_EVENT_INTERVENED";
	
		case joaat("honor_event_scare"):
			return "HONOR_EVENT_SCARE";
	
		case joaat("honor_event_donated_game"):
			return "HONOR_EVENT_DONATED_GAME";
	
		case joaat("honor_event_loot_innocent"):
			return "HONOR_EVENT_LOOT_INNOCENT";
	
		default:
		
	}

	return "";
}

int func_843(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x2F030 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_965(sParam0, sParam1, hParam2);
	return num2;
}

eStackSize func_844(Hash hParam0) // Position - 0x2F093 Hash - 0x28677675 ^0xD6005963
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[hParam0 /*4*/];

	return Global_42606[hParam0 /*4*/];
}

BOOL func_845(float fParam0, var uParam1, var uParam2) // Position - 0x2F0B9 Hash - 0xEEEBBA53 ^0xA3D9EE1A
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

void func_846(Hash hParam0, int iParam1) // Position - 0x2F10E Hash - 0x90093024 ^0x9F0138E8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[hParam0 /*4*/].f_3 = iParam1;
		return;
	}

	Global_42606[hParam0 /*4*/].f_3 = iParam1;
	return;
}

BOOL func_847(eStackSize essParam0) // Position - 0x2F13F Hash - 0x8B6BCE55 ^0x3DE210C4
{
	if (!func_207(essParam0))
		return false;

	if (Global_1894899.f_8)
		return false;

	return Global_1888801[essParam0 /*35*/].f_19;
}

void func_848(eStackSize essParam0) // Position - 0x2F16C Hash - 0xC8A7746F ^0x5D69167
{
	if (essParam0 != -1 && Global_1894899.f_2 != essParam0)
		TELEMETRY::_TELEMETRY_REGION(func_506(essParam0));

	Global_1894899.f_2 = essParam0;
	return;
}

void func_849(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2F19B Hash - 0x4464293B ^0x680D2F86
{
	if (Global_1327479.f_9)
		return;

	Global_1327479.f_4 = Global_1327479.f_4 + (iParam0 * 1000);

	if (bParam2)
		Global_1310750.f_16106 = { Global_36 };

	if (iParam1 == 0)
		if (iParam0 > 0)
			Global_1327479.f_5 = MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2);
		else
			Global_1327479.f_5 = Global_1327479.f_5 + (iParam0 * 500);
	else
		Global_1327479.f_5 = MISC::GET_GAME_TIMER() + (iParam1 * 1000);

	return;
}

void func_850(Hash hParam0) // Position - 0x2F220 Hash - 0x3EC08B2C ^0x99995BB2
{
	int num;

	if (Global_1934266.f_26 == hParam0 || hParam0 == 0 || hParam0 == joaat("LAW_REGION_VALENTINE_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_VALENTINE") || hParam0 == joaat("LAW_REGION_RHODES_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_RHODES") || Global_1934266.f_26 == 0)
	{
		num = func_195();
		func_395(func_394(num, true), -1);
	}

	return;
}

void func_851() // Position - 0x2F29C Hash - 0xC70365F7 ^0xC70365F7
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_789(i))
			Global_1898130[i] = -1;
	}

	return;
}

BOOL func_852(eStackSize essParam0, BOOL bParam1) // Position - 0x2F2C9 Hash - 0x44DB51D8 ^0x4C89BE8
{
	int num;
	int num2;
	int num3;
	eStackSize stackSize;

	if (func_966(essParam0))
		return false;

	if (func_27() == -1)
	{
		if (func_72(6206, true, true))
		{
			num = func_76(0);
			num2 = func_111(num);
			return false;
		}
	
		if (bParam1)
		{
			if (func_98() == essParam0)
				return false;
		
			switch (essParam0)
			{
				case 9:
					break;
			
				case 36:
					if (!func_523(63))
						return false;
				
					if (func_70(76) || func_342())
						return false;
					break;
			
				case 114:
					if (!func_303())
						return false;
				
					if (func_968(20, false))
						return false;
					break;
			
				case 125:
					if (!func_967())
						return false;
					break;
			
				case 129:
					if (!func_303())
						return false;
				
					if (func_968(19, false))
						return false;
					break;
			}
		}
	}
	else if (func_27() == false)
	{
		return false;
	}
	else
	{
		return false;
	}

	if (func_210(essParam0, 256))
		return false;

	if (bParam1)
	{
		num3 = func_969(essParam0);
	
		if (!func_46(num3))
			return false;
	
		stackSize = func_970(num3);
	
		if (func_971(stackSize))
		{
			func_643(&stackSize, 0, 0, 0, 5, 0, 0, false);
		
			if (!func_972(stackSize, true))
				return false;
		}
	}

	return true;
}

void func_853(BOOL bParam0) // Position - 0x2F423 Hash - 0xF265C2CE ^0xF265C2CE
{
	if (bParam0)
		Global_1894899 = Global_1894899 | 4;
	else
		Global_1894899 = Global_1894899 - Global_1894899 & 4;

	return;
}

BOOL func_854() // Position - 0x2F44C Hash - 0x909E3CC8 ^0x909E3CC8
{
	if (func_973() == 10 || func_973() == 11 || func_973() == 12 || func_973() == 13 || func_973() == 14)
		return true;

	return false;
}

struct<8> func_855(eStackSize essParam0) // Position - 0x2F497 Hash - 0xDD21B324 ^0x25AEA310
{
	var unk;

	TEXT_LABEL_COPY(&unk, { Global_1888801[essParam0 /*35*/].f_23 }, 8);

	if (func_27() == -1)
	{
		if (essParam0 == func_98())
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(func_357()), 64);
			return unk;
		}
	}

	switch (Global_1888801[essParam0 /*35*/].f_20)
	{
		case 3:
			if (func_27() == -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "hideout_", 64);
				TEXT_LABEL_APPEND_STRING(&unk, &(Global_1888801[essParam0 /*35*/].f_23), 64);
			
				if (func_345(45))
				{
					if (essParam0 == 16)
						TEXT_LABEL_APPEND_STRING(&unk, "_es", 64);
				
					if (func_975(essParam0))
						TEXT_LABEL_COPY(&unk, { Global_1888801[essParam0 /*35*/].f_23 }, 8);
				}
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
			}
			break;
	
		case 4:
			if (func_27() != -1)
				TEXT_LABEL_ASSIGN_STRING(&unk, "generic_ghosttown", 64);
			else if (func_975(essParam0) && func_345(45))
				TEXT_LABEL_COPY(&unk, { Global_1888801[essParam0 /*35*/].f_23 }, 8);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk, "generic_ghosttown", 64);
			break;
	
		case 5:
		case 9:
			TEXT_LABEL_COPY(&unk, { Global_1888801[essParam0 /*35*/].f_23 }, 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "generic_ghosttown", 64);
			break;
	
		case 7:
			TEXT_LABEL_COPY(&unk, { Global_1888801[essParam0 /*35*/].f_23 }, 8);
			break;
	
		case 8:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "event_area_", 64);
				TEXT_LABEL_APPEND_STRING(&unk, &(Global_1888801[essParam0 /*35*/].f_23), 64);
			}
			break;
	}

	return unk;
}

void func_856(eStackSize essParam0, BOOL bParam1) // Position - 0x2F61C Hash - 0x1E78A51E ^0x8BB44A98
{
	if (Global_1572887.f_10 && func_27() == false)
		return;

	if (func_39(128))
		return;

	if (!func_976(essParam0))
		return;

	if (func_210(essParam0, 32))
		return;

	func_322(essParam0, 32);
	func_218(&Global_1935630, 8192);
	func_841(func_742(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_283(essParam0))
	{
		case 0:
		case 2:
		case 11:
			func_841(func_742(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_841(func_742(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_841(func_742(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_841(func_742(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_841(func_742(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_841(func_742(joaat("discovered"), joaat("new_austin_areas")), 1);
			break;
	}

	switch (essParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_CRAWDAD_WILLIES"));
			break;
	
		case 1:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MACOMBS_END"));
			break;
	
		case 2:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MERKINS_WALLER"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FISHING_SPOT"));
			break;
	
		case 6:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HAGEN_ORCHARDS"));
			break;
	
		case 7:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SERIAL_KILLER"));
			break;
	
		case 9:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SHADY_BELLE"));
			break;
	
		case 10:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			break;
	
		case 11:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_APPLESEED_TIMBER_COMPANY"));
			break;
	
		case 12:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BERYLS_DREAM"));
			break;
	
		case 15:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_FORT_RIGGS"));
			break;
	
		case 16:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HANGING_DOG_RANCH"));
			break;
	
		case 17:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LONE_MULE_STEAD"));
			break;
	
		case 21:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_PAINTED_SKY"));
			break;
	
		case 22:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SETTLEMENT_PRONGHORN_RANCH"));
			break;
	
		case 24:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_STILT_SHACK"));
			break;
	
		case 25:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_SHEPHERDS_RISE"));
			break;
	
		case 26:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TAXIDERMIST_HOUSE"));
			break;
	
		case 27:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VALLEY_VIEW"));
			break;
	
		case 28:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_WALLACE_OVERLOOK"));
			break;
	
		case 29:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WATSONS_CABIN"));
			break;
	
		case 30:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_CANEBREAK_MANOR"));
			break;
	
		case 31:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COPPERHEAD_LANDING"));
			break;
	
		case 34:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FIRWOOD_RISE"));
			break;
	
		case 36:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SIX_POINT_CABIN"));
			break;
	
		case 37:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BEECHERS_HOPE"));
			break;
	
		case 40:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ADLER_RANCH"));
			break;
	
		case 42:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CHEZ_PORTER"));
			break;
	
		case 43:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_COLTER"));
			break;
	
		case 44:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_FROZEN_EXPLORERS"));
			break;
	
		case 45:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MILLESANI_CLAIM"));
			break;
	
		case 49:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_EWING_BASIN"));
			break;
	
		case 54:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_THE_LOFT"));
			break;
	
		case 55:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VETERANS_HOMESTEAD"));
			break;
	
		case 62:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_OLD_GREENBANK_MILL"));
			break;
	
		case 63:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_BEECHERS_C"));
			break;
	
		case 64:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CARMODY_DELL"));
			break;
	
		case 65:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR"));
			break;
	
		case 66:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_GUTHRIE_FARM"));
			break;
	
		case 68:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOWNES_RANCH"));
			break;
	
		case 71:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK"));
			break;
	
		case 72:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LARNED_SOD"));
			break;
	
		case 74:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LUCKYS_CABIN"));
			break;
	
		case 77:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM"));
			break;
	
		case 79:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_BEAVER_HOLLOW"));
			break;
	
		case 80:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BLACK_BALSAM_RISE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_01"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_02"));
			break;
	
		case 82:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BUTCHER_CREEK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_POISON_LEAK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_29"));
			break;
	
		case 83:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOVERHILL"));
			break;
	
		case 85:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_ANGRY_ISOLATIONIST"));
			break;
	
		case 86:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_MACLEANS_HOUSE"));
			break;
	
		case 87:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MOSSY_FLATS"));
			break;
	
		case 89:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WILLARDS_REST"));
			break;
	
		case 91:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
	
		case 96:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CATFISH_JACKSONS"));
			break;
	
		case 98:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_CLEMENS_POINT"));
			break;
	
		case 99:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COMPSONS_STEAD"));
			break;
	
		case 100:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HILL_HAVEN_RANCH"));
			break;
	
		case 102:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LONNIES_SHACK"));
			break;
	
		case 104:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_PASTURE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_HOUSE"));
			break;
	
		case 106:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SLAVE_PEN"));
			break;
	
		case 107:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_AURORA_BASIN"));
			break;
	
		case 109:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COCHINAY"));
			break;
	
		case 112:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TANNERS_REACH"));
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	
		case 114:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_GAPTOOTH_BREACH"));
			break;
	
		case 121:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_COOTS_CHAPEL"));
			break;
	
		case 122:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE"));
			break;
	
		case 123:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RILEYS_CHARGE"));
			break;
	
		case 124:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM"));
			break;
	}

	if (bParam1)
		func_322(essParam0, 64);

	return;
}

int func_857() // Position - 0x2FC91 Hash - 0xF0AA04BD ^0x32A5DDEA
{
	if (func_27() != -1)
		return 0;

	return func_519(joaat("FAME"));
}

void func_858(eStackSize essParam0) // Position - 0x2FCAE Hash - 0x55F905C1 ^0xBC6667AD
{
	if (func_977(essParam0))
	{
		if (!func_978(essParam0) && !func_73(PLAYER::PLAYER_ID(), true, false, true))
		{
			if (!func_979(285))
				func_980(285, false);
		
			func_981(essParam0, true);
		}
	
		if (Global_1934266.f_69 != 0.75f && !func_73(PLAYER::PLAYER_ID(), true, false, true))
		{
			Global_1934266.f_69 = 0.75f;
			LAW::SET_LAW_SENSE_RANGE_MODIFIER(PLAYER::PLAYER_ID(), Global_1934266.f_69);
		}
	}
	else if (Global_1934266.f_69 != 1f)
	{
		Global_1934266.f_69 = 1f;
		LAW::SET_LAW_SENSE_RANGE_MODIFIER(PLAYER::PLAYER_ID(), Global_1934266.f_69);
	}

	return;
}

BOOL func_859() // Position - 0x2FD50 Hash - 0x40F24C4C ^0x4A8198E9
{
	return Global_1935630.f_44 == joaat("weapon_fishingrod");
}

BOOL func_860() // Position - 0x2FD64 Hash - 0xE60E7B79 ^0xC69D9C8F
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1900073, false))
		return 1;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fishing_core")) > 0)
		return 1;

	return 0;
}

BOOL func_861(int iParam0, int iParam1) // Position - 0x2FD8E Hash - 0xA4A04955 ^0x863EFD0E
{
	return func_318(Global_1900073.f_2[iParam0], iParam1);
}

int func_862(int iParam0) // Position - 0x2FDA6 Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_863(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

int func_863(int iParam0) // Position - 0x2FDD9 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

int func_864(eStackSize essParam0, int iParam1) // Position - 0x2FDF2 Hash - 0x8A1A59F3 ^0x8A1A59F3
{
	if (iParam1 == 11)
		return 101;
	else if (iParam1 == 32)
		return 126;
	else if (iParam1 == 34)
		return 127;

	switch (essParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
			
				case 31:
					return 118;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
			
				case 6:
					return 143;
			
				case 26:
					return 142;
			
				case 27:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 39;
			
				case 1:
					return 46;
			
				case 2:
					return 45;
			
				case 3:
					return 42;
			
				case 4:
					return 41;
			
				case 6:
					return 43;
			
				case 7:
					return 47;
			
				case 8:
					return 37;
			
				case 9:
					return 44;
			
				case 10:
					return 38;
			
				case 12:
					return 48;
			
				case 13:
					return 49;
			
				case 14:
					return 50;
			
				case 15:
					return 36;
			
				case 18:
					return 55;
			
				case 21:
					return 54;
			
				case 22:
					return 51;
			
				case 29:
					return 109;
			
				case 30:
					return 110;
			
				case 31:
					return 111;
			
				case 33:
					return 52;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
			
				case 6:
					return 147;
			
				case 19:
					return 58;
			
				case 26:
					return 146;
			
				case 27:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 24;
			
				case 2:
					return 23;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 65;
			
				case 3:
					return 61;
			
				case 9:
					return 63;
			
				case 10:
					return 60;
			
				case 20:
					return 62;
			
				case 22:
					return 64;
			
				case 29:
					return 114;
			
				case 31:
					return 115;
			
				case 33:
					return 66;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 88;
			
				case 2:
					return 89;
			
				case 3:
					return 87;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 7;
			
				case 7:
					return 17;
			
				case 8:
					return 9;
			
				case 9:
					return 13;
			
				case 10:
					return 10;
			
				case 15:
					return 6;
			
				case 21:
					return 12;
			
				case 22:
					return 16;
			
				case 29:
					return 106;
			
				case 30:
					return 107;
			
				case 31:
					return 108;
			
				case 33:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
			
				default:
					break;
			}
			break;
	
		case 69:
			switch (iParam1)
			{
				case 1:
					return 21;
			
				case 2:
					return 20;
			
				case 3:
					return 19;
			
				case 4:
					return 18;
			
				case 31:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
			
				case 6:
					return 139;
			
				case 19:
					return 56;
			
				case 26:
					return 138;
			
				case 27:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 73;
			
				case 1:
					return 78;
			
				case 2:
					return 77;
			
				case 3:
					return 74;
			
				case 6:
					return 75;
			
				case 8:
					return 69;
			
				case 9:
					return 76;
			
				case 10:
					return 72;
			
				case 15:
					return 68;
			
				case 20:
					return 79;
			
				case 22:
					return 80;
			
				case 29:
					return 102;
			
				case 30:
					return 103;
			
				case 31:
					return 104;
			
				case 33:
					return 70;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 1:
					return 3;
			
				case 2:
					return 2;
			
				case 6:
					return 0;
			
				case 22:
					return 1;
			
				case 29:
					return 120;
			
				case 31:
					return 121;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
			
				case 6:
					return 130;
			
				case 19:
					return 59;
			
				case 26:
					return 129;
			
				case 27:
					return 131;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
			
				default:
					break;
			}
			break;
	
		case 90:
		case MICRO:
			switch (iParam1)
			{
				case 18:
					return 34;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 1:
					return 85;
			
				case 2:
					return 86;
			
				case 4:
					return 82;
			
				case 9:
					return 84;
			
				case 30:
					return 116;
			
				case 31:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
			
				case 6:
					return 134;
			
				case 19:
					return 57;
			
				case 26:
					return 133;
			
				case 27:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 1:
					return 31;
			
				case 2:
					return 30;
			
				case 3:
					return 28;
			
				case 4:
					return 27;
			
				case 6:
					return 29;
			
				case 10:
					return 26;
			
				case 15:
					return 25;
			
				case 22:
					return 32;
			
				case 29:
					return 112;
			
				case 31:
					return 113;
			
				case 33:
					return 33;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 3:
					return 90;
			
				case 6:
					return 91;
			
				case 9:
					return 94;
			
				case 10:
					return 92;
			
				case 33:
					return 93;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 99;
			
				case 31:
					return 123;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 2:
					return 96;
			
				case 3:
					return 95;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

int func_865(int iParam0) // Position - 0x30608 Hash - 0xB8EC44B7 ^0x92674BDE
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_newspaper_boy");
	
		case 2:
			return joaat("shop_asb_post_office");
	
		case 3:
			return joaat("shop_asb_train_station");
	
		case 4:
			return 548657065;
	
		case 5:
			return 243086140;
	
		case 6:
			return joaat("shop_blk_bank");
	
		case 7:
			return joaat("shop_blk_general_store");
	
		case 8:
			return joaat("shop_blk_gunsmith");
	
		case 9:
			return joaat("shop_blk_barber");
	
		case 10:
			return joaat("shop_blk_butcher");
	
		case 11:
			return joaat("shop_blk_bartender");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("shop_blk_newspaper_boy");
	
		case 17:
			return joaat("shop_blk_tailor");
	
		case 18:
			return joaat("shop_emr_fence");
	
		case 19:
			return joaat("shop_emr_general_store");
	
		case 20:
			return joaat("shop_emr_post_office");
	
		case 21:
			return joaat("shop_emr_train_station");
	
		case 22:
			return joaat("shop_lag_bait_store");
	
		case 23:
			return joaat("shop_rgg_post_office");
	
		case 24:
			return joaat("shop_rgg_train_station");
	
		case 25:
			return joaat("shop_rho_bank");
	
		case 26:
			return joaat("shop_rho_butcher");
	
		case 27:
			return joaat("shop_rho_fence");
	
		case 28:
			return joaat("shop_rho_general_store");
	
		case 29:
			return joaat("shop_rho_gunsmith");
	
		case 30:
			return joaat("shop_rho_post_office");
	
		case 31:
			return joaat("shop_rho_train_station");
	
		case 32:
			return joaat("shop_rho_newspaper_boy");
	
		case 33:
			return joaat("shop_rho_bartender");
	
		case 34:
			return -305029900;
	
		case 35:
			return joaat("shop_scm_horse_shop");
	
		case 36:
			return joaat("shop_sdn_bank");
	
		case 37:
			return joaat("shop_sdn_barber");
	
		case 38:
			return joaat("shop_sdn_butcher");
	
		case 39:
			return joaat("shop_sdn_doctor");
	
		case 40:
			return joaat("shop_sdn_exotic");
	
		case 41:
			return joaat("shop_sdn_fence");
	
		case 42:
			return joaat("shop_sdn_general_store");
	
		case 43:
			return joaat("shop_sdn_gunsmith");
	
		case 44:
			return joaat("shop_sdn_horse_shop");
	
		case 45:
			return joaat("shop_sdn_post_office");
	
		case 46:
			return joaat("shop_sdn_train_station");
	
		case 47:
			return joaat("shop_sdn_tailor");
	
		case 48:
			return joaat("shop_sdn_market");
	
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
	
		case 50:
			return -1673339528;
	
		case 51:
			return joaat("shop_sdn_newspaper_boy");
	
		case 52:
			return joaat("shop_sdn_bartender");
	
		case 53:
			return joaat("shop_sdn_bartender_slum");
	
		case 54:
			return joaat("shop_sdn_photo_studio");
	
		case 55:
			return joaat("shop_sdn_trapper");
	
		case 56:
			return 878376253;
	
		case 57:
			return 1388932648;
	
		case 58:
			return -2076086367;
	
		case 59:
			return 1529797091;
	
		case 60:
			return joaat("shop_str_butcher");
	
		case 61:
			return joaat("shop_str_general_store");
	
		case 62:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 63:
			return joaat("shop_str_horse_shop");
	
		case 64:
			return joaat("shop_str_newspaper_boy");
	
		case 65:
			return joaat("shop_str_post_office");
	
		case 66:
			return joaat("shop_str_bartender");
	
		case 67:
			return 1008537949;
	
		case 68:
			return joaat("shop_val_bank");
	
		case 69:
			return joaat("shop_val_barber");
	
		case 70:
			return joaat("shop_val_bartender");
	
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 72:
			return joaat("shop_val_butcher");
	
		case 73:
			return joaat("shop_val_doctor");
	
		case 74:
			return joaat("shop_val_general_store");
	
		case 75:
			return joaat("shop_val_gunsmith");
	
		case 76:
			return joaat("shop_val_horse_shop");
	
		case 77:
			return joaat("shop_val_post_office");
	
		case 78:
			return joaat("shop_val_train_station");
	
		case 79:
			return joaat("shop_val_hotel");
	
		case 80:
			return joaat("shop_val_newspaper_boy");
	
		case 81:
			return joaat("shop_val_bartender_slum");
	
		case 82:
			return joaat("SHOP_VAN_FENCE");
	
		case 83:
			return joaat("shop_van_bartender");
	
		case 84:
			return joaat("shop_van_horse_shop");
	
		case 85:
			return joaat("shop_van_train_station");
	
		case 86:
			return joaat("shop_van_post_office");
	
		case 87:
			return joaat("shop_wal_general_store");
	
		case 88:
			return joaat("shop_wal_train_station");
	
		case 89:
			return joaat("shop_wal_post_office");
	
		case 90:
			return joaat("shop_tbl_general_store");
	
		case 91:
			return joaat("shop_tbl_gunsmith");
	
		case 92:
			return joaat("shop_tbl_butcher");
	
		case 93:
			return joaat("shop_tbl_bartender");
	
		case 94:
			return joaat("shop_tbl_horse_shop");
	
		case 95:
			return joaat("shop_amd_general_store");
	
		case 96:
			return joaat("shop_amd_post_office");
	
		case 97:
			return joaat("shop_amd_bartender");
	
		case 98:
			return joaat("shop_ryc_fence");
	
		case 99:
			return joaat("shop_ben_post_office");
	
		case 100:
			return joaat("shop_ben_train_station");
	
		case 101:
			return joaat("shop_dynamic");
	
		case 102:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 103:
			return joaat("shop_val_coach");
	
		case 104:
			return joaat("shop_val_horse_fence_mp");
	
		case 105:
			return joaat("shop_emr_horse_fence_mp");
	
		case 106:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 107:
			return joaat("shop_blk_coach");
	
		case 108:
			return joaat("shop_blk_horse_fence_mp");
	
		case 109:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 110:
			return joaat("shop_sdn_coach");
	
		case 111:
			return joaat("shop_sdn_horse_fence_mp");
	
		case 112:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 113:
			return joaat("shop_rho_horse_fence_mp");
	
		case 114:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 115:
			return joaat("shop_str_horse_fence_mp");
	
		case 116:
			return joaat("shop_van_coach");
	
		case 117:
			return joaat("shop_van_horse_fence_mp");
	
		case 118:
			return joaat("shop_lag_horse_fence_mp");
	
		case 119:
			return joaat("shop_ckt_horse_fence_mp");
	
		case 120:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_asb_horse_fence_mp");
	
		case 122:
			return joaat("shop_but_horse_fence_mp");
	
		case 123:
			return joaat("shop_ben_horse_fence_mp");
	
		case 124:
			return joaat("shop_map_horse_fence_mp");
	
		case 125:
			return joaat("shop_thl_fence");
	
		case 126:
			return joaat("shop_wilderness_supplies");
	
		case 127:
			return joaat("shop_anywhere_handheld");
	
		case 128:
			return joaat("shop_bvh_doctor");
	
		case 129:
			return joaat("shop_bvh_general_store");
	
		case 130:
			return joaat("shop_bvh_gunsmith");
	
		case 131:
			return joaat("shop_bvh_horse_trainer");
	
		case 132:
			return joaat("shop_clm_doctor");
	
		case 133:
			return joaat("shop_clm_general_store");
	
		case 134:
			return joaat("shop_clm_gunsmith");
	
		case 135:
			return joaat("shop_clm_horse_trainer");
	
		case 136:
			return joaat("shop_clm_horse_fence");
	
		case 137:
			return joaat("shop_hso_doctor");
	
		case 138:
			return joaat("shop_hso_general_store");
	
		case 139:
			return joaat("shop_hso_gunsmith");
	
		case 140:
			return joaat("shop_hso_horse_trainer");
	
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 145:
			return joaat("shop_shb_doctor");
	
		case 146:
			return joaat("shop_shb_general_store");
	
		case 147:
			return joaat("shop_shb_gunsmith");
	
		case 148:
			return joaat("shop_shb_horse_trainer");
	
		case 149:
			return joaat("shop_weapon_mod_store");
	
		case 150:
			return joaat("shop_clothing");
	
		case 151:
			return joaat("shop_camp_shaving");
	
		case 152:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

int func_866(Any anParam0) // Position - 0x30E77 Hash - 0x6BF2FF8D ^0xECB7F67C
{
	var unk;
	var unk6;
	int num;

	if (!func_264(15, &unk))
		return -1;

	unk.f_3 = anParam0;
	unk.f_2 = -125049320;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk))
	{
		num = func_982(unk6);
		return num;
	}

	return -1;
}

BOOL func_867(int iParam0, int iParam1) // Position - 0x30EB7 Hash - 0x9D47675 ^0xD32B5016
{
	int i;
	BOOL flag;

	flag = BUILTIN::SHIFT_LEFT(iParam1, 11) || iParam0;

	for (i = 0; i < Global_40.f_9.f_16; i = i + 1)
	{
		if (Global_40.f_9.f_16[i] == flag)
			return true;
	}

	return false;
}

BOOL func_868(int iParam0) // Position - 0x30EF9 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_863(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_983(iParam0) == 0)
		return false;

	return true;
}

BOOL func_869(int iParam0, int iParam1) // Position - 0x30F2C Hash - 0x772B672A ^0x34712B89
{
	var unk;
	BOOL unk6;
	var unk7;
	var unk8;

	func_264(15, &unk);
	unk.f_2 = -566397848;
	unk.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk);
	unk.f_3 = iParam1;
	unk.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk7, &unk);
	func_264(15, &unk8);
	unk8.f_2 = -1222062814;
	unk8.f_3 = unk7;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk8.f_1), &unk8))
	{
		unk8.f_2 = -1148228754;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&unk6, &unk8);
	}

	return unk6;
}

BOOL func_870(int iParam0, BOOL bParam1) // Position - 0x30FA8 Hash - 0xA92798E ^0xA92798E
{
	if (!func_233(iParam0))
		return 0;

	if (bParam1)
		if (func_591(iParam0, 8))
			return 0;

	if (func_591(iParam0, true))
		return 1;

	return 0;
}

BOOL func_871(int iParam0, int iParam1) // Position - 0x30FE4 Hash - 0xCC75FDFF ^0xEA4571CB
{
	var unk;
	var unk6;
	Hash hash;
	Hash hash2;
	var unk7;

	func_264(15, &unk);
	unk.f_2 = -566397848;
	unk.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk);
	unk.f_3 = iParam1;
	unk.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
	func_264(15, &unk7);
	unk7.f_2 = -1222062814;
	unk7.f_3 = unk6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk7.f_1), &unk7))
	{
		unk7.f_2 = 939842437;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk7))
		{
			hash2 = hash;
			return func_719(hash2, 1, false);
		}
	}

	return true;
}

BOOL func_872() // Position - 0x31070 Hash - 0xE1BC079E ^0x79C1735A
{
	var unk;

	if (func_58())
		if (!func_70(4))
			return true;

	return PED::_IS_META_PED_USING_COMPONENT(Global_35, joaat("HATS")) || func_984(-2061583405, &unk);
}

BOOL func_873(int iParam0, int iParam1) // Position - 0x310A9 Hash - 0xCC75FDFF ^0xEA4571CB
{
	var unk;
	var unk6;
	BOOL num;
	var unk7;

	func_264(15, &unk);
	unk.f_2 = -566397848;
	unk.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk);
	unk.f_3 = iParam1;
	unk.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
	func_264(15, &unk7);
	unk7.f_2 = -1222062814;
	unk7.f_3 = unk6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk7.f_1), &unk7))
	{
		unk7.f_2 = 1689379704;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&num, &unk7))
			return num;
	}

	return false;
}

BOOL func_874(int iParam0) // Position - 0x3112B Hash - 0x1100E6B1 ^0x38107413
{
	if (!func_233(Global_1310720.f_22))
		return true;

	if (func_870(Global_1310720.f_22, true))
		return true;

	if (0 == iParam0 && 2 == Global_1310720.f_22 || 2 == iParam0 && 0 == Global_1310720.f_22)
		return true;

	return Global_1310720.f_22 == iParam0;
}

BOOL func_875(int iParam0, int iParam1) // Position - 0x3118F Hash - 0x28D75893 ^0x77C12A65
{
	var unk;
	Hash hash;
	int num;
	eStackSize stackSize;

	func_264(15, &unk);
	unk.f_2 = -1999103282;
	unk.f_3 = iParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 1563492982;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			num = func_985(hash);
		
			if (func_70(num))
				return false;
		}
	
		unk.f_2 = 1975530226;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			num = func_985(hash);
		
			if (!func_70(num))
				return false;
		}
	
		unk.f_2 = 108838230;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			stackSize = func_986(hash);
		
			if (func_523(stackSize))
				return false;
		}
	
		unk.f_2 = 181294442;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			stackSize = func_986(hash);
		
			if (!func_523(stackSize))
				return false;
		}
	
		return true;
	}

	return false;
}

int func_876(int iParam0) // Position - 0x3126D Hash - 0x2848C66F ^0x2848C66F
{
	if (!func_987(iParam0))
		return -1;

	return Global_40.f_9096[iParam0 /*12*/];
}

BOOL func_877(BOOL bParam0, int iParam1) // Position - 0x3128D Hash - 0xBAC14BAA ^0xBAC14BAA
{
	return Global_40.f_9571[iParam1 /*10*/] && bParam0 != false;
}

int func_878(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x312A4 Hash - 0x299D98EC ^0x3CC83AC9
{
	int i;
	eStackSize stackSize;

	for (i = 0; i < Global_1898329; i = i + 1)
	{
		if (!func_46(Global_1898330[i]))
		{
		}
		else
		{
			switch (Global_1898346[i /*6*/].f_3)
			{
				case 1:
					stackSize = Global_1898346[i /*6*/].f_4;
				
					if (BUILTIN::VDIST(func_988(stackSize), vParam0) < func_989(stackSize) == 0f ? fParam3 : func_989(stackSize))
						return 1;
					break;
			}
		}
	}

	return 0;
}

int func_879(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x31324 Hash - 0xE8D670EC ^0xB32F26AA
{
	eStackSize i;

	for (i = 0; i < 201; i = i + 1)
	{
		if (func_968(i, false))
			if (BUILTIN::VDIST(func_990(i), vParam0) < fParam3)
				return 1;
	}

	return 0;
}

void func_880(eStackSize essParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x31362 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_991(func_177(), essParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

BOOL func_881(int iParam0, int iParam1) // Position - 0x31380 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_882(Hash hParam0) // Position - 0x3138F Hash - 0xAC50B33A ^0x11B3AEED
{
	switch (hParam0)
	{
		case -1962893335:
		case -1788578071:
		case -316909020:
		case 300868838:
		case 1157066259:
		case 1351589798:
			if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
				STREAMING::REMOVE_IPL_HASH(1475953931);
			break;
	
		case -109425099:
		case 1070723367:
			if (STREAMING::IS_IPL_ACTIVE_HASH(1261237250))
				STREAMING::REMOVE_IPL_HASH(1261237250);
			break;
	
		case 1261237250:
			if (STREAMING::IS_IPL_ACTIVE_HASH(-109425099))
				STREAMING::REMOVE_IPL_HASH(-109425099);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(1070723367))
				STREAMING::REMOVE_IPL_HASH(1070723367);
			break;
	
		case 1475953931:
			if (STREAMING::IS_IPL_ACTIVE_HASH(-316909020))
				STREAMING::REMOVE_IPL_HASH(-316909020);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(-1962893335))
				STREAMING::REMOVE_IPL_HASH(-1962893335);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(1351589798))
				STREAMING::REMOVE_IPL_HASH(1351589798);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(300868838))
				STREAMING::REMOVE_IPL_HASH(300868838);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(-1788578071))
				STREAMING::REMOVE_IPL_HASH(-1788578071);
		
			if (STREAMING::IS_IPL_ACTIVE_HASH(1157066259))
				STREAMING::REMOVE_IPL_HASH(1157066259);
			break;
	}

	return;
}

BOOL func_883(Hash hParam0, int iParam1) // Position - 0x314B9 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<4> func_884(BOOL bParam0) // Position - 0x314D3 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_886(joaat("character"), func_992(), joaat("SLOTID_NONE"), bParam0);
}

int func_885(int iParam0) // Position - 0x314EF Hash - 0xF3DAE918 ^0xA65130AC
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		case 2:
			return 1426626782;
	
		case 3:
			return 1227915917;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

struct<4> func_886(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x3153C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_883(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_887(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_887(BOOL bParam0) // Position - 0x3156D Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_27() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_888(var uParam0) // Position - 0x315AE Hash - 0x5001E582 ^0x5001E582
{
	return func_791(*uParam0, 1);
}

int func_889(Hash hParam0) // Position - 0x315BE Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_883(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_890(Hash hParam0, int iParam1) // Position - 0x315E9 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_883(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_893(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_993("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_994(&unk, i, num, num2))
			{
			}
			else if (!func_934(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_995(num);
				return true;
			}
		}
	
		func_995(num);
	}

	return false;
}

int func_891(int iParam0) // Position - 0x31691 Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_892(int iParam0) // Position - 0x31745 Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

Hash func_893(Hash hParam0, int iParam1) // Position - 0x317E6 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_883(hParam0, 0))
		return 0;

	num = func_889(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_996(hParam0, 1399091007))
	{
		func_997(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_894(Hash hParam0, BOOL bParam1) // Position - 0x31860 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_998(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_1000(&unk, func_999(false));

	if (!func_1001(&unk, &num, &num2, false))
		return 0;

	func_995(num);
	return num2;
}

void func_895(int iParam0, Hash hParam1, int iParam2) // Position - 0x318BE Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_27() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

int func_896(int iParam0) // Position - 0x318F6 Hash - 0xF4AFA201 ^0x156AC308
{
	int num;
	int num2;

	switch (func_111(iParam0))
	{
		case 1:
			num = func_113(iParam0);
			return func_1002(num);
	
		case 8:
			num2 = func_113(iParam0);
		
			if (func_117(Global_1347702[num2 /*49*/].f_12, 1))
				return func_1003(num2);
			break;
	}

	return -1;
}

int func_897() // Position - 0x31951 Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_172(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_172(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_172(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_172(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_172(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_172(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_172(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

void func_898(int iParam0, int iParam1) // Position - 0x31A14 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_46(iParam0))
		return;

	func_491(iParam0, iParam1);
	return;
}

void func_899(BOOL bParam0) // Position - 0x31A31 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_516(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_218(&Global_1935630, 4194304);
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

int func_900(BOOL bParam0) // Position - 0x31AD4 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_310(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_901(BOOL bParam0) // Position - 0x31B01 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

void func_902(int iParam0, BOOL bParam1) // Position - 0x31B14 Hash - 0x7075D2FF ^0xF0E29EF6
{
	if (func_27() != -1)
		return;

	if (func_76(0) != iParam0)
		return;

	if (func_1004(iParam0))
		if (bParam1)
			func_1005(-525676072);
		else
			func_1006(-525676072);

	return;
}

int func_903(int iParam0) // Position - 0x31B57 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1008(func_1007(iParam0));
}

int func_904(BOOL bParam0) // Position - 0x31B69 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

eStackSize func_905(int iParam0) // Position - 0x31B7D Hash - 0x7647021A ^0xF0097466
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

BOOL func_906(int iParam0) // Position - 0x31B8F Hash - 0x9886D3BE ^0x52D3282
{
	int num;
	eStackSize stackSize;

	num = func_755(iParam0);

	if (num == -1)
		return false;

	stackSize = func_905(num);

	if (stackSize == -1)
		return false;

	return Global_1392915.f_121[num /*20*/].f_19;
}

void func_907(int iParam0) // Position - 0x31BC7 Hash - 0xF37CE386 ^0x23C715D1
{
	int num;

	if (func_27() != -1)
		return;

	if (!func_1009(iParam0, &num))
		return;

	Global_1392915.f_121[num /*20*/].f_15 == true;
	Global_1392915.f_121[num /*20*/].f_15 = 0;
	return;
}

int func_908(int iParam0) // Position - 0x31C06 Hash - 0xC3346FD4 ^0xEFA0E7FA
{
	if (func_1010(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PROMPT_MONEY"));
		func_1011(&(Global_1392915.f_121[iParam0 /*20*/].f_3), true, false);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}

	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_909(int iParam0, int iParam1) // Position - 0x31C5B Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_763(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

BOOL func_910(int iParam0) // Position - 0x31C87 Hash - 0x1FF88625 ^0xB6A92286
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

BOOL func_911(int iParam0) // Position - 0x31C9B Hash - 0x19E59B76 ^0x19E59B76
{
	if (iParam0 < 0 || iParam0 > 32)
		return false;

	return true;
}

void func_912(int iParam0) // Position - 0x31CBA Hash - 0x59858C56 ^0xA28E61FC
{
	*iParam0 = -1;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
	iParam0->f_3 = 0;
	iParam0->f_4 = -1;
	iParam0->f_6 = { 0f, 0f, 0f };
	iParam0->f_9 = 0f;
	iParam0->f_10 = 0;
	iParam0->f_5 = 0f;
	iParam0->f_11 = -1;
	return;
}

void func_913(int iParam0) // Position - 0x31CF7 Hash - 0xA48AF811 ^0xB2136D4B
{
	if (func_1010(iParam0->f_3))
		func_1011(&(iParam0->f_3), true, false);

	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 0;
	iParam0->f_9 = { 0f, 0f, 0f };
	iParam0->f_6 = 0;
	iParam0->f_15 = 0;
	iParam0->f_16 = 0;
	return;
}

BOOL func_914(int iParam0) // Position - 0x31D40 Hash - 0xE97E1B38 ^0xE97E1B38
{
	return iParam0 > -1 && iParam0 < 7;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(int iParam0) // Position - 0x31D55 Hash - 0xA17D549C ^0xAB2844C4
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
	
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
	
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
	
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
	
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
	
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
	
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
	
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
	
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
	
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
	
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
	
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
	
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
	
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
	
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
	
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
	
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
	
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
	
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
	
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
	
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
	
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
	
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
	
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
	
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
	
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
	
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
	
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
	
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
	
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
	
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
	
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
	
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
	
		default:
		
	}

	return "";
}

void func_916(int iParam0, BOOL bParam1) // Position - 0x31F15 Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_46(iParam0))
		return;

	if (!func_772(iParam0))
		return;

	if (bParam1)
	{
		if (func_532(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_532(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_111(iParam0), func_113(iParam0), func_1012(iParam0), func_532(iParam0), Global_36);
		}
	}

	func_898(iParam0, 1);
	bParam1 = bParam1;
	return;
}

Hash func_917(int iParam0) // Position - 0x31F86 Hash - 0x8DA5EC9 ^0xB635C20
{
	if (!func_104(iParam0))
		return 0;

	if (Global_40.f_358[iParam0 /*12*/].f_5 & 2 != 0)
		return 5;

	if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
		return func_1013(Global_40.f_358[iParam0 /*12*/]);

	return 0;
}

void func_918(int iParam0, BOOL bParam1) // Position - 0x31FE2 Hash - 0x72FD8224 ^0x427C5AB
{
	if (bParam1)
		MAP::_MAP_ENABLE_REGION_BLIP(func_1014(iParam0), joaat("BLIP_STYLE_WANTED_REGION"));
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_1014(iParam0), joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_1014(iParam0), joaat("BLIP_STYLE_WANTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(func_1014(iParam0));

	return;
}

BOOL func_919(int iParam0, int iParam1, int iParam2) // Position - 0x32032 Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

BOOL func_920(int iParam0, BOOL bParam1) // Position - 0x320DB Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_1015(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

void func_921(Player plParam0) // Position - 0x3211A Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_1016(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 127, false);

	if (FIRE::IS_ENTITY_ON_FIRE(plParam0))
	{
		FIRE::STOP_ENTITY_FIRE(plParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(plParam0, ENTITY::GET_ENTITY_MAX_HEALTH(plParam0, false), 0);
	}

	return;
}

void func_922(eStackSize essParam0) // Position - 0x32166 Hash - 0xB1E2E498 ^0xC7EBD371
{
	Player player;

	if (!func_613(essParam0))
		return;

	if (func_951(essParam0, false) == 0)
		return;

	player = func_656(essParam0);
	func_921(player);
	func_830(essParam0, 8192, true);
	return;
}

void func_923(Player plParam0) // Position - 0x321A1 Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_1016(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 0, false);
	return;
}

void func_924(eStackSize essParam0) // Position - 0x321CE Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Player player;

	if (!func_613(essParam0))
		return;

	if (func_951(essParam0, false) == 0)
		return;

	player = func_656(essParam0);
	func_923(player);
	func_830(essParam0, 8192, false);
	return;
}

void func_925(Player plParam0) // Position - 0x32209 Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_1016(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, false);
	return;
}

void func_926(Ped pedParam0) // Position - 0x3223F Hash - 0x6EDA2DDB ^0x823A87C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (func_413(14))
		return;

	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1357549.f_3[4], true, 0))
		return;

	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 909522);
	return;
}

void func_927(eStackSize essParam0) // Position - 0x322BE Hash - 0xB1E2E498 ^0x545B1681
{
	Player player;

	if (!func_613(essParam0))
		return;

	if (func_951(essParam0, false) == 0)
		return;

	player = func_656(essParam0);
	func_925(player);
	func_830(essParam0, 16384, true);
	return;
}

void func_928(Player plParam0) // Position - 0x322F9 Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_1016(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, true);
	return;
}

void func_929(eStackSize essParam0) // Position - 0x3232D Hash - 0x28CD0E89 ^0x67E48CA5
{
	Player player;

	if (!func_613(essParam0))
		return;

	if (func_951(essParam0, false) == 0)
		return;

	player = func_656(essParam0);
	func_928(player);
	func_830(essParam0, 16384, false);
	return;
}

int func_930(int iParam0, var uParam1, var uParam2) // Position - 0x32368 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_1017(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_931(int iParam0, eStackSize essParam1) // Position - 0x3238A Hash - 0x2641680 ^0x6B70222B
{
	int randomIntInRange;
	int num;
	int num2;

	switch (iParam0)
	{
		case 296923297:
			num2 = -268604689;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -268604689;
					break;
			
				case 1:
					num = -1632589543;
					break;
			
				case 2:
					num = -1862464078;
					break;
			}
			break;
	
		case 1237718549:
			num2 = -922193456;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -922193456;
					break;
			
				case 1:
					num = -2040275819;
					break;
			
				case 2:
					num = -1114682645;
					break;
			
				case 3:
					num = -1414977761;
					break;
			}
			break;
	}

	if (essParam1 != -1)
		if (func_630(essParam1, num))
			num2 = num;

	return num2;
}

int func_932(int iParam0) // Position - 0x32461 Hash - 0xDEAE5330 ^0x7DE1135D
{
	switch (iParam0)
	{
		case -2040275819:
			return 464906090;
	
		case -1862464078:
			return 1895628185;
	
		case -1632589543:
			return 1052055818;
	
		case -1414977761:
			return 1059434053;
	
		case -1114682645:
			return 744097966;
	
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		default:
		
	}

	return joaat("META_OUTFIT_DEFAULT");
}

void func_933(eStackSize essParam0, eStackSize essParam1) // Position - 0x324D8 Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[essParam0 /*60*/].f_5 = Global_40.f_4942[essParam0 /*60*/].f_5 - Global_40.f_4942[essParam0 /*60*/].f_5 && essParam1;
	return;
}

BOOL func_934(Hash hParam0) // Position - 0x32508 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_935(Hash hParam0) // Position - 0x32523 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

int func_936(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x3254B Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	Hash hash;
	var unk6;
	int i;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
	{
		unk = { func_1018(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_1019(398 + i, 1);
		
			if (func_1020(hParam0, &unk, hash, false))
			{
				if (func_1021(hParam0, &unk6, hash))
				{
					unk28 = { func_886(hParam0, unk, hash, false) };
					func_1022(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_1023(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_1024(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_1025(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_937(Ped pedParam0, var uParam1, var uParam2) // Position - 0x3269D Hash - 0x236D39D4 ^0x39F583A
{
	BOOL flag;
	Hash entityModel;

	flag = true;
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (*uParam1 == joaat("weapon_revolver_cattleman_mexican") || *uParam1 == joaat("weapon_revolver_cattleman_pig") || *uParam1 == joaat("weapon_revolver_doubleaction_exotic") || *uParam1 == joaat("weapon_revolver_schofield_calloway") || *uParam1 == joaat("weapon_revolver_schofield_golden") || *uParam1 == joaat("weapon_pistol_mauser_drunk") || *uParam1 == joaat("weapon_shotgun_doublebarrel_exotic") || *uParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*uParam2 = 0f;
		return;
	}

	switch (entityModel)
	{
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
	
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
	
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
	
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
	
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
	
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
	
		case joaat("g_m_m_uniinbred_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
	
		default:
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
		
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
				flag = false;
			break;
	}

	if (flag)
		PED::SET_PED_CONFIG_FLAG(pedParam0, 361, true);

	return;
}

BOOL func_938(Hash hParam0) // Position - 0x328B4 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

void func_939(var uParam0, int iParam1) // Position - 0x328C6 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_940(var uParam0, int iParam1) // Position - 0x328D7 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_941(var uParam0, int iParam1) // Position - 0x328EC Hash - 0xD05180BA ^0x39589262
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

void func_942(var uParam0, int iParam1) // Position - 0x32972 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_943(var uParam0, int iParam1) // Position - 0x329AE Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_262(*uParam0);
	num2 = func_263(*uParam0);

	if (iParam1 < 1 || iParam1 > func_704(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_944(var uParam0, int iParam1) // Position - 0x32A01 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_945(var uParam0, int iParam1) // Position - 0x32A3C Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_946(var uParam0, int iParam1) // Position - 0x32A75 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_947(int iParam0, int iParam1) // Position - 0x32AAD Hash - 0x99A93628 ^0x27AE8C83
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
	
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
	
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
	
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
	
		case -2104294676:
			return 83;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
	
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
	
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return &func_2;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
	
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
	
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
	
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
	
		case -2033572567:
			return 92;
	
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
	
		case -2006082799:
			return 56;
	
		case -1994410205:
			return 499;
	
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
	
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
	
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
	
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
	
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
	
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
	
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
	
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
	
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
	
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
	
		case -1885734028:
			return 110;
	
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
	
		case -1856459307:
			return 219;
	
		case -1837343824:
			return 496;
	
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
	
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
	
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
	
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
	
		case -1818590041:
			return 246;
	
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
	
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
	
		case joaat("CSTAG_BCH_BASE"):
			return 10;
	
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
	
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
	
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
	
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
	
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
	
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
	
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
	
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
	
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
	
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
	
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
	
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
	
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
	
		case -1584659518:
			return 210;
	
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
	
		case -1565979762:
			return 507;
	
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
	
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
	
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
	
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
	
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
	
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
	
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
	
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
	
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
	
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
	
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
	
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
	
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
	
		case -1426009748:
			return 119;
	
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
	
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
	
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
	
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
	
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
	
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
	
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
	
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
	
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
	
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
	
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
	
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
	
		case -1333840726:
			return 236;
	
		case -1318290630:
			return 254;
	
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
	
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
	
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
	
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
	
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
	
		case -1235200494:
			return 165;
	
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
	
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
	
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
	
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
	
		case joaat("CSTAG_PRG_BASE"):
			return 9;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
	
		case -1171086122:
			return 41;
	
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
	
		case -1152282847:
			return 33;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
	
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
	
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
	
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
	
		case -1061998329:
			return 164;
	
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
	
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
	
		case -1045864225:
			return 510;
	
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
	
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
	
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
	
		case -978287173:
			return 12;
	
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
	
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
	
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
	
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
	
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
	
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
	
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
	
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
	
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
	
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
	
		case joaat("CSTAG_COL_BASE"):
			return 2;
	
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
	
		case -830432609:
			return 492;
	
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
	
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
	
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
	
		case -818926670:
			return 200;
	
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
	
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
	
		case joaat("CSTAG_HSO_BASE"):
			return 3;
	
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
	
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
	
		case -803062666:
			return 65;
	
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
	
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
	
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
	
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
	
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
	
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
	
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
	
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
	
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
	
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
	
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
	
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
	
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
	
		case -671103079:
			return 504;
	
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
	
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
	
		case -650501093:
			return 509;
	
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
	
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
	
		case -636774257:
			return 146;
	
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
	
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
	
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
	
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
	
		case -604891653:
			return 237;
	
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
	
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return &func_1;
	
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
	
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
	
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
	
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
	
		case -534913305:
			return 174;
	
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
	
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
	
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
	
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
	
		case -453449739:
			return 182;
	
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
	
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
	
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
	
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
	
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
	
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
	
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
	
		case -399703928:
			return 155;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
	
		case -381477663:
			return 37;
	
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
	
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
	
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
	
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
	
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
	
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
	
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
	
		case -317452243:
			return 128;
	
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
	
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
	
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
	
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
	
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
	
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
	
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
	
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
	
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
	
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
	
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
	
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
	
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
	
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
	
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
	
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
	
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
	
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
	
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
	
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
	
		case -170673728:
			return 156;
	
		case -165538585:
			return 127;
	
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
	
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
	
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
	
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
	
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
	
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
	
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
	
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
	
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
	
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
	
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
	
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
	
		case -98209688:
			return 55;
	
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
	
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
	
		case -58291054:
			return 201;
	
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
	
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
	
		case -21372580:
			return 46;
	
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
	
		case -8269375:
			return 137;
	
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_948(eStackSize essParam0) // Position - 0x341BD Hash - 0xBA965109 ^0xCB1D208B
{
	switch (essParam0)
	{
		case 0:
			return joaat("perschar_comp_dutch");
	
		case 1:
			return joaat("perschar_comp_john");
	
		case 2:
			return joaat("perschar_comp_javier");
	
		case 3:
			return joaat("perschar_comp_bill");
	
		case 4:
			return joaat("perschar_comp_uncle");
	
		case 5:
			return joaat("perschar_comp_hosea");
	
		case 6:
			return joaat("perschar_comp_micah");
	
		case 7:
			return joaat("perschar_comp_charles");
	
		case 8:
			return joaat("perschar_comp_sean");
	
		case 9:
			return joaat("perschar_comp_lenny");
	
		case 10:
			return joaat("perschar_comp_kieran");
	
		case 11:
			return joaat("PERSCHAR_COMP_sadie");
	
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	
		case 13:
			return joaat("perschar_comp_abigail");
	
		case 14:
			return joaat("perschar_comp_jack");
	
		case 15:
			return joaat("perschar_comp_marybeth");
	
		case 16:
			return joaat("perschar_comp_molly");
	
		case 17:
			return joaat("perschar_comp_pearson");
	
		case 18:
			return joaat("perschar_comp_strauss");
	
		case 19:
			return joaat("perschar_comp_grimshaw");
	
		case 20:
			return joaat("perschar_comp_karen");
	
		case 21:
			return joaat("perschar_comp_swanson");
	
		case 22:
			return joaat("perschar_comp_tilly");
	
		case 23:
			return joaat("perschar_comp_trelawny");
	
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
	
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
	
		case 26:
			return joaat("perschar_comp_eagleflies");
	}

	return 0;
}

void func_949(eStackSize essParam0, Ped pedParam1) // Position - 0x34399 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_1026(pedParam1);

	return;
}

float func_950(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x343B3 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_299(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_951(eStackSize essParam0, BOOL bParam1) // Position - 0x3440A Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_613(essParam0))
		return 0;

	if (Global_1360165[essParam0 /*1157*/].f_127 != 0)
		return Global_1360165[essParam0 /*1157*/].f_127;

	switch (essParam0)
	{
		case 0:
			return joaat("perschar_comp_horse_dutch");
	
		case 1:
			return joaat("perschar_comp_horse_john");
	
		case 2:
			return joaat("perschar_comp_horse_javier");
	
		case 3:
			return joaat("perschar_comp_horse_bill");
	
		case 4:
			return joaat("perschar_comp_horse_uncle");
	
		case 5:
			return joaat("perschar_comp_horse_hosea");
	
		case 6:
			return joaat("perschar_comp_horse_micah");
	
		case 7:
			return joaat("perschar_comp_horse_charles");
	
		case 8:
			return joaat("perschar_comp_horse_sean");
	
		case 9:
			return joaat("perschar_comp_horse_lenny");
	
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
	
		case 11:
			return joaat("perschar_comp_horse_sadie");
	
		case 12:
		case 14:
			return 0;
	
		case 20:
			return joaat("perschar_comp_horse_karen");
	
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
	
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
	
		default:
		
	}

	if (bParam1)
	{
		Global_1360165[essParam0 /*1157*/].f_127 = func_1027(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_952(eStackSize essParam0) // Position - 0x3454F Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_656(essParam0);

	if (!PED::IS_PED_CARRYING_SOMETHING(player))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(player, itemset);

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entityFromItem))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
		
			ENTITY::_DELETE_CARRIABLE(&entityFromItem);
		}
	}

	return;
}

PersChar func_953(eStackSize essParam0, BOOL bParam1) // Position - 0x345C5 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_613(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_1028(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_954(eStackSize essParam0) // Position - 0x34611 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_613(essParam0))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/].f_1 == essParam0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = -1;
			Global_1360165[essParam0 /*1157*/].f_127 = 0;
		}
	}

	return;
}

void func_955(eStackSize essParam0, int iParam1) // Position - 0x34664 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_613(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

Hash func_956() // Position - 0x34688 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_957(BOOL bParam0, var uParam1, var uParam2) // Position - 0x34698 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_958(int iParam0, BOOL bParam1) // Position - 0x346AF Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_1029(bParam1);

	return;
}

void func_959(Hash hParam0) // Position - 0x346CA Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_960(Hash hParam0) // Position - 0x346DD Hash - 0x8FB6A40C ^0x329038DF
{
	if (hParam0 <= -320)
		return "HONOR_BAD_8";
	else if (hParam0 <= -280)
		return "HONOR_BAD_7";
	else if (hParam0 <= -240)
		return "HONOR_BAD_6";
	else if (hParam0 <= -200)
		return "HONOR_BAD_5";
	else if (hParam0 <= -160)
		return "HONOR_BAD_4";
	else if (hParam0 <= -120)
		return "HONOR_BAD_3";
	else if (hParam0 <= -80)
		return "HONOR_BAD_2";
	else if (hParam0 < 0)
		return "HONOR_BAD_1";
	else if (hParam0 <= 40)
		return "HONOR_GOOD_1";
	else if (hParam0 >= 320)
		return "HONOR_GOOD_8";
	else if (hParam0 >= 280)
		return "HONOR_GOOD_7";
	else if (hParam0 >= 240)
		return "HONOR_GOOD_6";
	else if (hParam0 >= 200)
		return "HONOR_GOOD_5";
	else if (hParam0 >= 160)
		return "HONOR_GOOD_4";
	else if (hParam0 >= 120)
		return "HONOR_GOOD_3";
	else if (hParam0 >= 80)
		return "HONOR_GOOD_2";

	return "HONOR_GOOD_1";
}

BOOL func_961(var uParam0) // Position - 0x347FE Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_264(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -2103982008;
		*uParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
		return true;
	}

	return false;
}

BOOL func_962(int iParam0, var uParam1, var uParam2) // Position - 0x34846 Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_264(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -57097983;
		unk.f_3 = iParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam1 = unk6;
			unk.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

Hash func_963(Hash hParam0) // Position - 0x348C6 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_964() // Position - 0x348D0 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_833();

	switch (num)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
	
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
	
		default:
		
	}

	return joaat("SHOP_HONOR_AMORAL");
}

void func_965(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x3491F Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_966(eStackSize essParam0) // Position - 0x34950 Hash - 0xFD12E018 ^0x1318B2F3
{
	int num;

	num = func_1030(essParam0);

	if (num >= 6 || num < 0)
		return false;

	return Global_40.f_9571[num /*10*/].f_1 == 5;
}

BOOL func_967() // Position - 0x34983 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_968(eStackSize essParam0, BOOL bParam1) // Position - 0x34994 Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_27() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == essParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

int func_969(eStackSize essParam0) // Position - 0x349F1 Hash - 0x86C097F ^0x86C097F
{
	!func_1031(essParam0);
	return Global_1888801[essParam0 /*35*/];
}

eStackSize func_970(int iParam0) // Position - 0x34A0B Hash - 0x4B5954D4 ^0xDC7F3754
{
	if (!func_46(iParam0))
		return -15;

	return func_1032(iParam0);
}

BOOL func_971(eStackSize essParam0) // Position - 0x34A29 Hash - 0xD02571D6 ^0x9878B86D
{
	return essParam0 != -15;
}

BOOL func_972(eStackSize essParam0, BOOL bParam1) // Position - 0x34A37 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_1033(func_177(), essParam0, bParam1);
}

int func_973() // Position - 0x34A4B Hash - 0x4228A1C2 ^0xE93D75E0
{
	return Global_1572864.f_21;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(eStackSize essParam0) // Position - 0x34A59 Hash - 0xA17D549C ^0xF521F356
{
	switch (essParam0)
	{
		case 0:
			return "camp_Colter";
	
		case 1:
			return "camp_HorseshoeOverlook";
	
		case 2:
			return "camp_ClemensPoint";
	
		case 3:
			return "camp_ShadyBelle";
	
		case 4:
			return "camp_Guarma";
	
		case 5:
			return "camp_Lakay";
	
		case 6:
			return "camp_BeaverHollow";
	
		case 7:
			return "camp_PronghornRanch";
	
		case 8:
			return "camp_BeechersHope";
	
		default:
		
	}

	return "";
}

BOOL func_975(eStackSize essParam0) // Position - 0x34AE1 Hash - 0x921C58EC ^0x921C58EC
{
	switch (essParam0)
	{
		case 9:
		case 79:
			if (func_852(essParam0, true))
				return false;
			else
				return true;
			break;
	
		case 43:
		case 71:
		case 98:
			return true;
	}

	return false;
}

BOOL func_976(eStackSize essParam0) // Position - 0x34B2F Hash - 0xEC19E423 ^0x3F24553E
{
	int num;

	if (func_782(essParam0))
		if (!func_345(45))
			return false;

	num = func_283(essParam0);

	if (func_58())
		if (!func_172(Global_1835011[3 /*74*/].f_1, true))
			return num == 7 || num == 6;

	return true;
}

BOOL func_977(eStackSize essParam0) // Position - 0x34B81 Hash - 0x3B5651B ^0x6B4FDD70
{
	var unk;

	if (!func_207(essParam0))
		return false;

	unk = -1;
	unk.f_4 = -15;
	func_1034(essParam0, &unk);
	return func_1035(&unk);
}

BOOL func_978(eStackSize essParam0) // Position - 0x34BB4 Hash - 0x3B5651B ^0x6B4FDD70
{
	var unk;

	if (!func_207(essParam0))
		return false;

	unk = -1;
	unk.f_4 = -15;
	func_1034(essParam0, &unk);
	return func_1036(&unk);
}

BOOL func_979(int iParam0) // Position - 0x34BE7 Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_27() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_980(int iParam0, BOOL bParam1) // Position - 0x34C2C Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_1037(iParam0, &num, &num2);

	if (!func_1038(iParam0, num, num2, bParam1))
		return;

	func_1039(num, num2);
	return;
}

void func_981(eStackSize essParam0, BOOL bParam1) // Position - 0x34C59 Hash - 0x627BE148 ^0x9490A9CD
{
	var unk;

	if (!func_207(essParam0))
		return;

	unk = -1;
	unk.f_4 = -15;
	func_1034(essParam0, &unk);
	func_1040(&unk, bParam1);
	func_1041(essParam0, &unk);
	return;
}

int func_982(int iParam0) // Position - 0x34C95 Hash - 0x16E6950C ^0x16E6950C
{
	switch (iParam0)
	{
		case joaat("CC_LAKAY"):
			return 5;
	
		case joaat("CC_SHADY_BELLE"):
			return 3;
	
		case joaat("CC_PRONGHORN_RANCH"):
			return 7;
	
		case joaat("CC_HORSESHOE_OVERLOOK"):
			return 1;
	
		case joaat("CC_GUARMA"):
			return 4;
	
		case joaat("CC_COLTER"):
			return 0;
	
		case joaat("CC_BEECHERS_HOPE"):
			return 8;
	
		case joaat("CC_BEAVER_HOLLOW"):
			return 6;
	
		case joaat("CC_CLEMENS_POINT"):
			return 2;
	
		default:
		
	}

	return -1;
}

int func_983(int iParam0) // Position - 0x34D01 Hash - 0xACA56E21 ^0x54175BD8
{
	iParam0 = func_863(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_11;
}

BOOL func_984(Hash hParam0, var uParam1) // Position - 0x34D34 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_1043(func_1042(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_1044(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_985(Hash hParam0) // Position - 0x34DAB Hash - 0xF2405EA8 ^0x7474775E
{
	int i;

	for (i = 0; i < Global_1835011; i = i + 1)
	{
		if (MISC::GET_HASH_KEY(&(Global_1835011[i /*74*/].f_8)) == hParam0)
			return i;
	}

	return -1;
}

eStackSize func_986(Hash hParam0) // Position - 0x34DE1 Hash - 0xF2405EA8 ^0xAAC8F338
{
	eStackSize i;

	for (i = 0; i < Global_1347702; i = i + 1)
	{
		if (MISC::GET_HASH_KEY(&(Global_1347702[i /*49*/].f_3)) == hParam0)
			return i;
	}

	return -1;
}

BOOL func_987(int iParam0) // Position - 0x34E17 Hash - 0x4461E3A8 ^0x4461E3A8
{
	if (iParam0 <= -1 || iParam0 >= 4)
		return false;

	return true;
}

Vector3 func_988(eStackSize essParam0) // Position - 0x34E35 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_1045(essParam0);
}

float func_989(eStackSize essParam0) // Position - 0x34E43 Hash - 0xF5529DCB ^0xF5529DCB
{
	switch (essParam0)
	{
		case 17:
			return 50f;
	}

	return 0f;
}

Vector3 func_990(eStackSize essParam0) // Position - 0x34E65 Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_174(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_1046(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

void func_991(eStackSize essParam0, eStackSize essParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x34EAB Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_1033(essParam0, essParam1, true))
	{
		num = func_262(essParam1);
		num2 = func_263(essParam0);
		num3 = func_263(essParam0) - func_263(essParam1);
		num4 = func_262(essParam0) - func_262(essParam1);
		num5 = func_261(essParam0) - func_261(essParam1);
		num6 = func_258(essParam0) - func_258(essParam1);
		num7 = func_259(essParam0) - func_259(essParam1);
		num8 = func_260(essParam0) - func_260(essParam1);
	}
	else
	{
		num = func_262(essParam0);
		num2 = func_263(essParam1);
		num3 = func_263(essParam1) - func_263(essParam0);
		num4 = func_262(essParam1) - func_262(essParam0);
		num5 = func_261(essParam1) - func_261(essParam0);
		num6 = func_258(essParam1) - func_258(essParam0);
		num7 = func_259(essParam1) - func_259(essParam0);
		num8 = func_260(essParam1) - func_260(essParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_704(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_1047(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

struct<4> func_992() // Position - 0x350AD Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_993(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x350B9 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_887(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_994(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x350E0 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_995(int iParam0) // Position - 0x3511B Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_996(Hash hParam0, Hash hParam1) // Position - 0x3513C Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_997(Hash hParam0, var uParam1, var uParam2) // Position - 0x3516D Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_998(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x35379 Hash - 0x84700F53 ^0xB9E7AA96
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

	return hash;
}

struct<4> func_999(BOOL bParam0) // Position - 0x3544B Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_887(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_886(923904168, func_884(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_886(923904168, func_884(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_886(923904168, func_884(bParam0), -740156546, false);
}

void func_1000(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x354E0 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_1001(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x354FB Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_887(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_1002(int iParam0) // Position - 0x35520 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
	
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
	
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
	
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
	
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
	
		case 59:
			return 6;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}

	return -1;
}

int func_1003(int iParam0) // Position - 0x35727 Hash - 0xBC835308 ^0xBC835308
{
	switch (iParam0)
	{
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
	
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
	
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
	
		case 115:
		case 116:
			return 3;
	
		case 120:
			return 0;
	}

	return -1;
}

BOOL func_1004(int iParam0) // Position - 0x3582F Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_46(iParam0))
		return false;

	switch (func_111(iParam0))
	{
		case 1:
			switch (func_113(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
	
		case 8:
			switch (func_113(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}

	return false;
}

void func_1005(int iParam0) // Position - 0x35908 Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_887(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_1044(item) == iParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_1049(func_1048(iParam0), 6);
	return;
}

void func_1006(int iParam0) // Position - 0x3595C Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_887(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_1044(item) == iParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_1050(func_1048(iParam0), 6);
	return;
}

int func_1007(int iParam0) // Position - 0x359B1 Hash - 0xBA803397 ^0x906286B5
{
	int i;

	if (iParam0 == 0 || iParam0 == -1)
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1898164.f_1[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_1008(int iParam0) // Position - 0x359F9 Hash - 0xD83A1109 ^0x154A194E
{
	var unk;

	if (iParam0 < 0)
		return 0;

	if (Global_1898164.f_162 == 0)
		return 0;

	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { unk };
		return 1;
	}

	Global_1898164.f_1[iParam0 /*5*/] = { unk };
	Global_1898164.f_162 = Global_1898164.f_162 - 1;
	func_1051(iParam0, Global_1898164.f_162);
	return 1;
}

BOOL func_1009(int iParam0, var uParam1) // Position - 0x35A68 Hash - 0x51CBA313 ^0xAF93626D
{
	*uParam1 = -1;

	if (iParam0 == -1 || iParam0 >= 33)
		return false;

	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

BOOL func_1010(int iParam0) // Position - 0x35A9C Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_1011(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x35ADB Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_1010(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_1052(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_1053(num);
	*iParam0 = 0;
	return;
}

int func_1012(int iParam0) // Position - 0x35B2F Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_46(iParam0))
		return -1;

	return func_904(func_248(iParam0));
}

int func_1013(Hash hParam0) // Position - 0x35B4F Hash - 0xD38CDAEA ^0x766CC7B5
{
	int i;

	for (i = 5; i >= 1; i = i + -1)
	{
		if (hParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(i))
			return i;
	}

	return 0;
}

Hash func_1014(int iParam0) // Position - 0x35B7A Hash - 0x3A58C3FB ^0x62EF21F6
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(iParam0), 64);
	str = func_754(unk);
	return MISC::GET_HASH_KEY(str);
}

BOOL func_1015(int iParam0) // Position - 0x35B9D Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_820(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

BOOL func_1016(Ped pedParam0, BOOL bParam1) // Position - 0x35BC1 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

int func_1017(int iParam0, int iParam1) // Position - 0x35BEE Hash - 0xB7443904 ^0xB7443904
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
	
		case -2040275819:
			return 46;
	
		case -1874208704:
			return 5;
	
		case -1862464078:
			return 44;
	
		case -1692022104:
			return 63;
	
		case -1684458716:
			return 31;
	
		case -1678882891:
			return 36;
	
		case -1668922931:
			return 20;
	
		case -1648322231:
			return 72;
	
		case -1642335258:
			return 66;
	
		case -1632589543:
			return 43;
	
		case -1587546924:
			return 54;
	
		case -1559986688:
			return 7;
	
		case -1532979576:
			return 65;
	
		case -1414977761:
			return 48;
	
		case -1394723994:
			return 59;
	
		case -1341683964:
			return 21;
	
		case -1335291723:
			return 60;
	
		case -1268239471:
			return 68;
	
		case -1256711921:
			return 35;
	
		case -1248623443:
			return 26;
	
		case -1205468859:
			return 76;
	
		case -1155031950:
			return 25;
	
		case -1114682645:
			return 47;
	
		case -1092189504:
			return 69;
	
		case -1065026089:
			return 73;
	
		case -973332710:
			return 32;
	
		case -946772361:
			return 62;
	
		case -922193456:
			return 39;
	
		case -695701225:
			return 3;
	
		case -571427255:
			return 57;
	
		case -481967001:
			return 28;
	
		case -445211559:
			return 61;
	
		case -433615745:
			return 18;
	
		case -426171916:
			return 80;
	
		case -310473775:
			return 42;
	
		case -301101630:
			return 24;
	
		case -268604689:
			return 37;
	
		case -193269670:
			return 30;
	
		case -23947011:
			return 50;
	
		case 0:
			return 0;
	
		case 6418928:
			return 71;
	
		case 80515440:
			return 70;
	
		case 178615350:
			return 1;
	
		case 283037683:
			return 13;
	
		case 296923297:
			return 45;
	
		case 350498312:
			return 27;
	
		case 404503428:
			return 4;
	
		case 431390894:
			return 23;
	
		case 513932985:
			return 29;
	
		case 707545953:
			return 64;
	
		case 713940276:
			return 11;
	
		case 777603945:
			return 19;
	
		case 837028314:
			return 58;
	
		case 867156718:
			return 79;
	
		case 876535472:
			return 75;
	
		case 876797088:
			return 53;
	
		case 928493661:
			return 22;
	
		case 961676983:
			return 55;
	
		case 977450639:
			return 9;
	
		case 1018353621:
			return 17;
	
		case 1046468203:
			return 16;
	
		case 1071744295:
			return 8;
	
		case 1199580439:
			return 41;
	
		case 1200878026:
			return 52;
	
		case 1205492208:
			return 40;
	
		case 1237718549:
			return 49;
	
		case 1254970547:
			return 78;
	
		case 1295334688:
			return 51;
	
		case 1300659195:
			return 56;
	
		case 1484386316:
			return 77;
	
		case 1495063555:
			return 15;
	
		case 1593315648:
			return 6;
	
		case 1658153743:
			return 33;
	
		case 1744281750:
			return 12;
	
		case 1818898449:
			return 38;
	
		case 1842975347:
			return 34;
	
		case 1901494236:
			return 10;
	
		case 1950972546:
			return 67;
	
		case 2062813606:
			return 74;
	
		case 2094043703:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

struct<5> func_1018(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x35F82 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_884(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_889(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_1057(hParam0, -1823706425))
			{
				unk = { func_886(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_1057(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_886(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_1056(bParam1) };
		
			switch (func_1044(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_886(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_999(bParam1) };
		
			if (bParam2 && func_1055(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_1020(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_1020(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_1021(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_1058(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
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

Hash func_1019(int iParam0, int iParam1) // Position - 0x3623F Hash - 0xE1D12727 ^0x71D656A6
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_1020(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x3838D Hash - 0x4285A587 ^0x4285A587
{
	return func_1059(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_1021(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x383A5 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_1060(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_1022(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x383C6 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_1061(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1058(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_1023(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_887(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_1023(BOOL bParam0) // Position - 0x38456 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_27() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_887(bParam0));
}

int func_1024(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x38474 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_1062(hParam0))
		return 0;

	if (!func_1023(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_1025(Hash hParam0, int iParam1) // Position - 0x384AF Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_524(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_1026(Ped pedParam0) // Position - 0x384F7 Hash - 0xE7050FE7 ^0xFB733CD6
{
	int _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");

	if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(_int))
		PED::_RELEASE_META_PED_OUTFIT_REQUEST(_int);

	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

Hash func_1027(eStackSize essParam0) // Position - 0x3855F Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_613(essParam0))
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1357549.f_1675[i /*5*/].f_1 == essParam0)
			{
				Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
				return Global_1357549.f_1675[i /*5*/];
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/] != 0 && Global_1357549.f_1675[i /*5*/].f_1 == -1)
		{
			hash = Global_1357549.f_1675[i /*5*/];
			break;
		}
	}

	if (!func_613(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_1028(eStackSize essParam0) // Position - 0x38640 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_613(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_951(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_1029(BOOL bParam0) // Position - 0x386DC Hash - 0x970FE035 ^0x92589DF6
{
	func_1063(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

int func_1030(eStackSize essParam0) // Position - 0x3870F Hash - 0xF4C24F3 ^0xF4C24F3
{
	switch (essParam0)
	{
		case 9:
			return 2;
	
		case 16:
			if (!func_342() && !func_70(59))
				return 0;
			else
				return 4;
			break;
	
		case 36:
			return 0;
	
		case 79:
			return 1;
	
		case 109:
			return 3;
	
		case 114:
			return 5;
	
		case 118:
			return 5;
	
		case 125:
			return 5;
	
		case 127:
			return 5;
	
		case 129:
			return 5;
	}

	return -1;
}

BOOL func_1031(eStackSize essParam0) // Position - 0x387A2 Hash - 0x5000025C ^0x5000025C
{
	switch (essParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
	
		default:
		
	}

	return false;
}

int func_1032(int iParam0) // Position - 0x387ED Hash - 0x3C887384 ^0xFB463C80
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_6;

	return -15;
}

BOOL func_1033(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x3880E Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_461(essParam1) || !func_461(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_1034(eStackSize essParam0, var uParam1) // Position - 0x3883B Hash - 0x4DE54190 ^0xF6FA8A6B
{
	if (Global_1572887.f_12 == -1)
	{
		*uParam1 = Global_23118[essParam0 /*11*/].f_4;
		uParam1->f_1 = Global_23118[essParam0 /*11*/].f_4.f_1;
		uParam1->f_2 = Global_23118[essParam0 /*11*/].f_4.f_2;
		uParam1->f_3 = Global_23118[essParam0 /*11*/].f_4.f_3;
		uParam1->f_4 = Global_23118[essParam0 /*11*/].f_4.f_4;
		uParam1->f_5 = Global_23118[essParam0 /*11*/].f_4.f_5;
		return;
	}

	*uParam1 = Global_1058888.f_40545[essParam0 /*11*/].f_4;
	uParam1->f_1 = Global_1058888.f_40545[essParam0 /*11*/].f_4.f_1;
	uParam1->f_2 = Global_1058888.f_40545[essParam0 /*11*/].f_4.f_2;
	uParam1->f_3 = Global_1058888.f_40545[essParam0 /*11*/].f_4.f_3;
	uParam1->f_4 = Global_1058888.f_40545[essParam0 /*11*/].f_4.f_4;
	uParam1->f_5 = Global_1058888.f_40545[essParam0 /*11*/].f_4.f_5;
	return;
}

BOOL func_1035(var uParam0) // Position - 0x38922 Hash - 0xA3DADECB ^0x17886593
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	var unk2;

	if (uParam0->f_4 == -15)
		return 0;

	if (*uParam0 != Global_40.f_7729)
		flag = true;

	if (func_1064(1, &unk))
		if (uParam0->f_1 == unk)
			flag4 = true;
	else if (uParam0->f_1 == 0)
		flag4 = true;

	if (func_1064(1, &unk))
		if (uParam0->f_2 == unk)
			flag5 = true;
	else if (uParam0->f_2 == 0)
		flag5 = true;

	if (func_1064(1, &unk))
		if (uParam0->f_3 == unk)
			flag6 = true;
	else if (uParam0->f_3 == 0)
		flag6 = true;

	if (!flag4 && !flag5 && !flag6)
		flag2 = 1;

	if (func_311(uParam0->f_5, true) != func_1065(&unk2))
		flag3 = true;

	if (flag3)
		if (flag)
			return 1;

	if (flag && flag2)
		return 1;

	return 0;
}

BOOL func_1036(var uParam0) // Position - 0x38A00 Hash - 0xEFB0246 ^0x18F28AEB
{
	return func_311(uParam0->f_5, 2);
}

void func_1037(int iParam0, var uParam1, var uParam2) // Position - 0x38A11 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_1038(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x38A2D Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_1066(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_1067(iParam0))
		return false;

	if (func_1068(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_1069(iParam0, 1) || func_39(32768))
		if (!func_1069(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_1070())
		return false;

	return true;
}

void func_1039(int iParam0, int iParam1) // Position - 0x38ACF Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_1040(var uParam0, BOOL bParam1) // Position - 0x38AF3 Hash - 0xF7B0944E ^0x1D9F02F1
{
	if (bParam1)
		func_84(&(uParam0->f_5), 2);
	else
		func_85(&(uParam0->f_5), 2);

	return;
}

void func_1041(eStackSize essParam0, var uParam1) // Position - 0x38B15 Hash - 0x1270C6A9 ^0x2E8062D4
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_4 = *uParam1;
		Global_23118[essParam0 /*11*/].f_4.f_1 = uParam1->f_1;
		Global_23118[essParam0 /*11*/].f_4.f_2 = uParam1->f_2;
		Global_23118[essParam0 /*11*/].f_4.f_3 = uParam1->f_3;
		Global_23118[essParam0 /*11*/].f_4.f_4 = uParam1->f_4;
		Global_23118[essParam0 /*11*/].f_4.f_5 = uParam1->f_5;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_4 = *uParam1;
	Global_1058888.f_40545[essParam0 /*11*/].f_4.f_1 = uParam1->f_1;
	Global_1058888.f_40545[essParam0 /*11*/].f_4.f_2 = uParam1->f_2;
	Global_1058888.f_40545[essParam0 /*11*/].f_4.f_3 = uParam1->f_3;
	Global_1058888.f_40545[essParam0 /*11*/].f_4.f_4 = uParam1->f_4;
	Global_1058888.f_40545[essParam0 /*11*/].f_4.f_5 = uParam1->f_5;
	return;
}

int func_1042(Hash hParam0) // Position - 0x38BFC Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_1071(outSlotId);
}

int func_1043(int iParam0, int iParam1) // Position - 0x38C1F Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_1044(Hash hParam0) // Position - 0x38DF0 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_883(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Vector3 func_1045(eStackSize essParam0) // Position - 0x38E1B Hash - 0xACD6F870 ^0xDE230469
{
	if (func_1072(essParam0))
		return func_1073(essParam0);

	return Global_1835011[essParam0 /*74*/].f_18;
}

BOOL func_1046(eStackSize essParam0, var uParam1) // Position - 0x38E41 Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_317(Global_1347702[essParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[essParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.1127f, 159.72952f, 103.01753f };
			return true;
		}
	}
	else if (essParam0 == 96)
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.7104f, -1338.3771f, 82.0174f };
			return true;
		}
	}

	return false;
}

float func_1047(float fParam0, float fParam1, float fParam2) // Position - 0x38ED7 Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_1048(int iParam0) // Position - 0x38F19 Hash - 0x497B15BA ^0x497B15BA
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

void func_1049(int iParam0, int iParam1) // Position - 0x38F69 Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

void func_1050(int iParam0, int iParam1) // Position - 0x38F96 Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

void func_1051(int iParam0, int iParam1) // Position - 0x38FB7 Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_1074(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_1074(i, i + 1);
		}
	}

	if (func_46(Global_1898164.f_1[0 /*5*/]))
		func_898(Global_1898164.f_1[0 /*5*/], 3);

	return;
}

int func_1052(var uParam0) // Position - 0x3902D Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_1053(int iParam0) // Position - 0x39037 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_1075(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);

	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_9 = 0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1f;
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(int iParam0) // Position - 0x390EA Hash - 0xA17D549C ^0xAD46E799
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
	
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
	
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
	
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
	
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
	
		case 5:
			return "LBS_GUARMA_BOUNTY";
	
		default:
		
	}

	return "LBS_INVALID_BOUNTY";
}

BOOL func_1055(Hash hParam0, BOOL bParam1) // Position - 0x3914C Hash - 0x62864AB ^0xBC339691
{
	if (func_1044(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_345(24);
		else
			return true;

	return false;
}

struct<4> func_1056(BOOL bParam0) // Position - 0x39185 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_887(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_886(271701509, func_884(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_886(271701509, func_884(bParam0), 12999093, false);
}

BOOL func_1057(Hash hParam0, Hash hParam1) // Position - 0x391E9 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_1044(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_1058(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x39248 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_887(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_1059(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x39278 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_883(hParam0, 0))
		return 0;

	guid = { func_886(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_887(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_1060(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x392C0 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_887(false);
	*panParam1 = { func_886(hParam0, func_999(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_1061(Hash hParam0) // Position - 0x39305 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_1062(Hash hParam0) // Position - 0x3931B Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_1063(BOOL bParam0) // Position - 0x39329 Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_1064(int iParam0, var uParam1) // Position - 0x3933C Hash - 0x37FBC5C6 ^0x7EB1173D
{
	var unk;

	if (!func_1076(iParam0, &unk))
		return false;

	*uParam1 = Global_1946054.f_1497.f_1[func_1043(unk, 1) /*3*/];
	return true;
}

BOOL func_1065(var uParam0) // Position - 0x3936A Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_1077(81053684))
		if (func_1078(uParam0))
			return 1;
	else if (func_984(-525676072, uParam0))
		if (func_1078(uParam0))
			return 1;

	return 0;
}

BOOL func_1066(int iParam0, int iParam1) // Position - 0x393AF Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_27() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_1067(int iParam0) // Position - 0x393E2 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_27() != -1)
		if (func_1069(iParam0, 4))
			return false;
	else if (func_1069(iParam0, 2))
		return false;

	return true;
}

BOOL func_1068(int iParam0) // Position - 0x39412 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_1069(iParam0, 65536) && !func_1069(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_1069(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_1069(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_1069(int iParam0, int iParam1) // Position - 0x394BE Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_1070() // Position - 0x394D7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_1071(var uParam0) // Position - 0x394E6 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_1079(i, 1);
	}

	return -358215195;
}

BOOL func_1072(eStackSize essParam0) // Position - 0x39521 Hash - 0x67D822A ^0x67D822A
{
	switch (essParam0)
	{
		case 14:
		case 34:
			return !func_1080(&Global_1835011[essParam0 /*74*/]);
	}

	return false;
}

Vector3 func_1073(eStackSize essParam0) // Position - 0x39551 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (essParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[essParam0 /*74*/].f_18;
}

void func_1074(int iParam0, int iParam1) // Position - 0x395A3 Hash - 0x676FADFF ^0x1734896
{
	var unk;

	unk = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { unk };
	return;
}

BOOL func_1075(int iParam0) // Position - 0x395E3 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_1081(iParam0, 2);
}

BOOL func_1076(int iParam0, var uParam1) // Position - 0x395F2 Hash - 0x7A5B7E59 ^0xAE8469B6
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
			break;
	
		case 1:
			*uParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
			break;
	
		case 2:
			*uParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
			break;
	
		default:
			return false;
	}

	return true;
}

Hash func_1077(Hash hParam0) // Position - 0x3963D Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_1043(func_1042(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_1078(var uParam0) // Position - 0x3966C Hash - 0x313F44CF ^0x6235E18A
{
	if (func_984(81053684, uParam0))
		return true;

	if (func_984(-525676072, uParam0))
		return true;

	return false;
}

int func_1079(int iParam0, int iParam1) // Position - 0x39699 Hash - 0xE1D12727 ^0xA46110B3
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_1080(int iParam0) // Position - 0x398E8 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_1082(&(iParam0->f_29), 62))
	{
		switch (func_1083())
		{
			case 1:
				if (!func_1082(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_1082(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_1082(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_1082(&(iParam0->f_29), 32))
					if (func_1082(&(iParam0->f_29), 2))
						if (func_258(func_177()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

BOOL func_1081(int iParam0, int iParam1) // Position - 0x39992 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_1082(var uParam0, int iParam1) // Position - 0x399B3 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_1083() // Position - 0x399D3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

