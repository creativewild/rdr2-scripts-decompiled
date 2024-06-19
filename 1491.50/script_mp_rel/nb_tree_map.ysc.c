#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = -1;
	var uLocal_7 = 0;
	var uLocal_8 = 1;
	var uLocal_9 = 0;
	var uLocal_10 = 32;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
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
	var uLocal_116 = -1;
	var uLocal_117 = -1;
	var uLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 1;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 7;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = -1;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x392C07B8 ^0x471E807E
{
	int num;

	fLocal_148 = 1f;
	fLocal_149 = 1f;
	num = iScriptParam_0;
	func_1(num);
	func_2(&iScriptParam_0);

	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	func_5();
	func_6();
	return;
}

void func_1(int iParam0) // Position - 0x3A Hash - 0x45AC0374 ^0xD39796F4
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_0, 10, 42);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&iLocal_0), 10, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_10, 97, 43);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&uLocal_10[0 /*3*/]), 97, "m_clientData");
	func_12(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

void func_2(Any* panParam0) // Position - 0x95 Hash - 0x74F64304 ^0x78E7D36A
{
	if (iLocal_0 == 6)
		return;

	func_13(panParam0);

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}

	return;
}

BOOL func_3() // Position - 0xBB Hash - 0x2F72A303 ^0xE588CFF2
{
	if (func_16(false, false))
		return true;
	else if (func_17(uLocal_107.f_9, 0, 1))
		return true;
	else if (!func_18())
		return true;
	else if (!func_19(uLocal_107.f_12))
		return true;
	else if (!func_21(func_20(uLocal_107.f_12), uLocal_107.f_9))
		return true;
	else if (uLocal_107.f_8 == 6)
		return true;

	return false;
}

void func_4() // Position - 0x135 Hash - 0x38BBAC53 ^0xCE40D7A
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_22();

	func_23();
	return;
}

void func_5() // Position - 0x14C Hash - 0xC06A5AE ^0xC332015
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}

	func_26();
	func_27();
	return;
}

void func_6() // Position - 0x16B Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x177 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_8() // Position - 0x194 Hash - 0x1FABDECD ^0x67C342BC
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
	
		if (func_28() == 0)
			if (func_29())
				func_6();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_6();

	return 1;
}

void func_9() // Position - 0x2A5 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_10(int iParam0, int iParam1, char* sParam2) // Position - 0x2AD Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

int func_11(int iParam0, int iParam1, char* sParam2) // Position - 0x2B6 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_12(BOOL bParam0) // Position - 0x2BF Hash - 0x2B211437 ^0xE0D702E
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

void func_13(Any* panParam0) // Position - 0x388 Hash - 0x16878C73 ^0x7D3F29AE
{
	Player player;
	BOOL flag;
	int num;
	var unk;

	player = 255;
	MISC::COPY_SCRIPT_STRUCT(&uLocal_107, panParam0, 5);
	num = func_30(&flag, uLocal_107.f_1, uLocal_107.f_2);

	if (flag || num == -1)
		return;

	uLocal_107.f_12 = num;
	player = Global_1207480.f_231.f_1066[num /*17*/].f_5;
	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_31(&unk, uLocal_107.f_1, uLocal_107.f_2, uLocal_107.f_3, player);
	uLocal_107.f_9 = { func_32(unk.f_5, 8) };
	uLocal_107.f_14 = unk.f_5;
	uLocal_107.f_15 = { unk.f_11 };
	uLocal_107.f_18 = unk.f_7;
	func_33();
	func_34();
	return;
}

void func_14() // Position - 0x443 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_35();
	return;
}

void func_15() // Position - 0x44F Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_16(BOOL bParam0, BOOL bParam1) // Position - 0x457 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_17(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x537 Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_36(Global_1051268) && !func_21(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_37(iParam2))
		return true;

	if (iParam3 != 0 && func_38(iParam3, 255))
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

	if (func_39())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_36(Global_1051268))
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

BOOL func_18() // Position - 0x660 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_19(int iParam0) // Position - 0x674 Hash - 0x596E39DA ^0x596E39DA
{
	return iParam0 >= 0 && iParam0 < 71;
}

struct<2> func_20(int iParam0) // Position - 0x68A Hash - 0x6A8249B9 ^0xDE40EE6D
{
	return Global_1219595.f_1[iParam0 /*10*/].f_4;
}

BOOL func_21(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6A0 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

void func_22() // Position - 0x6BB Hash - 0xF2000438 ^0xF2000438
{
	if (iLocal_0 <= 5)
		func_40();

	switch (iLocal_0)
	{
		case 0:
			func_41();
			break;
	
		case 1:
			func_42();
			break;
	
		case 2:
			func_43();
			break;
	
		case 3:
			func_44();
			break;
	
		case 4:
			func_45();
			break;
	
		case 5:
			func_46();
			break;
	}

	return;
}

void func_23() // Position - 0x723 Hash - 0x718468E1 ^0xE7E1C6C6
{
	func_47();
	func_48();

	if (uLocal_107.f_8 <= 5)
		func_49();

	switch (uLocal_107.f_8)
	{
		case 0:
			func_50();
			break;
	
		case 1:
			func_51();
			break;
	
		case 2:
			func_52();
			break;
	
		case 3:
			func_53();
			break;
	
		case 4:
			func_54();
			break;
	
		case 5:
			func_55();
			break;
	}

	return;
}

void func_24() // Position - 0x797 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_25() // Position - 0x79F Hash - 0x958DB425 ^0xEC04140
{
	if (func_56())
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iLocal_0.f_3.f_1))
			VOLUME::_RELEASE_LOCK_VOLUME(iLocal_0.f_3.f_1);

	func_57();
	return;
}

void func_26() // Position - 0x7C9 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_27() // Position - 0x7D1 Hash - 0xD3EFF962 ^0x805EBE40
{
	if (uLocal_107.f_12 != -1)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
			func_58(uLocal_107.f_12, 4);

	func_59();

	if (func_60(64))
		func_61(iLocal_0.f_6);

	func_62();
	return;
}

int func_28() // Position - 0x81B Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_29() // Position - 0x829 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

int func_30(var uParam0, var uParam1, int iParam2) // Position - 0x837 Hash - 0x451E0D8C ^0x954E8F68
{
	var unk;
	int num;
	int num2;
	var unk25;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_6.f_1 = -1;
	unk.f_9 = 2;
	num = 2;
	num.f_1 = -1;
	num.f_5 = -1;
	num.f_5.f_1 = -1;
	num.f_5.f_3 = -1;
	num.f_5.f_4 = -1;
	num.f_5.f_5 = -1;
	num.f_5.f_6 = -1;
	num.f_5.f_6.f_1 = -1;
	num.f_5.f_9 = 2;
	unk25.f_10 = 1106247680;
	unk25.f_15 = 4;
	unk25.f_20 = 4;
	unk25.f_26 = -1;
	unk25.f_28 = 2;
	func_31(&unk25, uParam1, iParam2, -1, 255);
	func_63(&unk, unk25.f_5);
	num2 = func_64(&unk);

	if (func_19(num2))
	{
		num = { func_65(num2) };
	
		if (num == 2)
		{
			return num2;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}

	return -1;
}

void func_31(Any* panParam0, int iParam1, int iParam2, int iParam3, Player plParam4) // Position - 0x926 Hash - 0x843FDFCA ^0xC3ED9912
{
	var src;
	int i;

	src.f_10 = 1106247680;
	src.f_15 = 4;
	src.f_20 = 4;
	src.f_26 = -1;
	src.f_28 = 2;
	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 31);

	for (i = 0; i < 2; i = i + 1)
	{
		panParam0->f_28[i] = 0;
	}

	if (plParam4 == 255)
		plParam4 = PLAYER::PLAYER_ID();

	switch (iParam1)
	{
		case 0:
			*panParam0 = 0;
			panParam0->f_1 = 0;
			panParam0->f_2 = 0;
			break;
	
		case 1:
			func_66(panParam0, iParam2);
			break;
	
		case 2:
			func_67(panParam0, iParam2);
			break;
	
		case 3:
			func_68(panParam0, iParam2);
			break;
	
		case 4:
			func_69(panParam0, iParam2);
			break;
	
		case 5:
			func_73(panParam0, iParam2);
			break;
	
		case 6:
			func_71(panParam0, iParam2);
			break;
	
		case 7:
			func_72(panParam0, iParam2, iParam3);
			break;
	
		case 8:
			func_77(panParam0, iParam2);
			break;
	
		case 9:
			func_75(panParam0, iParam2, iParam3);
			break;
	
		case 10:
			func_76(panParam0, iParam2);
			break;
	
		case 11:
			func_74(panParam0, iParam2);
			break;
	
		case 12:
			func_70(panParam0, iParam2);
			break;
	
		case 13:
			func_78(panParam0, iParam2, plParam4);
			break;
	
		case 14:
			func_79(panParam0, iParam2, iParam3);
			break;
	
		case 15:
			func_80(panParam0, iParam2);
			break;
	
		case 16:
			func_81(panParam0, iParam2, iParam3);
			break;
	
		case 17:
			func_96(panParam0, iParam2);
			break;
	
		case 18:
			func_97(panParam0, iParam2);
			break;
	
		case 19:
			func_98(panParam0, iParam2);
			break;
	
		case 20:
			func_99(panParam0, iParam2);
			break;
	
		case 21:
			func_83(panParam0, iParam2);
			break;
	
		case 22:
			func_87(panParam0, iParam2);
			break;
	
		case 23:
			func_88(panParam0, iParam2);
			break;
	
		case 24:
			func_86(panParam0, iParam2);
			break;
	
		case 25:
			func_85(panParam0, iParam2);
			break;
	
		case 26:
			func_90(panParam0, iParam2);
			break;
	
		case 27:
			func_92(panParam0, iParam2);
			break;
	
		case 28:
			func_84(panParam0, iParam2);
			break;
	
		case 29:
			func_89(panParam0, iParam2);
			break;
	
		case 30:
			func_91(panParam0, iParam2);
			break;
	
		case 31:
			func_82(panParam0, iParam2);
			break;
	
		case 32:
			func_93(panParam0, iParam2, iParam3);
			break;
	
		case 33:
			func_94(panParam0, iParam2, iParam3);
			break;
	
		case 34:
			func_95(panParam0, iParam2);
			break;
	
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
		case 45:
		case 46:
			func_100(panParam0, iParam1, iParam2);
			break;
	
		default:
			break;
	}

	return;
}

struct<2> func_32(var uParam0, int iParam1) // Position - 0xC4C Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_102(uParam0, &(Global_1072759.f_573), func_101(iParam1));
			break;
	
		case 3:
			num.f_1 = func_102(uParam0, &(Global_1072759.f_573.f_602), func_101(iParam1));
			break;
	
		case 4:
			num.f_1 = func_102(uParam0, &(Global_1072759.f_573.f_2104), func_101(iParam1));
			break;
	
		case 5:
			num.f_1 = func_102(uParam0, &(Global_1072759.f_573.f_12606), func_101(iParam1));
			break;
	
		case 6:
			num.f_1 = func_102(uParam0, &(Global_1072759.f_573.f_12908), func_101(iParam1));
			break;
	
		case 7:
			num.f_1 = func_102(uParam0, &(Global_1072759.f_573.f_15910), func_101(iParam1));
			break;
	
		case 8:
			num.f_1 = func_102(uParam0, &(Global_1072759.f_573.f_16512), func_101(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_103();

	return num;
}

void func_33() // Position - 0xD72 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_34() // Position - 0xD7A Hash - 0xE34D4134 ^0xEC82EBDD
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	return;
}

void func_35() // Position - 0xD87 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_36(int iParam0, var uParam1) // Position - 0xD8F Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_104(iParam0))
		return false;

	if (iParam0.f_1 < 0)
		return false;

	if (iParam0.f_1 >= func_101(iParam0))
		return false;

	return true;
}

BOOL func_37(int iParam0) // Position - 0xDC3 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0xDE4 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_39() // Position - 0xE20 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_36(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

void func_40() // Position - 0xE78 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_41() // Position - 0xE80 Hash - 0xE4D9ECAD ^0x4452B0E7
{
	Player player;
	var unk;

	player = Global_1207480.f_231.f_1066[uLocal_107.f_12 /*17*/].f_5;
	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_31(&unk, uLocal_107.f_1, uLocal_107.f_2, uLocal_107.f_3, player);

	if (!func_105(&unk, 1))
	{
		func_106(1);
		return;
	}

	iLocal_0.f_6 = func_107(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(player)));
	func_108(256);

	if (func_109(iLocal_0.f_6))
	{
		func_110(5);
		func_106(6);
	}
	else
	{
		func_106(1);
	}

	return;
}

void func_42() // Position - 0xF1D Hash - 0x5286C056 ^0x2AA4A4A
{
	var unk;
	BOOL flag;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_31(&unk, uLocal_107.f_1, uLocal_107.f_2, -1, 255);

	if (func_105(&unk, 1))
	{
		func_106(2);
		return;
	}

	if (func_111(unk, &flag))
	{
		MISC::CLEAR_AREA(uLocal_107.f_15, unk.f_10, 2442122);
		func_106(2);
	}
	else if (flag)
	{
		func_110(3);
		func_106(6);
	}

	if (!func_112(iLocal_0.f_3.f_2))
	{
		func_113(&(iLocal_0.f_3.f_2));
	}
	else if (func_114(iLocal_0.f_3.f_2) > 45000)
	{
		func_110(4);
		func_106(6);
	}

	return;
}

void func_43() // Position - 0xFDA Hash - 0x6026A6ED ^0x6026A6ED
{
	if (func_115(1, 255))
	{
		if (!func_116(1))
		{
			if (func_117())
				func_108(1);
		}
		else
		{
			func_118();
			func_106(3);
		}
	}

	return;
}

void func_44() // Position - 0x100D Hash - 0x52CA13AE ^0x52CA13AE
{
	BOOL flag;

	if (func_115(2, 255))
	{
		if (!func_116(2))
		{
			flag = true;
		
			if (!func_119())
				flag = false;
		
			if (!func_120())
				flag = false;
		
			if (flag)
				func_108(2);
		}
		else
		{
			func_121();
			func_106(4);
		}
	}

	return;
}

void func_45() // Position - 0x1057 Hash - 0xE5C5DAD4 ^0x8DC83586
{
	func_122();
	func_123();
	func_124();

	if (func_125() || iLocal_0.f_2 != 0)
	{
		func_126();
		func_106(5);
	}

	return;
}

void func_46() // Position - 0x1087 Hash - 0xF1360BE0 ^0xF1360BE0
{
	if (func_115(4, 255))
	{
		if (func_127())
		{
			func_108(4);
			func_106(6);
		}
	}

	return;
}

void func_47() // Position - 0x10AA Hash - 0x24BEAE59 ^0xF1368003
{
	if (!func_116(256))
		return;

	if (func_116(512))
	{
		if (func_60(64) && func_107(PLAYER::PLAYER_ID()) == iLocal_0.f_6)
		{
			func_61(iLocal_0.f_6);
			func_128(64);
		}
	}
	else if (!func_60(64))
	{
		if (func_107(PLAYER::PLAYER_ID()) == iLocal_0.f_6)
		{
			func_129(iLocal_0.f_6, 1, true);
			func_130(64);
		}
	}
	else if (func_107(PLAYER::PLAYER_ID()) != iLocal_0.f_6)
	{
		func_61(iLocal_0.f_6);
		func_128(64);
	}

	return;
}

void func_48() // Position - 0x1140 Hash - 0x8A3EC25B ^0xA2FB0C53
{
	if (!Global_13)
		if (func_115(8192, 255))
			func_131(8192);
	else if (!func_115(8192, 255))
		func_132(8192);

	return;
}

void func_49() // Position - 0x1179 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_133();
	return;
}

void func_50() // Position - 0x1185 Hash - 0xE22012CC ^0xE22012CC
{
	if (iLocal_0 == 6)
	{
		func_134(6);
	}
	else if (iLocal_0 > 0)
	{
		func_47();
		func_134(1);
	}

	return;
}

void func_51() // Position - 0x11AA Hash - 0xEFC5C80B ^0xEFC5C80B
{
	if (iLocal_0 == 6)
		func_134(6);
	else if (iLocal_0 > 1)
		func_134(2);

	return;
}

void func_52() // Position - 0x11CB Hash - 0xC58AEAA2 ^0xC58AEAA2
{
	BOOL flag;
	int num;

	if (!func_115(1, 255))
	{
		flag = true;
	
		if (!func_135())
			flag = false;
	
		if (!func_136())
			flag = false;
	
		if (flag)
		{
			func_132(1);
		}
		else
		{
			num = Global_1901671.f_245.f_70;
		
			if (!func_112(uLocal_107.f_11))
				func_113(&(uLocal_107.f_11));
		
			if (func_114(uLocal_107.f_11) >= num)
				func_134(6);
		}
	}
	else if (iLocal_0 > 2)
	{
		func_137(&(uLocal_107.f_11));
		func_138();
		func_134(3);
	}

	return;
}

void func_53() // Position - 0x124E Hash - 0x6CFFE48 ^0x715075B5
{
	BOOL flag;
	BOOL flag2;
	int num;

	if (!func_115(2, 255))
	{
		flag = func_139();
		flag2 = func_140();
	
		if (flag && flag2)
		{
			func_132(2);
		}
		else
		{
			num = Global_1901671.f_245.f_70;
		
			if (!func_112(uLocal_107.f_11))
				func_113(&(uLocal_107.f_11));
		
			if (func_141(uLocal_107.f_11) >= num)
				func_134(6);
		}
	}
	else if (iLocal_0 > 3)
	{
		func_137(&(uLocal_107.f_11));
		func_142();
		func_143();
		func_144();
		func_145();
		func_134(4);
	}

	return;
}

void func_54() // Position - 0x12D7 Hash - 0xF6847CE ^0xF6847CE
{
	if (iLocal_0 >= 5)
	{
		func_146();
		func_134(5);
		return;
	}

	func_147();
	func_148();
	func_149();
	func_150();
	func_151();
	func_152();
	func_153();
	return;
}

void func_55() // Position - 0x130D Hash - 0x199F3A39 ^0x9B7550B1
{
	if (!func_115(4, 255))
	{
		if (func_154())
		{
			func_155();
			func_58(uLocal_107.f_12, 4);
			func_132(4);
		}
	}
	else if (iLocal_0 > 5)
	{
		func_134(6);
	}

	return;
}

BOOL func_56() // Position - 0x1347 Hash - 0xC4B64D03 ^0xD6624F83
{
	return func_116(4) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1;
}

