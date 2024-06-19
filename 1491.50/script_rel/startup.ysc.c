// Program registers 43909 globals at index 0 starting from Global_0
#region Local Var
	char* sLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	char* sLocal_22 = 0;
	char* sLocal_23 = 0;
	char* sLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = -1;
	var uLocal_33 = 0;
	char* sLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 10;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xDBE50A1 ^0xDBE50A1
{
	var unk;
	int clockHours;

	sLocal_0 = "";
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	sLocal_21 = "mech_skin@BUCK_BUTCHER";
	sLocal_22 = "PBL_BASE";
	sLocal_23 = "PBL_DUMP";
	sLocal_24 = "PBL_DROP_IN";
	sLocal_34 = "beat_gang_camp_reminder";
	iLocal_35 = 23;
	func_1();
	func_2();
	BUILTIN::WAIT(0);
	func_3();
	unk = 11;

	while (!func_4(&unk))
	{
		BUILTIN::WAIT(0);
	}

	func_5(false);

	if (!Global_40)
	{
	}

	func_6();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);

	while (DLC::GET_IS_LOADING_SCREEN_ACTIVE() && func_7(&uLocal_39) < 2)
	{
		func_8();
		BUILTIN::WAIT(0);
	}

	NETWORK::_0xE5FF65CFF5160752();
	func_9(0);

	while (true)
	{
		clockHours = CLOCK::GET_CLOCK_HOURS();
		func_10(clockHours);
		func_11(clockHours);
		func_12(&uLocal_123);
		func_14(func_13() == 3);
		func_15(&Global_1899245);
		func_8();
	
		if (func_16(1024))
		{
			AUDIO::_STOP_AUDIO_SCENESET("Load_Menu_Scenes");
			func_17(1024);
		}
	
		switch (func_13())
		{
			case 0:
				if (Global_40)
				{
					func_18();
					func_17(4);
				}
				else if (MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 496295564)
				{
					func_18();
					func_17(4);
				}
				else if (!func_19())
				{
					func_20(1);
				}
			
				if (func_21() == 1 || func_21() == 0)
				{
					func_22();
					func_9(1);
				}
				else
				{
					func_17(4);
					func_9(2);
				}
				break;
		
			case 1:
				if (func_23())
				{
					func_17(4);
					func_9(2);
				}
				break;
		
			case 2:
				func_24();
			
				if (func_25(func_21()))
					func_9(3);
				break;
		
			case 3:
				func_26();
				func_27();
				func_28();
			
				if (func_29())
				{
					func_30();
					func_9(4);
				}
				break;
		
			case 4:
				if (func_31())
				{
					func_32();
					func_17(4);
					func_17(64);
					func_33();
				
					if (func_21() == 1)
					{
						func_9(5);
						SCRIPTS::BAIL_TO_LANDING_PAGE(0);
					}
					else if (func_21() == 4)
					{
						func_9(2);
					}
					else if (func_34() != 1)
					{
						func_9(5);
						func_35();
					}
					else
					{
						func_9(2);
					}
				}
				break;
		
			case 5:
				func_35();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x230 Hash - 0xF23A8258 ^0xC2E9910E
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::_0x3E74A687A73979C6(true);
	AUDIO::_START_AUDIO_SCENESET("Main_Menu", "Load_Menu_Scenes");
	return;
}

void func_2() // Position - 0x24C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_3() // Position - 0x254 Hash - 0x8D358F26 ^0xD384A43E
{
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	func_36();
	func_37();
	func_38();
	func_39();
	return;
}

BOOL func_4(var uParam0) // Position - 0x276 Hash - 0x26A73C4B ^0x26A73C4B
{
	BOOL flag;
	int i;

	flag = true;

	for (i = 0; i < 11; i = i + 1)
	{
		if (func_40(i))
			if (!func_41(i, &uParam0->[i]))
				flag = false;
	}

	if (flag)
		SCRIPTS::_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(true);

	return flag;
}

void func_5(BOOL bParam0) // Position - 0x2BC Hash - 0x65A6283D ^0x3555EEEA
{
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9, bParam0);
	return;
}

void func_6() // Position - 0x2E9 Hash - 0xCA99F4AA ^0x99DDB6E3
{
	func_42();
	func_43();
	STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
	MAP::_SET_MINIMAP_ZONE(joaat("WORLD"));
	func_44();
	return;
}

int func_7(Any anParam0) // Position - 0x30B Hash - 0xD73B9827 ^0x5CBCD36B
{
	return anParam0->f_76;
}

void func_8() // Position - 0x317 Hash - 0x733AA191 ^0x1A3404DC
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		func_45(&uLocal_39);
	else if (func_46(&uLocal_39))
		func_47(&uLocal_39);

	return;
}

void func_9(int iParam0) // Position - 0x33F Hash - 0xE6AC7889 ^0xC65DF37B
{
	iLocal_36 = iParam0;
	iLocal_36.f_1 = MISC::GET_GAME_TIMER();
	return;
}

void func_10(int iParam0) // Position - 0x353 Hash - 0xF886E36C ^0xF886E36C
{
	if (iParam0 < 6)
	{
		Global_1899516 = 8;
		return;
	}

	if (iParam0 < 12)
	{
		Global_1899516 = 1;
		return;
	}

	if (iParam0 < 18)
	{
		Global_1899516 = 2;
		return;
	}

	Global_1899516 = 4;
	return;
}

void func_11(int iParam0) // Position - 0x38D Hash - 0xA74C55AA ^0xCA06802C
{
	eStackSize stackSize;
	int clockYear;

	stackSize = BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6) || BUILTIN::SHIFT_LEFT(iParam0, 12) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17);
	clockYear = CLOCK::GET_CLOCK_YEAR();

	if (clockYear < 0 || clockYear > 1930 || clockYear < 1866)
		return;

	if (clockYear < 1898)
	{
		stackSize = stackSize || BUILTIN::SHIFT_LEFT(1898 - clockYear, 26) | -2147483648;
	}
	else
	{
		stackSize = stackSize || BUILTIN::SHIFT_LEFT(clockYear - 1898, 26);
		stackSize = stackSize - stackSize & -2147483648;
	}

	Global_1899515 = stackSize;
	return;
}

void func_12(var uParam0) // Position - 0x437 Hash - 0xA743171 ^0x61BC29E1
{
	BOOL flag;

	if (func_48() == -3)
		return;

	flag = COMPAPP::_0x7AF1BB4504EA5ED9();

	if (Global_1955830 != flag)
	{
		Global_1955830 = flag;
	
		if (flag)
		{
			func_49("COMP_APP_CONNECT", 10000, 0, 0, 0, true);
		}
		else
		{
			*uParam0 = 0;
			func_50(&(uParam0->f_1));
			func_49("COMP_APP_DISCONNECT", 10000, 0, 0, 0, true);
		}
	
		func_51();
	}

	if (Global_1955830)
		func_52(uParam0);

	func_51();
	return;
}

int func_13() // Position - 0x4A8 Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_36;
}

void func_14(BOOL bParam0) // Position - 0x4B2 Hash - 0x57B12382 ^0x57B12382
{
	func_53();
	func_54();

	if (!bParam0)
		return;

	func_55();
	func_56();
	return;
}

void func_15(int iParam0) // Position - 0x4D3 Hash - 0xCCA13344 ^0x534126D1
{
	switch (*iParam0)
	{
		case 0:
			if (!MISC::IS_ORBIS_VERSION())
				func_57(3);
		
			if (func_58())
			{
				_STOPWATCH_DESTROY(&(Global_1899245.f_1));
				func_57(1);
			}
			break;
	
		case 1:
			if (func_60(&(Global_1899245.f_1), 10000, true))
				func_57(2);
			break;
	
		case 2:
			func_61();
		
			if (!func_58())
				func_57(0);
			break;
	
		case 3:
			if (func_58())
				func_62();
			break;
	
		default:
			func_57(0);
			break;
	}

	return;
}

BOOL func_16(int iParam0) // Position - 0x565 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_17(int iParam0) // Position - 0x578 Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_18() // Position - 0x596 Hash - 0xCC3DADD5 ^0x8B46061D
{
	func_63(4);
	func_20(2);

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_64(joaat("benchmark"))))
		Global_43893 = true;

	func_65(joaat("single_player"), 0);
	return;
}

BOOL func_19() // Position - 0x5C9 Hash - 0xF9396AAC ^0xF9396AAC
{
	BOOL num;

	num = 0;
	return num;
}

void func_20(int iParam0) // Position - 0x5D6 Hash - 0x2BE23AD4 ^0x369A49EF
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

int func_21() // Position - 0x5EF Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1572864.f_1;
}

void func_22() // Position - 0x5FD Hash - 0xE56DF302 ^0xE56DF302
{
	var unk;

	iLocal_15 = { unk };
	return;
}

BOOL func_23() // Position - 0x60D Hash - 0x98799E28 ^0xD238F802
{
	func_66();

	switch (func_67())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_PUSH_PAGE("/landing");
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(FRONTEND_CONTROL, 0);
				func_68();
				func_69(true);
				func_70();
				func_71();
				func_72(0);
				func_73();
				func_74(-1);
				func_75(1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
			}
			break;
	
		case 1:
			if (func_76())
			{
				func_75(2);
			}
			else if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
			{
				func_75(2);
				iLocal_15.f_2 = 4;
			}
			break;
	
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || func_77())
			{
				if (func_78())
				{
					NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
					func_79();
				}
				else
				{
					iLocal_15.f_2 = 1;
					func_63(4);
				}
			
				if (func_77())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				func_20(iLocal_15.f_2);
				AUDIO::TRIGGER_MUSIC_EVENT("stop_title_screen_music");
				GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_POP_PAGE("/landing");
				NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
				PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(FRONTEND_CONTROL);
				return true;
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	}

	return false;
}

void func_24() // Position - 0x742 Hash - 0x86CFFCBC ^0x5C5926CB
{
	if (!func_16(64))
		return;

	switch (func_80())
	{
		case joaat("MISSION"):
			break;
	
		case joaat("Series"):
			break;
	
		case joaat("freeroam"):
			if (func_81(joaat("hardcore")))
				func_82(2);
			else if (func_81(joaat("Friendly")))
				func_82(1);
			else
				func_82(0);
		
			if (func_81(joaat("shift_f")))
				Global_31 = 1;
		
			if (func_81(joaat("demo")))
				Global_33 = 1;
		
			if (func_81(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				Global_34 = 1;
			else
				Global_34 = 0;
		
			if (func_81(joaat("PRIVATE")))
				Global_1572887.f_5 = 1;
			else
				Global_1572887.f_5 = 0;
		
			if (func_81(joaat("NEW_GAME")))
				Global_30 = true;
		
			func_81(joaat("intro_not_done"));
			func_81(joaat("near_posse"));
			func_81(joaat("random_posse"));
			func_81(joaat("Handheld"));
			break;
	
		case joaat("MISSION_CREATOR"):
			Global_32 = 1;
			Global_1572887.f_5 = 1;
			break;
	
		case joaat("Minigame"):
			break;
	}

	func_17(64);
	return;
}

BOOL func_25(int iParam0) // Position - 0x86A Hash - 0x6C05A0EB ^0x2A04A167
{
	char* str;
	eStackSize stackSize;

	stackSize = 1024;

	switch (iParam0)
	{
		case 1:
			func_63(4);
			return true;
	
		case 2:
			str = func_83(2);
			stackSize = 1024;
			break;
	
		case 3:
			str = func_83(3);
			stackSize = 25500;
			break;
	
		case 4:
			str = func_83(4);
			stackSize = 1024;
			break;
	}

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(str)) > 0)
	{
		func_84(iParam0);
		return true;
	}

	if (func_85(str, stackSize))
	{
		func_84(iParam0);
		func_86(iParam0);
		func_32();
		return true;
	}

	return false;
}

void func_26() // Position - 0x908 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_27() // Position - 0x910 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_28() // Position - 0x918 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_29() // Position - 0x920 Hash - 0x12658198 ^0x8ABC46BD
{
	if (func_34() != func_21())
		return true;

	if (func_16(4))
		return true;

	if (func_76())
	{
		func_78();
		CAM::DO_SCREEN_FADE_OUT(0);
		return true;
	}

	return false;
}

void func_30() // Position - 0x959 Hash - 0xA22E9670 ^0xC29E414D
{
	func_36();
	func_17(4);
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);

	if (func_34() == 3)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1572887.f_14))
			func_63(2048);
	}
	else
	{
		PLAYER::FORCE_CLEANUP(2);
		func_63(64);
	}

	return;
}

BOOL func_31() // Position - 0x999 Hash - 0x107BE1E6 ^0x90B02DC0
{
	int nextThreadId;
	int idOfThisThread;
	BOOL num;
	BOOL flag;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	nextThreadId = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	num = 1;

	while (SCRIPTS::DOES_THREAD_EXIST(nextThreadId))
	{
		flag = true;
	
		if (nextThreadId == idOfThisThread)
			flag = false;
		else if (SCRIPTS::_IS_BACKGROUND_SCRIPT(nextThreadId))
			flag = false;
	
		if (flag)
		{
			if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(nextThreadId))
				SCRIPTS::_REQUEST_THREAD_EXIT(nextThreadId);
		
			if (func_48() == -1)
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(nextThreadId, 2);
		
			num = 0;
			BUILTIN::WAIT(0);
		}
	
		nextThreadId = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}

	return num;
}

void func_32() // Position - 0xA10 Hash - 0xEBAA0618 ^0x4A862B3F
{
	if (func_34() != 2)
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(2));

	if (func_34() != 3)
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(3));

	if (func_34() != 4)
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(4));

	return;
}

void func_33() // Position - 0xA4B Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_34() // Position - 0xA53 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1572864;
}

void func_35() // Position - 0xA5F Hash - 0x11351448 ^0x348ACF69
{
	const char* launchParamString;

	launchParamString = NETWORK::_GET_LAUNCH_PARAM_STRING();

	if (MISC::IS_STRING_NULL_OR_EMPTY(launchParamString))
	{
		launchParamString = func_87();
		SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(launchParamString);
		return;
	}

	SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(launchParamString);
	return;
}

void func_36() // Position - 0xA8B Hash - 0x20160D3B ^0x100D2972
{
	func_88();
	func_89();
	func_90();
	SCRIPTS::_0x11B0A0B282FA9B10(false);
	return;
}

void func_37() // Position - 0xAA4 Hash - 0x5E1159E ^0xC9ED4055
{
	var unk;
	var variableName;
	int i;

	sLocal_0 = "startup";
	SAVE::_0x9BB83C4DD7BE0802(&Global_40, 12066, 1, sLocal_0, 94);
	func_91(&(Global_40.f_9));
	func_92(&(Global_40.f_40), "g_savedGlobals.sFlow", 1);
	func_93(&(Global_40.f_1095), "g_savedGlobals.playerHorse", 1);
	func_94(&(Global_40.f_9910));
	func_95(&(Global_40.f_4283));
	func_96(&(Global_40.f_9052));
	func_97(&(Global_40.f_9074));
	func_98(&(Global_40.f_9079));
	func_99(&(Global_40.f_9146));
	func_100(&(Global_40.f_7756));
	func_101(&(Global_40.f_7832), "g_savedGlobals.eTutorialsRun", 1);
	func_102(&(Global_40.f_358));
	func_103(&(Global_40.f_431));
	func_104(&(Global_40.f_7100));
	func_105(&(Global_40.f_450));
	func_106(&(Global_40.f_490));
	func_107(&(Global_40.f_4237));
	func_108(&(Global_40.f_4942));
	func_109(&(Global_40.f_6563));
	func_110(&(Global_40.f_7039));
	func_111(&(Global_40.f_7157));
	func_112(&(Global_40.f_7731));
	func_113(&(Global_40.f_7748));
	func_114(&(Global_40.f_7862), "g_savedGlobals.mapBlipData", 1);
	func_115(&(Global_40.f_8863));
	func_116(&(Global_40.f_9028));
	func_117(&(Global_40.f_9020));
	func_118(&(Global_40.f_9096));
	func_119(&(Global_40.f_9145));
	func_120(&(Global_40.f_9274), "g_savedGlobals.herbs", 1);
	func_121(&(Global_40.f_9319));
	func_122(&(Global_40.f_9384));
	func_123(&(Global_40.f_9422));
	func_124(&(Global_40.f_9479));
	func_125(&(Global_40.f_9536));
	func_126(&(Global_40.f_11943));
	func_127(&(Global_40.f_9571));
	func_128(&(Global_40.f_9632));
	func_129(&(Global_40.f_10991));
	func_130(&(Global_40.f_283));
	func_131(&(Global_40.f_297));
	func_132(&(Global_40.f_7857));
	func_133(&(Global_40.f_9829));
	func_134(&(Global_40.f_11029));
	func_135(&(Global_40.f_11095));
	func_136(&(Global_40.f_11166));
	func_137(&(Global_40.f_7443));
	func_138(&(Global_40.f_9419));
	func_139(&(Global_40.f_11182));
	func_140(&(Global_40.f_11184));
	func_141(&(Global_40.f_11206));
	func_142(&(Global_40.f_11623));
	func_143(&(Global_40.f_11959));
	func_144(&(Global_40.f_11864));
	func_145(&(Global_40.f_11883));
	func_146(&(Global_40.f_11922));
	func_147(&(Global_40.f_9045));
	func_148(&(Global_40.f_12000));
	func_149(&(Global_40.f_12003));
	func_150(&(Global_40.f_12004));
	func_151(&(Global_40.f_12019));
	SAVE::_SAVEGAME_GET_BOOL(&Global_40, "bGameInitialized");
	SAVE::_SAVEGAME_GET_BOOL(&(Global_40.f_1), "bInGameflow");
	SAVE::_SAVEGAME_GET_BOOL(&(Global_40.f_9421), "bUsedFirstPerson");
	func_152(&(Global_40.f_2), "vLastCampPosition");
	SAVE::_SAVEGAME_GET_FLOAT(&(Global_40.f_5), "fLastCampHeading");
	func_152(&(Global_40.f_6), "vCurrentCaravanBedPosition");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_7854), "minigameUnlocked");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_7855), "jobUnlocked");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_7856), "procmissionUnlocked");
	SAVE::_SAVEGAME_GET_INT_3(&(Global_40.f_7729), "wornOutfit");
	SAVE::_SAVEGAME_GET_INT_3(&(Global_40.f_39), "playerCharacterModel");
	SAVE::_SAVEGAME_GET_INT_3(&(Global_40.f_449), "lawBountyAchievement");
	SAVE::_SAVEGAME_GET_INT_3(&(Global_40.f_1093), "eRCMIndexTracked");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_1094), "iRCMsActive");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_7755), "deadeyeLevel");
	SAVE::_SAVEGAME_GET_BOOL(&(Global_40.f_11953), "bAttackedBurial");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_11954), "iMickeyMemory");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_11955), "iStudiedAnimalsNoBinoculars");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_11956), "iLastPayoffTutorialMessage");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_11957), "iSavedBounty");
	SAVE::_SAVEGAME_GET_BOOL(&(Global_40.f_7730), "bHatKnockedOff");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_9273), "iHerbArrLocation");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_11958), "iSPMinigameAchievementTracker");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_11999), "iSPChecksum");
	SAVE::_SAVEGAME_GET_BOOL(&(Global_40.f_7860), "bEndlessSummerInitialized");
	SAVE::_SAVEGAME_GET_INT_2(&(Global_40.f_7861), "iMoneyBeforeGuarma");
	TEXT_LABEL_ASSIGN_STRING(&unk, "specialWildHorse", 64);
	SAVE::_0x81F4E92BE3958364(&(Global_40.f_11945), 8, &unk);

	for (i = 0; i < Global_40.f_11945; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&Global_40.f_11945[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_BOOL(&(Global_40.f_12017), "bPhotoModeToastDelivered");
	SAVE::_SAVEGAME_GET_BOOL(&(Global_40.f_12018), "bFlacoCabinCigBoxLooted");
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedDeeds";
	SAVE::_0x9BB83C4DD7BE0802(&Global_12106, 5398, 1, sLocal_0, 1);
	func_153(&Global_12106);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedBeats";
	SAVE::_0x9BB83C4DD7BE0802(&Global_17504, 3206, 1, sLocal_0, 1);
	func_154(&Global_17504);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedShops";
	SAVE::_0x9BB83C4DD7BE0802(&Global_20710, 2408, 1, sLocal_0, 1);
	func_155(&Global_20710);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedRegions";
	SAVE::_0x9BB83C4DD7BE0802(&Global_23118, 1769, 1, sLocal_0, 3);
	func_156(&Global_23118);
	func_157(&(Global_23118.f_1651));
	SAVE::_SAVEGAME_GET_INT_2(&(Global_23118.f_1768), "g_savedGlobalsRegions.iInnocentsKilled");
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedRegionalCharacters";
	SAVE::_0x9BB83C4DD7BE0802(&Global_24887, 1909, 1, sLocal_0, 1);
	func_158(&Global_24887);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedPlayerOutfits";
	SAVE::_0x9BB83C4DD7BE0802(&Global_26796, 777, 1, sLocal_0, 1);
	func_159(&Global_26796);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedHerbs";
	SAVE::_0x9BB83C4DD7BE0802(&Global_27573, 4501, 1, sLocal_0, 1);
	func_160(&Global_27573);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedVignettes";
	SAVE::_0x9BB83C4DD7BE0802(&Global_32074, 4234, 1, sLocal_0, 2);
	func_161(&Global_32074);
	func_162(&(Global_32074.f_2697));
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(1);
	return;
}

void func_38() // Position - 0x102A Hash - 0x6E447B86 ^0x428FF7CB
{
	sLocal_0 = "startup";
	SAVE::_0xED4B0C1057892B2E(&Global_36638, 1466, 0, sLocal_0);
	func_120(&Global_36638, "g_mpSavedGlobals.herbs", 0);
	func_163(&(Global_36638.f_45), "g_mpSavedGlobals.sPersona");
	func_101(&(Global_36638.f_1444), "g_mpSavedGlobals.eTutorialsRun", 0);
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(0);
	return;
}

void func_39() // Position - 0x1075 Hash - 0x197F5A5F ^0x16AA900D
{
	SCRIPTS::REQUEST_SCRIPT(func_83(2));
	SCRIPTS::REQUEST_SCRIPT(func_83(3));
	SCRIPTS::REQUEST_SCRIPT(func_83(4));
	func_164();
	return;
}

BOOL func_40(int iParam0) // Position - 0x109C Hash - 0xB0BCC186 ^0xB0BCC186
{
	if (iParam0 != 0 && iParam0 != 3)
		return true;

	return false;
}

BOOL func_41(int iParam0, var uParam1) // Position - 0x10B9 Hash - 0xAB492A1D ^0xBE68C5F0
{
	switch (*uParam1)
	{
		case 0:
			if (func_165(iParam0, true))
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, false);
				SCRIPTS::REQUEST_SCRIPT(func_166(iParam0));
				func_167(uParam1, 1, iParam0);
			}
			else
			{
				func_167(uParam1, 3, iParam0);
				return true;
			}
			break;
	
		case 1:
			if (SCRIPTS::HAS_SCRIPT_LOADED(func_166(iParam0)))
			{
				SCRIPTS::START_NEW_SCRIPT(func_166(iParam0), MICRO);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_166(iParam0));
				func_167(uParam1, 2, iParam0);
			}
			break;
	
		case 2:
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(func_166(iParam0))) == 0)
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, true);
				func_167(uParam1, 3, iParam0);
				return true;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_42() // Position - 0x1180 Hash - 0xACB013D7 ^0x7CF47D21
{
	var propertyName;

	DECORATOR::DECOR_REGISTER("outfitChanged", BOOL);
	DECORATOR::DECOR_REGISTER("playerChangeOutfits", BOOL);
	DECORATOR::DECOR_REGISTER("HorseHitchRope", INT);
	DECORATOR::DECOR_REGISTER("Whistling", BOOL);
	DECORATOR::DECOR_REGISTER("Inspecting_Item", BOOL);
	DECORATOR::DECOR_REGISTER("JustSavedAtBed", BOOL);
	DECORATOR::DECOR_REGISTER("CookingMeat", BOOL);
	DECORATOR::DECOR_REGISTER("build_success", BOOL);
	DECORATOR::DECOR_REGISTER("RWARV_Dominoes", BOOL);
	DECORATOR::DECOR_REGISTER("Fishing_LaunchNow", BOOL);
	DECORATOR::DECOR_REGISTER("RKTTY_Asked", BOOL);
	DECORATOR::DECOR_REGISTER("RKTTY_Wagon", BOOL);
	DECORATOR::DECOR_REGISTER("iDamageFrame", INT);
	DECORATOR::DECOR_REGISTER("bIgnoreDamageChecking", BOOL);
	DECORATOR::DECOR_REGISTER("rev_comment", BOOL);
	DECORATOR::DECOR_REGISTER("camp_attacker", BOOL);
	DECORATOR::DECOR_REGISTER("HorseGender", INT);
	DECORATOR::DECOR_REGISTER("HorseCamp", BOOL);
	DECORATOR::DECOR_REGISTER("HorseCompanion", BOOL);
	DECORATOR::DECOR_REGISTER("CaravanCommonHorse", BOOL);
	DECORATOR::DECOR_REGISTER("CaravanLivestock", BOOL);
	DECORATOR::DECOR_REGISTER("StableOwnedHorse", INT);
	DECORATOR::DECOR_REGISTER("HorseMission", BOOL);
	DECORATOR::DECOR_REGISTER("bHorseHasBeenStolen", BOOL);
	DECORATOR::DECOR_REGISTER("bHasBeenLassoedFromHorse", BOOL);
	DECORATOR::DECOR_REGISTER("bHasBeenTrampledByHorse", BOOL);
	DECORATOR::DECOR_REGISTER("companion_manager_msg", INT);
	DECORATOR::DECOR_REGISTER("companion_manager_command", INT);
	DECORATOR::DECOR_REGISTER("companion_manager_watch_mode", INT);
	DECORATOR::DECOR_REGISTER("outfit_tags", INT);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request", INT);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request_name", INT);
	DECORATOR::DECOR_REGISTER("chinLong", INT);
	DECORATOR::DECOR_REGISTER("chopsLong", INT);
	DECORATOR::DECOR_REGISTER("stacheLong", INT);
	DECORATOR::DECOR_REGISTER("chinShort", INT);
	DECORATOR::DECOR_REGISTER("chopsShort", INT);
	DECORATOR::DECOR_REGISTER("stacheShort", INT);
	DECORATOR::DECOR_REGISTER("hairLong", INT);
	DECORATOR::DECOR_REGISTER("hairShort", INT);
	DECORATOR::DECOR_REGISTER("player_newWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponType", INT);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponTime", INT);
	DECORATOR::DECOR_REGISTER("chest_open", BOOL);
	DECORATOR::DECOR_REGISTER("loot_money", INT);
	DECORATOR::DECOR_REGISTER("fLoot_money", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_type1", INT);
	DECORATOR::DECOR_REGISTER("loot_item_amt1", INT);
	DECORATOR::DECOR_REGISTER("loot_item_model1", INT);
	DECORATOR::DECOR_REGISTER("loot_item_offset1x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset1y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset1z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient1x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient1y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient1z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_type2", INT);
	DECORATOR::DECOR_REGISTER("loot_item_amt2", INT);
	DECORATOR::DECOR_REGISTER("loot_item_model2", INT);
	DECORATOR::DECOR_REGISTER("loot_item_offset2x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset2y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_offset2z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient2x", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient2y", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_item_orient2z", FLOAT);
	DECORATOR::DECOR_REGISTER("loot_ammo1_type", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo1_amt", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo2_type", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo2_amt", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo3_type", INT);
	DECORATOR::DECOR_REGISTER("loot_ammo3_amt", INT);
	DECORATOR::DECOR_REGISTER("loot_weapon", INT);
	DECORATOR::DECOR_REGISTER("loot_empty", BOOL);
	DECORATOR::DECOR_REGISTER("lootable_interior", INT);
	DECORATOR::DECOR_REGISTER("scripted_loot_only", BOOL);
	DECORATOR::DECOR_REGISTER("got_loot", BOOL);
	DECORATOR::DECOR_REGISTER("ransack", BOOL);
	DECORATOR::DECOR_REGISTER("loot_long_custom_anim_data_set", UNK);
	DECORATOR::DECOR_REGISTER("letter_item", INT);
	DECORATOR::DECOR_REGISTER("loot_allow_random", BOOL);
	DECORATOR::DECOR_REGISTER("bLostLogs", BOOL);
	DECORATOR::DECOR_REGISTER("bNoticePlayer", BOOL);
	DECORATOR::DECOR_REGISTER("bIgnoreThisPed", BOOL);
	DECORATOR::DECOR_REGISTER("bPedAlreadyCounted", BOOL);
	DECORATOR::DECOR_REGISTER("bCowering", BOOL);
	DECORATOR::DECOR_REGISTER("bChopDown", BOOL);
	DECORATOR::DECOR_REGISTER("bGPSEnabled", BOOL);
	DECORATOR::DECOR_REGISTER("interactNeg", INT);
	DECORATOR::DECOR_REGISTER("bOnBreak", BOOL);
	DECORATOR::DECOR_REGISTER("bScriptedILO", BOOL);
	DECORATOR::DECOR_REGISTER("bAmbientCoachLooted", BOOL);
	DECORATOR::DECOR_REGISTER("ValuableCoach", BOOL);
	DECORATOR::DECOR_REGISTER("Herd_Panicked_Member", BOOL);
	DECORATOR::DECOR_REGISTER("honor_block", INT);
	DECORATOR::DECOR_REGISTER("honor_bank", INT);
	DECORATOR::DECOR_REGISTER("honor_override", INT);
	DECORATOR::DECOR_REGISTER("not_enemy", BOOL);
	DECORATOR::DECOR_REGISTER("bleed_start_time", INT);
	DECORATOR::DECOR_REGISTER("instigated_by_player", BOOL);
	DECORATOR::DECOR_REGISTER("wagon_block_honor", BOOL);
	DECORATOR::DECOR_REGISTER("lose_honor_steal_vehicle", BOOL);
	DECORATOR::DECOR_REGISTER("player_greeted", BOOL);
	DECORATOR::DECOR_REGISTER("player_antagonized", BOOL);
	DECORATOR::DECOR_REGISTER("was_antagonized", BOOL);
	DECORATOR::DECOR_REGISTER("injured_woman", BOOL);
	DECORATOR::DECOR_REGISTER("recently_punched", BOOL);
	DECORATOR::DECOR_REGISTER("was_hurt", BOOL);
	TEXT_LABEL_ASSIGN_STRING(&propertyName, func_168(), 32);
	DECORATOR::DECOR_REGISTER(&propertyName, INT);
	TEXT_LABEL_ASSIGN_STRING(&propertyName, func_169(), 32);
	DECORATOR::DECOR_REGISTER(&propertyName, INT);
	TEXT_LABEL_ASSIGN_STRING(&propertyName, func_170(), 32);
	DECORATOR::DECOR_REGISTER(&propertyName, INT);
	TEXT_LABEL_ASSIGN_STRING(&propertyName, func_171(), 32);
	DECORATOR::DECOR_REGISTER(&propertyName, INT);
	TEXT_LABEL_ASSIGN_STRING(&propertyName, func_172(), 32);
	DECORATOR::DECOR_REGISTER(&propertyName, FLOAT);
	TEXT_LABEL_COPY(&propertyName, { func_173() }, 4);
	DECORATOR::DECOR_REGISTER(&propertyName, INT);
	DECORATOR::DECOR_REGISTER("pedRoam_bInPedRoam", BOOL);
	DECORATOR::DECOR_REGISTER("pedRoam_targetRegion", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_state", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_behavior", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_target", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord_Z", FLOAT);
	DECORATOR::DECOR_REGISTER("pedRoam_targetArea", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_hashKey", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_owner", INT);
	DECORATOR::DECOR_REGISTER("pedRoam_flags", INT);
	DECORATOR::DECOR_REGISTER("register_open", BOOL);
	DECORATOR::DECOR_REGISTER("register_open_rdy", BOOL);
	DECORATOR::DECOR_REGISTER("camera_takingPic", BOOL);
	DECORATOR::DECOR_REGISTER("wearing_bandana", BOOL);
	DECORATOR::DECOR_REGISTER("temp_HorseBroken", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_bnp_beauHogtie", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_bnp_PenelopeHogtie", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_elz1_elizaHogtie", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_SerialKiller_hogtie", BOOL);
	DECORATOR::DECOR_REGISTER("proc_bounty_target", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_played", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_passed", BOOL);
	DECORATOR::DECOR_REGISTER("rcm_lakay_bounty_target", BOOL);
	DECORATOR::DECOR_REGISTER("LoanShark_Knowing", BOOL);
	DECORATOR::DECOR_REGISTER("LoanShark_Questioned", BOOL);
	TEXT_LABEL_ASSIGN_STRING(&propertyName, func_174(), 32);
	DECORATOR::DECOR_REGISTER(&propertyName, BOOL);
	DECORATOR::DECOR_REGISTER("player_crafting_active", BOOL);
	DECORATOR::DECOR_REGISTER("player_whittling_active", BOOL);
	DECORATOR::DECOR_REGISTER("bShowIsReady", BOOL);
	DECORATOR::DECOR_REGISTER("bShowIsPaidFor", BOOL);
	DECORATOR::DECOR_REGISTER("bUpdatedPlayer", BOOL);
	DECORATOR::DECOR_REGISTER("Global_Object_Unique_ID", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_PackedDeed", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_Value", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpStart", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpDuration", INT);
	DECORATOR::DECOR_REGISTER("Global_Object_No_Blip", BOOL);
	DECORATOR::_DECOR_REGISTER_2(func_175(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_176(), 6, true);
	DECORATOR::_DECOR_REGISTER_2(func_177(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_178(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_179(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_180(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_181(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_182(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_183(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_184(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_185(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("bFmeBaseHasWeapon", 2, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameHash", 3, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameSeat", 3, true);
	DECORATOR::DECOR_REGISTER("bBeatPed", BOOL);
	DECORATOR::DECOR_REGISTER("bIgnoreLawMissionEntity", BOOL);
	DECORATOR::DECOR_REGISTER("Has_Voice", BOOL);
	DECORATOR::DECOR_REGISTER("bUnarmed", BOOL);
	DECORATOR::DECOR_REGISTER("RANSACK", BOOL);
	DECORATOR::DECOR_REGISTER("bIsCriminal", BOOL);
	DECORATOR::DECOR_REGISTER("bDeadOrAlive", BOOL);
	DECORATOR::DECOR_REGISTER("bReacted_To_Shocking_Event", BOOL);
	DECORATOR::DECOR_REGISTER("REDJ_Witness_Time", FLOAT);
	DECORATOR::DECOR_REGISTER("SafeOpened", BOOL);
	DECORATOR::DECOR_REGISTER("TargetHit", BOOL);
	DECORATOR::DECOR_REGISTER("bBeatCriminal", BOOL);
	DECORATOR::DECOR_REGISTER("bIsSpecialPed", BOOL);
	DECORATOR::DECOR_REGISTER("iSpecialPedID", INT);
	DECORATOR::DECOR_REGISTER("bPickupThisCorpse", BOOL);
	DECORATOR::DECOR_REGISTER("last_gun_damage_time_in_ms", INT);
	DECORATOR::DECOR_REGISTER("grapple_start_time", INT);
	DECORATOR::DECOR_REGISTER("grapple_tutorial_played", BOOL);
	DECORATOR::DECOR_REGISTER("worn_tutorial", BOOL);
	DECORATOR::DECOR_REGISTER("propsetName", UNK);
	DECORATOR::DECOR_REGISTER("witnessCannotBeBribedOrThreatened", BOOL);
	DECORATOR::_DECOR_REGISTER_2("MP_HUD_Bits", 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_186(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_187(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_188(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_189(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_190(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_191(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_192(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_193(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_194(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_195(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_196(), 2, true);
	DECORATOR::DECOR_REGISTER("MC_EntityID", INT);
	DECORATOR::DECOR_REGISTER("MC_ChasePedID", INT);
	DECORATOR::_DECOR_REGISTER_2("iCampFollowerCamp", 3, true);
	DECORATOR::DECOR_REGISTER("Camp_Defender_Mount_Location", INT);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Bluegill", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_BullheadCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChainPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChannelCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LakeSturgeon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LargemouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LongnoseGar", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Muskie", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_NorthernPike", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Perch", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RedfinPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RockBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SmallmouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SockeyeSalmon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SteelheadTrout", 1, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Lives", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Time", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Laps", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Rounds", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Seated", 2, true);
	DECORATOR::_DECOR_REGISTER_2("PedSeatedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2("MinigameObject", 2, true);
	DECORATOR::_DECOR_REGISTER_2("DontGrabThisPedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_197(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_198(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_199(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_200(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_201(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("NetHorseFence_Sold", 2, true);
	DECORATOR::DECOR_REGISTER("wagonFenceValue", INT);
	DECORATOR::DECOR_REGISTER("ItemSetScriptIndex", INT);
	DECORATOR::DECOR_REGISTER("HorseTeamA", BOOL);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamA", BOOL);
	DECORATOR::DECOR_REGISTER("HorseTeamB", BOOL);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamB", BOOL);
	DECORATOR::DECOR_REGISTER("HorseScriptCreator", INT);
	DECORATOR::DECOR_REGISTER("UsesTracker", BOOL);
	DECORATOR::DECOR_REGISTER("bValidRobber", BOOL);
	DECORATOR::DECOR_REGISTER("STORY_COOP_PED_ID", INT);
	DECORATOR::_DECOR_REGISTER_2(func_202(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_203(), 6, true);
	DECORATOR::_DECOR_REGISTER_2("fast_travel_camp_barker", 3, true);
	return;
}

void func_43() // Position - 0x1AB8 Hash - 0x51642012 ^0x51642012
{
	func_204();
	func_205();
	func_206();
	return;
}

void func_44() // Position - 0x1ACC Hash - 0xCE5FB49E ^0x6E81FC05
{
	STREAMING::_0xDEEE1F265B7ECEF5();
	return;
}

int func_45(Any anParam0) // Position - 0x1AD8 Hash - 0xFEB98BA ^0xBBF0FE
{
	switch (func_7(anParam0))
	{
		case 0:
			if (func_207(anParam0))
			{
				anParam0->f_81 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "LoadingScreen");
				anParam0->f_82 = DATABINDING::_DATABINDING_ADD_DATA_STRING(anParam0->f_81, "TooltipText", "");
				anParam0->f_83 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(anParam0->f_81, "isVisible", true);
				func_208(anParam0, 1);
				func_209(anParam0, 1);
			}
			else
			{
				func_209(anParam0, 3);
			}
			break;
	
		case 1:
			anParam0->f_77 = MISC::GET_GAME_TIMER();
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(anParam0->f_82, &anParam0->f_5[anParam0->f_78 /*7*/]);
			func_209(anParam0, 2);
			break;
	
		case 2:
			if (MISC::GET_GAME_TIMER() >= anParam0->f_77 + anParam0->f_5[anParam0->f_78 /*7*/].f_5)
			{
				anParam0->f_78 = anParam0->f_78 + 1;
			
				if (anParam0->f_78 < 10)
					func_209(anParam0, 1);
				else
					func_209(anParam0, 3);
			}
			break;
	
		case 3:
			func_47(anParam0);
			return 1;
	}

	return 0;
}

BOOL func_46(var uParam0) // Position - 0x1BCA Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

void func_47(Any anParam0) // Position - 0x1BD6 Hash - 0xEE8A930D ^0xBE106B43
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(anParam0->f_81))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(anParam0->f_81);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(anParam0->f_82))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(anParam0->f_82, "");
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(anParam0->f_82);
	}

	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(*anParam0))
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(*anParam0);

	func_208(anParam0, 0);
	return;
}

BOOL func_48() // Position - 0x1C26 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1C34 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_50(var uParam0) // Position - 0x1C6F Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_51() // Position - 0x1C85 Hash - 0x80E2E74D ^0xE2F9E677
{
	while (!QUEUE::_EVENT_QUEUE_IS_EMPTY(-792505136))
	{
		QUEUE::_EVENT_QUEUE_POP(-792505136);
	}

	return;
}

void func_52(var uParam0) // Position - 0x1CA6 Hash - 0x886FEF9B ^0x6BBA0D9E
{
	Hash address;
	BOOL flag;

	address = 0;
	flag = false;

	if (func_210() || func_211())
		flag = true;

	if (flag != *uParam0)
	{
		*uParam0 = flag;
	
		if (!flag)
			func_212(&(uParam0->f_1), false);
		else if (func_213(&(uParam0->f_1)))
			func_50(&(uParam0->f_1));
	}

	if (!flag && func_213(&(uParam0->f_1)))
		if (func_214(&(uParam0->f_1)) >= 0.5f)
			func_50(&(uParam0->f_1));
		else
			flag = true;

	if (flag)
		MISC::SET_BIT(&address, 6);

	if (CAM::IS_GAMEPLAY_CAM_RENDERING() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		MISC::SET_BIT(&address, 2);
		MISC::SET_BIT(&address, 5);
		MISC::SET_BIT(&address, 4);
	
		if (LAW::GET_WANTED_SCORE(PLAYER::PLAYER_ID()) > 0)
			MISC::SET_BIT(&address, 3);
	}

	func_215(address);
	return;
}

void func_53() // Position - 0x1D77 Hash - 0x51838CE1 ^0x1E28AF05
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		func_216(SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i), i);
	}

	return;
}

void func_54() // Position - 0x1DA2 Hash - 0x20F1C8E6 ^0xB678D82D
{
	switch (Global_1572887.f_94.f_51)
	{
		case 0:
			func_217();
			break;
	
		case 1:
			func_218();
			break;
	
		case 2:
			func_219();
			break;
	
		case 3:
			func_220();
			break;
	}

	return;
}

void func_55() // Position - 0x1DEC Hash - 0x2DFC7828 ^0x43418D98
{
	if (Global_1572887.f_94.f_49 == 0)
		return;

	switch (Global_1572887.f_94.f_49)
	{
		case 1:
			if (MISC::IS_PC_VERSION())
			{
				func_221("NET_SESSION_INV_HEADER", "NT_INV_EXTENDED_PC", joaat("blips"), joaat("blip_mp_playlist_teamgame"), -2, 0, 0, 0, 0, true, true);
				func_222(4);
			}
			else
			{
				func_222(2);
			}
			break;
	
		case 2:
			func_223();
			func_222(3);
			break;
	
		case 3:
			if (func_224() == 0)
				return;
		
			func_222(4);
			break;
	
		case 4:
			func_222(0);
			break;
	}

	return;
}

void func_56() // Position - 0x1E87 Hash - 0x77043509 ^0x84C86CBC
{
	if (func_16(4))
		func_225();

	switch (Global_1572887.f_94)
	{
		case 0:
			break;
	
		case 1:
			func_226();
			break;
	
		case 2:
			func_227();
			break;
	
		case 3:
			func_230();
			break;
	
		case 4:
			func_228();
			break;
	
		case 5:
			func_231();
			break;
	
		case 6:
			func_229();
			break;
	
		case 8:
			func_232();
			break;
	
		case 9:
			func_233();
			break;
	
		case 10:
			func_234();
			break;
	
		case 11:
			func_235();
			break;
	
		case 12:
			func_236();
			break;
	
		case 13:
			func_237();
			break;
	
		case 14:
			func_238();
			break;
	
		case 16:
			func_239();
			break;
	
		case 17:
			func_240();
			break;
	}

	return;
}

void func_57(int iParam0) // Position - 0x1F73 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1899245 = iParam0;
	return;
}

BOOL func_58() // Position - 0x1F81 Hash - 0xD9D35AC0 ^0x257D633C
{
	BOOL num;
	int i;

	num = 0;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_1898441[i /*38*/] != 0)
		{
			Global_1899245.f_132 = i;
			num = 1;
			i = 20;
		}
	}

	return num;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x1FBC Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_60(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1FC9 Hash - 0xE7AE0A5 ^0x4C19B6A8
{
	if (iParam1 == -1)
		return true;

	_STOPWATCH_INITIALIZE(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return true;
	}

	return false;
}

void func_61() // Position - 0x2033 Hash - 0x536972C3 ^0x57FA9E3E
{
	int num;

	if (!MISC::IS_ORBIS_VERSION())
	{
		if (func_58())
			func_62();
	
		return;
	}

	if (Global_1899245.f_132 >= 20 || Global_1899245.f_132 < 0)
		return;

	num = Global_1899245.f_132;

	if (func_242(Global_1898441[num /*38*/]))
	{
		func_243(num);
		Global_1898441[num /*38*/] = 0;
	}

	if (func_244(Global_1898441[num /*38*/]))
		Global_1898441[num /*38*/] = 0;

	switch (Global_1898441[num /*38*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
			func_245(Global_1898441[num /*38*/], num, true);
			break;
	
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			func_245(Global_1898441[num /*38*/], num, false);
			break;
	}

	Global_1899245.f_132 = Global_1899245.f_132 + 1;

	if (Global_1899245.f_132 == 42)
		Global_1899245.f_132 = 0;

	return;
}

void func_62() // Position - 0x21AC Hash - 0xED220229 ^0x3AC84EAF
{
	int i;

	for (i = 0; i <= 19; i = i + 1)
	{
		func_243(i);
	}

	_STOPWATCH_DESTROY(&(Global_1899245.f_1));
	return;
}

void func_63(int iParam0) // Position - 0x21D7 Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

char* func_64(int iParam0) // Position - 0x21EE Hash - 0x1121E1FF ^0x3FF1DF6F
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

void func_65(int iParam0, int iParam1) // Position - 0x231F Hash - 0x8BA690B0 ^0x81A84DFE
{
	Global_1572887.f_182 = iParam0;
	Global_1572887.f_182.f_1 = iParam1;
	func_246(28);
	return;
}

void func_66() // Position - 0x233F Hash - 0xFCDE471D ^0x8649338B
{
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);

	if (func_67() != 0)
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();

	return;
}

int func_67() // Position - 0x2374 Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_15;
}

void func_68() // Position - 0x237E Hash - 0x3AA4899D ^0x37821C43
{
	Global_1572887.f_182.f_1 = 0;
	return;
}

void func_69(BOOL bParam0) // Position - 0x238F Hash - 0x690E6520 ^0x22CE8B66
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
	return;
}

void func_70() // Position - 0x239D Hash - 0x27DB40FB ^0x951B51F1
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

void func_71() // Position - 0x23F6 Hash - 0x13A551FC ^0x28673793
{
	func_247();
	func_248(-1);
	func_249(0);
	Global_1572887.f_94.f_41 = 0;

	if (Global_1572887.f_94.f_53 == 2)
		Global_1572887.f_94.f_53 = 0;

	return;
}

void func_72(int iParam0) // Position - 0x242A Hash - 0x42868A8 ^0xDEB2BE19
{
	Global_1572887.f_94.f_44 = iParam0;
	return;
}

void func_73() // Position - 0x243C Hash - 0x461803CA ^0xA073E10E
{
	var unk;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &unk, 1, 0);
	return;
}

void func_74(int iParam0) // Position - 0x244D Hash - 0x29A8F290 ^0x8D3AE984
{
	Global_1572887.f_12 = iParam0;
	return;
}

void func_75(int iParam0) // Position - 0x245D Hash - 0xE6AC7889 ^0xC65DF37B
{
	iLocal_15 = iParam0;
	iLocal_15.f_1 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_76() // Position - 0x2471 Hash - 0x248A745A ^0x2959BD41
{
	BOOL flag;
	int eventData;

	if (func_250())
		return false;

	flag = false;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("landing_page")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("landing_page"), &eventData))
		{
			switch (eventData)
			{
				case -1203660660:
					if (eventData.f_2 == joaat("LOAD_SP"))
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
						func_251(joaat("single_player"));
						flag = true;
					}
					else if (eventData.f_2 == 2143694500)
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						flag = true;
					}
					else if (eventData.f_2 == joaat("LANDING_PAGE_TILE"))
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						flag = true;
					}
					else if (eventData.f_2 == joaat("LOAD_MP_INTRO"))
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						func_251(joaat("freeroam"));
						func_252(joaat("intro_not_done"));
						flag = true;
					}
					else if (eventData.f_2 == joaat("SOCIAL_CLUB_OPEN"))
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					}
					else if (eventData.f_2 == joaat("SOCIAL_CLUB_CLOSED"))
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
					}
					else if (eventData.f_2 == 505720336)
					{
						if (func_34() == 2)
						{
							Global_43893 = true;
							func_63(128);
							NETWORK::_CLEAR_LAUNCH_PARAM(func_64(joaat("benchmark")));
						}
						else
						{
							func_251(joaat("benchmark"));
							flag = true;
						}
					}
					break;
			}
		}
	
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("landing_page"));
	}

	if (!flag)
		if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE() && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("landing_page")) && !NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("Mode"))) && MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 0 || MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 2101404901)
			if (!func_213(&(iLocal_15.f_3)))
				func_212(&(iLocal_15.f_3), false);
			else if (func_214(&(iLocal_15.f_3)) >= 15f)
				SCRIPTS::BAIL_TO_LANDING_PAGE(0);
		else if (func_213(&(iLocal_15.f_3)))
			func_50(&(iLocal_15.f_3));

	return flag;
}

