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
	int iLocal_16 = 0;
	var uLocal_17 = 4;
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
	BOOL bLocal_30 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xC73C3C98 ^0xC7643DDB
{
	var unk;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_16 = joaat("w_binocular_inner01");
	bLocal_30 = true;
	unk.f_8 = 2;
	unk.f_8.f_1.f_11 = 2;
	unk.f_8.f_1.f_18 = 2;
	unk.f_8.f_1.f_39 = -1;
	unk.f_8.f_1.f_40.f_11 = 2;
	unk.f_8.f_1.f_40.f_18 = 2;
	unk.f_8.f_1.f_40.f_39 = -1;
	unk.f_89 = 4;
	unk.f_89.f_1.f_8 = -1;
	unk.f_89.f_1.f_11 = -1;
	unk.f_89.f_1.f_15.f_8 = -1;
	unk.f_89.f_1.f_15.f_11 = -1;
	unk.f_89.f_1.f_15.f_15.f_8 = -1;
	unk.f_89.f_1.f_15.f_15.f_11 = -1;
	unk.f_89.f_1.f_15.f_15.f_15.f_8 = -1;
	unk.f_89.f_1.f_15.f_15.f_15.f_11 = -1;
	unk.f_150 = 6;
	unk.f_150.f_1.f_9 = -1;
	unk.f_150.f_1.f_13.f_9 = -1;
	unk.f_150.f_1.f_13.f_13.f_9 = -1;
	unk.f_150.f_1.f_13.f_13.f_13.f_9 = -1;
	unk.f_150.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	unk.f_150.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	unk.f_229.f_1 = -1;
	unk.f_234.f_2 = 6;
	unk.f_234.f_3 = -1;
	unk.f_241 = 2;
	unk.f_241.f_1.f_1 = 4;
	unk.f_241.f_1.f_1.f_1.f_2 = -1;
	unk.f_241.f_1.f_1.f_1.f_6.f_2 = -1;
	unk.f_241.f_1.f_1.f_1.f_6.f_6.f_2 = -1;
	unk.f_241.f_1.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	unk.f_241.f_1.f_27.f_1 = 4;
	unk.f_241.f_1.f_27.f_1.f_1.f_2 = -1;
	unk.f_241.f_1.f_27.f_1.f_1.f_6.f_2 = -1;
	unk.f_241.f_1.f_27.f_1.f_1.f_6.f_6.f_2 = -1;
	unk.f_241.f_1.f_27.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	unk.f_299 = -1;
	unk.f_299.f_1 = -1;
	unk.f_309 = -1;
	unk.f_309.f_1 = -1;
	unk.f_329 = -1;
	unk.f_349 = -1;
	unk.f_350 = -1;
	unk.f_326 = uScriptParam_0;
	unk = uScriptParam_0.f_1;
	func_1();
	func_2(&unk);

	while (bLocal_30)
	{
		bLocal_30 = !func_3(&unk);
	
		if (func_4(&unk))
			bLocal_30 = false;
	
		BUILTIN::WAIT(0);
	}

	func_5(&unk);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x1E3 Hash - 0x66E327B2 ^0x599C88A6
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

void func_2(var uParam0) // Position - 0x1F0 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_3(var uParam0) // Position - 0x1F8 Hash - 0xC0BCAAF2 ^0x5CF5E1FF
{
	if (func_6(true, true))
		return true;

	if (func_8(func_7(), 256, 0))
	{
		func_9(951, true);
		return true;
	}

	if (!func_10(*uParam0))
	{
		if (func_12(func_11()))
			return true;
	
		if (func_13())
			return true;
	}

	if (func_14(uParam0))
	{
		func_15(0);
		return true;
	}

	if (func_16() >= 13)
		return true;

	if (_STOPWATCH_IS_INITIALIZED(uParam0) != 3 && _STOPWATCH_IS_INITIALIZED(uParam0) != 4)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_18() == 9)
		return true;

	if (func_12(func_19(0)))
		return true;

	return false;
}

BOOL func_4(var uParam0) // Position - 0x2AE Hash - 0xEE8E27EE ^0xE660C1E6
{
	func_20(uParam0);

	switch (_STOPWATCH_IS_INITIALIZED(uParam0))
	{
		case 0:
			func_21(uParam0);
			break;
	
		case 1:
			if (!func_22(&(uParam0->f_1)))
				func_23(uParam0);
		
			func_24(uParam0);
		
			if (!func_25(&(uParam0->f_1)))
				func_26(uParam0);
			break;
	
		case 2:
			if (!func_22(&(uParam0->f_1)))
				func_27(uParam0);
		
			func_28(uParam0);
		
			if (!func_25(&(uParam0->f_1)))
				func_29(uParam0);
			break;
	
		case 3:
			if (!func_22(&(uParam0->f_1)))
				func_30(uParam0);
		
			func_31(uParam0);
		
			if (!func_25(&(uParam0->f_1)))
				func_32(uParam0);
			break;
	
		case 4:
			if (!func_22(&(uParam0->f_1)))
				func_33(uParam0);
		
			func_34(uParam0);
		
			if (!func_25(&(uParam0->f_1)))
				func_35(uParam0);
			break;
	
		case 5:
			if (!func_22(&(uParam0->f_1)))
				func_36(uParam0);
		
			func_37(uParam0);
		
			if (!func_25(&(uParam0->f_1)))
				func_38(uParam0);
			break;
	
		case 6:
			if (!func_22(&(uParam0->f_1)))
				func_39(uParam0);
		
			func_40(uParam0);
		
			if (!func_25(&(uParam0->f_1)))
				func_41(uParam0);
			break;
	
		case 7:
			return true;
	}

	return false;
}

void func_5(var uParam0) // Position - 0x414 Hash - 0x29DC9693 ^0xCADEC375
{
	Any any;
	Any any2;
	int i;

	if (_STOPWATCH_IS_INITIALIZED(uParam0) != 7)
		func_42(uParam0);

	if (Global_13)
		Global_13 = false;

	if (Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14)
		Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14 = 0;

	if (Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
		Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15 = 0;

	if (uParam0->f_339)
		func_43(uParam0, false);

	if (MISC::IS_BIT_SET(uParam0->f_327, 7) && MISC::IS_BIT_SET(uParam0->f_327, 19))
	{
		func_44(*uParam0, &any);
	
		if (uParam0->f_352)
		{
			func_45(*uParam0, &any2);
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), any, any2, 0);
		}
		else if (uParam0->f_351)
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), any, 0, 0);
		}
		else if (uParam0->f_354)
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), any, 0, 2);
		}
		else
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), any, 0, 1);
		}
	}

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && MISC::IS_BIT_SET(uParam0->f_327, 21))
	{
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		MISC::CLEAR_BIT(&(uParam0->f_327), 21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_360))
	{
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_360, false);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_360, false);
		VOLUME::DELETE_VOLUME(uParam0->f_360);
	}

	if (func_47(uParam0))
		func_48(uParam0);

	if (6 == *uParam0)
	{
		for (i = 0; i < uParam0->f_8; i = i + 1)
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 6))
				func_49();
		}
	}

	return;
}

BOOL func_6(BOOL bParam0, BOOL bParam1) // Position - 0x5D7 Hash - 0x8CDC02F2 ^0xDB4E8541
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

struct<2> func_7() // Position - 0x6B7 Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_8(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x6D0 Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_12(Global_1051268) && !func_50(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_51(iParam2))
		return true;

	if (iParam3 != 0 && func_52(iParam3, 255))
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

	if (func_13())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_12(Global_1051268))
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

void func_9(int iParam0, BOOL bParam1) // Position - 0x7F9 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_53(iParam0, &num, &num2);

	if (!func_54(iParam0, num, num2, bParam1))
		return;

	func_55(num, num2);
	return;
}

BOOL func_10(var uParam0) // Position - 0x826 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

struct<2> func_11() // Position - 0x82F Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_19(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_19(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_12(var uParam0, var uParam1) // Position - 0x87A Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_56(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_57(uParam0))
		return false;

	return true;
}

BOOL func_13() // Position - 0x8AE Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_12(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

BOOL func_14(var uParam0) // Position - 0x906 Hash - 0x617FEBB7 ^0x19F907A2
{
	switch (func_58())
	{
		case 1:
			if (MISC::IS_BIT_SET(uParam0->f_327, 5))
				return true;
			break;
	
		case 2:
			if (MISC::IS_BIT_SET(uParam0->f_327, 4))
				return true;
			break;
	}

	return false;
}

void func_15(int iParam0) // Position - 0x94D Hash - 0x29A8F290 ^0x82294867
{
	Global_1292128.f_11 = iParam0;
	return;
}

int func_16() // Position - 0x95D Hash - 0x4228A1C2 ^0xA7B22E60
{
	return Global_1572887.f_196;
}

int _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x96B Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

int func_18() // Position - 0x977 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20241;
}

struct<2> func_19(int iParam0) // Position - 0x986 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_20(var uParam0) // Position - 0x99A Hash - 0x4C2A0E68 ^0x4C2A0E68
{
	if (uParam0->f_328 >= 3)
	{
		uParam0->f_328 = 0;
		return;
	}

	uParam0->f_328 = uParam0->f_328 + 1;
	return;
}

void func_21(var uParam0) // Position - 0x9C0 Hash - 0x646928F0 ^0x646928F0
{
	func_59(uParam0);
	return;
}

BOOL func_22(var uParam0) // Position - 0x9CE Hash - 0x243EE1D6 ^0x5C7E2071
{
	return MISC::IS_BIT_SET(uParam0->f_4, *uParam0);
}

void func_23(var uParam0) // Position - 0x9E1 Hash - 0x6FF7A355 ^0x6BCB60AF
{
	func_60(&(uParam0->f_1));
	func_61(uParam0, *uParam0);
	func_62(*uParam0);

	if (*uParam0 != 5 && *uParam0 != 8)
		func_63(uParam0);

	func_64(uParam0);
	return;
}

void func_24(var uParam0) // Position - 0xA22 Hash - 0xC99AF3DB ^0xC99AF3DB
{
	if (*uParam0 == 5 || *uParam0 == 8)
		func_63(uParam0);

	if (!func_65(uParam0))
		return;

	func_59(uParam0);
	return;
}

BOOL func_25(var uParam0) // Position - 0xA58 Hash - 0x243EE1D6 ^0xB8B77BDC
{
	return MISC::IS_BIT_SET(uParam0->f_5, *uParam0);
}

void func_26(var uParam0) // Position - 0xA6B Hash - 0x4332D616 ^0x6CE453B
{
	func_66(&(uParam0->f_1));
	return;
}

void func_27(var uParam0) // Position - 0xA7B Hash - 0x4332D616 ^0x6CE453B
{
	func_60(&(uParam0->f_1));
	return;
}

void func_28(var uParam0) // Position - 0xA8B Hash - 0xB4C23FE1 ^0xB4C23FE1
{
	func_67(uParam0);
	func_68(uParam0);

	if (!func_69(uParam0))
		return;

	func_70(false);

	if (!func_71(uParam0))
		return;

	if (!func_72(uParam0))
		return;

	if (!func_73(uParam0))
		return;

	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);

	if (CAM::GET_LETTER_BOX_RATIO() < 1f)
		return;

	func_59(uParam0);
	return;
}

void func_29(var uParam0) // Position - 0xAF5 Hash - 0x4332D616 ^0x6CE453B
{
	func_66(&(uParam0->f_1));
	return;
}

void func_30(var uParam0) // Position - 0xB05 Hash - 0xA5309F47 ^0xFA492163
{
	Hash hash;

	func_60(&(uParam0->f_1));
	func_74(*uParam0);
	func_75(uParam0, 0);

	if (MISC::IS_BIT_SET(uParam0->f_327, 6))
	{
		func_44(*uParam0, &hash);
		func_76(uParam0, hash, &(uParam0->f_299));
	}

	return;
}

void func_31(var uParam0) // Position - 0xB47 Hash - 0x8B057BA ^0x4FCB3AA0
{
	if (!MISC::IS_BIT_SET(uParam0->f_327, 2))
	{
		func_77(uParam0);
	
		if (MISC::IS_BIT_SET(uParam0->f_327, 2))
		{
			if (!uParam0->f_339)
			{
				func_43(uParam0, true);
				func_78(uParam0);
				func_79(1);
			}
		}
	
		return;
	}

	func_80(uParam0);
	func_81(uParam0);

	if (MISC::IS_BIT_SET(uParam0->f_327, 7))
	{
		func_82(uParam0, &(uParam0->f_299));
		func_82(uParam0, &(uParam0->f_309));
	}

	if (!MISC::IS_BIT_SET(uParam0->f_327, 3))
		func_83(uParam0);

	if (MISC::IS_BIT_SET(uParam0->f_327, 22))
		func_84(uParam0);

	if (uParam0->f_234.f_2 != 6)
		func_85(uParam0);

	func_86(uParam0);

	if (func_47(uParam0))
		func_48(uParam0);

	func_87(false, false, true);

	if (!func_88(uParam0) && !func_89(uParam0))
		return;

	func_59(uParam0);
	return;
}

void func_32(var uParam0) // Position - 0xC30 Hash - 0x8B790BA8 ^0x9037238A
{
	var unk;

	func_66(&(uParam0->f_1));
	func_90(*uParam0, &unk, 0, 0);

	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(unk.f_3, 2f))
		MISC::CLEAR_BIT(&(uParam0->f_327), 18);

	func_43(uParam0, false);
	func_91(&(uParam0->f_342));
	func_75(uParam0, 1);

	if (func_92(uParam0->f_341))
		func_93(&(uParam0->f_341), true, true);

	if (func_92(uParam0->f_346))
		func_93(&(uParam0->f_346), true, true);

	if (func_92(uParam0->f_348))
		func_93(&(uParam0->f_348), true, true);

	if (uParam0->f_234.f_2 != 6)
		TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(uParam0->f_234.f_1);

	func_94(uParam0, true);
	return;
}

void func_33(var uParam0) // Position - 0xCDC Hash - 0x5C1E97F8 ^0x8DD90A54
{
	func_60(&(uParam0->f_1));
	func_95(uParam0);
	return;
}

void func_34(var uParam0) // Position - 0xCF2 Hash - 0x1379B9B ^0x1379B9B
{
	func_87(false, false, true);
	func_96();

	if (!func_97(uParam0))
		return;

	func_59(uParam0);
	return;
}

void func_35(var uParam0) // Position - 0xD18 Hash - 0x6202F457 ^0xE4DA708
{
	func_66(&(uParam0->f_1));
	func_98(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_327), 2);
	return;
}

void func_36(var uParam0) // Position - 0xD38 Hash - 0x4332D616 ^0x6CE453B
{
	func_60(&(uParam0->f_1));
	return;
}

void func_37(var uParam0) // Position - 0xD48 Hash - 0x1FAED32C ^0xB75252CA
{
	var entityName;
	var unk3;

	func_96();

	if (!MISC::IS_BIT_SET(uParam0->f_327, 18))
	{
		func_59(uParam0);
		return;
	}

	if (!MISC::IS_BIT_SET(uParam0->f_327, 2))
	{
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false, 256);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		entityName = { func_99(*uParam0, 0, PED::IS_PED_MALE(Global_33)) };
		func_90(*uParam0, &unk3, 0, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_338, &entityName, Global_33, 0);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_338, unk3.f_3, 0f, 0f, unk3.f_7, 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_338);
		MISC::SET_BIT(&(uParam0->f_327), 2);
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_IN(500);
	
		if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_338) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_338, false))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_59(uParam0);
		}
	}

	return;
}

void func_38(var uParam0) // Position - 0xE24 Hash - 0x4332D616 ^0x6CE453B
{
	func_66(&(uParam0->f_1));
	return;
}

void func_39(var uParam0) // Position - 0xE34 Hash - 0x1B57E6E3 ^0xA0ED45A2
{
	func_60(&(uParam0->f_1));
	func_62(*uParam0);

	if (!MISC::IS_BIT_SET(uParam0->f_327, 11))
	{
		func_94(uParam0, false);
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_327, 10))
	{
		func_94(uParam0, false);
	}
	else
	{
		func_100(true);
		Global_1292128.f_12 = 1;
	}

	return;
}

void func_40(var uParam0) // Position - 0xE89 Hash - 0xA65BACCC ^0x2654FE64
{
	BOOL flag;

	func_87(false, false, true);
	flag = true;

	if (!func_42(uParam0))
		flag = false;

	if (!MISC::IS_BIT_SET(uParam0->f_327, 0))
		if (!func_101(*uParam0))
			flag = false;

	if (func_102(uParam0))
		flag = false;

	if (flag)
	{
		func_103(*uParam0, 0);
		func_104(*uParam0, 1);
		func_105(uParam0);
		func_106(uParam0);
		func_59(uParam0);
	}

	return;
}

void func_41(var uParam0) // Position - 0xEF7 Hash - 0x4332D616 ^0x6CE453B
{
	func_66(&(uParam0->f_1));
	return;
}

BOOL func_42(var uParam0) // Position - 0xF07 Hash - 0xDDBC6910 ^0x66B14653
{
	if (!func_107(uParam0))
		return false;

	if (!func_108(uParam0))
		return false;

	func_109(uParam0);
	func_110(uParam0);

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() > 0)
		PED::_UNRESERVE_AMBIENT_PEDS(5);

	return true;
}

void func_43(var uParam0, BOOL bParam1) // Position - 0xF45 Hash - 0x283C0385 ^0x30FE26FF
{
	if (bParam1)
	{
		func_111(1);
		func_112();
		WEAPON::_HIDE_PED_WEAPONS(Global_1295666.f_3, 2, true);
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL, 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1295666.f_3, false, true);
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1295666.f_3, true);
	
		if (func_113())
			func_49();
	
		func_114();
	
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);
	
		if (func_115() || PED::_IS_PED_DRUNK(Global_1295666.f_3))
		{
			func_116(true);
			func_117();
		
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				CAM::DO_SCREEN_FADE_IN(500);
		}
	
		func_118();
		Global_13 = true;
		func_119(Global_1295666.f_3);
	
		if (func_120(Global_1295666.f_3))
		{
			uParam0->f_345 = func_121(Global_1295666.f_3);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1295666.f_3, true, true);
		}
	
		func_122(false);
		uParam0->f_339 = 1;
		HUD::_ENABLE_HUD_CONTEXT(-1319249689);
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
		MISC::SET_BIT(&(uParam0->f_327), 21);
		func_123(false, 28);
	}
	else
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_1295666.f_3, true);
		PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1295666.f_3, false);
		func_111(false);
		func_124();
		Global_13 = false;
		func_122(true);
		uParam0->f_339 = 0;
		HUD::_DISABLE_HUD_CONTEXT(-1319249689);
	
		if (!MISC::IS_BIT_SET(uParam0->f_327, 18) && MISC::IS_BIT_SET(uParam0->f_327, 21))
		{
			NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
			MISC::CLEAR_BIT(&(uParam0->f_327), 21);
		}
	
		func_123(true, 2);
	}

	return;
}

BOOL func_44(int iParam0, var uParam1) // Position - 0x10CA Hash - 0xC9049667 ^0xD775215
{
	*uParam1 = 0;

	switch (iParam0)
	{
		case 3:
		
	
		case 4:
		
	
		case 5:
		
	
		case 6:
		
	
		case 7:
		
	
		default:
		
	}

	return false;
}

BOOL func_45(int iParam0, var uParam1) // Position - 0x1139 Hash - 0xB639B66B ^0xD0D57FF1
{
	*uParam1 = 0;

	switch (iParam0)
	{
		case 3:
			*uParam1 = 239629152;
			return true;
	
		default:
		
	}

	return false;
}

Hash func_46(int iParam0) // Position - 0x1160 Hash - 0xC02FF737 ^0x4B828969
{
	switch (iParam0)
	{
		case 1:
			return joaat("CUTSCENE_MPCGOI1");
	
		case 2:
			return joaat("CUTSCENE_MPCGOI2");
	
		case 3:
			return -732709691;
	
		case 4:
			return 1691387227;
	
		case 5:
			return -969278268;
	
		case 6:
			return joaat("CUTSCENE_MPRM1");
	
		case 7:
			return 317202356;
	
		case 8:
			return 2111135919;
	
		case 9:
			return 1835271178;
	
		default:
		
	}

	return 0;
}

BOOL func_47(var uParam0) // Position - 0x11EF Hash - 0x36FE80C2 ^0x36FE80C2
{
	return uParam0->f_296 != 0;
}

void func_48(var uParam0) // Position - 0x11FE Hash - 0x4864F366 ^0xD502AEDA
{
	if (uParam0->f_296 == 0)
		return;

	UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_296);
	uParam0->f_296 = 0;
	return;
}

void func_49() // Position - 0x1221 Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_125(false);
	return;
}

BOOL func_50(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x122E Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_51(int iParam0) // Position - 0x1249 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x126A Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

void func_53(int iParam0, var uParam1, var uParam2) // Position - 0x12A6 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_54(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x12C2 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_126(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_127(iParam0))
		return false;

	if (func_128(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_129(iParam0, 1) || func_130(32768))
		if (!func_129(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_131())
		return false;

	return true;
}

void func_55(int iParam0, int iParam1) // Position - 0x1364 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_56(int iParam0) // Position - 0x1388 Hash - 0x5000025C ^0x5000025C
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

int func_57(int iParam0) // Position - 0x13C7 Hash - 0xE34A477A ^0xE34A477A
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

int func_58() // Position - 0x145D Hash - 0xC5D7DDC6 ^0x4574BD3F
{
	Player player;

	player = PLAYER::INT_TO_PLAYERINDEX(Global_1295666.f_11);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return 0;

	if (func_132(Global_1295666.f_11))
		return 1;

	return 2;
}

void func_59(var uParam0) // Position - 0x1491 Hash - 0xD4628826 ^0xADBCC1A5
{
	int num;

	uParam0->f_1.f_1 = uParam0->f_1;
	MISC::SET_BIT(&(uParam0->f_1.f_5), uParam0->f_1.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_1.f_4), uParam0->f_1.f_1);
	num = uParam0->f_1;
	num = num + 1;
	uParam0->f_1 = num;

	if (uParam0->f_1 == 8)
		uParam0->f_1 = 7;

	Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/] = uParam0->f_1;
	return;
}

void func_60(var uParam0) // Position - 0x14FD Hash - 0xC3056EA2 ^0xBEC57CEE
{
	MISC::SET_BIT(&(uParam0->f_4), *uParam0);
	return;
}

int func_61(var uParam0, int iParam1) // Position - 0x1510 Hash - 0xC4824D0 ^0x2903A32E
{
	switch (iParam1)
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
		
	
		default:
		
	}

	return 0;
}

void func_62(int iParam0) // Position - 0x2256 Hash - 0x5EB110E0 ^0xFE35857A
{
	if (!func_136(iParam0))
		return;

	if (Global_1056554[Global_1295666 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 != -1)
		Global_1056554[Global_1295666 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 = -1;

	return;
}

int func_63(var uParam0) // Position - 0x229A Hash - 0x6BCB9061 ^0xD5F1A3C8
{
	var unk;
	var unk4;
	int i;

	if (MISC::IS_BIT_SET(uParam0->f_327, 9) && _IS_NULL_VECTOR(uParam0->f_320))
	{
		if (!func_138(*uParam0, &unk, &unk4, 1))
		{
		}
		else
		{
			if (func_139(uParam0->f_320, unk))
				return 0;
		
			uParam0->f_320 = { unk };
			uParam0->f_323 = { unk4 };
		
			for (i = 0; i < 2; i = i + 1)
			{
				uParam0->f_8[i /*40*/].f_33 = { unk };
				uParam0->f_8[i /*40*/].f_36 = { unk4 };
			}
		
			return 1;
		}
	}
	else
	{
		_IS_NULL_VECTOR(uParam0->f_320);
	}

	return 0;
}

void func_64(var uParam0) // Position - 0x2347 Hash - 0xE9B85D4 ^0x4EC1045A
{
	switch (*uParam0)
	{
		case 4:
		
	
		default:
			return;
	}

	return;
}

BOOL func_65(var uParam0) // Position - 0x24B8 Hash - 0x128393B7 ^0xB7DFB226
{
	switch (func_141(uParam0))
	{
		case 0:
			PED::_RESERVE_AMBIENT_PEDS(5);
			func_142(uParam0, 1);
			break;
	
		case 1:
			if (func_143(uParam0))
				func_142(uParam0, 2);
			break;
	
		case 2:
			if (func_144(uParam0))
				func_142(uParam0, 3);
			break;
	
		case 3:
			func_145(uParam0);
			func_142(uParam0, 4);
			break;
	
		case 4:
			func_142(uParam0, 5);
			break;
	
		case 5:
			return true;
	}

	return false;
}

void func_66(var uParam0) // Position - 0x2544 Hash - 0xC3056EA2 ^0x3DDCCAAA
{
	MISC::SET_BIT(&(uParam0->f_5), *uParam0);
	return;
}

void func_67(var uParam0) // Position - 0x2557 Hash - 0x33D241F6 ^0x18B98002
{
	BOOL flag;
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3) || MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
			flag = true;
	}

	if (flag)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_327, 4) && !MISC::IS_BIT_SET(uParam0->f_327, 5))
		{
			switch (func_58())
			{
				case 1:
					MISC::SET_BIT(&(uParam0->f_327), 4);
					break;
			
				case 2:
					MISC::SET_BIT(&(uParam0->f_327), 5);
					break;
			}
		}
	}

	return;
}

void func_68(var uParam0) // Position - 0x25EE Hash - 0x1041C50B ^0xB12B9246
{
	var unk;
	char* str;
	char* str2;
	int num;
	Ped mount;

	switch (func_146(uParam0))
	{
		case 0:
			break;
	
		case 1:
			if (func_147(uParam0) == 0)
			{
				func_148(uParam0, 0);
				return;
			}
		
			switch (func_147(uParam0))
			{
				case 1:
					str = "MP_FLOW_CUTSCENE_ALERT_TITLE_LEADER";
					str2 = "MP_FLOW_CUTSCENE_ALERT_SUB_LEADER";
					break;
			
				case 2:
					str = "MP_FLOW_CUTSCENE_ALERT_TITLE_IN_PROGRESS";
					str2 = "MP_FLOW_CUTSCENE_ALERT_SUB_IN_PROGRESS";
					break;
			
				case 3:
					str = "MP_FLOW_CUTSCENE_ALERT_TITLE_WANTED";
					str2 = "MP_FLOW_CUTSCENE_ALERT_SUB_WANTED";
					break;
			}
		
			unk.f_7.f_3 = 1;
			unk.f_7 = joaat("IB_EXIT");
			func_149(uParam0, unk, str, str2);
			func_148(uParam0, 2);
			break;
	
		case 2:
			if (!func_47(uParam0))
				return;
		
			num = func_150();
		
			if (num != -1577439368)
			{
				mount = PED::GET_MOUNT(Global_1295666.f_3);
			
				if (ENTITY::DOES_ENTITY_EXIST(mount))
					func_151(mount, 1, true);
			
				func_152(Global_1295666.f_12, 0f, -1082130432, -1082130432, true, 1, 1);
				func_48(uParam0);
				func_148(uParam0, 3);
			}
			break;
	
		case 3:
			if (func_153(255) == 1)
			{
				func_148(uParam0, 0);
				func_154(uParam0, 0);
			}
			break;
	}

	return;
}

BOOL func_69(var uParam0) // Position - 0x2727 Hash - 0xC3E0F41A ^0x95A6F8D0
{
	int num;

	if (!func_155(*uParam0))
	{
		num = 1;
	
		if (func_156(*uParam0))
			if (Global_1295666.f_11 != Global_1295666)
				num = 0;
	
		if (func_157(uParam0) && num)
			if (func_158())
				return true;
	
		return false;
	}

	if (Global_1295666.f_11 == Global_1295666 || !GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10))
	{
		if (func_159(*uParam0) || func_157(uParam0))
			if (func_158())
				return true;
	}
	else if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10))
	{
		if (Global_1295666.f_11 >= 32 || Global_1295666.f_11 < 0)
			return false;
	
		if (func_160(*uParam0, PLAYER::INT_TO_PLAYERINDEX(Global_1295666.f_11)) == 3)
			if (!func_161(*uParam0))
				return true;
			else if (func_157(uParam0))
				func_162(uParam0, 2);
		else if (func_157(uParam0))
			if (!func_163())
				if (!PED::IS_PED_HOGTIED(Global_1295666.f_3))
					func_162(uParam0, 1);
	}

	return false;
}

void func_70(BOOL bParam0) // Position - 0x284B Hash - 0x14F74495 ^0x14F74495
{
	if (func_164(bParam0))
		func_165(func_18(), false);

	return;
}

BOOL func_71(var uParam0) // Position - 0x2865 Hash - 0xD7B4EDC9 ^0x50B8AB97
{
	if (!Global_1295666.f_17[Global_1295666])
		return false;

	if (func_166())
		return false;

	if (!func_167(255))
		return false;

	if (PED::IS_PED_INJURED(Global_1295666.f_3))
		return false;

	if (PED::IS_PED_HOGTIED(Global_1295666.f_3))
	{
		TASK::UNHOGTIE_PED(Global_1295666.f_3, 3, 0, 0, 0, 1090519040);
		return false;
	}

	if (func_168(Global_1295666.f_5, true, false, true))
	{
		if (Global_1295666.f_11 == Global_1295666)
			func_162(uParam0, 3);
	
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1295666.f_3, true))
		return false;

	if (Global_1108965.f_775.f_28 == 6)
		return false;

	if (func_164(false))
		return false;

	if (func_153(255) != 1)
		return false;

	return true;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_72(var uParam0) // Position - 0x2935 Hash - 0x78DD2433 ^0x78DD2433
{
	int i;
	int j;
	int k;
	int num;
	int l;
	var unk;
	Player player;
	int m;
	int num2;
	BOOL flag;

	unk = 2;

	switch (func_169(uParam0))
	{
		case 0:
			func_170(uParam0);
			func_171(uParam0, 1);
			break;
	
		case 1:
			for (i = 0; i < 2; i = i + 1)
			{
				if (!func_172(uParam0, i))
				{
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 2:
								goto 0x161;
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 1:
								goto 0x161;
						}
					}
				
					for (k = 0; k < 4; k = k + 1)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[k /*15*/].f_1))
						{
						}
						else if (uParam0->f_89[k /*15*/].f_11 == -1)
						{
						}
						else if (uParam0->f_89[k /*15*/].f_11 != i)
						{
						}
						else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_89[k /*15*/].f_11.f_1)))
						{
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_89[k /*15*/].f_1, false);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_8[i /*40*/], &(uParam0->f_89[k /*15*/].f_11.f_1), uParam0->f_89[k /*15*/].f_1, 0);
						}
					}
				}
			}
		
			func_171(uParam0, 2);
			break;
	
		case 2:
			for (i = 0; i < 2; i = i + 1)
			{
				if (!func_172(uParam0, i))
				{
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 2:
								goto 0x243;
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 1:
								goto 0x243;
						}
					}
				
					if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 1))
					{
					}
					else if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 2))
					{
					}
					else
					{
						uParam0->f_241[i /*27*/] = func_173(*uParam0, i);
					
						if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam0->f_241[i /*27*/]))
							break;
					}
				}
			}
		
			for (i = 0; i < 2; i = i + 1)
			{
				if (!func_172(uParam0, i))
				{
				}
				else
				{
					for (j = 0; j < 32; j = j + 1)
					{
						if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uParam0->f_241[i /*27*/], j))
						{
						}
						else
						{
							num = num + 1;
						}
					}
				
					uParam0->f_241[i /*27*/].f_26 = num;
					num = 0;
				}
			}
		
			func_171(uParam0, 3);
			break;
	
		case 3:
			for (i = 0; i < 2; i = i + 1)
			{
				if (!func_172(uParam0, i))
				{
					unk[i] = 1;
				}
				else if (!func_155(*uParam0))
				{
					player = PLAYER::INT_TO_PLAYERINDEX(Global_1295666);
				
					if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uParam0->f_241[i /*27*/], j))
					{
						if (func_174(uParam0, player, i, 0))
						{
							SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&uParam0->f_241[i /*27*/], j);
							break;
						}
					}
					else
					{
						unk[i] = 1;
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 2:
								unk[i] = 1;
								goto 0x515;
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 1:
								unk[i] = 1;
								goto 0x515;
						}
					}
				
					k = 0;
				
					for (j = 0; j < 4; j = j + 1)
					{
						if (func_175(uParam0, i, j, false))
						{
							if (func_176(uParam0, i, j))
							{
								if (!uParam0->f_241[i /*27*/].f_1[j /*6*/].f_1)
								{
									PED::REMOVE_TAG_FROM_META_PED(uParam0->f_241[i /*27*/].f_1[j /*6*/], joaat("holsters_left"), 1);
									PED::_UPDATE_PED_VARIATION(uParam0->f_241[i /*27*/].f_1[j /*6*/], false, true, true, true, false);
									uParam0->f_241[i /*27*/].f_1[j /*6*/].f_1 = 1;
								}
								else
								{
									k = k + 1;
									goto 0x424;
								}
							}
						}
						else
						{
							unk[i] = 1;
						}
					}
				
					if (k != uParam0->f_241[i /*27*/].f_26)
					{
						unk[i] = 0;
					}
					else
					{
						unk[i] = 1;
						goto 0x515;
					}
				
					for (j = 0; j < 32; j = j + 1)
					{
						if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uParam0->f_241[i /*27*/], j))
						{
						}
						else
						{
							player = PLAYER::INT_TO_PLAYERINDEX(j);
						
							if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
							{
							}
							else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
							{
							}
							else
							{
								num2 = -1;
							
								if (!func_155(*uParam0))
								{
									num2 = 0;
								}
								else
								{
									for (m = 0; m < 7; m = m + 1)
									{
										if (Global_1056554[Global_1295666.f_11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[m] == player)
											num2 = m;
									}
								}
							
								if (num2 != -1)
								{
									if (func_174(uParam0, player, i, num2))
									{
										SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&uParam0->f_241[i /*27*/], j);
										break;
									}
								}
							}
						}
					}
				}
			}
		
			for (i = 0; i < 2; i = i + 1)
			{
				if (!unk[i])
					flag = true;
			}
		
			if (!flag)
				func_171(uParam0, 4);
			break;
	
		case 4:
			for (i = 0; i < 2; i = i + 1)
			{
				if (!func_172(uParam0, i))
				{
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 2:
								goto 0x672;
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
					{
						switch (func_58())
						{
							case 0:
								return false;
						
							case 1:
								goto 0x672;
						}
					}
				
					for (j = 0; j < 4; j = j + 1)
					{
						if (!func_175(uParam0, i, j, true))
						{
						}
						else if (uParam0->f_241[i /*27*/].f_1[j /*6*/].f_2 != uParam0->f_8[i /*40*/])
						{
						}
						else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_241[i /*27*/].f_1[j /*6*/].f_2.f_1)))
						{
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_241[i /*27*/].f_1[j /*6*/], false);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_241[i /*27*/].f_1[j /*6*/].f_2, &(uParam0->f_241[i /*27*/].f_1[j /*6*/].f_2.f_1), uParam0->f_241[i /*27*/].f_1[j /*6*/], 0);
						}
					}
				}
			}
		
			if (MISC::IS_BIT_SET(uParam0->f_327, 20))
				func_171(uParam0, 5);
			else
				func_171(uParam0, 6);
			break;
	
		case 5:
			for (l = 0; l <= 5; l = l + 1)
			{
				if (!func_177(uParam0, l))
				{
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[l /*13*/]))
				{
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_8[0 /*40*/], &(uParam0->f_150[l /*13*/].f_9.f_1), uParam0->f_150[l /*13*/], 0);
				}
			}
		
			func_171(uParam0, 6);
			break;
	
		case 6:
			return true;
	}

	return false;
}