void func_57() // Position - 0x1369 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_58(int iParam0, int iParam1) // Position - 0x1371 Hash - 0xC6CEE6E2 ^0x17C0383A
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (func_156(iParam0, playerIndex, iParam1))
		return;

	MISC::SET_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

void func_59() // Position - 0x13A1 Hash - 0x49104A ^0x49104A
{
	int num;
	BOOL flag;

	if (!func_60(1))
		return;

	if (func_60(4))
		return;

	if (!func_60(2))
	{
		num = -1;
	}
	else if (!func_60(8))
	{
		num = 2;
	}
	else if (func_60(16))
	{
		num = 0;
		flag = true;
	}
	else if (func_60(32))
	{
		num = 4;
		flag = true;
	}
	else
	{
		num = 1;
		flag = true;
	}

	func_157(uLocal_107.f_9, num, 0, 255, 0);
	func_130(4);

	if (flag)
	{
		func_158(uLocal_107.f_1, uLocal_107.f_2);
	
		if (!func_60(256))
		{
			if (num == 1)
				func_159(uLocal_107.f_18, 1);
			else
				func_159(uLocal_107.f_18, 0);
		
			func_130(256);
		}
	
		func_160(uLocal_107.f_18);
	}
	else
	{
		func_159(uLocal_107.f_18, 2);
	}

	return;
}

BOOL func_60(int iParam0) // Position - 0x1470 Hash - 0x64046C13 ^0x60A9C881
{
	return func_161(uLocal_107.f_7, iParam0);
}

void func_61(int iParam0) // Position - 0x1482 Hash - 0xAD5707CC ^0xA213E010
{
	Player player;

	if (!func_162(iParam0))
		return;

	player = PLAYER::PLAYER_ID();
	Global_1144526[player /*83*/].f_70 = iParam0;
	Global_1144526[player /*83*/].f_70.f_2 = 0;
	return;
}

void func_62() // Position - 0x14B6 Hash - 0x52334FEF ^0xE094667C
{
	BOOL flag;
	int i;
	Entity entity;

	flag = func_56();

	for (i = 0; i <= 0; i = i + 1)
	{
		if (flag && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_0.f_7.f_1[i]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_0.f_7.f_1[i]))
		{
			entity = NETWORK::NET_TO_ENT(iLocal_0.f_7.f_1[i]);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&entity);
		}
	}

	if (flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_107.f_19.f_4))
			TASK::_DELETE_SCENARIO_POINT(uLocal_107.f_19.f_4);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_107.f_19.f_5))
			ENTITY::DELETE_ENTITY(&(uLocal_107.f_19.f_5));
	}

	return;
}

void func_63(var uParam0, var uParam1) // Position - 0x154A Hash - 0x4DC245EF ^0x3570A6D5
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(uParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
	return;
}

int func_64(var uParam0) // Position - 0x156D Hash - 0xC6AB7C0D ^0x7895D4AD
{
	int num;
	int i;

	if (!func_163(uParam0))
		return -1;

	num = func_164(uParam0, uParam0->f_9);

	if (num != -1)
		return num;

	for (i = 0; i < 4; i = i + 1)
	{
		if (i == uParam0->f_9)
		{
		}
		else
		{
			num = func_164(uParam0, i);
		
			if (num != -1)
				return num;
		}
	}

	return -1;
}

struct<15> func_65(int iParam0) // Position - 0x15CE Hash - 0xF427A620 ^0x34D54A29
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

	if (!func_19(iParam0))
		return unk;

	return Global_1207480.f_231[iParam0 /*15*/];
}

void func_66(Any* panParam0, int iParam1) // Position - 0x1638 Hash - 0x1B652E10 ^0xE0CB7F13
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 7;
	func_165(panParam0, iParam1);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2150.3738f, 1728.2147f, 125.2313f };
			break;
	
		case 1:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
			panParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
	
		case 2:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
			panParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
	
		case 3:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
			panParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
	
		case 4:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
			panParam0->f_11 = { -1370.7115f, -515.7384f, 125.267f };
			break;
	
		case 5:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
			panParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
	
		case 6:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
			panParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
	
		case 7:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
			panParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
	
		case 8:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
			panParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
	
		case 9:
			panParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
			panParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}

	return;
}