BOOL func_77() // Position - 0x2643 Hash - 0xAB8A8F02 ^0x1D92FE06
{
	return func_254() > 120000;
}

BOOL func_78() // Position - 0x2654 Hash - 0x9C2B7850 ^0xDF2E2DFC
{
	const char* launchParamValue;
	Hash hashKey;
	int num;
	Hash hashKey2;
	int i;
	int num2;

	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("Mode"))))
	{
		if (func_80() == 0)
		{
			func_251(joaat("single_player"));
			func_246(28);
			return true;
		}
		else
		{
			func_246(28);
			return true;
		}
	}

	func_255(&(Global_1572887.f_182));
	launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("Mode")));
	hashKey = MISC::GET_HASH_KEY(launchParamValue);

	if (hashKey != 0)
		func_251(hashKey);

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("region_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("region_id")));
		Global_1572887.f_182.f_3 = func_256(MISC::GET_HASH_KEY(launchParamValue));
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("district_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("district_id")));
		Global_1572887.f_182.f_4 = func_257(MISC::GET_HASH_KEY(launchParamValue));
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("state_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("state_id")));
		Global_1572887.f_182.f_5 = func_258(MISC::GET_HASH_KEY(launchParamValue));
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("minigame_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("minigame_id")));
		Global_1572887.f_182.f_7 = func_259(MISC::GET_HASH_KEY(launchParamValue));
		Global_1572887.f_182.f_6 = -1;
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("series_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("series_id")));
		Global_1572887.f_182.f_2 = func_260(MISC::GET_HASH_KEY(launchParamValue));
	}

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("mission_id"))))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("mission_id")));
		Global_1572887.f_182.f_8 = MISC::GET_HASH_KEY(launchParamValue);
	}

	Global_1572887.f_182.f_9 = 0;

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("char_slot") /* collision: p_fav01_grass_06_268 */)))
	{
		launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(joaat("char_slot") /* collision: p_fav01_grass_06_268 */));
	
		if (MISC::STRING_TO_INT(launchParamValue, &(Global_1572887.f_182.f_9)))
		{
		}
	}

	num = joaat("arg_0");
	i = 0;
	num2 = joaat("arg_0");

	for (i = 0; i <= 15; i = i + 1)
	{
		num = num2 + i;
	
		if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(num)))
		{
			launchParamValue = NETWORK::GET_LAUNCH_PARAM_VALUE(func_253(num));
			hashKey2 = MISC::GET_HASH_KEY(launchParamValue);
		
			if (hashKey2 != 0)
				func_252(hashKey2);
		}
	}

	func_246(28);
	return true;
}