BOOL func_73(var uParam0) // Position - 0x3038 Hash - 0x5368AEE4 ^0xDBD8F1FF
{
	var unk;

	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (PED::IS_PED_ON_MOUNT(Global_1295666.f_3))
			{
				func_178(&unk, 2);
				func_178(&unk, 256);
			
				if (func_179(Global_1295666.f_3, &unk, 32, 0, 0, 3f, 100, 0, 0))
					return true;
			}
			else
			{
				return true;
			}
		
			return false;
	}

	return true;
}

void func_74(int iParam0) // Position - 0x30BB Hash - 0xC987036 ^0x6B9BD23C
{
	if (!func_136(iParam0))
		return;

	if (Global_1295666.f_11 == Global_1295666 && Global_1056554[Global_1295666 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 == -1)
		Global_1056554[Global_1295666 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();

	return;
}

void func_75(var uParam0, int iParam1) // Position - 0x3113 Hash - 0x9147FD03 ^0x9147FD03
{
	return;
}

void func_76(var uParam0, Hash hParam1, int* piParam2) // Position - 0x311B Hash - 0xF0D6FEE1 ^0xF0D6FEE1
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	int num;
	var unk;

	hash = func_180(hParam1, 0, true, -1, true);

	if (!func_181(hParam1, hash, 1))
		return;

	if (func_182(hParam1))
	{
		hash2 = func_183(hParam1, true);
		hash3 = func_184(hash2, hash, false);
	}
	else
	{
		hash3 = func_185(hParam1, 75922725, false);
	}

	if (hash3 != 0)
		num = func_186(hash3);

	if (func_187(piParam2, hParam1, 1, true, hash, -1, true))
	{
		TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(piParam2->f_1, joaat("net_cutscene"), joaat("net_cutscene"));
	
		if (hash3 != 0)
			TELEMETRY::_TELEMETRY_COUPON(&(Global_1297441.f_67.f_6), func_188(hash3), hash3, num, hParam1, joaat("net_cutscene"));
	
		func_189(hParam1);
		unk.f_7 = -142743235;
		unk.f_16 = -1;
		unk.f_6 = 1;
	
		if (func_182(hParam1))
			uParam0->f_356 = func_184(func_183(hParam1, true), hash, false);
		else
			uParam0->f_356 = func_185(hParam1, hash, false);
	
		unk.f_16 = func_186(uParam0->f_356);
		func_190(piParam2->f_1, unk);
		MISC::SET_BIT(&(uParam0->f_327), 10);
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_77(var uParam0) // Position - 0x3234 Hash - 0x681F0667 ^0x8B44E7CA
{
	int i;
	BOOL flag;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
			{
				if (func_58() != 1)
				{
				}
				else
				{
					goto 0x5A;
				}
			}
		
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
			{
				if (func_58() != 2)
				{
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 1))
				{
				}
				else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_8[i /*40*/], false))
				{
					func_191(uParam0, i);
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_8[i /*40*/]);
					return;
				}
				else
				{
					flag = true;
				
					if (MISC::IS_BIT_SET(uParam0->f_327, 15))
						func_94(uParam0, false);
				}
			}
		
			if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 1))
			{
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_8[i /*40*/], false))
			{
				func_191(uParam0, i);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_8[i /*40*/]);
				return;
			}
			else
			{
				flag = true;
			
				if (MISC::IS_BIT_SET(uParam0->f_327, 15))
					func_94(uParam0, false);
			}
		}
	}

	if (flag)
		MISC::SET_BIT(&(uParam0->f_327), 2);

	return;
}

void func_78(var uParam0) // Position - 0x3302 Hash - 0xDD47467 ^0xAD230E11
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	func_192();
	unk = { func_193(*uParam0) };

	if (func_194(unk))
		func_195(unk, 0);

	return;
}

void func_79(int iParam0) // Position - 0x333A Hash - 0xF6DB87B5 ^0xF6DB87B5
{
	func_196(true);
	return;
}

void func_80(var uParam0) // Position - 0x3347 Hash - 0x5DEE3F3B ^0x59EF22F
{
	int i;
	Interior interiorAtCoords;

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else if (!_IS_NULL_VECTOR(uParam0->f_357))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 9))
			{
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_357);
			
				if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
				{
					STREAMING::LOAD_SCENE_START_SPHERE(uParam0->f_357, 20f, 0);
					INTERIOR::PIN_INTERIOR_IN_MEMORY(interiorAtCoords);
					MISC::SET_BIT(&(uParam0->f_8[i /*40*/].f_1), 9);
				}
			}
		}
	}

	return;
}

void func_81(var uParam0) // Position - 0x33D4 Hash - 0x6EA404BC ^0xD6FD56FA
{
	int i;

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_327, 7))
		{
			if (6 == *uParam0)
				func_197(uParam0, i);
			else
				func_198(uParam0, i);
		
			func_199(uParam0);
		}
	}

	return;
}

void func_82(var uParam0, int* piParam1) // Position - 0x342D Hash - 0x24B7F880 ^0x4792DC18
{
	Any any;
	var unk;
	var unk5;
	int num;

	unk5 = -1;
	unk5.f_4.f_7 = -142743235;
	unk5.f_4.f_16 = -1;

	if (!func_44(*uParam0, &any))
		return;

	if (piParam1->f_1 == -1)
		return;

	if (!MISC::IS_BIT_SET(uParam0->f_327, 10))
		return;

	num = func_200(piParam1);

	switch (num)
	{
		case 1:
		case 5:
			break;
	
		case 2:
		case 4:
			piParam1->f_1 = -1;
			break;
	
		case 3:
			if (uParam0->f_356 != 0 && func_201(piParam1->f_1, &unk))
			{
				func_202(piParam1->f_1, &unk5);
				TELEMETRY::_TELEMETRY_COUPON(&unk, func_188(uParam0->f_356), uParam0->f_356, unk5.f_4.f_16, any, joaat("net_cutscene"));
			}
		
			piParam1->f_1 = -1;
			uParam0->f_356 = 0;
			func_203(1);
			break;
	}

	return;
}

void func_83(var uParam0) // Position - 0x350E Hash - 0x620B2FFB ^0xF3C0505F
{
	func_204(uParam0);
	func_205(uParam0);
	func_86(uParam0);
	MISC::SET_BIT(&(uParam0->f_327), 3);
	return;
}

void func_84(var uParam0) // Position - 0x3533 Hash - 0x65EB6B80 ^0xC5CEF12B
{
	float num;
	var unk;

	switch (*uParam0)
	{
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_229))
			{
				uParam0->f_229 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_8[0 /*40*/], func_206(uParam0->f_229.f_1.f_1), false);
				return;
			}
		
			if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_229, 3))
				return;
		
			ENTITY::FIND_ANIM_EVENT_PHASE("cutscene", "LAW_INT", "WINDOW", &num, &unk);
		
			if (num <= ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_8[0 /*40*/]))
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(uParam0->f_229, 3);
				MISC::CLEAR_BIT(&(uParam0->f_327), 22);
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_85(var uParam0) // Position - 0x35C7 Hash - 0x8D71764A ^0x516BAD67
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_234))
		uParam0->f_234 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_8[0 /*40*/], func_206(uParam0->f_234.f_3.f_1), false);

	func_207(uParam0);
	return;
}

void func_86(var uParam0) // Position - 0x35FF Hash - 0xF26B7E59 ^0x26925824
{
	Entity entity;

	if (*uParam0 != 5)
		return;

	if (MISC::IS_BIT_SET(uParam0->f_327, 13))
		return;

	if (!func_208(38, &entity))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	func_209(func_134(), true);
	ENTITY::SET_ENTITY_VISIBLE(entity, false);
	MISC::SET_BIT(&(uParam0->f_327), 13);
	return;
}

void func_87(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3659 Hash - 0xF809D8B4 ^0x510DD861
{
	Player player;
	Ped playerPed;
	int i;

	Global_1072759.f_7 = 1;

	if (Global_1295666.f_16 - Global_1072759.f_9 > 2)
		if (bParam2)
			func_210(20f);

	Global_1072759.f_9 = Global_1295666.f_16;

	if (bParam0)
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(playerPed))
			{
				PED::SET_PED_RESET_FLAG(playerPed, 96, true);
			}
		}
	}

	if (func_211())
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();

	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
	func_212(250);

	if (bParam1)
		HUD::_0x5651516D947ABC53();

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_88(var uParam0) // Position - 0x372C Hash - 0xC098153F ^0x19F0E7D
{
	int i;
	float animSceneDuration;
	float animSceneTime;
	float num;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
			{
				switch (func_58())
				{
					case 0:
						return false;
				
					case 2:
						goto 0x132;
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
			{
				switch (func_58())
				{
					case 0:
						return false;
				
					case 1:
						goto 0x132;
				}
			}
		
			if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 1))
			{
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_8[i /*40*/], false))
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (MISC::IS_BIT_SET(uParam0->f_327, 14))
					{
						if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_241[i /*27*/].f_1[0 /*6*/], MISC::GET_HASH_KEY("NotFinalPlaylist")) && func_213(uParam0, i))
						{
							animSceneDuration = ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_8[i /*40*/]);
							animSceneTime = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_8[i /*40*/]);
							num = animSceneDuration - animSceneTime;
						
							if (num < 1f)
								CAM::DO_SCREEN_FADE_OUT(500);
						}
					}
				}
			}
			else
			{
				func_214(uParam0);
				return true;
			}
		}
	}

	return false;
}

BOOL func_89(var uParam0) // Position - 0x386B Hash - 0x9C373D5F ^0x5D910614
{
	BOOL flag;
	int i;
	int num;
	Player player;
	int num2;
	char* str;
	BOOL flag2;
	int j;

	if (MISC::IS_BIT_SET(uParam0->f_327, 12))
		return false;

	if (!func_215(&(uParam0->f_342)))
	{
		func_216(&(uParam0->f_342), false);
		return false;
	}
	else if (func_217(&(uParam0->f_342)) < &func_56)
	{
		return false;
	}

	if (func_155(*uParam0))
	{
		for (i = 0; i < 32; i = i + 1)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
			{
			}
			else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[i]))
			{
			}
			else
			{
				player = Global_1295666.f_149[i];
			
				if (player == Global_1295666.f_11 && Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
					flag = true;
			
				if (Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/] == 3 || Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
				{
					if (Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/].f_14)
						num2 = num2 + 1;
				
					num = num + 1;
				}
			}
		}
	}
	else
	{
		num = 1;
		flag = Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15;
	}

	str = "VOTE_SKIP_CONTEXT";

	if (num == 1)
		str = "VOTE_SKIP_CONTEXT_SOLO";

	if (!func_92(uParam0->f_341))
	{
		uParam0->f_341 = func_218(str, joaat("INPUT_SKIP_CUTSCENE"), 4, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("LONG_TIMED_EVENT"), 0);
		func_219(uParam0->f_341, 6, true);
		func_220(uParam0->f_341, 19, true, true);
	
		if (num > 1)
			func_221(uParam0->f_341, str, num2, num, true);
	
		if (num2 == 0)
			func_220(uParam0->f_341, 21, true, true);
	
		func_222(uParam0->f_341, true, true, true);
	}
	else
	{
		if (num > 1)
			if (flag)
				func_221(uParam0->f_341, str, num, num, true);
			else
				func_221(uParam0->f_341, str, num2, num, true);
	
		if (!uParam0->f_340 && num2 > 0 && !Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14)
		{
			func_93(&(uParam0->f_341), true, true);
			uParam0->f_340 = 1;
		}
	
		if (func_223(uParam0->f_341, true))
		{
			Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14 = 1;
			func_220(uParam0->f_341, 21, false, true);
			func_222(uParam0->f_341, false, true, true);
		
			if (!func_155(*uParam0))
			{
				num2 = num;
				flag = true;
			}
		}
	}

	if (num2 == num && !Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
		Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15 = 1;

	if (flag)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			for (j = 0; j < 2; j = j + 1)
			{
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_8[j /*40*/], false))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_8[j /*40*/], true);
					flag2 = 1;
				}
			}
		}
	}

	return flag && flag2;
}

BOOL func_90(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x3BAB Hash - 0x6F1B2DA3 ^0x51DCD88D
{
	var unk;
	int num;
	var unk4;

	switch (iParam0)
	{
		case 1:
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -873.1006f, -1261.7759f, 42.6244f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.2726f, -1253.9668f, 42.6373f };
							uParam1->f_6 = 83.2f;
							break;
					
						case 1:
							uParam1->f_3 = { -875.3077f, -1258.8345f, 42.5703f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.0361f, -1251.3116f, 42.6475f };
							uParam1->f_6 = 83.2f;
							break;
					
						case 2:
							uParam1->f_3 = { -870.6182f, -1259.3523f, 42.572f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.5291f, -1246.5092f, 42.677f };
							uParam1->f_6 = 83.2f;
							break;
					
						case 3:
							uParam1->f_3 = { -878.0989f, -1256.5986f, 42.6036f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.4508f, -1243.8885f, 42.6845f };
							uParam1->f_6 = 83.2f;
							break;
					
						case 4:
							uParam1->f_3 = { -872.9756f, -1257.088f, 42.5735f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.7613f, -1256.6095f, 42.6236f };
							uParam1->f_6 = 83.2f;
							break;
					
						case 5:
							uParam1->f_3 = { -867.9123f, -1257.6201f, 42.5442f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.1403f, -1240.7152f, 42.7038f };
							uParam1->f_6 = 83.2f;
							break;
					
						case 6:
							uParam1->f_3 = { -872.8755f, -1254.0095f, 42.5223f };
							uParam1->f_7 = 0f;
							*uParam1 = { -892.9855f, -1259.2898f, 42.5953f };
							uParam1->f_6 = 52.8f;
							break;
					}
					break;
			
				case 1:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -852.5473f, -1247.14f, 42.3693f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -843.9141f, -1242.2058f, 42.6034f };
							uParam1->f_6 = 176.8f;
							break;
					
						case 1:
							uParam1->f_3 = { -855.9294f, -1243.9004f, 42.3176f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -841.25f, -1242.6942f, 42.5649f };
							uParam1->f_6 = 176.8f;
							break;
					
						case 2:
							uParam1->f_3 = { -852.6059f, -1243.8721f, 42.439f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -838.6961f, -1242.7616f, 42.5183f };
							uParam1->f_6 = 176.8f;
							break;
					
						case 3:
							uParam1->f_3 = { -848.9722f, -1243.9932f, 42.5525f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -835.7775f, -1243.1111f, 42.5323f };
							uParam1->f_6 = 176.8f;
							break;
					
						case 4:
							uParam1->f_3 = { -854.2532f, -1241.5358f, 42.393f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -832.4411f, -1242.5651f, 42.5731f };
							uParam1->f_6 = 176.8f;
							break;
					
						case 5:
							uParam1->f_3 = { -850.7334f, -1241.6985f, 42.5441f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -826.2964f, -1242.5565f, 42.5382f };
							uParam1->f_6 = 176.8f;
							break;
					
						case 6:
							uParam1->f_3 = { -852.285f, -1239.152f, 42.5256f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -820.7101f, -1242.8156f, 42.5536f };
							uParam1->f_6 = 176.8f;
							break;
					}
					break;
			
				case 2:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -843.3099f, -1268.2366f, 42.6019f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -837.5016f, -1278.386f, 42.553f };
							uParam1->f_6 = 179.6f;
							break;
					
						case 1:
							uParam1->f_3 = { -843.525f, -1264.8993f, 42.6091f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -835.0971f, -1278.2675f, 42.5779f };
							uParam1->f_6 = 179.6f;
							break;
					
						case 2:
							uParam1->f_3 = { -843.2772f, -1272.0273f, 42.5937f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.6918f, -1278.3778f, 42.5896f };
							uParam1->f_6 = 179.6f;
							break;
					
						case 3:
							uParam1->f_3 = { -840.6252f, -1266.123f, 42.5251f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -830.1432f, -1278.2888f, 42.602f };
							uParam1->f_6 = 179.6f;
							break;
					
						case 4:
							uParam1->f_3 = { -840.4869f, -1269.8679f, 42.4709f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -827.615f, -1278.2808f, 42.612f };
							uParam1->f_6 = 179.6f;
							break;
					
						case 5:
							uParam1->f_3 = { -838.3458f, -1268.1422f, 42.5456f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.3187f, -1270.0267f, 42.5925f };
							uParam1->f_6 = 266.8f;
							break;
					
						case 6:
							uParam1->f_3 = { -838.4648f, -1264.7283f, 42.5524f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.2508f, -1267.4623f, 42.6008f };
							uParam1->f_6 = 266.8f;
							break;
					}
					break;
			}
		
			return true;
	
		case 3:
			switch (iParam2)
			{
				case 0:
					uParam1->f_3 = { 1342.3905f, -1307.5096f, 75.5794f };
					uParam1->f_7 = 67.1828f;
					*uParam1 = { 1339.2167f, -1305.1652f, 75.5944f };
					uParam1->f_6 = 336.17f;
					break;
			
				case 1:
					uParam1->f_3 = { 1337.5862f, -1307.4276f, 75.5462f };
					uParam1->f_7 = 66.7219f;
					*uParam1 = { 1313.5298f, -1306.4315f, 75.3049f };
					uParam1->f_6 = 133.7325f;
					break;
			
				case 2:
					uParam1->f_3 = { 1323.9487f, -1299.458f, 75.2824f };
					uParam1->f_7 = 45.8223f;
					*uParam1 = { 1320.7512f, -1286.5198f, 75.348f };
					uParam1->f_6 = 265.4273f;
					break;
			}
		
			return true;
	
		case 4:
			unk = { func_140(Global_1295666) };
		
			switch (unk.f_1)
			{
				case joaat("hennigans_stead_camp"):
				case joaat("rio_bravo_camp"):
				case joaat("great_plains_camp"):
				case joaat("tall_trees_camp"):
				case joaat("cholla_springs_camp"):
				case joaat("gaptooth_ridge_camp"):
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -3678.9094f, -2616.6455f, -15.0037f };
							uParam1->f_7 = 91.0549f;
							*uParam1 = { -3682.7607f, -2615.8572f, -15.0603f };
							uParam1->f_6 = 173.9262f;
							break;
					
						case 1:
							uParam1->f_3 = { -3691.773f, -2608.0095f, -14.7773f };
							uParam1->f_7 = 86.4678f;
							*uParam1 = { -3695.7368f, -2608.7515f, -14.7323f };
							uParam1->f_6 = 27.6929f;
							break;
					
						case 2:
							uParam1->f_3 = { -3689.26f, -2608.1838f, -14.9935f };
							uParam1->f_7 = 90.7284f;
							*uParam1 = { -3698.1995f, -2608.3777f, -14.7322f };
							uParam1->f_6 = 2.1578f;
							break;
					}
					break;
			
				case joaat("roanoke_ridge_camp"):
				case joaat("bayou_nawas_camp"):
				case joaat("scarlett_meadows_camp"):
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { 2815.196f, -1310.15f, 45.624f };
							uParam1->f_7 = 141.0373f;
							*uParam1 = { 2809.395f, -1316.526f, 45.504f };
							uParam1->f_6 = 310.8568f;
							break;
					
						case 1:
							uParam1->f_3 = { 2817.729f, -1308.707f, 45.558f };
							uParam1->f_7 = 80.7875f;
							*uParam1 = { 2807.212f, -1303.46f, 45.607f };
							uParam1->f_6 = 126.4258f;
							break;
					
						case 2:
							uParam1->f_3 = { 2806.232f, -1322.305f, 45.446f };
							uParam1->f_7 = 107.4473f;
							*uParam1 = { 2798.7f, -1312.359f, 45.412f };
							uParam1->f_6 = 127.8044f;
							break;
					}
					break;
			
				case joaat("cumberland_forest_camp"):
				case joaat("grizzlies_camp"):
				case joaat("heartland_camp"):
				case joaat("big_valley_camp"):
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -326.39f, 789.19f, 115.667f };
							uParam1->f_7 = 284.1014f;
							*uParam1 = { -321.1662f, 790.267f, 116.0272f };
							uParam1->f_6 = 11.602f;
							break;
					
						case 1:
							uParam1->f_3 = { -323.692f, 782.932f, 115.776f };
							uParam1->f_7 = 281.4508f;
							*uParam1 = { -312.8937f, 784.9355f, 116.5868f };
							uParam1->f_6 = -168.4326f;
							break;
					
						case 2:
							uParam1->f_3 = { -314.569f, 792.093f, 116.573f };
							uParam1->f_7 = 282.0273f;
							*uParam1 = { -303.8615f, 793.8496f, 117.1205f };
							uParam1->f_6 = 11.602f;
							break;
					}
					break;
			
				default:
					return false;
			}
		
			return true;
	
		case 5:
			if (iParam2 < 0 || iParam2 > 2)
				return false;
		
			num = func_134();
		
			if (num == -1)
				return false;
		
			unk4 = 3;
			unk4.f_10 = 3;
			unk4.f_14 = 3;
			unk4.f_24 = 3;
		
			if (!func_224(num, &unk4))
				return false;
		
			uParam1->f_3 = { unk4[iParam2 /*3*/] };
			uParam1->f_7 = unk4.f_10[iParam2];
			*uParam1 = { unk4.f_14[iParam2 /*3*/] };
			uParam1->f_6 = unk4.f_24[iParam2];
			return true;
	
		case 6:
			uParam1->f_3 = { 1442.6262f, 369.0727f, 88.8836f };
			uParam1->f_7 = 69.9518f;
			uParam1->f_8 = 1;
			return true;
	
		case 7:
			uParam1->f_3 = { -1715.8911f, -309.4491f, 178.5556f };
			uParam1->f_7 = 150.5676f;
			return true;
	
		case 8:
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_7 = 0f;
			return false;
	
		case 9:
			uParam1->f_3 = { 2505.8f, -1240.3f, 49.2f };
			uParam1->f_7 = 270f;
			uParam1->f_8 = 1;
			return true;
	
		default:
		
	}

	return false;
}

void func_91(var uParam0) // Position - 0x465D Hash - 0x46B3830A ^0x717D457A
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

BOOL func_92(int iParam0) // Position - 0x4673 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_93(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x46B2 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_92(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_225(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_226(num);
	*uParam0 = 0;
	return;
}

void func_94(var uParam0, BOOL bParam1) // Position - 0x4706 Hash - 0xB6F48AA0 ^0x3C279FF6
{
	if (!bParam1)
		CAM::DO_SCREEN_FADE_IN(1000);
	else
		CAM::DO_SCREEN_FADE_OUT(1000);

	return;
}

void func_95(var uParam0) // Position - 0x4725 Hash - 0xDD0E3782 ^0xBF75DD6D
{
	Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 = -1;
	uParam0->f_329 = -1;
	return;
}

void func_96() // Position - 0x474C Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1904402.f_8874 = 1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_97(var uParam0) // Position - 0x475C Hash - 0x5FE3F794 ^0xB3BA3EB6
{
	Vector3 vector;
	int i;
	int num;
	Player player;
	int num2;
	Player player2;
	BOOL flag;
	BOOL flag2;
	int j;
	ItemSet itemSet;

	if (!CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (uParam0->f_329 != -1)
	{
		if (MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_329) >= 2)
			return true;
	
		return false;
	}

	player2 = Global_1295666.f_5;
	flag = Global_1295666.f_11 == player2;

	if (PED::IS_PED_ON_MOUNT(Global_1295666.f_3))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1295666.f_3, true, true);

	if (!func_90(*uParam0, &vector, num, num2))
		return true;

	if (!func_155(*uParam0))
		flag = true;

	if (flag)
		num2 = 1;
	else
		num = -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
		}
		else
		{
			player = Global_1295666.f_149[i];
		
			if (flag)
			{
				if (player2 != player)
				{
					if (Global_1056554[player2 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 == -1)
						if (GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[i]))
							if (Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 == num)
								num = num + 1;
				
					if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[i]))
					{
					}
					else
					{
						Global_1056554[player2 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[num2] = Global_1295666.f_149[i];
						num2 = num2 + 1;
						goto 0x1E8;
					}
				}
			}
			else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[i]))
			{
			}
			else if (Global_1295666.f_11 == player && Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 != -1)
			{
				for (j = 0; j < 7; j = j + 1)
				{
					if (Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[j] == Global_1295666.f_5)
					{
						num = Global_1056554[player /*491*/].f_42.f_1[*uParam0 /*16*/].f_1;
						num2 = j;
						break;
					}
				}
			}
		}
	}

	if (flag)
		num2 = 0;

	if (num >= 0 && num <= 2 || vector.f_8)
	{
		itemSet = ITEMSET::CREATE_ITEMSET(true);
	
		while (!flag2)
		{
			if (!func_90(*uParam0, &vector, num, num2))
			{
				func_227(true, false);
				func_152(Global_1295666.f_12, 0f, -1082130432, -1082130432, true, 1, 1);
				flag2 = true;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_345) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_345, -1) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_345, 0))
				{
					if (ENTITY::_GET_ENTITIES_NEAR_POINT(vector, 2f, itemSet, 2) == 0)
					{
						ENTITY::SET_ENTITY_COORDS(uParam0->f_345, vector, true, false, true, true);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_345, vector.f_6);
					}
				}
			
				if (ENTITY::_GET_ENTITIES_NEAR_POINT(vector.f_3, 2f, itemSet, 2) == 0 || vector.f_8)
				{
					flag2 = true;
					ENTITY::SET_ENTITY_COORDS(Global_1295666.f_3, vector.f_3, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(Global_1295666.f_3, vector.f_7);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				
					if (num == 0 && *uParam0 != 7)
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(Global_1295666.f_5, 1f, 2000, 0, true, false);
				
					if (flag)
						Global_1056554[player2 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 = num;
				}
				else
				{
					func_227(true, false);
					func_152(Global_1295666.f_12, 0f, -1082130432, -1082130432, true, 1, 1);
					flag2 = true;
				}
			}
		}
	}
	else if (num > 2)
	{
		func_227(true, false);
		func_152(Global_1295666.f_12, 0f, -1082130432, -1082130432, true, 1, 1);
		flag2 = true;
	}

	if (uParam0->f_329 == -1)
		if (flag2)
			uParam0->f_329 = NETWORK::GET_CLOUD_TIME_AS_INT();

	return false;
}

void func_98(var uParam0) // Position - 0x4B04 Hash - 0x299D6A4A ^0x299D6A4A
{
	uParam0->f_329 = -1;
	return;
}

Vector3 func_99(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4B12 Hash - 0xEC6EE36F ^0xADE06951
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "INVALID_HANDLE", 24);

	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_1", 24);
						break;
				
					case 1:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_2", 24);
						break;
				
					case 2:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_3", 24);
						break;
				
					case 3:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_1", 24);
						break;
				
					case 1:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_2", 24);
						break;
				
					case 2:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_3", 24);
						break;
				
					case 3:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_4", 24);
						break;
				}
			}
			break;
	
		case 2:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_1", 24);
						break;
				
					case 1:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_2", 24);
						break;
				
					case 2:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_3", 24);
						break;
				
					case 3:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_1", 24);
						break;
				
					case 1:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_2", 24);
						break;
				
					case 2:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_3", 24);
						break;
				
					case 3:
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_4", 24);
						break;
				}
			}
			break;
	
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (bParam2)
				TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_m_1", 24);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk, "MP_player_f_1", 24);
			break;
	
		default:
			break;
	}

	return unk;
}

void func_100(BOOL bParam0) // Position - 0x4CC8 Hash - 0xC0EC45E8 ^0xC0EC45E8
{
	if (bParam0)
		if (!Global_1885680.f_1682)
			Global_1885680.f_1682 = 1;
	else if (Global_1885680.f_1682)
		Global_1885680.f_1682 = 0;

	return;
}

BOOL func_101(int iParam0) // Position - 0x4CFD Hash - 0xC23D24E2 ^0x4EEC5821
{
	Hash unlockHash;
	int num;
	BOOL flag;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (iParam0 == 0)
		return false;

	unlockHash = func_46(iParam0);

	if (unlockHash == 0)
		return false;

	if (!func_228(iParam0))
	{
		num = func_229(3, iParam0);
		flag = false;
	}
	else
	{
		num = func_229(1, iParam0);
		flag = true;
	}

	if (num == 0)
		return false;

	if (func_231(func_230(iParam0)))
	{
		switch (func_232(func_230(iParam0), false))
		{
			case 1:
			
		
			case 2:
			
		
			default:
			
		}
	
		return false;
		return false;
	}

	if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash) && UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
	{
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
			return false;
	
		if (!func_231(func_230(iParam0)))
			func_234(iParam0, func_233(num, 0));
	
		return false;
	}

	if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash) && UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
	{
		if (flag)
			if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
				return true;
	
		func_235(iParam0);
		func_234(iParam0, -1);
		func_236();
		return true;
	}

	return false;
}

BOOL func_102(var uParam0) // Position - 0x4E0F Hash - 0xF7EABF51 ^0x64FB2EAA
{
	int i;
	BOOL num;
	Interior interiorAtCoords;

	i = 0;
	num = 0;

	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		STREAMING::LOAD_SCENE_STOP();

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else if (!_IS_NULL_VECTOR(uParam0->f_357))
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 9))
			{
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_357);
			
				if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
				{
					INTERIOR::UNPIN_INTERIOR(interiorAtCoords);
					MISC::CLEAR_BIT(&(uParam0->f_8[i /*40*/].f_1), 9);
					num = 1;
				}
			}
		}
	}

	return num;
}

void func_103(int iParam0, int iParam1) // Position - 0x4E9C Hash - 0x108DA985 ^0xA498EBF7
{
	if (!func_136(iParam0))
		return;

	if (!func_237(iParam0))
	{
		Global_1291943.f_22[iParam0 /*11*/].f_7 = 0;
		return;
	}

	Global_1291943.f_22[iParam0 /*11*/].f_7 = iParam1;
	return;
}

void func_104(int iParam0, int iParam1) // Position - 0x4ED9 Hash - 0x26DF706C ^0xC853E2C7
{
	if (!func_136(iParam0))
		return;

	Global_1291943.f_133[iParam0 /*5*/].f_4 = iParam1;
	return;
}

void func_105(var uParam0) // Position - 0x4EFC Hash - 0x8249AEE ^0xEE06C06F
{
	 Var0;

	switch (*uParam0)
	{
		case 3:
			if (uParam0->f_351)
				Var0 = 847375033;
			else
				Var0 = 936352856;
		
			func_239(MISC::VAR_STRING(0, Var0, func_238(2)), 20000, 0, 0, 0, true);
			break;
	}

	return;
}

void func_106(var uParam0) // Position - 0x4F47 Hash - 0x50F69833 ^0xB389AEE
{
	func_203(64);

	switch (*uParam0)
	{
		case 5:
			func_240(1);
			break;
	
		case 6:
			Global_1297441.f_44.f_1 = 1;
		
			if (func_241(PLAYER::PLAYER_ID(), true) == -1)
				func_9(879, false);
			break;
	
		case 7:
			if (!func_242(273608212, 1))
				func_9(911, false);
		
			func_243(-1654990742);
			break;
	
		case 8:
			func_209(149, false);
			func_209(150, false);
			func_209(151, false);
			break;
	}

	return;
}

BOOL func_107(var uParam0) // Position - 0x4FD9 Hash - 0xF6A0AD26 ^0xAFFDB07D
{
	int i;
	int num;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[i /*15*/].f_1))
		{
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_89[i /*15*/].f_1));
			num = num + 1;
		}
	}

	return true;
}

BOOL func_108(var uParam0) // Position - 0x5020 Hash - 0xB7134FB9 ^0xABC1BD2F
{
	int i;

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[i /*40*/]))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_8[i /*40*/]);
		}
	}

	return true;
}

void func_109(var uParam0) // Position - 0x506C Hash - 0x4F413E20 ^0xB13FB0E6
{
	int i;
	int j;

	for (i = 0; i < 2; i = i + 1)
	{
		for (j = 0; j < 4; j = j + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[i /*27*/].f_1[j /*6*/]))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_241[i /*27*/].f_1[j /*6*/], true, false);
				PED::DELETE_PED(&uParam0->f_241[i /*27*/].f_1[j /*6*/]);
			}
		}
	}

	return;
}

void func_110(var uParam0) // Position - 0x50D7 Hash - 0x87E50D7E ^0x4AC8A4A9
{
	int i;
	var offsetFromCoordAndHeadingInWorldCoords;

	for (i = 0; i < 6; i = i + 1)
	{
		if (uParam0->f_150[i /*13*/].f_8)
		{
			if (!_IS_NULL_VECTOR(uParam0->f_150[i /*13*/].f_5))
				offsetFromCoordAndHeadingInWorldCoords = { uParam0->f_150[i /*13*/].f_5 };
			else
				offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_8[0 /*40*/].f_33, uParam0->f_8[0 /*40*/].f_36.f_2, uParam0->f_150[i /*13*/].f_2) };
		
			ENTITY::REMOVE_MODEL_HIDE(offsetFromCoordAndHeadingInWorldCoords, 1f, uParam0->f_150[i /*13*/].f_1, 0);
		}
	}

	return;
}

void func_111(BOOL bParam0) // Position - 0x5163 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1048585 = bParam0;
	return;
}

int func_112() // Position - 0x5171 Hash - 0xC573965E ^0x43439664
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
		return 0;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("pause_menu"));
	return 1;
}

BOOL func_113() // Position - 0x51A3 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

void func_114() // Position - 0x51B2 Hash - 0x41F3C71C ^0x41F3C71C
{
	Global_1896762.f_353;
	Global_1896762.f_353 = 0;
	return;
}

BOOL func_115() // Position - 0x51CC Hash - 0x3630EC94 ^0x3630EC94
{
	return func_244() || func_245();
}

void func_116(BOOL bParam0) // Position - 0x51E2 Hash - 0x6D9C7C2F ^0xF63B6867
{
	if (bParam0)
		Global_1940026.f_9 = 0f;

	Global_1940026.f_8 = 0f;
	Global_1940026.f_15.f_1 = 0f;
	Global_1940026.f_15 = 0f;
	Global_1940026.f_15.f_9 = 0f;
	Global_1940026.f_15.f_8 = 0f;
	Global_1940026.f_15.f_10 = 0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		PED::_SET_PED_MOTIVATION(Global_33, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_33, false);
		PED::_SET_PED_DRUNKNESS(Global_33, false, 0f);
	}

	func_246(0f);

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		PED::SET_PED_CONFIG_FLAG(Global_33, 26, false);

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
		func_247();

	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);

	return;
}

void func_117() // Position - 0x5282 Hash - 0x88FC2E1A ^0xE088ABDB
{
	Global_1940026.f_28 = 0;
	Global_1940026.f_28.f_1 = 0;
	Global_1940026.f_28.f_2 = 0;
	Global_1940026.f_28.f_3 = 0;
	Global_1940026.f_28.f_4 = 0;
	Global_1940026.f_28.f_8 = 0;
	return;
}