void func_67(Any* panParam0, int iParam1) // Position - 0x17EA Hash - 0x54238BE5 ^0xC54B9184
{
	panParam0->f_6 = 1;
	*panParam0 = 20;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			panParam0->f_11 = { -1925.3425f, -2119.336f, 52.16934f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			panParam0->f_11 = { 136.29797f, 35.34337f, 101.27948f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			panParam0->f_11 = { -910.7408f, 860.84534f, 134.66505f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			panParam0->f_11 = { 2788.7786f, 1077.2836f, 57.99089f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			panParam0->f_11 = { 1751.9142f, -1117.7389f, 40.70011f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			panParam0->f_11 = { 1290.4315f, -836.7289f, 77.47561f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			panParam0->f_11 = { 308.11407f, 1187.8075f, 180.17459f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			panParam0->f_11 = { -1779.5381f, -235.38936f, 181.20294f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			panParam0->f_11 = { -1290.3986f, -1179.1986f, 72.33453f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			panParam0->f_11 = { -2306.8904f, -1546.2078f, 152.01866f };
			break;
	
		case 10:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			panParam0->f_11 = { -2724.458f, -2521.5242f, 64.76124f };
			break;
	
		case 11:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			panParam0->f_11 = { -4461.8833f, -3271.474f, 14.54459f };
			break;
	
		case 12:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			panParam0->f_11 = { -4631.0537f, -2738.483f, -12.13559f };
			break;
	
		case 13:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			panParam0->f_11 = { -5678.259f, -3182.9395f, -22.66476f };
			break;
	
		case 14:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			panParam0->f_11 = { -1688.8683f, -2272.0908f, 44.12061f };
			break;
	
		case 15:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			panParam0->f_11 = { -1621.917f, 1628.2081f, 235.96451f };
			break;
	
		case 16:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			panParam0->f_11 = { 420.36334f, 2020.9095f, 230.44226f };
			break;
	
		case 17:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			panParam0->f_11 = { -517.4607f, 510.53485f, 102.23069f };
			break;
	
		case 18:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			panParam0->f_11 = { 1775.6008f, 546.3866f, 106.63338f };
			break;
	
		case 19:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			panParam0->f_11 = { 1612.415f, -1715.3972f, 52.91364f };
			break;
	}

	return;
}

void func_68(Any* panParam0, int iParam1) // Position - 0x1B97 Hash - 0x5EE1A985 ^0xAE443C00
{
	panParam0->f_6 = 1;
	*panParam0 = 21;
	panParam0->f_1 = 8;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2252.0354f, 1342.7057f, 84.5573f };
			break;
	
		case 1:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			panParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
	
		case 2:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			panParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
	
		case 3:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			panParam0->f_11 = { 1130.5413f, 575.7938f, 86.66257f };
			break;
	
		case 4:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			func_168(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			panParam0->f_11 = { -754.38934f, -399.11334f, 40.84306f };
			break;
	
		case 5:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			func_168(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			panParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
	
		case 6:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			panParam0->f_11 = { -2085.7773f, -161.9067f, 208.0633f };
			break;
	
		case 7:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			panParam0->f_11 = { -1678.3037f, -517.8369f, 140.867f };
			break;
	
		case 8:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			panParam0->f_11 = { -2624.8809f, -339.7662f, 141.8102f };
			break;
	
		case 9:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			panParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
	
		case 10:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 5);
			func_168(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			panParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
	
		case 11:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			panParam0->f_11 = { -1069.1802f, -1919.6165f, 42.3447f };
			break;
	
		case 12:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			panParam0->f_11 = { 1673.6715f, 1440.0455f, 146.0849f };
			break;
	
		case 13:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			panParam0->f_11 = { 1562.4343f, 1445.2374f, 145.2842f };
			break;
	
		case 14:
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 6);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			panParam0->f_11 = { 1244.9269f, 1177.2512f, 148.8856f };
			break;
	
		case 15:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			func_168(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			panParam0->f_11 = { 1926.7029f, -362.3477f, 42.4864f };
			break;
	
		case 16:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			func_168(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			panParam0->f_11 = { 2192.4888f, -318.3198f, 40.7232f };
			break;
	
		case 17:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			func_168(panParam0, 7);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			panParam0->f_11 = { 2408.447f, -490.45618f, 40.9243f };
			break;
	
		case 18:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			panParam0->f_11 = { -3243.502f, -3187.1414f, -9.3137f };
			break;
	
		case 19:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			panParam0->f_11 = { -1745.0105f, -2929.1406f, -12.3355f };
			break;
	
		case 20:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 5);
			panParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			panParam0->f_11 = { -1735.0702f, -2378.3552f, 41.289f };
			break;
	}

	return;
}

void func_69(Any* panParam0, int iParam1) // Position - 0x215D Hash - 0x9A737154 ^0x31A63517
{
	panParam0->f_6 = 1;
	*panParam0 = 11;
	panParam0->f_1 = 1;
	panParam0->f_2 = 2;
	func_166(panParam0);
	panParam0->f_15[0] = joaat("22_TO_4");

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			panParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			panParam0->f_11 = { 1274.5785f, -1218.2861f, 80.6496f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			panParam0->f_11 = { -954.4733f, -1203.2461f, 54.5241f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			panParam0->f_11 = { -5442.5366f, -2904.5088f, -0.0668f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			panParam0->f_11 = { -4438.9077f, -2693.0728f, -12.033f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			panParam0->f_11 = { -3339.6006f, -2869.2827f, -6.9507f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			panParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			panParam0->f_11 = { 1735.8651f, -422.7769f, 47.1349f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			panParam0->f_11 = { 1978.5011f, -1902.6475f, 41.0487f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			panParam0->f_11 = { 2757.9985f, -1078.6664f, 45.8905f };
			break;
	
		case 10:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			panParam0->f_11 = { -1762.1147f, -237.9833f, 181.9701f };
			break;
	}

	return;
}

void func_70(Any* panParam0, int iParam1) // Position - 0x2382 Hash - 0xDF444245 ^0x16DE4ED9
{
	panParam0->f_6 = 1;
	*panParam0 = 15;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			panParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			panParam0->f_11 = { 1428.8171f, -1812.9952f, 57.37384f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			panParam0->f_11 = { 2578.8933f, -852.3694f, 41.3078f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			panParam0->f_11 = { 2798.119f, 1432.1865f, 77.71185f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			panParam0->f_11 = { 1243.4546f, 526.5765f, 87.43867f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			panParam0->f_11 = { -28.69774f, 1111.2297f, 167.99446f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			panParam0->f_11 = { -546.60913f, -298.20566f, 52.56811f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			panParam0->f_11 = { -1403.6885f, 383.75064f, 102.2472f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			panParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			panParam0->f_11 = { -1459.7523f, -1915.6023f, 50.93545f };
			break;
	
		case 10:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			panParam0->f_11 = { -2470.0183f, -2426.993f, 59.1458f };
			break;
	
		case 11:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			panParam0->f_11 = { -3092.9353f, -3166.527f, -1.36638f };
			break;
	
		case 12:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			panParam0->f_11 = { -3685.6243f, -2769.2468f, -15.14988f };
			break;
	
		case 13:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			panParam0->f_11 = { -4668.993f, -3706.8193f, 12.54352f };
			break;
	
		case 14:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			panParam0->f_11 = { -5194.4834f, -2883.913f, 2.32447f };
			break;
	}

	return;
}

void func_71(Any* panParam0, int iParam1) // Position - 0x264F Hash - 0x551BDE55 ^0x7EAD599
{
	panParam0->f_6 = 1;
	*panParam0 = 16;
	panParam0->f_1 = 2;
	panParam0->f_2 = 8;
	func_169(panParam0, iParam1);

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			panParam0->f_11 = { 498.92355f, 1191.2755f, 179.50165f };
			break;
	
		case 1:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			panParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
	
		case 2:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			panParam0->f_11 = { 2271.7534f, -440.52768f, 40.82026f };
			break;
	
		case 3:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			panParam0->f_11 = { 2000.5798f, -499.0656f, 41.0245f };
			break;
	
		case 4:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			panParam0->f_11 = { 2299.8096f, -898.4015f, 41.04434f };
			break;
	
		case 5:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			panParam0->f_11 = { 2369.2922f, -673.8396f, 41.36789f };
			break;
	
		case 6:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			panParam0->f_11 = { 1531.3302f, 1578.8372f, 147.40665f };
			break;
	
		case 7:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			panParam0->f_11 = { 945.3031f, 1142.5409f, 147.4809f };
			break;
	
		case 8:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			panParam0->f_11 = { -1126.4692f, 815.38293f, 117.65359f };
			break;
	
		case 9:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			panParam0->f_11 = { -2063.8135f, 935.3212f, 147.08078f };
			break;
	
		case 10:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			panParam0->f_11 = { -1589.6876f, -1425.3187f, 80.34965f };
			break;
	
		case 11:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			panParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
	
		case 12:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -2690.1038f, -2892.6267f, 64.73759f };
			break;
	
		case 13:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			panParam0->f_11 = { -2914.5295f, -2558.9668f, 61.66708f };
			break;
	
		case 14:
			func_168(panParam0, 0);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			panParam0->f_11 = { -4545.762f, -3673.9324f, 17.87756f };
			break;
	
		case 15:
			func_168(panParam0, 1);
			panParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			panParam0->f_11 = { -4720.841f, -3356.9995f, 8.61745f };
			break;
	}

	return;
}

void func_72(Any* panParam0, int iParam1, int iParam2) // Position - 0x295C Hash - 0xBFAC7426 ^0xCE61387F
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 12;
	panParam0->f_2 = 3;

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			panParam0->f_11 = { 468.69318f, 60.0849f, 134.48164f };
			break;
	
		case 1:
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 8);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			panParam0->f_11 = { -408.7124f, 154.07425f, 40.84526f };
			break;
	
		case 2:
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 6);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			panParam0->f_11 = { -1929.6549f, -1348.3383f, 105.84004f };
			break;
	
		case 3:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			panParam0->f_11 = { -2003.943f, -2158.1348f, 54.2301f };
			break;
	
		case 4:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			panParam0->f_11 = { -1272.2256f, 97.47642f, 70.53004f };
			break;
	
		case 5:
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 7);
			func_168(panParam0, 8);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			panParam0->f_11 = { -2350.8613f, -359.48505f, 143.74742f };
			break;
	
		case 6:
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			func_168(panParam0, 6);
			func_168(panParam0, 7);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			panParam0->f_11 = { -1736.7568f, 306.27814f, 108.13549f };
			break;
	
		case 7:
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			func_168(panParam0, 6);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			panParam0->f_11 = { -4964.499f, -3399.8892f, 7.97322f };
			break;
	
		case 8:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -2192.8054f, -2778.9773f, 69.01174f };
			break;
	
		case 9:
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			func_168(panParam0, 5);
			func_168(panParam0, 9);
			func_168(panParam0, 10);
			func_168(panParam0, 11);
			func_170(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			panParam0->f_11 = { -4603.1655f, -2701.4338f, -10.12116f };
			break;
	}

	return;
}

void func_73(Any* panParam0, int iParam1) // Position - 0x2D61 Hash - 0x5D320215 ^0x3150B5E
{
	panParam0->f_6 = 1;
	*panParam0 = 21;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			panParam0->f_11 = { 1452.2505f, -1695.1158f, 64.9668f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			panParam0->f_11 = { 1163.5503f, -324.00864f, 97.10712f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			panParam0->f_11 = { 2682.1038f, 858.447f, 85.90118f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			panParam0->f_11 = { 1311.3326f, 1183.9337f, 151.58594f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			panParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			panParam0->f_11 = { 109.94106f, 1282.2561f, 176.292f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			panParam0->f_11 = { -1450.8594f, 1686.2659f, 255.2526f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			panParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			panParam0->f_11 = { -1698.0358f, 380.6171f, 106.08258f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			panParam0->f_11 = { -2016.359f, -909.59174f, 84.91344f };
			break;
	
		case 10:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			panParam0->f_11 = { -1362.0912f, -1267.6244f, 82.41972f };
			break;
	
		case 11:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			panParam0->f_11 = { -2449.0513f, -1457.9423f, 148.70496f };
			break;
	
		case 12:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			panParam0->f_11 = { -1559.3394f, -1930.7284f, 50.99157f };
			break;
	
		case 13:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			panParam0->f_11 = { -1764.4445f, -2717.768f, 62.81413f };
			break;
	
		case 14:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			panParam0->f_11 = { -2190.5444f, -2200.2883f, 64.42333f };
			break;
	
		case 15:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			panParam0->f_11 = { -2803.2598f, -3142.291f, 5.88098f };
			break;
	
		case 16:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			panParam0->f_11 = { -3175.1685f, -2402.267f, 22.72451f };
			break;
	
		case 17:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			panParam0->f_11 = { -4220.6113f, -2690.138f, 0.65931f };
			break;
	
		case 18:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			panParam0->f_11 = { -4372.619f, -3274.0547f, 20.26154f };
			break;
	
		case 19:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			panParam0->f_11 = { -5456.922f, -3562.7441f, -21.1142f };
			break;
	
		case 20:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			panParam0->f_11 = { -5796.2217f, -2650.1453f, -16.68393f };
			break;
	}

	return;
}

void func_74(Any* panParam0, int iParam1) // Position - 0x313C Hash - 0x8450976C ^0x21F65E49
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	func_166(panParam0);
	func_171(panParam0, 2);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			panParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			panParam0->f_11 = { 1465.5144f, -821.0334f, 50.2372f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			panParam0->f_11 = { -1082.3317f, -696.7548f, 70.5432f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			panParam0->f_11 = { -1462.9519f, -1929.859f, 48.4187f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			panParam0->f_11 = { -4988.295f, -3902.3462f, -0.03286f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			panParam0->f_11 = { -2770.4727f, -2936.5059f, 64.84297f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			panParam0->f_11 = { -1209.6105f, -1812.1654f, 61.23543f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			panParam0->f_11 = { -1706.9928f, -580.9286f, 149.92998f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			panParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			panParam0->f_11 = { 1778.2363f, -1731.3589f, 48.27552f };
			break;
	}

	return;
}

void func_75(Any* panParam0, int iParam1, int iParam2) // Position - 0x332F Hash - 0xCA41473A ^0x4BBB9DEE
{
	panParam0->f_6 = 1;
	*panParam0 = 12;
	panParam0->f_1 = 4;
	panParam0->f_2 = 5;

	switch (iParam1)
	{
		case 0:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			panParam0->f_11 = { -1159.1152f, 397.0877f, 60.4953f };
			break;
	
		case 1:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			panParam0->f_11 = { -1278.3585f, 291.4224f, 76.6652f };
			break;
	
		case 2:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			panParam0->f_11 = { -1371.2797f, 283.4114f, 86.0114f };
			break;
	
		case 3:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			panParam0->f_11 = { -1117.6871f, 406.6783f, 55.3681f };
			break;
	
		case 4:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			panParam0->f_11 = { -1288.3231f, 148.5012f, 71.7864f };
			break;
	
		case 5:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			panParam0->f_11 = { -1648.4469f, -114.858f, 170.0504f };
			break;
	
		case 6:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			panParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
	
		case 7:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			panParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
	
		case 8:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			panParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
	
		case 9:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			panParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
	
		case 10:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			panParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
	
		case 11:
			func_172(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			panParam0->f_11 = { 817.72473f, 566.34467f, 114.37611f };
			break;
	}

	return;
}

void func_76(Any* panParam0, int iParam1) // Position - 0x3587 Hash - 0x34A025B7 ^0xE89D46E7
{
	panParam0->f_6 = 1;
	*panParam0 = 20;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			panParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			panParam0->f_11 = { -1541.353f, -2334.6106f, 43.10187f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			panParam0->f_11 = { -3456.3904f, -2262.3394f, 0.01624f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			panParam0->f_11 = { -3703.7117f, -3594.2244f, 45.18983f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			panParam0->f_11 = { -1581.5511f, -1656.278f, 78.51012f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			panParam0->f_11 = { -1236.2917f, -1118.5502f, 68.58572f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			panParam0->f_11 = { -1264.1251f, -773.21173f, 91.83559f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			panParam0->f_11 = { -1414.6073f, -234.21231f, 99.22668f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			panParam0->f_11 = { -1721.4021f, 553.60004f, 112.52401f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			panParam0->f_11 = { -484.79907f, -70.36918f, 42.94242f };
			break;
	
		case 10:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			panParam0->f_11 = { -458.58392f, -346.5686f, 80.66556f };
			break;
	
		case 11:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			panParam0->f_11 = { 1089.5831f, 23.75282f, 88.22131f };
			break;
	
		case 12:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			panParam0->f_11 = { 1000.1311f, 417.59085f, 107.90821f };
			break;
	
		case 13:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			panParam0->f_11 = { 713.73315f, 23.52884f, 152.07973f };
			break;
	
		case 14:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			panParam0->f_11 = { 63.77304f, 1023.48724f, 201.97491f };
			break;
	
		case 15:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			panParam0->f_11 = { 366.667f, 1408.6646f, 175.0605f };
			break;
	
		case 16:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			panParam0->f_11 = { 1785.9344f, 1522.0093f, 155.1442f };
			break;
	
		case 17:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			panParam0->f_11 = { 1279.0696f, 1164.6782f, 149.25081f };
			break;
	
		case 18:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			panParam0->f_11 = { 2106.4556f, 207.61694f, 72.68985f };
			break;
	
		case 19:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			panParam0->f_11 = { 2675.5486f, 179.96567f, 54.14579f };
			break;
	}

	return;
}

void func_77(Any* panParam0, int iParam1) // Position - 0x3935 Hash - 0x592A5E34 ^0x881E9437
{
	panParam0->f_6 = 1;
	*panParam0 = 9;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	func_166(panParam0);
	panParam0->f_10 = 60f;

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			panParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			panParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			panParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			panParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			panParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			panParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			panParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}

	return;
}

void func_78(Any* panParam0, int iParam1, Player plParam2) // Position - 0x3AFD Hash - 0x9556483D ^0xB363A474
{
	panParam0->f_6 = 1;
	*panParam0 = 1;
	panParam0->f_1 = 6;
	panParam0->f_2 = 1;
	func_166(panParam0);
	func_171(panParam0, 1);
	func_171(panParam0, 4);
	func_171(panParam0, 8);
	func_171(panParam0, 16);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			panParam0->f_11 = { func_173(func_107(plParam2)) };
			break;
	}

	return;
}

void func_79(Any* panParam0, int iParam1, int iParam2) // Position - 0x3B6C Hash - 0x56DE7B4C ^0xC010063B
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 5;
	panParam0->f_2 = 6;

	switch (iParam1)
	{
		case 0:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			panParam0->f_11 = { -347.45312f, 740.86426f, 116.4549f };
			break;
	
		case 1:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			panParam0->f_11 = { -360.64975f, 824.0327f, 115.47684f };
			break;
	
		case 2:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			panParam0->f_11 = { 2957.2253f, 524.47064f, 43.66619f };
			break;
	
		case 3:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			panParam0->f_11 = { 2975.8853f, 537.22455f, 42.42131f };
			break;
	
		case 4:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			panParam0->f_11 = { 1444.6334f, -1417.9818f, 78.22246f };
			break;
	
		case 5:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			panParam0->f_11 = { 1394.1692f, -1422.8539f, 78.97552f };
			break;
	
		case 6:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			panParam0->f_11 = { 2996.1448f, 1351.8083f, 42.95977f };
			break;
	
		case 7:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			panParam0->f_11 = { 2915.7434f, 1231.9519f, 43.5792f };
			break;
	
		case 8:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			panParam0->f_11 = { -833.56085f, -1543.9165f, 59.6274f };
			break;
	
		case 9:
			func_174(panParam0, iParam2);
			panParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			panParam0->f_11 = { -1019.64f, -1138.9438f, 56.39161f };
			break;
	}

	return;
}

void func_80(Any* panParam0, int iParam1) // Position - 0x3D66 Hash - 0x362990E7 ^0x4AF57DA
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 1;
	*panParam0 = 12;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			panParam0->f_11 = { 2208.6682f, -350.9536f, 41.488f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			panParam0->f_11 = { 1733.9232f, -727.6727f, 40.8996f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			panParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			panParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			panParam0->f_11 = { 646.006f, 1304.9276f, 193.4366f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			panParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			panParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			panParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			panParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			panParam0->f_11 = { 2566.8933f, -71.0977f, 49.3333f };
			break;
	
		case 10:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 1389.072f, -2196.6956f, 48.3307f };
			break;
	
		case 11:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}

	return;
}

void func_81(Any* panParam0, int iParam1, int iParam2) // Position - 0x3FB1 Hash - 0xFBF8B2F ^0xF0E14B57
{
	panParam0->f_6 = 1;
	*panParam0 = 15;
	panParam0->f_1 = 2;
	panParam0->f_2 = 4;
	func_175(panParam0, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_0");
			panParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
	
		case 1:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_1");
			panParam0->f_11 = { 2602.444f, -1286.5703f, 51.2567f };
			break;
	
		case 2:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_2");
			panParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
	
		case 3:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_3");
			panParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
	
		case 4:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_4");
			panParam0->f_11 = { 2530.8828f, -1149.3745f, 49.0052f };
			break;
	
		case 5:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_5");
			panParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
	
		case 6:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_6");
			panParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
	
		case 7:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_7");
			panParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
	
		case 8:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_8");
			panParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
	
		case 9:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_9");
			panParam0->f_11 = { 2593.1646f, -1207.4845f, 52.3112f };
			break;
	
		case 10:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_10");
			panParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
	
		case 11:
			panParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_11");
			panParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
	
		case 12:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_0");
			panParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
	
		case 13:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_1");
			panParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
	
		case 14:
			panParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_2");
			panParam0->f_11 = { -843.7784f, -1282.6638f, 42.3634f };
			break;
	}

	return;
}

void func_82(Any* panParam0, int iParam1) // Position - 0x4252 Hash - 0x76E410F2 ^0x728520F5
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 15;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -1084113577;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 8;
	}

	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -672003008;
			panParam0->f_11 = { 2153.7854f, -1677.7432f, 40.5666f };
			break;
	
		case 1:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -396317411;
			panParam0->f_11 = { 2188.5845f, -1595.6418f, 40.591f };
			break;
	
		case 2:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -1239103346;
			panParam0->f_11 = { 2078.438f, -1694.9067f, 40.6896f };
			break;
	
		case 3:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -889851344;
			panParam0->f_11 = { 2066.834f, -1767.3042f, 40.1183f };
			break;
	
		case 4:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -1582784618;
			panParam0->f_11 = { 2131.7183f, -1865.6598f, 40.0837f };
			break;
	
		case 5:
			func_176(panParam0, iParam1);
			panParam0->f_5 = 407459900;
			panParam0->f_11 = { 2189.6125f, -654.0466f, 40.5628f };
			break;
	
		case 6:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -1359903346;
			panParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
	
		case 7:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -1075501195;
			panParam0->f_11 = { 2212.4346f, -599.6181f, 40.5628f };
			break;
	
		case 8:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -761049871;
			panParam0->f_11 = { 2273.3408f, -693.9393f, 40.5628f };
			break;
	
		case 9:
			func_176(panParam0, iParam1);
			panParam0->f_5 = 1397804618;
			panParam0->f_11 = { 2314.6592f, -599.6119f, 40.5628f };
			break;
	
		case 10:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -636095416;
			panParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
	
		case 11:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -933474091;
			panParam0->f_11 = { 2800.1301f, -727.0102f, 40.6116f };
			break;
	
		case 12:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -1209520147;
			panParam0->f_11 = { 2726.1284f, -662.6138f, 40.5283f };
			break;
	
		case 13:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -1524528544;
			panParam0->f_11 = { 2710.1377f, -534.5544f, 40.615f };
			break;
	
		case 14:
			func_176(panParam0, iParam1);
			panParam0->f_5 = -449082741;
			panParam0->f_11 = { 2728.1738f, -468.3862f, 40.7744f };
			break;
	}

	return;
}

void func_83(Any* panParam0, int iParam1) // Position - 0x457B Hash - 0x46DCFEF ^0xD3E139E3
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 13;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 477228254;

	if (iParam1 > 7)
	{
		panParam0->f_27 = 18;
		panParam0->f_20[0] = joaat("Night");
	}
	else
	{
		panParam0->f_27 = 1;
		panParam0->f_20[0] = joaat("DAY");
	}

	switch (iParam1)
	{
		case 0:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -42638554;
			panParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
	
		case 1:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -330841909;
			panParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
	
		case 2:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -637690825;
			panParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
	
		case 3:
			func_177(panParam0, iParam1);
			panParam0->f_5 = 1210841234;
			panParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
	
		case 4:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -275624566;
			panParam0->f_11 = { -2023.4004f, 662.6884f, 119.8702f };
			break;
	
		case 5:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -2051147289;
			panParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
	
		case 6:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -1760846718;
			panParam0->f_11 = { -2487.2324f, 414.2487f, 148.2772f };
			break;
	
		case 7:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -1591562064;
			panParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
	
		case 8:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -1159724897;
			panParam0->f_11 = { -1377.9451f, 265.2666f, 78.222f };
			break;
	
		case 9:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -114459335;
			panParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
	
		case 10:
			func_177(panParam0, iParam1);
			panParam0->f_5 = 564350440;
			panParam0->f_11 = { -1091.1877f, -37.3214f, 40.5256f };
			break;
	
		case 11:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -840522068;
			panParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
	
		case 12:
			func_177(panParam0, iParam1);
			panParam0->f_5 = -2076667055;
			panParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}

	return;
}

void func_84(Any* panParam0, int iParam1) // Position - 0x483F Hash - 0x51DB4086 ^0x774CE5CE
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 1796670491;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 0;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 18;
	}

	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = -666643000;
			panParam0->f_11 = { -2323.8208f, -444.3168f, 143.2396f };
			break;
	
		case 1:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = -930743103;
			panParam0->f_11 = { -2387.7808f, -333.0453f, 142.8896f };
			break;
	
		case 2:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = -4199612;
			panParam0->f_11 = { -2622.5005f, -342.7303f, 141.5315f };
			break;
	
		case 3:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = -1480377528;
			panParam0->f_11 = { -2760.3196f, -77.8632f, 151.8582f };
			break;
	
		case 4:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = -1817640794;
			panParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
	
		case 5:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = -915442079;
			panParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
	
		case 6:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = 1928422814;
			panParam0->f_11 = { 2257.8928f, 256.7348f, 43.6559f };
			break;
	
		case 7:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = 1940620434;
			panParam0->f_11 = { 2324.8257f, 895.6353f, 71.6451f };
			break;
	
		case 8:
			func_168(panParam0, 1);
			panParam0->f_5 = -665538457;
			panParam0->f_11 = { 2383.811f, 1084.1549f, 85.9333f };
			break;
	
		case 9:
			func_168(panParam0, 1);
			panParam0->f_5 = 355243564;
			panParam0->f_11 = { 2398.5303f, 773.5043f, 67.0099f };
			break;
	}

	return;
}

void func_85(Any* panParam0, int iParam1) // Position - 0x4AC2 Hash - 0x40694B7A ^0x27E59267
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 326651247;
	func_166(panParam0);

	if (iParam1 > 4)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 9;
	}

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 0);
			panParam0->f_5 = -1024453831;
			panParam0->f_11 = { -1856.6093f, 1802.9187f, 234.305f };
			break;
	
		case 1:
			func_168(panParam0, 0);
			panParam0->f_5 = -652787833;
			panParam0->f_11 = { -1821.1525f, 1566.3519f, 235.8068f };
			break;
	
		case 2:
			func_168(panParam0, 0);
			panParam0->f_5 = 230697180;
			panParam0->f_11 = { -2069.5774f, 1812.8115f, 246.0542f };
			break;
	
		case 3:
			func_168(panParam0, 0);
			panParam0->f_5 = -543699832;
			panParam0->f_11 = { -1932.0067f, 2153.2158f, 322.7221f };
			break;
	
		case 4:
			func_168(panParam0, 0);
			panParam0->f_5 = 894826503;
			panParam0->f_11 = { -1752.3472f, 1951.3691f, 264.5091f };
			break;
	
		case 5:
			func_168(panParam0, 1);
			panParam0->f_5 = 1666294228;
			panParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
	
		case 6:
			func_168(panParam0, 1);
			panParam0->f_5 = 1426851145;
			panParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
	
		case 7:
			func_168(panParam0, 1);
			panParam0->f_5 = -807339271;
			panParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
	
		case 8:
			func_168(panParam0, 1);
			panParam0->f_5 = -1050255868;
			panParam0->f_11 = { 1251.4652f, 344.8225f, 92.1045f };
			break;
	
		case 9:
			func_168(panParam0, 1);
			panParam0->f_5 = -1406848126;
			panParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}

	return;
}

void func_86(Any* panParam0, int iParam1) // Position - 0x4CF6 Hash - 0x5DB55177 ^0x939820EC
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 11;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -1848813677;
	func_166(panParam0);

	if (iParam1 > 5)
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 9;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 18;
	}

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 0);
			panParam0->f_5 = -1741150966;
			panParam0->f_11 = { -1352.6392f, -2550.3784f, 74.9777f };
			break;
	
		case 1:
			func_168(panParam0, 0);
			panParam0->f_5 = -796584541;
			panParam0->f_11 = { -1913.6312f, -2213.5647f, 42.0518f };
			break;
	
		case 2:
			func_168(panParam0, 0);
			panParam0->f_5 = 80182823;
			panParam0->f_11 = { -1745.8838f, -2388.8066f, 42.8205f };
			break;
	
		case 3:
			func_168(panParam0, 1);
			panParam0->f_5 = 1964620432;
			panParam0->f_11 = { -1593.1063f, -2351.92f, 43.0229f };
			break;
	
		case 4:
			func_168(panParam0, 1);
			panParam0->f_5 = 1731665611;
			panParam0->f_11 = { -1800.6515f, -1644.9438f, 96.7288f };
			break;
	
		case 5:
			func_168(panParam0, 1);
			panParam0->f_5 = -1728544175;
			panParam0->f_11 = { -1628.2157f, -1943.5537f, 50.1671f };
			break;
	
		case 6:
			func_168(panParam0, 2);
			panParam0->f_5 = -1242537170;
			panParam0->f_11 = { 2443.7122f, -19.2163f, 43.2151f };
			break;
	
		case 7:
			func_168(panParam0, 2);
			panParam0->f_5 = 2036591126;
			panParam0->f_11 = { 2715.9102f, -128.7452f, 42.0147f };
			break;
	
		case 8:
			func_168(panParam0, 2);
			panParam0->f_5 = 197299925;
			panParam0->f_11 = { 2363.7769f, 13.1458f, 41.3272f };
			break;
	
		case 9:
			func_168(panParam0, 2);
			panParam0->f_5 = 1291850063;
			panParam0->f_11 = { 2355.3376f, -247.3491f, 41.5576f };
			break;
	
		case 10:
			func_168(panParam0, 2);
			panParam0->f_5 = 1599124976;
			panParam0->f_11 = { 2601.3857f, -212.5256f, 43.7812f };
			break;
	}

	return;
}

void func_87(Any* panParam0, int iParam1) // Position - 0x4F58 Hash - 0x5ACAFE75 ^0xE98E7282
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 20;
	panParam0->f_1 = 4;
	panParam0->f_2 = 2;
	panParam0->f_28[0] = 458679075;

	switch (iParam1)
	{
		case 0:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 980541174;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
	
		case 1:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 1220770713;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
	
		case 2:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 1322813407;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
	
		case 3:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 1552098100;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
	
		case 4:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 1916358304;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
	
		case 5:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -1363212564;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5896.217f, -3811.8545f, -31.2514f };
			break;
	
		case 6:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 686685000;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6360.1875f, -3401.3994f, -14.7027f };
			break;
	
		case 7:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -1524698208;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6241.614f, -3430.4648f, 1.465f };
			break;
	
		case 8:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -1804348854;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6091.5396f, -3398.5269f, 17.9157f };
			break;
	
		case 9:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -2035403073;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -6054.187f, -3594.0505f, -4.8637f };
			break;
	
		case 10:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 728964560;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5609.956f, -3781.1257f, -24.15435f };
			break;
	
		case 11:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 765075998;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5664.643f, -3561.7263f, -24.1565f };
			break;
	
		case 12:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 1070974613;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5811.0273f, -3789.5337f, -27.8079f };
			break;
	
		case 13:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -1088797396;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5906.5083f, -3520.4355f, -24.1555f };
			break;
	
		case 14:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -740987230;
			panParam0->f_20[0] = joaat("Dawn");
			panParam0->f_27 = 1;
			panParam0->f_11 = { -5753.8623f, -3302.776f, -24.1569f };
			break;
	
		case 15:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 2110034336;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -937.2829f, -1900.0708f, 50.81326f };
			break;
	
		case 16:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -783796062;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 16;
			panParam0->f_11 = { -1060.5697f, -1731.0603f, 75.49813f };
			break;
	
		case 17:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -545106666;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -1052.6598f, -1784.9424f, 62.46124f };
			break;
	
		case 18:
			func_178(panParam0, iParam1);
			panParam0->f_5 = 379536207;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 16;
			panParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
	
		case 19:
			func_178(panParam0, iParam1);
			panParam0->f_5 = -992108595;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 2;
			panParam0->f_11 = { -1331.61f, -1892.6777f, 60.4174f };
			break;
	}

	return;
}

void func_88(Any* panParam0, int iParam1) // Position - 0x548F Hash - 0xAE4094E3 ^0x98242EA7
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 15;
	panParam0->f_1 = 5;
	panParam0->f_2 = 2;
	panParam0->f_28[0] = 78935770;

	switch (iParam1)
	{
		case 0:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 1750035473;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1486.6128f, -2140.1343f, 47.13319f };
			break;
	
		case 1:
			func_179(panParam0, iParam1);
			panParam0->f_5 = -1499633496;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1400.0927f, -2166.3218f, 47.3376f };
			break;
	
		case 2:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 2019068959;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1229.7979f, -2101.0017f, 57.1906f };
			break;
	
		case 3:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 1010504677;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1036.5808f, -2147.274f, 43.912f };
			break;
	
		case 4:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 1297331734;
			panParam0->f_20[0] = joaat("Dusk");
			panParam0->f_27 = 8;
			panParam0->f_11 = { 1190.8431f, -2218.737f, 57.2836f };
			break;
	
		case 5:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 980309385;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
	
		case 6:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 1451396569;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 1632.4163f, -616.6262f, 42.8678f };
			break;
	
		case 7:
			func_179(panParam0, iParam1);
			panParam0->f_5 = -1404978858;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2127.6238f, -907.4355f, 40.6492f };
			break;
	
		case 8:
			func_179(panParam0, iParam1);
			panParam0->f_5 = -1173302028;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2023.6965f, -1017.1588f, 42.3998f };
			break;
	
		case 9:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 2143543387;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 18;
			panParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
	
		case 10:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 1187325752;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 2183.5396f, -213.3573f, 45.5331f };
			break;
	
		case 11:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 201273773;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 16;
			panParam0->f_11 = { 2185.6724f, -43.506f, 52.2188f };
			break;
	
		case 12:
			func_179(panParam0, iParam1);
			panParam0->f_5 = 36249089;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
	
		case 13:
			func_179(panParam0, iParam1);
			panParam0->f_5 = -1717449488;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 16;
			panParam0->f_11 = { 1832.4199f, -317.352f, 45.708f };
			break;
	
		case 14:
			func_179(panParam0, iParam1);
			panParam0->f_5 = -2014041707;
			panParam0->f_20[0] = joaat("Night");
			panParam0->f_27 = 2;
			panParam0->f_11 = { 1876.5323f, -453.5455f, 43.2695f };
			break;
	}

	return;
}