void func_79() // Position - 0x2888 Hash - 0x2798BEC9 ^0xC7C3F2B8
{
	switch (func_80())
	{
		case joaat("MISSION"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_15.f_2 = 1;
				func_63(4);
			
				if (func_81(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("goldstore"):
			break;
	
		case joaat("Series"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_15.f_2 = 1;
				func_63(4);
			
				if (func_81(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("freeroam"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_15.f_2 = 1;
				func_63(4);
			
				if (func_81(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("benchmark"):
			iLocal_15.f_2 = 2;
			NETWORK::_SET_LAUNCH_PARAM_VALUE(func_64(joaat("benchmark")), "1");
			break;
	
		case joaat("clip"):
			iLocal_15.f_2 = 4;
			func_63(4);
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
			break;
	
		case joaat("MISSION_CREATOR"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_15.f_2 = 1;
				func_63(4);
			
				if (func_81(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("Minigame"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				iLocal_15.f_2 = 1;
				func_63(4);
			
				if (func_81(joaat("follow_invite")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			}
			else
			{
				iLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
	
		case joaat("single_player"):
			iLocal_15.f_2 = 2;
			break;
	}

	return;
}

int func_80() // Position - 0x2A7A Hash - 0x4228A1C2 ^0xB13BA783
{
	return Global_1572887.f_182;
}

BOOL func_81(int iParam0) // Position - 0x2A88 Hash - 0x9C0160E2 ^0xCE1DF1B3
{
	return func_262(Global_1572887.f_182.f_1, func_261(iParam0));
}

void func_82(int iParam0) // Position - 0x2AA2 Hash - 0x29A8F290 ^0x2375A750
{
	Global_1572887.f_13 = iParam0;
	return;
}

char* func_83(int iParam0) // Position - 0x2AB2 Hash - 0xB35E9534 ^0x1A986F7D
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
	
		case 3:
			return "startup_mp";
	
		case 4:
			return "startup_clip";
	}

	return "startup_sp";
}

void func_84(int iParam0) // Position - 0x2AF6 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1572864 = iParam0;
	return;
}

BOOL func_85(char* sParam0, eStackSize essParam1) // Position - 0x2B04 Hash - 0x2E077255 ^0x1A17A315
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
		return false;

	SCRIPTS::REQUEST_SCRIPT(sParam0);

	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
		return false;

	SCRIPTS::START_NEW_SCRIPT(sParam0, essParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

void func_86(int iParam0) // Position - 0x2B3E Hash - 0xB4558973 ^0x52E9C6F2
{
	switch (iParam0)
	{
		case 2:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
			break;
	
		case 3:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			break;
	
		case 4:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}

	return;
}

const char* func_87() // Position - 0x2B8D Hash - 0x88161586 ^0x42FEE05C
{
	var unk;
	var unk9;
	var unk17;
	int num;
	int i;
	int num2;
	var unk98;
	var unk106;
	var unk114;
	var unk122;
	var unk130;
	var unk138;

	TEXT_LABEL_ASSIGN_STRING(&unk, "-mode=", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_263(func_80()), 64);
	TEXT_LABEL_ASSIGN_STRING(&unk9, "-char_slot=", 64);
	TEXT_LABEL_APPEND_INT(&unk9, Global_1572887.f_182.f_9, 64);
	unk17 = 10;

	switch (func_80())
	{
		case joaat("MISSION"):
			TEXT_LABEL_ASSIGN_STRING(&unk130, "-mission_id=", 64);
			TEXT_LABEL_APPEND_STRING(&unk130, "", 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &unk, &unk9, &unk130);
	
		case joaat("goldstore"):
			return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &unk, &unk9);
	
		case joaat("Series"):
			TEXT_LABEL_ASSIGN_STRING(&unk122, "-series_id=", 64);
			TEXT_LABEL_APPEND_STRING(&unk122, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Global_1572887.f_182.f_2), 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &unk, &unk9, &unk122);
	
		case joaat("freeroam"):
			i = 0;
			num2 = 0;
		
			for (i = 0; i <= 15; i = i + 1)
			{
				num = func_264(i);
			
				if (func_81(num) && num2 < 10)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk17[num2 /*8*/], "-arg_", 64);
					TEXT_LABEL_APPEND_INT(&unk17[num2 /*8*/], num2, 64);
					TEXT_LABEL_APPEND_STRING(&unk17[num2 /*8*/], "=", 64);
					TEXT_LABEL_APPEND_STRING(&unk17[num2 /*8*/], func_64(num), 64);
					num2 = num2 + 1;
				}
			}
		
			if (Global_1572887.f_182.f_3 != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk98, "-region_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk98, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_1572887.f_182.f_3), 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &unk, &unk9, &unk98, &unk17[0 /*8*/], &unk17[1 /*8*/], &unk17[2 /*8*/], &unk17[3 /*8*/], &unk17[4 /*8*/]);
			}
			else if (Global_1572887.f_182.f_4 != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk106, "-district_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk106, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_1572887.f_182.f_4), 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &unk, &unk9, &unk106, &unk17[0 /*8*/], &unk17[1 /*8*/], &unk17[2 /*8*/], &unk17[3 /*8*/], &unk17[4 /*8*/]);
			}
			else if (Global_1572887.f_182.f_5 != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk114, "-state_id=", 64);
				TEXT_LABEL_APPEND_STRING(&unk114, func_267(Global_1572887.f_182.f_5), 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &unk, &unk9, &unk114, &unk17[0 /*8*/], &unk17[1 /*8*/], &unk17[2 /*8*/], &unk17[3 /*8*/], &unk17[4 /*8*/]);
			}
			else
			{
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &unk, &unk9, &unk17[0 /*8*/], &unk17[1 /*8*/], &unk17[2 /*8*/], &unk17[3 /*8*/], &unk17[4 /*8*/]);
			}
			break;
	
		case joaat("benchmark"):
		case joaat("single_player"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &unk);
	
		case joaat("MISSION_CREATOR"):
			return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &unk, &unk9);
	
		case joaat("Minigame"):
			TEXT_LABEL_ASSIGN_STRING(&unk138, "-minigame_id=", 64);
			TEXT_LABEL_APPEND_STRING(&unk138, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_1572887.f_182.f_7), 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &unk, &unk9, &unk138);
	}

	return "";
}

void func_88() // Position - 0x2E51 Hash - 0xE34D4134 ^0x436B79A2
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
	return;
}

void func_89() // Position - 0x2E5E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_90() // Position - 0x2E66 Hash - 0x336A20AE ^0xD48B6AD
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
	return;
}

void func_91(int iParam0) // Position - 0x2E73 Hash - 0x2D53DDA5 ^0x9348939D
{
	int i;
	var variableName;

	SAVE::_0x8E8FFB9E4AD051D2(iParam0, 30, "saveGameData", 20);
	SAVE::_SAVEGAME_GET_INT_3(iParam0, "saveGameData.saveGameLocation");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_1), "saveGameData.iSaveGamePropset");
	func_152(&(iParam0->f_2), "saveGameData.vSaveGamePropsetPosition");
	SAVE::_SAVEGAME_GET_FLOAT(&(iParam0->f_5), "saveGameData.fSaveGamePropsetHeading");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_6), "saveGameData.iSaveGameScenarioHash");
	func_152(&(iParam0->f_7), "saveGameData.vResetPosition");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_10), "saveGameData.iResetRespawnNode");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_11), "saveGameData.iResetAnimIndex");
	SAVE::_SAVEGAME_GET_BOOL(&(iParam0->f_12), "saveGameData.bForceAltAnim");
	SAVE::_SAVEGAME_GET_FLOAT(&(iParam0->f_13), "saveGameData.fResetHeading");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_14), "saveGameData.eSavedTOD");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_15), "saveGameData.respawnRegion");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_20), "saveGameData.iResetBounty");
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_16), 4, "saveGameData.iRespawnPosHistory");

	for (i = 0; i < iParam0->f_16; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "saveGameData.iRespawnPosHistory", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->f_16[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(iParam0->f_21), 9, "saveGameData.missionReplayData");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_21), "saveGameData.missionReplayData.iBitStorage");
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_21.f_1), 5, "saveGameData.missionReplayData.iGeneralStorage");

	for (i = 0; i < iParam0->f_21.f_1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "saveGameData.missionReplayData.iGeneralStorage", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->f_21.f_1[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_21.f_6), 3, "saveGameData.missionReplayData.fGeneralStorage");

	for (i = 0; i < iParam0->f_21.f_6; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "saveGameData.missionReplayData.fGeneralStorage", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&iParam0->f_21.f_6[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_92(BOOL bParam0, char* sParam1, int iParam2) // Position - 0x3017 Hash - 0xC134FEBC ^0x51DCD49F
{
	SAVE::_0x443174C20B8B9E7F(bParam0, 243, "flow");
	SAVE::_SAVEGAME_GET_BOOL(bParam0, "flow.isGameflowActive");
	SAVE::_SAVEGAME_GET_BOOL(&(bParam0->f_1), "flow.flowCompleted");
	func_270(&(bParam0->f_2));
	func_271(&(bParam0->f_131));
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_93(int iParam0, char* sParam1, int iParam2) // Position - 0x3055 Hash - 0x28519F6 ^0x3C2B0554
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "playerHorse", 64);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eCurrentStableSlot", 64);
	SAVE::_0x443174C20B8B9E7F(iParam0, 3142, &unk);
	SAVE::_SAVEGAME_GET_INT_3(iParam0, &variableName);
	func_272(&(iParam0->f_1));
	func_273(&(iParam0->f_3054));
	func_274(&(iParam0->f_3134));
	func_275(&(iParam0->f_3135));
	func_276(&(iParam0->f_3140));
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_94(Any anParam0) // Position - 0x30BA Hash - 0x299AFEB1 ^0x2E9B7747
{
	int i;
	var unk;
	var unk9;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 1081, "postOfficeData");
	TEXT_LABEL_ASSIGN_STRING(&unk, "postOfficeData.trackedParcels", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 1081, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*6*/], 6, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eMailSendFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*6*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eMailReplyFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*6*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eSentTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*6*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eDeliveryTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*6*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eTrackedParcel", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*6*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bOverrideDeliveryTime", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*6*/].f_5), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_95(eStackSize essParam0) // Position - 0x31DD Hash - 0xAF5B3462 ^0x4212DC16
{
	var unk;
	var variableName;
	var variableName2;
	int i;

	SAVE::_0x8E8FFB9E4AD051D2(essParam0, 659, "caravanCamp", 39);
	SAVE::_SAVEGAME_GET_INT_3(essParam0, "caravanCamp.eCurrentCamp");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_1), "caravanCamp.eCurrentCampRegion");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_2), "caravanCamp.eCampFlags");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_3), "caravanCamp.eCampAppearance");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_4), "caravanCamp.eCampSetupState");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_5), "caravanCamp.eCampSubstate");
	TEXT_LABEL_ASSIGN_STRING(&unk, "caravancamp.activeCampStateTags", 64);
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_6), 301, &unk);

	for (i = 0; i < essParam0->f_6; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&essParam0->f_6[i /*5*/], 5, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eTag", 64);
		SAVE::_SAVEGAME_GET_INT_3(&essParam0->f_6[i /*5*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eExpiry", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_6[i /*5*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".ePersistence", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_6[i /*5*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iPriority", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_6[i /*5*/].f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eCategory", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_6[i /*5*/].f_4), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(essParam0->f_307), 5, "caravanCamp.sPearsonUnlocks");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_307), "caravanCamp.sPearsonUnlocks.iUnlockedBitset");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_307.f_1), "caravanCamp.sPearsonUnlocks.iItemsCrafted");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_307.f_2), "caravanCamp.sPearsonUnlocks.iAnimalsDonated");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_307.f_3), "caravanCamp.sPearsonUnlocks.iCentsDonated");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_307.f_4), "caravanCamp.sPearsonUnlocks.iTrinkedDonated");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_312), "caravanCamp.iCampLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_313), "caravanCamp.iCampChickenCoopLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_314), "caravanCamp.iCampVehicleLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_315), "caravanCamp.iCampToolsLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_316), "caravanCamp.iCampCraftingFireLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_317), "caravanCamp.iCampShavingKitLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_318), "caravanCamp.iCampPearsonLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_319), "caravanCamp.iCampStraussLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_320), "caravanCamp.iCampArthurLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_321), "caravanCamp.iCampTentLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_322), "caravanCamp.iCampHitchLevel");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_323), "caravanCamp.iNumInnocentsKilled");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_324), "caravanCamp.iCampFundsCents");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_325), "caravanCamp.iGangSavingsCents");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_326), "caravanCamp.iBankDebtCents");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_327), "caravanCamp.iCarcassesDonated");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_328), "caravanCamp.todCampSupplyDecrement");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_329), "caravanCamp.todCampFoodDecrement");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_330), "caravanCamp.todNextPlayerStewServe");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_331), "caravanCamp.todNextCompanionDonation");
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_332), 3, "caravanCamp.eLastDonationCompanions");
	SAVE::_SAVEGAME_GET_INT_3(&essParam0->f_332[0], "caravanCamp.eLastDonationCompanions0");
	SAVE::_SAVEGAME_GET_INT_3(&essParam0->f_332[1], "caravanCamp.eLastDonationCompanions1");
	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "caravancamp.eCheckinState", 64);
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_335), 32, &unk);

	for (i = 0; i < essParam0->f_335; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&essParam0->f_335[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "caravanCamp.caravanPurchaseList", 64);
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_367), 41, &unk);

	for (i = 0; i < essParam0->f_367; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&essParam0->f_367[i /*4*/], 4, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eGlobalItemIdx", 64);
		SAVE::_SAVEGAME_GET_INT_3(&essParam0->f_367[i /*4*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iPurchaseTimer", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_367[i /*4*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iPurchaseCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_367[i /*4*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eShopPurchasedFrom", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_367[i /*4*/].f_3), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(essParam0->f_408), 7, "caravanCamp.sCaravanChoreData");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_408), "caravanCamp.sCaravanChoreData.iChoresCompletedBitMask");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_408.f_1), "caravanCamp.sCaravanChoreData.todLastChoreCompleted");
	SAVE::_SAVEGAME_GET_FLOAT(&(essParam0->f_408.f_2), "caravanCamp.sCaravanChoreData.fMilkAmount");
	SAVE::_SAVEGAME_GET_FLOAT(&(essParam0->f_408.f_3), "caravanCamp.sCaravanChoreData.fEggAmount");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_408.f_4), "caravanCamp.sCaravanChoreData.iNumberOfChoresCompletedTotal");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_408.f_5), "caravanCamp.sCaravanChoreData.iTimesCowWasMilkedToday");
	SAVE::_SAVEGAME_GET_BOOL(&(essParam0->f_408.f_6), "caravanCamp.sCaravanChoreData.bStallsCleaned");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(essParam0->f_415), 25, "caravanCamp.sSupplyGroups");
	TEXT_LABEL_ASSIGN_STRING(&unk, "caravanCamp.sSupplyGroups.iGroupItemsRemovedBitset", 64);
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_415), 5, &unk);

	for (i = 0; i < essParam0->f_415; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&essParam0->f_415[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_415.f_5), "caravanCamp.sSupplyGroups.todCompanionNextRemoval");
	TEXT_LABEL_ASSIGN_STRING(&unk, "caravanCamp.sSupplyGroups.iUnlockHashes", 64);
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_415.f_6), 18, &unk);

	for (i = 0; i < essParam0->f_415.f_6; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&essParam0->f_415.f_6[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_415.f_24), "caravanCamp.sSupplyGroups.iUnlockHashCount");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(essParam0->f_440), 127, "caravanCamp.sContData");
	TEXT_LABEL_ASSIGN_STRING(&unk, "caravanCamp.sContData.sPg", 64);
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_440), 127, &unk);

	for (i = 0; i < essParam0->f_440; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&essParam0->f_440[i /*63*/], 63, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iCarriedOverCents", 64);
		SAVE::_SAVEGAME_GET_INT_2(&essParam0->f_440[i /*63*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".sCont", 64);
		func_277(variableName2, &(essParam0->f_440[i /*63*/].f_1));
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iContributionCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_440[i /*63*/].f_62), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(essParam0->f_567), 7, "caravanCamp.sCampHorseData");
	SAVE::_SAVEGAME_GET_BOOL(&(essParam0->f_567), "caravanCamp.sCampHitchedHorseSavedData.bCampHorseHitched");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_567.f_1), "caravanCamp.sCampHitchedHorseSavedData.eCampIndex");
	func_152(&(essParam0->f_567.f_2), "caravanCamp.sCampHitchedHorseSavedData.vHitchedAtCoords");
	SAVE::_SAVEGAME_GET_FLOAT(&(essParam0->f_567.f_5), "caravanCamp.sCampHitchedHorseSavedData.fHitchedAtHeading");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_567.f_6), "caravanCamp.sCampHitchedHorseSavedData.iHorseGender");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_574), "caravanCamp.eLongAbsenceInstancesSeen");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_575), "caravanCamp.todLongAbsenceTOD");
	SAVE::_0x443174C20B8B9E7F(&(essParam0->f_576), 2, "caravanCamp.sCampAmbientStreams");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_576.f_1), "caravanCamp.sCampAmbientStreams.todLastStreamPlayed");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_576), "caravanCamp.sCampAmbientStreams.iCounterStreamBeenPlayed");
	SAVE::_0xE0B45E983BFC0768();
	TEXT_LABEL_ASSIGN_STRING(&unk, "caravanCamp.eMiniExchangeQueue", 64);
	SAVE::_0x81F4E92BE3958364(&(essParam0->f_578), 81, &unk);

	for (i = 0; i < essParam0->f_578; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&essParam0->f_578[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_96(int* piParam0) // Position - 0x3900 Hash - 0x3E0E6EA0 ^0x614C7EFB
{
	int i;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(piParam0, 22, "loansharkingData");
	SAVE::_SAVEGAME_GET_INT_2(piParam0, "loansharkingData.iLSActiveDebtors");
	SAVE::_0x81F4E92BE3958364(&(piParam0->f_1), 10, "loansharkingData.todLSVictimRespawn");

	for (i = 0; i < piParam0->f_1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "loansharkingData.todLSVictimRespawn", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&piParam0->f_1[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(piParam0->f_11), 10, "loansharkingData.eLSSavedMissionFlags");

	for (i = 0; i < piParam0->f_11; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "loansharkingData.eLSSavedMissionFlags", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&piParam0->f_11[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(piParam0->f_21), "loansharkingData.eLSSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_97(Any anParam0) // Position - 0x39B4 Hash - 0xA227DC0F ^0xFBBE1617
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 5, "bountyhuntingData");
	SAVE::_SAVEGAME_GET_INT_2(anParam0, "bountyhuntingData.iBountiesCompleted");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), "bountyhuntingData.eFlags");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_2), "bountyhuntingData.eRCMStage");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_3), "bountyhuntingData.iRewardAlive");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_4), "bountyhuntingData.iRewardDead");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_98(Any anParam0) // Position - 0x3A05 Hash - 0xC19675C6 ^0x86B50A65
{
	var variableName;
	var variableName2;
	int i;

	SAVE::_0x443174C20B8B9E7F(anParam0, 17, "bankRobberyData");
	TEXT_LABEL_ASSIGN_STRING(&variableName, "bankRobberyData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 5, &variableName);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName2);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "bankRobberyData.eStatus", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_5), 5, &variableName);

	for (i = 0; i < anParam0->f_5; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->f_5[i], &variableName2);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "bankRobberyData.todLastRobTime", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_10), 5, &variableName);

	for (i = 0; i < anParam0->f_10; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->f_10[i], &variableName2);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "bankRobberyData.iCompletedRobberies", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_15), &variableName);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_16), "bankRobberyData.bIsBraveClientActive");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_99(int iParam0) // Position - 0x3B14 Hash - 0x67C41D58 ^0x39B2964E
{
	var unk;
	var variableName;
	int i;

	SAVE::_0x443174C20B8B9E7F(iParam0, 127, "coachRobbery");
	SAVE::_SAVEGAME_GET_INT_2(iParam0, "coachRobbery.iCompletedRobberies");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_3), "coachRobbery.eActiveRobbery");
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.eStatus", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_4), 15, &unk);

	for (i = 0; i < iParam0->f_4; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->f_4[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.eCurrentVariant", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_19), 15, &unk);

	for (i = 0; i < iParam0->f_19; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->f_19[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.eCurrentDifficulty", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_34), 15, &unk);

	for (i = 0; i < iParam0->f_34; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->f_34[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.todCoachRobExp", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_79), 15, &unk);

	for (i = 0; i < iParam0->f_79; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->f_79[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.todCoachRobAct", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_64), 15, &unk);

	for (i = 0; i < iParam0->f_64; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->f_64[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.iTimesOffered", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_49), 15, &unk);

	for (i = 0; i < iParam0->f_49; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->f_49[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.bNoteHasBeenRead", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_94), 15, &unk);

	for (i = 0; i < iParam0->f_94; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_BOOL(&iParam0->f_94[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "coachRobbery.iRobberiesSinceLastPoliceTrap", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_111), 15, &unk);

	for (i = 0; i < iParam0->f_111; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->f_111[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_2), "coachRobbery.eCurrentRobberyStr");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_1), "coachRobbery.eCurrentRobberyRho");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_126), "coachRobbery.eCoachBitflags");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_109), "coachRobbery.todCoachRobberyCompleted");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_110), "coachRobbery.todTipGivenByFreightWorker");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_100(int iParam0) // Position - 0x3DD6 Hash - 0xDDE44E92 ^0x87B6EE76
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "tutorialSaved", 64);
	SAVE::_0x443174C20B8B9E7F(iParam0, 76, &unk);
	TEXT_LABEL_ASSIGN_STRING(&unk, "tutorialSaved.sTimedData", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 76, &unk);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->[i /*3*/], 3, &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "iTimeLastRun", 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->[i /*3*/], &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "iTimesRun", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(iParam0->[i /*3*/].f_1), &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "eTutorial", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->[i /*3*/].f_2), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_101(int iParam0, char* sParam1, int iParam2) // Position - 0x3EAF Hash - 0xE5CF9B3D ^0xA144075E
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "eTutorialsRun", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 22, &unk);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_102(Any anParam0) // Position - 0x3EFD Hash - 0x86E1C434 ^0x1A3C33B6
{
	int i;
	var unk;
	var unk9;
	var variableName;
	var variableName2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "lawStateData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 73, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*12*/], 12, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iStateBounty", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*12*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "vLastKnownLocation", 64);
		func_152(&(anParam0->[i /*12*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "fLastKnownRadius", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->[i /*12*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eStateFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_5), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "stateLawMemoryData", 64);
		SAVE::_0x443174C20B8B9E7F(&(anParam0->[i /*12*/].f_6), 6, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eLastOuftitSeenByLaw", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_6), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eSideburnsStyle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_6.f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eChinStyle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_6.f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eMustacheStyle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_6.f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eTimeOutfitLastSeen", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_6.f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eAppearanceLawMemoryFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_6.f_5), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_103(Any anParam0) // Position - 0x40C0 Hash - 0xB686DFCF ^0xA63167B
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "lawDistrictData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 18, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i], 1, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eLawDistrictFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_104(Any anParam0) // Position - 0x4131 Hash - 0xC59A533B ^0xA7B65D16
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "caravanEventData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 57, &unk);

	for (i = 0; i < 7; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*8*/], 8, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesCompleted", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*8*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesSeen", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesLaunched", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesSpawned", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".todNextAvailable", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*8*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iGeneric1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_5), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iGeneric2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_6), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bUnlocked", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*8*/].f_7), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_105(int iParam0) // Position - 0x4281 Hash - 0xEE4039C3 ^0x4F56A717
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "pendingRCMStage", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 40, &unk);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_106(Any anParam0) // Position - 0x42CF Hash - 0xCF7572CA ^0xAD217AD4
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "rcmDataSaved", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 603, &unk);
	TEXT_LABEL_ASSIGN_STRING(&unk, "rcmDataSaved.iSavedFloat1", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 201, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "rcmDataSaved.iSavedFloat2", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_201), 201, &unk);

	for (i = 0; i < anParam0->f_201; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_201[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "rcmDataSaved.eRCMSavedFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_402), 201, &unk);

	for (i = 0; i < anParam0->f_402; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->f_402[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_107(Any anParam0) // Position - 0x43E5 Hash - 0xB9E10FE4 ^0x63E4841E
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "playerOnlyGreetStack", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 46, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*3*/], 3, &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eRuleset", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*3*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todExpiry", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*3*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "bTempDisable", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*3*/].f_2), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_108(Any anParam0) // Position - 0x4496 Hash - 0xA971632A ^0x5238C9A4
{
	int i;
	var unk;
	var unk9;
	var variableName;
	var variableName2;
	int j;

	TEXT_LABEL_ASSIGN_STRING(&unk, "companionData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 1621, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x8E8FFB9E4AD051D2(&anParam0->[i /*60*/], 60, &unk9, 21);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "companionFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*60*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iTrustLevel", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*60*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iFollowerLevel", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*60*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "companionOutfit", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "lastWornOutfitOnMission", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "wornItems", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_5), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "modelCompanion", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_6), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "modelCompanionHorse", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_7), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "immediateGreetOverride", 64);
		SAVE::_0x443174C20B8B9E7F(&(anParam0->[i /*60*/].f_8), 3, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eRuleset", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_8), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "todExpiry", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_8.f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bTempDisable", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*60*/].f_8.f_2), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "greetOverrides", 64);
		SAVE::_0x81F4E92BE3958364(&(anParam0->[i /*60*/].f_11), 31, &variableName);
	
		for (j = 0; j < 10; j = j + 1)
		{
			variableName2 = { variableName };
			TEXT_LABEL_APPEND_INT(&variableName2, j, 64);
			SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*60*/].f_11[j /*3*/], 3, &variableName2);
			variableName2 = { variableName };
			TEXT_LABEL_APPEND_STRING(&variableName2, "eRuleset", 64);
			SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*60*/].f_11[j /*3*/], &variableName2);
			variableName2 = { variableName };
			TEXT_LABEL_APPEND_STRING(&variableName2, "todExpiry", 64);
			SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_11[j /*3*/].f_1), &variableName2);
			variableName2 = { variableName };
			TEXT_LABEL_APPEND_STRING(&variableName2, "bTempDisable", 64);
			SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*60*/].f_11[j /*3*/].f_2), &variableName2);
			SAVE::_0xE0B45E983BFC0768();
		}
	
		SAVE::_0xA844FEB5C22C2C74();
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eTemporaryMood", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_42), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "ePersistentMood", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_44), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todTemporaryMoodExpiry", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_43), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todLastItemInteraction", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_45), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todLastChore", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_46), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todLastActivity", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_47), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todRoleCooldown", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_48), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eTimedEventType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_49), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todTimedEvent", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_50), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "txtSchedule", 64);
		SAVE::_SAVEGAME_GET_TEXT_LABEL_63(&(anParam0->[i /*60*/].f_51), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eDeedReservedFor", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*60*/].f_59), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_109(Any anParam0) // Position - 0x48A4 Hash - 0x4A87BC7F ^0x3573A39
{
	var variableName;
	var unk8;
	var variableName2;
	int i;

	TEXT_LABEL_ASSIGN_STRING(&variableName, "companion_manager", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 476, &variableName);
	TEXT_LABEL_APPEND_STRING(&variableName, ".itemRequests", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 271, &variableName);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*27*/], 27, &unk8);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eRequest", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*27*/], &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eRequestItem", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_1), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "iNumRequested", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*27*/].f_2), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eCompanion", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_3), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eHandInType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_4), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eResultType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_5), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "txtConversation", 64);
		SAVE::_SAVEGAME_GET_TEXT_LABEL_23(&(anParam0->[i /*27*/].f_6), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "txtThankDialogue", 64);
		SAVE::_SAVEGAME_GET_TEXT_LABEL_23(&(anParam0->[i /*27*/].f_9), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "txtHandOverScenePath", 64);
		SAVE::_SAVEGAME_GET_TEXT_LABEL_63(&(anParam0->[i /*27*/].f_12), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eVignette", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_20), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "ePickupReward", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_21), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eModelReward", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_22), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "iRewardSupplyGroupHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*27*/].f_23), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eState", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*27*/].f_24), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bHasThankDialoguePlayed", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*27*/].f_25), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bRewardHelpTextShown", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*27*/].f_26), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName2 = { variableName };
	TEXT_LABEL_APPEND_STRING(&variableName2, ".iItemRequestCompleteBitset", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_271), &variableName2);
	variableName2 = { variableName };
	TEXT_LABEL_APPEND_STRING(&variableName2, ".eReturnedJackBook", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_272), &variableName2);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "companion_manager.iNumAvailableActivities", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_273), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "companion_manager.availableActivities", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_274), 201, &variableName);

	for (i = 0; i < anParam0->f_274; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		SAVE::_0x8E8FFB9E4AD051D2(&anParam0->f_274[i /*20*/], 20, &unk8, 20);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eActivity", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->f_274[i /*20*/], &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eActivityInstance", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_274[i /*20*/].f_1), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eHost", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_274[i /*20*/].f_2), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eParticipants", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_274[i /*20*/].f_3), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eConditionFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_274[i /*20*/].f_4), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "vInvitePos", 64);
		func_152(&(anParam0->f_274[i /*20*/].f_5), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "vActivityPos", 64);
		func_152(&(anParam0->f_274[i /*20*/].f_8), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bEnabledInFlow", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_274[i /*20*/].f_11), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bHasBeenLaunched", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_274[i /*20*/].f_12), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bMustOffer", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_274[i /*20*/].f_13), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bOfferUntilHasRun", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_274[i /*20*/].f_14), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "bForceLaunch", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_274[i /*20*/].f_15), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eActivityDeed", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_274[i /*20*/].f_16), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eTODAvailable", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_274[i /*20*/].f_17), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "iWeight", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_274[i /*20*/].f_18), &variableName2);
		variableName2 = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName2, "iNumTimesOffered", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_274[i /*20*/].f_19), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "companion_manager.todHungoverExpiry", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_475), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_110(Any anParam0) // Position - 0x4DF2 Hash - 0x3C817C04 ^0x7F77606F
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "activities", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 61, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*2*/], 2, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bHasBeenPerformed", 64);
		SAVE::_SAVEGAME_GET_BOOL(&anParam0->[i /*2*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bHasBeenOffered", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*2*/].f_1), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_111(Any anParam0) // Position - 0x4E83 Hash - 0xA971632A ^0x99D50EB0
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "outfits", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 286, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*3*/], 3, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "status", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*3*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "effect", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*3*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "tags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*3*/].f_2), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_112(int iParam0) // Position - 0x4F35 Hash - 0xBC5DD44C ^0x32C9D766
{
	var unk;
	var unk9;
	var variableName;
	int i;

	SAVE::_0x443174C20B8B9E7F(iParam0, 17, "playerFacialHair");
	TEXT_LABEL_ASSIGN_STRING(&unk, "playerFacialHair.facialHair", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 16, &unk);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->[i /*5*/], 5, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".facialHairLength", 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->[i /*5*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".facialHairCut", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->[i /*5*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".facialHairStyle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->[i /*5*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".facialHairNextGrowthTimer", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->[i /*5*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iNumAcceleratedGrowthCycles", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(iParam0->[i /*5*/].f_4), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_16), "playerFacialHair.eFacialHairFlags");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_113(eStackSize essParam0) // Position - 0x5042 Hash - 0x19A242E0 ^0x2B50895A
{
	SAVE::_0x443174C20B8B9E7F(essParam0, 7, "playerHeadHair");
	SAVE::_SAVEGAME_GET_INT_3(essParam0, "playerHeadHair.ePomadeWearOffTimer");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_1), "playerHeadHair.headHairLength");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_2), "playerHeadHair.eHeadHairCut");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_3), "playerHeadHair.eHeadHairStyle");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_4), "playerHeadHair.eHeadHairFlags");
	SAVE::_SAVEGAME_GET_INT_3(&(essParam0->f_5), "playerHeadHair.headHairNextGrowthTimer");
	SAVE::_SAVEGAME_GET_INT_2(&(essParam0->f_6), "playerHeadHair.iNumAcceleratedGrowthCycles");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_114(Any anParam0, char* sParam1, int iParam2) // Position - 0x50AB Hash - 0x22CBAC61 ^0x4C0726EF
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "mapBlipData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 1001, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*4*/], 4, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "blipRegion", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*4*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "blipType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "blipPackedPosition", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "blipTODFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_115(int iParam0) // Position - 0x517D Hash - 0x22AD05B0 ^0x9AC11440
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "discoverableData", 64);
	SAVE::_0x8E8FFB9E4AD051D2(iParam0, 157, &unk, 14);
	TEXT_LABEL_ASSIGN_STRING(&unk, "discoverableData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 144, &unk);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoEasel_timesViewed", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_145), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "todDiscoEasel_timeStamp", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_144), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoEasel_currentlyViewed", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(iParam0->f_147), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoPhonograph_visits", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_146), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoDreamcatchers_bitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_148), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoCarriable_iBitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_149), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoCarriableMore_iBitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_150), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoCarriableArrows_iBitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_151), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoLocationVersion_iBitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_152), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoLocationMoreVersion_iBitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_153), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoLocationOtherVersion_iBitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_154), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoCorpse_iBitField", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_155), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "DiscoDisable", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(iParam0->f_156), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_116(Any anParam0) // Position - 0x534F Hash - 0xF7ACA12C ^0xB795BE17
{
	int i;
	var variableName;
	var variableName2;

	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData", 64);
	SAVE::_0x8E8FFB9E4AD051D2(anParam0, 17, &variableName, 7);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData.eCurrentShow", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 6, &variableName);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName2);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData.TODLastTimeViewed", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_6), 6, &variableName);

	for (i = 0; i < anParam0->f_6; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->f_6[i], &variableName2);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData.iShowBits", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_12), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData.iTotalShowViews", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_13), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData.iTotalMCViews", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_14), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData.iTotalMagicLanternViews", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_15), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "showManagerData.iTotalMovieViews", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_16), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_117(Any anParam0) // Position - 0x5457 Hash - 0x2EB10F32 ^0x3B9E198F
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "townSecretData", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 8, &unk);
	TEXT_LABEL_ASSIGN_STRING(&unk, "townSecretData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 5, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "TownSecret_VanHorn_bitfield", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "iTownSecret_Saint_Denis_bitfield", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eStrawberryLastDayUFOSeen", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_7), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_118(Any anParam0) // Position - 0x550E Hash - 0x561229C7 ^0xBDA09300
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "eventArea", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 49, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*12*/], 12, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iStage", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*12*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iForceTransitionStage", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*12*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todNextStage", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todCounter", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eStateFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_5), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iEventAreaCustomData", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*12*/].f_6), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iEventAreaCustomCounter", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*12*/].f_7), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iEventAreaMassacreCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*12*/].f_8), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iAggroStage", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_9), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todAggroed", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_10), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todMassacred", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*12*/].f_11), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_119(BOOL bParam0) // Position - 0x56E0 Hash - 0x303F4A3C ^0x2E9B0025
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "duelingData", 64);
	SAVE::_0x443174C20B8B9E7F(bParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".eFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(bParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_120(Any anParam0, char* sParam1, int iParam2) // Position - 0x5717 Hash - 0x43349921 ^0x65977590
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "herbs", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 45, &unk);

	for (i = 0; i < 44; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eHerbTypeFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_121(Any anParam0) // Position - 0x5776 Hash - 0xF0703A82 ^0xCCCCB6F9
{
	int i;
	var unk;
	var unk9;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 65, "huntingZoneData");
	TEXT_LABEL_ASSIGN_STRING(&unk, "huntingZoneData.sHuntingZoneTypes", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 65, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*4*/], 65, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bDiscovered", 64);
		SAVE::_SAVEGAME_GET_BOOL(&anParam0->[i /*4*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bCompleted", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*4*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eLaunchTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bLegendaryHasBeenSkinned", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_122(Any anParam0) // Position - 0x5858 Hash - 0x86EC9D8F ^0xA1C317C1
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "propertyData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 35, &unk);

	for (i = 0; i < 17; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*2*/], 2, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*2*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eTimeOfDay", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*2*/].f_1), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_123(Any anParam0) // Position - 0x58E8 Hash - 0x519CB28B ^0x64C32529
{
	int i;
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk, "homeRobberyData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 57, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*7*/], 7, &unk9);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*7*/], "todNextAvailable");
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*7*/].f_1), "todLastVisited");
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*7*/].f_4), "eFlags");
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*7*/].f_5), "eFlagsPlus");
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*7*/].f_6), "eFlagsSet3");
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*7*/].f_2), "iTimesRobbed");
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*7*/].f_3), "iPlayerCentsLostAtHome");
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_124(Any anParam0) // Position - 0x59A9 Hash - 0x519CB28B ^0xAEAF97E8
{
	int i;
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk, "newspapers.", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 57, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*4*/], 4, &unk9);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*4*/], ".eStatus");
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_1), ".eDynamicStory1");
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_2), ".eDynamicStory2");
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_3), ".eFishingStory");
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_125(Any anParam0) // Position - 0x5A3A Hash - 0x375C0F15 ^0xFB4BAC93
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "dynamicArticles.", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 35, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_126(Any anParam0) // Position - 0x5A88 Hash - 0xE364D650 ^0xD59060C9
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 2, "itemData");
	SAVE::_SAVEGAME_GET_INT_3(anParam0, "itemData.todSurvivalistActive");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), "itemData.todChewingGumActive");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_127(Any anParam0) // Position - 0x5AB5 Hash - 0x3C817C04 ^0x1A0FC723
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "gangs", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 61, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*10*/], 10, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "gangSavedFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*10*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "gangStatus", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*10*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iKillsSinceStatusChange", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*10*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todLastKill", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*10*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iGenericInt1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*10*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iNumCampfiresCleared", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*10*/].f_5), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iNumCampfiresSpawned", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*10*/].f_6), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iNumCampfiresSeen", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*10*/].f_7), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iNumCampfiresPersisted", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*10*/].f_8), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iGangEncounterStage", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*10*/].f_9), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_128(Any anParam0) // Position - 0x5C47 Hash - 0x980DDE5F ^0xA5FD45ED
{
	int i;
	var unk;
	var unk9;
	var variableName;
	var unk24;
	var unk32;

	TEXT_LABEL_ASSIGN_STRING(&unk, "gangAmbushesSeen", 64);
	TEXT_LABEL_ASSIGN_STRING(&unk32, "ambushTrack", 64);
	TEXT_LABEL_ASSIGN_STRING(&unk9, "gangAmbushesStraight", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 197, "ambush");
	TEXT_LABEL_ASSIGN_STRING(&unk32, "ambush.ambushTrack", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 177, &unk32);

	for (i = 0; i < 44; i = i + 1)
	{
		unk24 = { unk32 };
		TEXT_LABEL_APPEND_INT(&unk24, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*4*/], 4, &unk24);
		variableName = { unk24 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iCompletedCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*4*/], &variableName);
		variableName = { unk24 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iSeenCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_1), &variableName);
		variableName = { unk24 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iSpawnedCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_2), &variableName);
		variableName = { unk24 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iNextAllowedSpawnMinutes", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_177), 7, &unk);

	for (i = 0; i < anParam0->f_177; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_177[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_184), 7, &unk9);

	for (i = 0; i < anParam0->f_184; i = i + 1)
	{
		variableName = { unk9 };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_184[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_191), "ambush.eAmbushSavedFlags");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_192), "ambush.todLastAmbushTime");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_193), "ambush.eLastAmbushGang");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_194), "ambush.eLastAmbush");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_195), "ambush.iAmbushesCompleted");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_196), "ambush.iNumRecognizeAmbushesStraight");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_129(int iParam0) // Position - 0x5E0B Hash - 0x5DE980B0 ^0xB40A5916
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "campfires.iVignetteVariations", 64);
	SAVE::_0x443174C20B8B9E7F(iParam0, 38, "campfires");
	SAVE::_SAVEGAME_GET_INT_3(iParam0, "campfires.eFoothillsStoriesSpoken");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_1), "campfires.eMountainsStoriesSpoken");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_2), "campfires.ePlainsStoriesSpoken");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_3), "campfires.eSwampsStoriesSpoken");
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_35), 2, &unk);

	for (i = 0; i < iParam0->f_35; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->f_35[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "campfires.vCampfireUsedPositions", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_4), 31, &unk);

	for (i = 0; i < iParam0->f_4; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->f_4[i /*3*/], 3, &variableName);
		func_152(&iParam0->f_4[i /*3*/], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_37), "campfires.eCampSavedFlags");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_130(Any anParam0) // Position - 0x5F05 Hash - 0x54B1C70F ^0x5B68AB93
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "worldStates", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 14, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_131(int iParam0) // Position - 0x5F53 Hash - 0x3C817C04 ^0xA3D6CE3B
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "worldStateTimers", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 61, &unk);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_132(Any anParam0) // Position - 0x5FA1 Hash - 0x9D121ADA ^0x5E9AF947
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "featureUnlocked", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 3, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_133(int iParam0) // Position - 0x5FEE Hash - 0x56E96DB9 ^0xDC1B9379
{
	int i;
	var unk;
	var unk9;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(iParam0, 81, "jailData");
	TEXT_LABEL_ASSIGN_STRING(&unk, "jailData.sPrisoners", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 81, &unk);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->[i /*4*/], 4, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eJailRegion", 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->[i /*4*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "ePrisoner", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->[i /*4*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "ePrisonerFlag", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->[i /*4*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "ePrisonerDialogue", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_134(int iParam0) // Position - 0x60CF Hash - 0xFCD370EE ^0x33780DCD
{
	int i;
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk, "trainData", 64);
	SAVE::_0x81F4E92BE3958364(iParam0, 66, &unk);

	for (i = 0; i < 13; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->[i /*5*/], 5, &unk9);
		func_152(&(iParam0->[i /*5*/].f_1), "vTrainLoc");
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->[i /*5*/], "trainFlags");
		SAVE::_SAVEGAME_GET_BOOL(&(iParam0->[i /*5*/].f_4), "bDirection");
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_135(Any anParam0) // Position - 0x614F Hash - 0xB10F036C ^0x556BD63A
{
	int i;
	var variableName;
	var variableName2;
	var variableName3;

	SAVE::_0x8E8FFB9E4AD051D2(anParam0, 71, "playerRPGData", 39);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fPlayerEfficiency", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 4, &variableName);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i], 1, &variableName2);
		variableName3 = { variableName2 };
		TEXT_LABEL_APPEND_STRING(&variableName3, "fCorePoints", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->[i], &variableName3);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.sAttributeOverpoweredTime", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_4), 7, &variableName);

	for (i = 0; i < anParam0->f_4; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_4[i /*2*/], 2, &variableName2);
		variableName3 = { variableName2 };
		TEXT_LABEL_APPEND_STRING(&variableName3, "fTankTime", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_4[i /*2*/], &variableName3);
		variableName3 = { variableName2 };
		TEXT_LABEL_APPEND_STRING(&variableName3, "fCoreTime", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_4[i /*2*/].f_1), &variableName3);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fAttributePoints", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_11), 24, &variableName);

	for (i = 0; i < anParam0->f_11; i = i + 1)
	{
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_11[i], &variableName2);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.iHonor", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_35), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.iHighestHonorRank", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_36), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.iLowestHonorRank", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_37), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.iHighestBountyHonorReached", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_38), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fDeadeyeAmount", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_39), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fPlayerWeightLowerLimit", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_40), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fPlayerWeightUpperLimit", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_41), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fPlayerTankSickMod", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_44), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fPlayerStamWeightMod", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_45), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.RPG_TIME_BEFORE_DEADEYECORE_EMPTY", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_46), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.RPG_TIME_BEFORE_STAMINACORE_EMPTY", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_47), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.RPG_TIME_BEFORE_HEALTHCORE_EMPTY", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_48), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.iOverfedTimer", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_42), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.bPlayerPoisoned", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_43), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fGritResist", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_49), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fInstinctResist", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_50), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fStrengthResist", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_51), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fFatResist", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_52), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fHeatResist", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_53), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fColdResist", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_54), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fBonusHealthXP", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_55), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fBonusDeadeyeXP", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_56), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fBonusStaminaXP", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_57), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.ePlayerSickness", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_67), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fEagleEyeDepleteMod", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_58), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fEagleEyeRangeBonus", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_59), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fWeaponDegradeResist", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_60), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fDamageScaleMelee", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_61), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fDamageMod", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_62), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fDamageTakenOnHorseModifier", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_63), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fBowStaminaModifier", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_64), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.iGrappledKilledBears", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_65), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.iTimesEatenFood", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_66), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fHorseBondingXPMod", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_68), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fHealthRefillMod", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_69), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, "playerRPGData.fFortifyMod", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_70), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_136(Any anParam0) // Position - 0x6535 Hash - 0x4A945083 ^0x5F62622D
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "moralChoices", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 16, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i], 1, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eChoiceType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_137(Any anParam0) // Position - 0x65A6 Hash - 0x52E29110 ^0xB7F653ED
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 286, "cacheOutfitData");
	func_278("cachedOutfits", anParam0);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_138(int iParam0) // Position - 0x65C9 Hash - 0xE364D650 ^0xFA8E3D54
{
	SAVE::_0x443174C20B8B9E7F(iParam0, 2, "playerCampData");
	SAVE::_SAVEGAME_GET_INT_3(iParam0, "playerCampData.eFlags");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_1), "playerCampData.iNumberOfCamps");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_139(int iParam0) // Position - 0x65F6 Hash - 0x737E6E2D ^0xCE447D35
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "jailbreakData", 64);
	SAVE::_0x443174C20B8B9E7F(iParam0, 2, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "iViewedJailbreaks", 64);
	SAVE::_SAVEGAME_GET_INT_2(iParam0, &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "lastViewedJailbreakTime", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_140(Any anParam0) // Position - 0x6649 Hash - 0xB7E12DC ^0x15655362
{
	int i;
	var unk;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 22, "sFishingDataSaved");
	TEXT_LABEL_ASSIGN_STRING(&unk, "sFishingDataSaved.eCurrentBaitEquipped", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 5, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "sFishingDataSaved.bHasLegendaryFishBeenCaught", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_5), 16, &unk);

	for (i = 0; i < anParam0->f_5; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_BOOL(&anParam0->f_5[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_21), "sFishingDataSaved.iFishingDataSavedBits");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_141(Any anParam0) // Position - 0x66FD Hash - 0x9B0C332E ^0x537F93BC
{
	int i;
	int j;
	var unk;
	var unk9;
	var unk17;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "managedTowns", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 417, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*26*/], 26, &unk9);
		TEXT_LABEL_APPEND_STRING(&unk9, ".eActiveTownStateTags", 64);
		SAVE::_0x81F4E92BE3958364(&anParam0->[i /*26*/], 26, &unk9);
	
		for (j = 0; j < anParam0->f_1; j = j + 1)
		{
			unk17 = { unk9 };
			TEXT_LABEL_APPEND_INT(&unk17, j, 64);
			SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*26*/][j /*5*/], 5, &unk17);
			variableName = { unk17 };
			TEXT_LABEL_APPEND_STRING(&variableName, ".eTag", 64);
			SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*26*/][j /*5*/], &variableName);
			variableName = { unk17 };
			TEXT_LABEL_APPEND_STRING(&variableName, ".eTagPriority", 64);
			SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*26*/][j /*5*/].f_1), &variableName);
			variableName = { unk17 };
			TEXT_LABEL_APPEND_STRING(&variableName, ".eTagPersistence", 64);
			SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*26*/][j /*5*/].f_2), &variableName);
			variableName = { unk17 };
			TEXT_LABEL_APPEND_STRING(&variableName, ".eCategory", 64);
			SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*26*/][j /*5*/].f_3), &variableName);
			variableName = { unk17 };
			TEXT_LABEL_APPEND_STRING(&variableName, ".eTODExpiry", 64);
			SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*26*/][j /*5*/].f_4), &variableName);
			SAVE::_0xE0B45E983BFC0768();
		}
	
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_142(Any anParam0) // Position - 0x6858 Hash - 0xC89F8F1E ^0x6D9E1316
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "specialPeds", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 241, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*8*/], 8, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "ePedStage", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*8*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eSavedFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*8*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todLastSeen", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*8*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todLastEncounter", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*8*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todDeathTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*8*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iTimesSeen", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_5), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iInteracts", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_6), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iDeaths", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*8*/].f_7), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_143(Any anParam0) // Position - 0x69AA Hash - 0x64349E7F ^0xE3F234D1
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "dataShacksSaved", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 40, &unk);
	TEXT_LABEL_ASSIGN_STRING(&unk, "dataShacksSaved.iSavedFloat1", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 20, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "dataShacksSaved.iSavedFloat2", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_20), 20, &unk);

	for (i = 0; i < anParam0->f_20; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_20[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_144(Any anParam0) // Position - 0x6A69 Hash - 0x2138588C ^0xAC36E5D7
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "hideouts", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 19, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*2*/], 2, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*2*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iNumActorsRemaining", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*2*/], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_145(Any anParam0) // Position - 0x6AFA Hash - 0x6ABD90 ^0xABF5E60A
{
	int i;
	var unk;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 39, "sFilletDataSaved");
	TEXT_LABEL_ASSIGN_STRING(&unk, "sFilletDataSaved.iBestLaps", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 13, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "sFilletDataSaved.iFastestLap", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_13), 13, &unk);

	for (i = 0; i < anParam0->f_13; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_13[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "sFilletDataSaved.iLongestTime", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_26), 13, &unk);

	for (i = 0; i < anParam0->f_26; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_26[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_146(Any anParam0) // Position - 0x6BEE Hash - 0x838A1987 ^0x87375589
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "eBufferedJournalEntryUnlocks", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 21, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_147(BOOL bParam0) // Position - 0x6C3C Hash - 0x19A242E0 ^0xBF2B3F41
{
	SAVE::_0x443174C20B8B9E7F(bParam0, 7, "collectiblesData");
	SAVE::_SAVEGAME_GET_BOOL(bParam0, "collectiblesData.bDinoBonesStage2RCM");
	SAVE::_SAVEGAME_GET_BOOL(&(bParam0->f_1), "collectiblesData.bLegendaryFishStage2RCM");
	SAVE::_SAVEGAME_GET_BOOL(&(bParam0->f_2), "collectiblesData.bRockCarvingsStage2RCM");
	SAVE::_SAVEGAME_GET_BOOL(&(bParam0->f_3), "collectiblesData.bTaxidermyStage1RCM");
	SAVE::_SAVEGAME_GET_BOOL(&(bParam0->f_4), "collectiblesData.bCarolinaParakeetExtinction");
	SAVE::_SAVEGAME_GET_BOOL(&(bParam0->f_5), "collectiblesData.bChalTownHoldups");
	SAVE::_SAVEGAME_GET_BOOL(&(bParam0->f_6), "collectiblesData.bTSAnnesburgRiddle");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_148(Any anParam0) // Position - 0x6CA5 Hash - 0xE835C54F ^0x2F06131D
{
	int i;
	var unk;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 3, "sCheatManagerSaved");
	TEXT_LABEL_ASSIGN_STRING(&unk, "sCheatManagerSaved.iUnlockedCheats", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 3, &unk);

	for (i = 0; i <= 1; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_149(int iParam0) // Position - 0x6CFF Hash - 0x303F4A3C ^0x4005BC2C
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "reinforcedequipmentSaved", 64);
	SAVE::_0x443174C20B8B9E7F(iParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eEquipmentRewardFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(iParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_150(int iParam0) // Position - 0x6D36 Hash - 0x9C057A88 ^0x3E321ABB
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "collectableUiLogSaved", 64);
	SAVE::_0x443174C20B8B9E7F(iParam0, 13, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiCigCardsSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(iParam0, &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiDinoBonesSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_1), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiExoticsSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_2), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiLegendaryFishSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_3), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiParakeetsSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_4), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiRockCarvingsSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_5), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiTaxidermySavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_6), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiTHJackHallSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_7), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiTHHighStakesSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_8), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiTHPoisonTrailSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_9), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiTHTresorMortsSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_10), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiTHElementalTrailSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_11), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eUiTHLandmarksOfRichesSavedFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_12), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_151(BOOL bParam0) // Position - 0x6EBE Hash - 0xFA9C8326 ^0xA7BAD14C
{
	SAVE::_0x443174C20B8B9E7F(bParam0, 47, "shared");
	func_279(bParam0);
	func_280(&(bParam0->f_2));
	func_281(&(bParam0->f_3));
	func_282(&(bParam0->f_4));
	func_283(&(bParam0->f_5));
	func_284(&(bParam0->f_25));
	func_285(&(bParam0->f_26));
	func_286(&(bParam0->f_27));
	func_287(&(bParam0->f_42));
	func_288(&(bParam0->f_43));
	func_289(&(bParam0->f_44));
	func_290(&(bParam0->f_45));
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_152(Any* panParam0, char* sParam1) // Position - 0x6F34 Hash - 0xA4E24F84 ^0xFC8B2EE2
{
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".x", 64);
	SAVE::_SAVEGAME_GET_FLOAT(panParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".y", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(panParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".z", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(panParam0->f_2), &variableName);
	return;
}

void func_153(Any* panParam0) // Position - 0x6F82 Hash - 0xA971632A ^0x79A8A7CB
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "deeds", 64);
	SAVE::_0x81F4E92BE3958364(panParam0, 5398, &unk);

	for (i = 0; i < *panParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->[i /*7*/], 7, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iDeedPacked", 64);
		SAVE::_SAVEGAME_GET_INT_2(&panParam0->[i /*7*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eStatus", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*7*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iCompletionData", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*7*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iGenericInt1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*7*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iGenericInt2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*7*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iUniqueHashID", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*7*/].f_5), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "lastCompletedTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*7*/].f_6), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_154(Any* panParam0) // Position - 0x70B4 Hash - 0x88CD3060 ^0x56AFAE2C
{
	var unk;
	var variableName;
	var variableName2;
	int i;

	SAVE::_0x8E8FFB9E4AD051D2(panParam0, 3206, "beatTrackingData", 17);
	SAVE::_SAVEGAME_GET_INT_3(panParam0, "beatTrackingData.todGangBeatAvailable");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2), "beatTrackingData.iSpawnedCount");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_3), "beatTrackingData.iSeenCount");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_1), "beatTrackingData.iLaunchedCount");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_4), "beatTrackingData.iCompletedCount");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_11), "beatTrackingData.iHerbalistCampState");
	SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_5), "beatTrackingData.eLastCompleted");
	SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_6), "beatTrackingData.eLastSeen");
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_9), "beatTrackingData.bCompletedBeatSinceLastMission");
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_10), "beatTrackingData.bSeenBeatSinceLastMission");
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_7), "beatTrackingData.bAmbushSeenSinceLastBeat");
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_8), "beatTrackingData.bCampfireSeenSinceLastBeat");
	TEXT_LABEL_ASSIGN_STRING(&unk, "beatTrackingData.iCompletedLocation", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_12), 30, &unk);

	for (i = 0; i < panParam0->f_12; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&panParam0->f_12[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "beatTrackingData.beatTrack", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_42), 961, &unk);

	for (i = 0; i < 120; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->f_42[i /*8*/], 8, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iTimesCompleted", 64);
		SAVE::_SAVEGAME_GET_INT_2(&panParam0->f_42[i /*8*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iTimesSeen", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_42[i /*8*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iTimesLaunched", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_42[i /*8*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iTimesSpawned", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_42[i /*8*/].f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iBeatAvailableAt", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_42[i /*8*/].f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eBeatRarity", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_42[i /*8*/].f_5), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".bBeatExhausted", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_42[i /*8*/].f_6), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".bUnlocked", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_42[i /*8*/].f_7), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "beatTrackingData.beatGeneric", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1003), 1081, &unk);

	for (i = 0; i < panParam0->f_1003; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->f_1003[i /*6*/], 6, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".ID", 64);
		SAVE::_SAVEGAME_GET_INT_2(&panParam0->f_1003[i /*6*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iGeneric1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_1003[i /*6*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iGeneric2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_1003[i /*6*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eBeatTown", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_1003[i /*6*/].f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eBeatTimeOfDay", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_1003[i /*6*/].f_5), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".mnPedModel", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_1003[i /*6*/].f_3), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "beatTrackingData.beatUsedLocations", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_2084), 121, &unk);

	for (i = 0; i < panParam0->f_2084; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->f_2084[i /*5*/], 5, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".vUsedAtLocation", 64);
		func_152(&panParam0->f_2084[i /*5*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eBeat", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_2084[i /*5*/].f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iBeatRestrictionTimeLeft", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2084[i /*5*/].f_4), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "beatTrackingData.beatRegionSaved", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_2205), 1001, &unk);

	for (i = 0; i < panParam0->f_2205; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->f_2205[i /*2*/], 2, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iRegionSeen", 64);
		SAVE::_SAVEGAME_GET_INT_2(&panParam0->f_2205[i /*2*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iRegionComplete", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2205[i /*2*/].f_1), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_155(Any* panParam0) // Position - 0x757C Hash - 0x4F295DC3 ^0xA2D6E144
{
	int i;
	int j;
	int num;
	int num2;
	var unk;
	var variableName;
	var unk16;
	var unk24;
	var variableName2;

	SAVE::_0x8E8FFB9E4AD051D2(panParam0, 2408, "shopsData", 17);
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.iTimesRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1168), 154, &unk);

	for (i = 0; i < panParam0->f_1168; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&panParam0->f_1168[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.todLastRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1322), 154, &unk);

	for (i = 0; i < panParam0->f_1322; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_1322[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.todLastRegisterRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1476), 154, &unk);

	for (i = 0; i < panParam0->f_1476; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_1476[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.todLastVisited", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1630), 154, &unk);

	for (i = 0; i < panParam0->f_1630; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_1630[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.todLastEscalation", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1784), 154, &unk);

	for (i = 0; i < panParam0->f_1784; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_1784[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.todTimeToResetInjuredOutfit", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1938), 154, &unk);

	for (i = 0; i < panParam0->f_1938; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_1938[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.eRobberyFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_2092), 154, &unk);

	for (i = 0; i < panParam0->f_2092; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_2092[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "shopsData.eShopFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_2246), 154, &unk);

	for (i = 0; i < panParam0->f_2246; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_2246[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(panParam0, 1168, "shopsData.sPurchaseData");
	TEXT_LABEL_ASSIGN_STRING(&unk, "sShopPurchases", 64);
	SAVE::_0x81F4E92BE3958364(panParam0, 1126, &unk);
	num = 25;

	for (i = 0; i < num; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->[i /*45*/], 45, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eLastItemBoughtFromShop", 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->[i /*45*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eLastItemSoldToShop", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*45*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iTotalMoneySpent", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*45*/].f_43), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iMoneySpentInSession", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*45*/].f_44), &variableName2);
		unk16 = { variableName };
		TEXT_LABEL_APPEND_STRING(&unk16, ".sPurchaseList", 64);
		SAVE::_0x81F4E92BE3958364(&(panParam0->[i /*45*/].f_2), 41, &unk16);
		num2 = 10;
	
		for (j = 0; j < num2; j = j + 1)
		{
			unk24 = { unk16 };
			TEXT_LABEL_APPEND_INT(&unk24, j, 64);
			SAVE::_0x443174C20B8B9E7F(&panParam0->[i /*45*/].f_2[j /*4*/], 4, &unk24);
			variableName2 = { unk24 };
			TEXT_LABEL_APPEND_STRING(&variableName2, ".eItem", 64);
			SAVE::_SAVEGAME_GET_INT_3(&panParam0->[i /*45*/].f_2[j /*4*/], &variableName2);
			variableName2 = { unk24 };
			TEXT_LABEL_APPEND_STRING(&variableName2, ".iPurchaseTimer", 64);
			SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*45*/].f_2[j /*4*/].f_1), &variableName2);
			variableName2 = { unk24 };
			TEXT_LABEL_APPEND_STRING(&variableName2, ".iPurchaseCount", 64);
			SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*45*/].f_2[j /*4*/].f_2), &variableName2);
			variableName2 = { unk24 };
			TEXT_LABEL_APPEND_STRING(&variableName2, ".eShopPurchasedFrom", 64);
			SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*45*/].f_2[j /*4*/].f_3), &variableName2);
			SAVE::_0xE0B45E983BFC0768();
		}
	
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "sPurchaseData.sPlayerPurchases", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_1126), 41, &unk);
	num = panParam0->f_1126;

	for (i = 0; i < num; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->f_1126[i /*4*/], 4, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eItem", 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->f_1126[i /*4*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iPurchaseTimer", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_1126[i /*4*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".iPurchaseCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_1126[i /*4*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, ".eShopPurchasedFrom", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_1126[i /*4*/].f_3), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_1167), "sPurchaseData.eLastPurchaseReg");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_2400), "shopsData.bPlayerHasBrowsedAnyShop");
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_2401), "shopsData.bHideCatInfoBox");
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_2402), "shopsData.bPurchaseMade");
	SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_2403), "shopsData.bRCKittyEmeraldViewed");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2404), "shopsData.iLastHorseSoldTimeStamp");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2405), "shopsData.iSecondLastHorseSoldTimeStamp");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2406), "shopsData.iThirdLastHorseSoldTimeStamp");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2407), "shopsData.iLostLegendaryItemsBitset");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_156(Any* panParam0) // Position - 0x7B36 Hash - 0xA971632A ^0x41F6FBF1
{
	int i;
	var unk;
	var unk9;
	var variableName;
	var variableName2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "regions", 64);
	SAVE::_0x81F4E92BE3958364(panParam0, 1651, &unk);

	for (i = 0; i < *panParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->[i /*11*/], 11, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eRegionFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->[i /*11*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "currentLockdownStartTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "currentWantedZoneStartTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iLockdownDuration", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*11*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "regionLawMemoryData", 64);
		SAVE::_0x443174C20B8B9E7F(&(panParam0->[i /*11*/].f_4), 6, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eLastOuftitSeenByLaw", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eSideburnsStyle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_4.f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eChinStyle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_4.f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eMustacheStyle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_4.f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eTimeOutfitLastSeen", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_4.f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "eAppearanceLawMemoryFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*11*/].f_4.f_5), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "iInocentsKilledInRegion", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*11*/].f_10), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_157(Any anParam0) // Position - 0x7D18 Hash - 0x1257E47E ^0x2B3164D3
{
	int i;
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "regionTownFlags", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 117, &unk);
	TEXT_LABEL_ASSIGN_STRING(&unk, "regionTownFlags.eRegionConversationSaved", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 111, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "regionTownFlags.eRegionConversationCampSave", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_111), 6, &unk);

	for (i = 0; i < anParam0->f_111; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->f_111[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_158(Any* panParam0) // Position - 0x7DC6 Hash - 0xA971632A ^0xA68FC2CC
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "regionalCharacter", 64);
	SAVE::_0x81F4E92BE3958364(panParam0, 1909, &unk);

	for (i = 0; i < *panParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->[i /*2*/], 2, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "rcFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->[i /*2*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todRCDeathTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*2*/].f_1), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_159(Any* panParam0) // Position - 0x7E58 Hash - 0x30B42028 ^0xA728060B
{
	var unk;
	var unk9;
	int i;

	TEXT_LABEL_ASSIGN_STRING(&unk, "SPMetaped", 64);
	SAVE::_0x443174C20B8B9E7F(panParam0, 777, &unk);
	unk9 = { unk };
	TEXT_LABEL_APPEND_STRING(&unk9, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(panParam0, 26, &unk9);
	func_291(panParam0, unk9);
	SAVE::_0xE0B45E983BFC0768();
	unk9 = { unk };
	TEXT_LABEL_APPEND_STRING(&unk9, "OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_26), 601, &unk9);

	for (i = 0; i <= 4; i = i + 1)
	{
		func_292(&panParam0->f_26[i /*120*/], unk9, i);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_627), "iOutfitHash");
	TEXT_LABEL_ASSIGN_STRING(&unk9, "SingleSavedAppearance", 64);
	func_292(&(panParam0->f_627.f_1), unk9, 0);
	unk9 = { unk };
	TEXT_LABEL_APPEND_STRING(&unk9, "PortableSnapshot", 64);
	SAVE::_0x443174C20B8B9E7F(&(panParam0->f_627.f_121), 26, &unk9);
	func_291(&(panParam0->f_627.f_121), unk9);
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_774), "SPMetaped_eSystemFlags");
	TEXT_LABEL_ASSIGN_STRING(&unk9, "SPMetaped_PlayerType", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(panParam0->f_775), "SPMetaped_PlayerType");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_776), "SPMetaped_iCurOutfit");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_160(Any* panParam0) // Position - 0x7F74 Hash - 0x2943C69E ^0x8DCB8937
{
	int i;
	int j;
	var unk;
	var unk9;
	var unk17;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "herbData", 64);
	SAVE::_0x81F4E92BE3958364(panParam0, 4501, &unk);

	for (i = 0; i < 500; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->[i /*9*/], 9, &unk9);
		SAVE::_SAVEGAME_GET_INT_3(&panParam0->[i /*9*/], "eHerbType");
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->[i /*9*/].f_1), "iHerbPackedLocation");
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*9*/].f_2), "todTimePicked");
		SAVE::_SAVEGAME_GET_INT_3(&(panParam0->[i /*9*/].f_3), "eHerbFlags");
		TEXT_LABEL_ASSIGN_STRING(&unk17, "iHerbPatchPlants", 64);
		SAVE::_0x81F4E92BE3958364(&(panParam0->[i /*9*/].f_4), 5, &unk17);
	
		for (j = 0; j < 4; j = j + 1)
		{
			variableName = { unk17 };
			TEXT_LABEL_APPEND_INT(&variableName, j, 64);
			SAVE::_SAVEGAME_GET_INT_2(&panParam0->[i /*9*/].f_4[j], &variableName);
		}
	
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_161(Any* panParam0) // Position - 0x8057 Hash - 0xEF3042BF ^0x3B72D563
{
	var unk;
	var unk9;
	var variableName;
	int i;

	SAVE::_0x443174C20B8B9E7F(panParam0, 2697, "campVignettes");
	SAVE::_SAVEGAME_GET_INT_2(panParam0, "campVignettes.iTotalVigsSeen");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_1), "campVignettes.iTotalCampfireSeen");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_2), "campVignettes.iTotalWalkAndTalkSeen");
	SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_3), "campVignettes.iTotalMusicSeen");
	TEXT_LABEL_ASSIGN_STRING(&unk, "campVignettes.vigData", 64);
	SAVE::_0x81F4E92BE3958364(&(panParam0->f_4), 2693, &unk);

	for (i = 0; i < 673; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&panParam0->f_4[i /*4*/], 4, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesSeen", 64);
		SAVE::_SAVEGAME_GET_INT_2(&panParam0->f_4[i /*4*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesLaunched", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_4[i /*4*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesSpawned", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(panParam0->f_4[i /*4*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bSeen", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(panParam0->f_4[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_162(int iParam0) // Position - 0x8174 Hash - 0xEF3042BF ^0xDE86BFD6
{
	var unk;
	var unk9;
	var variableName;
	int i;

	SAVE::_0x443174C20B8B9E7F(iParam0, 1537, "ambVigData");
	SAVE::_SAVEGAME_GET_INT_2(iParam0, "ambVigData.iLaunches");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_1), "ambVigData.iSpawned");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_2), "ambVigData.iSeen");
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_3), "ambVigData.iTriggered");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_4), "ambVigData.todLaunchTimeHuman");
	SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_5), "ambVigData.todLaunchTimeAnimal");
	TEXT_LABEL_ASSIGN_STRING(&unk, "ambVigData.sRegisteredVigs", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_6), 1489, &unk);

	for (i = 0; i < iParam0->f_6; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->f_6[i /*6*/], 6, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iSeen", 64);
		SAVE::_SAVEGAME_GET_INT_2(&iParam0->f_6[i /*6*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iLaunched", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_6[i /*6*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iSpawned", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_6[i /*6*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iTriggered", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_6[i /*6*/].f_3), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".bUnlocked", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(iParam0->f_6[i /*6*/].f_4), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".todLaunchTime", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(iParam0->f_6[i /*6*/].f_5), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "ambVigData.sUsedLocs", 64);
	SAVE::_0x81F4E92BE3958364(&(iParam0->f_1495), 41, &unk);

	for (i = 0; i < iParam0->f_1495; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&iParam0->f_1495[i /*4*/], 4, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "vLoc", 64);
		func_152(&(iParam0->f_1495[i /*4*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "eVig", 64);
		SAVE::_SAVEGAME_GET_INT_3(&iParam0->f_1495[i /*4*/], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_2(&(iParam0->f_1536), "ambVigData.iNumberOfParakeet");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_163(Any anParam0, char* sParam1) // Position - 0x8392 Hash - 0x587F03C2 ^0xE698F04F
{
	SAVE::_0x8E8FFB9E4AD051D2(anParam0, 1399, "persona", 11);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, "psna_ePreferredDistrict");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), "psna_eLastValidRegion");
	func_152(&(anParam0->f_2), "psna_vLastValidPosition");
	func_293(&(anParam0->f_5));
	func_294(&(anParam0->f_15));
	func_295(&(anParam0->f_62));
	func_296(&(anParam0->f_350));
	func_297(&(anParam0->f_1362));
	func_298(&(anParam0->f_1365));
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_164() // Position - 0x8402 Hash - 0x59821076 ^0xD6487C6A
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (func_40(i))
			SCRIPTS::REQUEST_SCRIPT(func_166(i));
	}

	return;
}