void func_118() // Position - 0x52BE Hash - 0x4DB2837B ^0xC30686DD
{
	int i;

	for (i = 0; i < Global_1156111.f_47689.f_1.f_42; i = i + 1)
	{
		if (!func_248(Global_1156111.f_47689.f_1[i /*2*/]))
		{
		}
	}

	Global_1156111.f_47689.f_1.f_42 = 0;
	return;
}

void func_119(Ped pedParam0) // Position - 0x530C Hash - 0xC848742E ^0xD171C7FA
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

BOOL func_120(Ped pedParam0) // Position - 0x5342 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

Ped func_121(Ped pedParam0) // Position - 0x535D Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

void func_122(BOOL bParam0) // Position - 0x5379 Hash - 0xE764FDDD ^0x8C359C2E
{
	var unk;

	if (NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE() != bParam0)
	{
		unk = 1;
		unk.f_1.f_4 = 10;
		unk[0 /*15*/] = 15;
		NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(bParam0, &unk, -1);
	}

	return;
}

void func_123(BOOL bParam0, int iParam1) // Position - 0x53AF Hash - 0xAA571713 ^0xAA571713
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	if (bParam0)
	{
		func_249(iParam1);
		return;
	}

	if (iParam1 == 2)
		iParam1 = 56;

	num = iParam1;
	flag = !(num & 4 != 0);
	flag2 = num & 8 != 0;
	flag3 = num & 16 != 0;
	flag4 = num & 32 != 0;
	flag5 = num & 1024 != 0;
	flag6 = num & 64 != 0;
	func_250(flag, flag2, flag3, flag4 || flag5, flag6, false, flag5);
	return;
}

void func_124() // Position - 0x5423 Hash - 0x6E39B93A ^0x6E39B93A
{
	!Global_1896762.f_353;
	Global_1896762.f_353 = 1;
	return;
}

void func_125(BOOL bParam0) // Position - 0x543E Hash - 0x8B79F219 ^0x8B79F219
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

BOOL func_126(int iParam0, int iParam1) // Position - 0x5475 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_127(int iParam0) // Position - 0x548D Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_129(iParam0, 4))
		return false;

	return true;
}

BOOL func_128(int iParam0) // Position - 0x54A4 Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_129(int iParam0, int iParam1) // Position - 0x5570 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_130(int iParam0) // Position - 0x5589 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_131() // Position - 0x559C Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_211())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_132(Player plParam0) // Position - 0x55B7 Hash - 0xFEB7CBB2 ^0x8D69FA11
{
	int num;

	num = func_251(plParam0);

	if (num < 0)
		return true;

	return func_252(&Global_1149432.f_11.f_3222.f_320[num /*4*/], 1);
}

int func_133() // Position - 0x55E6 Hash - 0x9426462 ^0x97437CE2
{
	Player gangLeader;
	int num;
	int num2;
	int num3;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);
	num = func_253(gangLeader);

	if (num == 0)
		return joaat("META_OUTFIT_DEFAULT");

	num2 = func_254(0, num, 0, -1);

	if (num2 == 0)
		return joaat("META_OUTFIT_DEFAULT");

	num3 = func_255(num2);

	if (num3 == 0)
		return joaat("META_OUTFIT_DEFAULT");

	return num3;
}

int func_134() // Position - 0x5641 Hash - 0xB3A0750F ^0xA3ADCADC
{
	int scheduleLocation;
	int num;

	if (STATS::_0x3AEABAE3F3C7600C() && STATS::_0xA2E2BEA4E83F6270(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS")) > 0)
		STATS::_0xB5E2EDA2135E0FA1(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS"), 0, &scheduleLocation);
	else
		return -1;

	if (scheduleLocation == 0)
		return -1;

	num = func_256(scheduleLocation);

	if (num < 0 || num >= 12)
		return -1;

	return 135 + num;
}

Vector3 func_135(Player plParam0) // Position - 0x56A1 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL func_136(int iParam0) // Position - 0x56B5 Hash - 0x68EEA5A8 ^0x68EEA5A8
{
	if (iParam0 <= 0 || iParam0 >= 10)
		return false;

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x56D4 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_138(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x56FE Hash - 0x3979BF9A ^0x3979BF9A
{
	float num;

	*uParam2 = { func_257() };
	num = 0f;

	switch (iParam0)
	{
		case 4:
		
	
		case 5:
		
	
		case 8:
		
	
		default:
		
	}

	return false;
}

BOOL func_139(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x590F Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

Vector3 func_140(Player plParam0) // Position - 0x5938 Hash - 0x4168FF99 ^0xE3960051
{
	if (plParam0 == 255)
		return Global_1144526[func_260() /*83*/].f_38;

	return Global_1144526[plParam0 /*83*/].f_38;
}

int func_141(var uParam0) // Position - 0x5964 Hash - 0x92708AC8 ^0xE53AC483
{
	return uParam0->f_1.f_2;
}

void func_142(var uParam0, int iParam1) // Position - 0x5972 Hash - 0xD6BCD227 ^0x36BA8EBE
{
	uParam0->f_1.f_2 = iParam1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_143(var uParam0) // Position - 0x5982 Hash - 0x6339A7DF ^0xEBE53FA0
{
	int i;
	BOOL flag;

	i = 0;
	flag = true;

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	for (i = 0; i < 4; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[i /*15*/].f_1))
		{
		}
		else
		{
			if (uParam0->f_89[i /*15*/] != 0 && STREAMING::IS_MODEL_VALID(uParam0->f_89[i /*15*/]))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_89[i /*15*/], false);
			
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_89[i /*15*/]))
					flag = false;
				else
					goto 0x7B;
			}
		
			goto 0x3AE;
		}
	}

	if (flag)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_327, 1))
		{
			for (i = 0; i < 4; i = i + 1)
			{
				if (uParam0->f_89[i /*15*/] != 0 && STREAMING::IS_MODEL_VALID(uParam0->f_89[i /*15*/]))
					if (STREAMING::HAS_MODEL_LOADED(uParam0->f_89[i /*15*/]))
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_89[i /*15*/]);
			}
		
			MISC::SET_BIT(&(uParam0->f_327), 1);
		}
	
		return true;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_144(var uParam0) // Position - 0x5DA9 Hash - 0x9112EE2F ^0x4588D647
{
	int i;
	BOOL num;
	int num2;

	i = 0;
	num = 1;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
			{
				switch (func_58())
				{
					case 0:
						return false;
				
					case 2:
						goto 0x2A1;
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
			{
				switch (func_58())
				{
					case 0:
						return false;
				
					case 1:
						goto 0x2A1;
				}
			}
		
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 1))
				goto 0x2A1;
		
			num = 0;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&uParam0->f_8[i /*40*/].f_11[1 /*3*/]))
				num2 = func_263();
		
			if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 0))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[i /*40*/]))
				{
				}
				else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_8[i /*40*/].f_3)))
				{
					MISC::SET_BIT(&(uParam0->f_8[i /*40*/].f_1), 1);
				}
				else
				{
					uParam0->f_8[i /*40*/] = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_8[i /*40*/].f_3), uParam0->f_8[i /*40*/].f_2, &uParam0->f_8[i /*40*/].f_11[num2 /*3*/], false, false);
				
					if (MISC::IS_BIT_SET(uParam0->f_327, 18))
						uParam0->f_338 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_330), 256, 0, false, true);
				
					if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[i /*40*/]))
					{
					}
					else
					{
						ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_8[i /*40*/]);
					
						if (MISC::IS_BIT_SET(uParam0->f_327, 18))
							ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_338);
					
						MISC::SET_BIT(&(uParam0->f_8[i /*40*/].f_1), 0);
						goto 0x2A1;
					}
				}
			}
		
			if (!MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 1))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[i /*40*/]))
				{
				}
				else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_8[i /*40*/], false))
				{
				}
				else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_8[i /*40*/], false, false))
				{
				}
				else
				{
					if (*uParam0 != 4)
					{
						if (*uParam0 == 5)
						{
							if (_IS_NULL_VECTOR(uParam0->f_8[i /*40*/].f_33))
							{
							}
							else
							{
								ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_8[i /*40*/], uParam0->f_8[i /*40*/].f_33, uParam0->f_8[i /*40*/].f_36, 2);
							
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_8[i /*40*/].f_11[num2 /*3*/]))
								{
									if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_8[i /*40*/], &uParam0->f_8[i /*40*/].f_11[num2 /*3*/]))
									{
									}
									else
									{
										ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_8[i /*40*/], &uParam0->f_8[i /*40*/].f_11[num2 /*3*/], true);
										MISC::SET_BIT(&(uParam0->f_8[i /*40*/].f_1), 1);
									}
								}
							
								MISC::SET_BIT(&(uParam0->f_8[i /*40*/].f_1), 1);
							}
						}
					
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_8[i /*40*/], uParam0->f_8[i /*40*/].f_33, uParam0->f_8[i /*40*/].f_36, 2);
					}
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_8[i /*40*/].f_11[num2 /*3*/]))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_8[i /*40*/], &uParam0->f_8[i /*40*/].f_11[num2 /*3*/]))
						{
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_8[i /*40*/], &uParam0->f_8[i /*40*/].f_11[num2 /*3*/], true);
							MISC::SET_BIT(&(uParam0->f_8[i /*40*/].f_1), 1);
						}
					}
				
					MISC::SET_BIT(&(uParam0->f_8[i /*40*/].f_1), 1);
				}
			}
		}
	}

	return num;
}

void func_145(var uParam0) // Position - 0x6058 Hash - 0xA61A021D ^0x1BA57D4A
{
	int value;
	var name;

	if (func_264(*uParam0, &value, &name))
		ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_8[0 /*40*/], &name, value, true);

	return;
}

int func_146(var uParam0) // Position - 0x6081 Hash - 0x136BF8C9 ^0xE8AE7F7A
{
	return uParam0->f_296.f_1;
}

int func_147(var uParam0) // Position - 0x6090 Hash - 0x136BF8C9 ^0xB14E4AF7
{
	return uParam0->f_296.f_2;
}

void func_148(var uParam0, int iParam1) // Position - 0x609F Hash - 0x756DCE0A ^0x814224F0
{
	if (uParam0->f_296.f_1 != iParam1)
		uParam0->f_296.f_1 = iParam1;

	return;
}

void func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char* sParam20, char* sParam21) // Position - 0x60BC Hash - 0x76360E50 ^0x76360E50
{
	func_48(uParam0);
	uParam0->f_296 = func_265(&uParam1, sParam20, sParam21, 0, 0, true);
	return;
}

int func_150() // Position - 0x60DC Hash - 0x305A4242 ^0xEAA0732E
{
	Hash hash;
	int eventData;

	hash = joaat("warning_feed");

	while (UIEVENTS::EVENTS_UI_IS_PENDING(hash))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, &eventData))
		{
			switch (eventData)
			{
				case -1203660660:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					return eventData.f_2;
			
				default:
				
			}
		}
	
		UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
	}

	return -1577439368;
}

void func_151(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x6128 Hash - 0xA7F78AE0 ^0xA7F78AE0
{
	if (bParam2)
	{
		func_266(72);
		Global_1102813.f_3794 = pedParam0;
		Global_1102813.f_3795 = iParam1;
	}
	else
	{
		func_267(72);
	}

	return;
}

void func_152(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0x6158 Hash - 0x5601A1E5 ^0x8BAC6603
{
	var entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	num = fParam3;

	if (!func_268(Global_1295666.f_12, &entityCoords, &num))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		num = fParam3;
	}

	func_269(uParam0, fParam3, entityCoords, num, iParam4, iParam5, bParam6, iParam7, iParam8, 1);
	return;
}

int func_153(int iParam0) // Position - 0x61B3 Hash - 0x14C162FD ^0x1A715561
{
	if (iParam0 == 255)
		return Global_1102813;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/];

	return 26;
}

void func_154(var uParam0, int iParam1) // Position - 0x61FA Hash - 0x756DCE0A ^0x860E2D39
{
	if (uParam0->f_296.f_2 != iParam1)
		uParam0->f_296.f_2 = iParam1;

	return;
}

BOOL func_155(int iParam0) // Position - 0x6217 Hash - 0x34554191 ^0x34554191
{
	switch (iParam0)
	{
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return false;
	
		case 4:
			return false;
	
		case 5:
			return false;
	
		case 6:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return false;
	
		case 9:
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_156(int iParam0) // Position - 0x6282 Hash - 0x5069B399 ^0x5069B399
{
	switch (iParam0)
	{
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return false;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 6:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return false;
	
		case 9:
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_157(var uParam0) // Position - 0x62ED Hash - 0x741F469C ^0x5073A3DC
{
	Vector3 vector;
	BOOL flag;
	float volumeScale;

	if (!func_270(uParam0))
		return uParam0->f_1.f_6;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_319))
	{
		vector = { func_271(uParam0) };
		uParam0->f_319 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_320, 0f, 0f, 0f, vector);
	}

	if (MISC::IS_BIT_SET(uParam0->f_327, 16))
	{
		volumeScale = { VOLUME::GET_VOLUME_SCALE(uParam0->f_319) };
	
		if (func_272(uParam0->f_320, Global_34) < volumeScale)
			flag = true;
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_1295666.f_3, uParam0->f_319, true, 0))
	{
		flag = true;
	}

	if (flag)
		if (!func_273(uParam0))
			uParam0->f_1.f_6 = 1;
		else
			uParam0->f_1.f_6 = 0;
	else
		uParam0->f_1.f_6 = 0;

	return uParam0->f_1.f_6;
}

BOOL func_158() // Position - 0x63B4 Hash - 0x1DE236A9 ^0xA0E7F1D7
{
	BOOL flag;
	Entity firstEntityPedIsCarrying;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_1295666.f_3))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295666.f_3);
		flag = true;
	}
	else if (func_274(&firstEntityPedIsCarrying))
	{
		flag = true;
	}

	if (flag)
	{
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying)))
			func_275(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying)));
	
		return false;
	}

	return true;
}

BOOL func_159(int iParam0) // Position - 0x6422 Hash - 0x49256A88 ^0x40D0E987
{
	if (!func_136(iParam0))
		return false;

	return Global_1291943.f_22[iParam0 /*11*/].f_7;
}

int func_160(int iParam0, Player plParam1) // Position - 0x6444 Hash - 0xC4D66D9E ^0x51C0F4AA
{
	if (iParam0 <= 0 || iParam0 >= 10)
		return -1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		return -1;

	return Global_1056554[plParam1 /*491*/].f_42.f_1[iParam0 /*16*/];
}

BOOL func_161(int iParam0) // Position - 0x6481 Hash - 0x3FB1C6DD ^0x5686855C
{
	int num;

	if (!func_136(iParam0))
		return false;

	if (Global_1295666.f_11 < 32 && Global_1295666.f_11 > 0 && Global_1056554[Global_1295666.f_11 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 != -1)
	{
		num = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1056554[Global_1295666.f_11 /*491*/].f_42.f_1[iParam0 /*16*/].f_2);
	
		if (num >= 30)
			return true;
	}

	return false;
}

void func_162(var uParam0, int iParam1) // Position - 0x64FC Hash - 0x2B9C2DD ^0x2B9C2DD
{
	if (func_153(255) == 1)
	{
		if (func_146(uParam0) == 0 && func_147(uParam0) == 0)
		{
			func_154(uParam0, iParam1);
			func_148(uParam0, 1);
		}
	}

	return;
}

BOOL func_163() // Position - 0x6535 Hash - 0xD44B696A ^0x419AE9A3
{
	Ped mount;
	Ped pedInTransportSeat;

	mount = PED::GET_MOUNT(Global_1295666.f_3);

	if (ENTITY::DOES_ENTITY_EXIST(mount))
	{
		pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(mount, -1);
	
		if (pedInTransportSeat == Global_1295666.f_3)
			pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(mount, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat) && PED::IS_PED_A_PLAYER(pedInTransportSeat))
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedInTransportSeat) == Global_1295666.f_11)
				return true;
	}

	return false;
}

BOOL func_164(BOOL bParam0) // Position - 0x6597 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

void func_165(int iParam0, BOOL bParam1) // Position - 0x65C7 Hash - 0x7B4D6095 ^0x327E1986
{
	if (!func_276(iParam0))
		return;

	if (bParam1 && func_277(iParam0, 512) || !bParam1 && !func_277(iParam0, 512))
		return;

	if (bParam1)
		func_278(iParam0, 512);
	else
		func_279(iParam0, 512);

	if (func_280(iParam0))
		INVENTORY::_0x9B4E793B1CB6550A();

	return;
}

BOOL func_166() // Position - 0x6631 Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1292128.f_13;
}

BOOL func_167(int iParam0) // Position - 0x663F Hash - 0x50498403 ^0x8EA1BFF8
{
	if (iParam0 == 255)
		return Global_1102813.f_16;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return Global_1101558[iParam0 /*38*/].f_16;
}

BOOL func_168(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6677 Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_281(bParam1, bParam2, bParam3);

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

int func_169(var uParam0) // Position - 0x67AC Hash - 0x92708AC8 ^0x8E0D048D
{
	return uParam0->f_1.f_3;
}

// Unhandled jump detected. Output should be considered invalid
void func_170(var uParam0) // Position - 0x67BA Hash - 0x3F70E69A ^0x23FE8A30
{
	var value;
	int i;
	int num;
	int j;
	int num2;
	Ped playerPed;
	Ped playerPed2;
	float num3;
	float num4;

	if (!func_155(*uParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666);
	
		for (i = 0; i < 2; i = i + 1)
		{
			if (!func_172(uParam0, i))
			{
			}
			else
			{
				Global_1056554[Global_1295666 /*491*/].f_42.f_1[*uParam0 /*16*/].f_11[i] = value;
			}
		}
	
		return;
	}

	if (Global_1295666.f_11 != Global_1295666)
		return;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Global_1295666.f_11));

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_172(uParam0, i))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 3))
			{
				if (func_58() != 1)
				{
				}
				else
				{
					goto 0xCF;
				}
			}
		
			if (MISC::IS_BIT_SET(uParam0->f_8[i /*40*/].f_1, 4))
			{
				if (func_58() != 2)
				{
				}
				else
				{
					for (j = 0; j < 32; j = j + 1)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[j]))
						{
						}
						else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[j]))
						{
						}
						else
						{
							if (num >= 4)
								break;
						
							if (Global_1295666.f_149[j] != Global_1295666.f_5)
							{
								playerPed2 = PLAYER::GET_PLAYER_PED(Global_1295666.f_149[j]);
							
								if (ENTITY::IS_ENTITY_DEAD(playerPed2))
								{
								}
								else
								{
									num3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(playerPed2, true, false), ENTITY::GET_ENTITY_COORDS(playerPed, true, false));
									num4 = func_282(*uParam0, false);
								
									if (num3 > num4 * num4)
									{
									}
									else
									{
										num = num + 1;
										SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666.f_149[j]);
										Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[num2] = Global_1295666.f_149[j];
										num2 = num2 + 1;
									}
								}
							}
						
							num = num + 1;
							SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666.f_149[j]);
							Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[num2] = Global_1295666.f_149[j];
							num2 = num2 + 1;
						}
					}
				
					num = 0;
					Global_1056554[Global_1295666.f_11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_11[i] = value;
				}
			}
		
			j = 0;
		
			if (j < 32)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[j]))
				{
				}
				else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[j]))
				{
				}
				else if (num >= 4)
				{
				}
				else
				{
					if (Global_1295666.f_149[j] != Global_1295666.f_5)
					{
						playerPed2 = PLAYER::GET_PLAYER_PED(Global_1295666.f_149[j]);
					
						if (ENTITY::IS_ENTITY_DEAD(playerPed2))
						{
						}
						else
						{
							num3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(playerPed2, true, false), ENTITY::GET_ENTITY_COORDS(playerPed, true, false));
							num4 = func_282(*uParam0, false);
						
							if (num3 > num4 * num4)
							{
							}
							else
							{
								num = num + 1;
								SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666.f_149[j]);
								Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[num2] = Global_1295666.f_149[j];
								num2 = num2 + 1;
							}
						}
					}
				
					num = num + 1;
					SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666.f_149[j]);
					Global_1056554[Global_1295666.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[num2] = Global_1295666.f_149[j];
					num2 = num2 + 1;
					j = j + 1;
				}
			
				j = j + 1;
			}
		
			num = 0;
			Global_1056554[Global_1295666.f_11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_11[i] = value;
		}
	}

	return;
}

void func_171(var uParam0, int iParam1) // Position - 0x69A1 Hash - 0xD6BCD227 ^0x1CF644F6
{
	uParam0->f_1.f_3 = iParam1;
	return;
}

BOOL func_172(var uParam0, int iParam1) // Position - 0x69B1 Hash - 0xFAB75555 ^0xCA725AB5
{
	if (iParam1 >= 2 || iParam1 < 0)
		return false;

	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_8[iParam1 /*40*/].f_3));
}

var func_173(int iParam0, int iParam1) // Position - 0x69DD Hash - 0xEAAD001 ^0xDA503D94
{
	var unk;

	if (iParam0 >= 10 || iParam0 <= 0)
		return unk;

	if (iParam1 >= 2 || iParam1 < 0)
		return unk;

	if (Global_1295666.f_11 >= 32 || Global_1295666.f_11 < 0)
		return unk;

	if (!func_155(iParam0))
		unk = Global_1056554[Global_1295666 /*491*/].f_42.f_1[iParam0 /*16*/].f_11[iParam1];
	else
		unk = Global_1056554[Global_1295666.f_11 /*491*/].f_42.f_1[iParam0 /*16*/].f_11[iParam1];

	return unk;
}

BOOL func_174(var uParam0, Player plParam1, int iParam2, int iParam3) // Position - 0x6A78 Hash - 0x99CAA9E1 ^0x117FAB60
{
	Ped playerPed;
	Ped ped;
	var unk;

	if (iParam2 >= 2 || iParam2 < 0)
		return false;

	if (iParam3 >= 4 || iParam3 < 0)
		return false;

	playerPed = PLAYER::GET_PLAYER_PED(plParam1);
	ped = PED::CLONE_PED(playerPed, false, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	ENTITY::SET_ENTITY_COLLISION(ped, false, false);
	ENTITY::SET_ENTITY_VISIBLE(ped, false);
	func_283(playerPed, ped);
	ENTITY::SET_ENTITY_COORDS(ped, uParam0->f_320, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(ped, true);
	PED::_0x7E8F9949B7AABBF0(ped, 1, 1);
	WEAPON::_HIDE_PED_WEAPONS(ped, 2, true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(ped, true);

	if (MISC::IS_BIT_SET(uParam0->f_327, 17))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(ped, 16, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(ped, 9, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(ped, 18, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(ped, 10, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(ped, 7, false);
	}

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, true);
	unk = { func_99(*uParam0, iParam3, PED::IS_PED_MALE(ped)) };
	uParam0->f_241[iParam2 /*27*/].f_1[iParam3 /*6*/] = ped;
	uParam0->f_241[iParam2 /*27*/].f_1[iParam3 /*6*/].f_2.f_1 = { unk };
	uParam0->f_241[iParam2 /*27*/].f_1[iParam3 /*6*/].f_2 = uParam0->f_8[iParam2 /*40*/];
	return true;
}

BOOL func_175(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x6BA6 Hash - 0x7B891E5F ^0x7B891E5F
{
	if (iParam1 >= 2 || iParam1 < 0)
		return false;

	if (iParam2 >= 4 || iParam2 < 0)
		return false;

	if (!bParam3)
		return ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]);
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]))
		return !ENTITY::IS_ENTITY_DEAD(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]);

	return false;
}

BOOL func_176(var uParam0, int iParam1, int iParam2) // Position - 0x6C22 Hash - 0xCFC1A6F0 ^0xCFC1A6F0
{
	if (iParam1 >= 2 || iParam1 < 0)
		return false;

	if (iParam2 >= 4 || iParam2 < 0)
		return false;

	return PED::IS_PED_READY_TO_RENDER(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]);
}

BOOL func_177(var uParam0, int iParam1) // Position - 0x6C66 Hash - 0x6D5B81D8 ^0x4F788CCF
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	if (uParam0->f_150[iParam1 /*13*/].f_1 == 0)
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iParam1 /*13*/]))
		return true;

	if (!_IS_NULL_VECTOR(uParam0->f_150[iParam1 /*13*/].f_5))
		offsetFromCoordAndHeadingInWorldCoords = { uParam0->f_150[iParam1 /*13*/].f_5 };
	else
		offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_8[0 /*40*/].f_33, uParam0->f_8[0 /*40*/].f_36.f_2, uParam0->f_150[iParam1 /*13*/].f_2) };

	uParam0->f_150[iParam1 /*13*/] = func_259(uParam0->f_150[iParam1 /*13*/].f_1, offsetFromCoordAndHeadingInWorldCoords, 1f);

	if (uParam0->f_150[iParam1 /*13*/].f_8)
		ENTITY::CREATE_MODEL_HIDE(offsetFromCoordAndHeadingInWorldCoords, 1f, uParam0->f_150[iParam1 /*13*/].f_1, false);

	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iParam1 /*13*/]);
}

void func_178(var uParam0, int iParam1) // Position - 0x6D2C Hash - 0xF55E891F ^0xF55E891F
{
	func_284(uParam0, iParam1);
	return;
}

BOOL func_179(Ped pedParam0, var uParam1, int iParam2, eSetPlayerControlFlags espcfParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8) // Position - 0x6D3C Hash - 0x6CEE72B9 ^0x4A7A32FD
{
	int taskSequenceId;
	Vehicle vehiclePedIsIn;
	Ped mount;
	BOOL isPedOnMount;
	BOOL isPedInAnyVehicle;
	int entityCoords;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	isPedOnMount = PED::IS_PED_ON_MOUNT(pedParam0);

	if (isPedOnMount)
	{
		mount = PED::GET_MOUNT(pedParam0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::IS_ENTITY_DEAD(mount))
			isPedOnMount = false;
	}

	if (!isPedOnMount)
	{
		isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true);
	
		if (isPedInAnyVehicle)
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) || ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
				isPedInAnyVehicle = false;
		}
	}

	if (func_285(*uParam1, 128))
	{
		if (!func_286(pedParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(pedParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}

	if (func_285(*uParam1, 2))
	{
		if (isPedOnMount)
		{
			if (!func_287(mount))
				return false;
		
			if (!func_286(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
			{
				if (iParam7 != 0f && iParam8 != 0f)
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
					entityCoords = iParam7;
					entityCoords.f_1 = iParam8;
				
					if (func_288(mount, entityCoords))
						iParam4 = 131072;
					else
						iParam4 = 262144;
				
					if (!func_285(*uParam1, 4))
						iParam4 = iParam4 | 32;
				}
			
				TASK::CLEAR_PED_TASKS(pedParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam4, 0, 0, 0, 0);
			}
		
			return false;
		}
		else if (func_289(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(pedParam0)) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(pedParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(pedParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(pedParam0)));
			func_178(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}

	if (func_285(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}

	if (func_285(*uParam1, 8))
	{
		if (isPedOnMount)
			if (!func_287(mount))
				return false;
	
		if (!isPedOnMount && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(pedParam0)) || isPedOnMount && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount)))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}

	if (PED::IS_PED_A_PLAYER(pedParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_289(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
	
		if (!func_289(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam3, false);
			
				if (func_289(iParam2, 16384))
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
			}
		}
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);

	if (isPedOnMount)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(mount, 0))
			return false;
	
		if (func_285(*uParam1, 2336))
		{
			!func_287(mount);
		
			if (func_290(mount, *uParam1))
			{
				func_291(uParam1, 32);
				func_291(uParam1, 256);
				func_291(uParam1, 2048);
				func_178(uParam1, 512);
				func_178(uParam1, 1024);
				func_178(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
	
		if (func_285(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
			!func_287(mount);
		
			if (TASK::IS_PED_WALKING(mount))
				return false;
			else
				func_291(uParam1, 64);
		}
	
		if (func_289(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(mount, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
	
		if (TASK::IS_PED_SPRINTING(mount) && !func_289(iParam2, 8192) || TASK::IS_PED_RUNNING(mount) && func_289(iParam2, 1024) || func_289(iParam2, 8) && !func_285(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 1, 0, 0);
			func_178(uParam1, 32);
		}
		else if (TASK::IS_PED_RUNNING(mount) || TASK::IS_PED_SPRINTING(mount) && func_289(iParam2, 8192) && func_289(iParam2, 4096) && !func_285(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 8, 0, 0);
			func_178(uParam1, 2048);
			func_178(uParam1, 4096);
		}
		else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount) >= 1.001f && func_289(iParam2, 32) && !func_285(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 3, 0, 0);
			func_178(uParam1, 256);
			func_178(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(mount))
		{
			TASK::TASK_STAND_STILL(mount, -1);
			func_178(uParam1, 64);
		}
		else if (!func_289(iParam2, 1))
		{
			!func_289(iParam2, 256);
		
			if (iParam7 != 0f && iParam8 != 0f)
			{
				num = iParam7;
				num.f_1 = iParam8;
				num.f_2 = Global_34.f_2;
			
				if (func_288(mount, num))
					iParam4 = 131072;
				else
					iParam4 = 262144;
			
				if (!func_285(*uParam1, 4))
					iParam4 = iParam4 | 32;
			}
		
			TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(mount, 0f);
			func_178(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(pedParam0, 1000);
			func_178(uParam1, 8);
		}
	}
	else if (isPedInAnyVehicle)
	{
		if (!func_289(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			VEHICLE::BRING_VEHICLE_TO_HALT(vehiclePedIsIn, fParam5, iParam6, false);
			func_178(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_289(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(pedParam0, 200);
		func_178(uParam1, 8);
	}

	return false;
}

Hash func_180(Hash hParam0, Hash hParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x7311 Hash - 0xCDB1D438 ^0x68DA4897
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_292(hParam0, 0))
		return 0;

	if (func_182(hParam0) || func_293(hParam0, 1077060302))
		return func_295(func_183(hParam0, false), hParam1, bParam2, iParam3, func_294(hParam0));

	if (func_296(hParam0, bParam4) || func_297(hParam0))
	{
		hParam1 = 997808187;
	}
	else if (func_294(hParam0) && func_298(hParam0, &num) || func_299(hParam0, &num))
	{
		hParam1 = num;
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

BOOL func_181(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x744D Hash - 0xF266A376 ^0xF266A376
{
	Hash hash;
	var unk;
	Hash hash2;
	var unk3;
	var unk4;
	int num;

	if (!func_292(hParam0, 0))
		return false;

	if (func_303(hParam0, true) && !func_304(hParam0, true))
		return false;

	if (iParam2 && func_305(hParam0, &hash))
	{
		if (func_306(hash, 997808187, false) && !func_307(hash, 997808187))
			return true;
		else if (func_306(hash, -570078785, false))
			return func_308(hash, -570078785, &unk, true, false);
	}
	else
	{
		if (hParam1 == 0)
			hash2 = func_180(hParam0, hash2, true, -1, true);
		else
			hash2 = hParam1;
	
		if (hash2 == 0)
			return false;
	
		num = func_309(hParam0, hash2, 0, true, true);
	
		if (hash2 == -570078785)
			return func_310(num);
		else if (hash2 == -915411861)
			return func_311(num);
		else if (hash2 == 997808187)
			return true;
		else
			return func_312(hParam0, 1, hash2, &unk4, &unk3, true, false, false);
	}

	return false;
}

BOOL func_182(Hash hParam0) // Position - 0x755E Hash - 0x672E565C ^0xD531C7FC
{
	if (func_293(hParam0, 75135761))
		return true;

	return false;
}

Hash func_183(Hash hParam0, BOOL bParam1) // Position - 0x7579 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_292(hParam0, 0))
		return func_314(func_313(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

Hash func_184(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x75D1 Hash - 0x24B2CE10 ^0x24B2CE10
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_315(hParam0, hParam1, &unk, &num, bParam2, true))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (func_316(unk[i /*2*/]))
			return unk[i /*2*/];
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

Hash func_185(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x763C Hash - 0x9CDB9FC2 ^0x9CDB9FC2
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_317(hParam0, hParam1, &unk, &num, true, false))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (func_316(unk[i /*2*/]))
			return unk[i /*2*/];
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

int func_186(Hash hParam0) // Position - 0x76A6 Hash - 0xF26C980E ^0xAF65CF6E
{
	int num;
	var unk;
	var unk6;

	num = -1;

	if (!func_316(hParam0))
		return num;

	num = 74330131;
	unk = { func_318(hParam0, false, 0) };
	unk6 = { func_319(hParam0, unk, unk.f_4, false) };

	if (!func_320(&unk6))
		return -1;

	if (func_321(unk6))
		num = 90473367;

	return num;
}

BOOL func_187(int* piParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x7708 Hash - 0x95A0423E ^0x64659D01
{
	var unk;
	var unk18;
	Hash hash;

	func_322(&hParam1);

	if (func_182(hParam1))
		return func_323(piParam0, func_183(hParam1, true), 1, 1, bParam3, 0, hParam4, iParam5, func_294(hParam1));
	else if (hParam1 == 757274294)
		return func_323(piParam0, 1776861510, 1, 1, bParam3, 0, -570078785, iParam5, func_294(hParam1));

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk18 = { func_318(hParam1, true, 1) };

	if (func_305(hParam1, &hash))
		return func_323(piParam0, hash, iParam2, 1, bParam3, 0, 0, iParam5, false);

	if (func_324(hParam1))
		if (!func_325(piParam0, hParam1, unk18, iParam2, &unk, hParam4, iParam5, bParam3))
			return false;
	else if (!func_326(piParam0, hParam1, unk18, unk18.f_4, iParam2, &unk, bParam3, hParam4, iParam5, bParam6))
		return false;

	func_327(unk);
	return true;
}

int func_188(Hash hParam0) // Position - 0x7803 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_328(hParam0);
}

void func_189(Hash hParam0) // Position - 0x7811 Hash - 0x1A767170 ^0xF7A996C3
{
	UNLOCK::_UNLOCK_SET_NEW(func_329(hParam0), false);
	return;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x7824 Hash - 0x4EE39F09 ^0x4C62B7DF
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

void func_191(var uParam0, int iParam1) // Position - 0x78A2 Hash - 0x79B5308A ^0xB7FD6E5D
{
	int num;
	int num2;

	switch (*uParam0)
	{
		case 5:
			if (uParam0->f_8[iParam1 /*40*/].f_39 == -1)
			{
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_8[iParam1 /*40*/], "location_variation", uParam0->f_8[iParam1 /*40*/].f_39, false);
			}
			break;
	
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], "ifTrader", func_330(11) > 0, false);
			break;
	
		case 7:
			func_53(910, &num, &num2);
			func_331(num, num2);
			func_332(&num, &num2);
			func_333(-1654990742);
			break;
	
		case 8:
			func_209(149, true);
			func_209(150, true);
			func_209(151, true);
			break;
	}

	return;
}

void func_192() // Position - 0x7955 Hash - 0x98B060C0 ^0x3945BAEC
{
	if (!func_334())
		return;

	Global_1220720.f_26 = 0;
	return;
}

Vector3 func_193(var uParam0) // Position - 0x796F Hash - 0x332073C9 ^0xCCDDB0A6
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = 1;
	num.f_2 = uParam0;
	return num;
}

BOOL func_194(var uParam0, var uParam1, var uParam2) // Position - 0x7991 Hash - 0xB92B0DAD ^0x9D31EF59
{
	int i;

	if (!func_335(uParam0))
		return false;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_336(Global_1220720.f_2[i /*5*/].f_2, uParam0))
		{
		}
		else
		{
			return Global_1220720.f_2[i /*5*/].f_1;
		}
	}

	return false;
}

void func_195(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x79E8 Hash - 0xEE702FC7 ^0x22412A1A
{
	int i;

	if (!func_335(uParam0))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_336(Global_1220720.f_2[i /*5*/].f_2, uParam0))
		{
		}
		else
		{
			if (Global_1220720.f_2[i /*5*/].f_1 != bParam3)
				Global_1220720.f_24 = 1;
		
			Global_1220720.f_2[i /*5*/].f_1 = bParam3;
			break;
		}
	}

	return;
}

void func_196(BOOL bParam0) // Position - 0x7A57 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_197(var uParam0, int iParam1) // Position - 0x7A67 Hash - 0x368ECB8A ^0x3E340F21
{
	float animSceneTime;
	Hash hash;
	Hash hash2;
	int num;

	animSceneTime = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_8[iParam1 /*40*/]);
	func_44(*uParam0, &hash);
	MISC::SET_BIT(&(uParam0->f_327), 19);

	if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_1", false) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_2", false) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2_T10_Shot_2", false) && animSceneTime > 27.6f)
	{
		HUD::_0x5651516D947ABC53();
	
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 7))
		{
			if (!func_337(uParam0))
			{
				uParam0->f_354 = 1;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
				return;
			}
		
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
		}
	
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4)) || ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4)))
			return;
	
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			hash2 = func_180(hash, 0, true, -1, true);
			UIAPPS::_CLOSE_ALL_UIAPPS_IMMEDIATE();
			func_124();
			func_338(3, true);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
			return;
		}
	
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 8))
		{
			if (func_339() == 55)
				MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 8);
		
			return;
		}
	
		num = func_241(PLAYER::GET_PLAYER_INDEX(), true);
	
		if (num != -1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
			uParam0->f_351 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("gold_spend", "Gold_Spend_Sounds", true, 0);
		}
		else if (!(func_339() == 55))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
			uParam0->f_351 = 0;
			uParam0->f_353 = 1;
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
	{
		func_49();
		MISC::CLEAR_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
	}

	return;
}