void func_89(Any* panParam0, int iParam1) // Position - 0x5890 Hash - 0xA6BC0DDA ^0xF0B31598
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 6;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = 29257535;
	func_166(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dusk");
		panParam0->f_27 = 0;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 9;
	}

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			panParam0->f_5 = -813726569;
			panParam0->f_11 = { -2685.8171f, -2697.8298f, 71.8905f };
			break;
	
		case 1:
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			panParam0->f_5 = -991070207;
			panParam0->f_11 = { -2841.4717f, -2845.1875f, 86.3463f };
			break;
	
		case 2:
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			panParam0->f_5 = 1385332783;
			panParam0->f_11 = { -3043.8962f, -2154.732f, 59.9256f };
			break;
	
		case 3:
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			panParam0->f_5 = 1394180521;
			panParam0->f_11 = { -2653.5857f, -2143.5112f, 75.962f };
			break;
	
		case 4:
			func_168(panParam0, 3);
			func_168(panParam0, 4);
			func_168(panParam0, 5);
			panParam0->f_5 = -1581141590;
			panParam0->f_11 = { -3228.7905f, -2434.5234f, 26.6737f };
			break;
	
		case 5:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			panParam0->f_5 = 1300807189;
			panParam0->f_11 = { -1177.5936f, -748.8547f, 67.811f };
			break;
	
		case 6:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			panParam0->f_5 = -1226288496;
			panParam0->f_11 = { -1735.6862f, -628.3361f, 145.1246f };
			break;
	
		case 7:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			panParam0->f_5 = -566411244;
			panParam0->f_11 = { -1572.9393f, -328.771f, 160.6099f };
			break;
	
		case 8:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			panParam0->f_5 = 1931184426;
			panParam0->f_11 = { -1463.6456f, -481.3466f, 129.9887f };
			break;
	
		case 9:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			panParam0->f_5 = 432310963;
			panParam0->f_11 = { -1525.9829f, -916.2361f, 88.1698f };
			break;
	}

	return;
}

void func_90(Any* panParam0, int iParam1) // Position - 0x5B67 Hash - 0xF6F1E06F ^0xB7B9575E
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 20;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -463663296;

	if (iParam1 < 10)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 57;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Dawn");
		panParam0->f_27 = 57;
	}

	switch (iParam1)
	{
		case 0:
			func_180(panParam0, iParam1);
			panParam0->f_5 = 439376203;
			panParam0->f_11 = { 1200.3378f, -568.1477f, 67.3878f };
			break;
	
		case 1:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -862568936;
			panParam0->f_11 = { 1238.1017f, -546.7609f, 66.5485f };
			break;
	
		case 2:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -1361247578;
			panParam0->f_11 = { 1294.0115f, -627.1522f, 58.9807f };
			break;
	
		case 3:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -518330591;
			panParam0->f_11 = { 1330.1124f, -709.0779f, 64.7788f };
			break;
	
		case 4:
			func_180(panParam0, iParam1);
			panParam0->f_5 = 1666706329;
			panParam0->f_11 = { 1174.0096f, -520.5736f, 69.0551f };
			break;
	
		case 5:
			func_180(panParam0, iParam1);
			panParam0->f_5 = 618479763;
			panParam0->f_11 = { 627.306f, -1038.2047f, 42.0511f };
			break;
	
		case 6:
			func_180(panParam0, iParam1);
			panParam0->f_5 = 916579356;
			panParam0->f_11 = { 675.5718f, -1121.4354f, 50.7543f };
			break;
	
		case 7:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -1544831314;
			panParam0->f_11 = { 799.3545f, -1190.9348f, 42.9927f };
			break;
	
		case 8:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -1524645610;
			panParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
	
		case 9:
			func_180(panParam0, iParam1);
			panParam0->f_5 = 5765001;
			panParam0->f_11 = { 745.8436f, -1119.9094f, 55.5229f };
			break;
	
		case 10:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -147337997;
			panParam0->f_11 = { -963.4839f, 2238.2976f, 342.2684f };
			break;
	
		case 11:
			func_180(panParam0, iParam1);
			panParam0->f_5 = 46195721;
			panParam0->f_11 = { -1100.6395f, 2080.9211f, 365.7759f };
			break;
	
		case 12:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -41952889;
			panParam0->f_11 = { -1209.4318f, 2421.6323f, 309.8767f };
			break;
	
		case 13:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -280740592;
			panParam0->f_11 = { -1280.9374f, 2445.1343f, 305.019f };
			break;
	
		case 14:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -636874084;
			panParam0->f_11 = { -1340.4723f, 2298.7341f, 308.7317f };
			break;
	
		case 15:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -1240479072;
			panParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
	
		case 16:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -1479922155;
			panParam0->f_11 = { -1329.4703f, 2266.8655f, 309.1315f };
			break;
	
		case 17:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -1836252261;
			panParam0->f_11 = { -1202.5902f, 2191.1006f, 333.5445f };
			break;
	
		case 18:
			func_180(panParam0, iParam1);
			panParam0->f_5 = -2075236578;
			panParam0->f_11 = { -1171.6855f, 2299.1843f, 323.3623f };
			break;
	
		case 19:
			func_180(panParam0, iParam1);
			panParam0->f_5 = 1074322888;
			panParam0->f_11 = { -1394.3943f, 2394.8376f, 308.3089f };
			break;
	}

	return;
}

void func_91(Any* panParam0, int iParam1) // Position - 0x5F8D Hash - 0x86330382 ^0x7B39CD1B
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 10;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -2109368060;
	func_166(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 0;
	}

	switch (iParam1)
	{
		case 0:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = 1070019252;
			panParam0->f_11 = { 2876.5347f, 2181.4087f, 156.7777f };
			break;
	
		case 1:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = -510012600;
			panParam0->f_11 = { 2808.3577f, 2290.3066f, 155.8015f };
			break;
	
		case 2:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = -250768090;
			panParam0->f_11 = { 2324.25f, 2143.9644f, 211.2929f };
			break;
	
		case 3:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = 1057891329;
			panParam0->f_11 = { 2876.5347f, 2181.4087f, 156.7777f };
			break;
	
		case 4:
			func_168(panParam0, 2);
			func_168(panParam0, 3);
			panParam0->f_5 = 863129034;
			panParam0->f_11 = { 2489.669f, 2265.4365f, 175.6015f };
			break;
	
		case 5:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = -1100103111;
			panParam0->f_11 = { -957.019f, 1550.1614f, 237.4414f };
			break;
	
		case 6:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = -383805560;
			panParam0->f_11 = { -1023.7738f, 1561.6144f, 237.4295f };
			break;
	
		case 7:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			panParam0->f_5 = -233104073;
			panParam0->f_11 = { -986.7993f, 1636.2957f, 237.4295f };
			break;
	
		case 8:
			func_168(panParam0, 1);
			panParam0->f_5 = -604353467;
			panParam0->f_11 = { -874.8361f, 1499.4232f, 245.7041f };
			break;
	
		case 9:
			func_168(panParam0, 1);
			panParam0->f_5 = 1641665016;
			panParam0->f_11 = { -919.2281f, 1482.4799f, 245.1043f };
			break;
	}

	return;
}

void func_92(Any* panParam0, int iParam1) // Position - 0x61F8 Hash - 0xABB2F709 ^0xE9EA011C
{
	panParam0->f_6 = 1;
	panParam0->f_7 = 2;
	*panParam0 = 25;
	panParam0->f_1 = 4;
	panParam0->f_2 = 1;
	panParam0->f_28[0] = -646307557;

	if (iParam1 < 10)
	{
		panParam0->f_20[0] = joaat("Dusk");
		panParam0->f_20[1] = joaat("Night");
		panParam0->f_27 = 18;
	}
	else
	{
		panParam0->f_20[0] = joaat("Night");
		panParam0->f_27 = 57;
	}

	switch (iParam1)
	{
		case 0:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -1895828765;
			panParam0->f_11 = { 1649.5977f, 1335.1406f, 144.8913f };
			break;
	
		case 1:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1786489311;
			panParam0->f_11 = { 1711.2482f, 1464.3175f, 146.3869f };
			break;
	
		case 2:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1548029298;
			panParam0->f_11 = { 1569.2794f, 1372.5167f, 145.0414f };
			break;
	
		case 3:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -718766281;
			panParam0->f_11 = { 1427.0967f, 1701.4105f, 197.8922f };
			break;
	
		case 4:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -1212595111;
			panParam0->f_11 = { 1593.9575f, 1646.358f, 143.5214f };
			break;
	
		case 5:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -1283376151;
			panParam0->f_11 = { 1694.9733f, 1740.2335f, 188.4962f };
			break;
	
		case 6:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -1525768444;
			panParam0->f_11 = { 1487.9932f, 1066.912f, 182.3846f };
			break;
	
		case 7:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 249590434;
			panParam0->f_11 = { 1401.9225f, 1325.5527f, 163.9692f };
			break;
	
		case 8:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 9885199;
			panParam0->f_11 = { 1812.5867f, 1193.9237f, 215.9388f };
			break;
	
		case 9:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1343123829;
			panParam0->f_11 = { 1940.4858f, 1389.0662f, 177.8712f };
			break;
	
		case 10:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -2039750752;
			panParam0->f_11 = { 127.6135f, 1824.7876f, 199.2989f };
			break;
	
		case 11:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -2028740368;
			panParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
	
		case 12:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1508771493;
			panParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
	
		case 13:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1820404683;
			panParam0->f_11 = { 185.3962f, 1824.2019f, 200.2588f };
			break;
	
		case 14:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1332736425;
			panParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
	
		case 15:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 536875722;
			panParam0->f_11 = { 239.17f, 1914.0143f, 204.8216f };
			break;
	
		case 16:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 795259287;
			panParam0->f_11 = { 512.8569f, 1926.0737f, 199.1983f };
			break;
	
		case 17:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 20501824;
			panParam0->f_11 = { 325.2433f, 1902.0831f, 200.069f };
			break;
	
		case 18:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 320272636;
			panParam0->f_11 = { 360.4333f, 1843.8536f, 185.1447f };
			break;
	
		case 19:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1135434088;
			panParam0->f_11 = { 506.2105f, 1883.9572f, 201.9437f };
			break;
	
		case 20:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 1976647087;
			panParam0->f_11 = { 253.8551f, 1705.4384f, 187.3591f };
			break;
	
		case 21:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -2028969939;
			panParam0->f_11 = { 320.4962f, 1736.1595f, 192.2878f };
			break;
	
		case 22:
			func_181(panParam0, iParam1);
			panParam0->f_5 = 2065778767;
			panParam0->f_11 = { -29.8717f, 1716.4124f, 179.3378f };
			break;
	
		case 23:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -1385354006;
			panParam0->f_11 = { -20.6945f, 1632.4878f, 162.0277f };
			break;
	
		case 24:
			func_181(panParam0, iParam1);
			panParam0->f_5 = -1602546938;
			panParam0->f_11 = { 480.1275f, 2070.2236f, 235.143f };
			break;
	}

	return;
}

void func_93(Any* panParam0, int iParam1, int iParam2) // Position - 0x66FD Hash - 0x5C25DC38 ^0xB5972818
{
	BOOL flag;

	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 3;
	panParam0->f_2 = 2;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = -196458416;
	flag = iParam1 >= 5;

	if (!flag)
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_27 = 1;
	}
	else
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_27 = 1;
	}

	func_182(panParam0, iParam1, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -1725684832;
			panParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
	
		case 1:
			panParam0->f_5 = -1992129571;
			panParam0->f_11 = { 477.293f, -270.40164f, 143.05318f };
			break;
	
		case 2:
			panParam0->f_5 = 2064181094;
			panParam0->f_11 = { 178.33774f, -192.74625f, 126.56092f };
			break;
	
		case 3:
			panParam0->f_5 = 1983503816;
			panParam0->f_11 = { -138.12213f, -21.41103f, 95.08842f };
			break;
	
		case 4:
			panParam0->f_5 = 1603580030;
			panParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
	
		case 5:
			panParam0->f_5 = 1591141935;
			panParam0->f_11 = { -2105.9136f, -1658.8076f, 139.23032f };
			break;
	
		case 6:
			panParam0->f_5 = 1382010177;
			panParam0->f_11 = { -2322.8457f, -1606.9253f, 147.5517f };
			break;
	
		case 7:
			panParam0->f_5 = -1315566672;
			panParam0->f_11 = { -2327.0935f, -1401.0499f, 142.41951f };
			break;
	
		case 8:
			panParam0->f_5 = 395106204;
			panParam0->f_11 = { -2004.4985f, -1326.4708f, 115.41615f };
			break;
	
		case 9:
			panParam0->f_5 = 88814361;
			panParam0->f_11 = { -2532.945f, -1409.8516f, 145.39828f };
			break;
	}

	return;
}

void func_94(Any* panParam0, int iParam1, int iParam2) // Position - 0x68F3 Hash - 0xED6232B3 ^0x7602ADAD
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 3;
	panParam0->f_2 = 2;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = 970130440;

	if (iParam1 < 5)
	{
		panParam0->f_20[0] = joaat("Dawn");
		panParam0->f_20[1] = joaat("DAY");
		panParam0->f_27 = 57;
	}
	else
	{
		panParam0->f_20[0] = joaat("DAY");
		panParam0->f_20[1] = joaat("Dusk");
		panParam0->f_27 = 57;
	}

	func_183(panParam0, iParam1, iParam2);

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -44146172;
			panParam0->f_11 = { -4886.7227f, -3659.6113f, 23.51921f };
			break;
	
		case 1:
			panParam0->f_5 = -1882192159;
			panParam0->f_11 = { -3706.045f, -3561.4067f, 47.211f };
			break;
	
		case 2:
			panParam0->f_5 = -1446495535;
			panParam0->f_11 = { -3997.8872f, -3743.6997f, 39.394f };
			break;
	
		case 3:
			panParam0->f_5 = -1153835596;
			panParam0->f_11 = { -4533.075f, -3761.2876f, 13.8127f };
			break;
	
		case 4:
			panParam0->f_5 = 345870470;
			panParam0->f_11 = { -4165.4634f, -3614.1619f, 49.5309f };
			break;
	
		case 5:
			panParam0->f_5 = -1885586340;
			panParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
	
		case 6:
			panParam0->f_5 = 1366147128;
			panParam0->f_11 = { 1879.3193f, 2050.4155f, 269.9333f };
			break;
	
		case 7:
			panParam0->f_5 = 1740369108;
			panParam0->f_11 = { 1522.469f, 2192.8547f, 333.81f };
			break;
	
		case 8:
			panParam0->f_5 = -416486532;
			panParam0->f_11 = { 693.7542f, 2222.7292f, 222.769f };
			break;
	
		case 9:
			panParam0->f_5 = -1184690199;
			panParam0->f_11 = { 756.6907f, 2034.3179f, 266.4209f };
			break;
	}

	return;
}