BOOL func_165(int iParam0, BOOL bParam1) // Position - 0x8430 Hash - 0x13087D2E ^0x13087D2E
{
	BOOL flag;

	flag = iParam0 >= 0 && iParam0 <= 10;
	bParam1 && !flag;
	return flag;
}

char* func_166(int iParam0) // Position - 0x8457 Hash - 0x5FD83E88 ^0xD230D4E6
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "";
	
		case 1:
			return "init_global_block_ugc";
	
		case 2:
			return "init_global_block_mc";
	
		case 3:
			return "init_global_block_profiler";
	
		case 4:
			return "init_global_block_mp";
	
		case 5:
			return "init_global_block_sp";
	
		case 6:
			return "init_global_block_transition";
	
		case 7:
			return "init_global_block_shared";
	
		case 8:
			return "init_global_block_mc_race";
	
		case 9:
			return "init_global_block_mc_deathmatch";
	
		case 10:
			return "init_global_block_softsave";
	}

	return str;
}

void func_167(var uParam0, int iParam1, int iParam2) // Position - 0x8517 Hash - 0x962C2257 ^0x962C2257
{
	*uParam0 = iParam1;
	return;
}

char* func_168() // Position - 0x8524 Hash - 0x306ACA3A ^0xFCE513B6
{
	return "allyEnum";
}

char* func_169() // Position - 0x8530 Hash - 0x306ACA3A ^0x3F2FF867
{
	return "horseEntityIndex";
}

char* func_170() // Position - 0x853C Hash - 0x306ACA3A ^0x78CCE855
{
	return "blipIndex";
}

char* func_171() // Position - 0x8548 Hash - 0x306ACA3A ^0xCFAD7563
{
	return "genericMissionInt";
}

char* func_172() // Position - 0x8554 Hash - 0x306ACA3A ^0x85A885F6
{
	return "genericMissionFloat";
}

Vector3 func_173() // Position - 0x8560 Hash - 0x6D2A9AA9 ^0x67A01A7B
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "eDuelResult", 24);
	return unk;
}

char* func_174() // Position - 0x8574 Hash - 0x306ACA3A ^0xA5EA266F
{
	return "cutDeleteMe";
}

char* func_175() // Position - 0x8580 Hash - 0x306ACA3A ^0xFDF05179
{
	return "brain_id";
}

char* func_176() // Position - 0x858C Hash - 0x306ACA3A ^0x62A8546A
{
	return "brain_player";
}

char* func_177() // Position - 0x8598 Hash - 0x306ACA3A ^0x2D5921C0
{
	return "brain_type";
}

char* func_178() // Position - 0x85A4 Hash - 0x306ACA3A ^0x3F3559F8
{
	return "brain_isHidden";
}

char* func_179() // Position - 0x85B0 Hash - 0x306ACA3A ^0x9C8C879
{
	return "brain_isDisabled";
}

char* func_180() // Position - 0x85BC Hash - 0x306ACA3A ^0x923C909C
{
	return "brain_timeStamp";
}

char* func_181() // Position - 0x85C8 Hash - 0x306ACA3A ^0x3D6BCDD9
{
	return "brain_value";
}

char* func_182() // Position - 0x85D4 Hash - 0x306ACA3A ^0xC96C1D8B
{
	return "brain_lootable_type";
}

char* func_183() // Position - 0x85E0 Hash - 0x306ACA3A ^0xBAE4EF63
{
	return "brain_lootable_value";
}

char* func_184() // Position - 0x85EC Hash - 0x306ACA3A ^0x8A3B1B3B
{
	return "brain_lootable_deed";
}

char* func_185() // Position - 0x85F8 Hash - 0x306ACA3A ^0x8F3D0F3D
{
	return "brain_lootable_id";
}

char* func_186() // Position - 0x8604 Hash - 0x306ACA3A ^0xD72F4CF6
{
	return "MP_HUD_Local_Status_Icon";
}

char* func_187() // Position - 0x8610 Hash - 0x306ACA3A ^0x6748FE3E
{
	return "MP_HUD_Local_Secondary_Icon";
}

char* func_188() // Position - 0x861C Hash - 0x306ACA3A ^0xED595DC8
{
	return "MP_HUD_Local_Blip_Sprite";
}

char* func_189() // Position - 0x8628 Hash - 0x306ACA3A ^0xCDDAF1C0
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

char* func_190() // Position - 0x8634 Hash - 0x306ACA3A ^0x95325912
{
	return "MP_HUD_Force_My_Blip_Persistent_For_Teams";
}

char* func_191() // Position - 0x8640 Hash - 0x306ACA3A ^0x2D5D1C1E
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

char* func_192() // Position - 0x864C Hash - 0x306ACA3A ^0x608B20A0
{
	return "fetch_entity";
}

char* func_193() // Position - 0x8658 Hash - 0x306ACA3A ^0x4B0CA2DF
{
	return "fetch_turned_in";
}

char* func_194() // Position - 0x8664 Hash - 0x306ACA3A ^0xAA7C53E4
{
	return "fetch_static_prop_placed_on_ground";
}

char* func_195() // Position - 0x8670 Hash - 0x306ACA3A ^0x64FFC640
{
	return "fetch_combat_config";
}

char* func_196() // Position - 0x867C Hash - 0x306ACA3A ^0x97781BA6
{
	return "chu_vip_ped";
}

char* func_197() // Position - 0x8688 Hash - 0x306ACA3A ^0xDEA75D65
{
	return "NetStableMount";
}

char* func_198() // Position - 0x8694 Hash - 0x306ACA3A ^0x4259B351
{
	return "NetStableGUID1";
}

char* func_199() // Position - 0x86A0 Hash - 0x306ACA3A ^0x91F1BEF5
{
	return "NetStableGUID2";
}

char* func_200() // Position - 0x86AC Hash - 0x306ACA3A ^0x9914A6CE
{
	return "NetStableGUID3";
}

char* func_201() // Position - 0x86B8 Hash - 0x306ACA3A ^0x54829010
{
	return "NetStableGUID4";
}

char* func_202() // Position - 0x86C4 Hash - 0x306ACA3A ^0x71BE3081
{
	return "NSS_PLAYER_FLAG";
}

char* func_203() // Position - 0x86D0 Hash - 0x306ACA3A ^0x2E3D662E
{
	return "NSS_PLAYER_BOUNTY_CUSTODIAN";
}

void func_204() // Position - 0x86DC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_205() // Position - 0x86E4 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_206() // Position - 0x86EC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_207(Any anParam0) // Position - 0x86F4 Hash - 0x58C860A ^0xB7F35888
{
	BOOL flag;
	var unk;
	BOOL flag2;
	int i;
	var unk4;
	BOOL flag3;
	var unk12;
	var unk13;
	var unk21;
	int randomIntInRange;
	var unk122;
	int num;
	var unk123;

	TEXT_LABEL_ASSIGN_STRING(&unk, "loading_tips", 24);
	flag = DATAFILE::PARSEDDATA_IS_FILE_VALID(*anParam0);

	if (!flag)
		*anParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(MISC::GET_HASH_KEY(&unk));

	flag2 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(*anParam0);

	if (!flag2)
		return false;

	func_299(anParam0);
	anParam0->f_79 = func_300(anParam0, 1);

	if (anParam0->f_79 <= 0)
		return false;

	unk12 = anParam0->f_1;
	unk21 = 100;

	for (i = 0; i < anParam0->f_79; i = i + 1)
	{
		unk21[i] = i;
	}

	for (i = 0; i <= anParam0->f_79 - 1; i = i + 1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(i, anParam0->f_79 - 1);
		unk122 = unk21[i];
		unk21[i] = unk21[randomIntInRange];
		unk21[randomIntInRange] = unk122;
	}

	num = 0;

	while (num < 10)
	{
		anParam0->f_1 = unk12;
		anParam0->f_3 = unk21[num];
	
		if (func_301(anParam0, 0))
		{
			if (func_302(anParam0, 2, &unk4))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk4))
				{
					TEXT_LABEL_COPY(&unk123, { unk4 }, 4);
				
					if (func_303(anParam0, 4, &flag3))
						if (flag3)
							func_304(&unk123, 1);
				
					if (func_303(anParam0, 5, &flag3))
						if (flag3)
							func_304(&unk123, 2);
				
					func_305(anParam0, 3, &(unk123.f_5));
				
					if (func_302(anParam0, 6, &unk13))
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk13))
							unk123.f_6 = MISC::GET_HASH_KEY(&unk13);
				}
			}
		
			if (unk123.f_6 == 0 || MISSIONDATA::MISSIONDATA_GET_RATING(unk123.f_6) >= 2)
			{
				anParam0->f_5[num /*7*/] = { unk123 };
				num = num + 1;
			}
		}
	}

	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*anParam0);
	return true;
}

void func_208(Any anParam0, int iParam1) // Position - 0x8893 Hash - 0x4F8BE4B5 ^0x2768E6CA
{
	anParam0->f_80 = iParam1;
	return;
}

void func_209(Any anParam0, int iParam1) // Position - 0x88A1 Hash - 0x4F8BE4B5 ^0x32DA0ACC
{
	anParam0->f_76 = iParam1;
	return;
}