void func_198(var uParam0, int iParam1) // Position - 0x7C8A Hash - 0x2BEAB39C ^0x2BEAB39C
{
	Hash hash;
	Hash hash2;
	BOOL flag;
	var name;
	BOOL value;
	Hash hash3;
	Hash hash4;
	int num;

	if (iParam1 < 0)
		return;

	func_44(*uParam0, &hash);
	flag = false;

	if (func_45(*uParam0, &hash2))
		if (func_340(&hash2))
			flag = true;
		else
			flag = false;

	MISC::SET_BIT(&(uParam0->f_327), 19);

	if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 7))
	{
		if (!func_337(uParam0))
		{
			if (func_341(*uParam0, &name, &value))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &name, value, false);
				MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
				uParam0->f_354 = 1;
				return;
			}
		}
		else if (func_341(*uParam0, &name, &value))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &name, !value, false);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
		}
	}

	if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], &uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/], false) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], &uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/], false))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			hash3 = func_180(hash, 0, true, -1, true);
		
			if (flag)
				hash4 = func_180(hash2, 0, true, -1, true);
		
			if (func_300(hash, hash3))
			{
				uParam0->f_349 = func_342(hash, hash3, true, false, true, 0);
			
				if (func_343(hash, joaat("currency_gold_bar"), hash3, true, true) > 0)
				{
					uParam0->f_349 = func_344(uParam0->f_349);
				
					if (flag && func_300(hash2, hash4))
					{
						num = func_342(hash2, hash4, true, false, true, 0);
					
						if (func_343(hash2, joaat("currency_gold_bar"), hash4, true, true) > 0)
							num = func_344(num);
					
						uParam0->f_350 = uParam0->f_349 + num;
					}
				}
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
				return;
			}
		
			uParam0->f_346 = func_218("CUTSCENE_ACTION_PURCHASE", joaat("INPUT_INTERACT_LOCKON_POS"), 4, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_219(uParam0->f_346, 6, true);
			func_220(uParam0->f_346, 19, false, true);
		
			if (func_345(hash3))
				func_347(uParam0->f_346, "CUTSCENE_ACTION_PURCHASE_OFFER", func_346(hash, false), uParam0->f_349, true);
			else
				func_347(uParam0->f_346, "CUTSCENE_ACTION_PURCHASE", func_346(hash, false), uParam0->f_349, true);
		
			if (flag)
			{
				if (func_310(uParam0->f_350 * 100))
				{
					uParam0->f_347 = func_218("CUTSCENE_ACTION_PURCHASE_DOUBLE", joaat("INPUT_CONTEXT_Y"), 4, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), 0);
					func_219(uParam0->f_347, 6, true);
					func_220(uParam0->f_347, 19, false, true);
				
					if (func_345(hash3) || func_345(hash4))
						func_348(uParam0->f_347, "CUTSCENE_ACTION_PURCHASE_DOUBLE_OFFER", func_346(hash, false), func_346(hash2, true), uParam0->f_350, true);
					else
						func_348(uParam0->f_347, "CUTSCENE_ACTION_PURCHASE_DOUBLE", func_346(hash, false), func_346(hash2, true), uParam0->f_350, true);
				}
			}
		
			uParam0->f_348 = func_218("CUTSCENE_ACTION_DONT_PURCHASE", joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 570, uParam0->f_355, 10, 1073741824, 0, 1065353216, false, 3, joaat("LONG_TIMED_EVENT"), 0);
			func_219(uParam0->f_348, 6, true);
			func_220(uParam0->f_348, 19, false, true);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
		}
	
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
			return;
	
		if (func_223(uParam0->f_346, true))
		{
			func_349(uParam0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
			uParam0->f_351 = 1;
			func_76(uParam0, hash, &(uParam0->f_299));
			return;
		}
	
		if (func_92(uParam0->f_347))
		{
			if (func_223(uParam0->f_347, false))
			{
				func_349(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
				uParam0->f_351 = 1;
				uParam0->f_352 = 1;
				func_76(uParam0, hash, &(uParam0->f_299));
				func_76(uParam0, hash2, &(uParam0->f_309));
				func_350(&(uParam0->f_299), &(uParam0->f_309), false);
			}
		}
	
		if (func_223(uParam0->f_348, true))
		{
			func_349(uParam0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
			uParam0->f_351 = 0;
			uParam0->f_353 = 1;
			return;
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
	{
		func_349(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
	}

	return;
}

void func_199(var uParam0) // Position - 0x8134 Hash - 0xB95F9500 ^0xF710781E
{
	if (uParam0->f_354 || uParam0->f_351 || uParam0->f_353)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_327, 0))
		{
			if (!func_351(*uParam0))
				func_104(*uParam0, 1);
		
			if (func_101(*uParam0))
				MISC::SET_BIT(&(uParam0->f_327), 0);
		}
	}

	return;
}

int func_200(int* piParam0) // Position - 0x818F Hash - 0xAC4ACAD7 ^0x53A8C861
{
	return func_352(piParam0->f_1);
}

BOOL func_201(Any* panParam0, Any* panParam1) // Position - 0x819F Hash - 0x813C595 ^0xD1040CA0
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(panParam0, panParam1))
		return true;

	return false;
}

int func_202(int iParam0, var uParam1) // Position - 0x81B7 Hash - 0x3981A86B ^0xEC8B4F83
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

void func_203(int iParam0) // Position - 0x820A Hash - 0x646928F0 ^0x646928F0
{
	func_353(iParam0);
	return;
}

void func_204(var uParam0) // Position - 0x8218 Hash - 0x4F413E20 ^0xB13FB0E6
{
	int i;
	int j;

	for (i = 0; i < 2; i = i + 1)
	{
		for (j = 0; j < 4; j = j + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[i /*27*/].f_1[j /*6*/]))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_241[i /*27*/].f_1[j /*6*/], true);
			}
		}
	}

	return;
}

int func_205(var uParam0) // Position - 0x8270 Hash - 0x9F688C01 ^0xFCB9FC9F
{
	int i;
	int num;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[i /*15*/].f_1))
		{
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_89[i /*15*/].f_1, true);
			num = num + 1;
		}
	}

	return 1;
}

const char* func_206(var uParam0, var uParam1, var uParam2) // Position - 0x82B8 Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_207(var uParam0) // Position - 0x82CC Hash - 0xE249B381 ^0x8438C8FE
{
	switch (uParam0->f_234.f_2)
	{
		case 0:
			if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_234.f_1))
			{
				uParam0->f_234.f_2 = 6;
				return;
			}
		
			uParam0->f_234.f_2 = 1;
			break;
	
		case 1:
			TXD::REQUEST_STREAMED_TXD(uParam0->f_234.f_1, false);
			uParam0->f_234.f_2 = 2;
			break;
	
		case 2:
			if (TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_234.f_1))
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_234))
					uParam0->f_234.f_2 = 4;
				else
					uParam0->f_234.f_2 = 3;
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_234))
				uParam0->f_234.f_2 = 4;
			break;
	
		case 4:
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_234, uParam0->f_234.f_1, 0, 0);
			uParam0->f_234.f_2 = 5;
			break;
	}

	return;
}

BOOL func_208(int iParam0, var uParam1) // Position - 0x8390 Hash - 0xCBF4C6B9 ^0xCBF4C6B9
{
	if (!func_276(iParam0))
		return false;

	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 33)
	{
		*uParam1 = 0;
		return true;
	}

	if (func_354() != -1)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051832.f_92[iParam0 /*75*/].f_21);
		else
			return false;
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1915656.f_3[iParam0 /*447*/].f_23))
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1915656.f_3[iParam0 /*447*/].f_23);
	else
		return false;

	return true;
}

void func_209(int iParam0, BOOL bParam1) // Position - 0x8434 Hash - 0x562373AA ^0xCF0900B8
{
	if (bParam1)
		func_355(iParam0, 33554432);
	else
		func_356(iParam0, 33554432);

	return;
}

void func_210(float fParam0) // Position - 0x845A Hash - 0x4ADB1AC3 ^0x8834322
{
	Ped ped;
	Vector3 entityCoords;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	MISC::CLEAR_AREA(entityCoords, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(entityCoords, fParam0);
	return;
}

BOOL func_211() // Position - 0x8499 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_212(int iParam0) // Position - 0x84AD Hash - 0x81B61271 ^0x22A3D4FE
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

BOOL func_213(var uParam0, int iParam1) // Position - 0x84D4 Hash - 0xBE5BF0BE ^0x6B81083B
{
	if (6 == *uParam0)
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_2", false))
			return false;

	return true;
}

void func_214(var uParam0) // Position - 0x84FC Hash - 0x39A0CCF ^0xEF3DA0FB
{
	Entity entity;

	if (*uParam0 != 5)
		return;

	if (!MISC::IS_BIT_SET(uParam0->f_327, 13))
		return;

	if (!func_208(38, &entity))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	func_209(func_134(), false);
	ENTITY::SET_ENTITY_VISIBLE(entity, true);
	MISC::CLEAR_BIT(&(uParam0->f_327), 13);
	return;
}

BOOL func_215(var uParam0) // Position - 0x8557 Hash - 0x5001E582 ^0x5001E582
{
	return func_357(*uParam0, 1);
}

void func_216(var uParam0, BOOL bParam1) // Position - 0x8567 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_215(uParam0))
		func_358(uParam0);

	return;
}

int func_217(var uParam0) // Position - 0x8587 Hash - 0xCB0C9F2B ^0x95CAE221
{
	if (!func_215(uParam0))
		return 0;

	if (func_359(uParam0))
		return uParam0->f_2;

	return func_360(uParam0->f_1);
}

int func_218(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, int iParam12) // Position - 0x85B8 Hash - 0xC75514B1 ^0x2D24357
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_361(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_362(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, iParam12);
		return num;
	}

	return 0;
}

void func_219(int iParam0, int iParam1, BOOL bParam2) // Position - 0x863E Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_92(iParam0))
		return;

	num = func_225(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TYPE(Global_1951910[num /*23*/].f_3, iParam1);
	return;
}

void func_220(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8687 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_92(iParam0))
		return;

	num = func_225(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951910[num /*23*/].f_3, iParam1, bParam2);
	return;
}

void func_221(int iParam0, char* sParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x86D2 Hash - 0x4754B47D ^0x3CC150FB
{
	int num;

	if (bParam4 && !func_92(iParam0))
		return;

	num = func_225(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, MISC::VAR_STRING(2, sParam1, iParam2, iParam3));
	return;
}

void func_222(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8724 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_92(iParam0))
		return;

	num = func_225(iParam0);

	if (bParam1)
	{
		func_363(iParam0, 4);
	
		if (bParam3)
			func_364(num, true);
	
		func_365(num, true);
	}
	else
	{
		func_366(iParam0, 4);
		func_365(num, false);
	}

	return;
}

BOOL func_223(int iParam0, BOOL bParam1) // Position - 0x8778 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_92(iParam0))
		return false;

	num = func_225(iParam0);

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

BOOL func_224(int iParam0, var uParam1) // Position - 0x8872 Hash - 0x26EFB59C ^0x494EFD89
{
	int num;
	var unk5;
	float num2;
	int i;
	var unk8;

	num = Global_1072759.f_28418[48 /*4*/].f_3;
	num.f_2 = -738708473;
	num.f_3 = func_367(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return false;

	for (i = 0; i < 3; i = i + 1)
	{
		unk5 = { func_257() };
		num2 = 0f;
		TEXT_LABEL_ASSIGN_STRING(&unk8, "vPlayerPos", 24);
		TEXT_LABEL_APPEND_INT(&unk8, i + 1, 24);
		num.f_2 = 491979052;
		num.f_3 = MISC::GET_HASH_KEY(&unk8);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk5, &num);
		TEXT_LABEL_ASSIGN_STRING(&unk8, "fPlayerHead", 24);
		TEXT_LABEL_APPEND_INT(&unk8, i + 1, 24);
		num.f_2 = -1023214806;
		num.f_3 = MISC::GET_HASH_KEY(&unk8);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num2, &num);
		uParam1->[i /*3*/] = { unk5 };
		uParam1->f_10[i] = num2;
		unk5 = { func_257() };
		num2 = 0f;
		TEXT_LABEL_ASSIGN_STRING(&unk8, "vHorsePos", 24);
		TEXT_LABEL_APPEND_INT(&unk8, i + 1, 24);
		num.f_2 = 491979052;
		num.f_3 = MISC::GET_HASH_KEY(&unk8);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk5, &num);
		TEXT_LABEL_ASSIGN_STRING(&unk8, "fHorseHead", 24);
		TEXT_LABEL_APPEND_INT(&unk8, i + 1, 24);
		num.f_2 = -1023214806;
		num.f_3 = MISC::GET_HASH_KEY(&unk8);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num2, &num);
		uParam1->f_14[i /*3*/] = { unk5 };
		uParam1->f_24[i] = num2;
	}

	return true;
}

int func_225(int iParam0) // Position - 0x89B5 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_226(int iParam0) // Position - 0x89BF Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_368(iParam0))
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

void func_227(BOOL bParam0, BOOL bParam1) // Position - 0x8A72 Hash - 0x455FBAD3 ^0x455FBAD3
{
	if (bParam0)
	{
		func_266(66);
	
		if (bParam1)
			func_266(73);
	}
	else
	{
		func_267(66);
		func_267(50);
		func_267(73);
	}

	return;
}

BOOL func_228(int iParam0) // Position - 0x8AAA Hash - 0xB691C15F ^0x7354E462
{
	int num;
	int i;

	if (Global_1295666.f_11 == Global_1295666.f_5)
		return true;

	switch (iParam0)
	{
		case 2:
			for (i = 13; i <= 15; i = i + 1)
			{
				num = func_369(2, i);
			
				if (num == 0)
					return false;
			
				if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
					return false;
			}
		
			return true;
	
		default:
		
	}

	return true;
}

int func_229(int iParam0, int iParam1) // Position - 0x8B0D Hash - 0x751E6540 ^0x7AE49023
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
			
				case 1:
					return -193397860;
			
				case 2:
					return -1639158743;
			
				case 3:
					return -545263819;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
			
				case 1:
					return 1266428317;
			
				case 2:
					return -1342435444;
			
				case 3:
					return -243002563;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
			
				case 1:
					return 1587973176;
			
				case 2:
					return 1338229360;
			
				case 3:
					return -271501111;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
			
				case 1:
					return -466995375;
			
				case 2:
					return -398924971;
			
				case 3:
					return -1232006170;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
			
				case 1:
					return -1144971953;
			
				case 2:
					return 86781479;
			
				case 3:
					return 416111513;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
			
				case 1:
					return -2015262927;
			
				case 2:
					return -707938197;
			
				case 3:
					return 2136054096;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
			
				case 1:
					return 407185110;
			
				case 2:
					return -769170006;
			
				case 3:
					return -411703805;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
			
				case 1:
					return 410660064;
			
				case 2:
					return -254646314;
			
				case 3:
					return 1524612084;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 0:
					return -602228764;
			
				case 1:
					return 1765518873;
			
				case 2:
					return -1908979734;
			
				case 3:
					return 923460453;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_230(int iParam0) // Position - 0x8DAF Hash - 0x61C01E3 ^0x61C01E3
{
	if (iParam0 <= 0 || iParam0 >= 10)
		return -1;

	return Global_1292128[iParam0];
}

BOOL func_231(int iParam0) // Position - 0x8DD5 Hash - 0x1D686BE7 ^0x2CC3BF74
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
		return false;

	return true;
}

int func_232(int iParam0, BOOL bParam1) // Position - 0x8DF7 Hash - 0xDC25C259 ^0xF0C87A0D
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1292143.f_459.f_44[i /*30*/] == -1)
		{
		}
		else if (Global_1292143.f_459.f_44[i /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292143.f_459.f_44[i /*30*/].f_1;
		}
	}

	if (bParam1)
		return 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1292143.f_459.f_1245[i /*30*/] == -1)
		{
		}
		else if (Global_1292143.f_459.f_1245[i /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292143.f_459.f_1245[i /*30*/].f_1;
		}
	}

	return 0;
}

int func_233(int iParam0, int iParam1) // Position - 0x8EB2 Hash - 0x37FA9E51 ^0x38034F60
{
	int num;

	if (iParam0 == 0)
		return -1;

	if (Global_1292143.f_459.f_1546 >= 40)
	{
		func_370();
		return -1;
	}

	num = -1;
	num.f_5.f_1 = 11;
	num.f_18.f_1 = 10;
	num.f_4 = iParam0;
	num = func_371();
	num.f_3 = iParam1;
	func_372(num, 0);
	return num;
}

void func_234(int iParam0, int iParam1) // Position - 0x8F16 Hash - 0x8AC6DE55 ^0x8AC6DE55
{
	if (!func_136(iParam0))
		return;

	Global_1292128[iParam0] = iParam1;
	return;
}

void func_235(int iParam0) // Position - 0x8F35 Hash - 0xB33CA28A ^0xE112A7B0
{
	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]) && !func_228(iParam0))
		return;

	switch (iParam0)
	{
		case 2:
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("cs_mp_samson_finch"), false, false)))
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("cs_mp_samson_finch"), false, false));
			break;
	
		case 6:
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("CS_MP_MAGGIE"), false, false)))
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("CS_MP_MAGGIE"), false, false));
		
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("cs_mp_dannylee"), false, false)))
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("cs_mp_dannylee"), false, false));
		
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("cs_mp_agent_hixon"), false, false)))
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(joaat("cs_mp_agent_hixon"), false, false));
			break;
	}

	return;
}

void func_236() // Position - 0x9005 Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_1960746 = false;
	return;
}

BOOL func_237(Hash hParam0) // Position - 0x9012 Hash - 0xA3093881 ^0xA3093881
{
	if (hParam0 == 0)
		return false;

	return Global_1291943[hParam0] == hParam0;
}

var func_238(int iParam0) // Position - 0x902F Hash - 0xBB06FECD ^0xBB06FECD
{
	return Global_1110244.f_268.f_3380[iParam0];
}

int func_239(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x9045 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_240(BOOL bParam0) // Position - 0x9080 Hash - 0x6CD0A14E ^0x2FB2576A
{
	if (Global_17418.f_3104.f_1 == -1)
		return;

	if (Global_17418.f_3104 == bParam0)
		return;

	Global_17418.f_3104 = bParam0;

	if (bParam0)
	{
		func_373(Global_17418.f_3104.f_1);
		Global_1051832.f_4681.f_7 = 1;
		func_374(true, 1017438712);
	}

	return;
}

int func_241(Player plParam0, BOOL bParam1) // Position - 0x90D3 Hash - 0x60D6421F ^0x107E8E35
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/].f_5.f_12;
}

BOOL func_242(Hash hParam0, int iParam1) // Position - 0x90FA Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_292(hParam0, 0))
		return false;

	num = func_375(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_377(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_376(hParam0, 1))
				return false;
			break;
	}

	return func_378(hParam0, false, false, false) >= iParam1;
}

void func_243(Hash hParam0) // Position - 0x917D Hash - 0x6C79B149 ^0x6F4E7B45
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_379(hParam0);

	return;
}

BOOL func_244() // Position - 0x9195 Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1940026 == 1;
}

BOOL func_245() // Position - 0x91A3 Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1940026 == 2;
}

void func_246(float fParam0) // Position - 0x91B1 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_247() // Position - 0x91B9 Hash - 0xD8699E96 ^0x470C5EF3
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1940026.f_15 = 0f;
	return;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_248(int iParam0) // Position - 0x91D0 Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_380(iParam0))
		return false;

	num = func_381(iParam0, 1);

	if (!func_382(Global_1156111.f_35859.f_919[num /*12*/]))
		return true;

	num4 = func_383(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_384(iParam0, num2))
		{
			case 0:
				func_385(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_385(num2, iParam0, i);
						func_386(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_386(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_387(num2, 1);
		func_388(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_389(num3, 0);
		
			for (k = 0; k < Global_1156111.f_35859.f_9502; k = k + 1)
			{
				if (Global_1156111.f_35859.f_9302[k] != num2)
				{
				}
				else
				{
					Global_1156111.f_35859.f_9302[k] = -1;
					Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 - 1;
					Global_1156111.f_35859.f_9302[k] = Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502];
					Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = -1;
					break;
				}
			}
		}
	}

	Global_1156111.f_35859.f_919[num /*12*/] = -1;
	func_390(&Global_1156111.f_35859.f_919[num /*12*/]);
	return true;
}

void func_249(int iParam0) // Position - 0x9460 Hash - 0xBE8A96EC ^0x443DE189
{
	Player player;
	Ped ped;
	BOOL flag;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(ped, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 11, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 12, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 0, true);
	PED::SET_PED_CAN_RAGDOLL(ped, true);
	flag = iParam0 & 256 != 0;

	if (flag)
		PLAYER::SET_PLAYER_CONTROL(player, true, 0, false);
	else
		PLAYER::SET_PLAYER_CONTROL(player, true, SPC_CLEAR_TASKS, false);

	ENTITY::FREEZE_ENTITY_POSITION(ped, false);

	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_391();
	}

	PLAYER::SET_PLAYER_INVINCIBLE(player, false);

	if (!PED::IS_PED_IN_ANY_VEHICLE(ped, false))
	{
		ENTITY::SET_ENTITY_COLLISION(ped, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(ped, true, false);
	}

	return;
}

void func_250(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x9512 Hash - 0x1E5D7216 ^0xE8129284
{
	Player player;
	Ped ped;
	eSetPlayerControlFlags flags;

	!bParam0;
	bParam1;
	bParam2;
	bParam3;
	bParam6;
	bParam4;
	bParam5;
	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	flags = 0;

	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(ped))
		flags = SPC_CLEAR_TASKS;

	if (bParam4)
		flags = flags | SPC_LEAVE_CAMERA_CONTROL_ON;

	if (bParam5)
		flags = flags | SPC_PREVENT_EVERYBODY_BACKOFF;

	PLAYER::SET_PLAYER_CONTROL(player, false, flags, false);
	ENTITY::SET_ENTITY_VISIBLE(ped, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 2, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 3, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 11, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 12, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 0, bParam0);

	if (bParam1)
		PLAYER::SET_PLAYER_INVINCIBLE(player, true);

	if (!PED::IS_PED_IN_ANY_VEHICLE(ped, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(ped) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(ped))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(ped, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(ped, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(ped, true);
		}
	}

	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(ped))
		if (TASK::_0x9FF5F9B24E870748(ped))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, !bParam6);

	return;
}

int func_251(Player plParam0) // Position - 0x9634 Hash - 0xB51678BE ^0xFDD29DED
{
	if (plParam0 == 255)
		plParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (plParam0 < 0 || plParam0 >= 32)
		return -1;

	return Global_1155150[plParam0 /*30*/].f_3.f_1;
}

BOOL func_252(var uParam0, int iParam1) // Position - 0x966B Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

int func_253(Player plParam0) // Position - 0x967C Hash - 0xA9CB276 ^0x6C192FF0
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1144526[plParam0 /*83*/].f_38.f_12.f_5;
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x96A8 Hash - 0xCCF55E41 ^0xCCF55E41
{
	switch (iParam2)
	{
		case -2146415538:
			switch (iParam1)
			{
				case -1281008453:
					return 187;
			
				case -811830793:
					return 163;
			
				case -805084272:
					return 195;
			
				case 1081855422:
					return 171;
			
				case 1421598733:
					return 179;
			
				case 1429053594:
					return 203;
			
				case 1802123763:
					return 155;
			
				default:
				
			}
		
			switch (iParam3)
			{
				case 8:
					return 51;
			
				case 9:
					return 43;
			
				case 10:
					return 35;
			
				case 11:
					return 24;
			
				case 12:
					return 6;
			
				case 13:
					return 14;
			
				default:
					break;
			}
			break;
	
		case joaat("upgrade_camp_theme_bounty_hunter"):
			switch (iParam1)
			{
				case -1281008453:
					return 189;
			
				case -811830793:
					return 165;
			
				case -805084272:
					return 197;
			
				case 1081855422:
					return 173;
			
				case 1421598733:
					return 181;
			
				case 1429053594:
					return 205;
			
				case 1802123763:
					return 157;
			
				default:
				
			}
		
			switch (iParam3)
			{
				case 8:
					return 53;
			
				case 9:
					return 45;
			
				case 10:
					return 37;
			
				case 11:
					return 26;
			
				case 12:
					return 8;
			
				case 13:
					return 16;
			
				default:
					break;
			}
			break;
	
		case -892962381:
			switch (iParam1)
			{
				case -1281008453:
					return 188;
			
				case -811830793:
					return 164;
			
				case -805084272:
					return 196;
			
				case 1081855422:
					return 172;
			
				case 1421598733:
					return 180;
			
				case 1429053594:
					return 204;
			
				case 1802123763:
					return 156;
			
				default:
				
			}
		
			switch (iParam3)
			{
				case 8:
					return 52;
			
				case 9:
					return 44;
			
				case 10:
					return 36;
			
				case 11:
					return 25;
			
				case 12:
					return 7;
			
				case 13:
					return 15;
			
				default:
					break;
			}
			break;
	
		case joaat("upgrade_camp_theme_trader"):
			switch (iParam1)
			{
				case -1281008453:
					return 191;
			
				case -811830793:
					return 167;
			
				case -805084272:
					return 199;
			
				case 1081855422:
					return 175;
			
				case 1421598733:
					return 183;
			
				case 1429053594:
					return 207;
			
				case 1802123763:
					return 159;
			
				default:
				
			}
		
			switch (iParam3)
			{
				case 8:
					return 55;
			
				case 9:
					return 47;
			
				case 10:
					return 39;
			
				case 11:
					return 28;
			
				case 12:
					return 10;
			
				case 13:
					return 18;
			
				default:
					break;
			}
			break;
	
		case -766600612:
			switch (iParam1)
			{
				case -1281008453:
					return 185;
			
				case -811830793:
					return 161;
			
				case -805084272:
					return 193;
			
				case 1081855422:
					return 169;
			
				case 1421598733:
					return 177;
			
				case 1429053594:
					return 201;
			
				case 1802123763:
					return 153;
			
				default:
				
			}
		
			switch (iParam3)
			{
				case 8:
					return 49;
			
				case 9:
					return 41;
			
				case 10:
					return 33;
			
				case 11:
					return 22;
			
				case 12:
					return 4;
			
				case 13:
					return 12;
			
				default:
					break;
			}
			break;
	
		case joaat("upgrade_camp_theme_collector"):
			switch (iParam1)
			{
				case -1281008453:
					return 190;
			
				case -811830793:
					return 166;
			
				case -805084272:
					return 198;
			
				case 1081855422:
					return 174;
			
				case 1421598733:
					return 182;
			
				case 1429053594:
					return 206;
			
				case 1802123763:
					return 158;
			
				default:
				
			}
		
			switch (iParam3)
			{
				case 8:
					return 54;
			
				case 9:
					return 46;
			
				case 10:
					return 38;
			
				case 11:
					return 27;
			
				case 12:
					return 9;
			
				case 13:
					return 17;
			
				default:
					break;
			}
			break;
	
		case 226275223:
			switch (iParam1)
			{
				case -1281008453:
					return 186;
			
				case -811830793:
					return 162;
			
				case -805084272:
					return 194;
			
				case 1081855422:
					return 170;
			
				case 1421598733:
					return 178;
			
				case 1429053594:
					return 202;
			
				case 1802123763:
					return 154;
			
				default:
				
			}
		
			switch (iParam3)
			{
				case 8:
					return 50;
			
				case 9:
					return 42;
			
				case 10:
					return 34;
			
				case 11:
					return 23;
			
				case 12:
					return 5;
			
				case 13:
					return 13;
			
				default:
					break;
			}
			break;
	}

	switch (iParam3)
	{
		case 8:
			return 56;
	
		case 9:
			return 40;
	
		case 10:
			return 31;
	
		case 11:
			return 21;
	
		case 12:
			return 3;
	
		default:
		
	}

	switch (iParam1)
	{
		case joaat("upgrade_camp_follower_outfit_generic_07"):
			return 119;
	
		case -1991362080:
		case -1535250369:
		case 914789466:
			return 67;
	
		case joaat("upgrade_camp_flag_brand_obeyes_default_00"):
			return 98;
	
		case joaat("upgrade_camp_flag_animl_bear_white_00"):
			return 82;
	
		case -1958953278:
			return 109;
	
		case -1949362405:
			return 127;
	
		case -1867469444:
			return 78;
	
		case -1568446057:
			return 104;
	
		case -1567174399:
			return 123;
	
		case joaat("upgrade_camp_flag_animl_vulture_white_00"):
			return 90;
	
		case joaat("upgrade_camp_delivery_wagon_large"):
			return 62;
	
		case joaat("upgrade_camp_flag_animl_eagle_white_00"):
			return 85;
	
		case -1457562527:
		case joaat("upgrade_camp_dog_husky_003"):
			return 71;
	
		case -1413081099:
			return 101;
	
		case joaat("upgrade_camp_equipment_fast_travel_map"):
			return 60;
	
		case -1396511102:
			return 2;
	
		case -1336962048:
			return 73;
	
		case -1291835985:
			return 102;
	
		case -1281008453:
			return 184;
	
		case -1030438211:
			return 100;
	
		case -941076000:
			return 122;
	
		case -908539768:
			return 107;
	
		case -874512337:
			return 115;
	
		case joaat("upgrade_camp_flag_brand_jjacks_default_00"):
			return 95;
	
		case -811830793:
			return 160;
	
		case -805084272:
			return 192;
	
		case -801482238:
			return 89;
	
		case -797537960:
			return 117;
	
		case -763924656:
			return 124;
	
		case -715360129:
		case 2139966690:
			return 70;
	
		case joaat("upgrade_camp_flag_animl_morgan_white_00"):
			return 87;
	
		case -510449329:
			return 75;
	
		case -492687949:
			return 114;
	
		case -474096794:
			return 76;
	
		case -429885089:
		case -289273358:
		case 536669287:
			return 69;
	
		case joaat("upgrade_camp_butcher_table"):
			return 61;
	
		case joaat("upgrade_camp_flag_animl_coyote_white_00"):
			return 84;
	
		case -415385882:
			return 116;
	
		case joaat("upgrade_camp_flag_brand_pmgin_default_00"):
			return 99;
	
		case -267422042:
			return 132;
	
		case -144166169:
			return 113;
	
		case -132276375:
			return 106;
	
		case joaat("upgrade_camp_follower_outfit_generic_09"):
			return 121;
	
		case 42875037:
			return 80;
	
		case 55994234:
		case 262209551:
		case 769866899:
			return 68;
	
		case 81790578:
			return 79;
	
		case 172529261:
			return 111;
	
		case 271439292:
			return 105;
	
		case 408040064:
			return 112;
	
		case joaat("upgrade_camp_flag_brand_lucifers_default_00"):
			return 97;
	
		case 501275986:
			return 129;
	
		case 524939438:
			return 126;
	
		case joaat("upgrade_camp_follower_outfit_generic_08"):
			return 120;
	
		case 733303292:
			return 110;
	
		case joaat("upgrade_camp_follower_outfit_seasonal_02"):
			return 134;
	
		case joaat("upgrade_camp_follower_outfit_seasonal_01"):
			return 133;
	
		case 846374071:
			return 93;
	
		case joaat("upgrade_camp_follower_outfit_seasonal_03"):
			return 135;
	
		case 908640876:
			return 128;
	
		case 913131737:
			return 64;
	
		case joaat("upgrade_camp_flag_state_anchor_blue_00"):
			return 103;
	
		case 1054660175:
			return 118;
	
		case 1081855422:
			return 168;
	
		case joaat("upgrade_camp_flag_animl_catfish_default_00"):
			return 108;
	
		case 1101681612:
			return 91;
	
		case 1160088249:
			return 131;
	
		case 1173221821:
			return 94;
	
		case 1257532163:
			return 130;
	
		case 1262519305:
			return 74;
	
		case joaat("upgrade_camp_flag_animl_alligator_white_00"):
			return 81;
	
		case 1421598733:
			return 176;
	
		case 1429053594:
			return 200;
	
		case joaat("upgrade_camp_delivery_wagon_medium"):
			return 63;
	
		case joaat("upgrade_camp_stew_pot"):
			return 65;
	
		case joaat("upgrade_camp_flag_brand_lcola_default_00"):
			return 96;
	
		case 1671341100:
			return 72;
	
		case 1687066518:
			return 92;
	
		case 1802123763:
			return 152;
	
		case 1853960588:
			return 86;
	
		case joaat("upgrade_camp_flag_animl_buck_white_00"):
			return 83;
	
		case 1928558912:
			return 125;
	
		case 2022645972:
			return 77;
	
		case joaat("upgrade_camp_weapons_locker"):
			return 66;
	
		case joaat("upgrade_camp_flag_animl_sturgeon_white_00"):
			return 88;
	
		default:
		
	}

	return 0;
}