void func_95(Any* panParam0, int iParam1) // Position - 0x6AFD Hash - 0x4AED8B64 ^0x796FDF1A
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;
	panParam0->f_7 = 2;
	panParam0->f_28[0] = -405566878;
	func_166(panParam0);

	if (iParam1 < 5)
	{
		panParam0->f_27 = 24;
		panParam0->f_20[0] = joaat("6_TO_18");
	}
	else
	{
		panParam0->f_27 = 24;
		panParam0->f_20[0] = joaat("18_TO_0");
		panParam0->f_20[1] = joaat("22_TO_4");
	}

	switch (iParam1)
	{
		case 0:
			panParam0->f_5 = -145880949;
			panParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_168(panParam0, 0);
			break;
	
		case 1:
			panParam0->f_5 = 1765108824;
			panParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_168(panParam0, 0);
			break;
	
		case 2:
			panParam0->f_5 = 1620892455;
			panParam0->f_11 = { -142.6579f, 1231.1278f, 164.5134f };
			func_168(panParam0, 0);
			break;
	
		case 3:
			panParam0->f_5 = 1380531840;
			panParam0->f_11 = { 411.3364f, 1329.0742f, 180.39f };
			func_168(panParam0, 0);
			break;
	
		case 4:
			panParam0->f_5 = -1542790654;
			panParam0->f_11 = { 473.7581f, 1011.3758f, 173.0766f };
			func_168(panParam0, 0);
			break;
	
		case 5:
			panParam0->f_5 = -1733556405;
			panParam0->f_11 = { -4209.333f, -2677.5925f, 5.4303f };
			func_168(panParam0, 1);
			break;
	
		case 6:
			panParam0->f_5 = -478503693;
			panParam0->f_11 = { -4260.6167f, -2412.103f, 23.6335f };
			func_168(panParam0, 1);
			break;
	
		case 7:
			panParam0->f_5 = -156122271;
			panParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_168(panParam0, 1);
			break;
	
		case 8:
			panParam0->f_5 = 1073468916;
			panParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_168(panParam0, 1);
			break;
	
		case 9:
			panParam0->f_5 = -249481152;
			panParam0->f_11 = { -4104.4595f, -2061.2197f, 4.8147f };
			func_168(panParam0, 1);
			break;
	}

	return;
}

void func_96(Any* panParam0, int iParam1) // Position - 0x6D3D Hash - 0xD5E845EB ^0xFE3B297D
{
	panParam0->f_6 = 1;
	*panParam0 = 11;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			panParam0->f_11 = { -2586.9229f, -264.5349f, 161.6671f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			panParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			panParam0->f_11 = { -2196.5764f, 468.8412f, 119.5676f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			panParam0->f_11 = { -1637.2004f, -1513.2339f, 82.6688f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			panParam0->f_11 = { -825.3087f, -1804.9507f, 59.0313f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			panParam0->f_11 = { 1786.9149f, 1588.926f, 167.4663f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			panParam0->f_11 = { 1959.8942f, 1387.2507f, 179.786f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			panParam0->f_11 = { 637.5925f, 2099.4553f, 222.0308f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			panParam0->f_11 = { 1296.321f, 1161.6852f, 150.1379f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = 2107537913;
			panParam0->f_11 = { -2100.2473f, -1372.8866f, 127.74232f };
			break;
	
		case 10:
			func_167(panParam0);
			panParam0->f_5 = -1477292384;
			panParam0->f_11 = { -2205.0159f, -1584.1448f, 148.39436f };
			break;
	}

	return;
}

void func_97(Any* panParam0, int iParam1) // Position - 0x6F56 Hash - 0xEF8140EB ^0xDE574DE1
{
	panParam0->f_6 = 1;
	*panParam0 = 10;
	panParam0->f_1 = 1;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = -274965770;
			panParam0->f_11 = { -1109.7175f, 2104.703f, 361.4368f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = 1652259747;
			panParam0->f_11 = { -4300.761f, -3445.6018f, 33.26603f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = -743720569;
			panParam0->f_11 = { -3895.4612f, -2492.511f, -11.57848f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = -1200331578;
			panParam0->f_11 = { -2190.5076f, -2867.2227f, 25.40727f };
			break;
	
		case 4:
			func_167(panParam0);
			panParam0->f_5 = -1026512984;
			panParam0->f_11 = { -2083.8928f, -1412.5518f, 131.8581f };
			break;
	
		case 5:
			func_167(panParam0);
			panParam0->f_5 = -1017773316;
			panParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
	
		case 6:
			func_167(panParam0);
			panParam0->f_5 = 303940131;
			panParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
	
		case 7:
			func_167(panParam0);
			panParam0->f_5 = 1273284251;
			panParam0->f_11 = { 1548.0837f, 1355.0973f, 146.0557f };
			break;
	
		case 8:
			func_167(panParam0);
			panParam0->f_5 = -950817569;
			panParam0->f_11 = { 2652.989f, 1189.5033f, 118.7033f };
			break;
	
		case 9:
			func_167(panParam0);
			panParam0->f_5 = -910888222;
			panParam0->f_11 = { 1509.1018f, -2101.4487f, 45.3134f };
			break;
	}

	return;
}

void func_98(Any* panParam0, int iParam1) // Position - 0x7142 Hash - 0x1DCDF585 ^0xB467924F
{
	panParam0->f_6 = 1;
	*panParam0 = 7;
	panParam0->f_1 = 3;
	panParam0->f_2 = 1;
	func_166(panParam0);

	switch (iParam1)
	{
		case 0:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			panParam0->f_11 = { -1499.3971f, -553.9472f, 131.81976f };
			break;
	
		case 1:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			panParam0->f_11 = { -1760.5497f, 268.62433f, 118.69484f };
			break;
	
		case 2:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			panParam0->f_11 = { -2762.128f, -158.04846f, 150.8974f };
			break;
	
		case 3:
			func_167(panParam0);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			panParam0->f_11 = { -719.5702f, -756.90515f, 49.81378f };
			break;
	
		case 4:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			panParam0->f_11 = { 951.5258f, -1248.3708f, 53.86922f };
			break;
	
		case 5:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			panParam0->f_11 = { 1088.2909f, -1418.5994f, 55.54557f };
			break;
	
		case 6:
			func_168(panParam0, 0);
			func_168(panParam0, 2);
			panParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			panParam0->f_11 = { 1289.6934f, -1603.7043f, 64.23989f };
			break;
	}

	return;
}

void func_99(Any* panParam0, int iParam1) // Position - 0x72BE Hash - 0xB0A50286 ^0x79D650A0
{
	panParam0->f_6 = 1;
	*panParam0 = 8;
	panParam0->f_1 = 2;
	panParam0->f_2 = 1;

	switch (iParam1)
	{
		case 0:
			func_184(panParam0, iParam1);
			panParam0->f_5 = -418287183;
			panParam0->f_11 = { -2081.231f, -2774.5967f, 77.5683f };
			break;
	
		case 1:
			func_184(panParam0, iParam1);
			panParam0->f_5 = -1127015115;
			panParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
	
		case 2:
			func_184(panParam0, iParam1);
			panParam0->f_5 = -1853700459;
			panParam0->f_11 = { -2925.0168f, -2769.882f, 95.6414f };
			break;
	
		case 3:
			func_184(panParam0, iParam1);
			panParam0->f_5 = 529883832;
			panParam0->f_11 = { -2648.38f, -2977.7717f, 76.4237f };
			break;
	
		case 4:
			func_184(panParam0, iParam1);
			panParam0->f_5 = -204230900;
			panParam0->f_11 = { -2323.9211f, -2074.8455f, 88.1254f };
			break;
	
		case 5:
			func_184(panParam0, iParam1);
			panParam0->f_5 = -1938530367;
			panParam0->f_11 = { -3455.5781f, -2264.6997f, 4.7142f };
			break;
	
		case 6:
			func_184(panParam0, iParam1);
			panParam0->f_5 = 1968802033;
			panParam0->f_11 = { -3581.2175f, -3650.8904f, -12.8679f };
			break;
	
		case 7:
			func_184(panParam0, iParam1);
			panParam0->f_5 = -2098551789;
			panParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}

	return;
}

void func_100(Any* panParam0, int iParam1, int iParam2) // Position - 0x745A Hash - 0x398660A6 ^0xD8BB78E3
{
	int num;

	switch (iParam1)
	{
		case 35:
			panParam0->f_8 = joaat("hideout");
			break;
	
		case 36:
			panParam0->f_8 = joaat("DYNAMIC_AMBUSH");
			break;
	
		case 37:
			panParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
			break;
	
		case 38:
			panParam0->f_8 = joaat("DYNAMIC_ESCORT");
			break;
	
		case 39:
			panParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
			break;
	
		case 40:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
			break;
	
		case 41:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
			break;
	
		case 42:
			panParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
			break;
	
		case 43:
			panParam0->f_8 = 362795228;
			break;
	
		case 44:
			panParam0->f_8 = -2096602762;
			break;
	
		case 45:
			panParam0->f_8 = -1812122325;
			break;
	
		case 46:
			panParam0->f_8 = 918897273;
			break;
	}

	num = func_185(iParam1);

	if (num == -1)
		return;

	if (iParam1 == 41 || iParam1 == 42 || iParam1 == 40)
		panParam0->f_7 = 1;
	else if (iParam1 == 43)
		panParam0->f_7 = 2;
	else if (iParam1 == 44)
		panParam0->f_7 = 3;
	else if (iParam1 == 45 || iParam1 == 46)
		panParam0->f_7 = 4;

	*panParam0 = func_186(num);
	panParam0->f_1 = 0;
	panParam0->f_6 = 2;
	func_171(panParam0, 32);

	if (iParam2 != -1)
	{
		panParam0->f_9 = func_188(func_187(num), iParam2);
		panParam0->f_15[0] = func_189(func_187(num), iParam2);
		panParam0->f_5 = func_190(num, iParam2);
		panParam0->f_11 = { func_191(num, iParam2) };
	}

	return;
}

int func_101(int iParam0) // Position - 0x760D Hash - 0xE34A477A ^0xE34A477A
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

int func_102(var uParam0, var uParam1, int iParam2) // Position - 0x76A3 Hash - 0x3B53E80C ^0x3B53E80C
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

struct<2> func_103() // Position - 0x76F8 Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_104(int iParam0) // Position - 0x7711 Hash - 0x5000025C ^0x5000025C
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

BOOL func_105(var uParam0, int iParam1) // Position - 0x7750 Hash - 0xBD0B8CC9 ^0x46EB929E
{
	return func_192(uParam0->f_25, iParam1);
}

void func_106(int iParam0) // Position - 0x7762 Hash - 0x74B49122 ^0x74B49122
{
	if (iLocal_0 != iParam0)
		iLocal_0 = iParam0;

	return;
}

int func_107(Player plParam0) // Position - 0x7775 Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

void func_108(int iParam0) // Position - 0x77A5 Hash - 0xB0C5BEDC ^0xAB108423
{
	if (!func_116(iParam0))
		func_193(&(iLocal_0.f_1), iParam0);

	return;
}

BOOL func_109(int iParam0) // Position - 0x77C1 Hash - 0xB67AACE8 ^0xDE4546F5
{
	if (!func_162(iParam0))
		return false;

	return func_194(iParam0) && Global_1141332[iParam0 /*27*/].f_18.f_1 != 0;
}

void func_110(int iParam0) // Position - 0x77F0 Hash - 0xD7DCD8BA ^0x2E43169E
{
	if (iLocal_0.f_2 != iParam0)
		iLocal_0.f_2 = iParam0;

	return;
}

BOOL func_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31) // Position - 0x7807 Hash - 0xAF335E8 ^0xFFD14D22
{
	int volumeLockRequestStatus;
	var args;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iLocal_0.f_3.f_1))
		return true;

	if (_IS_NULL_VECTOR(uLocal_107.f_15))
	{
		*uParam31 = 1;
		return false;
	}

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iLocal_0.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(uLocal_107.f_15, uParam0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
	
		func_196(&args, uParam0);
		iLocal_0.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args);
		func_132(128);
	}
	else if (!func_115(128, 255))
	{
		iLocal_0.f_3.f_1 = func_197(uParam0);
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iLocal_0.f_3.f_1))
			return true;
	
		return false;
	}

	volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iLocal_0.f_3);

	switch (volumeLockRequestStatus)
	{
		case 3:
			iLocal_0.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(iLocal_0.f_3);
			return true;
	
		case 4:
			iLocal_0.f_3 = 0;
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_112(int iParam0) // Position - 0x78EB Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

void func_113(int iParam0) // Position - 0x78F7 Hash - 0x610FC0B7 ^0x444F5A7F
{
	*iParam0 = Global_1295666.f_16;
	return;
}

int func_114(var uParam0) // Position - 0x7908 Hash - 0x30429530 ^0xDB3DB7A7
{
	return (Global_1295666.f_16 - uParam0) * 1000;
}

BOOL func_115(int iParam0, int iParam1) // Position - 0x791C Hash - 0x6A2DFBEC ^0x6A2DFBEC
{
	if (iParam1 == 255)
		if (!func_198(&iParam1))
			return false;

	return func_161(uLocal_10[iParam1 /*3*/], iParam0);
}

BOOL func_116(int iParam0) // Position - 0x7945 Hash - 0x64046C13 ^0xCC733BD5
{
	return func_161(iLocal_0.f_1, iParam0);
}

BOOL func_117() // Position - 0x7957 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_118() // Position - 0x7960 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_119() // Position - 0x7968 Hash - 0x750ED7B3 ^0xBCBD7243
{
	BOOL num;
	BOOL flag;
	int i;

	num = 1;
	flag = 0;

	for (i = 0; i <= 0; i = i + 1)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_0.f_7.f_1[i]))
		{
			if (func_199(i, &flag) || flag)
			{
				num = 0;
				break;
			}
		}
	
		if (i == 0)
		{
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(NETWORK::NET_TO_ENT(iLocal_0.f_7.f_1[i]), false);
			ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(iLocal_0.f_7.f_1[i]), true);
		}
	}

	if (flag)
		func_200();

	return num;
}

BOOL func_120() // Position - 0x79EB Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_121() // Position - 0x79F4 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_122() // Position - 0x79FC Hash - 0x4F7FD146 ^0x4F7FD146
{
	if (!func_116(32) && func_201(32))
		func_108(32);

	if (!func_116(64) && func_201(64))
		func_108(64);

	if (!func_116(16) && func_202(16))
		func_108(16);

	if (!func_116(2048) && func_201(2048) && !func_201(4096))
		func_108(2048);

	return;
}

void func_123() // Position - 0x7A80 Hash - 0x25FEB3FC ^0xD0916694
{
	BOOL flag;

	if (!flag && func_116(16))
	{
		func_110(1);
		return;
	}

	if (func_116(2048) && !func_201(4096))
	{
		func_110(6);
		return;
	}

	return;
}

void func_124() // Position - 0x7AC0 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_125() // Position - 0x7AC8 Hash - 0x88F3A557 ^0x5AF41650
{
	if (func_203())
		return true;

	switch (iLocal_0.f_7)
	{
		case 0:
			func_204();
			break;
	
		case 1:
			func_205();
			break;
	
		case 2:
			func_206();
			break;
	}

	return false;
}

void func_126() // Position - 0x7B0D Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_127() // Position - 0x7B15 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_128(int iParam0) // Position - 0x7B1E Hash - 0xB52EC81F ^0x2315A31F
{
	if (func_60(iParam0))
		func_207(&(uLocal_107.f_7), iParam0);

	return;
}

int func_129(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7B39 Hash - 0xB64A09F6 ^0x8051F65A
{
	int num;
	Player player;

	if (!func_162(iParam0))
		return 0;

	num = func_208(iParam0);

	if (num != 0)
		return 0;

	player = PLAYER::PLAYER_ID();
	Global_1144526[player /*83*/].f_70 = iParam0;
	Global_1144526[player /*83*/].f_70.f_2 = iParam1;

	if (bParam2)
		func_209(&(Global_1144526[player /*83*/].f_70.f_1), 1);
	else
		func_210(&(Global_1144526[player /*83*/].f_70.f_1), 1);

	return 1;
}

void func_130(int iParam0) // Position - 0x7BAC Hash - 0xB0C5BEDC ^0xFDDE8DED
{
	if (!func_60(iParam0))
		func_193(&(uLocal_107.f_7), iParam0);

	return;
}

void func_131(int iParam0) // Position - 0x7BC8 Hash - 0x444DD50B ^0xF0828F99
{
	if (func_161(uLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0))
		func_207(&uLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);

	return;
}

void func_132(int iParam0) // Position - 0x7BEF Hash - 0x304EAF83 ^0xD3F2CD0C
{
	if (!func_115(iParam0, 255))
		func_193(&uLocal_10[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], iParam0);

	return;
}

void func_133() // Position - 0x7C11 Hash - 0xA7DC39D0 ^0xFBA08A71
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -1315570756:
				func_212(i);
				break;
		
			case -507840394:
				func_211(i);
				break;
		
			default:
				break;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		func_213(i);
	}

	return;
}

void func_134(int iParam0) // Position - 0x7C7D Hash - 0xD7DCD8BA ^0xFE02FF9C
{
	if (uLocal_107.f_8 != iParam0)
		uLocal_107.f_8 = iParam0;

	return;
}

BOOL func_135() // Position - 0x7C94 Hash - 0x7057FE28 ^0x86C9F2CD
{
	char* textDatabase;
	BOOL num;
	int i;

	textDatabase = "EXPL";
	num = 1;

	if (HUD::_DOES_TEXT_BLOCK_EXIST(textDatabase))
	{
		HUD::TEXT_BLOCK_REQUEST(textDatabase);
	
		if (!HUD::TEXT_BLOCK_IS_LOADED(textDatabase))
			num = 0;
	}

	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_PLAYER_INSPECT_MAP_144CM_W48_8_H32_2_FoldVerticalHorizontal_s_twofoldmap01x"), 15, 0, 0);

	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_PLAYER_INSPECT_MAP_144CM_W48_8_H32_2_FoldVerticalHorizontal_s_twofoldmap01x"), false))
		num = 0;

	for (i = 0; i <= 0; i = i + 1)
	{
		if (!func_215(func_214(i)))
			num = 0;
	}

	return num;
}

BOOL func_136() // Position - 0x7D08 Hash - 0xBE1738DF ^0xBE1738DF
{
	BOOL flag;

	flag = false;
	return !flag;
}

void func_137(var uParam0) // Position - 0x7D16 Hash - 0x4918B04C ^0x4918B04C
{
	*uParam0 = 0;
	return;
}

void func_138() // Position - 0x7D22 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_139() // Position - 0x7D2A Hash - 0x565BD557 ^0xF2A597D1
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_107.f_19.f_4))
		uLocal_107.f_19.f_4 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_PLAYER_INSPECT_MAP_144CM_W48_8_H32_2_FoldVerticalHorizontal_s_twofoldmap01x"), uLocal_107.f_15, func_216(), 0, 0, false);

	return TASK::DOES_SCENARIO_POINT_EXIST(uLocal_107.f_19.f_4);
}

int func_140() // Position - 0x7D66 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_141(int iParam0) // Position - 0x7D6F Hash - 0x55A9A459 ^0x596B913E
{
	return (iParam0 - Global_1295666.f_16) * 1000;
}

void func_142() // Position - 0x7D83 Hash - 0xB8EB844 ^0xFA39799E
{
	if (!func_60(1))
	{
		func_217(uLocal_107.f_9);
		func_130(1);
	}

	return;
}