int func_210() // Position - 0x88AF Hash - 0x65CB890F ^0x36F1E68B
{
	if (MISC::IS_BIT_SET(Global_1955830.f_1, 4))
		return 0;

	if (MISC::IS_BIT_SET(Global_1955830.f_1, 5))
		return 1;

	if (func_48() == false)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			if (func_306(255))
				return 1;
		
			if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
				return 1;
		}
	}

	if (func_307(false))
		return 1;

	if (Global_16)
		return 1;

	if (func_308())
		return 1;

	if (CAM::HAS_LETTER_BOX())
		if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
			return 1;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
			return 1;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return 1;

	if (GRAPHICS::GET_TV_CHANNEL() != -1)
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
			return 1;

	if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
		if (HUD::IS_RADAR_HIDDEN())
			if (!CAM::_0x1204EB53A5FBC63D())
				return 1;

	if (func_48() == -1)
		if (func_309(Global_1835011[39 /*74*/].f_1))
			if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
				if (!CAM::_0x1204EB53A5FBC63D())
					return 1;

	if (STREAMING::_0x99F92061EFE908BA() || func_310(Global_1935630, 16384))
		return 1;

	if (func_310(Global_1935630, 4096))
		return 1;

	if (func_310(Global_1935630, 2048))
		return 1;

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return 1;

	return 0;
}

int func_211() // Position - 0x8A2B Hash - 0x6F87B975 ^0xBC85646B
{
	if (MISC::IS_BIT_SET(Global_1955830.f_1, 4))
		return 0;

	if (MISC::IS_BIT_SET(Global_1955830.f_1, 6))
		return 1;

	if (func_48() == -2)
		return 1;

	if (func_310(Global_1935630, 4096))
		return 1;

	if (func_310(Global_1935630, 2048))
		return 1;

	if (!CAM::IS_SCREEN_FADED_IN())
		return 1;

	if (STREAMING::_0x99F92061EFE908BA() || func_310(Global_1935630, 16384))
		return 1;

	if (Global_16 || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro"))
		return 1;

	if (func_311())
		if (HUD::IS_RADAR_HIDDEN())
			return 1;

	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		if (!CAM::_0x1204EB53A5FBC63D() && !CAM::IS_CINEMATIC_CAM_RENDERING() && !func_311())
			return 1;

	if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
		return 1;

	if (func_48() == false)
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
			if (func_312(255) > 2 && !func_313(Global_1224589.f_5, 8192))
				return 1;
			else if (func_314(32))
				return 1;

	return 0;
}

void func_212(var uParam0, BOOL bParam1) // Position - 0x8B51 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_213(uParam0))
		func_315(uParam0);

	return;
}

BOOL func_213(var uParam0) // Position - 0x8B71 Hash - 0x5001E582 ^0x5001E582
{
	return func_316(*uParam0, 1);
}

float func_214(var uParam0) // Position - 0x8B81 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_213(uParam0))
		return uParam0->f_1;

	if (func_317(uParam0))
		return uParam0->f_2;

	return func_318() - uParam0->f_1;
}

void func_215(Hash hParam0) // Position - 0x8BB6 Hash - 0x4578870D ^0x59A028F3
{
	if (hParam0 != Global_1955830.f_3)
	{
		COMPAPP::_0x74BCCEB233AD95B2(joaat("MapState"), hParam0);
		Global_1955830.f_3 = hParam0;
	}

	return;
}

void func_216(eEventType eetParam0, int iParam1) // Position - 0x8BDC Hash - 0xB87FDFDA ^0xB87FDFDA
{
	switch (eetParam0)
	{
		case -2095977185:
			func_322(iParam1);
			break;
	
		case -725272239:
			func_319(iParam1);
			break;
	
		case 516249386:
			func_325(iParam1);
			break;
	
		case 543140406:
			func_321(iParam1);
			break;
	
		case 809652668:
			func_323(iParam1);
			break;
	
		case 904577075:
			func_326(iParam1);
			break;
	
		case 1121131740:
			func_320(iParam1);
			break;
	
		case 1860341470:
			func_324();
			break;
	}

	return;
}

void func_217() // Position - 0x8C62 Hash - 0x4B861C8C ^0xE2A1D917
{
	if (Global_1572887.f_94.f_42 != false && func_327())
	{
		func_328(1);
		return;
	}

	if (Global_1572887.f_94.f_53 > 2 && func_327())
	{
		func_328(1);
		return;
	}

	if (Global_1572887.f_94.f_43 != -1 && func_327())
	{
		func_328(1);
		return;
	}

	if (Global_1572887.f_94.f_54 != false && func_327())
	{
		func_328(1);
		return;
	}

	Global_1572887.f_94.f_54 = 0;
	return;
}

void func_218() // Position - 0x8CEB Hash - 0x91A63942 ^0xBFFF1F45
{
	char* str;
	int num;

	Global_1572887.f_94.f_56 = MISC::GET_GAME_TIMER();
	str.f_2 = 4;
	str = "";
	str.f_1 = "";
	str.f_2 = 0;

	if (func_329(128) || func_329(256))
	{
		str.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		str.f_3.f_1 = 0;
		str.f_3.f_2 = 0;
		str.f_3.f_3 = 0;
		str.f_7 = MISC::GET_HASH_KEY("IB_EXIT" /*Exit*/);
		str.f_7.f_1 = 0;
		str.f_7.f_2 = 0;
		str.f_7.f_3 = 0;
	}
	else
	{
		str.f_3 = MISC::GET_HASH_KEY("IB_EXIT" /*Exit*/);
		str.f_3.f_1 = 0;
		str.f_3.f_2 = 0;
		str.f_3.f_3 = 0;
	}

	num = 0;
	num.f_1 = "SG_HDNG" /*Alert*/;
	num.f_2 = func_330();
	Global_1572887.f_94.f_52 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(&str, &num, true);
	func_328(2);
	func_331(false);
	return;
}

void func_219() // Position - 0x8DC1 Hash - 0xB38177E7 ^0x5F4FBB8F
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	int eventData;
	int num;

	if (func_48() == false)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1572887.f_14, false))
		{
			if (func_332() > 5)
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				func_328(3);
				return;
			}
		}
	}

	if (UISTICKYFEED::_UI_STICKY_FEED_IS_ALERT_SCREEN_ACTIVE())
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);

	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("status_alert_feed")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("status_alert_feed"), &eventData))
		{
			switch (eventData)
			{
				case -1203660660:
					if (eventData.f_1 == Global_1572887.f_94.f_52)
					{
						if (eventData.f_2 == 2074623703)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("status_alert_feed"));
							flag = 1;
						}
					
						if (eventData.f_2 == 444632721)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("status_alert_feed"));
							flag3 = true;
						}
					
						if (eventData.f_2 == 1400745903)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("status_alert_feed"));
							flag2 = true;
						}
					}
					break;
			
				case -445432096:
					if (eventData.f_1 == Global_1572887.f_94.f_52)
					{
						Global_1572887.f_94.f_52 = 0;
						flag4 = true;
						UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("status_alert_feed"));
					}
					break;
			}
		}
	
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("status_alert_feed"));
	}

	num = MISC::GET_GAME_TIMER() - Global_1572887.f_94.f_56;
	flag5 = num > Global_1899378.f_2.f_14 && Global_1572887.f_94.f_56 != -1;

	if (flag5 || flag || flag2 || flag3 || flag4)
	{
		func_328(3);
	
		if (func_329(128) || func_329(256))
		{
			if (flag)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_333(8);
			}
			else if (flag2 || flag4 || flag5)
			{
				func_333(16);
			}
		}
	}

	return;
}

void func_220() // Position - 0x8F76 Hash - 0xFE991A60 ^0x979F0AE7
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		if (func_334(255) && !(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()))
			CAM::DO_SCREEN_FADE_OUT(0);

	if (Global_1572887.f_94.f_52 != 0)
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_94.f_52);

	Global_1572887.f_94.f_52 = 0;
	Global_1572887.f_94.f_42 = 0;
	Global_1572887.f_94.f_54 = 0;
	Global_1572887.f_94.f_53 = 0;
	Global_1572887.f_94.f_43 = -1;
	Global_1572887.f_94.f_56 = -1;
	func_328(0);
	return;
}

int func_221(const char* sParam0, const char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8FFB Hash - 0xB88D7AA5 ^0x36259347
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = iParam4;
	unk.f_1 = iParam5;
	unk.f_2 = iParam6;
	unk.f_3 = iParam8;
	unk14.f_7 = 1;
	unk14 = iParam7;
	unk14.f_1 = sParam0;
	unk14.f_2 = sParam1;
	unk14.f_3 = 0;
	unk14.f_4 = iParam2;
	unk14.f_5 = iParam3;
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam9, bParam10);
	return num;
}

void func_222(int iParam0) // Position - 0x905C Hash - 0x42868A8 ^0x40AFB79E
{
	Global_1572887.f_94.f_49 = iParam0;
	return;
}

void func_223() // Position - 0x906E Hash - 0x5CB0C11B ^0x1A3EF522
{
	var unk;

	unk = 2;
	unk[0 /*2*/] = { Global_1572887.f_94.f_6 };
	unk[1 /*2*/] = { Global_1572887.f_94.f_6.f_2 };
	Global_1572887.f_94.f_50 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&unk, 2);
	return;
}

int func_224() // Position - 0x90AE Hash - 0x64E22BA4 ^0x422165CE
{
	var unk;
	int displaynamesFromHandles;
	const char* str;
	const char* str2;
	const char* str3;

	unk = 2;
	displaynamesFromHandles = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Global_1572887.f_94.f_50, &unk, 2);

	if (displaynamesFromHandles == -1)
		return 2;
	else if (displaynamesFromHandles == 1)
		return 0;

	str = func_335(&unk[0 /*8*/], joaat("COLOR_PURE_WHITE"));
	str2 = func_335(&unk[1 /*8*/], joaat("COLOR_PURE_WHITE"));
	str3 = MISC::VAR_STRING(42, "NT_INV_EXTENDED", str2, str);
	func_221("NET_SESSION_INV_HEADER", str3, joaat("blips"), joaat("blip_mp_playlist_teamgame"), -2, 0, 0, 1, 0, true, true);
	return 1;
}

void func_225() // Position - 0x9132 Hash - 0x213A1346 ^0x2C64C03B
{
	NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	func_331(false);
	func_69(false);
	func_71();
	return;
}

void func_226() // Position - 0x914C Hash - 0x7C795468 ^0x4CE1D64C
{
	func_247();
	func_249(2);

	if (func_336(Global_1572887.f_94.f_12, 131072))
	{
		func_333(8);
		return;
	}

	if (func_337())
	{
		func_338(128);
		return;
	}

	func_333(8);
	return;
}

void func_227() // Position - 0x9192 Hash - 0xD790A9BB ^0xD790A9BB
{
	var unk;

	if (func_339())
		func_249(17);

	if (func_340(16))
	{
		func_249(17);
		return;
	}

	if (!func_340(8))
		return;

	func_341(8);
	func_342();

	if (func_48() == -1)
	{
		func_249(4);
		return;
	}

	switch (Global_1572887.f_94.f_1)
	{
		case 0:
			unk = { func_343() };
			NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(unk.f_10));
			break;
	
		case 1:
			if (NETWORK::NETWORK_REQUEST_JOIN(&(Global_1572887.f_94.f_12)) == -1)
			{
				func_249(17);
				return;
			}
			break;
	
		case 2:
			NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
			break;
	
		case 3:
			NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
			break;
	}

	func_249(3);
	return;
}

void func_228() // Position - 0x9250 Hash - 0x1CD6D5DA ^0x1CD6D5DA
{
	if (!func_344())
	{
		func_249(17);
		return;
	}

	func_345();
	func_249(6);
	return;
}

void func_229() // Position - 0x9272 Hash - 0xC7ADE988 ^0xF20E06BE
{
	var unk;

	if (!func_346())
		return;

	if (func_347() == 2 || func_347() == 3)
	{
		NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
	}
	else if (func_347() == 0 || func_347() == 1)
	{
		unk = { func_343() };
		NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(unk.f_10));
	}

	func_249(3);
	return;
}

void func_230() // Position - 0x92D2 Hash - 0xF22F89F8 ^0xF952E246
{
	if (!func_344())
	{
		func_333(4);
		func_249(17);
		return;
	}

	switch (func_347())
	{
		case 0:
		case 2:
		case 4:
			break;
	
		case 1:
		case 3:
			break;
	}

	func_70();
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
	func_247();
	func_249(5);
	return;
}

void func_231() // Position - 0x9330 Hash - 0xE1CE474D ^0x35CC5F53
{
	int num;

	num = func_348();

	if (num == 1)
	{
		func_349(true);
		func_350();
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		func_247();
		func_351(0, false, 0, true);
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		func_352(true, true);
		func_249(8);
	}
	else if (num == 2)
	{
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_333(4);
		func_249(17);
	}

	return;
}

void func_232() // Position - 0x93A0 Hash - 0x22C2214B ^0xA807A162
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);

	func_247();
	func_249(9);
	return;
}

void func_233() // Position - 0x93C6 Hash - 0x5AB02C9F ^0x5AB02C9F
{
	func_247();
	func_331(true);
	func_249(10);
	return;
}

void func_234() // Position - 0x93DD Hash - 0x379ECCB6 ^0xE6511455
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();

	if (!func_340(1) || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		func_247();
		func_353();
		func_249(11);
	}
	else if (func_339())
	{
		func_338(16);
		func_249(17);
	}

	return;
}

void func_235() // Position - 0x9425 Hash - 0x178C6F9A ^0xC5F9A09A
{
	int scriptTaskStatus;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();

	if (func_339())
	{
		func_338(16);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_333(4);
		func_249(17);
	}

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(Global_1224589.f_3, SCRIPT_TASK_DISMOUNT_ANIMAL, true);

	if (scriptTaskStatus == 0 || scriptTaskStatus == 1)
		return;

	if (PED::IS_PED_ON_MOUNT(Global_1224589.f_3))
	{
		func_350();
		return;
	}

	func_354();
	func_331(true);
	func_249(12);
	return;
}

void func_236() // Position - 0x94B2 Hash - 0x5FFA7107 ^0x81D234A5
{
	var unk;
	var unk18;
	var unk22;
	var gamerHandle;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();

	if (func_339())
	{
		func_338(16);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_333(4);
		func_249(17);
	}

	unk = { func_343() };
	unk18 = { func_355() };
	unk22 = { func_356() };

	switch (func_347())
	{
		case 0:
			gamerHandle = { unk };
			break;
	
		case 1:
			gamerHandle = { unk };
			break;
	
		case 2:
			gamerHandle = { unk18 };
			break;
	
		case 3:
			gamerHandle = { unk18 };
			break;
	
		case 4:
			gamerHandle = { unk22 };
			break;
	}

	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&gamerHandle))
		return;

	func_247();
	func_249(13);
	return;
}

void func_237() // Position - 0x9589 Hash - 0x5FFA7107 ^0x81D234A5
{
	var unk;
	var unk18;
	var unk22;
	var gamerHandle;
	Player playerFromGamerHandle;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();

	if (func_339())
	{
		func_338(16);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_333(4);
		func_249(17);
	}

	unk = { func_343() };
	unk18 = { func_355() };
	unk22 = { func_356() };

	switch (func_347())
	{
		case 0:
			gamerHandle = { unk };
			break;
	
		case 1:
			gamerHandle = { unk };
			break;
	
		case 2:
			gamerHandle = { unk18 };
			break;
	
		case 3:
			gamerHandle = { unk18 };
			break;
	
		case 4:
			gamerHandle = { unk22 };
			break;
	}

	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&gamerHandle))
	{
		func_338(8);
		func_357(Global_1224589.f_11);
		func_333(2);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		func_333(4);
		func_249(17);
	}

	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&gamerHandle);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
		return;

	func_358(playerFromGamerHandle);
	NETWORK::_0x5A91BCEF74944E93(playerFromGamerHandle, 30f);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle))
		return;

	func_247();
	func_249(14);
	return;
}

void func_238() // Position - 0x96D8 Hash - 0x7AB4EF21 ^0x18B8F287
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();

	if (func_359() && func_360() && func_312(255) > 0 && func_361() > -1)
		func_249(16);

	return;
}

void func_239() // Position - 0x971B Hash - 0x8AA08EB6 ^0x9B771417
{
	Player player;
	int num;
	var unk;
	int num2;
	int num3;
	BOOL flag;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();

	if (func_339())
	{
		func_338(16);
		func_249(17);
	}

	player = Global_1572887.f_94.f_39;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		func_338(8);
		func_362(true);
		func_357(Global_1224589.f_11);
		func_333(2);
		func_333(4);
		func_249(17);
	}

	if (func_312(player) == 0)
		return;

	if (func_363() != 2 && func_334(255))
		return;

	num = func_364(Global_1055058[player /*116*/].f_2);

	if (num == 1)
		GANG::_NETWORK_REQUEST_GANG_JOIN(GANG::NETWORK_GET_GANG_ID(player));

	if (func_365())
	{
		func_366();
		func_333(32);
		func_333(2);
		func_249(17);
		return;
	}

	if (Global_262777[player /*69*/].f_1.f_54 != 0)
		num = func_364(Global_262777[player /*69*/].f_1.f_54);

	if (num == 10 || num == 1)
	{
		if (!func_367(-1, false))
			return;
	
		unk = { func_368(player) };
		num2 = func_369(unk.f_13, unk.f_12);
	
		if (num2 == 1)
			return;
		else if (num2 == 2)
			func_370(1024);
	
		if (func_371(player))
		{
			func_333(2);
			func_249(17);
			return;
		}
		else
		{
			func_338(4);
			func_372(true);
			func_72(2);
			func_249(17);
			return;
		}
	}

	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		func_331(false);
		return;
	}

	num3 = func_347();
	flag = false;

	if (num3 != 1 && num3 != 3 || flag)
		flag;

	if (!func_373())
		return;

	func_333(2);
	func_249(17);
	return;
}

void func_240() // Position - 0x98D2 Hash - 0x6548C33C ^0x75526048
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();

	if (func_340(4))
	{
		if (Global_1572887.f_94.f_51 != 0)
			return;
	
		if (func_374())
		{
			if (!func_340(2) && !func_334(255) && !(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
				CAM::DO_SCREEN_FADE_IN(0);
		
			if (!Global_1224589.f_8 || Global_1224589.f_10 == Global_1224589)
				func_375(0, 3, 0);
		}
		else if (func_363() != 2 && func_48() == false)
		{
			if (func_363() == 0)
				func_376(0);
			else if (func_363() == 1)
				func_18();
		}
	}

	if (!func_340(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (func_334(255))
		{
			return;
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			func_362(false);
			func_377(true, true);
		}
	}

	if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_OUT(0);
	
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}

	if (Global_1572887.f_94.f_1 == 2 || Global_1572887.f_94.f_1 == 3)
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();

	if (!func_340(32))
		func_352(false, true);

	func_72(2);
	func_331(false);
	func_71();
	return;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x9A1E Hash - 0x6F79B86B ^0x59DCEAA3
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_242(int iParam0) // Position - 0x9A63 Hash - 0x44378237 ^0x44378237
{
	if (iParam0 >= 42 || iParam0 <= 0)
		return true;

	return Global_1899202[iParam0] >= 1;
}

void func_243(int iParam0) // Position - 0x9A8B Hash - 0xE2E98BE0 ^0x18B26594
{
	int i;

	if (iParam0 >= 0)
	{
		Global_1898441[iParam0 /*38*/] = 0;
		Global_1898441[iParam0 /*38*/].f_1 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[iParam0 /*38*/].f_2), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[iParam0 /*38*/].f_18), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[iParam0 /*38*/].f_21), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[iParam0 /*38*/].f_24), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[iParam0 /*38*/].f_27), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[iParam0 /*38*/].f_30), "", 64);
	
		for (i = 0; i <= 3; i = i + 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_1898441[iParam0 /*38*/].f_5[i /*3*/], "", 24);
		}
	}

	return;
}

BOOL func_244(int iParam0) // Position - 0x9B25 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

void func_245(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, int iParam38, BOOL bParam39) // Position - 0x9B2E Hash - 0x51E8AE6C ^0xC2F7E027
{
	var unk;
	int i;

	if (!func_378(iParam0))
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_18)) || MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_21)))
		return;

	MISC::ACTIVITY_FEED_CREATE(&(iParam0.f_18), &(iParam0.f_21));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_2)))
		MISC::ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(&(iParam0.f_2));

	if (bParam39)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0.f_24)) && !MISC::IS_STRING_NULL_OR_EMPTY(&iParam0.f_5[0 /*3*/]))
		{
			MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(&iParam0.f_5[0 /*3*/], &(iParam0.f_24));
			unk = { func_379(PLAYER::PLAYER_ID()) };
		
			if (func_380(unk))
				MISC::_0xAF530E56505D1BD6(&unk);
		}
	
		for (i = 1; i <= 3; i = i + 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&iParam0.f_5[i /*3*/]))
				MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(&iParam0.f_5[i /*3*/]);
		}
	}

	MISC::ACTIVITY_FEED_POST();
	func_243(iParam38);
	Global_1899202[iParam0] = Global_1899202[iParam0] + 1;
	return;
}

void func_246(int iParam0) // Position - 0x9C1B Hash - 0x1569494B ^0xCCC341E5
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

void func_247() // Position - 0x9C96 Hash - 0xC7E398FF ^0xE19E192D
{
	Global_1572887.f_94.f_40 = MISC::GET_GAME_TIMER();
	return;
}

void func_248(int iParam0) // Position - 0x9CAA Hash - 0x42868A8 ^0x1DF1CEDD
{
	Global_1572887.f_94.f_1 = iParam0;
	return;
}

void func_249(int iParam0) // Position - 0x9CBC Hash - 0x29A8F290 ^0x8EFB0B73
{
	Global_1572887.f_94 = iParam0;
	return;
}

BOOL func_250() // Position - 0x9CCC Hash - 0x94241B31 ^0x57125D05
{
	return Global_1572887.f_94.f_56 != -1;
}

void func_251(Hash hParam0) // Position - 0x9CDE Hash - 0x29A8F290 ^0x35D8332D
{
	Global_1572887.f_182 = hParam0;
	return;
}

void func_252(Hash hParam0) // Position - 0x9CEE Hash - 0x1FE82B43 ^0x33DE3884
{
	func_381(&(Global_1572887.f_182.f_1), func_261(hParam0));
	return;
}

char* func_253(int iParam0) // Position - 0x9D08 Hash - 0x4786B255 ^0x59510569
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case joaat("arg_4"):
			str = "arg_4";
			break;
	
		case joaat("district_id"):
			str = "district_id";
			break;
	
		case joaat("arg_5"):
			str = "arg_5";
			break;
	
		case joaat("launchpreset"):
			str = "launchPreset";
			break;
	
		case joaat("char_slot") /* collision: p_fav01_grass_06_268 */:
			str = "char_slot";
			break;
	
		case joaat("minigame_id"):
			str = "minigame_id";
			break;
	
		case joaat("state_id"):
			str = "state_id";
			break;
	
		case joaat("arg_0"):
			str = "arg_0";
			break;
	
		case joaat("arg_1"):
			str = "arg_1";
			break;
	
		case joaat("series_id"):
			str = "series_id";
			break;
	
		case joaat("region_id"):
			str = "region_id";
			break;
	
		case joaat("mission_id"):
			str = "mission_id";
			break;
	
		case joaat("arg_6"):
			str = "arg_6";
			break;
	
		case joaat("arg_7"):
			str = "arg_7";
			break;
	
		case joaat("arg_8"):
			str = "arg_8";
			break;
	
		case joaat("Mode"):
			str = "mode";
			break;
	
		case joaat("arg_9"):
			str = "arg_9";
			break;
	
		case joaat("arg_2"):
			str = "arg_2";
			break;
	
		case joaat("arg_3"):
			str = "arg_3";
			break;
	}

	return str;
}

int func_254() // Position - 0x9E3B Hash - 0x7000BE7 ^0x65211ED1
{
	return MISC::GET_GAME_TIMER() - iLocal_15.f_1;
}

void func_255(int iParam0) // Position - 0x9E4C Hash - 0xE67EF483 ^0x26A335C5
{
	var unk;

	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	*iParam0 = { unk };
	return;
}

int func_256(Hash hParam0) // Position - 0x9E85 Hash - 0xCD57912C ^0xCD57912C
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

int func_257(Hash hParam0) // Position - 0xA42E Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_258(Hash hParam0) // Position - 0xA4F2 Hash - 0x3841B42D ^0x3841B42D
{
	switch (hParam0)
	{
		case joaat("newhanover"):
			return 3;
	
		case joaat("ambarino"):
			return 0;
	
		case joaat("lemoyne"):
			return 1;
	
		case joaat("westelizabeth"):
			return 4;
	
		case joaat("guarma"):
			return 5;
	
		case joaat("newaustin"):
			return 2;
	
		default:
		
	}

	return -1;
}

int func_259(Hash hParam0) // Position - 0xA53F Hash - 0xCBE7BE7C ^0xCBE7BE7C
{
	switch (hParam0)
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

int func_260(Hash hParam0) // Position - 0xA596 Hash - 0xBA2A04BC ^0xBA2A04BC
{
	switch (hParam0)
	{
		case joaat("net_playlist_gun_rush_teams"):
			return 4;
	
		case joaat("net_playlist_orbis_series_3"):
			return 13;
	
		case joaat("net_playlist_adversary_large"):
			return 3;
	
		case joaat("net_playlist_race_series"):
			return 0;
	
		case joaat("net_playlist_nominated_series_medium"):
			return 8;
	
		case joaat("net_playlist_gun_rush_free_for_all"):
			return 5;
	
		case joaat("net_playlist_nominated_series_small"):
			return 7;
	
		case joaat("net_playlist_nominated_series"):
			return 6;
	
		case joaat("net_playlist_nominated_series_large"):
			return 9;
	
		case joaat("net_playlist_private_series"):
			return 10;
	
		case joaat("net_playlist_orbis_series_2"):
			return 12;
	
		case joaat("net_playlist_orbis_series_1"):
			return 11;
	
		case joaat("net_playlist_adversary_medium"):
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_261(int iParam0) // Position - 0xA62F Hash - 0xC35290F5 ^0xC35290F5
{
	BOOL num;

	num = 0;

	switch (iParam0)
	{
		case joaat("follow_invite"):
			num = 1024;
			break;
	
		case joaat("PRIVATE"):
			num = 16;
			break;
	
		case joaat("last_region"):
			num = 4096;
			break;
	
		case joaat("benchmark"):
			num = 131072;
			break;
	
		case joaat("Handheld"):
			num = 65536;
			break;
	
		case joaat("open_posse"):
			num = 512;
			break;
	
		case joaat("NEW_GAME"):
			num = 1;
			break;
	
		case joaat("demo"):
			num = 4;
			break;
	
		case joaat("last_location"):
			num = 16384;
			break;
	
		case joaat("random_region"):
			num = 2048;
			break;
	
		case 0:
			num = 0;
			break;
	
		case joaat("Friendly"):
			num = 32;
			break;
	
		case joaat("hardcore"):
			num = 64;
			break;
	
		case joaat("intro_not_done"):
			num = 8;
			break;
	
		case joaat("spawn_location"):
			num = 8192;
			break;
	
		case joaat("shift_f"):
			num = 2;
			break;
	
		case joaat("near_posse"):
			num = 128;
			break;
	
		case joaat("camp"):
			num = 32768;
			break;
	
		case joaat("random_posse"):
			num = 256;
			break;
	}

	return num;
}

BOOL func_262(Hash hParam0, BOOL bParam1) // Position - 0xA744 Hash - 0x178D9C09 ^0x178D9C09
{
	return hParam0 && bParam1 != false;
}

char* func_263(int iParam0) // Position - 0xA753 Hash - 0x1121E1FF ^0x644D2ABE
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case joaat("MISSION"):
			str = "mission";
			break;
	
		case joaat("goldstore"):
			str = "goldstore";
			break;
	
		case joaat("Series"):
			str = "series";
			break;
	
		case joaat("freeroam"):
			str = "freeroam";
			break;
	
		case joaat("benchmark"):
			str = "benchmark";
			break;
	
		case joaat("clip"):
			str = "clip";
			break;
	
		case 0:
			str = "";
			break;
	
		case joaat("MISSION_CREATOR"):
			str = "mission_creator";
			break;
	
		case joaat("Minigame"):
			str = "minigame";
			break;
	
		case joaat("single_player"):
			str = "single_player";
			break;
	}

	return str;
}

int func_264(int iParam0) // Position - 0xA7FD Hash - 0x5FB59AC3 ^0xCF0DCDA7
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("NEW_GAME");
			break;
	
		case 1:
			num = joaat("shift_f");
			break;
	
		case 2:
			num = joaat("demo");
			break;
	
		case 3:
			num = joaat("intro_not_done");
			break;
	
		case 4:
			num = joaat("PRIVATE");
			break;
	
		case 5:
			num = joaat("Friendly");
			break;
	
		case 6:
			num = joaat("hardcore");
			break;
	
		case 7:
			num = joaat("near_posse");
			break;
	
		case 8:
			num = joaat("random_posse");
			break;
	
		case 9:
			num = joaat("open_posse");
			break;
	
		case 10:
			num = joaat("follow_invite");
			break;
	
		case 11:
			num = joaat("random_region");
			break;
	
		case 12:
			num = joaat("last_region");
			break;
	
		case 13:
			num = joaat("spawn_location");
			break;
	
		case 14:
			num = joaat("last_location");
			break;
	
		case 15:
			num = joaat("camp");
			break;
	
		case 16:
			num = joaat("Handheld");
			break;
	
		case 17:
			num = joaat("benchmark");
			break;
	}

	return num;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xA932 Hash - 0xA17D549C ^0x2F988D4E
{
	switch (iParam0)
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0xAFF7 Hash - 0xA17D549C ^0x47FB578B
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
	
		case 1:
			return "DISTRICT_BIG_VALLEY";
	
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
	
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
	
		case 4:
			return "DISTRICT_GREAT_PLAINS";
	
		case 5:
			return "DISTRICT_GRIZZLIES";
	
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
	
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
	
		case 8:
			return "DISTRICT_GUAMA";
	
		case 9:
			return "DISTRICT_HEARTLAND";
	
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
	
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
	
		case 12:
			return "DISTRICT_TALL_TREES";
	
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
	
		case 14:
			return "DISTRICT_RIO_BRAVO";
	
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
	
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
	
		default:
		
	}

	return "";
}