int func_255(int iParam0) // Position - 0x9F5E Hash - 0xB8EC44B7 ^0x8E2F032E
{
	switch (iParam0)
	{
		case 113:
			return joaat("META_OUTFIT_DEFAULT");
	
		case 114:
			return -1359472568;
	
		case 115:
			return 309845830;
	
		case 116:
			return 472445608;
	
		case 117:
			return -302836163;
	
		case 118:
			return -324004853;
	
		case 119:
			return -81940250;
	
		case 120:
			return 1363893568;
	
		case 121:
			return 1604450797;
	
		case 122:
			return -2089344668;
	
		case 123:
			return 2050756334;
	
		case 124:
			return 1086496835;
	
		case 125:
			return 1461439733;
	
		case 126:
			return -942529833;
	
		case 127:
			return 2125074568;
	
		case 128:
			return -827426745;
	
		case 129:
			return -1585799712;
	
		case 130:
			return -1378452636;
	
		case 131:
			return -273086735;
	
		case 132:
			return 75146260;
	
		case 133:
			return 1988797837;
	
		case 134:
			return -182115660;
	
		case 135:
			return -420968901;
	
		default:
		
	}

	return 0;
}

int func_256(int iParam0) // Position - 0xA0B1 Hash - 0xAFBAC931 ^0xAFBAC931
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

Vector3 func_257() // Position - 0xA13E Hash - 0xA9B5EBA8 ^0xA9B5EBA8
{
	return 0f, 0f, 0f;
}

int func_258(int iParam0, Vector3* pvParam1, var uParam2) // Position - 0xA149 Hash - 0x9317D957 ^0x2E2C651A
{
	int num;
	float num2;

	num = Global_1072759.f_28418[48 /*4*/].f_3;
	num.f_2 = -738708473;
	num.f_3 = func_367(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return 0;

	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam1, &num);
	num2 = 0f;
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num2, &num);
	uParam2->f_2 = num2;
	return 1;
}

Object func_259(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0xA1CB Hash - 0x87D7C924 ^0x84C3995
{
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	Object objectFromIndexedItem;
	Object object;
	int i;
	int entitiesNearPoint;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, itemSet, 3);

	for (i = 0; i <= entitiesNearPoint - 1; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		objectFromIndexedItem = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(indexedItemInItemset);
	
		if (!ENTITY::DOES_ENTITY_EXIST(objectFromIndexedItem))
		{
		}
		else if (!ENTITY::IS_ENTITY_VISIBLE(objectFromIndexedItem))
		{
		}
		else if (hParam0 != ENTITY::GET_ENTITY_MODEL(objectFromIndexedItem))
		{
		}
		else
		{
			object = objectFromIndexedItem;
			break;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return object;
}

int func_260() // Position - 0xA247 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_261(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xA256 Hash - 0x7F1CACD5 ^0x5E3DA144
{
	Vector3 vector;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		vector = { vParam1 };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false))
			ENTITY::SET_ENTITY_COORDS(eParam0, vector, true, false, true, true);
		else
			ENTITY::SET_ENTITY_COORDS(eParam0, vParam1, true, false, true, true);
	}

	return;
}

void func_262(var uParam0, int iParam1) // Position - 0xA29E Hash - 0x2A4CAA39 ^0x80B0DA70
{
	var name;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
		return;

	TEXT_LABEL_ASSIGN_INT(&name, uParam0->f_1, 64);

	if (!PED::ADD_RELATIONSHIP_GROUP(&name, &(uParam0->f_10)))
		return;

	for (i = 0; i <= 86; i = i + 1)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, uParam0->f_10, func_392(i, 1));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, func_392(i, 1), uParam0->f_10);
	}

	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_1, uParam0->f_10);
	return;
}

int func_263() // Position - 0xA31D Hash - 0x6729CFDE ^0x2459258B
{
	if (Global_1295666.f_11 < 0 || Global_1295666.f_11 >= 32 || !NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[Global_1295666.f_11]))
		return 0;

	if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(Global_1295666.f_149[Global_1295666.f_11])))
		return 0;

	return 1;
}

BOOL func_264(int iParam0, var uParam1, var uParam2) // Position - 0xA37A Hash - 0xFE4DBE62 ^0x85398FFD
{
	switch (iParam0)
	{
		case 5:
		
	
		default:
		
	}

	return false;
}

int func_265(Any* panParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xA3F7 Hash - 0x491CC71A ^0xBA24D6BA
{
	int num;
	int num2;

	num = iParam4;
	num.f_1 = iParam3;
	num.f_2 = sParam1;
	num.f_3 = sParam2;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(panParam0, &num, bParam5);
	return num2;
}

int func_266(int iParam0) // Position - 0xA423 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_394(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_267(int iParam0) // Position - 0xA440 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_395(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

BOOL func_268(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0xA45D Hash - 0x483BEF08 ^0xE7718810
{
	Hash hash;
	int endRange;
	int randomIntInRange;

	hash = Global_1072759.f_23824.f_383[func_396(uParam0) /*272*/];
	endRange = func_397(hash);

	if (endRange <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		if (func_398(hash, randomIntInRange, pvParam3, pfParam4))
			return true;
	}

	return false;
}

void func_269(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13) // Position - 0xA4AE Hash - 0xFDA035EC ^0xBE010CED
{
	if (func_399(255) == 4)
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
		func_400(0, false, 0, true);

	func_266(0);
	func_266(3);
	Global_1102813.f_3909 = iParam11;
	Global_1102813.f_3910 = iParam12;
	Global_1102813.f_3911 = iParam13;
	func_401(&(Global_1102813.f_3839));
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

	func_402(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { uParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_403(Global_1102813.f_3839, 36);
	func_404(Global_1102813.f_3878, 36);
	return;
}

BOOL func_270(var uParam0) // Position - 0xA683 Hash - 0xDE590869 ^0xDE590869
{
	return uParam0->f_328 == 0;
}

Vector3 func_271(var uParam0) // Position - 0xA692 Hash - 0x4B715E7F ^0x4B715E7F
{
	switch (*uParam0)
	{
		case 3:
			return 5f, 5f, 5f;
	
		case 4:
			return 10f, 10f, 5f;
	
		case 7:
			return 5f, 3.947f, 8.828f;
	
		default:
		
	}

	return 11.867499f, 12.947404f, 8.828214f;
}

float func_272(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xA6E6 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_273(var uParam0) // Position - 0xA704 Hash - 0xE839740C ^0x16E851AE
{
	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
			if (func_405())
				return true;
		
			if (Global_1295658.f_2.f_1 == 1 || func_406())
				return true;
			break;
	
		case 8:
			if (func_164(false))
				return true;
			break;
	}

	return false;
}

BOOL func_274(var uParam0) // Position - 0xA766 Hash - 0x6EA0E8DB ^0x29700BA2
{
	Ped mount;
	Entity firstEntityPedIsCarrying;

	mount = PED::GET_MOUNT(Global_1295666.f_3);

	if (ENTITY::DOES_ENTITY_EXIST(mount))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(mount);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying)))
		{
			if (PED::IS_PED_HOGTIED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying)))
			{
				*uParam0 = firstEntityPedIsCarrying;
				return true;
			}
		}
	}

	return false;
}

void func_275(Player plParam0) // Position - 0xA7C5 Hash - 0x4B7153E7 ^0x34AB98D6
{
	int eventData;
	var value;

	eventData = 200;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam0);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 4, 16, &value);
	return;
}

BOOL func_276(int iParam0) // Position - 0xA7F6 Hash - 0xDFD519AF ^0xDFD519AF
{
	return iParam0 > -1 && iParam0 < 40;
}

BOOL func_277(int iParam0, int iParam1) // Position - 0xA80C Hash - 0x462E2E01 ^0x6D8EE304
{
	if (!func_276(iParam0))
		return false;

	if (func_354() == -1)
		return Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1 != false;
	else
		return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;

	return false;
}

void func_278(int iParam0, int iParam1) // Position - 0xA857 Hash - 0xF30343A ^0x652CD5E3
{
	if (!func_276(iParam0))
		return;

	if (func_354() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 || iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;

	return;
}

void func_279(int iParam0, int iParam1) // Position - 0xA8AF Hash - 0x6F4899EB ^0x5624A2EB
{
	if (!func_276(iParam0))
		return;

	if (func_354() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

BOOL func_280(int iParam0) // Position - 0xA922 Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_407())
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_281(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA942 Hash - 0xC9655EC3 ^0xE7BDB885
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

float func_282(int iParam0, BOOL bParam1) // Position - 0xA9E0 Hash - 0xE256EC28 ^0xE256EC28
{
	float num;

	switch (iParam0)
	{
		case 1:
			num = 100f;
			break;
	
		case 2:
			num = 100f;
			break;
	
		case 3:
			num = 100f;
			break;
	
		case 4:
			num = 100f;
			break;
	
		case 5:
			num = 100f;
			break;
	
		case 6:
			num = 100f;
			break;
	
		case 7:
			num = 100f;
			break;
	
		case 8:
			num = 100f;
			break;
	
		case 9:
			num = 100f;
			break;
	
		default:
			num = 0f;
			break;
	}

	if (bParam1)
		num = num * num;

	return num;
}

void func_283(Ped pedParam0, Ped pedParam1) // Position - 0xAA94 Hash - 0x59149258 ^0x4215B678
{
	Hash weaponHash;
	int i;
	int attachPoint;

	func_408(pedParam0, pedParam1);

	for (i = 0; i <= 29 - 1; i = i + 1)
	{
		attachPoint = 29 - 1 - i;
	
		if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, false, attachPoint, false))
		{
			if (weaponHash != joaat("WEAPON_UNARMED"))
			{
				if (attachPoint == 1)
					PED::SET_PED_COMBAT_ATTRIBUTES(pedParam1, 116, true);
			
				WEAPON::SET_CURRENT_PED_WEAPON(pedParam1, weaponHash, true, attachPoint, false, false);
			}
		}
	}

	return;
}

void func_284(var uParam0, int iParam1) // Position - 0xAAF7 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_285(int iParam0, int iParam1) // Position - 0xAB08 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_286(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xAB17 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

BOOL func_287(Ped pedParam0) // Position - 0xAB70 Hash - 0xD8557B87 ^0xA36AC234
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_33) && !PED::IS_PED_INJURED(Global_33))
		{
			if (PED::_GET_RIDER_OF_MOUNT(pedParam0, false) == Global_33)
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}

	PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedParam0, 0f);

	if (func_286(pedParam0, 1041577989))
		return false;

	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(pedParam0)))
		return true;

	return false;
}