void func_143() // Position - 0x7DA3 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_144() // Position - 0x7DAB Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_145() // Position - 0x7DB3 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_146() // Position - 0x7DBB Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_147() // Position - 0x7DC3 Hash - 0x6F0CDEF2 ^0x91055B82
{
	float num;

	if (_IS_NULL_VECTOR(uLocal_107.f_15))
		return;

	if (func_218())
		return;

	if (func_219(uLocal_107.f_1, 600))
	{
		num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), uLocal_107.f_15);
	
		if (num < 200f)
		{
			func_132(4096);
		}
		else if (num < 400f)
		{
			func_131(4096);
			func_132(2048);
		}
		else
		{
			func_131(4096);
			func_131(2048);
		}
	}

	return;
}

void func_148() // Position - 0x7E4B Hash - 0x6C24F698 ^0x6C24F698
{
	func_220();
	func_221();
	return;
}

void func_149() // Position - 0x7E5B Hash - 0x22CE04F2 ^0x22CE04F2
{
	if (func_222())
		func_132(8);
	else
		func_131(8);

	return;
}

void func_150() // Position - 0x7E79 Hash - 0x5504BA30 ^0x94F44D39
{
	func_223();
	func_224(iLocal_0.f_7);

	switch (uLocal_107.f_19)
	{
		case 0:
			func_225();
			break;
	
		case 1:
			func_226();
			break;
	
		case 2:
			func_227();
			break;
	}

	return;
}

void func_151() // Position - 0x7EBE Hash - 0xE259483C ^0xE259483C
{
	if (!func_115(8, 255))
		func_132(16);
	else
		func_131(16);

	return;
}

void func_152() // Position - 0x7EE0 Hash - 0x56C85EEF ^0xDB20B4BA
{
	int i;

	uLocal_107.f_6 = -1;
	uLocal_107.f_5 = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)))
		{
			uLocal_107.f_5 = uLocal_107.f_5 || uLocal_10[i /*3*/];
			uLocal_107.f_6 = uLocal_107.f_6 && uLocal_10[i /*3*/];
		}
	}

	return;
}

void func_153() // Position - 0x7F30 Hash - 0xA87494A9 ^0xE91BB439
{
	if (func_60(1024) && !func_115(16384, 255) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_228(&Global_0, 1)))
		func_132(16384);

	return;
}

BOOL func_154() // Position - 0x7F70 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_155() // Position - 0x7F79 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_156(int iParam0, Player plParam1, int iParam2) // Position - 0x7F81 Hash - 0x7447117F ^0xA87E3C51
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return false;

	return MISC::IS_BIT_SET(Global_1217218[plParam1 /*72*/][iParam0], iParam2);
}

void func_157(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x7FA9 Hash - 0x8690D238 ^0x5893A35A
{
	int deedType;
	Hash deedHash;
	int data;
	char* contentId;

	deedType = func_230(func_229(uParam0));
	deedHash = func_231(uParam0);
	contentId = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_28() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		contentId = func_232(Global_265213.f_122484.f_80.f_22);
		func_233(uParam0, &data, iParam2);
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

void func_158(int iParam0, var uParam1) // Position - 0x8079 Hash - 0x4FB89636 ^0x4FB89636
{
	int num;

	num = func_234(iParam0, uParam1);

	if (num == -1)
		return;

	func_235(num);
	return;
}

void func_159(int iParam0, int iParam1) // Position - 0x809A Hash - 0x7C63E8C2 ^0x7C63E8C2
{
	func_113(&Global_1260806.f_3351[iParam0]);

	switch (iParam1)
	{
		case 0:
			Global_1260806.f_3357[iParam0] = func_236(iParam0);
			break;
	
		case 1:
			Global_1260806.f_3357[iParam0] = func_237(iParam0);
			break;
	
		case 2:
			Global_1260806.f_3357[iParam0] = func_238(iParam0);
			break;
	}

	return;
}

void func_160(int iParam0) // Position - 0x8107 Hash - 0xAB47FC1B ^0x275643FE
{
	var statId;
	int value;

	if (!func_18())
		return;

	if (iParam0 == 0)
		return;

	statId = { func_239(iParam0) };

	if (!STATS::STAT_ID_IS_VALID(&statId))
		return;

	value = Global_1295666.f_16;
	!STATS::STAT_ID_SET_INT(&statId, value, true);
	return;
}

BOOL func_161(int iParam0, int iParam1) // Position - 0x814F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_162(int iParam0) // Position - 0x815E Hash - 0xED5061BA ^0xED5061BA
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

BOOL func_163(var uParam0) // Position - 0x817D Hash - 0x5EFE183E ^0x62E9C2B9
{
	if (func_36(*uParam0))
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

int func_164(var uParam0, int iParam1) // Position - 0x81C1 Hash - 0x989AAD62 ^0x4D14C098
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int i;

	num = func_240(iParam1);
	num2 = (num + Global_1207480.f_3[iParam1]) - 1;

	if (Global_1207480.f_23[iParam1] != 0)
		num2 = (num + func_241(iParam1)) - 1;

	flag = func_36(*uParam0);
	flag2 = uParam0->f_2 != 0 && uParam0->f_3 != -1;
	flag3 = uParam0->f_2 != 0 && uParam0->f_4 != -1;
	flag4 = uParam0->f_2 != 0 && uParam0->f_5 != -1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (flag)
			if (func_21(Global_1207480.f_231[i /*15*/].f_5, *uParam0))
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

void func_165(Any* panParam0, int iParam1) // Position - 0x8320 Hash - 0x64CB2E0A ^0x64CB2E0A
{
	switch (iParam1)
	{
		case 0:
			func_242(panParam0);
			break;
	
		case 1:
			func_242(panParam0);
			break;
	
		case 2:
			func_242(panParam0);
			break;
	
		case 3:
			func_243(panParam0);
			break;
	
		case 4:
			func_242(panParam0);
			break;
	
		case 5:
			func_242(panParam0);
			break;
	
		case 6:
			func_243(panParam0);
			break;
	
		case 7:
			func_243(panParam0);
			break;
	
		case 8:
			func_243(panParam0);
			break;
	
		case 9:
			func_242(panParam0);
			break;
	
		default:
			func_167(panParam0);
			func_166(panParam0);
			break;
	}

	return;
}

void func_166(Any* panParam0) // Position - 0x83D5 Hash - 0x78864A5A ^0x4FF385C0
{
	int i;

	for (i = 0; i <= panParam0->f_2 - 1; i = i + 1)
	{
		func_244(panParam0, i);
	}

	return;
}

void func_167(Any* panParam0) // Position - 0x83FC Hash - 0x78864A5A ^0xDFA7B0B9
{
	int i;

	for (i = 0; i <= panParam0->f_1 - 1; i = i + 1)
	{
		func_168(panParam0, i);
	}

	return;
}

void func_168(Any* panParam0, int iParam1) // Position - 0x8423 Hash - 0x28B904D2 ^0xF2004430
{
	MISC::SET_BIT(&(panParam0->f_3), iParam1);
	return;
}

void func_169(Any* panParam0, int iParam1) // Position - 0x8435 Hash - 0xB53F75E2 ^0xB53F75E2
{
	switch (iParam1)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
			func_245(panParam0);
			break;
	
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_246(panParam0);
			break;
	
		default:
			func_167(panParam0);
			func_166(panParam0);
			break;
	}

	return;
}

void func_170(Any* panParam0, int iParam1) // Position - 0x84C6 Hash - 0x25B11912 ^0x25B11912
{
	switch (iParam1)
	{
		case 0:
			func_244(panParam0, 0);
			break;
	
		case 1:
		case 2:
			func_244(panParam0, 1);
			func_244(panParam0, 2);
			break;
	
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_244(panParam0, 0);
			func_244(panParam0, 2);
			break;
	
		case 8:
			func_244(panParam0, 1);
			break;
	
		case 9:
		case 10:
		case 11:
			func_244(panParam0, 1);
			break;
	
		default:
			func_166(panParam0);
			break;
	}

	return;
}

void func_171(Any* panParam0, int iParam1) // Position - 0x8567 Hash - 0xEDC3BD2D ^0x1CFE187F
{
	func_209(&(panParam0->f_25), iParam1);
	return;
}

void func_172(Any* panParam0, int iParam1) // Position - 0x8579 Hash - 0x216B8EF4 ^0x216B8EF4
{
	switch (iParam1)
	{
		case 0:
			func_247(panParam0);
			break;
	
		case 1:
			func_248(panParam0);
			break;
	
		case 2:
			func_249(panParam0);
			break;
	
		case 3:
			func_250(panParam0);
			break;
	
		default:
			func_167(panParam0);
			func_166(panParam0);
			break;
	}

	return;
}

Vector3 func_173(int iParam0) // Position - 0x85D4 Hash - 0xD853D669 ^0x22A7A43A
{
	if (!func_162(iParam0))
		return 0f, 0f, 0f;

	return Global_1141332[iParam0 /*27*/].f_20;
}

void func_174(Any* panParam0, int iParam1) // Position - 0x85F8 Hash - 0x5241576E ^0x5241576E
{
	switch (iParam1)
	{
		case 0:
			func_251(panParam0);
			break;
	
		case 1:
		case 2:
			func_252(panParam0);
			break;
	
		case 3:
		case 4:
			func_253(panParam0);
			break;
	
		default:
			func_166(panParam0);
			break;
	}

	func_167(panParam0);
	return;
}

void func_175(Any* panParam0, int iParam1) // Position - 0x8650 Hash - 0xF3EAC257 ^0xF3EAC257
{
	switch (iParam1)
	{
		case 0:
			func_244(panParam0, 0);
			func_244(panParam0, 2);
			break;
	
		case 1:
			func_244(panParam0, 1);
			func_244(panParam0, 3);
			break;
	
		default:
			func_167(panParam0);
			func_166(panParam0);
			break;
	}

	return;
}

void func_176(Any* panParam0, int iParam1) // Position - 0x869D Hash - 0x92F9B8BF ^0x92F9B8BF
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_168(panParam0, 2);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_168(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_168(panParam0, 0);
			break;
	
		default:
			func_168(panParam0, 0);
			break;
	}

	func_166(panParam0);
	return;
}

void func_177(Any* panParam0, int iParam1) // Position - 0x8735 Hash - 0x2EDBC20A ^0x2EDBC20A
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_168(panParam0, 0);
			break;
	
		case 4:
		case 5:
		case 6:
		case 7:
			func_168(panParam0, 1);
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_168(panParam0, 2);
			break;
	
		default:
			func_167(panParam0);
			break;
	}

	func_166(panParam0);
	return;
}

void func_178(Any* panParam0, int iParam1) // Position - 0x87C0 Hash - 0xA3CE3A80 ^0xA3CE3A80
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_168(panParam0, 0);
			func_244(panParam0, 1);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_168(panParam0, 1);
			func_244(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_168(panParam0, 2);
			func_244(panParam0, 1);
			break;
	
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_168(panParam0, 3);
			func_244(panParam0, 0);
			break;
	}

	return;
}

void func_179(Any* panParam0, int iParam1) // Position - 0x888C Hash - 0xCF7EC546 ^0xCF7EC546
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_168(panParam0, 0);
			func_244(panParam0, 0);
			break;
	
		case 2:
			func_168(panParam0, 1);
			func_244(panParam0, 0);
			break;
	
		case 3:
		case 4:
			func_168(panParam0, 2);
			func_244(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_168(panParam0, 3);
			func_244(panParam0, 1);
			break;
	
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_168(panParam0, 4);
			func_244(panParam0, 1);
			break;
	}

	return;
}

void func_180(Any* panParam0, int iParam1) // Position - 0x894B Hash - 0x25472C8B ^0x25472C8B
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_168(panParam0, 3);
			break;
	
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
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			break;
	
		default:
			func_167(panParam0);
			break;
	}

	func_166(panParam0);
	return;
}

void func_181(Any* panParam0, int iParam1) // Position - 0x8A04 Hash - 0x452D89DE ^0x452D89DE
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_168(panParam0, 3);
			break;
	
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			break;
	
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			break;
	
		default:
			func_167(panParam0);
			break;
	}

	func_166(panParam0);
	return;
}

void func_182(Any* panParam0, int iParam1, int iParam2) // Position - 0x8AEC Hash - 0x13E6A02D ^0x13E6A02D
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_244(panParam0, 0);
			func_168(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_244(panParam0, 1);
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			func_168(panParam0, 2);
			break;
	
		default:
			func_244(panParam0, 0);
			func_168(panParam0, 0);
			break;
	}

	return;
}

void func_183(Any* panParam0, int iParam1, int iParam2) // Position - 0x8B79 Hash - 0x6656963C ^0x6656963C
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_244(panParam0, 0);
			func_168(panParam0, 0);
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_244(panParam0, 1);
			func_168(panParam0, 0);
			func_168(panParam0, 1);
			break;
	
		default:
			func_244(panParam0, 0);
			func_168(panParam0, 0);
			break;
	}

	return;
}

void func_184(Any* panParam0, int iParam1) // Position - 0x8BFF Hash - 0x1EC8FF19 ^0x1EC8FF19
{
	switch (iParam1)
	{
		case 0:
			func_166(panParam0);
			func_167(panParam0);
			break;
	
		default:
			func_166(panParam0);
			func_167(panParam0);
			break;
	}

	return;
}

int func_185(int iParam0) // Position - 0x8C33 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1260806.f_3432[iParam0];
}

int func_186(int iParam0) // Position - 0x8C46 Hash - 0xEEAE9B95 ^0x7FE78BE2
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_3;
}

int func_187(int iParam0) // Position - 0x8C62 Hash - 0x2A0C2E1D ^0x2A0C2E1D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

var func_188(int iParam0, int iParam1) // Position - 0x8C7C Hash - 0x1B6EFA9A ^0x5BE8148D
{
	var unk;
	var unk2;

	if (func_254(&unk2, iParam0) && func_255(&unk2, iParam1))
		func_256(unk2, 1099008783, &unk, false);

	return unk;
}

int func_189(int iParam0, int iParam1) // Position - 0x8CAF Hash - 0xE159584F ^0x439F0C8B
{
	int num;
	var unk;

	num = 0;

	if (func_254(&unk, iParam0) && func_255(&unk, iParam1))
		func_256(unk, -1052341598, &num, false);

	return num;
}

int func_190(int iParam0, int iParam1) // Position - 0x8CE5 Hash - 0x36CC74E2 ^0x36CC74E2
{
	int num;

	if (iParam0 == -1)
		return 0;

	num = func_257(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/];
}

Vector3 func_191(int iParam0, int iParam1) // Position - 0x8D0C Hash - 0xF9603F7A ^0xA6B0FE66
{
	int num;

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	num = func_257(iParam0, iParam1);
	return Global_1245174.f_566[num /*7*/].f_3;
}

BOOL func_192(int iParam0, int iParam1) // Position - 0x8D39 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_193(var uParam0, int iParam1) // Position - 0x8D48 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_194(int iParam0) // Position - 0x8D59 Hash - 0x25DCF1DD ^0x25DCF1DD
{
	int num;

	if (!func_162(iParam0))
		return false;

	num = func_258(iParam0);
	return num != 0 && num != 3;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x8D84 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31) // Position - 0x8DAE Hash - 0x62ECB4F4 ^0x2CFE6E13
{
	*uParam0 = { uParam1.f_11 };
	uParam0->f_4 = uParam1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = uParam1.f_5;
	return;
}

int func_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x8DD9 Hash - 0x16922A3A ^0x8C239887
{
	var args;

	func_196(&args, uParam0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&args);
}

BOOL func_198(var uParam0) // Position - 0x8DF2 Hash - 0xC31DB6B4 ^0x672C8F1A
{
	*uParam0 = NETWORK::PARTICIPANT_ID_TO_INT();

	if (!func_259(*uParam0, true))
	{
		*uParam0 = 255;
		return false;
	}

	return true;
}

BOOL func_199(int iParam0, var uParam1) // Position - 0x8E17 Hash - 0x28151AF0 ^0x946C87B1
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return false;
	}

	if (!func_261(&iLocal_0.f_7.f_1[iParam0], func_214(iParam0), func_260(), true, 0))
	{
		*uParam1 = 1;
		return false;
	}

	return true;
}

void func_200() // Position - 0x8E57 Hash - 0x1DAA2713 ^0x1DAA2713
{
	func_110(2);
	return;
}

BOOL func_201(int iParam0) // Position - 0x8E64 Hash - 0x64046C13 ^0x26BBEA8A
{
	return func_161(uLocal_107.f_5, iParam0);
}

BOOL func_202(int iParam0) // Position - 0x8E76 Hash - 0x64046C13 ^0x4497EA7A
{
	return func_161(uLocal_107.f_6, iParam0);
}

BOOL func_203() // Position - 0x8E88 Hash - 0xBF2A68A5 ^0x8108D040
{
	if (iLocal_0.f_7 == 3)
		return true;

	return false;
}

void func_204() // Position - 0x8E9D Hash - 0xD68DA6F1 ^0xD68DA6F1
{
	if (func_218())
		func_262(1);

	return;
}

void func_205() // Position - 0x8EB1 Hash - 0xA6BAE3A3 ^0xA6BAE3A3
{
	if (func_263(1))
		func_262(2);

	return;
}

void func_206() // Position - 0x8EC6 Hash - 0x37C46B05 ^0x37C46B05
{
	if (func_264(2))
		func_262(3);

	return;
}

void func_207(var uParam0, int iParam1) // Position - 0x8EDB Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_208(int iParam0) // Position - 0x8EF0 Hash - 0xF5DE7102 ^0xEF1B597
{
	if (!func_162(iParam0))
		return 0;

	if (!func_194(iParam0))
		return 0;

	return Global_1141332[iParam0 /*27*/].f_18.f_1;
}

void func_209(var uParam0, int iParam1) // Position - 0x8F20 Hash - 0xF55E891F ^0xF55E891F
{
	func_265(uParam0, iParam1);
	return;
}

void func_210(var uParam0, int iParam1) // Position - 0x8F30 Hash - 0xF55E891F ^0xF55E891F
{
	func_266(uParam0, iParam1);
	return;
}

void func_211(int iParam0) // Position - 0x8F40 Hash - 0xBF352C9 ^0x15B4BD2C
{
	var unk;
	struct<4> eventData;

	unk.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 4);

	switch (eventData)
	{
		case 185:
			if (func_267(&unk, iParam0))
				func_268(&unk);
			break;
	
		default:
			break;
	}

	return;
}

void func_212(int iParam0) // Position - 0x8F82 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_213(int iParam0) // Position - 0x8F8A Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

Hash func_214(int iParam0) // Position - 0x8F92 Hash - 0xE65A3A10 ^0x8030B959
{
	switch (iParam0)
	{
		case 0:
			return joaat("p_lantern04x");
	
		default:
		
	}

	return 0;
}