char* func_267(int iParam0) // Position - 0xB0E6 Hash - 0x11AA6448 ^0x6504CABD
{
	switch (iParam0)
	{
		case 0:
			return "AMBARINO";
	
		case 1:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 2:
			return "NEWAUSTIN";
	
		case 3:
			return "NEWHANOVER";
	
		case 4:
			return "WESTELIZABETH";
	
		case 5:
			return "GUARMA";
	
		default:
		
	}

	return "";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0xB146 Hash - 0xA17D549C ^0xDFD5958F
{
	switch (hParam0)
	{
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
	
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
	
		case 2:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
	
		case 3:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
	
		case 4:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
	
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
	
		case 6:
			return "NET_PLAYLIST_NOMINATED_SERIES";
	
		case 7:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
	
		case 8:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
	
		case 9:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
	
		case 10:
			return "NET_PLAYLIST_PRIVATE_SERIES";
	
		case 11:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
	
		case 12:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
	
		case 13:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
	
		default:
		
	}

	return "";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0xB20E Hash - 0xA17D549C ^0x43EC978C
{
	switch (hParam0)
	{
		case 0:
			return "BLACKJACK";
	
		case 1:
			return "DOMINOES";
	
		case 2:
			return "POKER";
	
		case 3:
			return "FILLET";
	
		case 4:
			return "MILKING_COW";
	
		case 5:
			return "CLEAN_STALLS";
	
		case 6:
			return "FENCE_BUILDING";
	
		default:
		
	}

	return "invalid MINIGAME_TYPES";
}

void func_270(Any anParam0) // Position - 0xB27D Hash - 0xF5BA8012 ^0x99D001E9
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "strandSavedVars", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 129, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*4*/], 4, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".savedBitFlags", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*4*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".thisCommandPos", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".thisCommandHashID", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_2), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, ".thisCommandTOD", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_271(Any anParam0) // Position - 0xB34E Hash - 0x93A0C6A5 ^0xD5DA7689
{
	int i;
	var unk;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 112, "controls");
	TEXT_LABEL_ASSIGN_STRING(&unk, "controls.syncIDs", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 105, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_BOOL(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "controls.flagIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_105), 2, &unk);

	for (i = 0; i < anParam0->f_105; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_BOOL(&anParam0->f_105[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "controls.intIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_107), 3, &unk);

	for (i = 0; i < anParam0->f_107; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_107[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk, "controls.bitsetIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_110), 2, &unk);

	for (i = 0; i < anParam0->f_110; i = i + 1)
	{
		variableName = { unk };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_110[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_272(Any anParam0) // Position - 0xB48A Hash - 0xE9C078CD ^0xAD5298A0
{
	var unk;
	var unk9;
	int i;

	TEXT_LABEL_ASSIGN_STRING(&unk, "sHorseSlotInfo", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 3053, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		func_382(&anParam0->[i /*436*/], &unk9);
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_273(Any anParam0) // Position - 0xB4DA Hash - 0xA92C5C67 ^0xC966F560
{
	var unk;
	var variableName;
	var unk16;
	int i;

	TEXT_LABEL_ASSIGN_STRING(&unk, "sSaddleInfo", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 80, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".eSaddleSlot", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".eSaddleState", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".eDeadOrDroppedTime", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_2), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".sPeltSkinData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_3), 58, &variableName);

	for (i = 0; i < 57; i = i + 1)
	{
		unk16 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk16, i, 64);
		func_383(&anParam0->f_3[i], &unk16);
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".sVisualPeltSkinInfo", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_61), 16, &variableName);

	for (i = 0; i < 3; i = i + 1)
	{
		unk16 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk16, i, 64);
		func_384(&anParam0->f_61[i /*5*/], &unk16);
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".vSaddleCoords", 64);
	func_152(&(anParam0->f_77), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_274(Any anParam0) // Position - 0xB60B Hash - 0x303F4A3C ^0xE8FFFF01
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "sHorseBreakingInfo", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".bMinigameSuccessful", 64);
	SAVE::_SAVEGAME_GET_BOOL(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_275(Any anParam0) // Position - 0xB642 Hash - 0xF405274E ^0x5DC2DB12
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "sTutorialInfo", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 5, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iHighestBondLevelReached", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesOverspurred", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesRevived", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_2), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTimesDirtyOver50Percent", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".bDeadHorseTutorialShouldRun", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_4), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_276(Any anParam0) // Position - 0xB6E9 Hash - 0x737E6E2D ^0x447E6768
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "sHorseRaceInfo", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 2, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".bSprintBondingBonusUnlocked", 64);
	SAVE::_SAVEGAME_GET_BOOL(anParam0, &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, ".bSpeedStatBonusUnlocked", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_277(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Any anParam8) // Position - 0xB73C Hash - 0xB5DEEA45 ^0x1C2726F9
{
	var unk;
	var variableName;
	int i;

	SAVE::_0x81F4E92BE3958364(anParam8, 61, &uParam0);

	for (i = 0; i < *anParam8; i = i + 1)
	{
		TEXT_LABEL_COPY(&unk, { uParam0 }, 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 128);
		SAVE::_0x443174C20B8B9E7F(&anParam8->[i /*5*/], 5, &unk);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iSet", 128);
		SAVE::_SAVEGAME_GET_INT_2(&anParam8->[i /*5*/], &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eComp", 128);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam8->[i /*5*/].f_1), &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eIt", 128);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam8->[i /*5*/].f_2), &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, ".eUp", 128);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam8->[i /*5*/].f_3), &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, ".iVal", 128);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam8->[i /*5*/].f_4), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_278(char* sParam0, Any anParam1) // Position - 0xB826 Hash - 0x8FDB1B85 ^0xACC812E4
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
	SAVE::_0x81F4E92BE3958364(anParam1, 286, &unk);

	for (i = 0; i < *anParam1; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam1->[i /*3*/], 3, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "status", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam1->[i /*3*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "effect", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam1->[i /*3*/].f_1), &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "tags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam1->[i /*3*/].f_2), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_279(BOOL bParam0) // Position - 0xB8D6 Hash - 0x226003B5 ^0x5E94CE80
{
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&variableName, "cards", 64);
	SAVE::_0x443174C20B8B9E7F(bParam0, 2, "cards");
	TEXT_LABEL_ASSIGN_STRING(&variableName, "cards.eCardSetRewardFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(bParam0->f_1), &variableName);
	SAVE::_SAVEGAME_GET_INT_3(bParam0, "cards.eMailedCigaretteSets");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_280(Any anParam0) // Position - 0xB911 Hash - 0x303F4A3C ^0xF2A22FF7
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "rockCarvings", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eCarvingsRewardFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_281(Any anParam0) // Position - 0xB948 Hash - 0x303F4A3C ^0x36D71EF2
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "dinoBones", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eDinoRewardFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_282(Any anParam0) // Position - 0xB97F Hash - 0x303F4A3C ^0x5E247F72
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "legendaryFish", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eLegendaryFishRewardFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_283(Any anParam0) // Position - 0xB9B6 Hash - 0x51D4097F ^0x5CDAD626
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "gatorEggs", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 20, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i], 1, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todNestLastCleared", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_284(Any anParam0) // Position - 0xBA27 Hash - 0x1F32B09E ^0x4D47D42
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 1, "egretFeathers");
	TEXT_LABEL_ASSIGN_STRING(&variableName, "egretFeathers.eFeathersRewardFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_285(Any anParam0) // Position - 0xBA4E Hash - 0x303F4A3C ^0xD65F59EC
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "taxidermyAnimals", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eTaxidermyRewardFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_286(Any anParam0) // Position - 0xBA85 Hash - 0xAD27FDCC ^0x11D05EAE
{
	int i;
	var unk;
	var unk9;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "taxidermyMarital", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 15, &unk);

	for (i = 0; i < *anParam0; i = i + 1)
	{
		unk9 = { unk };
		TEXT_LABEL_APPEND_INT(&unk9, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*2*/], 2, &unk9);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "todStatuePlacedOnMantle", 64);
		SAVE::_SAVEGAME_GET_INT_3(&anParam0->[i /*2*/], &variableName);
		variableName = { unk9 };
		TEXT_LABEL_APPEND_STRING(&variableName, "bPlayerLeftBeechers", 64);
		SAVE::_SAVEGAME_GET_BOOL(&(anParam0->[i /*2*/].f_1), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	return;
}

void func_287(Any anParam0) // Position - 0xBB16 Hash - 0x7E8D583D ^0x719BD1AE
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, "journalData");
	SAVE::_SAVEGAME_GET_INT_3(anParam0, "journalData.eFlags");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_288(Any anParam0) // Position - 0xBB37 Hash - 0x303F4A3C ^0x211E267F
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "exotics", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eExoticStageFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_289(Any anParam0) // Position - 0xBB6E Hash - 0x303F4A3C ^0xB442D961
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "firstRecipePamphlets", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "eFirstRecipePamphletFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_290(Any anParam0) // Position - 0xBBA5 Hash - 0x737E6E2D ^0x44AAF1EC
{
	var unk;
	var variableName;

	TEXT_LABEL_ASSIGN_STRING(&unk, "treasureHunter", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 2, &unk);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "todTreasureHunterTutorial", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	variableName = { unk };
	TEXT_LABEL_APPEND_STRING(&variableName, "iNumTreasureHuntLootLocationsFound", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_291(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xBBF8 Hash - 0xCAFD7710 ^0x22F046D8
{
	int i;
	var variableName;
	var variableName2;

	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "PortableList", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 19, &variableName2);

	for (i = 0; i < 18; i = i + 1)
	{
		variableName = { variableName2 };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "PortableArraySize", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_19), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "OutfitSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_20), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iHatSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_21), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iBigMaskSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_22), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iSmallMaskSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_23), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iGloveSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_24), &variableName2);
	variableName2 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName2, "iBadgeSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_25), &variableName2);
	return;
}

void func_292(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xBD13 Hash - 0xF7212953 ^0x43BB1EE3
{
	var variableName;
	var unk8;

	unk8 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&unk8, "Data", 64);
	TEXT_LABEL_APPEND_INT(&unk8, iParam9, 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 120, &unk8);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_eFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_Components", 64);
	func_385(&(anParam0->f_1), variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_293(Any anParam0) // Position - 0xBD7A Hash - 0xB14D59B4 ^0xA8E1BAC1
{
	SAVE::_0x443174C20B8B9E7F(anParam0, 10, "psna_sCamp");
	SAVE::_0x443174C20B8B9E7F(anParam0, 3, "psna_sCampLocation");
	SAVE::_SAVEGAME_GET_INT_2(anParam0, "psna_sCampiSize");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), "psna_sCampeDistrict");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_2), "psna_sCampeLocation");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(anParam0->f_3), 7, "psna_sCampRecharge");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), "psna_sCampRechargeYear");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_1), "psna_sCampRechargeMonth");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_2), "psna_sCampRechargeDay");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_3), "psna_sCampRechargeHour");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_4), "psna_sCampRechargeMinute");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_5), "psna_sCampRechargeSecond");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3.f_6), "psna_sCampRechargeMilliseconds");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_294(Any anParam0) // Position - 0xBE34 Hash - 0x669B797A ^0x65E06250
{
	int i;
	var unk;
	var unk9;
	var variableName;
	var variableName2;

	SAVE::_0x443174C20B8B9E7F(anParam0, 47, "psna_sPosse");
	SAVE::_SAVEGAME_GET_BOOL(anParam0, "psna_sPosse_bStandardName");
	SAVE::_SAVEGAME_GET_TEXT_LABEL_31(&(anParam0->f_1), "psna_sPosse_txtGamertag");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5), "psna_sPosse_iLastPosseID");
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_6), 41, "psna_sPosse_sPosseDataArray");
	TEXT_LABEL_ASSIGN_STRING(&unk9, "psna_sPosse_data_", 64);

	for (i = 0; i <= 4; i = i + 1)
	{
		unk = { unk9 };
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_6[i /*8*/], 8, &unk);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_iPosseID", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_7), &variableName);
		variableName = { unk };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sPosseLock", 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_6[i /*8*/], 7, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Year", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_6[i /*8*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Month", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Day", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Hour", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Minute", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Second", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_5), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Milliseconds", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6[i /*8*/].f_6), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
		TEXT_LABEL_ASSIGN_STRING(&variableName, "", 64);
		TEXT_LABEL_ASSIGN_STRING(&variableName2, "", 64);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_295(Any anParam0) // Position - 0xBFFD Hash - 0x643423EA ^0xE3F18CEB
{
	int i;
	var unk;

	SAVE::_0x443174C20B8B9E7F(anParam0, 288, "nssd_sStable_Data");
	func_386(anParam0);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_41), 246, "nssd_sStableBonding_array");

	for (i = 0; i <= 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "nssd_sStableBonding_array_", 64);
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		func_387(&anParam0->f_41[i /*49*/], &unk);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_287), "nssd_eSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_296(Any anParam0) // Position - 0xC06C Hash - 0xD4B1AFF5 ^0x256880F3
{
	int i;
	var variableName;
	var unk8;

	TEXT_LABEL_ASSIGN_STRING(&unk8, "psna_sClothes", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 1012, &unk8);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 26, &variableName);
	func_291(anParam0, variableName);
	SAVE::_0xE0B45E983BFC0768();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "psna_sClothes_OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_26), 601, &variableName);

	for (i = 0; i <= 4; i = i + 1)
	{
		func_292(&anParam0->f_26[i /*120*/], variableName, i);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, "psna_sClothes_HeadOverlay", 64);
	func_388(&(anParam0->f_627), variableName);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_953), "psna_sClothes_SystemFlags");
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_954), "psna_sClothes_PlayerType");
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_955), 55, "psna_sClothes_fExpressions");

	for (i = 0; i < 54; i = i + 1)
	{
		variableName = { unk8 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_fExpression", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_955[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_1010), "psna_sClothes_fEyeRedness");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1011), "psna_sClothes_iCurOutfit");
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_297(Any anParam0) // Position - 0xC18B Hash - 0xE46D0592 ^0xF6ED5442
{
	int i;
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk9, "psna_sAbandonedLoot", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 3, &unk9);
	SAVE::_0x81F4E92BE3958364(anParam0, 3, &unk);

	for (i = 0; i <= 0; i = i + 1)
	{
		unk = { unk9 };
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		func_389(&anParam0->[i /*2*/], unk);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_298(Any anParam0) // Position - 0xC1E6 Hash - 0x915478C5 ^0xF5D66ED5
{
	int i;
	var variableName;
	var variableName2;
	var unk15;

	TEXT_LABEL_ASSIGN_STRING(&unk15, "psna_sRpg", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 34, &unk15);
	TEXT_LABEL_APPEND_STRING(&unk15, "psna_sAttributeData", 64);
	SAVE::_0x81F4E92BE3958364(anParam0, 24, &unk15);

	for (i = 0; i <= 22; i = i + 1)
	{
		variableName = { unk15 };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i], 1, &variableName);
		TEXT_LABEL_APPEND_STRING(&variableName, "fAttributeXP", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->[i], &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&unk15, "psna_sRpg", 64);
	TEXT_LABEL_APPEND_STRING(&unk15, "psna_sAttributeCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_24), 10, &unk15);

	for (i = 0; i <= 2; i = i + 1)
	{
		variableName = { unk15 };
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_24[i /*3*/], 3, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "fCoreValue", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_24[i /*3*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "todDegradeLastFixed", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_24[i /*3*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "iDegradeCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_24[i /*3*/].f_2), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_299(Any anParam0) // Position - 0xC31B Hash - 0x20C6C3E ^0x97753ACE
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(*anParam0, i, func_390(i));
	}

	return;
}

Any func_300(Any anParam0, int iParam1) // Position - 0xC345 Hash - 0x286372BD ^0x53677BA0
{
	Any numNodes;

	anParam0->f_2 = iParam1;
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
	return numNodes;
}

BOOL func_301(Any anParam0, int iParam1) // Position - 0xC35D Hash - 0x60066F22 ^0x2CAF4F64
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(anParam0->f_1), anParam0);

	if (flag)
		return true;

	return false;
}

BOOL func_302(Any anParam0, int iParam1, char* sParam2) // Position - 0xC384 Hash - 0xD92617B3 ^0x69D8384A
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, anParam0);

	if (flag)
		return true;

	return false;
}

BOOL func_303(Any anParam0, int iParam1, BOOL* pbParam2) // Position - 0xC3A9 Hash - 0xD92617B3 ^0xC55980D2
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(pbParam2, anParam0);

	if (flag)
		return true;

	return false;
}

void func_304(var uParam0, int iParam1) // Position - 0xC3CE Hash - 0x53A96DDB ^0xF8B54E
{
	uParam0->f_4 = uParam0->f_4 || iParam1;
	return;
}

int func_305(Any anParam0, int iParam1, int* piParam2) // Position - 0xC3E1 Hash - 0xD92617B3 ^0x465283F7
{
	BOOL flag;

	anParam0->f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam2, anParam0);

	if (flag)
		return 1;

	return 0;
}

BOOL func_306(int iParam0) // Position - 0xC406 Hash - 0xE8DBC4C1 ^0x757C73BF
{
	if (iParam0 == 255)
		return Global_1109000.f_4[Global_1109504[24 /*2*/]] && Global_1109504[24 /*2*/].f_1 == Global_1109504[24 /*2*/].f_1;

	return func_391(24, iParam0);
}

BOOL func_307(BOOL bParam0) // Position - 0xC446 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_308() // Position - 0xC476 Hash - 0xE2805D67 ^0xA14AB386
{
	if (func_48() == false)
		return false;

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Mission_EndCredits"))
		return true;

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerRPGCore") && func_309(Global_1835011[23 /*74*/].f_1) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthPoorCS"))
		return true;

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerSickDoctorsOpinion"))
		return true;

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh01") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh04") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh05") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh06") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh08Epi01") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh09Epi02"))
		return true;

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater_onblack") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater_onblack"))
		return true;

	return false;
}

BOOL func_309(int iParam0) // Position - 0xC663 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_392(iParam0);
	return num == 3 || num == 4;
}

BOOL func_310(int iParam0, int iParam1) // Position - 0xC681 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_311() // Position - 0xC690 Hash - 0xA61D3E25 ^0x23E9EDB4
{
	int i;

	if (func_48() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			for (i = 0; i < 10; i = i + 1)
			{
				if (Global_1392915[i /*12*/].f_1 != -1)
					if (func_309(Global_1392915[i /*12*/].f_4))
						return true;
			}
		}
	
		return false;
	}

	return false;
}

int func_312(Player plParam0) // Position - 0xC6E3 Hash - 0x87F65B8F ^0xF97DC292
{
	if (plParam0 == 255)
		plParam0 = Global_1224589.f_5;

	return Global_262777[plParam0 /*69*/];
}

BOOL func_313(Player plParam0, int iParam1) // Position - 0xC702 Hash - 0xC87751BB ^0xF9CB554E
{
	return Global_262777[plParam0 /*69*/].f_67 && iParam1 != false;
}

BOOL func_314(int iParam0) // Position - 0xC719 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_262148 && iParam0 != false;
}

void func_315(var uParam0) // Position - 0xC72A Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_393(uParam0, 0f);
	return;
}

BOOL func_316(int iParam0, int iParam1) // Position - 0xC739 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_317(var uParam0) // Position - 0xC748 Hash - 0x39705408 ^0x39705408
{
	return func_316(*uParam0, 2);
}

float func_318() // Position - 0xC758 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_319(int iParam0) // Position - 0xC78A Hash - 0x7FE1423B ^0x1251CAC2
{
	struct<17> eventData;
	int inviteIndex;
	const char* str;
	var unk17;
	int num;
	int num2;
	const char* str2;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 17))
		return;

	if (func_48() != -1 && !func_394())
		return;

	inviteIndex = NETWORK::_0x27B1AE4D8C652F08(eventData.f_10);

	if (inviteIndex == -1)
		return;

	if (func_336(eventData, 131072))
	{
		func_395(eventData.f_10);
		func_248(0);
		func_333(8);
		NETWORK::_0x981146E5C9CE9250(inviteIndex);
		func_396(false);
	}

	str = func_335(NETWORK::_0xE59F4924BD3A718D(inviteIndex), joaat("color_posse_neutral"));
	unk17 = 1;
	unk17.f_1 = 1;
	unk17.f_2 = joaat("COLOR_WHITE");
	unk17.f_4 = -1;
	unk17.f_5 = -1134602452;
	unk17.f_6 = 1276832712;
	unk17.f_12 = joaat("COLOR_WHITE");
	unk17.f_13 = joaat("COLOR_WHITE");
	unk17.f_16 = 300;
	unk17.f_21 = 1;
	unk17.f_25.f_1 = 1;
	unk17.f_25.f_9 = joaat("COLOR_WHITE");
	unk17.f_25.f_10 = 8000;
	unk17.f_25.f_11 = 1511356879;
	unk17.f_25.f_18 = 1;
	unk17.f_17 = 1;
	unk17.f_18 = eventData.f_10;
	unk17.f_10 = str;
	unk17.f_14 = joaat("generic_textures");
	unk17.f_15 = joaat("default_pedshot");
	unk17.f_24 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
	unk17.f_23 = "IB_GAMERCARD";
	unk17.f_22 = 2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(eventData.f_12)))
	{
		unk17.f_11 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_335(&(eventData.f_2), joaat("COLOR_PURE_WHITE")), "LANDING_FREEROAM_TITLE");
		unk17.f_25.f_3 = MISC::VAR_STRING(2, "NT_INV_FM_CONTENT");
		unk17.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
	}
	else if (func_48() != -1)
	{
		num = func_397(MISC::GET_HASH_KEY(&(eventData.f_12)));
	
		if (num != -1)
		{
			num2 = Global_265073.f_4[num /*57*/].f_37;
		
			if (num2 == -504335712)
			{
				unk17.f_25.f_3 = MISC::VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
				unk17.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
				str2 = MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Global_265073.f_4[num /*57*/].f_39));
			}
			else if (num2 == 395262693)
			{
				unk17.f_25.f_3 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE_DEATHMATCH");
				unk17.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
				str2 = MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(Global_265073.f_4[num /*57*/].f_39));
			}
			else if (num2 == -933924539)
			{
				unk17.f_25.f_3 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE_RACE");
				unk17.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
				str2 = MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(Global_265073.f_4[num /*57*/].f_39));
			}
		
			unk17.f_11 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", str2);
		}
	}
	else
	{
		unk17.f_11 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_335(&(eventData.f_2), joaat("COLOR_PURE_WHITE")), "PRES_SET_MODE_MP");
		unk17.f_25.f_3 = MISC::VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
		unk17.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
	}

	unk17.f_25.f_2 = str;
	unk17.f_25.f_5 = joaat("mp_lobby_textures");
	unk17.f_25.f_6 = joaat("temp_pedshot");
	unk17.f_25.f_14 = "HUD_Toast_Soundset";
	unk17.f_25.f_15 = "Toast_On";
	unk17.f_16 = Global_1899378.f_2.f_16;

	if (func_401())
		unk17.f_16 = 600;

	func_402(unk17);
	return;
}

void func_320(int iParam0) // Position - 0xCAA9 Hash - 0x53FC46DC ^0xB77C9A70
{
	struct<6> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 6))
		return;

	if (func_403())
	{
		func_404(&eventData);
		return;
	}

	if (func_48() != -1 && !func_394())
	{
		func_338(2);
		func_249(17);
		return;
	}

	func_404(&eventData);
	func_405(&eventData);
	func_248(4);
	func_396(false);
	func_222(1);
	return;
}

void func_321(int iParam0) // Position - 0xCB0E Hash - 0x86CFB848 ^0x8A22D216
{
	struct<2> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 2))
		return;

	func_406(1, eventData);
	func_407(&eventData);
	return;
}

void func_322(int iParam0) // Position - 0xCB34 Hash - 0x17104A30 ^0xCF5685BC
{
	struct<4> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 4))
		return;

	if (func_403() && !func_340(16384))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_408(&eventData);
		return;
	}

	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&eventData))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_338(64);
		return;
	}

	if (func_48() != -1 && !func_394())
	{
		func_338(2);
		func_249(17);
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		return;
	}

	if (!func_344())
	{
		func_333(4);
		return;
	}

	func_408(&eventData);
	func_409(&eventData);

	if (func_410(eventData, 2))
		func_248(3);
	else
		func_248(2);

	NETWORK::_0xD3A3C8B9F3BDEF81();
	func_341(16384);
	func_396(false);
	return;
}

void func_323(int iParam0) // Position - 0xCBEF Hash - 0xAFA5C0F8 ^0x28F26CC7
{
	struct<7> eventData;
	var gamerHandle2;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 7))
		return;

	gamerHandle2 = { func_379(PLAYER::PLAYER_ID()) };

	if (func_262(eventData.f_5, 2) || func_262(eventData.f_5, true))
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&eventData, &gamerHandle2) && !func_403())
			return;
	else if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(eventData.f_2), &gamerHandle2) && !func_403())
		return;

	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&eventData, &gamerHandle2) && eventData.f_6 == 4)
		return;

	if (func_262(eventData.f_6, 4194304))
	{
		func_333(4);
		func_333(16384);
		func_249(17);
	}

	Global_1572887.f_94.f_54 = eventData.f_6;
	Global_1572887.f_94.f_45 = { eventData };
	Global_1572887.f_94.f_47 = { eventData.f_2 };
	Global_1572887.f_94.f_55 = eventData.f_5;
	return;
}

void func_324() // Position - 0xCCD4 Hash - 0xE5AAA9F5 ^0xBF1D87FA
{
	if (MISC::IS_ORBIS_VERSION())
		Global_1572887.f_94.f_43 = NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();

	return;
}

void func_325(int iParam0) // Position - 0xCCEF Hash - 0xD14B2BB8 ^0x8B97CD47
{
	struct<6> eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 6))
		return;

	func_338(16);
	Global_1572887.f_94.f_53 = 3;
	Global_1572887.f_94.f_45 = { eventData };
	Global_1572887.f_94.f_47 = { eventData.f_2 };
	return;
}

void func_326(int iParam0) // Position - 0xCD35 Hash - 0x5D06CAAF ^0x48EDAE22
{
	struct<7> eventData;
	var gamerHandle2;
	BOOL flag;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 7))
		return;

	gamerHandle2 = { func_379(PLAYER::PLAYER_ID()) };
	flag = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&eventData, &gamerHandle2);

	if (func_262(eventData.f_6, 8) && flag)
		return;

	func_411(&eventData);
	Global_1572887.f_94.f_53 = eventData.f_5;
	Global_1572887.f_94.f_45 = { eventData };
	Global_1572887.f_94.f_47 = { eventData.f_2 };

	if (Global_1572887.f_94.f_53 > 2 && !func_327())
		Global_1572887.f_94.f_53 = 0;
	else if (Global_1572887.f_94.f_53 == 2 && flag)
		Global_1572887.f_94.f_53 = 0;

	return;
}

BOOL func_327() // Position - 0xCDEB Hash - 0xC4D0A8B3 ^0x36861FFF
{
	var gamerHandle2;
	BOOL flag;
	var gamerHandle22;
	BOOL flag2;
	BOOL flag3;
	var gamerHandle23;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL isDurangoVersion;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;

	if (Global_1572887.f_94.f_42 != false)
		return true;

	if (Global_1572887.f_94.f_43 != -1)
		return true;

	if (Global_1572887.f_94.f_53 > 2)
	{
		gamerHandle2 = { func_379(PLAYER::PLAYER_ID()) };
		flag = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_47), &gamerHandle2);
		gamerHandle22 = { func_379(GANG::NETWORK_GET_GANG_LEADER(Global_1224589.f_9)) };
		flag2 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_47), &gamerHandle22);
		flag3 = flag || flag2;
	
		if (func_262(Global_1572887.f_94.f_53, 3))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 4))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 5))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 6))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 7))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 8))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 9))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 10))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 11))
			return false;
	
		if (func_262(Global_1572887.f_94.f_53, 12))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 13))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 14))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 15))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 16))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 17))
			return false;
	
		if (func_262(Global_1572887.f_94.f_53, 18))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 19))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 20))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 21))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 22))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 23))
			return flag3;
	
		if (func_262(Global_1572887.f_94.f_53, 24))
			return flag3;
	}

	if (Global_1572887.f_94.f_54 != false)
	{
		gamerHandle23 = { func_379(PLAYER::PLAYER_ID()) };
		flag4 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_47), &gamerHandle23);
		flag5 = false;
	
		if (Global_1572887.f_94 > 0)
			flag5 = true;
	
		flag6 = !func_262(Global_1572887.f_94.f_55, 524288);
		flag7 = !func_262(Global_1572887.f_94.f_55, 2);
		flag8 = func_262(Global_1572887.f_94.f_55, 2);
		flag9 = func_262(Global_1572887.f_94.f_55, true);
		isDurangoVersion = MISC::IS_DURANGO_VERSION();
		flag10 = flag4 && flag5 || flag9;
		flag11 = flag10 && !isDurangoVersion;
		flag12 = flag6 && flag7 && !flag4;
	
		if (func_262(Global_1572887.f_94.f_54, true))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 2))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 4))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 32))
			return flag10 || flag12;
	
		if (func_262(Global_1572887.f_94.f_54, 64))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 8))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 16))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 128))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 512))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 8388608))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 1024))
			return flag11;
	
		if (func_262(Global_1572887.f_94.f_54, 2048))
			return flag11;
	
		if (func_262(Global_1572887.f_94.f_54, 4096))
			return flag12 || flag12;
	
		if (func_262(Global_1572887.f_94.f_54, 8192))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 16384))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 32768))
			return flag10 || flag12;
	
		if (func_262(Global_1572887.f_94.f_54, 65536))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 262144))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 524288))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 2097152))
			return flag10;
	
		if (func_262(Global_1572887.f_94.f_54, 4194304))
			return false;
	
		if (func_262(Global_1572887.f_94.f_54, 256))
			return false;
	
		if (func_262(Global_1572887.f_94.f_54, 1048576))
			return flag10 && flag8;
	
		if (func_262(Global_1572887.f_94.f_54, 131072))
			return false;
	}

	return false;
}

void func_328(int iParam0) // Position - 0xD33A Hash - 0x42868A8 ^0x6E1F4064
{
	Global_1572887.f_94.f_51 = iParam0;
	return;
}

BOOL func_329(BOOL bParam0) // Position - 0xD34C Hash - 0xE36240C8 ^0xADE632A5
{
	return func_262(Global_1572887.f_94.f_42, bParam0);
}

char* func_330() // Position - 0xD362 Hash - 0x20D23932 ^0x2EC6D1C4
{
	var gamerHandle;
	BOOL flag;
	BOOL flag2;
	var unk2;

	gamerHandle = { func_379(PLAYER::PLAYER_ID()) };
	flag = Global_1572887.f_94.f_1 == 3 || Global_1572887.f_94.f_1 == 1;
	flag2 = false;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887.f_94.f_45)) && NETWORK::NETWORK_IS_HANDLE_VALID(&gamerHandle))
		flag2 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_45), &gamerHandle);

	if (func_329(true))
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";

	if (func_329(2))
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";

	if (func_329(4))
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";

	if (func_329(16))
		return "NT_INV_INCOMPATIBLE_TIMEOUT";

	if (func_329(32))
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";

	if (func_329(8))
		return "NT_INV_INCOMPATIBLE_INVITER_VANISHED";

	if (func_329(64))
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";

	if (func_329(128))
		return flag ? "NT_INV_LEAVE_WARNING_JIP" : "NT_INV_LEAVE_WARNING";

	if (func_329(256))
		return flag ? "NT_INV_LEAVE_WARNING_POSSE_JIP" : "NT_INV_LEAVE_WARNING_POSSE";

	if (func_262(Global_1572887.f_94.f_54, true))
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";

	if (func_262(Global_1572887.f_94.f_54, 1024))
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";

	if (func_262(Global_1572887.f_94.f_54, 2048))
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";

	if (func_262(Global_1572887.f_94.f_54, 4096))
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";

	if (func_262(Global_1572887.f_94.f_54, 8192))
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";

	if (func_262(Global_1572887.f_94.f_54, 16384))
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";

	if (func_262(Global_1572887.f_94.f_54, 512))
		return "NT_INV_INCOMPATIBLE";

	if (func_262(Global_1572887.f_94.f_54, 8388608))
		return "NT_INV_AIM";

	if (func_262(Global_1572887.f_94.f_54, 2))
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";

	if (func_262(Global_1572887.f_94.f_54, 4))
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";

	if (func_262(Global_1572887.f_94.f_54, 8))
		return "NT_INV_POLICIES_NEED_ACCEPTING";

	if (func_262(Global_1572887.f_94.f_54, 16))
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";

	if (func_262(Global_1572887.f_94.f_54, 32))
		return flag2 ? "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET" : "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";

	if (func_262(Global_1572887.f_94.f_54, 64))
		return flag ? "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER" : "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";

	if (func_262(Global_1572887.f_94.f_54, 128))
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";

	if (func_262(Global_1572887.f_94.f_54, 32768))
		return flag2 ? "NT_INV_INCOMPATIBLE_REP_TARGET" : "NT_INV_INCOMPATIBLE_REP_JOINER";

	if (func_262(Global_1572887.f_94.f_54, 65536))
		return flag ? "NT_INV_IN_SESSION" /*You are already a member of this GTA Online session.*/ : "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";

	if (func_262(Global_1572887.f_94.f_54, 262144))
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";

	if (func_262(Global_1572887.f_94.f_54, 524288))
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";

	if (func_262(Global_1572887.f_94.f_54, 2097152))
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";

	func_262(Global_1572887.f_94.f_54, 4194304);
	func_262(Global_1572887.f_94.f_54, 256);

	if (func_262(Global_1572887.f_94.f_54, 1048576))
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";

	func_262(Global_1572887.f_94.f_54, 131072);

	if (Global_1572887.f_94.f_53 == 3)
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";

	if (Global_1572887.f_94.f_53 == 4)
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";

	if (Global_1572887.f_94.f_53 == 5)
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";

	if (Global_1572887.f_94.f_53 == 6)
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";

	if (Global_1572887.f_94.f_53 == 7)
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";

	if (Global_1572887.f_94.f_53 == 8)
		return "NT_INV_INCOMPATIBLE_INSTANCED";

	if (Global_1572887.f_94.f_53 == 9)
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";

	if (Global_1572887.f_94.f_53 == 10)
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";

	Global_1572887.f_94.f_53 == 11;

	if (Global_1572887.f_94.f_53 == 12)
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";

	if (Global_1572887.f_94.f_53 == 13)
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";

	if (Global_1572887.f_94.f_53 == 14)
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";

	if (Global_1572887.f_94.f_53 == 15)
		return "NT_INV_FAILED_SESSION_FULL";

	if (Global_1572887.f_94.f_53 == 16)
		return "NT_INV_FAILED_INVITER_CLEANED_UP";

	Global_1572887.f_94.f_53 == 17;

	if (Global_1572887.f_94.f_53 == 18)
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";

	if (Global_1572887.f_94.f_53 == 19)
		return "NT_INV_FAILED_ADD_TO_GANG";

	if (Global_1572887.f_94.f_53 == 20)
		return "NT_INV_FAILED_GANG_CHANGED";

	if (Global_1572887.f_94.f_53 == 21)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_94.f_53 == 22)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_94.f_53 == 23)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_94.f_53 == 24)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_94.f_53 == 25)
		return "NT_INV_FAILED_SESSION_SWITCH";

	if (Global_1572887.f_94.f_43 == 0)
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";

	if (Global_1572887.f_94.f_43 == 1)
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";

	if (Global_1572887.f_94.f_43 == 2)
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";

	if (Global_1572887.f_94.f_43 == 3)
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";

	if (Global_1572887.f_94.f_43 == 4)
		return "NT_INV_INCOMPATIBLE_AGE";

	if (Global_1572887.f_94.f_43 == 5)
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";

	TEXT_LABEL_ASSIGN_STRING(&unk2, "NetInvUnkErr-", 64);
	TEXT_LABEL_APPEND_STRING(&unk2, "eUIFlags=", 64);
	TEXT_LABEL_APPEND_INT(&unk2, Global_1572887.f_94.f_42, 64);
	TEXT_LABEL_APPEND_STRING(&unk2, ",eResponseFlags=", 64);
	TEXT_LABEL_APPEND_INT(&unk2, Global_1572887.f_94.f_54, 64);
	TEXT_LABEL_APPEND_STRING(&unk2, ",nResult=", 64);
	TEXT_LABEL_APPEND_INT(&unk2, Global_1572887.f_94.f_53, 64);
	return func_413(&unk2, joaat("COLOR_PURE_WHITE"));
}