BOOL func_288(Ped pedParam0, var uParam1, var uParam2, var uParam3) // Position - 0xAC1A Hash - 0x4FB200FB ^0x9AEFCD02
{
	var entityCoords;
	var unk3;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	unk3 = { entityCoords + ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	return func_409(entityCoords, unk3, uParam1);
}

BOOL func_289(int iParam0, int iParam1) // Position - 0xAC4D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_290(Ped pedParam0, int iParam1) // Position - 0xAC5C Hash - 0x8826373E ^0x6E06CE7E
{
	float scriptTaskActionTime;

	if (!func_286(pedParam0, 1041577989))
		return true;

	scriptTaskActionTime = TASK::_GET_SCRIPT_TASK_ACTION_TIME(pedParam0, 1041577989);

	if (func_285(iParam1, 32))
	{
		if (scriptTaskActionTime >= 1.85f)
			return true;
	
		return false;
	}

	if (func_285(iParam1, 256))
	{
		if (scriptTaskActionTime >= 1f)
			return true;
	
		return false;
	}

	if (func_285(iParam1, 2048))
	{
		if (scriptTaskActionTime >= 1.5f)
			return true;
	
		return false;
	}

	return true;
}

void func_291(var uParam0, int iParam1) // Position - 0xACDD Hash - 0xF55E891F ^0xF55E891F
{
	func_410(uParam0, iParam1);
	return;
}

BOOL func_292(Hash hParam0, int iParam1) // Position - 0xACED Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_293(Hash hParam0, Hash hParam1) // Position - 0xAD07 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_292(hParam0, 0))
		return func_411(func_313(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_294(Hash hParam0) // Position - 0xAD48 Hash - 0x2B509D4D ^0xA4E04F4
{
	if (!func_211() && func_412())
		return true;

	return func_293(hParam0, 1435272033);
}

Hash func_295(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xAD70 Hash - 0x6E5FA253 ^0x344F4256
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_413(hParam0))
		return 0;

	flag = func_289(iParam3, 2);
	flag2 = func_306(hParam0, -570078785, flag);
	flag3 = func_306(hParam0, -915411861, flag);

	if (func_306(hParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_414(hParam0, &num) || func_415(hParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_301())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_302(15) && func_306(hParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_296(Hash hParam0, BOOL bParam1) // Position - 0xAE75 Hash - 0x76235AAD ^0x7A815ACE
{
	return func_300(hParam0, 997808187) && !func_416(hParam0, 997808187, bParam1);
}

BOOL func_297(Hash hParam0) // Position - 0xAE9B Hash - 0x29993813 ^0xB7E34A5B
{
	Hash hash;

	hash = func_183(hParam0, true);

	if (hash != 0 && func_306(hash, 997808187, false))
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1831140953))
			return 1;

	return 0;
}

BOOL func_298(Hash hParam0, var uParam1) // Position - 0xAED5 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_417(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_299(Hash hParam0, var uParam1) // Position - 0xAEEC Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_418(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_300(Hash hParam0, Hash hParam1) // Position - 0xAF04 Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_292(hParam0, 0))
		return false;

	if (func_182(hParam0) || func_293(hParam0, 1077060302))
		return func_306(func_183(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

BOOL func_301() // Position - 0xAF50 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22477;
}

BOOL func_302(int iParam0) // Position - 0xAF5F Hash - 0x16518DC6 ^0xD6363784
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_164(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_303(Hash hParam0, BOOL bParam1) // Position - 0xAF9A Hash - 0xAB149130 ^0xE03110FF
{
	if (!func_293(hParam0, 947377998))
		return false;

	if (bParam1)
	{
		if (func_293(hParam0, -1090933859))
			return func_183(hParam0, true) != 0;
	
		if (func_416(hParam0, -915411861, false) || func_416(hParam0, 600942249, false) || func_416(hParam0, -570078785, false))
			return true;
		else
			return false;
	}

	return true;
}

BOOL func_304(Hash hParam0, BOOL bParam1) // Position - 0xB013 Hash - 0x40576C2F ^0xED1B83AA
{
	Hash hash;
	var unk;

	hash = func_419(hParam0, true);

	if (hash == 0)
		return false;

	if (func_307(hash, -2141192156))
		return false;

	if (bParam1)
		if (!func_308(hash, -2141192156, &unk, false, false))
			return false;

	return true;
}

BOOL func_305(Hash hParam0, var uParam1) // Position - 0xB05D Hash - 0x66B62864 ^0x763539BD
{
	Hash hash;
	var unk;

	*uParam1 = 0;

	if (!func_292(hParam0, 0))
		return 0;

	if (!func_293(hParam0, 1077060302))
		if (func_420(hParam0))
			return 0;

	if (func_293(hParam0, 81450561) || func_293(hParam0, 1342455455))
		return 0;

	if (func_182(hParam0))
		return 0;

	hash = func_183(hParam0, true);

	if (hash == 0)
		return 0;

	if (!func_306(hash, -570078785, false))
		return 0;

	if (Global_1915656.f_22504.f_2 == 1)
	{
		unk = { func_318(hParam0, false, 0) };
	
		if (unk.f_4 == joaat("SLOTID_SATCHEL"))
			return 0;
	}

	*uParam1 = hash;
	return 1;
}

BOOL func_306(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xB11A Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_413(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_307(hParam0, hParam1);

	return true;
}

BOOL func_307(Hash hParam0, Hash hParam1) // Position - 0xB152 Hash - 0x86D562BB ^0xB258F193
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

BOOL func_308(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB29B Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_315(hParam0, hParam1, &unk, &num, false, true))
		return false;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_311(unk[i /*2*/].f_1))
				return false;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_310(unk[i /*2*/].f_1))
				return false;
		}
		else
		{
			num2 = func_421(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_422(unk[i /*2*/], num2);
			else
				num4 = func_378(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

int func_309(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB3A2 Hash - 0x66E94525 ^0xFE62AE58
{
	Hash hash;
	BOOL flag;
	int num;
	Hash hash2;
	Hash hash3;
	BOOL flag2;
	BOOL flag3;

	if (!func_292(hParam0, 0))
	{
		Global_1051832.f_81 = 0;
		Global_1051832.f_46 = 0;
		return 0;
	}

	flag = func_305(hParam0, &hash);

	if (iParam2 && flag || func_301() && flag && hParam1 == 0)
	{
		if (func_306(hash, 997808187, false) && !func_307(hash, 997808187))
		{
			Global_1051832.f_46 = 0;
			Global_1051832.f_81 = hParam0;
			return Global_1051832.f_46;
		}
		else if (func_306(hash, -570078785, false))
		{
			if (bParam3)
				num = func_423(hash, -570078785, false, true);
			else
				num = func_344(func_423(hash, -570078785, false, true));
		
			Global_1051832.f_46 = num;
			Global_1051832.f_81 = hParam0;
			return Global_1051832.f_46;
		}
	}

	hash2 = hParam1;

	if (hash2 == 0)
		hash2 = func_180(hParam0, hash2, true, -1, true);

	hash3 = 0;

	if (func_424(hParam0))
		hash3 = func_425(hParam0);
	else if (func_426(hParam0))
		hash3 = func_427(hParam0);
	else if (func_428(hParam0))
		hash3 = func_429(hParam0);
	else if (func_430(hParam0))
		hash3 = func_431(hParam0);

	if (hash3 != 0)
	{
		num = func_423(hash3, hash2, false, bParam4);
		flag2 = false;
	
		if (func_432(hash2))
			if (func_433(hash3, joaat("currency_gold_bar"), hash2, true, bParam4) > 0)
				flag2 = true;
	
		if (hash2 == -570078785 || flag2 && !bParam3)
			num = func_344(num);
	
		Global_1051832.f_81 = hParam0;
		return num;
	}

	if (hash2 == 997808187)
	{
		Global_1051832.f_81 = hParam0;
		Global_1051832.f_46 = 0;
		return 0;
	}
	else
	{
		num = func_342(hParam0, hash2, bParam4, false, true, 0);
		flag3 = false;
	
		if (func_432(hash2))
			if (func_343(hParam0, joaat("currency_gold_bar"), hash2, bParam4, true) > 0)
				flag3 = true;
	
		if (hash2 == -570078785 || flag3 && !bParam3)
			num = func_344(num);
	
		Global_1051832.f_46 = num;
		Global_1051832.f_81 = hParam0;
	
		if (Global_1051832.f_82 != Global_1051832.f_81)
			Global_1051832.f_82 = Global_1051832.f_81;
		else
			Global_1051832.f_82 = 0;
	
		return num;
	}

	Global_1051832.f_46 = 0;
	return -1;
}

BOOL func_310(int iParam0) // Position - 0xB608 Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

BOOL func_311(int iParam0) // Position - 0xB62B Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_354() == 0)
		return func_434(iParam0);

	return iParam0 <= func_435();
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_312(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xB658 Hash - 0x9BC46265 ^0xEE2DD19E
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

	if (func_182(hParam0) || func_293(hParam0, 1077060302))
		return func_308(func_183(hParam0, true), hParam2, uParam3, true, false);

	unk = 15;

	if (!func_317(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam6 && func_436(false) && !func_437();
	num5 = -1;

	if (Global_1915656.f_20638)
		num5 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && bParam7 || func_311(num2))
			goto 0x1F3;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && bParam7 || func_310(num2))
		{
		}
		else
		{
			num4 = func_421(num5, unk[i /*2*/]);
		
			if (num4 != 0)
			{
				bParam5 = false;
				num3 = func_422(unk[i /*2*/], num4);
			}
			else
			{
				num3 = func_378(unk[i /*2*/], false, !flag, true);
			}
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_438(unk[i /*2*/]) || func_439(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num6 = func_440(7, unk[i /*2*/], &entity);
					
						num7 = func_441(unk[i /*2*/], num4);
					
						if (num3 + num6 + num7 >= num2)
							if (num3 + num7 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x1E3;
					}
				
					if (bParam5 && num3 + func_442(7, unk[i /*2*/]) + func_443(unk[i /*2*/]) >= num2)
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

Hash func_313(Hash hParam0) // Position - 0xB858 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

Hash func_314(Hash hParam0, BOOL bParam1) // Position - 0xB862 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_444(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_315(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB89B Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_413(hParam0))
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
		func_445(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_316(Hash hParam0) // Position - 0xB92A Hash - 0xB0090776 ^0x189C4477
{
	if (func_446(hParam0) == -126813555 || func_446(hParam0) == 1946043663)
		return true;

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_317(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB958 Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_292(hParam0, 0))
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
		func_447(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

struct<5> func_318(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xB9E8 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_448(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_375(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_454(hParam0, -1823706425))
			{
				unk = { func_319(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_454(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_319(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_319(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_454(hParam0, -1653629781))
			{
				unk = { func_319(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_453(bParam1) };
		
			switch (func_446(hParam0))
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
			unk = { func_319(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_449(bParam1) };
		
			if (iParam2 && func_450(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_451(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_451(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_452(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_455(unk, &unk28, bParam1, false, -1))
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
			else if (func_454(hParam0, -1653629781))
			{
				unk = { func_319(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_319(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xBD5C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_292(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_456(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_320(Any* panParam0) // Position - 0xBD8D Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_321(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xBDC3 Hash - 0x8B86113C ^0x8B86113C
{
	if (!func_320(&uParam0))
		return false;

	if (func_457(&uParam0))
		return false;

	return func_459(func_458(uParam0));
}

int func_322(var uParam0) // Position - 0xBDF2 Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_292(*uParam0, 0))
		return 0;

	if (!func_460(*uParam0))
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

BOOL func_323(int* piParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4, int iParam5, Hash hParam6, int iParam7, BOOL bParam8) // Position - 0xBE7C Hash - 0xC3DA6F9B ^0xD9610032
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_9 = iParam2;
	unk.f_10 = iParam3;
	unk.f_14 = iParam5;

	if (!func_461(piParam0, hParam1, &unk, bParam4, hParam6, iParam7, bParam8))
		return 0;

	func_462(unk);
	return 1;
}

BOOL func_324(Hash hParam0) // Position - 0xBECF Hash - 0xD47FBCD ^0x4CD11E28
{
	return func_293(hParam0, 1166200945);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_325(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, Hash hParam8, int iParam9, BOOL bParam10) // Position - 0xBEE2 Hash - 0x72556179 ^0x72556179
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

	if (!func_292(hParam1, 0))
		return false;

	if (!func_463(piParam0, false))
		return false;

	if (hParam8 == 0)
		hParam8 = func_180(hParam1, hParam8, true, -1, true);

	flag = false;

	if (func_302(15))
		flag = true;

	func_464(&iParam9, 32);
	func_464(&iParam9, 64);
	func_464(&iParam9, 4);
	func_464(&iParam9, 128);

	if (iParam6 < 1)
		iParam6 = 1;

	if (!func_465(piParam0, hParam1, uParam2, joaat("SLOTID_NONE"), hParam8, iParam6, iParam9, true))
		return false;

	unk = { func_466(hParam1, uParam2, joaat("SLOTID_SATCHEL"), iParam6, false) };
	unk.f_13 = hParam8;
	unk.f_12 = 1248274121;
	*uParam7 = { unk };

	if (!func_467(piParam0, joaat("use")))
		return false;

	flag2 = false;
	flag3 = false;
	weaponHash = Global_1915656.f_20241.f_49;
	num = Global_1915656.f_20241.f_50;
	unk35.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < 16; i = i + 1)
	{
		if (!func_292(Global_1051832.f_47[i], 0))
		{
		}
		else if (!func_468(Global_1051832.f_47[i], weaponHash, &hash, &unk27, &unk18, true, num))
		{
		}
		else
		{
			unk23 = { func_319(Global_1051832.f_47[i], unk27, hash, false) };
		
			if (func_469(Global_1051832.f_47[i]))
			{
				if (!func_451(Global_1051832.f_47[i], &unk27, hash, false, false))
				{
					if (!Global_1051832.f_47.f_17[i])
					{
					}
					else if (func_470(Global_1051832.f_47[i]))
					{
					}
					else
					{
						hash3 = hParam8;
					
						if (func_300(Global_1051832.f_47[i], 997808187))
							hash3 = 997808187;
					
						if (flag && hash3 != 997808187)
						{
							if (!func_471(piParam0, Global_1051832.f_47[i], unk27, hash, 1, &unk, false, hash3, iParam9, true))
							{
								flag2 = false;
								break;
							}
						
							flag3 = true;
						}
						else if (!flag || hash3 == 997808187)
						{
							if (!func_472(piParam0, Global_1051832.f_47[i], unk27, hash, !flag, &unk, false, hash3, 0, iParam9, false))
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
						goto 0x332;
					}
				}
			
				if (!flag)
				{
					if (!Global_1051832.f_47.f_17[i])
					{
						hash2 = func_473(unk27, hash, false, -1);
					
						if (!func_292(hash2, 0))
						{
						}
						else
						{
							unk31 = { func_319(hash2, unk31, hash, false) };
						
							if (!func_474(unk31, Global_1051832.f_47.f_17[i], false))
							{
								!func_455(unk31, &unk35, true, false, -1);
							
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
						
							goto 0x332;
						}
					}
				
					!func_455(unk23, &unk35, true, false, -1);
				
					if (unk35.f_10 != Global_1051832.f_47.f_17[i])
					{
						if (!func_474(unk23, true, false))
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
		func_475(piParam0);
		return false;
	}

	if (flag3)
	{
		if (bParam10 && !func_476(piParam0))
		{
			return false;
		}
		else
		{
			weapontypeSlot = WEAPON::_GET_WEAPONTYPE_SLOT(weaponHash);
		
			if (!MISC::IS_BIT_SET(Global_1051832.f_4481[func_477(weapontypeSlot, 1) / 32], func_477(weapontypeSlot, 1) % 32))
			{
				func_479(func_478(joaat("updated"), joaat("weapon_customization")), 1);
				MISC::SET_BIT(&Global_1051832.f_4481[func_477(weapontypeSlot, 1) / 32], func_477(weapontypeSlot, 1) % 32);
			}
		}
	}

	return true;
}

BOOL func_326(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, BOOL bParam12) // Position - 0xC2B2 Hash - 0x5E4BFA38 ^0x5E4BFA38
{
	var unk;
	var unk18;

	if (!func_463(piParam0, false))
		return false;

	if (hParam10 == 0)
		hParam10 = func_180(hParam1, hParam10, true, iParam11, true);

	if (!func_465(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, iParam11, bParam12))
		return false;

	unk = { func_466(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (func_375(hParam1) == joaat("CLOTHING"))
	{
		unk18.f_9 = 1;
		unk18.f_11 = joaat("SLOTID_NONE");
		unk18 = { unk };
	
		if (!func_480(piParam0, unk18, 2113164098, bParam9, -1))
			return false;
	}
	else if (!func_481(piParam0, unk, 2113164098, bParam9, iParam11))
	{
		return false;
	}

	return true;
}

void func_327(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0xC391 Hash - 0x4E412338 ^0x2B987533
{
	Hash item;
	Hash hash;
	Hash item2;

	item = uParam0.f_8;
	hash = uParam0.f_13;

	if (func_343(item, joaat("currency_gold_bar"), hash, true, false) > 0)
	{
		func_482("gold_spend", "Gold_Spend_Sounds", true);
	}
	else if (INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(item, 0))
	{
		item2 = func_483(item, 0);
	
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

int func_328(Hash hParam0) // Position - 0xC418 Hash - 0xEFDB1B2D ^0xA7F8FFFB
{
	if (!func_316(hParam0))
		return 0;

	if (func_484(hParam0))
		return -1957466003;

	if (func_293(hParam0, -1457263561))
		return -84670860;

	if (func_293(hParam0, -732976331))
		return -700121520;

	if (func_293(hParam0, 1495098826))
		return 917298505;

	if (func_293(hParam0, 2088554948))
		return -1638586319;

	return 176863985;
}

Hash func_329(Hash hParam0) // Position - 0xC4AB Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

Hash func_330(int iParam0) // Position - 0xC4B5 Hash - 0xBCD92AB4 ^0xBCD92AB4
{
	Hash hash;

	if (!func_485(iParam0))
		return 0;

	hash = func_486(iParam0);

	if (hash != -1)
		return hash;
	else
		return func_487(iParam0, true);

	return 0;
}

void func_331(int iParam0, int iParam1) // Position - 0xC4EC Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1904402[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

void func_332(var uParam0, var uParam1) // Position - 0xC510 Hash - 0x3337DFE0 ^0xBB498528
{
	int address;

	address = Global_17418.f_2585[*uParam0];
	MISC::SET_BIT(&address, *uParam1);
	Global_17418.f_2585[*uParam0] = address;
	return;
}

void func_333(Hash hParam0) // Position - 0xC53B Hash - 0xC4CA1F1E ^0xEF996C60
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_488(hParam0);

	return;
}

BOOL func_334() // Position - 0xC554 Hash - 0x4228A1C2 ^0xC94C7CFB
{
	return Global_1220720.f_26;
}

BOOL func_335(int iParam0, var uParam1, var uParam2) // Position - 0xC562 Hash - 0xC7BF35CF ^0x67A4DF88
{
	switch (iParam0)
	{
		case 0:
			if (iParam0.f_1 == -1)
				return false;
			break;
	
		case 1:
			if (iParam0.f_2 == 0)
				return false;
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_336(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xC5A1 Hash - 0x5BE08487 ^0xE89E82E5
{
	if (iParam0 != uParam3)
		return false;

	switch (iParam0)
	{
		case 0:
			if (iParam0.f_1 != uParam3.f_1)
				return false;
			break;
	
		case 1:
			if (iParam0.f_2 != uParam3.f_2)
				return false;
			break;
	}

	return true;
}

BOOL func_337(var uParam0) // Position - 0xC5ED Hash - 0x9B91B748 ^0x9B91B748
{
	Hash hash;

	if (!func_44(*uParam0, &hash))
		return false;

	return func_181(hash, func_180(hash, 0, true, -1, true), 1);
}

int func_338(int iParam0, BOOL bParam1) // Position - 0xC617 Hash - 0x31DB738A ^0x31DB738A
{
	if (bParam1)
		func_489();

	if (!func_490(bParam1, bParam1, !bParam1))
		return 0;

	func_491(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_339() // Position - 0xC653 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1940252.f_1556;
}

BOOL func_340(var uParam0) // Position - 0xC662 Hash - 0xC490C2F4 ^0xB43A76F8
{
	switch (*uParam0)
	{
		case 239629152:
			return UNLOCK::UNLOCK_IS_UNLOCKED(-1870166867);
	
		default:
		
	}

	return false;
}

BOOL func_341(int iParam0, var uParam1, var uParam2) // Position - 0xC686 Hash - 0x6AB04E51 ^0x7A15CB57
{
	switch (iParam0)
	{
		case 3:
		
	
		case 4:
		
	
		case 5:
		
	
		case 7:
		
	
		default:
		
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_342(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xC6EF Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_300(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_182(hParam0) || func_293(hParam0, 1077060302))
		return func_423(func_183(hParam0, false), hParam1, bParam3, true);

	if (!func_317(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

int func_343(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC7DF Hash - 0x89D1598B ^0xCCC7E0FA
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (func_182(hParam0) || func_293(hParam0, 1077060302))
		return func_433(func_183(hParam0, false), iParam1, hParam2, bParam4, true);

	if (!func_317(hParam0, hParam2, &unk, &num, bParam3, bParam4))
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

int func_344(int iParam0) // Position - 0xC87A Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

BOOL func_345(Hash hParam0) // Position - 0xC887 Hash - 0x32C39845 ^0x32C39845
{
	return func_432(hParam0) || func_492(hParam0);
}

Hash func_346(Hash hParam0, BOOL bParam1) // Position - 0xC8A1 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_292(hParam0, 0))
		return 0;

	hash = func_493(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

void func_347(int iParam0, char* sParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0xC8CF Hash - 0xB13B9F68 ^0x927311F6
{
	int num;
	const char* str;

	if (bParam4 && !func_92(iParam0))
		return;

	num = func_225(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	str = MISC::VAR_STRING(0, hParam2);
	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, MISC::VAR_STRING(10, sParam1, str, uParam3));
	return;
}

void func_348(int iParam0, char* sParam1, Hash hParam2, Hash hParam3, var uParam4, BOOL bParam5) // Position - 0xC92B Hash - 0x96BC4397 ^0xC9314F64
{
	int num;
	const char* str;
	const char* str2;

	if (bParam5 && !func_92(iParam0))
		return;

	num = func_225(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	str = MISC::VAR_STRING(0, hParam2);
	str2 = MISC::VAR_STRING(0, hParam3);
	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, MISC::VAR_STRING(42, sParam1, str, str2, uParam4));
	return;
}

void func_349(var uParam0) // Position - 0xC992 Hash - 0x17ED2B52 ^0x17ED2B52
{
	func_222(uParam0->f_348, false, true, true);
	func_494(uParam0->f_348, false, true);
	func_222(uParam0->f_346, false, true, true);
	func_494(uParam0->f_346, false, true);
	func_222(uParam0->f_347, false, true, true);
	func_494(uParam0->f_347, false, true);
	return;
}

BOOL func_350(int* piParam0, int* piParam1, BOOL bParam2) // Position - 0xC9DF Hash - 0x9AF693A6 ^0x87CB945D
{
	BOOL basketIsValid;
	BOOL basketIsValid2;
	BOOL flag;
	int numOfItems;
	int numOfItems2;
	Hash action;
	Hash action2;
	int num;

	basketIsValid = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0);
	basketIsValid2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam1);

	if (!basketIsValid && !basketIsValid2)
	{
		func_495(*piParam0, 0, 0, 0);
		func_495(*piParam1, 0, 0, 0);
		return true;
	}
	else if (bParam2 && !basketIsValid || !basketIsValid2)
	{
		func_495(*piParam0, 0, 0, 0);
		func_495(*piParam1, 0, 0, 0);
		return false;
	}
	else if (!basketIsValid && basketIsValid2)
	{
		func_495(*piParam0, 0, 0, 0);
		return func_476(piParam1);
	}
	else if (!basketIsValid2 && basketIsValid)
	{
		func_495(*piParam1, 0, 0, 0);
		return func_476(piParam0);
	}

	if (*piParam0 == *piParam1)
	{
		flag = func_476(piParam0);
		*piParam1 = { *piParam0 };
		return flag;
	}

	numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
	numOfItems2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam1);

	if (numOfItems == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_495(*piParam0, 4, 0, 0);
		return func_476(piParam1);
	}
	else if (numOfItems2 == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam1);
		func_495(*piParam1, 4, 0, 0);
		return func_476(piParam0);
	}

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);
	action2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam1);
	num = NETSHOPPING::_0xB6F4557060EF0FB4(*piParam0, *piParam1);

	if (num == -1)
	{
		func_495(*piParam0, 2, 0, 0);
		func_495(*piParam1, 2, 0, 0);
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam1);
		return false;
	}

	func_495(*piParam0, 4, 0, 0);
	func_495(*piParam1, 4, 0, 0);
	func_495(num, 1, action, action2);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	if (action2 == 2113164098 || action2 == 541670136)
		piParam1->f_3 = 1;

	piParam0->f_1 = num;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	piParam1->f_1 = num;
	*piParam1 = -1;
	piParam1->f_2 = 0;
	return true;
}

BOOL func_351(int iParam0) // Position - 0xCBD3 Hash - 0x49256A88 ^0x9919A21B
{
	if (!func_136(iParam0))
		return false;

	return Global_1291943.f_133[iParam0 /*5*/].f_4;
}

int func_352(int iParam0) // Position - 0xCBF5 Hash - 0xA7E21081 ^0xBD28E742
{
	int num;
	int status;

	num = func_496(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_495(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_495(iParam0, 4, 0, 0);
		}
	}

	return num;
}

void func_353(int iParam0) // Position - 0xCC7F Hash - 0x48ADBCD ^0x48ADBCD
{
	Global_1110244.f_268.f_3384 = Global_1110244.f_268.f_3384 || iParam0;
	return;
}

int func_354() // Position - 0xCC9E Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_355(int iParam0, BOOL bParam1) // Position - 0xCCAC Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_497(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

void func_356(int iParam0, BOOL bParam1) // Position - 0xCCDA Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_497(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

BOOL func_357(int iParam0, int iParam1) // Position - 0xCD14 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_358(var uParam0) // Position - 0xCD23 Hash - 0x879B7DAC ^0x879B7DAC
{
	func_498(uParam0, 0);
	return;
}

BOOL func_359(var uParam0) // Position - 0xCD32 Hash - 0x39705408 ^0x39705408
{
	return func_357(*uParam0, 2);
}

int func_360(int iParam0) // Position - 0xCD42 Hash - 0xFDA007B9 ^0xE83F4FF2
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

BOOL func_361(int iParam0, int iParam1) // Position - 0xCD54 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_362(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0xCD75 Hash - 0x1B501888 ^0x6546232B
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
	func_364(iParam0, true);
	func_365(iParam0, true);
	func_366(iParam0, 128);
	return;
}

void func_363(int iParam0, int iParam1) // Position - 0xD08F Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_364(int iParam0, BOOL bParam1) // Position - 0xD0C2 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_361(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_365(int iParam0, BOOL bParam1) // Position - 0xD11A Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_366(int iParam0, int iParam1) // Position - 0xD143 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

int func_367(int iParam0) // Position - 0xD16B Hash - 0xB8EC44B7 ^0x241D648F
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

BOOL func_368(int iParam0) // Position - 0xDB53 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_361(iParam0, 2);
}

int func_369(int iParam0, int iParam1) // Position - 0xDB62 Hash - 0x4CC004CE ^0x4B7EACC4
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
			
				case 2:
					return 239417318;
			
				case 3:
					return 239417318;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
			
				case 2:
					return -59491839;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
			
				case 2:
					return 1377133516;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
			
				case 2:
					return 319921153;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
			
				case 2:
					return -1124047374;
			
				case 3:
					return -311950714;
			
				case 4:
					return -1877729336;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
			
				case 2:
					return -1291660805;
			
				case 3:
					return 53620250;
			
				case 4:
					return -967242671;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
			
				case 2:
					return -1002933146;
			
				case 3:
					return 300796817;
			
				case 4:
					return -1332027179;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
			
				case 2:
					return -1340126692;
			
				case 3:
					return -1177458231;
			
				case 4:
					return 1413260826;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
			
				case 2:
					return -1612797541;
			
				case 3:
					return -1876683153;
			
				case 4:
					return 1251939043;
			
				default:
					break;
			}
			break;
	
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
			
				case 2:
					return 1855246300;
			
				case 3:
					return 763461736;
			
				case 4:
					return -92262210;
			
				default:
					break;
			}
			break;
	
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
			
				case 2:
					return 2084465459;
			
				case 3:
					return 1616668189;
			
				case 4:
					return -1758631398;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
			
				case 2:
					return 941214835;
			
				case 3:
					return 68299210;
			
				case 4:
					return 1699902717;
			
				default:
					break;
			}
			break;
	
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
			
				case 2:
					return 1265238199;
			
				case 3:
					return -1638616368;
			
				case 4:
					return 1550104174;
			
				default:
					break;
			}
			break;
	
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
			
				case 2:
					return -1099733308;
			
				case 3:
					return -697261301;
			
				case 4:
					return 1865014264;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
			
				case 2:
					return 1853607854;
			
				case 3:
					return 1511414161;
			
				case 4:
					return -2030843481;
			
				default:
					break;
			}
			break;
	
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
			
				case 2:
					return 885906515;
			
				case 3:
					return -674835160;
			
				case 4:
					return 867181329;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
			
				case 2:
					return -645886158;
			
				case 3:
					return 825197572;
			
				case 4:
					return 1390137360;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

void func_370() // Position - 0xE1D2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_371() // Position - 0xE1DA Hash - 0x65D86EC2 ^0xEDE20818
{
	Global_1292143.f_459.f_1552 = Global_1292143.f_459.f_1552 + 1;

	if (Global_1292143.f_459.f_1552 >= 2147483646)
		Global_1292143.f_459.f_1552 = 0;

	return Global_1292143.f_459.f_1552;
}

void func_372(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0xE21F Hash - 0x559491F8 ^0xD7B41EE2
{
	switch (iParam30)
	{
		case 0:
			Global_1292143.f_459.f_44[func_499() /*30*/] = { uParam0 };
			func_500((func_499() + 1) % 40);
			Global_1292143.f_459.f_1546 = Global_1292143.f_459.f_1546 + 1;
			break;
	
		case 1:
			Global_1292143.f_459.f_1245[func_501() /*30*/] = { uParam0 };
			func_502((func_501() + 1) % 10);
			Global_1292143.f_459.f_1547 = Global_1292143.f_459.f_1547 + 1;
			break;
	}

	return;
}

void func_373(int iParam0) // Position - 0xE2B6 Hash - 0x51CD2547 ^0x51CD2547
{
	if (iParam0 != -1)
		Global_1915656.f_18246 = iParam0;

	return;
}

int func_374(BOOL bParam0, Hash hParam1) // Position - 0xE2CD Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_503())
		return 0;

	if (!func_211())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_504(&Global_0, 8);

	func_504(&Global_0, 1);
	return 1;
}

int func_375(Hash hParam0) // Position - 0xE323 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_292(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_376(Hash hParam0, int iParam1) // Position - 0xE34E Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_292(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_505(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_506("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_507(&unk, i, num, num2))
			{
			}
			else if (!func_508(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_509(num);
				return true;
			}
		}
	
		func_509(num);
	}

	return false;
}

BOOL func_377(Hash hParam0) // Position - 0xE3F6 Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_292(hParam0, 0))
		return false;

	hash = func_446(hParam0);

	switch (hash)
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

	num = func_510(hParam0);

	if (!(num == 0))
	{
		num2 = func_511(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_512(hParam0);
	num2 = func_511(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

int func_378(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE4B2 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_292(hParam0, 0))
		return 0;

	num = func_375(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_505(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_513(hParam0, false);
	}

	if (func_514(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_456(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_515(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_456(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_379(Hash hParam0) // Position - 0xE574 Hash - 0xC7B42F6B ^0x68D64A95
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_516())
		return 0;

	STREAMING::REMOVE_IPL_HASH(hParam0);
	return 0;
}

BOOL func_380(int iParam0) // Position - 0xE59C Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_381(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

int func_381(int iParam0, int iParam1) // Position - 0xE5C4 Hash - 0x26934C66 ^0x26934C66
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
	
		case -2059285007:
			return 167;
	
		case -2006026692:
			return 176;
	
		case -1993903481:
			return 124;
	
		case -1970041458:
			return 142;
	
		case -1935700575:
			return 136;
	
		case -1927422497:
			return 127;
	
		case -1920464018:
			return 58;
	
		case -1919393558:
			return 27;
	
		case -1857550353:
			return 173;
	
		case -1855662261:
			return 55;
	
		case -1840995238:
			return 15;
	
		case -1835722213:
			return 88;
	
		case -1790318144:
			return 106;
	
		case -1786033368:
			return 62;
	
		case -1767968552:
			return 86;
	
		case -1767662471:
			return 32;
	
		case -1729980669:
			return 108;
	
		case -1729554078:
			return 49;
	
		case -1727526861:
			return 109;
	
		case -1722264360:
			return 18;
	
		case -1719665775:
			return 37;
	
		case -1716981503:
			return 107;
	
		case -1697567574:
			return 72;
	
		case -1685270562:
			return 181;
	
		case -1631930150:
			return 166;
	
		case -1629969648:
			return 174;
	
		case -1605880447:
			return 120;
	
		case -1575244501:
			return 61;
	
		case -1551628748:
			return 74;
	
		case -1543433893:
			return 70;
	
		case -1539337723:
			return 121;
	
		case -1525401254:
			return 64;
	
		case -1525233154:
			return 47;
	
		case -1491472827:
			return 94;
	
		case -1486927560:
			return 112;
	
		case -1480068681:
			return 50;
	
		case -1478178768:
			return 148;
	
		case -1465202595:
			return 104;
	
		case -1459368569:
			return 116;
	
		case -1431848307:
			return 76;
	
		case -1418298797:
			return 155;
	
		case -1391865428:
			return 171;
	
		case -1378468884:
			return 60;
	
		case -1291022662:
			return 117;
	
		case -1288042557:
			return 19;
	
		case -1248720641:
			return 7;
	
		case -1229834518:
			return 89;
	
		case -1223791123:
			return 79;
	
		case -1209874968:
			return 45;
	
		case -1197630873:
			return 153;
	
		case -1196069774:
			return 180;
	
		case -1181880939:
			return 80;
	
		case -1170784825:
			return 38;
	
		case -1125028284:
			return 137;
	
		case -1123356036:
			return 147;
	
		case -1100659165:
			return 6;
	
		case -1089821002:
			return 85;
	
		case -1084890102:
			return 172;
	
		case -1080696981:
			return 92;
	
		case -1010031245:
			return 39;
	
		case -992423055:
			return 157;
	
		case -979738281:
			return 77;
	
		case -931294997:
			return 111;
	
		case -920221586:
			return 110;
	
		case -900877140:
			return 30;
	
		case -885737328:
			return 114;
	
		case -885646667:
			return 67;
	
		case -837774766:
			return 78;
	
		case -813902658:
			return 182;
	
		case -799500009:
			return 145;
	
		case -751329575:
			return 139;
	
		case -711254121:
			return 132;
	
		case -660114191:
			return 31;
	
		case -649929946:
			return 53;
	
		case -636552746:
			return 123;
	
		case -587737142:
			return 71;
	
		case -546870456:
			return 159;
	
		case -521477124:
			return 82;
	
		case -481051896:
			return 135;
	
		case -425216802:
			return 17;
	
		case -415437740:
			return 103;
	
		case -415250715:
			return 144;
	
		case -392183396:
			return 90;
	
		case -343572565:
			return 21;
	
		case -340578116:
			return 169;
	
		case -286632741:
			return 8;
	
		case -267135864:
			return 138;
	
		case -233204301:
			return 105;
	
		case -203268054:
			return 143;
	
		case -161625840:
			return 177;
	
		case -126580932:
			return 0;
	
		case -117284255:
			return 122;
	
		case -60432888:
			return 44;
	
		case -56802666:
			return 102;
	
		case -47513954:
			return 99;
	
		case -46116991:
			return 163;
	
		case -35033037:
			return 133;
	
		case -33431232:
			return 12;
	
		case -29822088:
			return 40;
	
		case 0:
			return 1;
	
		case 1213703:
			return 154;
	
		case 54499763:
			return 98;
	
		case 111084081:
			return 56;
	
		case 114587291:
			return 29;
	
		case 149216078:
			return 57;
	
		case 168336706:
			return 149;
	
		case 173401469:
			return 100;
	
		case 180714777:
			return 81;
	
		case 268103762:
			return 97;
	
		case 282858309:
			return 183;
	
		case 320758674:
			return 158;
	
		case 352539363:
			return 179;
	
		case 362862598:
			return 170;
	
		case 398279342:
			return 34;
	
		case 408582472:
			return 5;
	
		case 420477860:
			return 25;
	
		case 456199285:
			return 168;
	
		case 509781427:
			return 93;
	
		case 550487527:
			return 35;
	
		case 576694808:
			return 175;
	
		case 638586808:
			return 118;
	
		case 659100749:
			return 59;
	
		case 666050502:
			return 65;
	
		case 698214003:
			return 2;
	
		case 713106899:
			return 36;
	
		case 780689752:
			return 3;
	
		case 791791441:
			return 125;
	
		case 797908556:
			return 42;
	
		case 798283666:
			return 141;
	
		case 807983049:
			return 150;
	
		case 839199173:
			return 91;
	
		case 846387993:
			return 14;
	
		case 852774198:
			return 113;
	
		case 878491929:
			return 33;
	
		case 887717126:
			return 66;
	
		case 926420921:
			return 51;
	
		case 946848176:
			return 68;
	
		case 952755846:
			return 24;
	
		case 955999834:
			return 134;
	
		case 956867472:
			return 9;
	
		case 1036630721:
			return 10;
	
		case 1037792287:
			return 140;
	
		case 1052684812:
			return 87;
	
		case 1075856357:
			return 95;
	
		case 1078589127:
			return 46;
	
		case 1095779900:
			return 22;
	
		case 1110815339:
			return 152;
	
		case 1138017610:
			return 11;
	
		case 1156950836:
			return 83;
	
		case 1195903441:
			return 52;
	
		case 1278022357:
			return 48;
	
		case 1281707602:
			return 164;
	
		case 1323028278:
			return 41;
	
		case 1374979106:
			return 28;
	
		case 1405624312:
			return 146;
	
		case 1444077748:
			return 23;
	
		case 1449867002:
			return 162;
	
		case 1498983922:
			return 84;
	
		case 1547488310:
			return 161;
	
		case 1554410187:
			return 73;
	
		case 1585362808:
			return 16;
	
		case 1636352616:
			return 151;
	
		case 1662680949:
			return 178;
	
		case 1698995037:
			return 4;
	
		case 1769731136:
			return 115;
	
		case 1801131110:
			return 75;
	
		case 1806354060:
			return 96;
	
		case 1811663962:
			return 131;
	
		case 1828803907:
			return 20;
	
		case 1829805500:
			return 54;
	
		case 1830494920:
			return 101;
	
		case 1838787462:
			return 129;
	
		case 1865781806:
			return 165;
	
		case 1899963938:
			return 63;
	
		case 1900141702:
			return 156;
	
		case 1903067887:
			return 126;
	
		case 1907663129:
			return 43;
	
		case 2040423027:
			return 128;
	
		case 2050123975:
			return 130;
	
		case 2096770678:
			return 119;
	
		case 2110112797:
			return 69;
	
		case 2119170919:
			return 160;
	
		case 2132307595:
			return 26;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_382(int iParam0) // Position - 0xEDC5 Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_383(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_383(int iParam0, int iParam1) // Position - 0xEDED Hash - 0x89B5041A ^0x89B5041A
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
	
		case -2082434331:
			return 152;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
	
		case -2038430863:
			return 151;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
	
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
	
		case -1246069683:
			return 124;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
	
		case -1105699593:
			return 153;
	
		case -1047626954:
			return 118;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
	
		case -980934770:
			return 125;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
	
		case -821191074:
			return 115;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
	
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
	
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
	
		case -193167881:
			return 127;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
	
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
	
		case 130533095:
			return 126;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
	
		case 158579484:
			return 117;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
	
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
	
		case 549687162:
			return 145;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
	
		case 808176588:
			return 116;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
	
		case 1130659268:
			return 123;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
	
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_384(int iParam0, int iParam1) // Position - 0xF4A4 Hash - 0x39669B5F ^0xB47C98D2
{
	Player player;
	Player player2;
	int num;

	player = func_517(iParam0);
	player2 = Global_1295666;
	num = func_387(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (player2 == player)
				return 0;
			else
				return 2;
			break;
	
		case joaat("Duration"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
	
		default:
			if (player2 == player)
				return 1;
			break;
	}

	return 2;
}

int func_385(int iParam0, int iParam1, int iParam2) // Position - 0xF527 Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_380(iParam1))
		return 0;

	if (!func_518(iParam0))
		return 0;

	num = func_387(iParam0, 1);
	func_519(iParam0, iParam1, iParam2);

	if (func_520(Global_1156111.f_35859.f_3116[num /*31*/]) && func_521(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_522(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_523(num2))
			if (func_524(num2, num2.f_1, num2.f_2))
				func_525(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_526(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_526(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_386(int iParam0) // Position - 0xF61F Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_387(int iParam0, int iParam1) // Position - 0xF635 Hash - 0x9DD4188 ^0x9DD4188
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
	
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
	
		case -2019073637:
			return 198;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
	
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
	
		case -1394912816:
			return 199;
	
		case -1391351739:
			return 166;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
	
		case -749371485:
			return 164;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
	
		case -254950601:
			return 152;
	
		case -242870769:
			return 163;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
	
		case -124368414:
			return 197;
	
		case -106398498:
			return 153;
	
		case -97000889:
			return 86;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
	
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
	
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
	
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
	
		case 275909046:
			return 151;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
	
		case 558636891:
			return 187;
	
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
	
		case 634217179:
			return 150;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
	
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
	
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
	
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
	
		case 1256374770:
			return 165;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
	
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
	
		case 1305406380:
			return 162;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
	
		case 1462245043:
			return 154;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
	
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
	
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_388(int iParam0, int iParam1) // Position - 0xFEE6 Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_389(int iParam0, int iParam1) // Position - 0xFF15 Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_390(int iParam0) // Position - 0xFF31 Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

void func_391() // Position - 0xFF5F Hash - 0xD4C197E4 ^0x62EF0F6
{
	if (!Global_1102813.f_16)
		return;

	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
	return;
}

Hash func_392(int iParam0, Hash hParam1) // Position - 0xFF8E Hash - 0xEA82FE59 ^0xEA82FE59
{
	switch (iParam0)
	{
		case 0:
			return joaat("PLAYER");
	
		case 1:
			return joaat("rel_civmale");
	
		case 2:
			return joaat("rel_civfemale");
	
		case 3:
			return joaat("rel_civnative");
	
		case 4:
			return joaat("rel_cop");
	
		case 5:
			return joaat("REL_NO_RELATIONSHIP");
	
		case 6:
			return joaat("rel_player_enemy");
	
		case 7:
			return joaat("rel_player_ally");
	
		case 8:
			return joaat("rel_player_like");
	
		case 9:
			return joaat("rel_player_dislike");
	
		case 10:
			return joaat("rel_companion_group");
	
		case 11:
			return joaat("REL_WILD_ANIMAL");
	
		case 12:
			return joaat("REL_WILD_ANIMAL_PREDATOR");
	
		case 13:
			return joaat("rel_domesticated_animal");
	
		case 14:
			return joaat("rel_domesticated_pet_animal");
	
		case 15:
			return joaat("rel_bounty_hunter");
	
		case 16:
			return joaat("rel_guama_law");
	
		case 17:
			return joaat("rel_pinkertons");
	
		case 18:
			return joaat("rel_town_mob");
	
		case 19:
			return joaat("rel_criminals");
	
		case 20:
			return joaat("rel_gunslingers");
	
		case 21:
			return joaat("rel_gang_dutchs");
	
		case 22:
			return joaat("rel_gang_dutchs_horses");
	
		case 23:
			return joaat("rel_gang_laramie_gang");
	
		case 24:
			return joaat("rel_gang_skinner_brothers");
	
		case 25:
			return joaat("rel_gang_creole");
	
		case 26:
			return joaat("rel_gang_lemoyne_raiders");
	
		case 27:
			return joaat("rel_gang_smugglers");
	
		case 28:
			return joaat("rel_gang_odriscoll");
	
		case 29:
			return joaat("rel_gang_murfree_brood");
	
		case 30:
			return joaat("REL_WILD_ANIMAL_BIRD");
	
		case 31:
			return joaat("REL_ALLIGATOR");
	
		case 32:
			return joaat("REL_BOAR");
	
		case 33:
			return joaat("rel_hen_animal");
	
		case 34:
			return joaat("rel_minigame_player");
	
		case 35:
			return joaat("rel_braithwaites");
	
		case 36:
			return joaat("rel_greys");
	
		case 37:
			return joaat("rel_re_victim");
	
		case 38:
			return joaat("rel_re_enemy");
	
		case 39:
			return joaat("rel_mp_like_all_players");
	
		case 40:
			return joaat("rel_fetch_enemy_1");
	
		case 41:
			return joaat("rel_fetch_enemy_2");
	
		case 42:
			return joaat("rel_network_safe");
	
		case 43:
			return joaat("rel_network_free_agent");
	
		case 44:
			return joaat("rel_mp_wanted_criminal");
	
		case 45:
			return joaat("rel_gt_ffa");
	
		case 46:
			return joaat("rel_gt_team_0");
	
		case 47:
			return joaat("rel_gt_team_1");
	
		case 48:
			return joaat("rel_gt_team_2");
	
		case 49:
			return joaat("rel_gt_team_3");
	
		case 50:
			return joaat("rel_gt_team_4");
	
		case 51:
			return joaat("rel_gt_team_5");
	
		case 52:
			return joaat("rel_gt_team_6");
	
		case 53:
			return joaat("rel_gt_team_7");
	
		case 54:
			return joaat("rel_player_cop");
	
		case 55:
			return joaat("rel_player_0");
	
		case 56:
			return joaat("rel_player_1");
	
		case 57:
			return joaat("rel_player_2");
	
		case 58:
			return joaat("rel_player_3");
	
		case 59:
			return joaat("rel_player_4");
	
		case 60:
			return joaat("rel_player_5");
	
		case 61:
			return joaat("rel_player_6");
	
		case 62:
			return joaat("rel_player_7");
	
		case 63:
			return joaat("rel_player_8");
	
		case 64:
			return joaat("rel_player_9");
	
		case 65:
			return joaat("rel_player_10");
	
		case 66:
			return joaat("rel_player_11");
	
		case 67:
			return joaat("rel_player_12");
	
		case 68:
			return joaat("rel_player_13");
	
		case 69:
			return joaat("rel_player_14");
	
		case 70:
			return joaat("rel_player_15");
	
		case 71:
			return joaat("rel_player_16");
	
		case 72:
			return joaat("rel_player_17");
	
		case 73:
			return joaat("rel_player_18");
	
		case 74:
			return joaat("rel_player_19");
	
		case 75:
			return joaat("rel_player_20");
	
		case 76:
			return joaat("rel_player_21");
	
		case 77:
			return joaat("rel_player_22");
	
		case 78:
			return joaat("rel_player_23");
	
		case 79:
			return joaat("rel_player_24");
	
		case 80:
			return joaat("rel_player_25");
	
		case 81:
			return joaat("rel_player_26");
	
		case 82:
			return joaat("rel_player_27");
	
		case 83:
			return joaat("rel_player_28");
	
		case 84:
			return joaat("rel_player_29");
	
		case 85:
			return joaat("rel_player_30");
	
		case 86:
			return joaat("rel_player_31");
	
		default:
		
	}

	hParam1 >= 1;
	return hParam1;
}

int func_393(int iParam0, Hash* phParam1) // Position - 0x104DA Hash - 0xC749713B ^0xA1F07E97
{
	int num;

	num = Global_1072759.f_28418[48 /*4*/].f_3;
	num.f_2 = -738708473;
	num.f_3 = func_367(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return 0;

	num.f_2 = -1407851228;
	num.f_3 = MISC::GET_HASH_KEY("sHash");
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(phParam1, &num);
	return 1;
}

BOOL func_394(Any* panParam0, int iParam1, int iParam2) // Position - 0x10535 Hash - 0xA8F08582 ^0x9810C45C
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

BOOL func_395(Any* panParam0, int iParam1, int iParam2) // Position - 0x10568 Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::CLEAR_BIT(&panParam0->[num], offset);
	return isBitSet;
}

int func_396(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1059A Hash - 0xF4EF07E4 ^0xE86AE8EB
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

int func_397(Hash hParam0) // Position - 0x105F7 Hash - 0x3E188C09 ^0xE1858C33
{
	var unk;

	unk = Global_1072759.f_23824.f_383.f_4085;
	unk.f_2 = 1593794963;
	unk.f_3 = hParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
}

BOOL func_398(Hash hParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x10623 Hash - 0x68F7D788 ^0x69007BD0
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

int func_399(int iParam0) // Position - 0x10685 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

void func_400(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x106D0 Hash - 0x79169E9C ^0xA3FE4569
{
	func_527(iParam0);

	if (!func_528(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_529(128) && !func_530(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_531() == 4)
		func_267(18);

	func_532(1024);
	return;
}

void func_401(var uParam0) // Position - 0x10732 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_402(float* pfParam0) // Position - 0x10744 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_403(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x10756 Hash - 0x63EE9672 ^0xDAC9325D
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

void func_404(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x107AC Hash - 0x6DF4F0B2 ^0x7B946ED1
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

BOOL func_405() // Position - 0x107D9 Hash - 0xEB5F0CC3 ^0xEB5F0CC3
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_533(i))
			return true;
	}

	return false;
}

BOOL func_406() // Position - 0x10801 Hash - 0x37C92B58 ^0x6775BAEB
{
	return Global_1295658.f_2.f_1 == 2 || Global_1295658.f_2.f_1 == 1;
}

BOOL func_407() // Position - 0x10823 Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

void func_408(Ped pedParam0, Ped pedParam1) // Position - 0x10841 Hash - 0x46385415 ^0xE22A9ADD
{
	int inventoryIdFromPed;
	int inventoryIdFromPed2;
	var outGuid;
	var guid;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);
	inventoryIdFromPed2 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam1);

	if (inventoryIdFromPed == 0 || inventoryIdFromPed2 == 0)
		return;

	!INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(inventoryIdFromPed, &guid, 923904168, -740156546, &outGuid);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(inventoryIdFromPed, inventoryIdFromPed2, &outGuid, 0);
	return;
}

BOOL func_409(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x10890 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

void func_410(var uParam0, int iParam1) // Position - 0x108B9 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_411(Hash hParam0, Hash hParam1) // Position - 0x108CE Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_444(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_412() // Position - 0x10904 Hash - 0x16C45944 ^0x16C45944
{
	return func_534(func_19(0));
}

BOOL func_413(Hash hParam0) // Position - 0x10915 Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

BOOL func_414(Hash hParam0, var uParam1) // Position - 0x1092D Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_535(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_415(Hash hParam0, var uParam1) // Position - 0x10944 Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_536(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_416(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1095C Hash - 0x1244E24C ^0xA4727049
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_292(hParam0, 0))
		return func_537(func_313(hParam0), hParam1, bParam2);

	if (func_182(hParam0) || func_293(hParam0, 1077060302))
		return func_307(func_183(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_354() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_538(hParam0, hParam1, &unk, &num) || num < 1)
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

Hash func_417(Hash hParam0, BOOL bParam1) // Position - 0x10A21 Hash - 0x1EB0D738 ^0x1EB0D738
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_539(i, true, false);
	
		if (!func_317(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_540(unk[j /*2*/]))
				{
					if (!bParam1 || func_378(unk[j /*2*/], false, true, true) > 0)
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

Hash func_418(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10AB4 Hash - 0x147A7BD8 ^0x147A7BD8
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
		hash3 = func_539(i, false, true);
	
		if (!func_317(hParam0, hash3, &unk3, &num, true, false))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_484(unk3[j /*2*/]))
				{
					if (!bParam1 || func_378(unk3[j /*2*/], false, true, true) > 0)
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

Hash func_419(Hash hParam0, BOOL bParam1) // Position - 0x10C13 Hash - 0xA9E35D6B ^0xBA3EB97
{
	if (!func_303(hParam0, bParam1))
		return 0;

	if (hParam0 == joaat("document_pamphlet_tracking_arrow"))
		return func_183(joaat("ammo_arrow_tracking"), true);
	else if (hParam0 == joaat("document_pamphlet_poison_bottle"))
		return func_183(joaat("ammo_poisonbottle"), true);
	else if (hParam0 == 318000298)
		return func_183(-1939515319, true);
	else if (hParam0 == -1771777013)
		return func_183(-1903059161, true);
	else if (hParam0 == 375366730)
		return func_183(-252071901, true);
	else if (hParam0 == -1309887827)
		return func_183(-611782825, true);

	return func_183(hParam0, true);
}

BOOL func_420(Hash hParam0) // Position - 0x10CCB Hash - 0xBF9BC979 ^0x2C23A458
{
	BOOL flag;
	Hash weaponUnlock;

	if (hParam0 == 0)
		return false;

	flag = false;

	if (func_354() == -1)
	{
		if (func_541(hParam0))
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

int func_421(int iParam0, Hash hParam1) // Position - 0x10D15 Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_293(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_422(Hash hParam0, int iParam1) // Position - 0x10D3A Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_292(hParam0, 0))
		return 0;

	unk = { func_448(false) };
	unk.f_4 = func_542(iParam1);
	guid = { func_319(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_456(false), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_423(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10D95 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_315(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

BOOL func_424(Hash hParam0) // Position - 0x10E29 Hash - 0x1B551CF7 ^0x6F07D675
{
	return func_446(hParam0) == -999503751;
}

Hash func_425(Hash hParam0) // Position - 0x10E3D Hash - 0xDDBFAC08 ^0xC4630BF
{
	if (!func_424(hParam0))
		return 0;

	switch (hParam0)
	{
		case -2138714467:
			return -1604437371;
	
		case -2137310037:
			return 120975393;
	
		case -2137185980:
			return 466087145;
	
		case -2127824110:
			return -573609786;
	
		case -2077939025:
			return -1994920950;
	
		case -2075290374:
			return -956892603;
	
		case -2068637111:
			return -705751660;
	
		case -2050586146:
			return -1568843392;
	
		case -2043500951:
			return -162091708;
	
		case -2043224964:
			return -1762511586;
	
		case -1999554802:
			return 1721339484;
	
		case -1991069642:
			return 1599850951;
	
		case -1967660287:
			return -214441929;
	
		case -1962290800:
			return 2081118674;
	
		case -1944199774:
			return -1262957735;
	
		case -1930520502:
			return 933561301;
	
		case -1909243438:
			return 1126483827;
	
		case -1896067425:
			return -229247533;
	
		case -1888892597:
			return 249321841;
	
		case -1871922677:
			return 1364634153;
	
		case -1855140882:
			return -9237745;
	
		case -1830566447:
			return 98091275;
	
		case -1801773954:
			return -1218075359;
	
		case -1794096032:
			return 157930334;
	
		case -1787340262:
			return -1466006414;
	
		case -1763097043:
			return 115504824;
	
		default:
		
	}

	return 0;
}

BOOL func_426(Hash hParam0) // Position - 0x11DC7 Hash - 0x7F17116B ^0xC2819F44
{
	if (!func_292(hParam0, 0))
		return false;

	return func_446(hParam0) == 153430294;
}

Hash func_427(Hash hParam0) // Position - 0x11DEA Hash - 0xDDBFAC08 ^0x23F2B67D
{
	if (!func_426(hParam0))
		return 0;

	switch (hParam0)
	{
		case -2142729980:
			return 632068832;
	
		case -2121879779:
			return 723173468;
	
		case -2105861707:
			return 1993996914;
	
		case joaat("clothing_item_m_offhand_015_tint_004"):
			return 2120268316;
	
		case -2090951606:
			return -121887417;
	
		case joaat("clothing_item_m_offhand_001_tint_004"):
			return 1616727805;
	
		case joaat("clothing_item_f_offhand_003_tint_003"):
			return 1564631339;
	
		case joaat("clothing_item_m_offhand_008_tint_003"):
			return 1963005075;
	
		case -2026971099:
			return 834643453;
	
		case joaat("clothing_item_f_offhand_007_tint_003"):
			return 1451015330;
	
		case -1990239091:
			return 86705584;
	
		case joaat("clothing_item_m_offhand_002_tint_002"):
			return -855621461;
	
		case -1896863365:
			return -1760699697;
	
		case -1893420074:
			return -890648157;
	
		case -1881999437:
			return -1168172372;
	
		case joaat("clothing_item_f_offhand_004_tint_003"):
			return 207242099;
	
		case joaat("clothing_item_m_offhand_001_tint_003"):
			return -1541941647;
	
		case joaat("clothing_item_m_offhand_008_tint_004"):
			return -2037925984;
	
		case -1816871896:
			return 765978639;
	
		case -1764025059:
			return -1452207299;
	
		case -1759971328:
			return 2076472033;
	
		case -1755397046:
			return 626818695;
	
		case -1706409937:
			return -1462337952;
	
		case -1678154750:
			return 928733389;
	
		case -1665332793:
			return -1318828485;
	
		case joaat("clothing_item_m_offhand_010_tint_002"):
			return 1307072000;
	
		case joaat("clothing_item_f_offhand_007_tint_002"):
			return 1087541582;
	
		case joaat("clothing_item_f_offhand_005_tint_001"):
			return 1417685661;
	
		case joaat("clothing_item_m_offhand_014_tint_001"):
			return -766852067;
	
		case joaat("clothing_item_f_offhand_004_tint_001"):
			return -274429432;
	
		case -1515678445:
			return 433303369;
	
		case joaat("clothing_item_m_offhand_005_tint_001"):
			return -1438504284;
	
		case -1477066926:
			return -1741786952;
	
		case joaat("clothing_item_f_offhand_014_tint_001"):
			return 1051595054;
	
		case joaat("clothing_item_f_offhand_005_tint_002"):
			return -2095478833;
	
		case -1336579003:
			return 1584884203;
	
		case -1297099578:
			return -2078652272;
	
		case -1292945877:
			return -1465928526;
	
		case joaat("clothing_item_m_offhand_005_tint_002"):
			return -1663266855;
	
		case -1242022473:
			return 531497422;
	
		case joaat("clothing_item_f_offhand_001_tint_004"):
			return 1924797251;
	
		case joaat("clothing_item_m_offhand_008_tint_002"):
			return -1897379743;
	
		case joaat("clothing_item_m_offhand_010_tint_001"):
			return 11713414;
	
		case -1151792276:
			return 534957177;
	
		case joaat("clothing_item_m_offhand_014_tint_002"):
			return -1076125889;
	
		case joaat("clothing_item_m_offhand_009_tint_003"):
			return -1141176732;
	
		case -1094089207:
			return -492661555;
	
		case -1069100838:
			return -809532687;
	
		case joaat("clothing_item_f_offhand_000_tint_003"):
			return 11282331;
	
		case joaat("clothing_item_f_offhand_006_tint_001"):
			return 1413210443;
	
		case -963846432:
			return 828941635;
	
		case joaat("clothing_item_m_offhand_004_tint_003"):
			return -408748538;
	
		case joaat("clothing_item_m_offhand_005_tint_003"):
			return -977280609;
	
		case joaat("clothing_item_f_offhand_008_tint_003"):
			return -35123787;
	
		case -881400018:
			return -197243922;
	
		case joaat("clothing_item_m_offhand_008_tint_001"):
			return 66925801;
	
		case joaat("clothing_item_m_offhand_004_tint_004"):
			return 2080515794;
	
		case joaat("clothing_item_m_offhand_009_tint_004"):
			return -1415813725;
	
		case joaat("clothing_item_f_offhand_000_tint_004"):
			return 725318841;
	
		case -741289040:
			return 679426853;
	
		case joaat("clothing_item_m_offhand_006_tint_001"):
			return 760352143;
	
		case -732726675:
			return 1127336149;
	
		case joaat("clothing_item_m_offhand_015_tint_001"):
			return -1670121942;
	
		case -706894864:
			return -1018149936;
	
		case joaat("clothing_item_f_offhand_004_tint_002"):
			return 570453695;
	
		case -695075472:
			return -854491755;
	
		case joaat("clothing_item_m_offhand_015_tint_002"):
			return 1790317231;
	
		case -633699143:
			return -514513380;
	
		case joaat("clothing_item_m_offhand_014_tint_004"):
			return -1685465452;
	
		case joaat("clothing_item_m_offhand_007_tint_004"):
			return 1269465524;
	
		case -569224994:
			return 1399272333;
	
		case -553416748:
			return 682151083;
	
		case joaat("clothing_item_f_offhand_000_tint_001"):
			return 1570234737;
	
		case -528729190:
			return -1526815245;
	
		case -521480347:
			return 802722687;
	
		case joaat("clothing_item_f_offhand_010_tint_001"):
			return -2018900297;
	
		case joaat("clothing_item_m_offhand_002_tint_001"):
			return -922666835;
	
		case joaat("clothing_item_m_offhand_006_tint_002"):
			return 1528293658;
	
		case joaat("clothing_item_f_offhand_007_tint_001"):
			return 857732585;
	
		case -443582675:
			return 449355704;
	
		case -410630335:
			return 435122445;
	
		case joaat("clothing_item_m_offhand_003_tint_001"):
			return 1515886177;
	
		case joaat("clothing_item_m_offhand_005_tint_004"):
			return -1208924670;
	
		case joaat("clothing_item_f_offhand_000_tint_002"):
			return -288324636;
	
		case -161815318:
			return 1413244326;
	
		case joaat("clothing_item_f_offhand_002_tint_002"):
			return 483863122;
	
		case joaat("clothing_item_m_offhand_003_tint_002"):
			return 1212871226;
	
		case joaat("clothing_item_f_offhand_009_tint_001"):
			return -2087370390;
	
		case joaat("clothing_item_m_offhand_010_tint_004"):
			return 701926877;
	
		case joaat("clothing_item_m_offhand_000_tint_003"):
			return 1444076568;
	
		case joaat("clothing_item_m_offhand_007_tint_002"):
			return 25128279;
	
		case 45914674:
			return 1227104007;
	
		case joaat("clothing_item_m_offhand_000_tint_004"):
			return 1147680963;
	
		case 84775568:
			return 385875335;
	
		case joaat("clothing_item_f_offhand_002_tint_003"):
			return 237473007;
	
		case 135502004:
			return -806719655;
	
		case 147295280:
			return 1836693226;
	
		case joaat("clothing_item_m_offhand_007_tint_003"):
			return -286209990;
	
		case joaat("clothing_item_m_offhand_009_tint_002"):
			return 1358934123;
	
		case joaat("clothing_item_f_offhand_015_tint_001"):
			return -337288225;
	
		case joaat("clothing_item_m_offhand_010_tint_003"):
			return 1575941645;
	
		case joaat("clothing_item_m_offhand_014_tint_003"):
			return -1445170375;
	
		case joaat("clothing_item_m_offhand_004_tint_001"):
			return -1002555587;
	
		case joaat("clothing_item_f_offhand_002_tint_004"):
			return 1066004403;
	
		case 424001060:
			return -1557990587;
	
		case joaat("clothing_item_f_offhand_010_tint_002"):
			return -626938711;
	
		case 457948940:
			return -1170586631;
	
		case joaat("clothing_item_m_offhand_000_tint_002"):
			return 1799751306;
	
		case 503878688:
			return 1756919640;
	
		case 512996699:
			return -712677318;
	
		case joaat("clothing_item_f_offhand_003_tint_001"):
			return 1559978137;
	
		case 637343178:
			return 1912758109;
	
		case 676193620:
			return -595245625;
	
		case 683366891:
			return -1416714590;
	
		case joaat("clothing_item_f_offhand_010_tint_004"):
			return -1124798132;
	
		case joaat("clothing_item_m_offhand_007_tint_001"):
			return -1805872365;
	
		case joaat("clothing_item_f_offhand_003_tint_002"):
			return 1322239046;
	
		case 811850600:
			return -1834221234;
	
		case 816232796:
			return 898339071;
	
		case 822532673:
			return -272163651;
	
		case 834556641:
			return 1977920549;
	
		case joaat("clothing_item_m_offhand_002_tint_004"):
			return 1955205056;
	
		case joaat("clothing_item_f_offhand_007_tint_004"):
			return 1688754425;
	
		case joaat("clothing_item_f_offhand_003_tint_004"):
			return -212824759;
	
		case 857399510:
			return -1096001202;
	
		case joaat("clothing_item_f_offhand_001_tint_003"):
			return 1536910598;
	
		case joaat("clothing_item_m_offhand_004_tint_002"):
			return -704816453;
	
		case 918258437:
			return -1816896715;
	
		case joaat("clothing_item_m_offhand_009_tint_001"):
			return 1668961632;
	
		case joaat("clothing_item_f_offhand_010_tint_003"):
			return -336900292;
	
		case joaat("clothing_item_f_offhand_015_tint_002"):
			return 432390051;
	
		case joaat("clothing_item_m_offhand_003_tint_003"):
			return 520003486;
	
		case joaat("clothing_item_f_offhand_004_tint_004"):
			return -1112267224;
	
		case joaat("clothing_item_m_offhand_006_tint_004"):
			return 309975007;
	
		case 1125547616:
			return 650709696;
	
		case joaat("clothing_item_f_offhand_001_tint_002"):
			return 1306347914;
	
		case 1142159244:
			return 1618444619;
	
		case 1169203439:
			return 321247770;
	
		case joaat("clothing_item_f_offhand_009_tint_004"):
			return 1507847664;
	
		case joaat("clothing_item_f_offhand_006_tint_002"):
			return 1182877142;
	
		case joaat("clothing_item_f_offhand_014_tint_002"):
			return 1338028883;
	
		case 1306077006:
			return -2137870811;
	
		case joaat("clothing_item_f_offhand_002_tint_001"):
			return 9499074;
	
		case 1382502619:
			return -580344583;
	
		case joaat("clothing_item_f_offhand_001_tint_001"):
			return -949699437;
	
		case joaat("clothing_item_m_offhand_006_tint_003"):
			return 601619107;
	
		case joaat("clothing_item_f_offhand_009_tint_003"):
			return 707399301;
	
		case joaat("clothing_item_f_offhand_005_tint_003"):
			return 1899947034;
	
		case 1525976567:
			return -933808484;
	
		case joaat("clothing_item_f_offhand_008_tint_004"):
			return 195668280;
	
		case joaat("clothing_item_f_offhand_006_tint_003"):
			return -208887838;
	
		case 1564617196:
			return 1395189422;
	
		case 1595344893:
			return 518666542;
	
		case joaat("clothing_item_m_offhand_000_tint_001"):
			return 2113612788;
	
		case joaat("clothing_item_f_offhand_009_tint_002"):
			return 888087567;
	
		case joaat("clothing_item_m_offhand_001_tint_002"):
			return -1377900033;
	
		case joaat("clothing_item_f_offhand_005_tint_004"):
			return -1752321861;
	
		case joaat("clothing_item_f_offhand_015_tint_004"):
			return 1862953515;
	
		case joaat("clothing_item_f_offhand_008_tint_001"):
			return 1437777233;
	
		case joaat("clothing_item_m_offhand_003_tint_004"):
			return 214694713;
	
		case 1829328082:
			return 1530204769;
	
		case 1830662729:
			return 386356219;
	
		case 1835609242:
			return -399699239;
	
		case joaat("clothing_item_f_offhand_006_tint_004"):
			return 21707615;
	
		case 1858275734:
			return -375898808;
	
		case joaat("clothing_item_m_offhand_015_tint_003"):
			return 1889214097;
	
		case joaat("clothing_item_f_offhand_014_tint_004"):
			return -1516904708;
	
		case joaat("clothing_item_f_offhand_015_tint_003"):
			return 1094880924;
	
		case joaat("clothing_item_m_offhand_001_tint_001"):
			return -2020336278;
	
		case 2015984622:
			return 1346489728;
	
		case joaat("clothing_item_m_offhand_002_tint_003"):
			return -564862124;
	
		case 2066466847:
			return 526451008;
	
		case 2086466425:
			return -1982828649;
	
		case joaat("clothing_item_f_offhand_008_tint_002"):
			return 1676958164;
	
		case 2135971502:
			return -842448512;
	
		case joaat("clothing_item_f_offhand_014_tint_003"):
			return 574052421;
	
		default:
		
	}

	return 0;
}

BOOL func_428(Hash hParam0) // Position - 0x127A6 Hash - 0x6942A5C5 ^0xFA5CB2EF
{
	return func_543(hParam0) && func_293(hParam0, 1584357097);
}

Hash func_429(Hash hParam0) // Position - 0x127C4 Hash - 0xDDBFAC08 ^0x5ECDEB23
{
	if (!func_428(hParam0))
		return 0;

	switch (hParam0)
	{
		case -2109461640:
			return -1533903180;
	
		case -2050900874:
			return -856521084;
	
		case -2027203194:
			return 2081091619;
	
		case -1975194892:
			return 73453226;
	
		case -1894668475:
			return 1957000738;
	
		case -1815586685:
			return -412238982;
	
		case -1806184545:
			return 1874334976;
	
		case -1617589234:
			return -431273312;
	
		case -1617179117:
			return 862573726;
	
		case -1615607679:
			return 1686296029;
	
		case -1593520704:
			return -769187178;
	
		case -1382149068:
			return -240893062;
	
		case -1278925815:
			return 1640403026;
	
		case -1179959034:
			return -146516808;
	
		case -1085571851:
			return 1934791288;
	
		case -1053842899:
			return -2015093177;
	
		case -1042952050:
			return -1111852673;
	
		case -1029170414:
			return 1651235889;
	
		case -997271222:
			return 1353200767;
	
		case -878058438:
			return -668553641;
	
		case -873142887:
			return -337101316;
	
		case -862677113:
			return -1633818354;
	
		case -840486512:
			return -526428006;
	
		case -831411723:
			return -882484202;
	
		case -781656240:
			return -2040374903;
	
		case -755677768:
			return -1841483015;
	
		case -609641686:
			return 516107635;
	
		case -533360838:
			return 1220617347;
	
		case -464283790:
			return -553725692;
	
		case -452048774:
			return 974561281;
	
		case -429434400:
			return 1973137538;
	
		case -320325540:
			return 1029354793;
	
		case -297375678:
			return 2100623539;
	
		case -260985198:
			return -354862110;
	
		case -188079477:
			return -547676440;
	
		case -186533746:
			return -1123513064;
	
		case -142781743:
			return -99130340;
	
		case -131203731:
			return -1830556910;
	
		case -80071950:
			return -1229833684;
	
		case -51500315:
			return -260158053;
	
		case -28339930:
			return -2035393948;
	
		case 154924622:
			return 207980728;
	
		case 245915270:
			return 518337236;
	
		case 507515628:
			return -284580868;
	
		case 525029001:
			return 463034341;
	
		case 532885562:
			return 1728467402;
	
		case 538640747:
			return 677332424;
	
		case 550403966:
			return -1219424121;
	
		case 560856018:
			return 9691481;
	
		case 731907282:
			return 195889874;
	
		case 767294276:
			return -600422706;
	
		case 844146134:
			return 966617156;
	
		case 856007660:
			return 1019812717;
	
		case 919634467:
			return -1729036567;
	
		case 948647349:
			return -1058723344;
	
		case 1034120186:
			return 2091613460;
	
		case 1103717282:
			return 1767482612;
	
		case 1156363443:
			return 387193715;
	
		case 1254834984:
			return -311177636;
	
		case 1260724738:
			return -1889559288;
	
		case 1311814185:
			return -229245945;
	
		case 1332088703:
			return 1366042262;
	
		case 1348094862:
			return 863949896;
	
		case 1386939749:
			return 2105724242;
	
		case 1464921218:
			return -979751655;
	
		case 1502511939:
			return 1942551232;
	
		case 1561454517:
			return 465087209;
	
		case 1578729681:
			return 526083803;
	
		case 1646522145:
			return 1693169437;
	
		case 1701653225:
			return -1303234828;
	
		case 1717296181:
			return 149336704;
	
		case 1784374159:
			return 1100771587;
	
		case 1800445393:
			return 596295460;
	
		case 1809065934:
			return 518344954;
	
		case 1829957287:
			return 857944907;
	
		case 1864875333:
			return 1682604808;
	
		case 1879581870:
			return -1364982418;
	
		case 1890828381:
			return -1707282708;
	
		case 1894117705:
			return 1146825064;
	
		case 1952092069:
			return -1816797957;
	
		case 2039957913:
			return 329215271;
	
		case 2047228732:
			return 290265769;
	
		case 2081818376:
			return 1455922005;
	
		case 2095710966:
			return 1656345167;
	
		default:
		
	}

	return 0;
}

BOOL func_430(Hash hParam0) // Position - 0x12C7A Hash - 0x1B551CF7 ^0x5675C327
{
	return func_446(hParam0) == 1882579758;
}

Hash func_431(Hash hParam0) // Position - 0x12C8E Hash - 0xB8EC44B7 ^0x5E811163
{
	switch (hParam0)
	{
		case joaat("clothing_item_m_ust_000_tint_006"):
			return 1960130701;
	
		case joaat("clothing_item_m_ust_000_tint_007"):
			return 766061110;
	
		case joaat("clothing_item_m_ust_000_tint_004"):
			return 140205975;
	
		case joaat("clothing_item_m_ust_000_tint_003"):
			return -184567584;
	
		case joaat("clothing_item_m_ust_000_tint_001"):
			return 174220197;
	
		case joaat("clothing_item_m_ust_000_tint_008"):
			return 1364291974;
	
		case joaat("clothing_item_m_ust_000_tint_002"):
			return 468518590;
	
		case joaat("clothing_item_m_ust_000_tint_010"):
			return 292938556;
	
		case joaat("clothing_item_m_ust_000_tint_005"):
			return 1664750935;
	
		case joaat("clothing_item_m_ust_000_tint_009"):
			return 2076526201;
	
		default:
		
	}

	return 0;
}

BOOL func_432(Hash hParam0) // Position - 0x12D2B Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1354270243:
		case -1251985981:
		case -1197011183:
		case 75922725:
		case 975507354:
		case 1070046552:
			return true;
	
		default:
		
	}

	return false;
}

int func_433(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12D70 Hash - 0x1EBCD943 ^0x1EBCD943
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_315(hParam0, hParam2, &unk, &num, bParam3, bParam4))
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

BOOL func_434(int iParam0) // Position - 0x12DDC Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_435() // Position - 0x12DFF Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_354() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_436(BOOL bParam0) // Position - 0x12E1A Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_354() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_456(bParam0));
}

BOOL func_437() // Position - 0x12E38 Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

BOOL func_438(Hash hParam0) // Position - 0x12E54 Hash - 0x7A41F8FA ^0x4ED5CABB
{
	if (!func_292(hParam0, 0))
		return false;

	if (func_293(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_439(hParam0);
}

BOOL func_439(Hash hParam0) // Position - 0x12E83 Hash - 0x1FFCC90D ^0xF5D25358
{
	if (!func_292(hParam0, 0))
		return 0;

	if (func_293(hParam0, -839724752))
		return 1;

	return 0;
}

int func_440(int iParam0, Hash hParam1, var uParam2) // Position - 0x12EAD Hash - 0xFBFC702 ^0xFBFC702
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

	iParam0 = func_544(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_292(hParam1, 0))
		return 0;

	if (!func_545(iParam0))
		return 0;

	ped = func_546(iParam0);

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
	
		if (!func_547(entityFromItem))
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

int func_441(Hash hParam0, int iParam1) // Position - 0x12FDA Hash - 0x7A47071E ^0x7A47071E
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

	if (!func_292(hParam0, 0))
		return 0;

	if (!func_438(hParam0) && !func_439(hParam0))
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
	num4 = func_548(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_549(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_550(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_551(i, num2);
		
			if (func_292(hash, 0) && hParam0 != hash)
			{
				hash2 = func_552(hash);
			
				if (hash2 != 0)
				{
					num5 = func_422(hash, iParam1);
				
					if (num5 > 0)
						num = num + (num5 * func_554(hash2, func_553(hash), hParam0));
				}
			}
		}
	
		func_555(num2);
	}

	return num;
}

int func_442(int iParam0, Hash hParam1) // Position - 0x130F7 Hash - 0x9B281D8A ^0x9B281D8A
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_544(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_292(hParam1, 0))
		return 0;

	if (!func_545(iParam0))
		return 0;

	horse = func_546(iParam0);
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

int func_443(Hash hParam0) // Position - 0x13195 Hash - 0x3CFC8FF5 ^0xC9DF94B0
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_292(hParam0, 0))
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

BOOL func_444(Hash hParam0, int iParam1) // Position - 0x131E7 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

void func_445(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x13201 Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_446(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_446(Hash hParam0) // Position - 0x133D7 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_292(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

void func_447(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x13402 Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_446(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

struct<4> func_448(BOOL bParam0) // Position - 0x135D8 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_456(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_319(joaat("character"), func_556(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_319(joaat("character"), func_556(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_319(joaat("character"), func_556(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_449(BOOL bParam0) // Position - 0x13678 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_456(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_319(923904168, func_448(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_319(923904168, func_448(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_319(923904168, func_448(bParam0), -740156546, false);
}

int func_450(Hash hParam0, BOOL bParam1) // Position - 0x13719 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_446(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_557();
		else
			return 1;

	return 0;
}

BOOL func_451(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13750 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_558(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_452(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1376B Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_559(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_453(BOOL bParam0) // Position - 0x1378C Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_456(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_319(271701509, func_448(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_319(271701509, func_448(bParam0), 12999093, false);
}

BOOL func_454(Hash hParam0, Hash hParam1) // Position - 0x137F6 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_446(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_560(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_455(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x13863 Hash - 0x113CD144 ^0x113CD144
{
	return func_561(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_456(BOOL bParam0) // Position - 0x13879 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_354() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_457(Any* panParam0) // Position - 0x138BA Hash - 0x7865E948 ^0x92258F24
{
	if (!func_320(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

int func_458(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x138D6 Hash - 0x8F656380 ^0x6EA8E62C
{
	if (!func_320(&uParam0))
		return 0;

	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

BOOL func_459(int iParam0) // Position - 0x138F2 Hash - 0xEDFD4796 ^0x397F66B9
{
	if (iParam0 <= 0)
		return false;

	return NETWORK::GET_CLOUD_TIME_AS_INT() + func_562() > iParam0;
}

BOOL func_460(Hash hParam0) // Position - 0x13910 Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_293(hParam0, 1279601681);
}

BOOL func_461(int* piParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x13923 Hash - 0x9D321287 ^0x9D321287
{
	if (!func_463(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_295(hParam1, 0, true, iParam5, bParam6);

	if (!func_563(hParam1, hParam4, iParam5))
		return false;

	uParam2->f_17 = hParam1;
	uParam2->f_8 = hParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = hParam4;
	uParam2->f_12 = 1248274121;

	if (!func_564(piParam0, *uParam2, 541670136, bParam3))
		return false;

	if (COLLECTION::_0x9ADEE485726025D4(hParam1) != 0)
	{
		Global_1292143.f_20.f_422 != -1;
		Global_1292143.f_20.f_422.f_1 = hParam1;
		Global_1292143.f_20.f_422 = piParam0->f_1;
	}

	return true;
}

void func_462(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x139CC Hash - 0x483DB7AC ^0x6DDF69B5
{
	Hash hash;
	Hash hash2;

	hash = uParam0.f_17;
	hash2 = uParam0.f_13;

	if (func_433(hash, joaat("currency_gold_bar"), hash2, false, true) > 0)
		func_482("gold_spend", "Gold_Spend_Sounds", true);
	else
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);

	return;
}

BOOL func_463(int* piParam0, BOOL bParam1) // Position - 0x13A11 Hash - 0x7D3BA1EA ^0x8B940399
{
	if (!bParam1)
		if (func_565(piParam0))
			return false;

	if (func_566(&(piParam0->f_6)))
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

void func_464(var uParam0, int iParam1) // Position - 0x13AAD Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_465(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x13AC2 Hash - 0xCDB04DC0 ^0xCDB04DC0
{
	Hash hash;

	if (func_567(hParam1))
	{
		hash = func_313(hParam1);
		return func_568(piParam0, hash, hParam7, iParam8, iParam9);
	}

	if (func_289(iParam9, 32))
		if (!func_569(hParam1, uParam2, hParam6))
			return false;

	if (!func_570(hParam1, hParam7, iParam9))
		return false;

	if (func_289(iParam9, 4))
		if (!func_571(piParam0, hParam1, uParam2, hParam6, hParam7, iParam8, false, bParam10))
			return false;

	if (func_289(iParam9, 8))
		return func_572(piParam0, hParam1, hParam7, iParam8);

	return true;
}

struct<17> func_466(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x13B5F Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_319(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_514(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_556() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_467(int* piParam0, Hash hParam1) // Position - 0x13BD9 Hash - 0x8927A1A4 ^0x3C5C8B8F
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_468(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0x13BF7 Hash - 0x47A4DDC0 ^0xD98F8579
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
		category = func_446(hParam1);
		hasSlotCount = func_573(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (func_560(hParam0, category, outSlotId))
				{
					*uParam4 = { func_318(hParam1, false, 0) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_319(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_456(false);
			unk30 = { func_318(hParam1, false, 0) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_319(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_446(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (func_560(hParam0, category, outSlotId))
							{
								if (func_574(parentGuid, outInventoryItem.f_9, &unk16, false, -1))
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

BOOL func_469(Hash hParam0) // Position - 0x13D77 Hash - 0x76026CA6 ^0xBFB83A0
{
	int num;

	num = func_375(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration"))
		return true;

	return false;
}

BOOL func_470(Hash hParam0) // Position - 0x13DA5 Hash - 0xD47FBCD ^0x782829D6
{
	return func_293(hParam0, 1282106666);
}

BOOL func_471(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, BOOL bParam12) // Position - 0x13DB8 Hash - 0xB722E8D ^0xB722E8D
{
	var unk;

	if (!func_463(piParam0, false))
		return false;

	if (!func_465(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, iParam11, bParam12))
		return false;

	unk = { func_466(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (!func_575(piParam0, &unk, 2113164098, bParam9, iParam11))
		return false;

	return true;
}

BOOL func_472(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, BOOL bParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, int iParam12, BOOL bParam13) // Position - 0x13E35 Hash - 0x7358E338 ^0x7358E338
{
	var unk;

	if (!func_463(piParam0, false))
		return false;

	if (hParam10 == 0)
		hParam10 = func_180(hParam1, hParam10, true, iParam12, true);

	if (!func_576(piParam0, hParam1, uParam2, hParam6, hParam10, iParam12))
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
		unk.f_15 = func_514(hParam1, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_556() };
			unk.f_11 = 0;
		}
	}

	*uParam8 = { unk };

	if (!func_481(piParam0, unk, 2113164098, bParam9, iParam12))
		return false;

	return true;
}

Hash func_473(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x13F15 Hash - 0x67107E64 ^0x67107E64
{
	return func_577(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_474(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x13F29 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_436(false))
		return func_578(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_455(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_456(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

void func_475(int* piParam0) // Position - 0x13F9D Hash - 0x5C1070C8 ^0x6E5D9A2A
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_495(*piParam0, 4, 0, 0);
	}

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return;
}

BOOL func_476(int* piParam0) // Position - 0x13FD1 Hash - 0x7EB3E610 ^0xF03AA787
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_495(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_495(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_495(*piParam0, 2, 0, 0);
		return false;
	}

	func_495(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

int func_477(Hash hParam0, int iParam1) // Position - 0x14071 Hash - 0xC7686194 ^0xC7686194
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

struct<2> func_478(int iParam0, int iParam1) // Position - 0x145B2 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_479(var uParam0, var uParam1, int iParam2) // Position - 0x145C8 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_480(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20, int iParam21) // Position - 0x145E5 Hash - 0x27F47D9F ^0x50F07084
{
	if (hParam19 != 2113164098 && hParam19 != joaat("Sell") && hParam19 != joaat("UPDATE"))
		return false;

	if (!func_579(hParam19, &uParam1, iParam21))
		return false;

	if (!func_580(piParam0, hParam19))
		return false;

	if (func_581(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_582(piParam0, bParam20);
}

BOOL func_481(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, Hash hParam18, BOOL bParam19, int iParam20) // Position - 0x14655 Hash - 0x41A6941 ^0x70576B24
{
	if (hParam18 != 2113164098 && hParam18 != joaat("Sell") && hParam18 != joaat("UPDATE") && hParam18 != joaat("use") && hParam18 != joaat("spend"))
		return false;

	if (!func_579(hParam18, &uParam1, iParam20))
		return false;

	if (!func_580(piParam0, hParam18))
		return false;

	if (func_583(*piParam0, hParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_582(piParam0, bParam19);
}

void func_482(char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x146DF Hash - 0xC649C280 ^0xBF0E7B5A
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

Hash func_483(Hash hParam0, int iParam1) // Position - 0x1471E Hash - 0x420155F1 ^0x713AD4BE
{
	if (!func_292(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(hParam0, iParam1))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_SOUND(hParam0, iParam1);
}

BOOL func_484(Hash hParam0) // Position - 0x1474D Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_446(hParam0) == -126813555;
}

BOOL func_485(int iParam0) // Position - 0x14761 Hash - 0xEDE8ECF3 ^0xEDE8ECF3
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

Hash func_486(int iParam0) // Position - 0x14780 Hash - 0xC3A4C269 ^0xC3A4C269
{
	if (!func_485(iParam0))
		return 0;

	return Global_1292143.f_3024[iParam0];
}

Hash func_487(int iParam0, BOOL bParam1) // Position - 0x147A1 Hash - 0xAE8B7FA5 ^0xAE8B7FA5
{
	Hash hash;
	Hash xp;

	if (!func_485(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_584(iParam0);
	
		if (func_292(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_585(255);
			else
				xp = func_558(hash, func_448(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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
		hash = func_586(iParam0);
	
		if (func_292(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_558(hash, func_448(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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

int func_488(Hash hParam0) // Position - 0x14860 Hash - 0x4D60F41E ^0xCD4529DF
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_516())
		return 0;

	STREAMING::REQUEST_IPL_HASH(hParam0);
	return 0;
}

void func_489() // Position - 0x14887 Hash - 0x5281CE7E ^0x311564BB
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_490(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1489E Hash - 0xB9500D ^0xB9500D
{
	BOOL flag;

	flag = func_588(bParam2, func_587(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_491(int iParam0) // Position - 0x148C6 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1896762.f_365 = iParam0;
	return;
}

BOOL func_492(Hash hParam0) // Position - 0x148D7 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
	
		default:
		
	}

	return 0;
}

Hash func_493(Hash hParam0, BOOL bParam1) // Position - 0x14904 Hash - 0xBBDA5425 ^0x74EA7EFE
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

void func_494(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x149A6 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_92(iParam0))
		return;

	num = func_225(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[num /*23*/].f_3, bParam1);
	return;
}

void func_495(int iParam0, int iParam1, Hash hParam2, Hash hParam3) // Position - 0x149EF Hash - 0x3169A239 ^0x47E831EC
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
		
			if (hParam2 != 0 && hParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = hParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = hParam3;
			}
		
			return;
		}
	}

	func_589(iParam0, iParam1, hParam2, hParam3);
	return;
}

int func_496(int iParam0) // Position - 0x14A8D Hash - 0xD52E0195 ^0x6C5F51BC
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

BOOL func_497(int iParam0) // Position - 0x14AD9 Hash - 0x8858DE32 ^0x8858DE32
{
	return iParam0 > -1 && iParam0 < 180;
}

void func_498(var uParam0, int iParam1) // Position - 0x14AEF Hash - 0x49A512C1 ^0x5081D805
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_590(uParam0, 1);
	func_591(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

int func_499() // Position - 0x14B2B Hash - 0xEEC80C47 ^0xEEC80C47
{
	if (Global_1292143.f_459.f_1548 >= 40 || Global_1292143.f_459.f_1548 < 0)
		Global_1292143.f_459.f_1548 = 0;

	return Global_1292143.f_459.f_1548;
}

void func_500(int iParam0) // Position - 0x14B6A Hash - 0x91140DCF ^0x91140DCF
{
	if (iParam0 >= 40 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1548 = iParam0;
	return;
}

int func_501() // Position - 0x14B93 Hash - 0x3F0702A6 ^0x3F0702A6
{
	if (Global_1292143.f_459.f_1549 >= 10 || Global_1292143.f_459.f_1549 < 0)
		Global_1292143.f_459.f_1549 = 0;

	return Global_1292143.f_459.f_1549;
}

void func_502(int iParam0) // Position - 0x14BD2 Hash - 0x2263858C ^0x2263858C
{
	if (iParam0 >= 10 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1549 = iParam0;
	return;
}

BOOL func_503() // Position - 0x14BFB Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

void func_504(Hash hParam0, int iParam1) // Position - 0x14C0A Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

Hash func_505(Hash hParam0, int iParam1) // Position - 0x14C1D Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_292(hParam0, 0))
		return 0;

	num = func_375(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_293(hParam0, 1399091007))
	{
		func_592(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_506(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x14C97 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_456(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_507(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x14CBE Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_508(Hash hParam0) // Position - 0x14CF9 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_509(int iParam0) // Position - 0x14D14 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_510(Hash hParam0) // Position - 0x14D35 Hash - 0xB8EC44B7 ^0x72487142
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

int func_511(var uParam0, int iParam1) // Position - 0x14E18 Hash - 0x6AC2726E ^0xDB215040
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

int func_512(Hash hParam0) // Position - 0x14E55 Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_446(hParam0);

	switch (hash)
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

int func_513(Hash hParam0, BOOL bParam1) // Position - 0x14EC2 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_593(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_594(&unk, func_449(false));

	if (!func_595(&unk, &num, &num2, false))
		return 0;

	func_509(num);
	return num2;
}

int func_514(Hash hParam0, Hash hParam1) // Position - 0x14F21 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_444(func_313(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

struct<4> func_515(Hash hParam0, BOOL bParam1) // Position - 0x14F4D Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_318(hParam0, bParam1, 0) };
	return func_319(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_516() // Position - 0x14F72 Hash - 0x4C1900E6 ^0x4C1900E6
{
	return func_531() == 4;
}

Player func_517(int iParam0) // Position - 0x14F80 Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_596(iParam0))
		return func_597(iParam0) % 32;

	return Global_1295666;
}

BOOL func_518(int iParam0) // Position - 0x14FA1 Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_387(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_519(int iParam0, int iParam1, int iParam2) // Position - 0x14FC9 Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_381(iParam1, 1);
	num2 = func_387(iParam0, 1);
	num3 = func_383(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_598(num4, 1);
	
		if (!func_599(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_600(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_601(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_602(num6))
		{
		}
		else
		{
			num7 = func_603(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_604(num6);
			}
		}
	}

	return 1;
}

BOOL func_520(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x151BA Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_521(int iParam0, int iParam1) // Position - 0x151C8 Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_518(iParam0))
		return false;

	if (!func_605(iParam1))
		return false;

	num = func_606(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_522(int iParam0) // Position - 0x15208 Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_607(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_523(int iParam0, var uParam1, var uParam2) // Position - 0x15244 Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_518(iParam0))
		return false;

	if (!func_380(iParam0.f_1))
		return false;

	if (!func_608(iParam0.f_2))
		return false;

	return true;
}

BOOL func_524(int iParam0, int iParam1, int iParam2) // Position - 0x1527B Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_381(iParam1, 1);
	num2 = func_387(iParam0, 1);
	num3 = func_383(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_598(num4, 1);
	
		if (!func_599(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_600(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_609(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_602(num6))
		{
		}
		else if (!func_610(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_603(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_611(num6);
			}
		}
	}

	func_612(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_525(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x154A9 Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_605(iParam0))
		return;

	num = func_606(iParam0, 1);

	if (!func_518(iParam1))
		return;

	if (!func_380(iParam2))
		return;

	if (!func_608(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_526(int iParam0) // Position - 0x15528 Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_605(iParam0))
		return;

	num = func_606(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

void func_527(int iParam0) // Position - 0x1557D Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_528(int iParam0) // Position - 0x1558F Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_529(BOOL bParam0) // Position - 0x155A4 Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_530(int iParam0) // Position - 0x155B9 Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_531() // Position - 0x155E7 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_532(BOOL bParam0) // Position - 0x1561A Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_613(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_533(int iParam0) // Position - 0x15641 Hash - 0x79178C2A ^0x504B0630
{
	if (!func_614(iParam0))
		return false;

	return Global_1939959.f_5[iParam0 /*11*/];
}

BOOL func_534(var uParam0, var uParam1) // Position - 0x15661 Hash - 0x1268D0E3 ^0x1268D0E3
{
	return func_615(uParam0, 5, 8);
}

Hash func_535(Hash hParam0, BOOL bParam1) // Position - 0x15674 Hash - 0x73CC7FFA ^0x73CC7FFA
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_539(i, true, false);
	
		if (!func_315(hParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_540(unk[j /*2*/]))
				{
					if (!bParam1 || func_378(unk[j /*2*/], false, true, true) > 0)
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

Hash func_536(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15707 Hash - 0x2596799 ^0x2596799
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
		hash3 = func_539(i, false, true);
	
		if (!func_315(hParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_484(unk3[j /*2*/]))
				{
					if (!bParam1 || func_378(unk3[j /*2*/], false, true, true) > 0)
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

BOOL func_537(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x15866 Hash - 0x5E278D9E ^0x9ED660B8
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_444(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_354() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_616(hParam0, hParam1, &unk, &num) || num < 1)
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

BOOL func_538(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x158F4 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_292(hParam0, 0))
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

Hash func_539(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15978 Hash - 0xC67FD48A ^0x72A5971A
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

BOOL func_540(Hash hParam0) // Position - 0x15A14 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_446(hParam0) == 1946043663;
}

BOOL func_541(Hash hParam0) // Position - 0x15A28 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_375(hParam0) == joaat("WEAPON");
}

int func_542(int iParam0) // Position - 0x15A3C Hash - 0xF00685F3 ^0x39EB3A7D
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

BOOL func_543(Hash hParam0) // Position - 0x15A6D Hash - 0x1B551CF7 ^0x61950700
{
	return func_446(hParam0) == 1868067663;
}

int func_544(int iParam0) // Position - 0x15A81 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_545(int iParam0) // Position - 0x15A9A Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_544(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

Ped func_546(int iParam0) // Position - 0x15AD2 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_544(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_547(Entity eParam0) // Position - 0x15AFE Hash - 0xF5A7D53A ^0xBECE42FF
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

int func_548(Hash hParam0, int iParam1) // Position - 0x15B61 Hash - 0x7A1C2599 ^0xFF9B5634
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

struct<10> func_549(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x15BAB Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_550(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x15C7F Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_551(int iParam0, int iParam1) // Position - 0x15CA0 Hash - 0x3644D28E ^0x6DB2088F
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

Hash func_552(Hash hParam0) // Position - 0x15CE3 Hash - 0x5FB59AC3 ^0xF8EA047B
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

int func_553(Hash hParam0) // Position - 0x16055 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_293(hParam0, 1064293907))
		return 2;
	else if (func_293(hParam0, -1218707194))
		return 1;
	else if (func_293(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_554(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1609A Hash - 0x97BDF54F ^0xE45E1733
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_292(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

int func_555(int iParam0) // Position - 0x160EE Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

struct<4> func_556() // Position - 0x1610F Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_557() // Position - 0x1611B Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_617(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

Hash func_558(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x16138 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_292(hParam0, 0))
		return 0;

	if (!bParam7 && func_514(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_319(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_456(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_456(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_559(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x161B7 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_456(false);
	*panParam1 = { func_319(hParam0, func_449(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_560(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x161FC Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_561(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1622F Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_456(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_562() // Position - 0x16269 Hash - 0xD8853F79 ^0x219536E8
{
	int value;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
		return 604800;

	value = 604800;

	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &value))
		return 604800;

	return value;
}

BOOL func_563(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x162AD Hash - 0x67DCAB3C ^0x67DCAB3C
{
	if (hParam0 == 0)
		return false;

	if (!func_306(hParam0, hParam1, false))
		return false;

	if (func_289(iParam2, 2))
		if (func_307(hParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return false;

	if (func_289(iParam2, 8))
		return func_618(hParam0, hParam1);

	return true;
}

BOOL func_564(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20) // Position - 0x1630D Hash - 0xCC3F3D79 ^0x430250A2
{
	if (hParam19 != 541670136)
		return false;

	if (!func_619(uParam1))
		return false;

	if (!func_580(piParam0, hParam19))
		return false;

	if (func_620(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_582(piParam0, bParam20);
}

BOOL func_565(int* piParam0) // Position - 0x16361 Hash - 0xF95E1119 ^0x322602AD
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_200(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_566(var uParam0) // Position - 0x16393 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*uParam0 == 0 && uParam0->f_1 == 0 || uParam0->f_1 == -889271554 && uParam0->f_2 == 0 && uParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_567(Hash hParam0) // Position - 0x163D9 Hash - 0xA7C375F ^0xA7C375F
{
	Hash hash;

	hash = func_313(hParam0);

	if (func_444(hash, 2))
		return true;

	return false;
}

BOOL func_568(int* piParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x163F8 Hash - 0x48FFE57F ^0x48FFE57F
{
	int num;
	var unk;
	var unk2;
	int i;
	var unk4;
	Hash hash;
	var unk85;
	var unk89;

	if (!func_444(hParam1, 2))
		return 0;

	unk2 = 1;
	unk4 = 16;
	func_621(hParam1, &unk2, &unk, &unk4, &num);

	if (func_289(iParam4, 8) && !func_622(hParam1, hParam2, iParam3))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk4[i /*5*/].f_1 == joaat("SLOTID_NONE"))
		{
			hash = unk4[i /*5*/];
		
			if (func_289(iParam4, 4))
				if (!func_571(piParam0, hash, unk85, unk89, hParam2, iParam3 * unk4[i /*5*/].f_4, true, true))
					return 0;
		}
	}

	return 1;
}

BOOL func_569(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x164A3 Hash - 0x7947EF49 ^0x975F946
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_455(uParam1, &unk, true, false, -1))
		return false;

	if (!func_560(hParam0, func_446(unk.f_4), hParam5))
		return false;

	return true;
}

BOOL func_570(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x164F4 Hash - 0xAE4FAB93 ^0xAE4FAB93
{
	if (func_289(iParam2, 1))
		if (!func_420(hParam0))
			return false;

	if (func_289(iParam2, 2))
		if (func_416(hParam0, hParam1, true))
			return false;

	return true;
}

BOOL func_571(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1652F Hash - 0xFE04F182 ^0x2B0693EE
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2))
		return false;

	unk.f_4 = hParam6;
	unk = { uParam2 };
	num = func_558(hParam1, uParam2, hParam6, true, !bParam10, false);
	num2 = func_623(hParam1, &unk, !bParam10, true);

	if (bParam9)
		num3 = 1;
	else
		func_624(hParam1, hParam7, &num3, false);

	num4 = func_625(piParam0, hParam1) * num3;
	num4 > 0;

	if (num2 >= 0)
	{
		num5 = num2 - (num + num4);
		num6 = iParam8 * num3;
	
		if (num6 > num2)
			num6 = num2;
	
		if (num5 <= 0)
			return false;
		else if (num6 - num5 >= num3)
			return false;
	}

	return true;
}

BOOL func_572(int* piParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x165E6 Hash - 0xB3A38359 ^0x1EE25720
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;
	var unk3;

	if (func_303(hParam1, true) && !func_304(hParam1, true))
	{
		if (Global_1915656.f_20644)
			func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
	
		return 0;
	}

	if (hParam2 == -570078785)
	{
		num = func_342(hParam1, -570078785, true, false, true, 0);
		num == 0;
		num2 = num * iParam3;
	
		if (!func_310(num2 + func_627(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", num2 / 100));
		
			return 0;
		}
	}
	else if (hParam2 == -915411861)
	{
		num3 = func_342(hParam1, -915411861, true, false, true, 0);
		num3 == 0;
		num4 = num3 * iParam3;
	
		if (!func_311(num4 + func_627(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_626("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam2 == 997808187)
	{
		return 1;
	}

	if (func_444(func_313(hParam1), 2))
		if (!func_628(func_313(hParam1), iParam3, hParam2, &unk, true))
			return 0;
	else if (func_292(hParam1, 0))
		if (!func_312(hParam1, iParam3, hParam2, &unk, &unk3, false, true, false))
			return 0;

	return 1;
}

int func_573(Hash hParam0) // Position - 0x1672E Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_292(hParam0, 0))
		return 0;

	category = func_446(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_574(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x1675D Hash - 0x113CD144 ^0x113CD144
{
	return func_629(&uParam0, hParam4, panParam5, bParam6, iParam7);
}

BOOL func_575(int* piParam0, Any* panParam1, Hash hParam2, BOOL bParam3, int iParam4) // Position - 0x16773 Hash - 0x3AC44E6C ^0xC544632E
{
	var unk;
	int num;

	unk = 15;

	if (!func_317(panParam1->f_8, panParam1->f_13, &unk, &num, true, false))
		return false;

	switch (num)
	{
		case 1:
			return func_630(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 2:
			return func_631(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 3:
			return func_632(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 4:
			return func_633(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 5:
			return func_634(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 6:
			return func_635(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 7:
			return func_636(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 8:
			return func_637(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 9:
			return func_638(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 10:
			return func_639(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 11:
			return func_640(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 12:
			return func_641(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 13:
			return func_642(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 14:
			return func_643(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 15:
			return func_644(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		default:
		
	}

	return false;
}

BOOL func_576(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8) // Position - 0x1691B Hash - 0x2426DBFB ^0x2426DBFB
{
	if (!func_465(piParam0, hParam1, uParam2, hParam6, hParam7, 1, iParam8, true))
		return false;

	if (func_289(iParam8, 4) && func_451(hParam1, &uParam2, hParam6, true, false))
		return false;

	return true;
}

int func_577(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x1695F Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_629(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

int func_578(Any* panParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1698D Hash - 0x85BC54D5 ^0xA60D4F06
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

	if (!func_455(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == bParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_375(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_645(*panParam0, true, false) };
		unk15.f_10 = bParam1;
		num = func_646(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_647(*panParam0, true, false) };
		unk44.f_10 = bParam1;
		num = func_648(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_649(*panParam0, true, false) };
		unk70.f_10 = bParam1;
		num = func_650(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_651(&unk, false) };
		unk88.f_10 = bParam1;
		num = func_652(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_579(Hash hParam0, Any* panParam1, int iParam2) // Position - 0x16AD0 Hash - 0xF56A9866 ^0x83AC84D6
{
	if (panParam1->f_9 < 1)
		return false;

	if (!func_292(panParam1->f_8, 0) && !func_444(func_313(panParam1->f_8), 2))
		return false;

	if (func_289(iParam2, 128))
		if (!func_444(func_313(panParam1->f_8), 2))
			if (func_446(panParam1->f_8) == 0)
				return false;

	if (func_289(iParam2, 16))
		if (!func_653(hParam0, panParam1))
			return false;

	return true;
}

BOOL func_580(int* piParam0, Hash hParam1) // Position - 0x16B50 Hash - 0x8DE7BD5B ^0x83B9042B
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_467(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_476(piParam0))
			return false;
	
		if (!func_467(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_581(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x16BB3 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_582(int* piParam0, BOOL bParam1) // Position - 0x16BCA Hash - 0x5B4FA9A9 ^0x92224A48
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_476(piParam0);

	return true;
}

BOOL func_583(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x16BEB Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

Hash func_584(int iParam0) // Position - 0x16C02 Hash - 0xB8EC44B7 ^0xFD8B1C5A
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

Hash func_585(int iParam0) // Position - 0x16D9B Hash - 0xFBE6ACAA ^0xC8FB295B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

Hash func_586(int iParam0) // Position - 0x16DC7 Hash - 0xB8EC44B7 ^0xFB7D0806
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

BOOL func_587() // Position - 0x16F60 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20643;
}

BOOL func_588(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x16F6F Hash - 0x13FC6F30 ^0x85A59BCD
{
	Player player;
	Ped ped;
	BOOL isEntityDead;
	BOOL isPedIncapacitated;
	int num;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
		return 0;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-496459706))
		return 0;

	player = Global_1295666.f_149[Global_1295666];
	ped = Global_1295666.f_3;
	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(ped);

	if (isEntityDead || isPedIncapacitated)
	{
		if (!bParam5)
			return 0;
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
		
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
				return 0;
		}
	
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(player))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(ped, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (!bParam1)
	{
		if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
			return 0;
	
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
			return 0;
	}

	if (func_654())
		return 0;

	if (Global_15)
		return 0;

	if (!bParam2 && Global_1940085.f_10 || Global_1940085.f_11 || Global_1940085.f_12 || Global_1940085.f_13)
		return 0;

	if (!bParam3)
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (Global_1235687.f_9479 != -1)
			return 0;
	
		if (Global_1138673[num /*56*/].f_34 & 1 != 0 && Global_1138673[num /*56*/].f_34 & 2 == 0)
			return 0;
	
		if (Global_1140770.f_293)
			return 0;
	
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
			return 0;
		else if (Global_1572887.f_72.f_40 > 15)
			return 0;
	}

	if (!bParam8)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
				return 0;
		
			if (Global_1048581)
				return 0;
		
			if (Global_1048585)
				return 0;
		}
	}

	return 1;
}

void func_589(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17195 Hash - 0xBC161045 ^0xD3B33F74
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

	func_655(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

void func_590(var uParam0, int iParam1) // Position - 0x17271 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_591(var uParam0, int iParam1) // Position - 0x17282 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_592(Hash hParam0, var uParam1, var uParam2) // Position - 0x17297 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_593(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x174A3 Hash - 0x90CCF0F4 ^0xA5F3D799
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

void func_594(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x17581 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_595(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1759C Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_456(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_596(int iParam0) // Position - 0x175C1 Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_381(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_597(int iParam0) // Position - 0x175E8 Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_381(iParam0, 1);

	if (func_596(iParam0))
		return num - 2;
	else if (func_656(iParam0))
		return num - 130;
	else if (func_657(iParam0))
		return num - 166;
	else if (func_658(iParam0))
		return num - 167;
	else if (func_659(iParam0))
		return num - 172;
	else if (func_660(iParam0))
		return num - 180;
	else if (func_661(iParam0))
		return num - 150;

	return -1;
}

int func_598(int iParam0, int iParam1) // Position - 0x17682 Hash - 0x40BB17AB ^0x40BB17AB
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
	
		case joaat("MDEFENSE__BULLET"):
			return 49;
	
		case -1936069272:
			return 47;
	
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
	
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
	
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
	
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
	
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
	
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
	
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
	
		case -1575020444:
			return 94;
	
		case -1572802418:
			return 71;
	
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
	
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
	
		case -1349331938:
			return 43;
	
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
	
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
	
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
	
		case joaat("MHORSE__DEFENSE"):
			return 56;
	
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
	
		case joaat("MDEFENSE__RANGED"):
			return 46;
	
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
	
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
	
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
	
		case joaat("MDEFENSE__FIRE"):
			return 52;
	
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
	
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
	
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
	
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
	
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
	
		case -377364039:
			return 60;
	
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
	
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
	
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
	
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
	
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
	
		case joaat("MSKILL__PERCEPTION"):
			return 83;
	
		case -1:
			return 0;
	
		case 66478954:
			return 93;
	
		case 91687087:
			return 79;
	
		case joaat("MSKILL__DISTILLER"):
			return 90;
	
		case 194431787:
			return 61;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
	
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
	
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
	
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
	
		case joaat("MSKILL__DIVINATION"):
			return 89;
	
		case 410940916:
			return 92;
	
		case 447408404:
			return 81;
	
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
	
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
	
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
	
		case joaat("MSKILL__INTUITION"):
			return 88;
	
		case joaat("MDAMAGE__MELEE"):
			return 30;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
	
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
	
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
	
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
	
		case 874892169:
			return 95;
	
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
	
		case 920214733:
			return 91;
	
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
	
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
	
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
	
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
	
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
	
		case joaat("MDEFENSE__MELEE"):
			return 45;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
	
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
	
		case 1356998909:
			return 80;
	
		case joaat("MSKILL__FOCUS"):
			return 82;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
	
		case 1546732394:
			return 34;
	
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
	
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
	
		case joaat("MDAMAGE__BULLETS"):
			return 32;
	
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
	
		case 1727267699:
			return 69;
	
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
	
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
	
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
	
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
	
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
	
		case joaat("MDAMAGE__THROWN"):
			return 31;
	
		case joaat("MSKILL__AWARENESS"):
			return 84;
	
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
	
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
	
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
	
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
	
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
	
		case joaat("MSKILL__POTENTIAL"):
			return 87;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_599(int iParam0) // Position - 0x17ABB Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_598(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_600(int iParam0) // Position - 0x17AE3 Hash - 0xD58635C ^0x563C2D0E
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_662(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_601(int iParam0) // Position - 0x17B12 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_599(iParam0))
		return;

	num = func_598(iParam0, 1);

	if (!func_663(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_664(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_665(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] > 0)
		return;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] != Global_1156111.f_2169[num /*205*/])
		{
		}
		else
		{
			Global_1156111.f_47561[num2 /*25*/][i] = -1;
			Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 - 1;
			Global_1156111.f_47561[num2 /*25*/][i] = Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23];
			Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = -1;
			break;
		}
	}

	return;
}

BOOL func_602(int iParam0) // Position - 0x17CF1 Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_603(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_603(int iParam0, int iParam1) // Position - 0x17D19 Hash - 0x49B3A5C3 ^0x49B3A5C3
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
	
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
	
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
	
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
	
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
	
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
	
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
	
		case -1730553768:
			return 3;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
	
		case -1651690657:
			return 65;
	
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
	
		case -1583192324:
			return 66;
	
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
	
		case -1486292178:
			return 67;
	
		case joaat("LASSO_IMMUNITY"):
			return 5;
	
		case joaat("DISABLE_JUMPING"):
			return 45;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
	
		case -1026481003:
			return 6;
	
		case joaat("TAGGING_IMMUNITY"):
			return 13;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
	
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
	
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
	
		case joaat("CONFUSION_EFFECT"):
			return 14;
	
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
	
		case -350459285:
			return 68;
	
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
	
		case -199042163:
			return 60;
	
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
	
		case -1:
			return 0;
	
		case joaat("TRAIL_EFFECT"):
			return 17;
	
		case joaat("POISON_EFFECT"):
			return 20;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
	
		case joaat("DISORIENT_EFFECT"):
			return 18;
	
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
	
		case joaat("WOUND_EFFECT"):
			return 15;
	
		case 718630298:
			return 56;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
	
		case joaat("NED_KELLY_BASE"):
			return 21;
	
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
	
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
	
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
	
		case 1037859088:
			return 51;
	
		case 1066450193:
			return 54;
	
		case 1159158432:
			return 62;
	
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
	
		case 1242495215:
			return 9;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS") /* collision: RCEXO_RSC2_LIJ_1 */:
			return 63;
	
		case 1341326366:
			return 58;
	
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
	
		case 1398483650:
			return 50;
	
		case joaat("PULSE_REPOST_STATE"):
			return 38;
	
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
	
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
	
		case joaat("DRAIN_EFFECT"):
			return 16;
	
		case 1898374676:
			return 49;
	
		case 2067881273:
			return 8;
	
		case joaat("DISABLE_DROWNING"):
			return 47;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_604(int iParam0) // Position - 0x1802B Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_667();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_666();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_670(func_669(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_663(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_663(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_9(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(ped, 0f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, true);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_671();
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 18);
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, -1f);
			break;
	
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(ped, 0, true);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, false);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	}

	return;
}

BOOL func_605(int iParam0) // Position - 0x1823A Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_606(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_606(int iParam0, int iParam1) // Position - 0x18261 Hash - 0xD3D45784 ^0xD3D45784
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
	
		case -1038992817:
			return 5;
	
		case -950874556:
			return 4;
	
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
	
		case 0:
			return 0;
	
		case 1938826026:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_607(int iParam0) // Position - 0x182BE Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_672(iParam0);
	unk.f_3 = 1065353216;
	unk.f_5 = -1;
	unk.f_6 = 3;
	unk.f_6.f_1 = -1;
	unk.f_6.f_1.f_3 = -1;
	unk.f_6.f_1.f_3.f_3 = -1;
	unk.f_17 = 5;
	unk32.f_3 = 1065353216;
	unk32.f_5 = -1;
	unk32.f_6 = 3;
	unk32.f_6.f_1 = -1;
	unk32.f_6.f_1.f_3 = -1;
	unk32.f_6.f_1.f_3.f_3 = -1;
	unk32.f_17 = 5;
	num2 = -1;

	for (i = 0; i < Global_1156111.f_35859.f_11700; i = i + 1)
	{
		num3 = func_387(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_673(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_674(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_608(int iParam0) // Position - 0x18402 Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_609(int iParam0) // Position - 0x18420 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_599(iParam0))
		return;

	num = func_598(iParam0, 1);

	if (!func_663(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_664(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_665(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] + 1;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] == Global_1156111.f_2169[num /*205*/])
			return;
	}

	Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = Global_1156111.f_2169[num /*205*/];
	Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 + 1;
	return;
}

BOOL func_610(int iParam0) // Position - 0x18575 Hash - 0xDE817292 ^0x67C85499
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_675(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_611(int iParam0) // Position - 0x1859E Hash - 0xE1E3399D ^0xAAA920BB
{
	Ped ped;
	Player player;
	int num;
	int entityBoneIndexByName;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_667();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_666();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_669(iParam0);
			func_677(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_663(16);
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_663(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_9(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_669(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_676(iParam0, 0));
			func_677(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_676(iParam0, 1));
			func_677(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_676(iParam0, 2));
			func_677(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_676(iParam0, 3));
			func_677(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "focusfire");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(ped, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, false);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_678();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_669(iParam0);
			func_677(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, true);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(player, 25);
			PLAYER::_0x263D69767F76059C(player, 2);
			break;
	}

	return;
}

void func_612(int iParam0) // Position - 0x18839 Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_679(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_680(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

BOOL func_613(BOOL bParam0) // Position - 0x18883 Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

BOOL func_614(int iParam0) // Position - 0x18899 Hash - 0xBC12E9CA ^0xBC12E9CA
{
	if (iParam0 < 0 || iParam0 >= 3)
		return false;

	return true;
}

BOOL func_615(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x188B7 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_12(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_681(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_616(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x188F2 Hash - 0x8EAA10FC ^0x9E3F883B
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_444(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_682(hParam0, hParam1, &unk))
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

int func_617(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18976 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_683(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_456(bParam1), hParam0, bParam3);
}

BOOL func_618(Hash hParam0, Hash hParam1) // Position - 0x189A9 Hash - 0xB71B0B73 ^0x64089E1E
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_423(hParam0, -570078785, false, true);
		num == 0;
	
		if (!func_310(num))
		{
			if (Global_1915656.f_20644)
				func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_344(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_423(hParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_311(num2))
		{
			if (Global_1915656.f_20644)
				func_626("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_308(hParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_619(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x18A63 Hash - 0x195DA727 ^0x43C01C6A
{
	if (!func_413(uParam0.f_17))
		return false;

	return true;
}

BOOL func_620(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x18A7C Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

int func_621(Hash hParam0, Any anParam1, var uParam2, var uParam3, var uParam4) // Position - 0x18A93 Hash - 0xBDBB6885 ^0xBDBB6885
{
	Hash key;
	Hash outData;
	int i;
	int j;
	int num;

	if (!func_444(hParam0, 2))
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
				if (func_292(outData, 0))
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

BOOL func_622(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x18B78 Hash - 0x35FADD37 ^0x52F2BABB
{
	var unk;
	var unk48;

	unk.f_4 = 15;
	unk.f_36 = 10;
	func_682(hParam0, hParam1, &unk);

	if (hParam1 == -570078785)
	{
		unk.f_3 == 0;
	
		if (!func_310(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_344(unk.f_3 * iParam2)));
		
			return false;
		}
	}
	else if (hParam1 == -915411861)
	{
		unk.f_3 == 0;
	
		if (!func_311(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_626("SHOP_H_TOO_POOR");
		
			return false;
		}
	}
	else if (hParam1 == 997808187)
	{
		return true;
	}

	if (!func_628(hParam0, iParam2, hParam1, &unk48, true))
		return false;

	return true;
}

int func_623(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18C44 Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_292(hParam0, 0))
	{
		if (func_444(func_313(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_375(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_514(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_456(bParam3), hParam0);
}

BOOL func_624(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x18CB8 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_292(hParam0, 0) && !func_444(func_313(hParam0), 2))
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

int func_625(int* piParam0, Hash hParam1) // Position - 0x18D17 Hash - 0xD6C7A024 ^0x8CD358DF
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

void func_626(const char* sParam0) // Position - 0x18D81 Hash - 0x6D26E8EF ^0x36AA660D
{
	Global_1915656.f_22470 = func_239(sParam0, 10000, 0, 0, 0, true);
	return;
}

int func_627(int* piParam0, Hash hParam1) // Position - 0x18D9D Hash - 0xD6C7A024 ^0x8CD358DF
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
				num = num + (func_342(itemInfo.f_8, hParam1, true, false, true, 0) * itemInfo.f_9);
			}
		}
	}

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_628(Hash hParam0, int iParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x18E16 Hash - 0xC79E0D58 ^0xC79E0D58
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;

	unk = 15;

	if (!func_684(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam4 && func_436(false) && !func_437();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_311(num2))
			goto 0xD9;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_310(num2))
		{
		}
		else
		{
			num3 = func_378(unk[i /*2*/], false, !flag, false);
		
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

BOOL func_629(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x18EFC Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_456(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return 0;

	if (!func_561(&outGuid, panParam2, bParam3, false, iParam4))
		return 0;

	return 1;
}

BOOL func_630(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x18F4A Hash - 0x6C19C4AE ^0xD83B353E
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_685(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4, iParam5);
}

BOOL func_631(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x18F78 Hash - 0x8B27BE2E ^0xAADA8B60
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_632(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x18FAF Hash - 0xD4CDEBBB ^0xBF2724AE
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_633(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x18FEF Hash - 0xD685F3D ^0x43E0AB59
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_634(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x19038 Hash - 0xDF565364 ^0x91E17214
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_635(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1908A Hash - 0x34514D80 ^0x4B6EF0F8
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_636(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x190E5 Hash - 0xCAE539AC ^0xECCA6C83
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_637(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x19149 Hash - 0x56AD96CC ^0x971EFE86
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_638(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x191B7 Hash - 0x1B3CBC5E ^0x508721F5
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_639(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1922E Hash - 0xA29DCDA ^0xEDD5D2BE
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_640(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x192AE Hash - 0x4B3D6141 ^0xF7C4BBFB
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_641(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x19337 Hash - 0xCE26321D ^0xE0369832
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_642(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x193C9 Hash - 0x72FA62DD ^0x50977A79
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_643(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x19464 Hash - 0xCE2A63CA ^0x257C4997
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_644(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x19508 Hash - 0x9E474A42 ^0x2D85E611
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
	return func_685(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

struct<29> func_645(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x195B5 Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_456(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_651(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_646(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x19650 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_653(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_687(func_686(num, hParam0, panParam1), num, panParam1);
	else
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_647(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x196BA Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_456(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_651(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_648(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1973D Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_687(func_689(num, hParam0, panParam1), num, panParam1);
	else
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_649(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1978D Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_456(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_651(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_650(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x19802 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_653(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_687(func_581(num, hParam0, panParam1), num, panParam1);
	else
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

struct<17> func_651(var uParam0, BOOL bParam1) // Position - 0x1986C Hash - 0x76921103 ^0xA9DF955B
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
		unk.f_15 = func_514(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_556() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_652(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x198ED Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_653(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_687(func_583(num, hParam0, panParam1), num, panParam1);
	else
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

BOOL func_653(Hash hParam0, Any* panParam1) // Position - 0x19957 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_690(panParam1->f_8, hParam0, num, 2048) || func_690(panParam1->f_8, hParam0, num, 32768) || func_690(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_690(panParam1->f_8, hParam0, num, 4) || func_690(panParam1->f_8, hParam0, num, 256) || func_690(panParam1->f_8, hParam0, num, 65536) || func_690(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_690(panParam1->f_8, hParam0, num, 1) || func_690(panParam1->f_8, hParam0, num, 8) || func_690(panParam1->f_8, hParam0, num, 65536) || func_690(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_690(panParam1->f_8, hParam0, num, 1) || func_690(panParam1->f_8, hParam0, num, 16) || func_690(panParam1->f_8, hParam0, num, 2) || func_690(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_690(panParam1->f_8, hParam0, num, 8) || func_690(panParam1->f_8, hParam0, num, 4096) || func_690(panParam1->f_8, hParam0, num, 256) || func_690(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_654() // Position - 0x19B2D Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

void func_655(int iParam0) // Position - 0x19B49 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_691(&(iParam0->f_4));
	return;
}

BOOL func_656(int iParam0) // Position - 0x19B6C Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_381(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_657(int iParam0) // Position - 0x19B94 Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_381(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_658(int iParam0) // Position - 0x19BBC Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_381(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_659(int iParam0) // Position - 0x19BE4 Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_381(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_660(int iParam0) // Position - 0x19C0C Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_381(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_661(int iParam0) // Position - 0x19C34 Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_381(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_662(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x19C5C Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_692(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_663(int iParam0) // Position - 0x19C92 Hash - 0xCFB57BFC ^0xD6F1E06
{
	if (iParam0 <= -1 || iParam0 >= 21)
		return false;

	if (iParam0 == 0)
		return true;

	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156111.f_2166), iParam0))
		return true;

	if (Global_1156111.f_2165 >= 21)
		return false;

	Global_1156111.f_2143[Global_1156111.f_2165] = iParam0;
	Global_1156111.f_2165 = Global_1156111.f_2165 + 1;
	return true;
}

BOOL func_664(int iParam0) // Position - 0x19D01 Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_665(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_665(int iParam0, int iParam1) // Position - 0x19D28 Hash - 0xAF8796DC ^0xAF8796DC
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
	
		case -1016837116:
			return 5;
	
		case 0:
			return 0;
	
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
	
		case joaat("NEARBY_ALLIES"):
			return 2;
	
		case 1416591065:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_666() // Position - 0x19D85 Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_285(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_667() // Position - 0x19DE7 Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_668(int iParam0) // Position - 0x19E17 Hash - 0x3CF25BB7 ^0xC06C2B19
{
	switch (iParam0)
	{
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
	
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
	
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
	
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
	
		default:
		
	}

	return "";
}

int func_669(int iParam0) // Position - 0x19E5E Hash - 0x21FAF347 ^0xA1AE9E4F
{
	switch (iParam0)
	{
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
	
		default:
		
	}

	return 0;
}

void func_670(int iParam0) // Position - 0x19E99 Hash - 0x2CE3A2A0 ^0xF0457356
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1203871[i /*8*/].f_5 == iParam0)
		{
			Global_1203871[i /*8*/].f_7 = 1;
			Global_1203871[i /*8*/].f_5 = 0;
		}
	}

	return;
}

void func_671() // Position - 0x19ED9 Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_672(int iParam0) // Position - 0x19EF9 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_605(iParam0))
		return -1;

	num = func_606(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_673(int iParam0, int iParam1) // Position - 0x19F28 Hash - 0xB2431B7B ^0xEC29640E
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_518(iParam0))
		return false;

	num = func_387(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_520(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_606(num2, 1) /*3*/];
		unk = { func_674(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_517(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_517(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_693())
				return false;
		
			return true;
	
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
	
		case -1503245593:
			if (!Global_1956875.f_1716[8])
				return false;
		
			player = func_517(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_517(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_695(Global_1295666.f_149[player]))
				return false;
		
			if (!func_696(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_693() && !func_694())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_674(int iParam0) // Position - 0x1A1FD Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_387(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_675(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x1A221 Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_692(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_676(int iParam0, int iParam1) // Position - 0x1A257 Hash - 0x41B84FE3 ^0x36408D73
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
			
				case 1:
					return "CP_CHEST";
			
				case 2:
					return "CP_R_UpperArm";
			
				case 3:
					return "CP_L_UpperArm";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_677(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1A2AF Hash - 0x4DFFD3F3 ^0xFBF31414
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203871[i /*8*/]) && !Global_1203871[i /*8*/].f_6)
		{
			Global_1203871[i /*8*/].f_5 = iParam0;
			Global_1203871[i /*8*/].f_1 = iParam1;
			Global_1203871[i /*8*/].f_2 = iParam2;
			Global_1203871[i /*8*/].f_3 = iParam3;
			Global_1203871[i /*8*/].f_4 = iParam4;
			Global_1203871[i /*8*/].f_6 = 1;
			return;
		}
	}

	return;
}

void func_678() // Position - 0x1A334 Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_679(int iParam0) // Position - 0x1A359 Hash - 0x8DB6B3B7 ^0x2797838
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_680(int iParam0) // Position - 0x1A379 Hash - 0x8DB6B3B7 ^0x4A2C0761
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

int func_681(int iParam0, var uParam1) // Position - 0x1A399 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_697(iParam0);

	return -1;
}

BOOL func_682(Hash hParam0, Hash hParam1, Any anParam2) // Position - 0x1A3B3 Hash - 0x29542237 ^0x85ED2DB5
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

BOOL func_683(Hash hParam0) // Position - 0x1A3F3 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_684(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1A401 Hash - 0x583856CF ^0xF105F8D9
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_444(hParam0, 2))
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
		func_698(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_685(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x1A491 Hash - 0x40864787 ^0xC8FD8850
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_699(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1 * panParam1->f_9, &panParam5->[i /*42*/]))
			return false;
	}

	return func_700(piParam0, panParam1, panParam5, hParam2, bParam6, iParam7);
}

BOOL func_686(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1A50E Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

int func_687(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x1A525 Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_495(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_495(iParam1, 2, 0, 0);
	return -1;
}

int func_688(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x1A56E Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_495(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_689(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1A58A Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_690(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x1A5A1 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_285(iParam2, iParam3))
		return true;

	return false;
}

void func_691(var uParam0) // Position - 0x1A5B9 Hash - 0x58FD8C3D ^0x7E71AD66
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

BOOL func_692(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x1A614 Hash - 0xBD123D0 ^0xD5CDFAB
{
	int num;
	int num2;

	num = -178401592;
	num.f_1 = hParam0;
	num.f_2 = joaat("name");
	num.f_3 = 1;
	num.f_4 = hParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("name")))
	{
		*uParam2 = hParam0;
		uParam2->f_9 = hParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1), "", 64);
		TEXT_LABEL_APPEND_INT(&(uParam2->f_1), num2, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("TYPE"));
		uParam2->f_10.f_3 = func_701(num2);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &num, joaat("DEFAULT"));
				break;
		
			case 1:
				!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &num, joaat("DEFAULT"));
				break;
		
			case 2:
				!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &num, joaat("DEFAULT"));
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &num, joaat("min"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &num, joaat("min"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &num, joaat("min"));
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &num, joaat("max"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &num, joaat("max"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &num, joaat("max"));
				break;
		}
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		return true;
	}

	return false;
}

BOOL func_693() // Position - 0x1A835 Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

BOOL func_694() // Position - 0x1A843 Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_12(func_19(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_702(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_695(Player plParam0) // Position - 0x1A88E Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_703(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_704(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_696(int iParam0, Player plParam1) // Position - 0x1A8D3 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

int func_697(var uParam0, var uParam1) // Position - 0x1A8FF Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_705(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_698(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x1A92B Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_446(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_699(Hash hParam0, int iParam1, var uParam2) // Position - 0x1AB01 Hash - 0x373A2E12 ^0xF0869689
{
	var unk;
	int num;
	int num2;
	var unk6;
	int num3;
	int i;

	*uParam2 = hParam0;

	if (func_164(false))
	{
		num = func_421(func_18(), hParam0);
	
		if (num != 0)
		{
			unk = { func_448(true) };
			unk.f_4 = func_542(num);
			uParam2->f_1[0 /*4*/] = { func_319(hParam0, unk, unk.f_4, true) };
		
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
				return true;
		}
	}

	num2 = func_514(hParam0, joaat("DEFAULT"));

	if (num2 != 0)
	{
		unk6 = 10;
	
		if (!func_706(&unk6, &num3, hParam0, num2, iParam1, true) || num3 < 1)
			return false;
	
		for (i = 0; i < num3; i = i + 1)
		{
			uParam2->f_1[i /*4*/] = { func_319(hParam0, unk6[i /*6*/], unk6[i /*6*/].f_4, true) };
		
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[i /*4*/]))
				return false;
		}
	
		return true;
	}

	unk = { func_318(hParam0, true, 0) };
	uParam2->f_1[0 /*4*/] = { func_319(hParam0, unk, unk.f_4, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
		return false;

	return true;
}

BOOL func_700(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4, int iParam5) // Position - 0x1AC23 Hash - 0xA8760DB6 ^0xC89F5487
{
	if (hParam3 != 2113164098 && hParam3 != joaat("Sell") && hParam3 != joaat("use"))
		return false;

	if (!func_579(hParam3, panParam1, iParam5))
		return false;

	if (!func_580(piParam0, hParam3))
		return false;

	if (func_707(*piParam0, hParam3, panParam1, panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_582(piParam0, bParam4);
}

int func_701(int iParam0) // Position - 0x1AC95 Hash - 0xF3C27EA9 ^0xF3C27EA9
{
	int num;

	switch (iParam0)
	{
		case joaat("bool"):
			num = 2;
			break;
	
		case joaat("float"):
			num = 1;
			break;
	
		case joaat("int"):
			num = 0;
			break;
	}

	return num;
}

BOOL func_702(int iParam0) // Position - 0x1ACCB Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_703(Player plParam0) // Position - 0x1AD13 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_704(Player plParam0) // Position - 0x1AD30 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_708(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_709(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_705(int iParam0, var uParam1, Any* panParam2) // Position - 0x1ADB3 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_12(iParam0))
		return false;

	func_710(panParam2);

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

BOOL func_706(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1AEBE Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_514(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_711(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

BOOL func_707(int iParam0, Hash hParam1, Any* panParam2, Any* panParam3) // Position - 0x1AF2B Hash - 0xA2FF6405 ^0x9144FDD7
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam3, *panParam3);
}

void func_708(Player plParam0) // Position - 0x1AF44 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_709(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_709(Player plParam0) // Position - 0x1AFB0 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_710(Any* panParam0) // Position - 0x1AFEB Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_711(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x1B001 Hash - 0x8E6DB586 ^0xC3CF8308
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
	
		if (func_457(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_556() };
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