BOOL func_215(Hash hParam0) // Position - 0x8FB1 Hash - 0x83DCC829 ^0x5CC61030
{
	if (hParam0 == 0)
		return true;

	STREAMING::REQUEST_MODEL(hParam0, false);
	return STREAMING::HAS_MODEL_LOADED(hParam0);
}

float func_216() // Position - 0x8FD0 Hash - 0x3D3B33CA ^0x7D1DDCC3
{
	switch (uLocal_107.f_2)
	{
		case 0:
			return -30.146f;
	
		case 1:
			return 73.5f;
	
		case 2:
			return -117.6f;
	
		case 3:
			return 90f;
	
		case 4:
			return -90f;
	
		case 5:
			return -90f;
	
		case 6:
			return -45f;
	
		case 7:
			return 180f;
	
		case 8:
			return 0f;
	
		case 9:
			return -90f;
	
		case 10:
			return 90f;
	
		case 11:
			return 90f;
	
		case 12:
			return 180f;
	
		case 13:
			return 180f;
	
		case 14:
			return -90f;
	
		case 15:
			return -90f;
	
		case 16:
			return 180f;
	
		case 17:
			return -73.7f;
	
		case 18:
			return -90f;
	
		case 19:
			return 180f;
	
		default:
		
	}

	return 0f;
}

void func_217(var uParam0, var uParam1) // Position - 0x90F7 Hash - 0xFD26CFB9 ^0xD8D48326
{
	if (func_231(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_231(uParam0)))
	{
		STATS::_0x99230691875FC218(func_229(uParam0), func_231(uParam0), Global_34);
	}

	return;
}

BOOL func_218() // Position - 0x913A Hash - 0xDFB16DF1 ^0xDFB16DF1
{
	return func_116(32) || func_115(32, 255);
}

BOOL func_219(int iParam0, int iParam1) // Position - 0x9155 Hash - 0x52162214 ^0xA031296E
{
	var statId;
	int num;

	if (iParam0 == 0)
		return false;

	statId = { func_269(iParam0, joaat("cooldown")) };

	if (!STATS::STAT_ID_GET_INT(&statId, &num))
		return false;

	if (num != 0 && Global_1295666.f_16 - num < iParam1)
		return true;

	return false;
}

void func_220() // Position - 0x91A3 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_221() // Position - 0x91AB Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_222() // Position - 0x91B3 Hash - 0xF7EA39D8 ^0x975CF9
{
	BOOL flag;

	flag = true;

	if (flag && !UNLOCK::UNLOCK_IS_UNLOCKED(uLocal_107.f_14))
		return false;

	if (func_270())
		return false;

	if (func_271(PLAYER::GET_PLAYER_INDEX()))
		return false;

	return true;
}

void func_223() // Position - 0x91F0 Hash - 0xF1F305D0 ^0x5DD1F5CA
{
	int i;

	uLocal_107.f_19.f_6 = -1;
	uLocal_107.f_19.f_7 = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)))
		{
			uLocal_107.f_19.f_6 = uLocal_107.f_19.f_6 && uLocal_10[i /*3*/].f_1.f_1;
			uLocal_107.f_19.f_7 = uLocal_107.f_19.f_7 || uLocal_10[i /*3*/].f_1.f_1;
		}
	}

	return;
}

void func_224(var uParam0) // Position - 0x9254 Hash - 0xD7DCD8BA ^0x70C52F85
{
	if (uLocal_107.f_19 != uParam0)
		uLocal_107.f_19 = uParam0;

	return;
}

void func_225() // Position - 0x926B Hash - 0x7695BACE ^0x5ED580E9
{
	if (func_272(uLocal_107.f_15, 1f, 20f))
		func_273();

	return;
}

void func_226() // Position - 0x928A Hash - 0x564F6A18 ^0xEE2E527F
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_107.f_19.f_5))
	{
		uLocal_107.f_19.f_5 = TASK::GET_PROP_FOR_SCENARIO_POINT(uLocal_107.f_19.f_4, "PrimaryItem");
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_107.f_19.f_5))
		{
			PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uLocal_107.f_19.f_5, false);
			PLAYER::_0x6ECFC621A168424C(uLocal_107.f_19.f_5, uLocal_107.f_19.f_5, 0, 0);
			ENTITY::SET_ENTITY_PROOFS(uLocal_107.f_19.f_5, 2, false);
			ENTITY::SET_ENTITY_PROOFS(uLocal_107.f_19.f_5, 4, false);
		}
	}

	if (PED::IS_PED_USING_SCENARIO_HASH(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("WORLD_PLAYER_INSPECT_MAP_144CM_W48_8_H32_2_FoldVerticalHorizontal_s_twofoldmap01x")) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("Attach")))
	{
		func_274(1);
		func_275(1);
	}

	return;
}

void func_227() // Position - 0x932D Hash - 0x3D3EF8DA ^0xBF3BE218
{
	var unk;

	if (func_276(1))
	{
		if (!PED::IS_PED_USING_SCENARIO_HASH(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("WORLD_PLAYER_INSPECT_MAP_144CM_W48_8_H32_2_FoldVerticalHorizontal_s_twofoldmap01x")) && !func_277())
		{
			unk = { func_278(-773758976) };
			unk.f_10 = PLAYER::PLAYER_ID();
			func_279(&unk);
			func_280();
			func_281(1);
		}
	}

	if (func_282(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uLocal_107.f_15, true) > 40f)
	{
		func_275(2);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_107.f_19.f_5) && !ENTITY::IS_ENTITY_OCCLUDED(uLocal_107.f_19.f_5))
		{
			func_273();
			func_283();
		}
	
		func_284(2);
	}

	return;
}

BOOL func_228(Hash hParam0, int iParam1) // Position - 0x93CF Hash - 0x718DD1EF ^0xD9260236
{
	return hParam0->f_2 && iParam1 != false;
}

int func_229(var uParam0, var uParam1) // Position - 0x93E0 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

int func_230(int iParam0) // Position - 0x93EA Hash - 0xF10AB031 ^0x99A2B2C1
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

Hash func_231(var uParam0, var uParam1) // Position - 0x945D Hash - 0x39F26DE7 ^0x39F26DE7
{
	return func_285(uParam0);
}

char* func_232(var uParam0, var uParam1, var uParam2) // Position - 0x946D Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_233(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x9481 Hash - 0x96F9C981 ^0x71D39102
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

	switch (func_229(uParam0))
	{
		case 4:
			num3 = func_287(func_286(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_187(j) == func_286(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_288(num3);
		
			if (!func_289(num4, 0))
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

int func_234(int iParam0, var uParam1) // Position - 0x9593 Hash - 0xE80D0E13 ^0xA7EB1561
{
	int num;
	var unk;
	int num2;
	int i;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;

	for (i = 1; i <= 46; i = i + 1)
	{
		num2 = i;
	
		if (num2 == iParam0)
		{
			return num + uParam1;
		}
		else
		{
			func_31(&unk, num2, -1, -1, 255);
			num = num + unk;
		}
	}

	return -1;
}

void func_235(int iParam0) // Position - 0x95FD Hash - 0x1FE4217B ^0x50C91D38
{
	var unk;

	unk.f_4 = 2;
	unk.f_5 = iParam0;
	func_290(&unk);
	return;
}

var func_236(int iParam0) // Position - 0x9616 Hash - 0x40F5C7CF ^0x9350842A
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_245.f_59;
	
		default:
		
	}

	return Global_1901671.f_245.f_55;
}

var func_237(int iParam0) // Position - 0x963F Hash - 0x40F5C7CF ^0xA8179CAE
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_245.f_61;
	
		default:
		
	}

	return Global_1901671.f_245.f_57;
}

var func_238(int iParam0) // Position - 0x9668 Hash - 0x40F5C7CF ^0xC0745805
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_245.f_60;
	
		default:
		
	}

	return Global_1901671.f_245.f_56;
}

struct<2> func_239(int iParam0) // Position - 0x9691 Hash - 0xC45CE1A6 ^0x9B4FA7F9
{
	var unk;

	switch (iParam0)
	{
		case 1:
			return func_291(joaat("mp_beat_manager_moonshiner_cooldown_timestamp"));
	
		case 2:
			return func_291(-1122351331);
	
		case 3:
			return func_291(1185140727);
	
		case 4:
			return func_291(1185140727);
	}

	return unk;
}

int func_240(int iParam0) // Position - 0x96F9 Hash - 0xDED1374F ^0xDED1374F
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

int func_241(int iParam0) // Position - 0x9734 Hash - 0x7B9E6017 ^0xD5F060B0
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

void func_242(Any* panParam0) // Position - 0x97D0 Hash - 0xEB9263E1 ^0xEB9263E1
{
	func_168(panParam0, 0);
	func_168(panParam0, 1);
	func_168(panParam0, 3);
	func_166(panParam0);
	return;
}

void func_243(Any* panParam0) // Position - 0x97F3 Hash - 0x23633041 ^0x23633041
{
	func_167(panParam0);
	func_292(panParam0, 0, 3);
	return;
}

void func_244(Any* panParam0, int iParam1) // Position - 0x9809 Hash - 0x28B904D2 ^0x220E1675
{
	MISC::SET_BIT(&(panParam0->f_4), iParam1);
	return;
}

void func_245(Any* panParam0) // Position - 0x981B Hash - 0xBAD35CA1 ^0xBAD35CA1
{
	func_168(panParam0, 0);
	func_244(panParam0, 0);
	func_244(panParam0, 1);
	func_244(panParam0, 4);
	func_244(panParam0, 5);
	return;
}

void func_246(Any* panParam0) // Position - 0x9846 Hash - 0x2BCB1EBC ^0x2BCB1EBC
{
	func_168(panParam0, 1);
	func_244(panParam0, 2);
	func_244(panParam0, 3);
	func_244(panParam0, 6);
	func_244(panParam0, 7);
	func_171(panParam0, 2);
	return;
}

void func_247(Any* panParam0) // Position - 0x9878 Hash - 0xB62D0A1 ^0xB62D0A1
{
	func_168(panParam0, 0);
	func_244(panParam0, 0);
	func_244(panParam0, 1);
	func_244(panParam0, 2);
	return;
}

void func_248(Any* panParam0) // Position - 0x989C Hash - 0x272E8086 ^0x272E8086
{
	func_168(panParam0, 1);
	func_166(panParam0);
	return;
}

void func_249(Any* panParam0) // Position - 0x98B1 Hash - 0x14CF0761 ^0x14CF0761
{
	func_168(panParam0, 2);
	func_244(panParam0, 3);
	return;
}

void func_250(Any* panParam0) // Position - 0x98C7 Hash - 0xF4DD0BF1 ^0xF4DD0BF1
{
	func_168(panParam0, 3);
	func_244(panParam0, 4);
	return;
}

void func_251(Any* panParam0) // Position - 0x98DD Hash - 0x2F073967 ^0x2F073967
{
	func_244(panParam0, 0);
	func_244(panParam0, 1);
	return;
}

void func_252(Any* panParam0) // Position - 0x98F3 Hash - 0x14CF0761 ^0x14CF0761
{
	func_244(panParam0, 2);
	func_244(panParam0, 3);
	return;
}

void func_253(Any* panParam0) // Position - 0x9909 Hash - 0x9AE8A110 ^0x9AE8A110
{
	func_244(panParam0, 4);
	func_244(panParam0, 5);
	return;
}

BOOL func_254(Any* panParam0, int iParam1) // Position - 0x991F Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_255(Any* panParam0, int iParam1) // Position - 0x9956 Hash - 0x5E449B87 ^0x295D242D
{
	panParam0->f_2 = 333456427;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_256(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x9977 Hash - 0x6EB69AE6 ^0xE9AB1EC1
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

int func_257(int iParam0, int iParam1) // Position - 0x99A7 Hash - 0xC12581FD ^0xC872D18E
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_4 + iParam1;
}

int func_258(int iParam0) // Position - 0x99C6 Hash - 0x49256A88 ^0x10462E79
{
	if (!func_162(iParam0))
		return 0;

	return Global_1142424.f_1[iParam0 /*63*/].f_3;
}

BOOL func_259(int iParam0, BOOL bParam1) // Position - 0x99E8 Hash - 0xB872F7FA ^0xAB652BE5
{
	if (iParam0 > -1 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bParam1)
			return true;
	
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	}

	return false;
}

Vector3 func_260() // Position - 0x9A1B Hash - 0x6C3EED46 ^0x694B283D
{
	var offsetFromCoordAndHeadingInWorldCoords;

	offsetFromCoordAndHeadingInWorldCoords = { uLocal_107.f_15 };

	switch (func_293())
	{
		case 0:
			offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uLocal_107.f_15, func_216(), 1f, -0.5f, 0f) };
			break;
	
		case 2:
			offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uLocal_107.f_15, func_216(), -1f, -0.5f, 0f) };
			break;
	
		default:
			offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uLocal_107.f_15, func_216(), 1f, -0.5f, 0f) };
			break;
	}

	return offsetFromCoordAndHeadingInWorldCoords;
}

BOOL func_261(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0x9A9B Hash - 0x7A86627D ^0xFF1D6F50
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
		return false;

	if (!func_215(hParam1))
		return false;

	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(hParam1, vParam2, true, bParam5, false, false, true));

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
	
		return true;
	}

	return false;
}

void func_262(int iParam0) // Position - 0x9AEF Hash - 0xD7DCD8BA ^0x3B897553
{
	if (iLocal_0.f_7 != iParam0)
		iLocal_0.f_7 = iParam0;

	return;
}

BOOL func_263(int iParam0) // Position - 0x9B06 Hash - 0x654B9F8C ^0x52342DC
{
	return func_161(uLocal_107.f_19.f_7, iParam0);
}

BOOL func_264(int iParam0) // Position - 0x9B1A Hash - 0x654B9F8C ^0x21325529
{
	return func_161(uLocal_107.f_19.f_6, iParam0);
}

void func_265(var uParam0, int iParam1) // Position - 0x9B2E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_266(var uParam0, int iParam1) // Position - 0x9B3F Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_267(Any* panParam0, int iParam1) // Position - 0x9B54 Hash - 0x833ACB10 ^0x1B12C1FF
{
	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam1, panParam0, 15))
		return false;

	if (panParam0->f_4.f_1 != uLocal_107.f_1)
		return false;

	if (panParam0->f_4 != uLocal_107)
		return false;

	if (panParam0->f_4.f_2 != uLocal_107.f_2)
		return false;

	if (panParam0->f_4.f_3 != uLocal_107.f_3)
		return false;

	return true;
}

void func_268(var uParam0) // Position - 0x9BB0 Hash - 0x93B34AF3 ^0x55EABD76
{
	BOOL flag;
	Any gangId;
	Any gangId2;

	flag = false;

	switch (uParam0->f_9)
	{
		case -773758976:
			func_294();
			gangId = GANG::NETWORK_GET_GANG_ID(uParam0->f_10);
			gangId2 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		
			if (GANG::NETWORK_IS_GANG_ID_VALID(gangId) && GANG::NETWORK_IS_GANG_IN_SESSION(gangId) && GANG::NETWORK_IS_GANG_ID_VALID(gangId2) && GANG::NETWORK_IS_GANG_IN_SESSION(gangId2))
				if (gangId == gangId2)
					flag = true;
		
			if (uParam0->f_10 == PLAYER::PLAYER_ID() || flag)
			{
				func_273();
				func_283();
				func_295(true);
				func_59();
			}
			break;
	}

	return;
}

struct<2> func_269(int iParam0, int iParam1) // Position - 0x9C3F Hash - 0x2DE2269E ^0x2DE2269E
{
	var statId;
	var unk2;
	int num;

	if (iParam1 == 0)
		return unk2;

	num = func_296(iParam0);

	if (num == 0)
		return unk2;

	statId = { func_297(iParam1, num) };

	if (!STATS::STAT_ID_IS_VALID(&statId))
		return unk2;

	return statId;
}

BOOL func_270() // Position - 0x9C8A Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

BOOL func_271(Player plParam0) // Position - 0x9CAF Hash - 0x9A532454 ^0x9A532454
{
	var unk;
	int num;

	if (func_298(plParam0, &unk, &num, true))
		if (num != -1)
			return true;

	return false;
}

BOOL func_272(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4) // Position - 0x9CD0 Hash - 0x3B5228DE ^0x48C5DF0F
{
	if (fParam4 + fParam3 < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_299(PLAYER::GET_PLAYER_INDEX()), true))
		return false;

	return CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
}

void func_273() // Position - 0x9D00 Hash - 0xAFAB6AB7 ^0xFFDF38DA
{
	int num;

	if (!func_115(32, 255))
	{
		func_300(uLocal_107.f_1, uLocal_107.f_3);
	
		if (!func_115(1024, 255))
		{
			func_301(uLocal_107.f_1);
			func_132(1024);
		}
	
		num = func_234(uLocal_107.f_1, uLocal_107.f_2);
		func_302(num);
		func_303(num);
		func_130(2);
		func_304(uLocal_107.f_9);
		func_305(uLocal_107.f_1);
		func_306(uLocal_107.f_1, uLocal_107.f_2, uLocal_107.f_3);
	
		if (func_307(uLocal_107.f_1))
		{
			func_308(false, 827348479);
			func_130(1024);
		}
	
		func_132(32);
	}

	return;
}

void func_274(int iParam0) // Position - 0x9D9F Hash - 0x92A8F384 ^0x7FDC99E9
{
	func_193(&(uLocal_107.f_19.f_1), iParam0);
	return;
}

void func_275(int iParam0) // Position - 0x9DB3 Hash - 0xDC582618 ^0xC5D38BE4
{
	int num;

	if (!func_198(&num))
		return;

	func_193(&(uLocal_10[num /*3*/].f_1.f_1), iParam0);
	return;
}

BOOL func_276(int iParam0) // Position - 0x9DD8 Hash - 0x654B9F8C ^0x78DEB4E2
{
	return func_161(uLocal_107.f_19.f_1, iParam0);
}

BOOL func_277() // Position - 0x9DEC Hash - 0x1742AA4E ^0x33A48498
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -610890012))
		return true;

	return false;
}

struct<15> func_278(int iParam0) // Position - 0x9E0D Hash - 0x97C01B26 ^0xBCD225B1
{
	int num;

	num.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(num.f_4), &uLocal_107, 5);
	num.f_9 = iParam0;
	num = 185;
	num.f_1 = PLAYER::PLAYER_ID();
	num.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return num;
}

void func_279(Any* panParam0) // Position - 0x9E49 Hash - 0x747826BD ^0x747826BD
{
	func_310(panParam0, func_309(4, 117));
	return;
}