void func_331(BOOL bParam0) // Position - 0xD944 Hash - 0x32FDA96A ^0x5EEF3A7B
{
	if (bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_340(1))
	{
		NETWORK::NETWORK_START_SOLO_TUTORIAL_SESSION();
		func_333(1);
	}
	else if (!bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && func_340(1))
	{
		NETWORK::NETWORK_END_TUTORIAL_SESSION();
		func_341(1);
	}

	return;
}

int func_332() // Position - 0xD9A6 Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1051081.f_11;
}

void func_333(int iParam0) // Position - 0xD9B4 Hash - 0x3BF5B800 ^0xD833839A
{
	func_381(&(Global_1572887.f_94.f_41), iParam0);
	return;
}

BOOL func_334(int iParam0) // Position - 0xD9CA Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_391(1, iParam0);
}

const char* func_335(const char* sParam0, int iParam1) // Position - 0xD9D9 Hash - 0xB0CFF0C3 ^0x621C65FE
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_414(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

BOOL func_336(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, BOOL bParam17) // Position - 0xDA0F Hash - 0xAD535389 ^0xF30571D4
{
	return func_262(uParam0.f_11, bParam17);
}

BOOL func_337() // Position - 0xDA21 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

void func_338(int iParam0) // Position - 0xDA2F Hash - 0x3BF5B800 ^0xFD322E52
{
	func_381(&(Global_1572887.f_94.f_42), iParam0);
	return;
}

BOOL func_339() // Position - 0xDA45 Hash - 0x964D8EB9 ^0x17700558
{
	return MISC::GET_GAME_TIMER() - Global_1572887.f_94.f_40 > Global_1899378.f_2.f_15;
}

BOOL func_340(int iParam0) // Position - 0xDA63 Hash - 0xE36240C8 ^0x123092F3
{
	return func_262(Global_1572887.f_94.f_41, iParam0);
}

void func_341(int iParam0) // Position - 0xDA79 Hash - 0x3BF5B800 ^0xD833839A
{
	func_415(&(Global_1572887.f_94.f_41), iParam0);
	return;
}

void func_342() // Position - 0xDA8F Hash - 0x3AA4899D ^0xE813E8F6
{
	Global_1572887.f_94.f_57 = 0;
	return;
}

struct<17> func_343() // Position - 0xDAA0 Hash - 0xF55B0A32 ^0x8D7E84BD
{
	return Global_1572887.f_94.f_12;
}

BOOL func_344() // Position - 0xDAB3 Hash - 0x8F992327 ^0x93C28AE2
{
	var loadingState;

	if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
		return false;

	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return false;

	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&loadingState))
		return false;

	return true;
}

void func_345() // Position - 0xDAE2 Hash - 0x52344B62 ^0x707FA822
{
	func_63(64);
	func_65(joaat("freeroam"), 1024);
	func_20(3);
	CAM::DO_SCREEN_FADE_OUT(0);
	return;
}

BOOL func_346() // Position - 0xDB06 Hash - 0x2C6DE8F6 ^0x14BC70A4
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1058888.f_4;
}

int func_347() // Position - 0xDB22 Hash - 0xA1DBD1D9 ^0x7A4F017C
{
	return Global_1572887.f_94.f_1;
}

int func_348() // Position - 0xDB32 Hash - 0x16E8BF2 ^0x16E8BF2
{
	if (func_339())
	{
		func_338(16);
		return 2;
	}

	if (!func_394())
	{
		func_338(2);
		return 2;
	}

	return func_416();
}

void func_349(BOOL bParam0) // Position - 0xDB60 Hash - 0x9AA8C616 ^0xCCF3BF7F
{
	if (func_417())
		Global_1357509 = 1;

	func_418(joaat("camera_item"));

	if (bParam0 && Global_1935630.f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}

	return;
}

void func_350() // Position - 0xDBB1 Hash - 0x109EE681 ^0xE84FF71D
{
	Ped rider;
	Ped mount;

	rider = PLAYER::PLAYER_PED_ID();
	mount = PED::GET_MOUNT(rider);

	if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
		TASK::TASK_DISMOUNT_ANIMAL(rider, 0, 0, 0, 0, 0);

	return;
}

void func_351(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xDBE7 Hash - 0xD75278EF ^0x7B5AA68F
{
	func_419(iParam0);

	if (!func_420(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_421(128) && !func_422(18))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_423() == 4)
		func_424(17);

	func_425(512);
	return;
}

void func_352(BOOL bParam0, BOOL bParam1) // Position - 0xDC49 Hash - 0x6A7DCCC8 ^0x6836E433
{
	if (bParam1)
	{
		if (bParam0)
		{
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_MP_MATCHMAKING_TRANSITION"));
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		}
		else
		{
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_MP_MATCHMAKING_TRANSITION"));
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
	}

	return;
}

void func_353() // Position - 0xDC7A Hash - 0xCF209399 ^0xD8401D84
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1) && func_426(32768))
		return;

	PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	return;
}

void func_354() // Position - 0xDCC6 Hash - 0x5BB63E68 ^0xFA04D8A4
{
	Hash hashKey;

	hashKey = MISC::GET_HASH_KEY("net_ugc_end_flow");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	hashKey = MISC::GET_HASH_KEY("mc_transition_results");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	hashKey = MISC::GET_HASH_KEY("mc_transition_cutscene");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	hashKey = MISC::GET_HASH_KEY("net_mc_vs_mission_intro");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(hashKey);
	return;
}

struct<4> func_355() // Position - 0xDD0E Hash - 0xD314A496 ^0x9604491
{
	return Global_1572887.f_94.f_2;
}

struct<6> func_356() // Position - 0xDD20 Hash - 0x262E9841 ^0x19C7A80B
{
	return Global_1572887.f_94.f_6;
}

void func_357(var uParam0, var uParam1, var uParam2) // Position - 0xDD32 Hash - 0x932137D4 ^0xDAAB7762
{
	int num;
	Volume volume;
	var volumeCoords;
	float randomFloatInRange;

	volumeCoords = { uParam0 };
	num = func_427(uParam0);

	if (num != -1)
	{
		volume = Global_1888801[num /*35*/].f_4;
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			volumeCoords = { VOLUME::GET_VOLUME_COORDS(volume) };
	}

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	randomFloatInRange.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	volumeCoords = { volumeCoords + randomFloatInRange };
	uParam0 = { uParam0 + randomFloatInRange };
	func_428(volumeCoords, 0f, uParam0, 0f, -1082130432, -1082130432, true, 1, 1, 1);
	func_429(false);
	return;
}

void func_358(Player plParam0) // Position - 0xDDC6 Hash - 0x42868A8 ^0xFBE00D9B
{
	Global_1572887.f_94.f_39 = plParam0;
	return;
}

BOOL func_359() // Position - 0xDDD8 Hash - 0x2C6DE8F6 ^0xFC63004B
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1058888.f_3;
}

BOOL func_360() // Position - 0xDDF4 Hash - 0x2C6DE8F6 ^0xDFE391E0
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1058888.f_5;
}

int func_361() // Position - 0xDE10 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_262150;
}

void func_362(BOOL bParam0) // Position - 0xDE1C Hash - 0x19F9ED95 ^0x19F9ED95
{
	if (!bParam0)
		func_424(18);
	else
		func_430(18);

	return;
}

char* func_363() // Position - 0xDE3B Hash - 0xA1DBD1D9 ^0xE06A0671
{
	return Global_1572887.f_94.f_44;
}

int func_364(int iParam0) // Position - 0xDE4B Hash - 0x825A04C0 ^0x825A04C0
{
	return iParam0 & 31;
}

BOOL func_365() // Position - 0xDE58 Hash - 0xF2C57734 ^0xA9F1FDFE
{
	BOOL flag;
	Player player;
	Player player2;

	flag.f_2 = -1;
	flag.f_3 = -1;
	flag.f_4 = -1;
	flag = { func_431() };
	player = func_432();

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
	{
		player2 = player;
		flag = func_433(player2);
		flag.f_1 = func_434(player2);
		flag.f_2 = func_435(player2);
		flag.f_3 = func_436(player2);
		flag.f_4 = func_437(player2);
	}

	if (!flag)
		return false;

	switch (flag.f_1)
	{
		case 2:
			if (func_313(player, 4096))
				return false;
			break;
	}

	func_438(flag.f_1, flag.f_2, flag.f_3, flag.f_4, 0);
	return true;
}

void func_366() // Position - 0xDF05 Hash - 0xE3CE35BD ^0x1E3CA08F
{
	Global_1572887.f_94.f_57 = 1;
	return;
}

BOOL func_367(int iParam0, BOOL bParam1) // Position - 0xDF16 Hash - 0x7884727F ^0xEE79CDC2
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (Global_262777[num /*69*/] <= 0)
		return false;

	if (Global_262777[num /*69*/] > 2)
		return false;

	if (Global_1051043 != -1)
		if (iParam0 != Global_1051043)
			return false;

	if (!bParam1 && func_439(0) == 1)
		return false;

	if (func_440(255))
		return false;

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_262777[num /*69*/].f_1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_262777[num /*69*/].f_1))
		return false;

	if (Global_262777[num /*69*/].f_1.f_11 == 0)
		return true;

	return false;
}

struct<65> func_368(Player plParam0) // Position - 0xDFB9 Hash - 0x4608BD32 ^0xAA4D7F4
{
	if (plParam0 == 255)
		plParam0 = Global_1224589.f_5;

	return Global_262777[plParam0 /*69*/].f_1;
}

int func_369(int iParam0, int iParam1) // Position - 0xDFDD Hash - 0xA995C4F ^0x16D8A71D
{
	int value;
	Player player;
	int i;
	int num;
	int num2;
	BOOL flag;

	value = func_441(iParam0, iParam1);

	for (i = 0; i < 32; i = i + 1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&value, i))
		{
		}
		else
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (func_312(player) == 0)
				return 1;
		}
	}

	num = func_442(value, 8192);
	num2 = func_442(value, 65536);
	flag = func_442(value, 4096);

	if (num || num2 && !flag)
		return 2;

	return 3;
}

void func_370(int iParam0) // Position - 0xE063 Hash - 0xE47B64 ^0x38FB0D35
{
	Global_262777[Global_1224589 /*69*/].f_67 = Global_262777[Global_1224589 /*69*/].f_67 || iParam0;
	return;
}

BOOL func_371(Player plParam0) // Position - 0xE086 Hash - 0x8C59B423 ^0x310B5B0D
{
	int num;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	if (!func_367(Global_262777[plParam0 /*69*/].f_1.f_55, func_443(&(Global_262777[plParam0 /*69*/].f_1), 32768)))
		return false;

	if (func_444(&(Global_262777[plParam0 /*69*/].f_1)))
		return false;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_262777[num /*69*/].f_1 = plParam0;
	Global_262777[num /*69*/].f_1.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	NETWORK::_0x5A91BCEF74944E93(plParam0, 30f);
	return true;
}

void func_372(BOOL bParam0) // Position - 0xE117 Hash - 0xA58A0EDE ^0x6BF6D8F1
{
	int num;

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		POSSE::_0xC08BFF658B2E51DA(0);

	GANG::_NETWORK_LEAVE_GANG(bParam0);
	return;
}

BOOL func_373() // Position - 0xE137 Hash - 0x5BA53C2A ^0x426B3C46
{
	Ped playerPed;
	float entityCoords;
	Vector3 vector;
	var groundZ;
	var unk5;
	float num;

	playerPed = PLAYER::GET_PLAYER_PED(Global_1572887.f_94.f_39);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	entityCoords.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(entityCoords, entityCoords.f_1);
	vector = { entityCoords };
	vector.f_2 = vector.f_2 + 7f;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false))
		entityCoords.f_2 = groundZ;

	num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;

	if (!func_445(&unk5, &num, false))
		unk5 = { Global_1058888.f_43853.f_283[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*306*/].f_2 };

	func_428(entityCoords, num, unk5, num, 5f, 20f, true, 1, 1, 1);
	return true;
}

BOOL func_374() // Position - 0xE1FB Hash - 0x741CA7D5 ^0x28225EBF
{
	if (func_446())
		return true;

	if (Global_1572887.f_94.f_51 == 0)
		return false;

	if (func_363() != 2)
		return false;

	if (Global_1572887.f_94.f_53 != 2)
		return false;

	if (func_262(Global_1572887.f_94.f_54, 65536))
		return false;

	if (!func_394())
		return false;

	return true;
}

int func_375(int iParam0, int iParam1, int iParam2) // Position - 0xE25E Hash - 0x948E330C ^0xD6682A1A
{
	if (Global_1572887.f_152.f_4 != 0)
		return 0;

	if (Global_1572887.f_94 > 0 && Global_1572887.f_94 < 17)
		return 0;

	Global_1572887.f_152.f_4 = 2;
	Global_1572887.f_152.f_5 = Global_1572887.f_152.f_5 || iParam1;
	Global_1572887.f_152.f_6 = iParam0;
	Global_1572887.f_152.f_13 = iParam2;
	Global_1572887.f_152.f_14 = 0;
	return 1;
}

void func_376(int iParam0) // Position - 0xE2CD Hash - 0x82A87E90 ^0x82A87E90
{
	if (iParam0 != 0)
		func_447(iParam0, -1);

	func_63(4);
	func_20(1);
	return;
}

void func_377(BOOL bParam0, BOOL bParam1) // Position - 0xE2EC Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_448(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_424(0);
	}
	else
	{
		if (bParam1)
			func_351(0, false, 0, true);
	
		func_430(0);
		func_450(&(Global_1109000.f_379));
		Global_1109000.f_379 = 0f;
		Global_1109000.f_379.f_5 = 1;
		Global_1109000.f_379.f_16 = 0;
		Global_1109000.f_379.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1109000.f_379.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109000.f_379.f_17 = { Global_1899378.f_23.f_1, Global_1899378.f_23.f_1, Global_1899378.f_23.f_1 };
		Global_1109000.f_379.f_17.f_9 = joaat("volSphere");
		func_451(&(Global_1109000.f_418));
		Global_1109000.f_418.f_6 = { Global_1109000.f_379.f_17.f_6 };
		Global_1109000.f_418 = Global_1109000.f_379;
		Global_1109000.f_418.f_5 = 1;
	
		if (bParam1)
		{
			Global_1109000.f_22.f_16 = 0;
			Global_1109000.f_22.f_17 = 0;
		}
	}

	func_452(Global_1109000.f_379, 42);
	func_453(Global_1109000.f_418, 42);
	return;
}

BOOL func_378(int iParam0) // Position - 0xE435 Hash - 0x7ECDA988 ^0xA031266E
{
	if (!Global_1899245.f_88[iParam0])
	{
		if (!_STOPWATCH_IS_INITIALIZED(&Global_1899245.f_3[iParam0 /*2*/]))
			_STOPWATCH_INITIALIZE(&Global_1899245.f_3[iParam0 /*2*/], false, false);
	
		Global_1899245.f_88[iParam0] = true;
	}
	else if (func_60(&Global_1899245.f_3[iParam0 /*2*/], func_455(iParam0), false))
	{
		_STOPWATCH_DESTROY(&Global_1899245.f_3[iParam0 /*2*/]);
		return true;
	}

	return false;
}

struct<2> func_379(Player plParam0) // Position - 0xE4A6 Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_380(var uParam0, var uParam1) // Position - 0xE4BA Hash - 0x1E89677A ^0x2EE31D84
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_381(Hash hParam0, BOOL bParam1) // Position - 0xE4C8 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*hParam0 = *hParam0 || bParam1;
	return;
}

void func_382(Any anParam0, char* sParam1) // Position - 0xE4D9 Hash - 0x5B5DAFD4 ^0x15A07A79
{
	var variableName;
	var unk8;
	int i;

	SAVE::_0x8E8FFB9E4AD051D2(anParam0, 436, sParam1, 26);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".txtHorseName", 64);
	SAVE::_SAVEGAME_GET_TEXT_LABEL_63(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eHorseBreed", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_8), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eHorseModel", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_9), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eGender", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_10), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eLossType", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_11), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTimeOfLoss", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_12), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".todTimeOfLoss", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_13), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eSlotState", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_14), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sCarriedData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_15), 283, &variableName);

	for (i = 0; i < 3; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		func_456(&anParam0->f_15[i /*94*/], &unk8);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sPeltSkinData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_298), 58, &variableName);

	for (i = 0; i < 57; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		func_383(&anParam0->f_298[i], &unk8);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sVisualPeltSkinInfo", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_356), 16, &variableName);

	for (i = 0; i < 3; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		func_384(&anParam0->f_356[i /*5*/], &unk8);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sBondingData", 64);
	func_457(&(anParam0->f_372), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sHorseCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_398), 9, &variableName);

	for (i = 0; i < 2; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		func_458(&anParam0->f_398[i /*4*/], &unk8);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sEfficiencyData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_407), 13, &variableName);

	for (i = 0; i < 3; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		func_459(&anParam0->f_407[i /*4*/], &unk8);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sWrithingData", 64);
	func_460(&(anParam0->f_420), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sStableOwnedData", 64);
	func_461(&(anParam0->f_422), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sHorseBurdenData", 64);
	func_462(&(anParam0->f_425), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".vLastCoord", 64);
	func_152(&(anParam0->f_427), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fLastHeading", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_430), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTimeStampDismounted", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_431), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTimeStampAcquired", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_432), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bHasDefaultSaddle", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_433), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bPlayerPurchasedHorse", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_434), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bPlayerBrokeHorse", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_435), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_383(Any anParam0, char* sParam1) // Position - 0xE853 Hash - 0x6432B6A6 ^0xDB69DA9
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 1, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_384(Any anParam0, char* sParam1) // Position - 0xE87E Hash - 0x1C5EC1A8 ^0xD8E85287
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 5, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".SatchelItem", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".TextureLookupHash", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".TextureLookupTint", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_2), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".UnusedPad0", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".UnusedPad1", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_4), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_385(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xE909 Hash - 0x216B02F3 ^0x65A58668
{
	int i;
	var variableName;
	var variableName2;

	SAVE::_0x443174C20B8B9E7F(anParam0, 119, &uParam1);
	variableName = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_iOutfitHash", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_Array", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_1), 118, &variableName);

	for (i = 0; i <= 38; i = i + 1)
	{
		variableName = { uParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_Array_Idx", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_1[i /*3*/], 3, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_CompHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_1[i /*3*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_WearHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1[i /*3*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_eFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1[i /*3*/].f_2), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_386(Any anParam0) // Position - 0xE9FD Hash - 0x6ADEDEFE ^0xDBEDEB0F
{
	int i;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 41, "nssd_sStableInventory");
	i = 0;
	SAVE::_0x81F4E92BE3958364(anParam0, 33, "nssd_MountItemGUID_array");

	for (i = 0; i <= 8 - 1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableMountGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->[i /*4*/], 4, &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->[i /*4*/], &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_1), &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data3", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_2), &variableName);
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_StableItemGUID_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		TEXT_LABEL_APPEND_STRING(&variableName, "_data4", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_33), "nssd_eFeeState");
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_34), "nssd_iFeesTimer");
	i = 0;
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_35), 6, "nssd_iReservedStats_array");

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&variableName, "nssd_iReservedStats_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_35[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_387(Any anParam0, Any anParam1) // Position - 0xEB46 Hash - 0xA0B03B45 ^0x218E8D38
{
	int i;
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 49, anParam1);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sStableBonding", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 4, &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data1", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data2", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data3", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_2), &variableName);
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sHorseGUID_data4", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	i = 0;
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_4), 29, &variableName);

	for (i = 0; i <= 27; i = i + 1)
	{
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_fHorseEventXP_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_4[i], &variableName);
	}

	SAVE::_0xA844FEB5C22C2C74();
	i = 0;
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_array", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_33), 13, &variableName);

	for (i = 0; i <= 2; i = i + 1)
	{
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_33[i /*4*/], 4, &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_iValue_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_33[i /*4*/], &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_fValueBuffer_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_33[i /*4*/].f_1), &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_fDrainBuffer_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_33[i /*4*/].f_2), &variableName);
		variableName = { *anParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_sEfficiencyData_iLastGameTime_", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_33[i /*4*/].f_3), &variableName);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	variableName = { *anParam1 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_vLastHitch", 64);
	func_152(&(anParam0->f_46), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_388(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xED63 Hash - 0x6A0C0F7C ^0x83D05674
{
	int i;
	var variableName;
	var variableName2;
	var unk15;

	unk15 = { uParam1 };
	SAVE::_0x443174C20B8B9E7F(anParam0, 326, &uParam1);
	TEXT_LABEL_APPEND_STRING(&unk15, "_BaseLayer", 64);
	SAVE::_0x443174C20B8B9E7F(anParam0, 5, &unk15);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_drawable", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_albedo", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_normal", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_2), &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_material", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	variableName = { unk15 };
	TEXT_LABEL_APPEND_STRING(&variableName, "_tag", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_4), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	unk15 = { uParam1 };
	TEXT_LABEL_APPEND_STRING(&unk15, "_Layers", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_5), 321, &unk15);

	for (i = 0; i < 20; i = i + 1)
	{
		variableName = { uParam1 };
		TEXT_LABEL_APPEND_STRING(&variableName, "_Layer", 64);
		TEXT_LABEL_APPEND_INT(&variableName, i, 64);
		SAVE::_0x443174C20B8B9E7F(&anParam0->f_5[i /*16*/], 16, &variableName);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_LayerPriority", 64);
		SAVE::_SAVEGAME_GET_INT_2(&anParam0->f_5[i /*16*/], &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Albedo", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_1), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Normal", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_2), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Material", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_3), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_SheetGridIndex", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_4), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_ModTexture", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_5), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_ModChannel", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_6), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_Palette", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_7), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_tint0", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_8), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_tint1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_9), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_tint2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5[i /*16*/].f_10), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_TexAlpha", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_5[i /*16*/].f_11), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_ModAlpha", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_5[i /*16*/].f_12), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_TexRough", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_5[i /*16*/].f_13), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_BlendType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_5[i /*16*/].f_14), &variableName2);
		variableName2 = { variableName };
		TEXT_LABEL_APPEND_STRING(&variableName2, "_LayerType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_5[i /*16*/].f_15), &variableName2);
		SAVE::_0xE0B45E983BFC0768();
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_389(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xF0A3 Hash - 0xDCA7A44 ^0xD0F6018D
{
	var variableName;
	var unk8;

	unk8 = { uParam1 };
	SAVE::_0x443174C20B8B9E7F(anParam0, 2, &unk8);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "iLocationIndex", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	variableName = { unk8 };
	TEXT_LABEL_APPEND_STRING(&variableName, "iVariation", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

char* func_390(int iParam0) // Position - 0xF0F8 Hash - 0xE6862179 ^0x4A242C4B
{
	switch (iParam0)
	{
		case 0:
			return "tooltips/tooltip(%i)";
	
		case 1:
			return "tooltips/tooltip";
	
		case 2:
			return ":label";
	
		case 3:
			return ":duration";
	
		case 4:
			return ":onlyInSP";
	
		case 5:
			return ":onlyInMP";
	
		case 6:
			return ":requiredMissionID";
	}

	return "";
}

BOOL func_391(int iParam0, int iParam1) // Position - 0xF17A Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_463(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_464())
		return func_463(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_463(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

int func_392(int iParam0) // Position - 0xF1EE Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_465(iParam0))
		return -1;

	return func_466(iParam0);
}

void func_393(var uParam0, float fParam1) // Position - 0xF20A Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_318() - fParam1;
	func_467(uParam0, 1);
	func_468(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_394() // Position - 0xF230 Hash - 0xD73DD004 ^0xD3DA1B
{
	if (Global_1572887.f_12 == false)
		if (func_469())
			return true;

	return false;
}

void func_395(int iParam0) // Position - 0xF24E Hash - 0x4EB28750 ^0xA3C30564
{
	int num;
	var gamerHandle;
	var unk17;

	num = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	TEXT_LABEL_ASSIGN_STRING(&(gamerHandle.f_2), NETWORK::_0xE59F4924BD3A718D(num), 64);
	NETWORK::_0x16EFB123C4451032(num, &gamerHandle);
	TEXT_LABEL_ASSIGN_STRING(&(gamerHandle.f_12), NETWORK::_0xE79BA3BC265895DA(num), 24);
	gamerHandle.f_10 = iParam0;
	gamerHandle.f_16 = NETWORK::_0x5ED39DA62BEB1330(num);
	unk17.f_2 = -1;
	unk17.f_3 = -1;
	unk17.f_4 = -1;
	func_470(&gamerHandle, &unk17);
	return;
}

void func_396(BOOL bParam0) // Position - 0xF2AC Hash - 0x8DEED182 ^0x8DEED182
{
	if (bParam0)
		func_333(128);

	if (func_48() == false)
		func_72(2);

	func_249(1);
	return;
}

int func_397(Hash hParam0) // Position - 0xF2D1 Hash - 0x6E9716ED ^0x8FD6C168
{
	int i;

	if (hParam0 == 0)
		return -1;

	for (i = 0; i < Global_265073.f_2; i = i + 1)
	{
		if (Global_265073.f_39905[i /*6*/] == hParam0)
			return i;
	
		if (Global_265073.f_4[i /*57*/].f_36 == hParam0)
			return i;
	}

	return -1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0xF328 Hash - 0xA17D549C ^0x123FEFE7
{
	switch (iParam0)
	{
		case -2088359027:
			return "UGC_MST_MNYG";
	
		case -2083980169:
			return "UGC_MST_HDLSH";
	
		case -1870450715:
			return "UGC_MST_BSMN";
	
		case -1861365556:
			return "UGC_MST_PNTTY";
	
		case -1854465123:
			return "UGC_MST_HLDOT";
	
		case -1824689524:
			return "UGC_MST_SPLY";
	
		case -1768719739:
			return "UGC_MST_PLNDR";
	
		case -1759663922:
			return "UGC_MST_STRY";
	
		case -1735381469:
			return "UGC_MST_WWR";
	
		case -1725070894:
			return "UGC_MST_PRDTR";
	
		case -1593102174:
			return "UGC_MST_SGM";
	
		case -1545357213:
			return "UGC_MST_HTF";
	
		case -1528996533:
			return "UGC_MST_HTP";
	
		case -1495857325:
			return "UGC_MST_DSTR";
	
		case -1482947946:
			return "UGC_MST_WAR";
	
		case -1436089230:
			return "UGC_MST_TTYTR";
	
		case -1429156655:
			return "UGC_MST_RNGM";
	
		case -1422136853:
			return "UGC_MST_RVA";
	
		case -1311152903:
			return "UGC_MST_LOOT";
	
		case -1195756641:
			return "UGC_MST_SEIG";
	
		case -1084202760:
			return "UGC_MST_PWRBL";
	
		case -1027343918:
			return "UGC_MST_BLDG";
	
		case -915869673:
			return "UGC_MST_TTYG";
	
		case -872811084:
			return "UGC_MST_GRDN";
	
		case -825872693:
			return "UGC_MST_FRSTT";
	
		case -806226507:
			return "UGC_MST_BRWL";
	
		case -707139085:
			return "UGC_MST_FRHM";
	
		case -667027782:
			return "UGC_MST_ARWBL";
	
		case -650766784:
			return "UGC_MST_SRMBL";
	
		case -557106090:
			return "UGC_MST_TATK";
	
		case -528055156:
			return "UGC_MST_DUEL";
	
		case -471095244:
			return "UGC_MST_RNSK";
	
		case -450654273:
			return "UGC_MST_CPWGN";
	
		case -360644098:
			return "UGC_MST_TTYT";
	
		case -87902341:
			return "UGC_MST_BAO";
	
		case -29139709:
			return "UGC_MST_LNDG";
	
		case 33547358:
			return "UGC_MST_SLSHR";
	
		case 35466036:
			return "UGC_MST_ADV";
	
		case 249583080:
			return "UGC_MST_BTYV";
	
		case 313483818:
			return "UGC_MST_JST";
	
		case 344911429:
			return "UGC_MST_STNDF";
	
		case 449718152:
			return "UGC_MST_AFGPP";
	
		case 534981680:
			return "UGC_MST_ESCF";
	
		case 605457060:
			return "UGC_MST_FDH";
	
		case 682133028:
			return "UGC_MST_CHS";
	
		case 683859288:
			return "UGC_MST_HEMH";
	
		case 733436798:
			return "UGC_MST_HRSP";
	
		case 784676450:
			return "UGC_MST_CTL";
	
		case 858456953:
			return "UGC_MST_RAID";
	
		case 868063036:
			return "UGC_MST_LEG";
	
		case 916298691:
			return "UGC_MST_HEMD";
	
		case 1046222216:
			return "UGC_MST_DVIP";
	
		case 1053257180:
			return "UGC_MST_HTS";
	
		case 1078150940:
			return "UGC_MST_AWIP";
	
		case 1165474480:
			return "UGC_MST_LEG";
	
		case 1335816198:
			return "UGC_MST_KOTK";
	
		case 1419108180:
			return "UGC_MST_PWRW";
	
		case 1424000300:
			return "UGC_MST_MNTM";
	
		case 1430637396:
			return "UGC_MST_MYR";
	
		case 1520184724:
			return "UGC_MST_AFGPO";
	
		case 1575764607:
			return "UGC_MST_HRSR";
	
		case 1612828680:
			return "UGC_MST_ALMD";
	
		case 1668321463:
			return "UGC_MST_SMGRN";
	
		case 1682048147:
			return "UGC_MST_STGP";
	
		case 1692096074:
			return "UGC_MST_MWTD";
	
		case 1934718563:
			return "UGC_MST_BRP";
	
		default:
		
	}

	return "Invalid MISSION_SUB_TYPE";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(int iParam0) // Position - 0xF696 Hash - 0xA17D549C ^0x3689777B
{
	switch (iParam0)
	{
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
	
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
	
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
	
		case -725256130:
			return "GST_DEATHMATCH_TGR";
	
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
	
		case -559809431:
			return "GST_DEATHMATCH_HT";
	
		case -548018579:
			return "GST_DEATHMATCH_EC";
	
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
	
		case -457802746:
			return "GST_DEATHMATCH_FTB";
	
		case -222655798:
			return "GST_DEATHMATCH_GR";
	
		case 10577687:
			return "GST_DEATHMATCH_MC";
	
		case 424482930:
			return "GST_DEATHMATCH_MM";
	
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
	
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
	
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
	
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
	
		case 1816768801:
			return "GST_DEATHMATCH";
	
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
	
		default:
		
	}

	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(int iParam0) // Position - 0xF794 Hash - 0xA17D549C ^0xED189EDA
{
	switch (iParam0)
	{
		case -1957416901:
			return "GST_RACE_RUNAWT";
	
		case -1185533313:
			return "GST_RACE_OPTARA";
	
		case -784189810:
			return "GST_RACE_STANDA";
	
		case -79999383:
			return "GST_RACE_GOLDRU";
	
		case -63669280:
			return "GST_RACE_DUALCO";
	
		case 218185167:
			return "GST_RACE_TARRAC";
	
		case 851921060:
			return "GST_RACE_ELIM";
	
		case 1457860192:
			return "GST_RACE_TIMECP";
	
		case 1579717899:
			return "GST_RACE_COMBAT";
	
		case 1744858848:
			return "GST_RACE_OPERAC";
	
		case 2028478397:
			return "GST_RACE_SURVIV";
	
		default:
		
	}

	return "Invalid RACE_SUB_TYPE";
}

BOOL func_401() // Position - 0xF837 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

Hash func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43) // Position - 0xF853 Hash - 0xA35C54C1 ^0xA7FDBAC2
{
	int num;
	int value;
	Hash hash;
	var unk;
	var buffer;
	Hash hash2;

	func_471();
	num = func_472();
	value = Global_1898068.f_6;
	hash = value + uParam0.f_16;
	MISC::_INT_TO_STRING(value, "%i", &buffer);
	Global_1935689.f_1225.f_1208 = Global_1935689.f_1225.f_1208 + 1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "Invite_Root_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, &buffer, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, Global_1935689.f_1225.f_1208, 64);
	func_473(&Global_1935689.f_1225.f_5[num /*30*/], Global_1935689.f_1225.f_2, unk, uParam0);
	Global_1935689.f_1225.f_5[num /*30*/].f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[num /*30*/], func_474(76), Global_1935689.f_1225.f_1208);
	Global_1935689.f_1225.f_5[num /*30*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[num /*30*/], func_474(77), uParam0.f_21);
	Global_1935689.f_1225.f_5[num /*30*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[num /*30*/], func_474(78), false);
	Global_1935689.f_1225.f_5[num /*30*/].f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[num /*30*/], func_474(62), uParam0.f_21);
	Global_1935689.f_1225.f_5[num /*30*/].f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[num /*30*/], func_474(70), uParam0.f_24);

	if (uParam0.f_24)
	{
		Global_1935689.f_1225.f_5[num /*30*/].f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1935689.f_1225.f_5[num /*30*/], func_474(68), uParam0.f_23);
		Global_1935689.f_1225.f_5[num /*30*/].f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[num /*30*/], func_474(71), uParam0.f_22);
	}

	Global_1935689.f_1225.f_5[num /*30*/].f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[num /*30*/], func_474(79), uParam0.f_17);
	Global_1935689.f_1225.f_5[num /*30*/].f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[num /*30*/], func_474(50), uParam0.f_18);
	Global_1935689.f_1225.f_5[num /*30*/].f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[num /*30*/], func_474(51), uParam0.f_18.f_1);
	Global_1935689.f_1225.f_5[num /*30*/].f_21 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1935689.f_1225.f_5[num /*30*/], func_474(80), uParam0.f_18.f_2);
	Global_1935689.f_1225.f_5[num /*30*/].f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[num /*30*/], func_474(81), hash);
	func_475(Global_1935689.f_1225.f_1207 + 1);

	if (Global_1935689.f_1225.f_1208 == 2147483647)
		Global_1935689.f_1225.f_1208 = 0;

	if (func_476() && func_477(uParam0.f_17))
	{
		if (func_401())
			uParam0.f_25 = 0;
		else
			uParam0.f_25 = 3;
	
		uParam0.f_25.f_11 = 778915895;
		uParam0.f_25.f_12 = Global_1935689.f_1225.f_5[num /*30*/];
		hash2 = func_478(&(uParam0.f_25));
		Global_1935689.f_1225.f_5[num /*30*/].f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[num /*30*/], func_474(83), hash2);
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1935689.f_1225.f_3, 0, "pm_invite_item", Global_1935689.f_1225.f_5[num /*30*/]);
	return Global_1935689.f_1225.f_5[num /*30*/];
}

BOOL func_403() // Position - 0xFBB6 Hash - 0x7CC17417 ^0x2B629C31
{
	return Global_1572887.f_94 > 0;
}

void func_404(var uParam0) // Position - 0xFBC6 Hash - 0x45672198 ^0x504C3584
{
	func_479(uParam0);
	func_479(&(uParam0->f_2));
	return;
}

void func_405(var uParam0) // Position - 0xFBDC Hash - 0xF3D4BA1E ^0xE2B41A08
{
	Global_1572887.f_94.f_6 = { *uParam0 };
	return;
}

void func_406(int iParam0, int iParam1) // Position - 0xFBF2 Hash - 0x269C1A18 ^0xCAA89555
{
	int i;
	int num;
	Hash hash;
	int num2;

	for (i = 39; i >= 0; i = i + -1)
	{
		hash = { Global_1935689.f_1225.f_5[i /*30*/] };
		num = DATABINDING::DATABINDING_READ_INT(hash.f_18);
		num2 = num;
	
		if (iParam0 != num2)
		{
		}
		else
		{
			num = DATABINDING::DATABINDING_READ_INT(hash.f_19);
		
			if (iParam1 != num)
			{
			}
			else
			{
				func_480(hash);
			}
		}
	}

	return;
}

void func_407(var uParam0) // Position - 0xFC54 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_408(var uParam0) // Position - 0xFC5C Hash - 0x646928F0 ^0x646928F0
{
	func_479(uParam0);
	return;
}

void func_409(var uParam0) // Position - 0xFC6A Hash - 0xA2B7A957 ^0xD7276AC4
{
	Global_1572887.f_94.f_2 = { *uParam0 };
	return;
}

BOOL func_410(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xFC80 Hash - 0x382448DA ^0xF49B1B04
{
	return func_262(uParam0.f_3, bParam4);
}

void func_411(var uParam0) // Position - 0xFC92 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

var func_412(BOOL bParam0, var uParam1, var uParam2) // Position - 0xFC9A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

char* func_413(var uParam0, int iParam1) // Position - 0xFCB1 Hash - 0x215BC816 ^0xEA527B8C
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_414(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

const char* func_414(const char* sParam0, int iParam1) // Position - 0xFCE9 Hash - 0xE79ACEBD ^0x6F28A7D8
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_415(BOOL bParam0, int iParam1) // Position - 0xFD04 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

int func_416() // Position - 0xFD19 Hash - 0xB5B9362C ^0x59BA230C
{
	if (Global_1572887.f_94.f_54 != false)
		return 2;

	if (Global_1572887.f_94.f_43 != -1)
		return 2;

	if (Global_1572887.f_94.f_53 > 2)
		return 2;

	if (Global_1572887.f_94.f_53 == 2)
	{
		Global_1572887.f_94.f_53 = 0;
		return 1;
	}

	return 0;
}

BOOL func_417() // Position - 0xFD6B Hash - 0x3CA1BB47 ^0x6A0D5C15
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	return false;
}

BOOL func_418(Hash hParam0) // Position - 0xFD85 Hash - 0x798E6037 ^0xDD3AB35C
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
		{
			func_481(i);
			return true;
		}
	}

	return false;
}

void func_419(int iParam0) // Position - 0xFDC5 Hash - 0x42868A8 ^0x948BE552
{
	Global_1109000.f_22.f_10 = iParam0;
	return;
}

BOOL func_420(int iParam0) // Position - 0xFDD7 Hash - 0xA1D29AFD ^0xE01D16D
{
	return Global_1109000.f_22.f_6 && iParam0 != false;
}

BOOL func_421(int iParam0) // Position - 0xFDEC Hash - 0xA1D29AFD ^0xF1140B5D
{
	return Global_1109000.f_22.f_8 && iParam0 != false;
}

BOOL func_422(int iParam0) // Position - 0xFE01 Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1109000.f_4[Global_1109504[iParam0 /*2*/]] && Global_1109504[iParam0 /*2*/].f_1 == Global_1109504[iParam0 /*2*/].f_1;
}

int func_423() // Position - 0xFE2F Hash - 0x78958C45 ^0x78958C45
{
	if (Global_1109000 <= 5)
		return Global_1109000;

	if (Global_1109000 <= 21)
		return 4;

	if (Global_1109000 <= 24)
		return 3;

	return 25;
}

int func_424(int iParam0) // Position - 0xFE62 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_482(&(Global_1109000.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_425(int iParam0) // Position - 0xFE7F Hash - 0x5EB32340 ^0xCC3B9D16
{
	Global_1109000.f_22.f_8 = Global_1109000.f_22.f_8 || iParam0;
	return;
}

BOOL func_426(int iParam0) // Position - 0xFE9A Hash - 0x5E770C8F ^0xDF257335
{
	return Global_265073.f_73815.f_273 && iParam0 != false;
}

int func_427(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xFEB3 Hash - 0x501C7E2E ^0xD981ED57
{
	int num;
	float num2;
	int num3;
	int i;
	float num4;

	num = -1;
	num2 = 999999.9f;

	if (_IS_NULL_VECTOR(vParam0))
		return -1;

	for (i = 0; i < Global_1894899.f_161; i = i + 1)
	{
		num3 = Global_1894899.f_10[i];
		num4 = BUILTIN::VDIST2(vParam0, Global_1888801[num3 /*35*/].f_6);
	
		if (num4 < num2)
		{
			num = num3;
			num2 = num4;
		}
	}

	if (func_483(num))
	{
	}
	else
	{
		num = -1;
	}

	return num;
}

void func_428(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13) // Position - 0xFF2E Hash - 0xFDA035EC ^0xA8C779C5
{
	if (func_448(255) == 4)
		return;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	if (iParam8 < 0f && iParam9 < 0f)
	{
		iParam8 = Global_1899378.f_23;
		iParam9 = Global_1899378.f_23.f_1;
	}

	if (iParam8 == 0f && iParam9 == 0f)
	{
		iParam8 = Global_1899378.f_23;
		iParam9 = Global_1899378.f_23.f_1;
	}

	if (iParam9 < iParam8)
	{
		iParam8 = Global_1899378.f_23;
		iParam9 = Global_1899378.f_23.f_1;
	}

	if (bParam10)
		func_351(0, false, 0, true);

	func_430(0);
	func_430(3);
	Global_1109000.f_448 = iParam11;
	Global_1109000.f_449 = iParam12;
	Global_1109000.f_450 = iParam13;
	func_450(&(Global_1109000.f_379));
	Global_1109000.f_379 = fParam3;
	Global_1109000.f_379.f_5 = 1;
	Global_1109000.f_379.f_17.f_6 = { uParam0 };
	Global_1109000.f_379.f_17.f_3 = { 0f, 0f, 0f };
	Global_1109000.f_379.f_17 = { iParam9, iParam9, iParam9 };
	Global_1109000.f_379.f_17.f_9 = joaat("volSphere");

	if (iParam8 > 1f)
	{
		Global_1109000.f_379.f_16 = 1;
		Global_1109000.f_379.f_6.f_6 = { Global_1109000.f_379.f_17.f_6 };
		Global_1109000.f_379.f_6.f_3 = { 0f, 0f, 0f };
		Global_1109000.f_379.f_6 = { iParam8, iParam8, iParam8 };
		Global_1109000.f_379.f_6.f_9 = joaat("volSphere");
	}

	func_451(&(Global_1109000.f_418));
	Global_1109000.f_418.f_6 = { uParam4 };
	Global_1109000.f_418 = fParam7;
	Global_1109000.f_418.f_5 = 1;
	Global_1109000.f_22.f_16 = 0;
	Global_1109000.f_22.f_17 = 0;
	func_452(Global_1109000.f_379, 42);
	func_453(Global_1109000.f_418, 42);
	return;
}

void func_429(BOOL bParam0) // Position - 0x10102 Hash - 0x5E7DB9DB ^0x5E7DB9DB
{
	if (!bParam0)
		func_424(14);
	else
		func_430(14);

	return;
}

int func_430(int iParam0) // Position - 0x10121 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_484(&(Global_1109000.f_4), iParam0, 5))
		return 1;

	return 0;
}

struct<10> func_431() // Position - 0x1013E Hash - 0x581A6033 ^0xAD6F2C23
{
	return Global_1572887.f_94.f_29;
}

Player func_432() // Position - 0x10151 Hash - 0xA1DBD1D9 ^0x9A0B74A
{
	return Global_1572887.f_94.f_39;
}

BOOL func_433(Player plParam0) // Position - 0x10161 Hash - 0x7647021A ^0xB4AA498
{
	return Global_1055058[plParam0 /*116*/].f_39;
}

var func_434(Player plParam0) // Position - 0x10173 Hash - 0xD3725A76 ^0x9EA986E5
{
	return Global_1055058[plParam0 /*116*/].f_39.f_1;
}

var func_435(Player plParam0) // Position - 0x10187 Hash - 0xD3725A76 ^0xBBA94EE7
{
	return Global_1055058[plParam0 /*116*/].f_39.f_2;
}

var func_436(Player plParam0) // Position - 0x1019B Hash - 0xD3725A76 ^0x357CB987
{
	return Global_1055058[plParam0 /*116*/].f_39.f_3;
}

var func_437(Player plParam0) // Position - 0x101AF Hash - 0xD3725A76 ^0x42ECAF4D
{
	return Global_1055058[plParam0 /*116*/].f_39.f_4;
}

int func_438(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4) // Position - 0x101C3 Hash - 0x48F3A7CC ^0x48F3A7CC
{
	if (!func_485(iParam0, iParam1))
		return 0;

	func_486(iParam0, iParam1, uParam2);
	func_487(iParam3);
	func_488(iParam4);
	func_489(9);
	func_490();

	if (func_465(iParam3))
		func_491(iParam3);

	return 1;
}

int func_439(int iParam0) // Position - 0x1020C Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_440(Player plParam0) // Position - 0x10220 Hash - 0xBDFDE4E0 ^0x7F9F742C
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		plParam0 = PLAYER::PLAYER_ID();

	player = plParam0;

	if (func_312(plParam0) > 2)
		return true;

	if (Global_262777[player /*69*/].f_1.f_11 != 0)
		return true;

	if (Global_262777[player /*69*/].f_1 != 255)
		return true;

	if (Global_262777[player /*69*/].f_1.f_13 != 2147483647)
		return true;

	return false;
}

int func_441(int iParam0, BOOL bParam1) // Position - 0x1028A Hash - 0x2293EE83 ^0xE0E564EC
{
	int value;
	int i;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (iParam0 == 2147483647)
		return value;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_262150.f_1[i /*5*/] == iParam0 && bParam1 == 0 || Global_262150.f_1[i /*5*/].f_1 == bParam1)
			return Global_262150.f_1[i /*5*/].f_2;
	}

	return value;
}

BOOL func_442(int iParam0, int iParam1) // Position - 0x102F9 Hash - 0xEB724F14 ^0xC359D7CE
{
	int i;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&iParam0))
		return 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!Global_1224589.f_16[i])
		{
		}
		else if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&iParam0, i))
		{
		}
		else if (Global_262777[i /*69*/].f_67 && iParam1 != false)
		{
			return 1;
		}
	}

	return 0;
}

BOOL func_443(Player plParam0, int iParam1) // Position - 0x10358 Hash - 0x718DD1EF ^0x40941AD4
{
	return plParam0->f_15 && iParam1 != false;
}

BOOL func_444(Player plParam0) // Position - 0x10369 Hash - 0x3B04E97A ^0x18A152C2
{
	int value;
	int num;
	int i;
	int bitIndex;
	int bitIndex2;

	value = func_441(plParam0->f_13, plParam0->f_12);
	num = SCRIPTS::COUNT_PLAYER_BITS(&value);
	bitIndex2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	for (i = 0; i < func_492(); i = i + 1)
	{
		bitIndex = func_493(i);
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&value, bitIndex))
		{
		}
		else if (bitIndex2 == bitIndex)
		{
		}
		else
		{
			num = num + 1;
		}
	}

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&value, bitIndex2))
		num = num + 1;

	return num > plParam0->f_28;
}

BOOL func_445(Vector3* pvParam0, float* pfParam1, BOOL bParam2) // Position - 0x103E1 Hash - 0xAA75743 ^0x9C391BE3
{
	Hash randomIntInRange;
	int i;
	Hash hash;
	float num;
	float num2;
	int endRange;
	int randomIntInRange2;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);

	if (bParam2)
	{
		i = 0;
		hash = -1;
		num = 0f;
	
		for (i = 0; i <= 15; i = i + 1)
		{
			num2 = BUILTIN::VDIST(Global_1224589.f_11, Global_1058888.f_43853.f_283[i /*306*/].f_2);
		
			if (num2 < num || hash == -1)
			{
				hash = i;
				num = num2;
			}
		}
	
		randomIntInRange = hash;
	}

	randomIntInRange = Global_1058888.f_43853.f_283[randomIntInRange /*306*/];
	endRange = func_494(randomIntInRange);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_495(randomIntInRange, randomIntInRange2, pvParam0, pfParam1))
			return true;
	}

	return false;
}

BOOL func_446() // Position - 0x10499 Hash - 0xA5A53F42 ^0xE343240E
{
	return func_262(Global_1572887.f_6, true);
}

void func_447(int iParam0, int iParam1) // Position - 0x104AC Hash - 0x277DE552 ^0xA236FB53
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
	return;
}

int func_448(int iParam0) // Position - 0x104C4 Hash - 0x322F9962 ^0x249D071F
{
	if (iParam0 == 255)
		return Global_1109000.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 25;

	if (Global_1224589.f_16[iParam0])
		return Global_1108108[iParam0 /*27*/].f_1;

	return 25;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1050F Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_450(var uParam0) // Position - 0x10539 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_451(var uParam0) // Position - 0x1054B Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_452(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x1055D Hash - 0x63EE9672 ^0xDAC9325D
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

void func_453(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x105B3 Hash - 0x6DF4F0B2 ^0x7B946ED1
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x105E0 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

int func_455(int iParam0) // Position - 0x105EC Hash - 0x8B2A2FEE ^0x1A7E7D7A
{
	return 60000;
}

void func_456(Any anParam0, char* sParam1) // Position - 0x105F8 Hash - 0x92114936 ^0x76E9F981
{
	var variableName;
	var unk8;
	int i;

	SAVE::_0x443174C20B8B9E7F(anParam0, 94, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eModel", 64);
	SAVE::_SAVEGAME_GET_INT_3(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eItem", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eCarriableType", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_2), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eCarriableConfigInfo", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_3), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".ePedQuality", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_4), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".ePedSkinQuality", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_5), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".ePedRarity", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_6), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eDamageCleanliness", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_7), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eOutfit", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_8), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iNumMetaAssets", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_9), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".sMetaAssetData", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_10), 81, &variableName);

	for (i = 0; i < 10; i = i + 1)
	{
		unk8 = { variableName };
		TEXT_LABEL_APPEND_INT(&unk8, i, 64);
		func_496(&anParam0->f_10[i /*8*/], &unk8);
	}

	SAVE::_0xA844FEB5C22C2C74();
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iCarcassAge", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_91), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bSkinned", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_92), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bLegendary", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(anParam0->f_93), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_457(Any anParam0, char* sParam1) // Position - 0x107A0 Hash - 0xF6D54F40 ^0x89D69A7F
{
	var variableName;
	var variableName2;
	int i;

	SAVE::_0x443174C20B8B9E7F(anParam0, 26, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iBondLevel", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fBondXP", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(anParam0->f_2), 24, &variableName);

	for (i = 0; i < 23; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			variableName2 = { variableName };
			TEXT_LABEL_APPEND_INT(&variableName2, i, 64);
			SAVE::_SAVEGAME_GET_FLOAT(&anParam0->f_2[i], &variableName2);
		}
	}

	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_458(Any anParam0, char* sParam1) // Position - 0x1083F Hash - 0xAD030512 ^0x31D38F32
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 4, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iValue", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fValueBuffer", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fDrainBuffer", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_2), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iLastGameTime", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_459(Any anParam0, char* sParam1) // Position - 0x108B6 Hash - 0xAD030512 ^0x31D38F32
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 4, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iValue", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fValueBuffer", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fDrainBuffer", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_2), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iLastGameTime", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_460(Any anParam0, char* sParam1) // Position - 0x1092D Hash - 0xE199204C ^0x6C93FFFF
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 2, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bIsWrithing", 64);
	SAVE::_SAVEGAME_GET_BOOL(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".fWrithingDuration", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(anParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_461(Any anParam0, char* sParam1) // Position - 0x10972 Hash - 0xAAC10FE2 ^0xF989A929
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 3, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bIsStableOwned", 64);
	SAVE::_SAVEGAME_GET_BOOL(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".eShop", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".todStolen", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_2), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

void func_462(Any anParam0, char* sParam1) // Position - 0x109D0 Hash - 0x16B642EA ^0xB8337EFF
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 2, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".bIsStableOwned", 64);
	SAVE::_SAVEGAME_GET_BOOL(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".todBurdenPlaced", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(anParam0->f_1), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

BOOL func_463(var uParam0, int iParam1, int iParam2) // Position - 0x10A15 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_464() // Position - 0x10A4C Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

BOOL func_465(int iParam0) // Position - 0x10A5A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_466(int iParam0) // Position - 0x10A8D Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_497(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_467(var uParam0, int iParam1) // Position - 0x10ACE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_468(var uParam0, int iParam1) // Position - 0x10ADF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_469() // Position - 0x10AF4 Hash - 0x64659D79 ^0x48CE6E83
{
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(1377133516))
		return true;

	return false;
}

void func_470(var uParam0, var uParam1) // Position - 0x10B0D Hash - 0x66CDB8C2 ^0xFE974B58
{
	Global_1572887.f_94.f_12 = { *uParam0 };
	Global_1572887.f_94.f_29 = { *uParam1 };
	return;
}

void func_471() // Position - 0x10B35 Hash - 0x355507C3 ^0x5F6023B0
{
	int num;

	num = MISC::GET_GAME_TIMER() / 1000;
	Global_1898068.f_6 = num;
	return;
}

int func_472() // Position - 0x10B4F Hash - 0x9E130851 ^0x20258C6D
{
	int i;
	int num;
	Hash hash;
	int num2;

	num = Global_1898068.f_6;

	for (i = 0; i < 40; i = i + 1)
	{
		hash = { Global_1935689.f_1225.f_5[i /*30*/] };
		num2 = DATABINDING::DATABINDING_READ_INT(hash.f_17);
	
		if (num2 < num)
		{
			if (func_498(hash))
				func_480(hash);
		
			return i;
		}
	}

	return func_499();
}

void func_473(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x10BB3 Hash - 0xFF98B1B4 ^0x9070E3BE
{
	func_500(hParam0, hParam1, uParam2, uParam10);
	hParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, func_474(15), uParam10.f_10);
	hParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, func_474(17), uParam10.f_11);
	hParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(3), uParam10.f_12);
	hParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(4), uParam10.f_13);
	hParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(5), uParam10.f_14);
	hParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(6), uParam10.f_15);
	return;
}

char* func_474(int iParam0) // Position - 0x10C47 Hash - 0xD63708B ^0x5CEDF67F
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
			return "dynamic_list_item_corner_end_img_texture_dic";
	
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
	
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
	
		case 27:
			return "dynamic_list_item_entry_player_index";
	
		case 28:
			return "dynamic_list_item_entry_friend_index";
	
		case 29:
			return "dynamic_list_item_player_gamer_handle";
	
		case 30:
			return "dynamic_list_item_option_stepper_visible";
	
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
	
		case 32:
			return "dynamic_list_item_option_stepper_items";
	
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
	
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
	
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
	
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
	
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
	
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
	
		case 39:
			return "dynamic_list_item_main_fill_maximum";
	
		case 40:
			return "dynamic_list_item_main_fill_value";
	
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
	
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
	
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
	
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
	
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
	
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
	
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
	
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
	
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
	
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
	
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
	
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
	
		case 53:
			return "dynamic_list_item_link";
	
		case 54:
			return "dynamic_list_item_event_channel_hash";
	
		case 55:
			return "dynamic_list_item_focus_hash";
	
		case 56:
			return "dynamic_list_item_select_hash";
	
		case 57:
			return "dynamic_list_item_prompt_text";
	
		case 58:
			return "dynamic_list_item_prompt_enabled";
	
		case 59:
			return "dynamic_list_item_prompt_visible";
	
		case 60:
			return "dynamic_list_item_prompt_option_text";
	
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
	
		case 62:
			return "dynamic_list_item_prompt_option_visible";
	
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
	
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
	
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
	
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
	
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
	
		case 68:
			return "dynamic_list_item_prompt_r3_text";
	
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
	
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
	
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
	
		case 72:
			return "mount_collection_index";
	
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
	
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
	
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
	
		case 76:
			return "invite_unique_id";
	
		case 77:
			return "invite_tracked";
	
		case 78:
			return "invite_processed";
	
		case 79:
			return "invite_script_type";
	
		case 80:
			return "invite_gang_id";
	
		case 81:
			return "invite_expiration_time";
	
		case 82:
			return "invite_filter_type";
	
		case 83:
			return "invite_feed_message_id";
	
		default:
		
	}

	return "null";
}

void func_475(int iParam0) // Position - 0x110F4 Hash - 0x159CBD09 ^0xD2F2BF6A
{
	Global_1935689.f_1225.f_1207 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_1225.f_4, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1935689.f_1225.f_1207), 0));
	return;
}

BOOL func_476() // Position - 0x11128 Hash - 0xB22D5D67 ^0xEC5FFD27
{
	return NETWORK::_NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE();
}

BOOL func_477(var uParam0) // Position - 0x11134 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

Hash func_478(var uParam0) // Position - 0x1113D Hash - 0x50876869 ^0x1FBD472E
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
		return 0;
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
		return 0;
	else if (uParam0->f_5 == 0)
		return 0;
	else if (uParam0->f_6 == 0)
		return 0;

	if (uParam0->f_11 == 778915895)
		if (Global_1898068.f_3)
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		else
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_ACCEPT_INVITE");

	if (*uParam0 == 3)
		return func_501(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, joaat("player_menu"), uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, true, true, uParam0->f_4, uParam0->f_18);
	else if (*uParam0 == 4)
		return func_502(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, joaat("player_menu"), uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_18);
	else if (*uParam0 == 1)
		return func_503(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 2)
		return func_504(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 0)
		return func_221(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, true, true);

	return 0;
}

void func_479(var uParam0) // Position - 0x11375 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_480(Hash hParam0) // Position - 0x1137D Hash - 0x4B4740D4 ^0xC4F9EAB7
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1935689.f_1225.f_3, hParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_1225.f_1, false);
	func_505(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_475(Global_1935689.f_1225.f_1207 - 1);
	return;
}

void func_481(int iParam0) // Position - 0x113CB Hash - 0xBEE7BE6F ^0x7416FECE
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

BOOL func_482(var uParam0, int iParam1, int iParam2) // Position - 0x1142B Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::CLEAR_BIT(&uParam0->[num], offset);
	return isBitSet;
}

BOOL func_483(int iParam0) // Position - 0x1145D Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_484(var uParam0, int iParam1, int iParam2) // Position - 0x11473 Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

BOOL func_485(int iParam0, int iParam1) // Position - 0x114A6 Hash - 0x65A17ECB ^0x65A17ECB
{
	if (iParam0 == 0 || iParam0 == 3)
		return iParam1 != -1;

	return iParam1 != 0;
}

void func_486(int iParam0, int iParam1, var uParam2) // Position - 0x114CA Hash - 0x1103C499 ^0x1D1C0091
{
	Global_1572887.f_45 = iParam0;
	Global_1572887.f_45.f_1 = iParam1;
	Global_1572887.f_45.f_2 = uParam2;
	func_506();
	return;
}

void func_487(var uParam0) // Position - 0x114F2 Hash - 0x67BF396F ^0x5F64BE2
{
	Global_1572887.f_45.f_3 = uParam0;
	func_506();
	return;
}

void func_488(int iParam0) // Position - 0x11508 Hash - 0x42868A8 ^0xC8DFD42A
{
	Global_1572887.f_45.f_4 = iParam0;
	return;
}

void func_489(int iParam0) // Position - 0x1151A Hash - 0x42868A8 ^0xF3C6A869
{
	Global_1572887.f_45.f_28 = iParam0;
	return;
}

void func_490() // Position - 0x1152C Hash - 0x493A9169 ^0x1C077740
{
	func_381(&(Global_1572887.f_6), 1);
	func_381(&(Global_1572887.f_6), 1073741824);
	func_506();
	return;
}

int func_491(int iParam0) // Position - 0x11552 Hash - 0x3E423BB3 ^0x3E423BB3
{
	if (func_507())
		return 0;

	if (!func_465(iParam0))
		return 0;

	Global_1051043 = iParam0;
	return 1;
}

int func_492() // Position - 0x1157A Hash - 0x4228A1C2 ^0x6D6B8E7D
{
	return Global_1109000.f_246;
}

int func_493(int iParam0) // Position - 0x11588 Hash - 0xDA7611C5 ^0x5F3EB1C1
{
	if (iParam0 < 0 || iParam0 >= 7)
		return 255;

	return Global_1109000.f_248[iParam0];
}

int func_494(Hash hParam0) // Position - 0x115B0 Hash - 0x357C1BB6 ^0x4C16238F
{
	var unk;

	unk = Global_1058888.f_43853.f_283.f_4898;
	unk.f_2 = 1593794963;
	unk.f_3 = hParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
}

BOOL func_495(Hash hParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x115DE Hash - 0x79AB4765 ^0x7D0795B4
{
	var unk;

	unk = Global_1058888.f_43853.f_283.f_4898;
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

void func_496(Any anParam0, char* sParam1) // Position - 0x11642 Hash - 0x55AD9517 ^0xAC9FCC57
{
	var variableName;

	SAVE::_0x443174C20B8B9E7F(anParam0, 8, sParam1);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iDrawable", 64);
	SAVE::_SAVEGAME_GET_INT_2(anParam0, &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iAlbedo", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_1), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iNormal", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_2), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iMaterial", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_3), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iPalette", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_4), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTint0", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_5), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTint1", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_6), &variableName);
	TEXT_LABEL_ASSIGN_STRING(&variableName, sParam1, 64);
	TEXT_LABEL_APPEND_STRING(&variableName, ".iTint2", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(anParam0->f_7), &variableName);
	SAVE::_0xE0B45E983BFC0768();
	return;
}

int func_497(int iParam0) // Position - 0x1171E Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_498(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29) // Position - 0x1179F Hash - 0xA8DB882A ^0x6A001CB3
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0.f_28);
}

int func_499() // Position - 0x117AF Hash - 0xBE2AD567 ^0x2137AB52
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	num4 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[0 /*30*/].f_17);
	num5 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[0 /*30*/].f_26);

	for (i = 0; i < 40; i = i + 1)
	{
		num = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[i /*30*/].f_17);
		num2 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[i /*30*/].f_26);
	
		if (num < num4)
		{
			num3 = i;
			num4 = num;
			num5 = num2;
		}
		else if (num == num4)
		{
			if (num2 < num5)
			{
				num3 = i;
				num4 = num;
				num5 = num2;
			}
		}
	}

	func_480(Global_1935689.f_1225.f_5[num3 /*30*/]);
	return num3;
}

void func_500(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Position - 0x1185F Hash - 0x870C1583 ^0xC6938A5E
{
	*hParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	hParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, func_474(0), bParam10);
	hParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, func_474(1), bParam10.f_1);
	hParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(2), bParam10.f_2);
	hParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(53), bParam10.f_3);
	hParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(54), bParam10.f_4);
	hParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(56), bParam10.f_5);
	hParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(55), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	hParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, func_474(57), bParam10.f_7);
	hParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, func_474(58), bParam10.f_8);
	hParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, func_474(59), bParam10.f_9);
	return;
}

int func_501(const char* sParam0, const char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14, var uParam15, var uParam16) // Position - 0x11950 Hash - 0xB09C796D ^0x553C8588
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam8;
	unk.f_1 = uParam9;
	unk.f_2 = uParam10;
	unk.f_3 = iParam12;
	unk.f_9 = iParam4;
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

int func_502(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19) // Position - 0x119DD Hash - 0x4A9388DC ^0x75B98721
{
	var unk;
	var unk14;
	int num;

	unk = -2;
	unk = uParam11;
	unk.f_1 = uParam12;
	unk.f_2 = uParam13;
	unk.f_3 = iParam15;
	unk.f_9 = iParam7;
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

int func_503(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x11A7C Hash - 0x51CE9407 ^0x19439D00
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
	num = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&unk, &unk14, bParam12, bParam13);
	return num;
}

int func_504(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16) // Position - 0x11AF3 Hash - 0xA374F5D ^0x1F00546A
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

void func_505(Hash hParam0) // Position - 0x11B81 Hash - 0xAB171871 ^0xDAEA1B9E
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, func_474(83));

	if (func_508(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

void func_506() // Position - 0x11BAA Hash - 0x700DA4D0 ^0x85FE45B6
{
	int num;

	if (func_48() == -1)
		return;

	num = Global_1224589;
	Global_1055058[num /*116*/].f_39 = func_262(Global_1572887.f_6, true);
	Global_1055058[num /*116*/].f_39.f_1 = Global_1572887.f_45;
	Global_1055058[num /*116*/].f_39.f_2 = Global_1572887.f_45.f_1;
	Global_1055058[num /*116*/].f_39.f_3 = Global_1572887.f_45.f_2;
	Global_1055058[num /*116*/].f_39.f_4 = Global_1572887.f_45.f_3;
	Global_1055058[num /*116*/].f_39.f_8 = Global_1572887.f_45.f_4;
	Global_1055058[num /*116*/].f_39.f_5 = { Global_1572887.f_152 };
	return;
}

BOOL func_507() // Position - 0x11C50 Hash - 0x3B4C11AE ^0x3B4C11AE
{
	return Global_1051043 != -1;
}

BOOL func_508(int iParam0) // Position - 0x11C5E Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