void func_280() // Position - 0x9E5E Hash - 0xC7278E88 ^0xC7278E88
{
	int num;

	num = func_311(Global_34, 1);
	func_312(num, 0);
	return;
}

void func_281(int iParam0) // Position - 0x9E7A Hash - 0x92A8F384 ^0x7FDC99E9
{
	func_207(&(uLocal_107.f_19.f_1), iParam0);
	return;
}

float func_282(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x9E8E Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_283() // Position - 0x9EB6 Hash - 0xDCF8C510 ^0xDCF8C510
{
	if (!func_60(2))
		return;

	func_130(8);
	return;
}

void func_284(int iParam0) // Position - 0x9ED0 Hash - 0xDC582618 ^0xC5D38BE4
{
	int num;

	if (!func_198(&num))
		return;

	func_207(&(uLocal_10[num /*3*/].f_1.f_1), iParam0);
	return;
}

Hash func_285(var uParam0, var uParam1) // Position - 0x9EF5 Hash - 0x10103901 ^0xC90ADDEF
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_313(uParam0, &num))
		return num;

	return 0;
}

int func_286(var uParam0, var uParam1) // Position - 0x9F1F Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_313(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_287(int iParam0) // Position - 0x9F4B Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_254(&num2, iParam0))
		num = func_314() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_288(int iParam0) // Position - 0x9F76 Hash - 0x83E9D265 ^0xBE06DE0D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_289(int iParam0, BOOL bParam1) // Position - 0x9F92 Hash - 0x5364EDB8 ^0x5364EDB8
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

void func_290(Any* panParam0) // Position - 0x9FFA Hash - 0x762DE3E3 ^0x791E0275
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_1051645.f_16[15] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[15]))
		return;

	*panParam0 = 183;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(panParam0, 8, 10, Global_1051645.f_16[15]);
	func_315(panParam0, panParam0->f_1);
	return;
}

struct<2> func_291(int iParam0) // Position - 0xA065 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_292(Any* panParam0, int iParam1, int iParam2) // Position - 0xA077 Hash - 0x427701AE ^0x1B998B16
{
	int i;

	if (iParam1 < 0)
		iParam1 = 0;

	if (iParam2 < iParam1)
		iParam2 = panParam0->f_2 - 1;

	for (i = iParam1; i <= iParam2; i = i + 1)
	{
		func_244(panParam0, i);
	}

	return;
}

int func_293() // Position - 0xA0B3 Hash - 0x345AD124 ^0xB6232D59
{
	return uLocal_107.f_2;
}

void func_294() // Position - 0xA0BF Hash - 0x8F76BB1D ^0x25DC3266
{
	Vector3 entityCoords;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_107.f_19.f_5))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uLocal_107.f_19.f_5))
			ENTITY::DETACH_ENTITY(uLocal_107.f_19.f_5, true, true);
	
		ENTITY::SET_ENTITY_VISIBLE(uLocal_107.f_19.f_5, false);
		ENTITY::SET_ENTITY_COLLISION(uLocal_107.f_19.f_5, false, false);
		entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_107.f_19.f_5, true, false) };
		entityCoords = { entityCoords, entityCoords.f_1, entityCoords.f_2 - 10f };
		ENTITY::SET_ENTITY_COORDS(uLocal_107.f_19.f_5, entityCoords, false, false, true, true);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uLocal_107.f_19.f_5));
	}

	return;
}

void func_295(BOOL bParam0) // Position - 0xA144 Hash - 0xD6DAE133 ^0xB66B8D0A
{
	if (!func_60(8))
		return;

	if (bParam0)
	{
		if (!func_60(256))
		{
			func_159(uLocal_107.f_18, 0);
			func_130(256);
		}
	}

	func_130(16);
	return;
}

int func_296(int iParam0) // Position - 0xA17F Hash - 0x17C363BB ^0xC11D606E
{
	switch (iParam0)
	{
		case 1:
			return joaat("net_beat_animal_attack");
	
		case 2:
			return joaat("net_beat_arrowhead_injury");
	
		case 3:
			return joaat("net_beat_egg_protector");
	
		case 4:
			return joaat("net_beat_graverobber");
	
		case 5:
			return joaat("net_beat_rival_collector");
	
		case 6:
			return joaat("net_beat_kidnapped");
	
		case 7:
			return joaat("net_beat_photography");
	
		case 8:
			return joaat("net_beat_tied_up_ped");
	
		case 9:
			return joaat("net_beat_treasure_hunter");
	
		case 10:
			return joaat("net_beat_tree_map");
	
		case 11:
			return joaat("net_beat_runaway_wagon");
	
		case 12:
			return joaat("net_beat_hobo_dog");
	
		case 13:
			return joaat("net_beat_wildman");
	
		case 14:
			return joaat("net_beat_duel");
	
		case 15:
			return joaat("net_beat_moonshine_camp");
	
		case 16:
			return joaat("net_beat_beggar");
	
		case 17:
			return joaat("net_beat_stalking_hunter");
	
		case 18:
			return joaat("net_beat_slumped_hunter");
	
		case 19:
			return joaat("net_beat_crashed_wagon");
	
		case 20:
			return joaat("net_beat_suspension_trap");
	
		case 21:
			return joaat("net_beat_legendary_animal_bear");
	
		case 22:
			return joaat("net_beat_legendary_animal_cougar");
	
		case 23:
			return 257784569;
	
		case 24:
			return joaat("net_beat_legendary_animal_boar");
	
		case 25:
			return 1829377792;
	
		case 26:
			return joaat("net_beat_legendary_animal_fox");
	
		case 27:
			return joaat("net_beat_legendary_animal_wolf");
	
		case 28:
			return joaat("net_beat_legendary_animal_beaver");
	
		case 29:
			return joaat("net_beat_legendary_animal_coyote");
	
		case 30:
			return -1373797819;
	
		case 31:
			return joaat("net_beat_legendary_animal_alligator");
	
		case 32:
			return -753359492;
	
		case 33:
			return -268685349;
	
		case 34:
			return -2047817190;
	
		default:
		
	}

	return 0;
}

struct<2> func_297(int iParam0, int iParam1) // Position - 0xA36B Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_298(Player plParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xA381 Hash - 0x4265C29D ^0xB17830CB
{
	Player player;

	if (bParam3)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return false;

	player = plParam0;

	if (Global_1297600[player /*87*/].f_1 == -1)
		return false;

	*uParam1 = Global_1297600[player /*87*/].f_1;
	*uParam2 = Global_1297600[player /*87*/].f_3;
	return true;
}

Vector3 func_299(Player plParam0) // Position - 0xA3CD Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_300(int iParam0, int iParam1) // Position - 0xA3E1 Hash - 0xFCFEE8EC ^0x9E33CC3A
{
	var unk;
	var statId;
	BOOL address;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_31(&unk, iParam0, -1, -1, 255);
	statId = { func_269(iParam0, joaat("variations_seen")) };

	if (!STATS::STAT_ID_GET_INT(&statId, &address))
		return;

	if (iParam1 > 15)
		return;

	MISC::SET_BIT(&address, iParam1);

	if (!func_105(&unk, 4) && func_316(address) == unk.f_1)
		address = false;

	!STATS::STAT_ID_SET_INT(&statId, address, true);
	Global_1257509[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = address;
	return;
}

void func_301(int iParam0) // Position - 0xA487 Hash - 0x646928F0 ^0x646928F0
{
	func_317(iParam0);
	return;
}

void func_302(int iParam0) // Position - 0xA495 Hash - 0x622AE47A ^0x3EB0BD4F
{
	int num;
	int num2;
	var unk;
	int value;
	var statId;
	int value2;
	var statId2;

	if (func_112(Global_1260806[iParam0 /*4*/]))
		return;

	func_318(iParam0, &num, &num2);
	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	func_31(&unk, num, num2, -1, 255);
	func_113(&Global_1260806[iParam0 /*4*/]);
	value = unk.f_5;

	if (value != 0)
	{
		statId = { func_291(joaat("mp_fetch_last_attempted_dynamic_mission_unlock")) };
		STATS::STAT_ID_SET_INT(&statId, value, true);
		statId = { func_291(joaat("mp_fetch_last_attempted_dynamic_mission_timestamp")) };
		STATS::STAT_ID_SET_INT(&statId, Global_1295666.f_16, true);
	}

	value2 = unk.f_9;

	if (value2 != 0)
	{
		statId2 = { func_291(joaat("mp_fetch_last_attempted_cooldown_tag_id")) };
		STATS::STAT_ID_SET_INT(&statId2, value2, true);
		statId2 = { func_291(joaat("mp_fetch_last_attempted_cooldown_tag_timestamp")) };
		STATS::STAT_ID_SET_INT(&statId2, Global_1295666.f_16, true);
	}

	return;
}

void func_303(int iParam0) // Position - 0xA574 Hash - 0x7BCE8FB6 ^0x897A8C01
{
	var unk;

	unk.f_4 = 1;
	unk.f_5 = iParam0;
	func_290(&unk);
	return;
}

void func_304(var uParam0, var uParam1) // Position - 0xA58D Hash - 0x6C75D286 ^0x9E265045
{
	Hash linkID;
	var unk;

	if (func_231(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_231(uParam0)))
	{
	}
	else
	{
		linkID = func_231(uParam0);
		STATS::STATSTRACKER_DEED_STARTED(linkID, Global_265213.f_122484.f_80.f_12);
		TELEMETRY::_0x6F5BC5C4EAB42B15(linkID, 2, &(Global_265213.f_122484.f_80.f_22));
	
		if (func_319(uParam0, &unk))
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

void func_305(int iParam0) // Position - 0xA636 Hash - 0x7E3F56F0 ^0x8BEB3EE0
{
	var statId;

	statId = { func_269(iParam0, joaat("num_times_seen")) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, 1);
	return;
}

void func_306(int iParam0, int iParam1, int iParam2) // Position - 0xA654 Hash - 0xFE83FEEF ^0x2FF727F5
{
	var unk;
	int num;

	unk.f_10 = 1106247680;
	unk.f_15 = 4;
	unk.f_20 = 4;
	unk.f_26 = -1;
	unk.f_28 = 2;
	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num > -1 && num < 32)
	{
		func_31(&unk, iParam0, iParam1, iParam2, 255);
	
		if (unk.f_7 < 5 && unk.f_7 >= 0)
			Global_1257509[num /*103*/].f_97[unk.f_7] = 0;
	}

	return;
}

BOOL func_307(int iParam0) // Position - 0xA6D1 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 9:
			return true;
	
		default:
		
	}

	return false;
}

int func_308(BOOL bParam0, Hash hParam1) // Position - 0xA6EC Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_320())
		return 0;

	if (!func_18())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_321(&Global_0, 8);

	func_321(&Global_0, 1);
	return 1;
}

var func_309(int iParam0, int iParam1) // Position - 0xA742 Hash - 0x42C305C ^0x81DF2F42
{
	return func_322(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_310(Any* panParam0, var uParam1) // Position - 0xA760 Hash - 0x7CFA01E5 ^0xB443A75A
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 15, 41, &uParam1);
	return;
}

int func_311(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xA782 Hash - 0x18241F3 ^0x15AD2FA
{
	int num;

	num = func_323(uParam0);

	switch (num)
	{
		case 0:
		case 2:
		case 11:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_LEMOYNE");
			
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_LEMOYNE_RE");
			
				default:
					break;
			}
			break;
	
		case 1:
		case 4:
		case 12:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_WEST_ELIZABETH");
			
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_WEST_ELIZABETH_RE");
			
				default:
					break;
			}
			break;
	
		case 3:
		case 9:
		case 10:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_HANOVER");
			
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_HANOVER_RE");
			
				default:
					break;
			}
			break;
	
		case 5:
		case 6:
		case 7:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_AMBARINO");
			
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_AMBARINO_RE");
			
				default:
					break;
			}
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_AUSTIN");
			
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_AUSTIN_RE");
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0;
}

int func_312(int iParam0, int iParam1) // Position - 0xA8C2 Hash - 0x10BA6DD6 ^0xD79E06BF
{
	var unk;
	var unk5;

	if (0 == iParam0)
		return 0;

	unk5.f_1 = 10;
	func_324(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_325(iParam0, &unk5, &unk, iParam1, 0);
}

BOOL func_313(int iParam0, var uParam1, Any* panParam2) // Position - 0xA8F6 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_36(iParam0))
		return false;

	func_326(panParam2);

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

int func_314() // Position - 0xAA01 Hash - 0x33EB0DBC ^0xEC692AA0
{
	int numChildren;
	Any any;

	numChildren = 0;
	any = Global_1245174.f_9818;
	any.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);

	return numChildren;
}

void func_315(Any* panParam0, var uParam1) // Position - 0xAA39 Hash - 0x9147FD03 ^0x9147FD03
{
	return;
}

int func_316(BOOL bParam0) // Position - 0xAA41 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

void func_317(int iParam0) // Position - 0xAA66 Hash - 0xF92DD233 ^0xF5E2B4D6
{
	int value;
	var statId;

	value = Global_1295666.f_16;
	statId = { func_269(iParam0, joaat("cooldown")) };
	!STATS::STAT_ID_SET_INT(&statId, value, true);
	return;
}

int func_318(int iParam0, var uParam1, var uParam2) // Position - 0xAA92 Hash - 0xEF83025F ^0x2D6BF14A
{
	int num;
	int i;
	int num2;

	num2.f_10 = 1106247680;
	num2.f_15 = 4;
	num2.f_20 = 4;
	num2.f_26 = -1;
	num2.f_28 = 2;

	for (i = 1; i <= 46; i = i + 1)
	{
		*uParam1 = i;
		func_31(&num2, *uParam1, -1, -1, 255);
		num = num + num2;
	
		if (num >= iParam0)
		{
			num = num - num2;
			*uParam2 = 0;
		
			while (*uParam2 <= num2 - 1)
			{
				if (num == iParam0)
					return 1;
			
				num = num + 1;
				*uParam2 = *uParam2 + 1;
			}
		}
	}

	return 0;
}

BOOL func_319(int iParam0, var uParam1, var uParam2) // Position - 0xAB24 Hash - 0xAA374E32 ^0x1E15A248
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;
	func_313(iParam0, &unk);

	if (func_327(iParam0, unk, uParam2))
		return true;

	return false;
}

BOOL func_320() // Position - 0xAB58 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

void func_321(Hash hParam0, int iParam1) // Position - 0xAB67 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

var func_322(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0xAB7A Hash - 0x63C3F71D ^0x3019B977
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

	if (func_328() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_329());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_329());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_329());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_330(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_331(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_332(i) != 1)
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
					if (!func_333(player2))
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

int func_323(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xAF0D Hash - 0x56F0811C ^0x278FB5A
{
	return func_334(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_324(var uParam0, int iParam1) // Position - 0xAF23 Hash - 0x624BD2B7 ^0x9DA59487
{
	BOOL flag;
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		switch (iParam1)
		{
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if (uParam0->f_1[i] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[i] == joaat("FISHING_RESULT_RUINED") || uParam0->f_1[i] == joaat("FISHING_RESULT_LEGENDARY"))
					flag = true;
				break;
		
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE"))
					flag = true;
				break;
		
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING"))
					flag = true;
				break;
		}
	
		if (flag)
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

int func_325(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0xB04F Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_335(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_336(anParam2, iParam0, num);
	return 1;
}

void func_326(Any* panParam0) // Position - 0xB0BE Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_327(int iParam0, var uParam1, var uParam2) // Position - 0xB0D4 Hash - 0x75EF2F01 ^0x75EF2F01
{
	var unk;

	if (!func_337(iParam0))
		return false;

	if (func_338(iParam0, uParam1, &unk))
		func_339(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

int func_328() // Position - 0xB109 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_329() // Position - 0xB117 Hash - 0x62D02636 ^0x62D02636
{
	return "unnamed";
}

BOOL func_330(int iParam0) // Position - 0xB122 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_331(int iParam0) // Position - 0xB1B1 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_340(36, iParam0);
}

int func_332(int iParam0) // Position - 0xB1CF Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_333(Player plParam0) // Position - 0xB21A Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_341(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_342(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

int func_334(Hash hParam0) // Position - 0xB25F Hash - 0x50573299 ^0x50573299
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

void func_335(var uParam0) // Position - 0xB319 Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_324(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_343() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_324(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_324(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_336(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0xB351 Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_344(anParam0))
		return;

	if (Global_1292143.f_2539 < 20)
	{
		Global_1292143.f_2539 = Global_1292143.f_2539 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2539.f_1[i /*22*/] = { Global_1292143.f_2539.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_3.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1292143.f_2539.f_1[Global_1292143.f_2539 - 1 /*22*/] = { unk };
	return;
}

BOOL func_337(int iParam0) // Position - 0xB407 Hash - 0x5000025C ^0x5000025C
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

BOOL func_338(int iParam0, var uParam1, Any* panParam2) // Position - 0xB446 Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_345(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_339(int iParam0, Any* panParam1, var uParam2) // Position - 0xB47A Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_346(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_347(num);
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
			uParam2->f_5 = func_348(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_349(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_350(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_351(num);
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

BOOL func_340(int iParam0, int iParam1) // Position - 0xB6D5 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_352(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_353())
		return func_352(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_352(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_341(Player plParam0) // Position - 0xB749 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_342(Player plParam0) // Position - 0xB766 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_354(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_355(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

int func_343() // Position - 0xB7E9 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_344(Any anParam0) // Position - 0xB7F7 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_345(int iParam0) // Position - 0xB83D Hash - 0x5FB59AC3 ^0xE293EFF
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

int func_346(int iParam0, var uParam1) // Position - 0xB9B2 Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_356(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_347(int iParam0) // Position - 0xB9CF Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_348(int iParam0) // Position - 0xBB25 Hash - 0xCBE7BE7C ^0xCBE7BE7C
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

int func_349(int iParam0) // Position - 0xBB7C Hash - 0x2A2D8996 ^0x2A2D8996
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

int func_350(int iParam0) // Position - 0xBC56 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_351(int iParam0) // Position - 0xBCEE Hash - 0xD7A7D6 ^0xD7A7D6
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

BOOL func_352(Any* panParam0, int iParam1, int iParam2) // Position - 0xBE98 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_353() // Position - 0xBECF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_354(Player plParam0) // Position - 0xBEDE Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_355(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_355(Player plParam0) // Position - 0xBF4A Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_356(int iParam0, var uParam1, var uParam2) // Position - 0xBF85 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_357(iParam0, uParam1, &unk))
		func_358(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_357(int iParam0, var uParam1, Any* panParam2) // Position - 0xBFAC Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_345(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_358(Any* panParam0, int iParam1, var uParam2) // Position - 0xBFE0 Hash - 0xECF29EBC ^0xAF63BED0
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

